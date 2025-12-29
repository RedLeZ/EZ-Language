#pragma once
#include <cstdint>
#include <filesystem>
#include <ostream>
#include <string>
#include <unordered_map>
#include <vector>
#include "../diagnostics/diagnostics.h"
#include "types.h"
#include "semantic.h"
#include "../../generated/EZLanguageParser.h"

struct Value {
    SimpleType type = SimpleType::Unknown;
    int64_t intValue = 0; // also used for boolean (0/1)
    std::string stringValue; // for string types
};

class SimpleInterpreter {
public:
    explicit SimpleInterpreter(std::ostream &stream,
                               std::unordered_map<std::string, std::filesystem::path> friendLibs,
                               bool verbose,
                               SemanticModel model);
    bool execute(EZLanguageParser::ProgramContext *program, std::vector<Diagnostic> &diagnostics);
    void printVariables() const;

private:
    static std::optional<int> callSymbol(const std::filesystem::path &libPath,
                                         const std::string &symbol,
                                         const std::vector<int> &args,
                                         std::vector<Diagnostic> &diagnostics,
                                         size_t line);

    std::optional<Value> evaluateExpression(EZLanguageParser::ExpressionContext &expression,
                                            std::vector<Diagnostic> &diagnostics);
    std::optional<Value> evaluatePrimary(EZLanguageParser::PrimaryExpressionContext &primary,
                                         std::vector<Diagnostic> &diagnostics);
    void handleFriendCall(EZLanguageParser::FriendFunctionCallContext &context,
                          std::vector<Diagnostic> &diagnostics);
    void handleVariableDeclaration(EZLanguageParser::VariableDeclarationContext &context,
                                   std::vector<Diagnostic> &diagnostics);
    void handleExpressionStatement(EZLanguageParser::ExpressionStatementContext &context,
                                   std::vector<Diagnostic> &diagnostics);
    std::optional<Value> executeFunction(const std::string &name,
                                         EZLanguageParser::FunctionDeclarationContext &ctx,
                                         const std::vector<Value> &args,
                                         std::vector<Diagnostic> &diagnostics);
    static size_t lineOf(const antlr4::ParserRuleContext &context);

    Value makeInt(int64_t v) const { return Value{SimpleType::Int, v}; }
    Value makeBool(bool v) const { return Value{SimpleType::Bool, v ? 1 : 0}; }
    Value makeString(const std::string &s) const {
        Value v;
        v.type = SimpleType::String;
        v.stringValue = s;
        return v;
    }
    Value makeVoid() const { return Value{SimpleType::Void, 0}; }

    std::ostream &output;
    std::unordered_map<std::string, std::filesystem::path> libraries;
    bool verboseOutput = false;

    // Semantic model and function definitions captured during analysis
    SemanticModel semanticModel;
    std::unordered_map<std::string, EZLanguageParser::FunctionDeclarationContext *> functions;

    // Simple call stack of variable frames (frame 0 = globals)
    std::vector<std::unordered_map<std::string, Value>> frames;
};
