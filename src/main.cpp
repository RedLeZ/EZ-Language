#include <filesystem>
#include <fstream>
#include <iostream>
#include <optional>
#include <sstream>
#include <string>
#include <unordered_map>
#include <unordered_set>

#include "util.h"
#include "diagnostics.h"
#include "bootstrap_listener.h"
#include "friends.h"
#include "codegen_c.h"
#include "interpreter.h"
#include "semantic.h"

#include "../generated/EZLanguageLexer.h"
#include "../generated/EZLanguageParser.h"
#include "antlr4-runtime.h"

using namespace antlr4;
namespace fs = std::filesystem;

static void printUsage(const std::string &binaryName)
{
    std::cerr << "Usage: " << binaryName << " <source.ez> [options]\n";
    std::cerr << "Options:\n";
    std::cerr << "  --plan           Print compile/link commands for friend modules\n";
    std::cerr << "  --build          Build friend objects and dylibs (.ezbuild)\n";
    std::cerr << "  --run            Interpret declarations/expressions/friend calls\n";
    std::cerr << "  --emit-c         Generate C code (.ezbuild/<base>.c) for int subset\n";
    std::cerr << "  --build-native   Generate + compile C to native exe (.ezbuild/<base>)\n";
    std::cerr << "  --run-native     Generate, compile, and execute the native binary\n";
    std::cerr << "  -v, --verbose    Show environment, build plan, variable state, and evaluation results\n";
}



int main(int argc, const char *argv[])
{
    if (argc < 2) {
        printUsage(argv[0]);
        return 1;
    }

    bool runBuild = false;
    bool runInterpreter = false;
    bool emitC = false;
    bool buildNative = false;
    bool runNative = false;
    bool verbose = false;

    for (int index = 2; index < argc; ++index) {
        const std::string flag = argv[index];
        if (flag == "--build") {
            runBuild = true;
        } else if (flag == "--plan") {
            runBuild = false;
        } else if (flag == "--run") {
            runInterpreter = true;
        } else if (flag == "--emit-c") {
            emitC = true;
        } else if (flag == "--build-native") {
            buildNative = true;
        } else if (flag == "--run-native") {
            runNative = true; buildNative = true; // implies build
        } else if (flag == "-v" || flag == "--verbose") {
            verbose = true;
        } else {
            printUsage(argv[0]);
            return 1;
        }
    }

    fs::path sourcePath = fs::absolute(argv[1]);
    if (!fs::exists(sourcePath)) {
        std::cerr << "Source file not found: " << sourcePath << '\n';
        return 1;
    }

    std::string sourceText;
    try {
        sourceText = readFile(sourcePath);
    } catch (const std::exception &ex) {
        std::cerr << ex.what() << '\n';
        return 1;
    }

    ANTLRInputStream input(sourceText);
    EZLanguageLexer lexer(&input);
    CommonTokenStream tokens(&lexer);
    EZLanguageParser parser(&tokens);
    EZLanguageParser::ProgramContext *program = parser.program();

    if (parser.getNumberOfSyntaxErrors() > 0) {
        std::cerr << "Syntax errors detected in " << sourcePath << '\n';
        return 1;
    }

    BootstrapListener listener(sourcePath.parent_path());
    tree::ParseTreeWalker::DEFAULT.walk(&listener, program);

    std::vector<Diagnostic> diagnostics = listener.getDiagnostics();

    const auto &environment = listener.getEnvironment();
    if (!environment.has_value()) {
        diagnostics.push_back({0, "missing environment declaration. Add 'doing native;' at the top of the file."});
    } else if (environment.value() != "native") {
        const size_t line = listener.getEnvironmentLine().value_or(0);
        diagnostics.push_back({line, "only the 'native' environment is supported in this MVP"});
    }

    std::unordered_set<std::string> aliases;
    for (const auto &module : listener.getFriendModules()) {
        if (module.language != "c" && module.language != "cpp" && module.language != "python") {
            diagnostics.push_back({module.line, "unsupported friend language '" + module.language + "'. Use 'c', 'cpp', or 'python'."});
        }

        if (!aliases.insert(module.alias).second) {
            diagnostics.push_back({module.line, "duplicate friend alias '" + module.alias + "'."});
        }
    }

    // Semantic checks (access control, invalid modifiers)
    runSemanticChecks(program, diagnostics);

    std::vector<BuildPlanEntry> plan = prepareBuildPlan(listener.getFriendModules(), listener.getBaseDirectory(), diagnostics, listener.getFriendCalls());

    if (!diagnostics.empty()) {
        printDiagnostics(diagnostics, sourcePath);
        return 1;
    }

    if (verbose) {
        std::cout << "Environment: native" << '\n';
        if (plan.empty()) {
            std::cout << "No friend modules declared." << '\n';
        } else {
            std::cout << "Friend build plan:" << '\n';
            for (const auto &entry : plan) {
                std::cout << "  [" << entry.module.language << "] " << entry.module.alias
                          << " <= " << entry.source << '\n';
                if (!runBuild) {
                    std::cout << "    " << entry.command << '\n';
                }
            }
        }
    }

    if (runBuild) {
        if (!plan.empty()) {
            if (verbose) std::cout << '\n' << "Compiling/linking friend modules..." << '\n';
            for (const auto &entry : plan) {
                if (!entry.command.empty()) {
                    if (verbose) std::cout << entry.command << '\n';
                    const int status = std::system(entry.command.c_str());
                    if (status != 0) {
                        std::cerr << "Command failed with exit code " << status << '\n';
                        return status == 0 ? 1 : status;
                    }
                }
                if (!entry.linkCommand.empty()) {
                    if (verbose) std::cout << entry.linkCommand << '\n';
                    const int linkStatus = std::system(entry.linkCommand.c_str());
                    if (linkStatus != 0) {
                        std::cerr << "Link command failed with exit code " << linkStatus << '\n';
                        return linkStatus == 0 ? 1 : linkStatus;
                    }
                }
            }

            if (verbose) {
                const fs::path outputDir = plan.front().object.parent_path();
                std::cout << '\n' << "Friend artifacts written to " << outputDir << '\n';
                std::cout << "Dynamic libraries are named lib<alias>.dylib" << '\n';
            }
        }
    } else if (verbose) {
        if (!plan.empty()) {
            std::cout << '\n';
        }
        std::cout << "Run with '--build' to compile the friend modules." << '\n';
    }

    // Optional: C codegen and native build/run path
    if (emitC || buildNative || runNative) {
        const fs::path baseDir = sourcePath.parent_path();
        const fs::path outDir = baseDir / ".ezbuild";
        std::error_code ecGen;
        fs::create_directories(outDir, ecGen);
        if (ecGen) {
            std::cerr << "Failed to create output directory: " << outDir << " (" << ecGen.message() << ")\n";
            return 1;
        }

        const std::string stem = sourcePath.stem().string();
        const fs::path cFile = outDir / (stem + ".c");
        const fs::path exeFile = outDir / stem;

        std::vector<Diagnostic> cgDiags;
        CCodeGenerator codegen;
        const std::string cSrc = codegen.generate(program, cgDiags);
        if (!cgDiags.empty()) {
            printDiagnostics(cgDiags, sourcePath);
            return 1;
        }
        // Write C output
        try {
            std::ofstream out(cFile, std::ios::binary);
            out << cSrc;
            out.close();
        } catch (...) {
            std::cerr << "Failed to write C file: " << cFile << "\n";
            return 1;
        }
        std::cout << "C emitted to " << cFile << '\n';

        if (buildNative) {
            std::ostringstream cc;
            cc << "clang -std=c11 " << quote(cFile) << " -o " << quote(exeFile);
            std::cout << cc.str() << '\n';
            int rc = std::system(cc.str().c_str());
            if (rc != 0) {
                std::cerr << "Native build failed with exit code " << rc << "\n";
                return rc == 0 ? 1 : rc;
            }
            std::cout << "Native binary written to " << exeFile << '\n';
        }

        if (runNative) {
            const std::string runCmd = quote(exeFile);
            std::cout << runCmd << '\n';
            int rc = std::system(runCmd.c_str());
            if (rc != 0) return rc == 0 ? 1 : rc;
            return 0;
        }
    }

    if (!runInterpreter) {
        return 0;
    }

    // Map alias -> dylib path
    std::unordered_map<std::string, fs::path> libMap;
    for (const auto &e : plan) {
        libMap.emplace(e.module.alias, e.dylib);
    }

    SimpleInterpreter interpreter(std::cout, std::move(libMap), verbose);
    if (!interpreter.execute(program, diagnostics)) {
        printDiagnostics(diagnostics, sourcePath);
        return 1;
    }

    if (verbose) {
        std::cout << '\n';
        interpreter.printVariables();
    }

    return 0;
}