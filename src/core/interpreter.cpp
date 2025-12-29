#include "interpreter.h"
#include <dlfcn.h>

using namespace std;

namespace {

std::string valueToString(const Value &v) {
    if (v.type == SimpleType::Bool) return v.intValue ? "true" : "false";
    if (v.type == SimpleType::String) return v.stringValue;
    return std::to_string(v.intValue);
}

} // namespace

SimpleInterpreter::SimpleInterpreter(std::ostream &stream,
                                     std::unordered_map<std::string, std::filesystem::path> friendLibs,
                                     bool verbose,
                                     SemanticModel model)
    : output(stream), libraries(std::move(friendLibs)), verboseOutput(verbose), semanticModel(std::move(model))
{
    frames.emplace_back(); // global frame
}

bool SimpleInterpreter::execute(EZLanguageParser::ProgramContext *program, std::vector<Diagnostic> &diagnostics)
{
    // Collect function bodies for calls
    for (auto *stmt : program->statement()) {
        if (auto *fn = stmt->functionDeclaration()) {
            const std::string name = fn->IDENTIFIER()->getText();
            functions[name] = fn;
        }
    }

    for (auto *statement : program->statement()) {
        if (auto *varDecl = statement->variableDeclaration()) {
            handleVariableDeclaration(*varDecl, diagnostics);
            continue;
        }

        if (auto *exprStmt = statement->expressionStatement()) {
            handleExpressionStatement(*exprStmt, diagnostics);
            continue;
        }

        if (auto *friendCall = statement->friendFunctionCall()) {
            handleFriendCall(*friendCall, diagnostics);
            continue;
        }

        if (statement->functionDeclaration()) {
            // already indexed
            continue;
        }

        if (statement->returnStatement()) {
            diagnostics.push_back({lineOf(*statement), "return only valid inside functions"});
            continue;
        }
    }

    return diagnostics.empty();
}

void SimpleInterpreter::printVariables() const
{
    const auto &globals = frames.front();
    if (globals.empty()) {
        output << "No variables declared." << '\n';
        return;
    }

    output << "Variable state:" << '\n';
    for (const auto &entry : globals) {
        output << "  " << entry.first << " = " << valueToString(entry.second) << '\n';
    }
}

std::optional<Value> SimpleInterpreter::evaluateExpression(EZLanguageParser::ExpressionContext &expression,
                                                           std::vector<Diagnostic> &diagnostics)
{
    const auto &primaries = expression.primaryExpression();
    if (primaries.empty()) {
        diagnostics.push_back({lineOf(expression), "empty expression"});
        return std::nullopt;
    }

    auto current = evaluatePrimary(*primaries.front(), diagnostics);
    if (!current.has_value()) {
        return std::nullopt;
    }

    std::vector<std::string> operators;
    for (auto *child : expression.children) {
        auto *terminal = dynamic_cast<antlr4::tree::TerminalNode *>(child);
        if (!terminal) continue;
        const auto type = terminal->getSymbol()->getType();
        if (type == EZLanguageParser::OPERATOR || type == EZLanguageParser::LT || type == EZLanguageParser::GT) {
            operators.push_back(terminal->getText());
        }
    }
    if (operators.empty() && primaries.size() > 1) {
        const std::string text = expression.getText();
        const std::vector<std::string> candidates = {"==", "!=", ">=", "<=", "&&", "||", ">", "<", "+", "-", "*", "/"};
        for (const auto &c : candidates) {
            if (text.find(c) != std::string::npos) {
                operators.push_back(c);
                break;
            }
        }
        if (operators.empty()) {
            for (auto *opTok : expression.OPERATOR()) operators.push_back(opTok->getText());
            if (operators.empty() && !expression.LT().empty()) operators.push_back("<");
            if (operators.empty() && !expression.GT().empty()) operators.push_back(">");
        }
    }

    for (size_t index = 0; index < operators.size(); ++index) {
        auto rhs = evaluatePrimary(*primaries[index + 1], diagnostics);
        if (!rhs.has_value()) {
            return std::nullopt;
        }

        const std::string opText = operators[index];
        if (opText == "+" || opText == "-" || opText == "*" || opText == "/") {
            if (current->type != SimpleType::Int || rhs->type != SimpleType::Int) {
                diagnostics.push_back({lineOf(expression), "arithmetic operator '" + opText + "' expects int operands"});
                return std::nullopt;
            }
            if (opText == "/" && rhs->intValue == 0) {
                diagnostics.push_back({lineOf(expression), "division by zero"});
                return std::nullopt;
            }
            int64_t result = 0;
            if (opText == "+") result = current->intValue + rhs->intValue;
            else if (opText == "-") result = current->intValue - rhs->intValue;
            else if (opText == "*") result = current->intValue * rhs->intValue;
            else if (opText == "/") result = current->intValue / rhs->intValue;
            current = makeInt(result);
        } else if (opText == "==" || opText == "!=") {
            if (current->type != rhs->type) {
                diagnostics.push_back({lineOf(expression), "comparison between mismatched types"});
            }
            bool res = (current->intValue == rhs->intValue);
            if (opText == "!=") res = !res;
            current = makeBool(res);
        } else if (opText == ">" || opText == "<" || opText == ">=" || opText == "<=") {
            if (current->type != SimpleType::Int || rhs->type != SimpleType::Int) {
                diagnostics.push_back({lineOf(expression), "relational operator '" + opText + "' expects int operands"});
                return std::nullopt;
            }
            bool res = false;
            if (opText == ">") res = current->intValue > rhs->intValue;
            else if (opText == "<") res = current->intValue < rhs->intValue;
            else if (opText == ">=") res = current->intValue >= rhs->intValue;
            else if (opText == "<=") res = current->intValue <= rhs->intValue;
            current = makeBool(res);
        } else if (opText == "&&" || opText == "||") {
            if (current->type != SimpleType::Bool || rhs->type != SimpleType::Bool) {
                diagnostics.push_back({lineOf(expression), "logical operator '" + opText + "' expects boolean operands"});
                return std::nullopt;
            }
            bool res = (opText == "&&") ? (current->intValue && rhs->intValue)
                                         : (current->intValue || rhs->intValue);
            current = makeBool(res);
        } else {
            diagnostics.push_back({lineOf(expression), "operator '" + opText + "' not supported in interpreter"});
            return std::nullopt;
        }
    }

    return current;
}

std::optional<Value> SimpleInterpreter::evaluatePrimary(EZLanguageParser::PrimaryExpressionContext &primary,
                                                        std::vector<Diagnostic> &diagnostics)
{
    if (auto *identifier = primary.IDENTIFIER()) {
        const std::string name = identifier->getText();
        for (auto it = frames.rbegin(); it != frames.rend(); ++it) {
            auto found = it->find(name);
            if (found != it->end()) return found->second;
        }
        diagnostics.push_back({lineOf(primary), "unknown identifier '" + name + "'"});
        return std::nullopt;
    }

    if (auto *literal = primary.literal()) {
        if (auto *number = literal->NUMBER()) {
            const std::string text = number->getText();
            if (text.find('.') != std::string::npos) {
                diagnostics.push_back({lineOf(primary), "floating point literals not supported yet"});
                return std::nullopt;
            }
            return makeInt(std::stoll(text));
        }
        if (auto *booleanTok = literal->BOOLEAN()) {
            const std::string val = booleanTok->getText();
            return makeBool(val == "true");
        }
        if (auto *stringTok = literal->STRING()) {
            std::string text = stringTok->getText();
            // Remove surrounding quotes
            if (text.size() >= 2 && text.front() == '"' && text.back() == '"') {
                text = text.substr(1, text.size() - 2);
            }
            Value v;
            v.type = SimpleType::String;
            v.stringValue = text;
            return v;
        }
        diagnostics.push_back({lineOf(primary), "only numeric, boolean, and string literals are supported"});
        return std::nullopt;
    }

    if (auto *call = primary.functionCall()) {
        const std::string fname = call->IDENTIFIER()->getText();
        // Built-in print/printf support
        if (fname == "print" || fname == "printf") {
            std::vector<std::string> rendered;
            if (auto *args = call->argumentList()) {
                for (auto *expr : args->expression()) {
                    auto value = evaluateExpression(*expr, diagnostics);
                    if (!value.has_value()) {
                        rendered.push_back("<error>");
                    } else {
                        rendered.push_back(valueToString(value.value()));
                    }
                }
            }
            std::string joined;
            for (size_t i = 0; i < rendered.size(); ++i) {
                if (i) joined += ' ';
                joined += rendered[i];
            }
            output << joined << '\n';
            return makeInt(0);
        }

        // User-defined function call
        auto fnIt = functions.find(fname);
        if (fnIt == functions.end()) {
            diagnostics.push_back({lineOf(primary), "unknown function '" + fname + "'"});
            return std::nullopt;
        }

        std::vector<Value> args;
        if (auto *argList = call->argumentList()) {
            for (auto *expr : argList->expression()) {
                auto v = evaluateExpression(*expr, diagnostics);
                if (!v.has_value()) return std::nullopt;
                args.push_back(*v);
            }
        }

        return executeFunction(fname, *fnIt->second, args, diagnostics);
    }

    if (auto *friendCall = primary.friendFunctionCall()) {
        const std::string alias = friendCall->IDENTIFIER(0)->getText();
        const std::string symbol = friendCall->IDENTIFIER(1)->getText();

        auto it = libraries.find(alias);
        if (it == libraries.end()) {
            diagnostics.push_back({lineOf(primary), "no library found for alias '" + alias + "'"});
            return std::nullopt;
        }

        std::vector<int> args;
        if (auto *argsList = friendCall->argumentList()) {
            for (auto *expr : argsList->expression()) {
                auto value = evaluateExpression(*expr, diagnostics);
                if (!value.has_value()) return std::nullopt;
                if (value->type != SimpleType::Int) {
                    diagnostics.push_back({lineOf(*expr), "friend calls currently only support int arguments"});
                    return std::nullopt;
                }
                args.push_back(static_cast<int>(value->intValue));
            }
        }

        auto result = callSymbol(it->second, symbol, args, diagnostics, lineOf(primary));
        if (result.has_value()) return makeInt(result.value());
        return std::nullopt;
    }

    if (auto *nested = primary.expression()) {
        return evaluateExpression(*nested, diagnostics);
    }

    diagnostics.push_back({lineOf(primary), "unsupported primary expression"});
    return std::nullopt;
}

void SimpleInterpreter::handleFriendCall(EZLanguageParser::FriendFunctionCallContext &context,
                                         std::vector<Diagnostic> &diagnostics)
{
    const std::string alias = context.IDENTIFIER(0)->getText();
    const std::string symbol = context.IDENTIFIER(1)->getText();

    auto it = libraries.find(alias);
    if (it == libraries.end()) {
        diagnostics.push_back({lineOf(context), "no library found for alias '" + alias + "'"});
        return;
    }

    std::vector<int> args;
    if (auto *argsList = context.argumentList()) {
        for (auto *expr : argsList->expression()) {
            auto value = evaluateExpression(*expr, diagnostics);
            if (!value.has_value()) return;
            if (value->type != SimpleType::Int) {
                diagnostics.push_back({lineOf(*expr), "friend calls currently only support int arguments"});
                return;
            }
            args.push_back(static_cast<int>(value->intValue));
        }
    }

    auto result = callSymbol(it->second, symbol, args, diagnostics, lineOf(context));
    if (result.has_value() && verboseOutput) {
        output << "=> " << result.value() << '\n';
    }
}

std::optional<int> SimpleInterpreter::callSymbol(const std::filesystem::path &libPath,
                                                 const std::string &symbol,
                                                 const std::vector<int> &args,
                                                 std::vector<Diagnostic> &diagnostics,
                                                 size_t line)
{
    // RTLD_NODELETE: keep library loaded (essential for Python embedding & static state)
    void *handle = dlopen(libPath.c_str(), RTLD_LAZY | RTLD_NODELETE);
    if (!handle) {
        diagnostics.push_back({line, std::string("dlopen failed: ") + dlerror()});
        return std::nullopt;
    }

    dlerror();
    void *sym = dlsym(handle, symbol.c_str());
    const char *err = dlerror();
    if (err) {
        diagnostics.push_back({line, std::string("dlsym failed for '") + symbol + "': " + err});
        return std::nullopt;
    }

    int result = 0;
    switch (args.size()) {
        case 0: {
            using Fn = int (*)();
            result = reinterpret_cast<Fn>(sym)();
            break;
        }
        case 1: {
            using Fn = int (*)(int);
            result = reinterpret_cast<Fn>(sym)(args[0]);
            break;
        }
        case 2: {
            using Fn = int (*)(int, int);
            result = reinterpret_cast<Fn>(sym)(args[0], args[1]);
            break;
        }
        case 3: {
            using Fn = int (*)(int, int, int);
            result = reinterpret_cast<Fn>(sym)(args[0], args[1], args[2]);
            break;
        }
        case 4: {
            using Fn = int (*)(int, int, int, int);
            result = reinterpret_cast<Fn>(sym)(args[0], args[1], args[2], args[3]);
            break;
        }
        default:
            diagnostics.push_back({line, "only up to 4 int arguments supported"});
            return std::nullopt;
    }

    // Library kept loaded via RTLD_NODELETE (required for Python embedding)
    return result;
}

void SimpleInterpreter::handleVariableDeclaration(EZLanguageParser::VariableDeclarationContext &context,
                                                  std::vector<Diagnostic> &diagnostics)
{
    auto *typeContext = context.type();
    if (typeContext == nullptr) {
        diagnostics.push_back({lineOf(context), "missing type in variable declaration"});
        return;
    }

    const std::string typeName = typeContext->getText();
    SimpleType declType = SimpleType::Unknown;
    if (typeName == "int") declType = SimpleType::Int;
    else if (typeName == "boolean") declType = SimpleType::Bool;
    else {
        diagnostics.push_back({lineOf(context), "only 'int' and 'boolean' variables are supported in interpreter"});
        return;
    }

    const std::string variableName = context.IDENTIFIER()->getText();
    auto &currentFrame = frames.back();
    if (currentFrame.count(variableName) != 0) {
        diagnostics.push_back({lineOf(context), "variable '" + variableName + "' already declared"});
        return;
    }

    Value value = (declType == SimpleType::Bool) ? makeBool(false) : makeInt(0);
    if (auto *expression = context.expression()) {
        auto evaluated = evaluateExpression(*expression, diagnostics);
        if (!evaluated.has_value()) {
            return;
        }
        if (evaluated->type != declType) {
            diagnostics.push_back({lineOf(context), "cannot assign expression of type '" + toString(evaluated->type) + "' to variable of type '" + typeName + "'"});
            return;
        }
        value = *evaluated;
    }

    currentFrame.emplace(variableName, value);
}

void SimpleInterpreter::handleExpressionStatement(EZLanguageParser::ExpressionStatementContext &context,
                                                  std::vector<Diagnostic> &diagnostics)
{
    auto *expression = context.expression();
    if (expression == nullptr) {
        diagnostics.push_back({lineOf(context), "missing expression"});
        return;
    }

    auto result = evaluateExpression(*expression, diagnostics);
    if (!result.has_value()) {
        return;
    }

    if (verboseOutput) output << "=> " << valueToString(result.value()) << '\n';
}

std::optional<Value> SimpleInterpreter::executeFunction(const std::string &name,
                                                        EZLanguageParser::FunctionDeclarationContext &ctx,
                                                        const std::vector<Value> &args,
                                                        std::vector<Diagnostic> &diagnostics)
{
    auto sigIt = semanticModel.functions.find(name);
    if (sigIt == semanticModel.functions.end()) {
        diagnostics.push_back({lineOf(ctx), "no signature information for function '" + name + "'"});
        return std::nullopt;
    }
    const FunctionInfo &sig = sigIt->second;

    if (args.size() != sig.params.size()) {
        diagnostics.push_back({lineOf(ctx), "function '" + name + "' expects " + to_string(sig.params.size()) + " argument(s)"});
        return std::nullopt;
    }

    for (size_t i = 0; i < args.size(); ++i) {
        if (sig.params[i].type != SimpleType::Unknown && args[i].type != sig.params[i].type) {
            diagnostics.push_back({lineOf(ctx), "argument " + to_string(i+1) + " type mismatch: expected '" + toString(sig.params[i].type) + "' got '" + toString(args[i].type) + "'"});
            return std::nullopt;
        }
    }

    frames.emplace_back();
    auto &frame = frames.back();
    for (size_t i = 0; i < args.size(); ++i) {
        frame.emplace(sig.params[i].name, args[i]);
    }

    std::optional<Value> returnValue;

    for (auto *stmt : ctx.statement()) {
        if (auto *vd = stmt->variableDeclaration()) {
            handleVariableDeclaration(*vd, diagnostics);
            if (!diagnostics.empty()) break;
            continue;
        }

        if (auto *exprStmt = stmt->expressionStatement()) {
            handleExpressionStatement(*exprStmt, diagnostics);
            if (!diagnostics.empty()) break;
            continue;
        }

        if (auto *friendCall = stmt->friendFunctionCall()) {
            handleFriendCall(*friendCall, diagnostics);
            if (!diagnostics.empty()) break;
            continue;
        }

        if (auto *ret = stmt->returnStatement()) {
            if (ret->expression()) {
                returnValue = evaluateExpression(*ret->expression(), diagnostics);
            } else {
                returnValue = makeVoid();
            }
            break;
        }
    }

    frames.pop_back();

    if (sig.returnType == SimpleType::Void) {
        return makeVoid();
    }

    if (!returnValue.has_value()) {
        diagnostics.push_back({lineOf(ctx), "function '" + name + "' did not return a value"});
        return std::nullopt;
    }

    if (returnValue->type != sig.returnType) {
        diagnostics.push_back({lineOf(ctx), "function '" + name + "' returned '" + toString(returnValue->type) + "' but expected '" + toString(sig.returnType) + "'"});
        return std::nullopt;
    }

    return returnValue;
}

size_t SimpleInterpreter::lineOf(const antlr4::ParserRuleContext &context)
{
    return static_cast<size_t>(context.getStart()->getLine());
}
