
// Generated from grammar/EZLanguage.g4 by ANTLR 4.13.2


#include "EZLanguageListener.h"

#include "EZLanguageParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct EZLanguageParserStaticData final {
  EZLanguageParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  EZLanguageParserStaticData(const EZLanguageParserStaticData&) = delete;
  EZLanguageParserStaticData(EZLanguageParserStaticData&&) = delete;
  EZLanguageParserStaticData& operator=(const EZLanguageParserStaticData&) = delete;
  EZLanguageParserStaticData& operator=(EZLanguageParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag ezlanguageParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<EZLanguageParserStaticData> ezlanguageParserStaticData = nullptr;

void ezlanguageParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (ezlanguageParserStaticData != nullptr) {
    return;
  }
#else
  assert(ezlanguageParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<EZLanguageParserStaticData>(
    std::vector<std::string>{
      "program", "statement", "envDeclaration", "includeStatement", "friendStatement", 
      "classDeclaration", "variableDeclaration", "functionDeclaration", 
      "parameterList", "parameter", "functionCall", "friendFunctionCall", 
      "argumentList", "controlFlowStatement", "ifStatement", "loopStatement", 
      "foreachStatement", "tryCatchStatement", "runStatement", "expressionStatement", 
      "expression", "primaryExpression", "literal", "accessModifier", "type", 
      "baseType", "mapType"
    },
    std::vector<std::string>{
      "", "'env'", "';'", "'import'", "'friend'", "':'", "'as'", "'class'", 
      "'('", "')'", "'extends'", "'implements'", "','", "'{'", "'}'", "'='", 
      "'.'", "'if'", "'else if'", "'else'", "'while'", "'for'", "'in'", 
      "'try'", "'catch'", "'finally'", "'run'", "'public'", "'private'", 
      "'protected'", "'[]'", "'int'", "'float'", "'boolean'", "'string'", 
      "'void'", "'map'", "'<'", "'>'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "OPERATOR", "BOOLEAN", "IDENTIFIER", "STRING", 
      "NUMBER", "LINE_COMMENT", "BLOCK_COMMENT", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,46,346,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,1,0,1,0,1,0,1,0,
  	5,0,59,8,0,10,0,12,0,62,9,0,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,3,
  	1,74,8,1,1,2,1,2,1,2,1,2,1,3,1,3,1,3,1,3,1,4,1,4,1,4,1,4,1,4,1,4,1,4,
  	1,4,1,5,3,5,93,8,5,1,5,1,5,1,5,1,5,1,5,1,5,3,5,101,8,5,1,5,1,5,1,5,1,
  	5,5,5,107,8,5,10,5,12,5,110,9,5,3,5,112,8,5,1,5,1,5,1,5,5,5,117,8,5,10,
  	5,12,5,120,9,5,1,5,1,5,1,6,3,6,125,8,6,1,6,1,6,1,6,1,6,3,6,131,8,6,1,
  	6,1,6,1,7,3,7,136,8,7,1,7,1,7,1,7,1,7,3,7,142,8,7,1,7,1,7,1,7,5,7,147,
  	8,7,10,7,12,7,150,9,7,1,7,1,7,1,8,1,8,1,8,5,8,157,8,8,10,8,12,8,160,9,
  	8,1,9,1,9,1,9,1,10,1,10,1,10,3,10,168,8,10,1,10,1,10,1,11,1,11,1,11,1,
  	11,1,11,3,11,177,8,11,1,11,1,11,1,12,1,12,1,12,5,12,184,8,12,10,12,12,
  	12,187,9,12,1,13,1,13,3,13,191,8,13,1,14,1,14,1,14,1,14,1,14,1,14,5,14,
  	199,8,14,10,14,12,14,202,9,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,5,14,
  	211,8,14,10,14,12,14,214,9,14,1,14,1,14,5,14,218,8,14,10,14,12,14,221,
  	9,14,1,14,1,14,1,14,5,14,226,8,14,10,14,12,14,229,9,14,1,14,3,14,232,
  	8,14,1,15,1,15,1,15,3,15,237,8,15,1,15,1,15,1,15,5,15,242,8,15,10,15,
  	12,15,245,9,15,1,15,1,15,1,16,1,16,1,16,1,16,1,16,1,16,5,16,255,8,16,
  	10,16,12,16,258,9,16,1,16,1,16,1,17,1,17,1,17,5,17,265,8,17,10,17,12,
  	17,268,9,17,1,17,1,17,1,17,1,17,1,17,1,17,1,17,5,17,277,8,17,10,17,12,
  	17,280,9,17,1,17,3,17,283,8,17,1,17,1,17,1,17,5,17,288,8,17,10,17,12,
  	17,291,9,17,1,17,3,17,294,8,17,1,18,1,18,1,18,1,18,1,18,1,18,1,19,1,19,
  	1,19,1,20,1,20,1,20,5,20,308,8,20,10,20,12,20,311,9,20,1,21,1,21,1,21,
  	1,21,1,21,1,21,1,21,1,21,3,21,321,8,21,1,22,1,22,1,23,1,23,1,24,1,24,
  	3,24,329,8,24,1,25,1,25,1,25,1,25,1,25,1,25,3,25,337,8,25,1,26,1,26,1,
  	26,1,26,1,26,1,26,1,26,1,26,0,0,27,0,2,4,6,8,10,12,14,16,18,20,22,24,
  	26,28,30,32,34,36,38,40,42,44,46,48,50,52,0,3,1,0,20,21,2,0,40,40,42,
  	43,1,0,27,29,369,0,60,1,0,0,0,2,73,1,0,0,0,4,75,1,0,0,0,6,79,1,0,0,0,
  	8,83,1,0,0,0,10,92,1,0,0,0,12,124,1,0,0,0,14,135,1,0,0,0,16,153,1,0,0,
  	0,18,161,1,0,0,0,20,164,1,0,0,0,22,171,1,0,0,0,24,180,1,0,0,0,26,190,
  	1,0,0,0,28,192,1,0,0,0,30,233,1,0,0,0,32,248,1,0,0,0,34,261,1,0,0,0,36,
  	295,1,0,0,0,38,301,1,0,0,0,40,304,1,0,0,0,42,320,1,0,0,0,44,322,1,0,0,
  	0,46,324,1,0,0,0,48,326,1,0,0,0,50,336,1,0,0,0,52,338,1,0,0,0,54,59,3,
  	2,1,0,55,59,3,10,5,0,56,59,3,34,17,0,57,59,3,36,18,0,58,54,1,0,0,0,58,
  	55,1,0,0,0,58,56,1,0,0,0,58,57,1,0,0,0,59,62,1,0,0,0,60,58,1,0,0,0,60,
  	61,1,0,0,0,61,63,1,0,0,0,62,60,1,0,0,0,63,64,5,0,0,1,64,1,1,0,0,0,65,
  	74,3,4,2,0,66,74,3,6,3,0,67,74,3,8,4,0,68,74,3,22,11,0,69,74,3,38,19,
  	0,70,74,3,12,6,0,71,74,3,26,13,0,72,74,3,32,16,0,73,65,1,0,0,0,73,66,
  	1,0,0,0,73,67,1,0,0,0,73,68,1,0,0,0,73,69,1,0,0,0,73,70,1,0,0,0,73,71,
  	1,0,0,0,73,72,1,0,0,0,74,3,1,0,0,0,75,76,5,1,0,0,76,77,5,41,0,0,77,78,
  	5,2,0,0,78,5,1,0,0,0,79,80,5,3,0,0,80,81,5,41,0,0,81,82,5,2,0,0,82,7,
  	1,0,0,0,83,84,5,4,0,0,84,85,5,41,0,0,85,86,5,5,0,0,86,87,5,41,0,0,87,
  	88,5,6,0,0,88,89,5,41,0,0,89,90,5,2,0,0,90,9,1,0,0,0,91,93,3,46,23,0,
  	92,91,1,0,0,0,92,93,1,0,0,0,93,94,1,0,0,0,94,95,5,7,0,0,95,96,5,41,0,
  	0,96,97,5,8,0,0,97,100,5,9,0,0,98,99,5,10,0,0,99,101,5,41,0,0,100,98,
  	1,0,0,0,100,101,1,0,0,0,101,111,1,0,0,0,102,103,5,11,0,0,103,108,5,41,
  	0,0,104,105,5,12,0,0,105,107,5,41,0,0,106,104,1,0,0,0,107,110,1,0,0,0,
  	108,106,1,0,0,0,108,109,1,0,0,0,109,112,1,0,0,0,110,108,1,0,0,0,111,102,
  	1,0,0,0,111,112,1,0,0,0,112,113,1,0,0,0,113,118,5,13,0,0,114,117,3,12,
  	6,0,115,117,3,14,7,0,116,114,1,0,0,0,116,115,1,0,0,0,117,120,1,0,0,0,
  	118,116,1,0,0,0,118,119,1,0,0,0,119,121,1,0,0,0,120,118,1,0,0,0,121,122,
  	5,14,0,0,122,11,1,0,0,0,123,125,3,46,23,0,124,123,1,0,0,0,124,125,1,0,
  	0,0,125,126,1,0,0,0,126,127,3,48,24,0,127,130,5,41,0,0,128,129,5,15,0,
  	0,129,131,3,40,20,0,130,128,1,0,0,0,130,131,1,0,0,0,131,132,1,0,0,0,132,
  	133,5,2,0,0,133,13,1,0,0,0,134,136,3,46,23,0,135,134,1,0,0,0,135,136,
  	1,0,0,0,136,137,1,0,0,0,137,138,3,48,24,0,138,139,5,41,0,0,139,141,5,
  	8,0,0,140,142,3,16,8,0,141,140,1,0,0,0,141,142,1,0,0,0,142,143,1,0,0,
  	0,143,144,5,9,0,0,144,148,5,13,0,0,145,147,3,2,1,0,146,145,1,0,0,0,147,
  	150,1,0,0,0,148,146,1,0,0,0,148,149,1,0,0,0,149,151,1,0,0,0,150,148,1,
  	0,0,0,151,152,5,14,0,0,152,15,1,0,0,0,153,158,3,18,9,0,154,155,5,12,0,
  	0,155,157,3,18,9,0,156,154,1,0,0,0,157,160,1,0,0,0,158,156,1,0,0,0,158,
  	159,1,0,0,0,159,17,1,0,0,0,160,158,1,0,0,0,161,162,3,48,24,0,162,163,
  	5,41,0,0,163,19,1,0,0,0,164,165,5,41,0,0,165,167,5,8,0,0,166,168,3,24,
  	12,0,167,166,1,0,0,0,167,168,1,0,0,0,168,169,1,0,0,0,169,170,5,9,0,0,
  	170,21,1,0,0,0,171,172,5,41,0,0,172,173,5,16,0,0,173,174,5,41,0,0,174,
  	176,5,8,0,0,175,177,3,24,12,0,176,175,1,0,0,0,176,177,1,0,0,0,177,178,
  	1,0,0,0,178,179,5,9,0,0,179,23,1,0,0,0,180,185,3,40,20,0,181,182,5,12,
  	0,0,182,184,3,40,20,0,183,181,1,0,0,0,184,187,1,0,0,0,185,183,1,0,0,0,
  	185,186,1,0,0,0,186,25,1,0,0,0,187,185,1,0,0,0,188,191,3,28,14,0,189,
  	191,3,30,15,0,190,188,1,0,0,0,190,189,1,0,0,0,191,27,1,0,0,0,192,193,
  	5,17,0,0,193,194,5,8,0,0,194,195,3,40,20,0,195,196,5,9,0,0,196,200,5,
  	13,0,0,197,199,3,2,1,0,198,197,1,0,0,0,199,202,1,0,0,0,200,198,1,0,0,
  	0,200,201,1,0,0,0,201,203,1,0,0,0,202,200,1,0,0,0,203,219,5,14,0,0,204,
  	205,5,18,0,0,205,206,5,8,0,0,206,207,3,40,20,0,207,208,5,9,0,0,208,212,
  	5,13,0,0,209,211,3,2,1,0,210,209,1,0,0,0,211,214,1,0,0,0,212,210,1,0,
  	0,0,212,213,1,0,0,0,213,215,1,0,0,0,214,212,1,0,0,0,215,216,5,14,0,0,
  	216,218,1,0,0,0,217,204,1,0,0,0,218,221,1,0,0,0,219,217,1,0,0,0,219,220,
  	1,0,0,0,220,231,1,0,0,0,221,219,1,0,0,0,222,223,5,19,0,0,223,227,5,13,
  	0,0,224,226,3,2,1,0,225,224,1,0,0,0,226,229,1,0,0,0,227,225,1,0,0,0,227,
  	228,1,0,0,0,228,230,1,0,0,0,229,227,1,0,0,0,230,232,5,14,0,0,231,222,
  	1,0,0,0,231,232,1,0,0,0,232,29,1,0,0,0,233,234,7,0,0,0,234,236,5,8,0,
  	0,235,237,3,40,20,0,236,235,1,0,0,0,236,237,1,0,0,0,237,238,1,0,0,0,238,
  	239,5,9,0,0,239,243,5,13,0,0,240,242,3,2,1,0,241,240,1,0,0,0,242,245,
  	1,0,0,0,243,241,1,0,0,0,243,244,1,0,0,0,244,246,1,0,0,0,245,243,1,0,0,
  	0,246,247,5,14,0,0,247,31,1,0,0,0,248,249,5,21,0,0,249,250,5,41,0,0,250,
  	251,5,22,0,0,251,252,5,41,0,0,252,256,5,13,0,0,253,255,3,2,1,0,254,253,
  	1,0,0,0,255,258,1,0,0,0,256,254,1,0,0,0,256,257,1,0,0,0,257,259,1,0,0,
  	0,258,256,1,0,0,0,259,260,5,14,0,0,260,33,1,0,0,0,261,262,5,23,0,0,262,
  	266,5,13,0,0,263,265,3,2,1,0,264,263,1,0,0,0,265,268,1,0,0,0,266,264,
  	1,0,0,0,266,267,1,0,0,0,267,269,1,0,0,0,268,266,1,0,0,0,269,282,5,14,
  	0,0,270,271,5,24,0,0,271,272,5,8,0,0,272,273,5,41,0,0,273,274,5,9,0,0,
  	274,278,5,13,0,0,275,277,3,2,1,0,276,275,1,0,0,0,277,280,1,0,0,0,278,
  	276,1,0,0,0,278,279,1,0,0,0,279,281,1,0,0,0,280,278,1,0,0,0,281,283,5,
  	14,0,0,282,270,1,0,0,0,282,283,1,0,0,0,283,293,1,0,0,0,284,285,5,25,0,
  	0,285,289,5,13,0,0,286,288,3,2,1,0,287,286,1,0,0,0,288,291,1,0,0,0,289,
  	287,1,0,0,0,289,290,1,0,0,0,290,292,1,0,0,0,291,289,1,0,0,0,292,294,5,
  	14,0,0,293,284,1,0,0,0,293,294,1,0,0,0,294,35,1,0,0,0,295,296,5,26,0,
  	0,296,297,5,41,0,0,297,298,5,5,0,0,298,299,5,42,0,0,299,300,5,2,0,0,300,
  	37,1,0,0,0,301,302,3,40,20,0,302,303,5,2,0,0,303,39,1,0,0,0,304,309,3,
  	42,21,0,305,306,5,39,0,0,306,308,3,42,21,0,307,305,1,0,0,0,308,311,1,
  	0,0,0,309,307,1,0,0,0,309,310,1,0,0,0,310,41,1,0,0,0,311,309,1,0,0,0,
  	312,321,5,41,0,0,313,321,3,44,22,0,314,321,3,20,10,0,315,321,3,22,11,
  	0,316,317,5,8,0,0,317,318,3,40,20,0,318,319,5,9,0,0,319,321,1,0,0,0,320,
  	312,1,0,0,0,320,313,1,0,0,0,320,314,1,0,0,0,320,315,1,0,0,0,320,316,1,
  	0,0,0,321,43,1,0,0,0,322,323,7,1,0,0,323,45,1,0,0,0,324,325,7,2,0,0,325,
  	47,1,0,0,0,326,328,3,50,25,0,327,329,5,30,0,0,328,327,1,0,0,0,328,329,
  	1,0,0,0,329,49,1,0,0,0,330,337,5,31,0,0,331,337,5,32,0,0,332,337,5,33,
  	0,0,333,337,5,34,0,0,334,337,5,35,0,0,335,337,3,52,26,0,336,330,1,0,0,
  	0,336,331,1,0,0,0,336,332,1,0,0,0,336,333,1,0,0,0,336,334,1,0,0,0,336,
  	335,1,0,0,0,337,51,1,0,0,0,338,339,5,36,0,0,339,340,5,37,0,0,340,341,
  	3,50,25,0,341,342,5,12,0,0,342,343,3,50,25,0,343,344,5,38,0,0,344,53,
  	1,0,0,0,36,58,60,73,92,100,108,111,116,118,124,130,135,141,148,158,167,
  	176,185,190,200,212,219,227,231,236,243,256,266,278,282,289,293,309,320,
  	328,336
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  ezlanguageParserStaticData = std::move(staticData);
}

}

EZLanguageParser::EZLanguageParser(TokenStream *input) : EZLanguageParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

EZLanguageParser::EZLanguageParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  EZLanguageParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *ezlanguageParserStaticData->atn, ezlanguageParserStaticData->decisionToDFA, ezlanguageParserStaticData->sharedContextCache, options);
}

EZLanguageParser::~EZLanguageParser() {
  delete _interpreter;
}

const atn::ATN& EZLanguageParser::getATN() const {
  return *ezlanguageParserStaticData->atn;
}

std::string EZLanguageParser::getGrammarFileName() const {
  return "EZLanguage.g4";
}

const std::vector<std::string>& EZLanguageParser::getRuleNames() const {
  return ezlanguageParserStaticData->ruleNames;
}

const dfa::Vocabulary& EZLanguageParser::getVocabulary() const {
  return ezlanguageParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView EZLanguageParser::getSerializedATN() const {
  return ezlanguageParserStaticData->serializedATN;
}


//----------------- ProgramContext ------------------------------------------------------------------

EZLanguageParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EZLanguageParser::ProgramContext::EOF() {
  return getToken(EZLanguageParser::EOF, 0);
}

std::vector<EZLanguageParser::StatementContext *> EZLanguageParser::ProgramContext::statement() {
  return getRuleContexts<EZLanguageParser::StatementContext>();
}

EZLanguageParser::StatementContext* EZLanguageParser::ProgramContext::statement(size_t i) {
  return getRuleContext<EZLanguageParser::StatementContext>(i);
}

std::vector<EZLanguageParser::ClassDeclarationContext *> EZLanguageParser::ProgramContext::classDeclaration() {
  return getRuleContexts<EZLanguageParser::ClassDeclarationContext>();
}

EZLanguageParser::ClassDeclarationContext* EZLanguageParser::ProgramContext::classDeclaration(size_t i) {
  return getRuleContext<EZLanguageParser::ClassDeclarationContext>(i);
}

std::vector<EZLanguageParser::TryCatchStatementContext *> EZLanguageParser::ProgramContext::tryCatchStatement() {
  return getRuleContexts<EZLanguageParser::TryCatchStatementContext>();
}

EZLanguageParser::TryCatchStatementContext* EZLanguageParser::ProgramContext::tryCatchStatement(size_t i) {
  return getRuleContext<EZLanguageParser::TryCatchStatementContext>(i);
}

std::vector<EZLanguageParser::RunStatementContext *> EZLanguageParser::ProgramContext::runStatement() {
  return getRuleContexts<EZLanguageParser::RunStatementContext>();
}

EZLanguageParser::RunStatementContext* EZLanguageParser::ProgramContext::runStatement(size_t i) {
  return getRuleContext<EZLanguageParser::RunStatementContext>(i);
}


size_t EZLanguageParser::ProgramContext::getRuleIndex() const {
  return EZLanguageParser::RuleProgram;
}

void EZLanguageParser::ProgramContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EZLanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProgram(this);
}

void EZLanguageParser::ProgramContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EZLanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProgram(this);
}

EZLanguageParser::ProgramContext* EZLanguageParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, EZLanguageParser::RuleProgram);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(60);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 16628984185242) != 0)) {
      setState(58);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
      case 1: {
        setState(54);
        statement();
        break;
      }

      case 2: {
        setState(55);
        classDeclaration();
        break;
      }

      case 3: {
        setState(56);
        tryCatchStatement();
        break;
      }

      case 4: {
        setState(57);
        runStatement();
        break;
      }

      default:
        break;
      }
      setState(62);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(63);
    match(EZLanguageParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

EZLanguageParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

EZLanguageParser::EnvDeclarationContext* EZLanguageParser::StatementContext::envDeclaration() {
  return getRuleContext<EZLanguageParser::EnvDeclarationContext>(0);
}

EZLanguageParser::IncludeStatementContext* EZLanguageParser::StatementContext::includeStatement() {
  return getRuleContext<EZLanguageParser::IncludeStatementContext>(0);
}

EZLanguageParser::FriendStatementContext* EZLanguageParser::StatementContext::friendStatement() {
  return getRuleContext<EZLanguageParser::FriendStatementContext>(0);
}

EZLanguageParser::FriendFunctionCallContext* EZLanguageParser::StatementContext::friendFunctionCall() {
  return getRuleContext<EZLanguageParser::FriendFunctionCallContext>(0);
}

EZLanguageParser::ExpressionStatementContext* EZLanguageParser::StatementContext::expressionStatement() {
  return getRuleContext<EZLanguageParser::ExpressionStatementContext>(0);
}

EZLanguageParser::VariableDeclarationContext* EZLanguageParser::StatementContext::variableDeclaration() {
  return getRuleContext<EZLanguageParser::VariableDeclarationContext>(0);
}

EZLanguageParser::ControlFlowStatementContext* EZLanguageParser::StatementContext::controlFlowStatement() {
  return getRuleContext<EZLanguageParser::ControlFlowStatementContext>(0);
}

EZLanguageParser::ForeachStatementContext* EZLanguageParser::StatementContext::foreachStatement() {
  return getRuleContext<EZLanguageParser::ForeachStatementContext>(0);
}


size_t EZLanguageParser::StatementContext::getRuleIndex() const {
  return EZLanguageParser::RuleStatement;
}

void EZLanguageParser::StatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EZLanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement(this);
}

void EZLanguageParser::StatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EZLanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement(this);
}

EZLanguageParser::StatementContext* EZLanguageParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 2, EZLanguageParser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(73);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(65);
      envDeclaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(66);
      includeStatement();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(67);
      friendStatement();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(68);
      friendFunctionCall();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(69);
      expressionStatement();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(70);
      variableDeclaration();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(71);
      controlFlowStatement();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(72);
      foreachStatement();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnvDeclarationContext ------------------------------------------------------------------

EZLanguageParser::EnvDeclarationContext::EnvDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EZLanguageParser::EnvDeclarationContext::IDENTIFIER() {
  return getToken(EZLanguageParser::IDENTIFIER, 0);
}


size_t EZLanguageParser::EnvDeclarationContext::getRuleIndex() const {
  return EZLanguageParser::RuleEnvDeclaration;
}

void EZLanguageParser::EnvDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EZLanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnvDeclaration(this);
}

void EZLanguageParser::EnvDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EZLanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnvDeclaration(this);
}

EZLanguageParser::EnvDeclarationContext* EZLanguageParser::envDeclaration() {
  EnvDeclarationContext *_localctx = _tracker.createInstance<EnvDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 4, EZLanguageParser::RuleEnvDeclaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(75);
    match(EZLanguageParser::T__0);
    setState(76);
    match(EZLanguageParser::IDENTIFIER);
    setState(77);
    match(EZLanguageParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IncludeStatementContext ------------------------------------------------------------------

EZLanguageParser::IncludeStatementContext::IncludeStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EZLanguageParser::IncludeStatementContext::IDENTIFIER() {
  return getToken(EZLanguageParser::IDENTIFIER, 0);
}


size_t EZLanguageParser::IncludeStatementContext::getRuleIndex() const {
  return EZLanguageParser::RuleIncludeStatement;
}

void EZLanguageParser::IncludeStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EZLanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIncludeStatement(this);
}

void EZLanguageParser::IncludeStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EZLanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIncludeStatement(this);
}

EZLanguageParser::IncludeStatementContext* EZLanguageParser::includeStatement() {
  IncludeStatementContext *_localctx = _tracker.createInstance<IncludeStatementContext>(_ctx, getState());
  enterRule(_localctx, 6, EZLanguageParser::RuleIncludeStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(79);
    match(EZLanguageParser::T__2);
    setState(80);
    match(EZLanguageParser::IDENTIFIER);
    setState(81);
    match(EZLanguageParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FriendStatementContext ------------------------------------------------------------------

EZLanguageParser::FriendStatementContext::FriendStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> EZLanguageParser::FriendStatementContext::IDENTIFIER() {
  return getTokens(EZLanguageParser::IDENTIFIER);
}

tree::TerminalNode* EZLanguageParser::FriendStatementContext::IDENTIFIER(size_t i) {
  return getToken(EZLanguageParser::IDENTIFIER, i);
}


size_t EZLanguageParser::FriendStatementContext::getRuleIndex() const {
  return EZLanguageParser::RuleFriendStatement;
}

void EZLanguageParser::FriendStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EZLanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFriendStatement(this);
}

void EZLanguageParser::FriendStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EZLanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFriendStatement(this);
}

EZLanguageParser::FriendStatementContext* EZLanguageParser::friendStatement() {
  FriendStatementContext *_localctx = _tracker.createInstance<FriendStatementContext>(_ctx, getState());
  enterRule(_localctx, 8, EZLanguageParser::RuleFriendStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(83);
    match(EZLanguageParser::T__3);
    setState(84);
    match(EZLanguageParser::IDENTIFIER);
    setState(85);
    match(EZLanguageParser::T__4);
    setState(86);
    match(EZLanguageParser::IDENTIFIER);
    setState(87);
    match(EZLanguageParser::T__5);
    setState(88);
    match(EZLanguageParser::IDENTIFIER);
    setState(89);
    match(EZLanguageParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassDeclarationContext ------------------------------------------------------------------

EZLanguageParser::ClassDeclarationContext::ClassDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> EZLanguageParser::ClassDeclarationContext::IDENTIFIER() {
  return getTokens(EZLanguageParser::IDENTIFIER);
}

tree::TerminalNode* EZLanguageParser::ClassDeclarationContext::IDENTIFIER(size_t i) {
  return getToken(EZLanguageParser::IDENTIFIER, i);
}

EZLanguageParser::AccessModifierContext* EZLanguageParser::ClassDeclarationContext::accessModifier() {
  return getRuleContext<EZLanguageParser::AccessModifierContext>(0);
}

std::vector<EZLanguageParser::VariableDeclarationContext *> EZLanguageParser::ClassDeclarationContext::variableDeclaration() {
  return getRuleContexts<EZLanguageParser::VariableDeclarationContext>();
}

EZLanguageParser::VariableDeclarationContext* EZLanguageParser::ClassDeclarationContext::variableDeclaration(size_t i) {
  return getRuleContext<EZLanguageParser::VariableDeclarationContext>(i);
}

std::vector<EZLanguageParser::FunctionDeclarationContext *> EZLanguageParser::ClassDeclarationContext::functionDeclaration() {
  return getRuleContexts<EZLanguageParser::FunctionDeclarationContext>();
}

EZLanguageParser::FunctionDeclarationContext* EZLanguageParser::ClassDeclarationContext::functionDeclaration(size_t i) {
  return getRuleContext<EZLanguageParser::FunctionDeclarationContext>(i);
}


size_t EZLanguageParser::ClassDeclarationContext::getRuleIndex() const {
  return EZLanguageParser::RuleClassDeclaration;
}

void EZLanguageParser::ClassDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EZLanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassDeclaration(this);
}

void EZLanguageParser::ClassDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EZLanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassDeclaration(this);
}

EZLanguageParser::ClassDeclarationContext* EZLanguageParser::classDeclaration() {
  ClassDeclarationContext *_localctx = _tracker.createInstance<ClassDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 10, EZLanguageParser::RuleClassDeclaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(92);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 939524096) != 0)) {
      setState(91);
      accessModifier();
    }
    setState(94);
    match(EZLanguageParser::T__6);
    setState(95);
    match(EZLanguageParser::IDENTIFIER);
    setState(96);
    match(EZLanguageParser::T__7);
    setState(97);
    match(EZLanguageParser::T__8);
    setState(100);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == EZLanguageParser::T__9) {
      setState(98);
      match(EZLanguageParser::T__9);
      setState(99);
      match(EZLanguageParser::IDENTIFIER);
    }
    setState(111);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == EZLanguageParser::T__10) {
      setState(102);
      match(EZLanguageParser::T__10);
      setState(103);
      match(EZLanguageParser::IDENTIFIER);
      setState(108);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == EZLanguageParser::T__11) {
        setState(104);
        match(EZLanguageParser::T__11);
        setState(105);
        match(EZLanguageParser::IDENTIFIER);
        setState(110);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(113);
    match(EZLanguageParser::T__12);
    setState(118);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 136230993920) != 0)) {
      setState(116);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
      case 1: {
        setState(114);
        variableDeclaration();
        break;
      }

      case 2: {
        setState(115);
        functionDeclaration();
        break;
      }

      default:
        break;
      }
      setState(120);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(121);
    match(EZLanguageParser::T__13);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableDeclarationContext ------------------------------------------------------------------

EZLanguageParser::VariableDeclarationContext::VariableDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

EZLanguageParser::TypeContext* EZLanguageParser::VariableDeclarationContext::type() {
  return getRuleContext<EZLanguageParser::TypeContext>(0);
}

tree::TerminalNode* EZLanguageParser::VariableDeclarationContext::IDENTIFIER() {
  return getToken(EZLanguageParser::IDENTIFIER, 0);
}

EZLanguageParser::AccessModifierContext* EZLanguageParser::VariableDeclarationContext::accessModifier() {
  return getRuleContext<EZLanguageParser::AccessModifierContext>(0);
}

EZLanguageParser::ExpressionContext* EZLanguageParser::VariableDeclarationContext::expression() {
  return getRuleContext<EZLanguageParser::ExpressionContext>(0);
}


size_t EZLanguageParser::VariableDeclarationContext::getRuleIndex() const {
  return EZLanguageParser::RuleVariableDeclaration;
}

void EZLanguageParser::VariableDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EZLanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariableDeclaration(this);
}

void EZLanguageParser::VariableDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EZLanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariableDeclaration(this);
}

EZLanguageParser::VariableDeclarationContext* EZLanguageParser::variableDeclaration() {
  VariableDeclarationContext *_localctx = _tracker.createInstance<VariableDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 12, EZLanguageParser::RuleVariableDeclaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(124);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 939524096) != 0)) {
      setState(123);
      accessModifier();
    }
    setState(126);
    type();
    setState(127);
    match(EZLanguageParser::IDENTIFIER);
    setState(130);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == EZLanguageParser::T__14) {
      setState(128);
      match(EZLanguageParser::T__14);
      setState(129);
      expression();
    }
    setState(132);
    match(EZLanguageParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionDeclarationContext ------------------------------------------------------------------

EZLanguageParser::FunctionDeclarationContext::FunctionDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

EZLanguageParser::TypeContext* EZLanguageParser::FunctionDeclarationContext::type() {
  return getRuleContext<EZLanguageParser::TypeContext>(0);
}

tree::TerminalNode* EZLanguageParser::FunctionDeclarationContext::IDENTIFIER() {
  return getToken(EZLanguageParser::IDENTIFIER, 0);
}

EZLanguageParser::AccessModifierContext* EZLanguageParser::FunctionDeclarationContext::accessModifier() {
  return getRuleContext<EZLanguageParser::AccessModifierContext>(0);
}

EZLanguageParser::ParameterListContext* EZLanguageParser::FunctionDeclarationContext::parameterList() {
  return getRuleContext<EZLanguageParser::ParameterListContext>(0);
}

std::vector<EZLanguageParser::StatementContext *> EZLanguageParser::FunctionDeclarationContext::statement() {
  return getRuleContexts<EZLanguageParser::StatementContext>();
}

EZLanguageParser::StatementContext* EZLanguageParser::FunctionDeclarationContext::statement(size_t i) {
  return getRuleContext<EZLanguageParser::StatementContext>(i);
}


size_t EZLanguageParser::FunctionDeclarationContext::getRuleIndex() const {
  return EZLanguageParser::RuleFunctionDeclaration;
}

void EZLanguageParser::FunctionDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EZLanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionDeclaration(this);
}

void EZLanguageParser::FunctionDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EZLanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionDeclaration(this);
}

EZLanguageParser::FunctionDeclarationContext* EZLanguageParser::functionDeclaration() {
  FunctionDeclarationContext *_localctx = _tracker.createInstance<FunctionDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 14, EZLanguageParser::RuleFunctionDeclaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(135);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 939524096) != 0)) {
      setState(134);
      accessModifier();
    }
    setState(137);
    type();
    setState(138);
    match(EZLanguageParser::IDENTIFIER);
    setState(139);
    match(EZLanguageParser::T__7);
    setState(141);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 135291469824) != 0)) {
      setState(140);
      parameterList();
    }
    setState(143);
    match(EZLanguageParser::T__8);
    setState(144);
    match(EZLanguageParser::T__12);
    setState(148);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 16628908687642) != 0)) {
      setState(145);
      statement();
      setState(150);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(151);
    match(EZLanguageParser::T__13);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParameterListContext ------------------------------------------------------------------

EZLanguageParser::ParameterListContext::ParameterListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<EZLanguageParser::ParameterContext *> EZLanguageParser::ParameterListContext::parameter() {
  return getRuleContexts<EZLanguageParser::ParameterContext>();
}

EZLanguageParser::ParameterContext* EZLanguageParser::ParameterListContext::parameter(size_t i) {
  return getRuleContext<EZLanguageParser::ParameterContext>(i);
}


size_t EZLanguageParser::ParameterListContext::getRuleIndex() const {
  return EZLanguageParser::RuleParameterList;
}

void EZLanguageParser::ParameterListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EZLanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParameterList(this);
}

void EZLanguageParser::ParameterListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EZLanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParameterList(this);
}

EZLanguageParser::ParameterListContext* EZLanguageParser::parameterList() {
  ParameterListContext *_localctx = _tracker.createInstance<ParameterListContext>(_ctx, getState());
  enterRule(_localctx, 16, EZLanguageParser::RuleParameterList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(153);
    parameter();
    setState(158);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == EZLanguageParser::T__11) {
      setState(154);
      match(EZLanguageParser::T__11);
      setState(155);
      parameter();
      setState(160);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParameterContext ------------------------------------------------------------------

EZLanguageParser::ParameterContext::ParameterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

EZLanguageParser::TypeContext* EZLanguageParser::ParameterContext::type() {
  return getRuleContext<EZLanguageParser::TypeContext>(0);
}

tree::TerminalNode* EZLanguageParser::ParameterContext::IDENTIFIER() {
  return getToken(EZLanguageParser::IDENTIFIER, 0);
}


size_t EZLanguageParser::ParameterContext::getRuleIndex() const {
  return EZLanguageParser::RuleParameter;
}

void EZLanguageParser::ParameterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EZLanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParameter(this);
}

void EZLanguageParser::ParameterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EZLanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParameter(this);
}

EZLanguageParser::ParameterContext* EZLanguageParser::parameter() {
  ParameterContext *_localctx = _tracker.createInstance<ParameterContext>(_ctx, getState());
  enterRule(_localctx, 18, EZLanguageParser::RuleParameter);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(161);
    type();
    setState(162);
    match(EZLanguageParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionCallContext ------------------------------------------------------------------

EZLanguageParser::FunctionCallContext::FunctionCallContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EZLanguageParser::FunctionCallContext::IDENTIFIER() {
  return getToken(EZLanguageParser::IDENTIFIER, 0);
}

EZLanguageParser::ArgumentListContext* EZLanguageParser::FunctionCallContext::argumentList() {
  return getRuleContext<EZLanguageParser::ArgumentListContext>(0);
}


size_t EZLanguageParser::FunctionCallContext::getRuleIndex() const {
  return EZLanguageParser::RuleFunctionCall;
}

void EZLanguageParser::FunctionCallContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EZLanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionCall(this);
}

void EZLanguageParser::FunctionCallContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EZLanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionCall(this);
}

EZLanguageParser::FunctionCallContext* EZLanguageParser::functionCall() {
  FunctionCallContext *_localctx = _tracker.createInstance<FunctionCallContext>(_ctx, getState());
  enterRule(_localctx, 20, EZLanguageParser::RuleFunctionCall);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(164);
    match(EZLanguageParser::IDENTIFIER);
    setState(165);
    match(EZLanguageParser::T__7);
    setState(167);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 16492674416896) != 0)) {
      setState(166);
      argumentList();
    }
    setState(169);
    match(EZLanguageParser::T__8);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FriendFunctionCallContext ------------------------------------------------------------------

EZLanguageParser::FriendFunctionCallContext::FriendFunctionCallContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> EZLanguageParser::FriendFunctionCallContext::IDENTIFIER() {
  return getTokens(EZLanguageParser::IDENTIFIER);
}

tree::TerminalNode* EZLanguageParser::FriendFunctionCallContext::IDENTIFIER(size_t i) {
  return getToken(EZLanguageParser::IDENTIFIER, i);
}

EZLanguageParser::ArgumentListContext* EZLanguageParser::FriendFunctionCallContext::argumentList() {
  return getRuleContext<EZLanguageParser::ArgumentListContext>(0);
}


size_t EZLanguageParser::FriendFunctionCallContext::getRuleIndex() const {
  return EZLanguageParser::RuleFriendFunctionCall;
}

void EZLanguageParser::FriendFunctionCallContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EZLanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFriendFunctionCall(this);
}

void EZLanguageParser::FriendFunctionCallContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EZLanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFriendFunctionCall(this);
}

EZLanguageParser::FriendFunctionCallContext* EZLanguageParser::friendFunctionCall() {
  FriendFunctionCallContext *_localctx = _tracker.createInstance<FriendFunctionCallContext>(_ctx, getState());
  enterRule(_localctx, 22, EZLanguageParser::RuleFriendFunctionCall);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(171);
    match(EZLanguageParser::IDENTIFIER);
    setState(172);
    match(EZLanguageParser::T__15);
    setState(173);
    match(EZLanguageParser::IDENTIFIER);
    setState(174);
    match(EZLanguageParser::T__7);
    setState(176);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 16492674416896) != 0)) {
      setState(175);
      argumentList();
    }
    setState(178);
    match(EZLanguageParser::T__8);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArgumentListContext ------------------------------------------------------------------

EZLanguageParser::ArgumentListContext::ArgumentListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<EZLanguageParser::ExpressionContext *> EZLanguageParser::ArgumentListContext::expression() {
  return getRuleContexts<EZLanguageParser::ExpressionContext>();
}

EZLanguageParser::ExpressionContext* EZLanguageParser::ArgumentListContext::expression(size_t i) {
  return getRuleContext<EZLanguageParser::ExpressionContext>(i);
}


size_t EZLanguageParser::ArgumentListContext::getRuleIndex() const {
  return EZLanguageParser::RuleArgumentList;
}

void EZLanguageParser::ArgumentListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EZLanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArgumentList(this);
}

void EZLanguageParser::ArgumentListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EZLanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArgumentList(this);
}

EZLanguageParser::ArgumentListContext* EZLanguageParser::argumentList() {
  ArgumentListContext *_localctx = _tracker.createInstance<ArgumentListContext>(_ctx, getState());
  enterRule(_localctx, 24, EZLanguageParser::RuleArgumentList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(180);
    expression();
    setState(185);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == EZLanguageParser::T__11) {
      setState(181);
      match(EZLanguageParser::T__11);
      setState(182);
      expression();
      setState(187);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ControlFlowStatementContext ------------------------------------------------------------------

EZLanguageParser::ControlFlowStatementContext::ControlFlowStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

EZLanguageParser::IfStatementContext* EZLanguageParser::ControlFlowStatementContext::ifStatement() {
  return getRuleContext<EZLanguageParser::IfStatementContext>(0);
}

EZLanguageParser::LoopStatementContext* EZLanguageParser::ControlFlowStatementContext::loopStatement() {
  return getRuleContext<EZLanguageParser::LoopStatementContext>(0);
}


size_t EZLanguageParser::ControlFlowStatementContext::getRuleIndex() const {
  return EZLanguageParser::RuleControlFlowStatement;
}

void EZLanguageParser::ControlFlowStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EZLanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterControlFlowStatement(this);
}

void EZLanguageParser::ControlFlowStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EZLanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitControlFlowStatement(this);
}

EZLanguageParser::ControlFlowStatementContext* EZLanguageParser::controlFlowStatement() {
  ControlFlowStatementContext *_localctx = _tracker.createInstance<ControlFlowStatementContext>(_ctx, getState());
  enterRule(_localctx, 26, EZLanguageParser::RuleControlFlowStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(190);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case EZLanguageParser::T__16: {
        enterOuterAlt(_localctx, 1);
        setState(188);
        ifStatement();
        break;
      }

      case EZLanguageParser::T__19:
      case EZLanguageParser::T__20: {
        enterOuterAlt(_localctx, 2);
        setState(189);
        loopStatement();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfStatementContext ------------------------------------------------------------------

EZLanguageParser::IfStatementContext::IfStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<EZLanguageParser::ExpressionContext *> EZLanguageParser::IfStatementContext::expression() {
  return getRuleContexts<EZLanguageParser::ExpressionContext>();
}

EZLanguageParser::ExpressionContext* EZLanguageParser::IfStatementContext::expression(size_t i) {
  return getRuleContext<EZLanguageParser::ExpressionContext>(i);
}

std::vector<EZLanguageParser::StatementContext *> EZLanguageParser::IfStatementContext::statement() {
  return getRuleContexts<EZLanguageParser::StatementContext>();
}

EZLanguageParser::StatementContext* EZLanguageParser::IfStatementContext::statement(size_t i) {
  return getRuleContext<EZLanguageParser::StatementContext>(i);
}


size_t EZLanguageParser::IfStatementContext::getRuleIndex() const {
  return EZLanguageParser::RuleIfStatement;
}

void EZLanguageParser::IfStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EZLanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIfStatement(this);
}

void EZLanguageParser::IfStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EZLanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIfStatement(this);
}

EZLanguageParser::IfStatementContext* EZLanguageParser::ifStatement() {
  IfStatementContext *_localctx = _tracker.createInstance<IfStatementContext>(_ctx, getState());
  enterRule(_localctx, 28, EZLanguageParser::RuleIfStatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(192);
    match(EZLanguageParser::T__16);
    setState(193);
    match(EZLanguageParser::T__7);
    setState(194);
    expression();
    setState(195);
    match(EZLanguageParser::T__8);
    setState(196);
    match(EZLanguageParser::T__12);
    setState(200);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 16628908687642) != 0)) {
      setState(197);
      statement();
      setState(202);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(203);
    match(EZLanguageParser::T__13);
    setState(219);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == EZLanguageParser::T__17) {
      setState(204);
      match(EZLanguageParser::T__17);
      setState(205);
      match(EZLanguageParser::T__7);
      setState(206);
      expression();
      setState(207);
      match(EZLanguageParser::T__8);
      setState(208);
      match(EZLanguageParser::T__12);
      setState(212);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 16628908687642) != 0)) {
        setState(209);
        statement();
        setState(214);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(215);
      match(EZLanguageParser::T__13);
      setState(221);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(231);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == EZLanguageParser::T__18) {
      setState(222);
      match(EZLanguageParser::T__18);
      setState(223);
      match(EZLanguageParser::T__12);
      setState(227);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 16628908687642) != 0)) {
        setState(224);
        statement();
        setState(229);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(230);
      match(EZLanguageParser::T__13);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LoopStatementContext ------------------------------------------------------------------

EZLanguageParser::LoopStatementContext::LoopStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

EZLanguageParser::ExpressionContext* EZLanguageParser::LoopStatementContext::expression() {
  return getRuleContext<EZLanguageParser::ExpressionContext>(0);
}

std::vector<EZLanguageParser::StatementContext *> EZLanguageParser::LoopStatementContext::statement() {
  return getRuleContexts<EZLanguageParser::StatementContext>();
}

EZLanguageParser::StatementContext* EZLanguageParser::LoopStatementContext::statement(size_t i) {
  return getRuleContext<EZLanguageParser::StatementContext>(i);
}


size_t EZLanguageParser::LoopStatementContext::getRuleIndex() const {
  return EZLanguageParser::RuleLoopStatement;
}

void EZLanguageParser::LoopStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EZLanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLoopStatement(this);
}

void EZLanguageParser::LoopStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EZLanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLoopStatement(this);
}

EZLanguageParser::LoopStatementContext* EZLanguageParser::loopStatement() {
  LoopStatementContext *_localctx = _tracker.createInstance<LoopStatementContext>(_ctx, getState());
  enterRule(_localctx, 30, EZLanguageParser::RuleLoopStatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(233);
    _la = _input->LA(1);
    if (!(_la == EZLanguageParser::T__19

    || _la == EZLanguageParser::T__20)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(234);
    match(EZLanguageParser::T__7);
    setState(236);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 16492674416896) != 0)) {
      setState(235);
      expression();
    }
    setState(238);
    match(EZLanguageParser::T__8);
    setState(239);
    match(EZLanguageParser::T__12);
    setState(243);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 16628908687642) != 0)) {
      setState(240);
      statement();
      setState(245);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(246);
    match(EZLanguageParser::T__13);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForeachStatementContext ------------------------------------------------------------------

EZLanguageParser::ForeachStatementContext::ForeachStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> EZLanguageParser::ForeachStatementContext::IDENTIFIER() {
  return getTokens(EZLanguageParser::IDENTIFIER);
}

tree::TerminalNode* EZLanguageParser::ForeachStatementContext::IDENTIFIER(size_t i) {
  return getToken(EZLanguageParser::IDENTIFIER, i);
}

std::vector<EZLanguageParser::StatementContext *> EZLanguageParser::ForeachStatementContext::statement() {
  return getRuleContexts<EZLanguageParser::StatementContext>();
}

EZLanguageParser::StatementContext* EZLanguageParser::ForeachStatementContext::statement(size_t i) {
  return getRuleContext<EZLanguageParser::StatementContext>(i);
}


size_t EZLanguageParser::ForeachStatementContext::getRuleIndex() const {
  return EZLanguageParser::RuleForeachStatement;
}

void EZLanguageParser::ForeachStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EZLanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterForeachStatement(this);
}

void EZLanguageParser::ForeachStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EZLanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitForeachStatement(this);
}

EZLanguageParser::ForeachStatementContext* EZLanguageParser::foreachStatement() {
  ForeachStatementContext *_localctx = _tracker.createInstance<ForeachStatementContext>(_ctx, getState());
  enterRule(_localctx, 32, EZLanguageParser::RuleForeachStatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(248);
    match(EZLanguageParser::T__20);
    setState(249);
    match(EZLanguageParser::IDENTIFIER);
    setState(250);
    match(EZLanguageParser::T__21);
    setState(251);
    match(EZLanguageParser::IDENTIFIER);
    setState(252);
    match(EZLanguageParser::T__12);
    setState(256);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 16628908687642) != 0)) {
      setState(253);
      statement();
      setState(258);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(259);
    match(EZLanguageParser::T__13);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TryCatchStatementContext ------------------------------------------------------------------

EZLanguageParser::TryCatchStatementContext::TryCatchStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<EZLanguageParser::StatementContext *> EZLanguageParser::TryCatchStatementContext::statement() {
  return getRuleContexts<EZLanguageParser::StatementContext>();
}

EZLanguageParser::StatementContext* EZLanguageParser::TryCatchStatementContext::statement(size_t i) {
  return getRuleContext<EZLanguageParser::StatementContext>(i);
}

tree::TerminalNode* EZLanguageParser::TryCatchStatementContext::IDENTIFIER() {
  return getToken(EZLanguageParser::IDENTIFIER, 0);
}


size_t EZLanguageParser::TryCatchStatementContext::getRuleIndex() const {
  return EZLanguageParser::RuleTryCatchStatement;
}

void EZLanguageParser::TryCatchStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EZLanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTryCatchStatement(this);
}

void EZLanguageParser::TryCatchStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EZLanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTryCatchStatement(this);
}

EZLanguageParser::TryCatchStatementContext* EZLanguageParser::tryCatchStatement() {
  TryCatchStatementContext *_localctx = _tracker.createInstance<TryCatchStatementContext>(_ctx, getState());
  enterRule(_localctx, 34, EZLanguageParser::RuleTryCatchStatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(261);
    match(EZLanguageParser::T__22);
    setState(262);
    match(EZLanguageParser::T__12);
    setState(266);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 16628908687642) != 0)) {
      setState(263);
      statement();
      setState(268);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(269);
    match(EZLanguageParser::T__13);
    setState(282);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == EZLanguageParser::T__23) {
      setState(270);
      match(EZLanguageParser::T__23);
      setState(271);
      match(EZLanguageParser::T__7);
      setState(272);
      match(EZLanguageParser::IDENTIFIER);
      setState(273);
      match(EZLanguageParser::T__8);
      setState(274);
      match(EZLanguageParser::T__12);
      setState(278);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 16628908687642) != 0)) {
        setState(275);
        statement();
        setState(280);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(281);
      match(EZLanguageParser::T__13);
    }
    setState(293);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == EZLanguageParser::T__24) {
      setState(284);
      match(EZLanguageParser::T__24);
      setState(285);
      match(EZLanguageParser::T__12);
      setState(289);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 16628908687642) != 0)) {
        setState(286);
        statement();
        setState(291);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(292);
      match(EZLanguageParser::T__13);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RunStatementContext ------------------------------------------------------------------

EZLanguageParser::RunStatementContext::RunStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EZLanguageParser::RunStatementContext::IDENTIFIER() {
  return getToken(EZLanguageParser::IDENTIFIER, 0);
}

tree::TerminalNode* EZLanguageParser::RunStatementContext::STRING() {
  return getToken(EZLanguageParser::STRING, 0);
}


size_t EZLanguageParser::RunStatementContext::getRuleIndex() const {
  return EZLanguageParser::RuleRunStatement;
}

void EZLanguageParser::RunStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EZLanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRunStatement(this);
}

void EZLanguageParser::RunStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EZLanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRunStatement(this);
}

EZLanguageParser::RunStatementContext* EZLanguageParser::runStatement() {
  RunStatementContext *_localctx = _tracker.createInstance<RunStatementContext>(_ctx, getState());
  enterRule(_localctx, 36, EZLanguageParser::RuleRunStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(295);
    match(EZLanguageParser::T__25);
    setState(296);
    match(EZLanguageParser::IDENTIFIER);
    setState(297);
    match(EZLanguageParser::T__4);
    setState(298);
    match(EZLanguageParser::STRING);
    setState(299);
    match(EZLanguageParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionStatementContext ------------------------------------------------------------------

EZLanguageParser::ExpressionStatementContext::ExpressionStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

EZLanguageParser::ExpressionContext* EZLanguageParser::ExpressionStatementContext::expression() {
  return getRuleContext<EZLanguageParser::ExpressionContext>(0);
}


size_t EZLanguageParser::ExpressionStatementContext::getRuleIndex() const {
  return EZLanguageParser::RuleExpressionStatement;
}

void EZLanguageParser::ExpressionStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EZLanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpressionStatement(this);
}

void EZLanguageParser::ExpressionStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EZLanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpressionStatement(this);
}

EZLanguageParser::ExpressionStatementContext* EZLanguageParser::expressionStatement() {
  ExpressionStatementContext *_localctx = _tracker.createInstance<ExpressionStatementContext>(_ctx, getState());
  enterRule(_localctx, 38, EZLanguageParser::RuleExpressionStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(301);
    expression();
    setState(302);
    match(EZLanguageParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

EZLanguageParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<EZLanguageParser::PrimaryExpressionContext *> EZLanguageParser::ExpressionContext::primaryExpression() {
  return getRuleContexts<EZLanguageParser::PrimaryExpressionContext>();
}

EZLanguageParser::PrimaryExpressionContext* EZLanguageParser::ExpressionContext::primaryExpression(size_t i) {
  return getRuleContext<EZLanguageParser::PrimaryExpressionContext>(i);
}

std::vector<tree::TerminalNode *> EZLanguageParser::ExpressionContext::OPERATOR() {
  return getTokens(EZLanguageParser::OPERATOR);
}

tree::TerminalNode* EZLanguageParser::ExpressionContext::OPERATOR(size_t i) {
  return getToken(EZLanguageParser::OPERATOR, i);
}


size_t EZLanguageParser::ExpressionContext::getRuleIndex() const {
  return EZLanguageParser::RuleExpression;
}

void EZLanguageParser::ExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EZLanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpression(this);
}

void EZLanguageParser::ExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EZLanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpression(this);
}

EZLanguageParser::ExpressionContext* EZLanguageParser::expression() {
  ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, getState());
  enterRule(_localctx, 40, EZLanguageParser::RuleExpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(304);
    primaryExpression();
    setState(309);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == EZLanguageParser::OPERATOR) {
      setState(305);
      match(EZLanguageParser::OPERATOR);
      setState(306);
      primaryExpression();
      setState(311);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrimaryExpressionContext ------------------------------------------------------------------

EZLanguageParser::PrimaryExpressionContext::PrimaryExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EZLanguageParser::PrimaryExpressionContext::IDENTIFIER() {
  return getToken(EZLanguageParser::IDENTIFIER, 0);
}

EZLanguageParser::LiteralContext* EZLanguageParser::PrimaryExpressionContext::literal() {
  return getRuleContext<EZLanguageParser::LiteralContext>(0);
}

EZLanguageParser::FunctionCallContext* EZLanguageParser::PrimaryExpressionContext::functionCall() {
  return getRuleContext<EZLanguageParser::FunctionCallContext>(0);
}

EZLanguageParser::FriendFunctionCallContext* EZLanguageParser::PrimaryExpressionContext::friendFunctionCall() {
  return getRuleContext<EZLanguageParser::FriendFunctionCallContext>(0);
}

EZLanguageParser::ExpressionContext* EZLanguageParser::PrimaryExpressionContext::expression() {
  return getRuleContext<EZLanguageParser::ExpressionContext>(0);
}


size_t EZLanguageParser::PrimaryExpressionContext::getRuleIndex() const {
  return EZLanguageParser::RulePrimaryExpression;
}

void EZLanguageParser::PrimaryExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EZLanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrimaryExpression(this);
}

void EZLanguageParser::PrimaryExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EZLanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrimaryExpression(this);
}

EZLanguageParser::PrimaryExpressionContext* EZLanguageParser::primaryExpression() {
  PrimaryExpressionContext *_localctx = _tracker.createInstance<PrimaryExpressionContext>(_ctx, getState());
  enterRule(_localctx, 42, EZLanguageParser::RulePrimaryExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(320);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 33, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(312);
      match(EZLanguageParser::IDENTIFIER);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(313);
      literal();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(314);
      functionCall();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(315);
      friendFunctionCall();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(316);
      match(EZLanguageParser::T__7);
      setState(317);
      expression();
      setState(318);
      match(EZLanguageParser::T__8);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LiteralContext ------------------------------------------------------------------

EZLanguageParser::LiteralContext::LiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EZLanguageParser::LiteralContext::STRING() {
  return getToken(EZLanguageParser::STRING, 0);
}

tree::TerminalNode* EZLanguageParser::LiteralContext::NUMBER() {
  return getToken(EZLanguageParser::NUMBER, 0);
}

tree::TerminalNode* EZLanguageParser::LiteralContext::BOOLEAN() {
  return getToken(EZLanguageParser::BOOLEAN, 0);
}


size_t EZLanguageParser::LiteralContext::getRuleIndex() const {
  return EZLanguageParser::RuleLiteral;
}

void EZLanguageParser::LiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EZLanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLiteral(this);
}

void EZLanguageParser::LiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EZLanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLiteral(this);
}

EZLanguageParser::LiteralContext* EZLanguageParser::literal() {
  LiteralContext *_localctx = _tracker.createInstance<LiteralContext>(_ctx, getState());
  enterRule(_localctx, 44, EZLanguageParser::RuleLiteral);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(322);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 14293651161088) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AccessModifierContext ------------------------------------------------------------------

EZLanguageParser::AccessModifierContext::AccessModifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t EZLanguageParser::AccessModifierContext::getRuleIndex() const {
  return EZLanguageParser::RuleAccessModifier;
}

void EZLanguageParser::AccessModifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EZLanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAccessModifier(this);
}

void EZLanguageParser::AccessModifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EZLanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAccessModifier(this);
}

EZLanguageParser::AccessModifierContext* EZLanguageParser::accessModifier() {
  AccessModifierContext *_localctx = _tracker.createInstance<AccessModifierContext>(_ctx, getState());
  enterRule(_localctx, 46, EZLanguageParser::RuleAccessModifier);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(324);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 939524096) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeContext ------------------------------------------------------------------

EZLanguageParser::TypeContext::TypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

EZLanguageParser::BaseTypeContext* EZLanguageParser::TypeContext::baseType() {
  return getRuleContext<EZLanguageParser::BaseTypeContext>(0);
}


size_t EZLanguageParser::TypeContext::getRuleIndex() const {
  return EZLanguageParser::RuleType;
}

void EZLanguageParser::TypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EZLanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterType(this);
}

void EZLanguageParser::TypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EZLanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitType(this);
}

EZLanguageParser::TypeContext* EZLanguageParser::type() {
  TypeContext *_localctx = _tracker.createInstance<TypeContext>(_ctx, getState());
  enterRule(_localctx, 48, EZLanguageParser::RuleType);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(326);
    baseType();
    setState(328);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == EZLanguageParser::T__29) {
      setState(327);
      match(EZLanguageParser::T__29);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BaseTypeContext ------------------------------------------------------------------

EZLanguageParser::BaseTypeContext::BaseTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

EZLanguageParser::MapTypeContext* EZLanguageParser::BaseTypeContext::mapType() {
  return getRuleContext<EZLanguageParser::MapTypeContext>(0);
}


size_t EZLanguageParser::BaseTypeContext::getRuleIndex() const {
  return EZLanguageParser::RuleBaseType;
}

void EZLanguageParser::BaseTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EZLanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBaseType(this);
}

void EZLanguageParser::BaseTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EZLanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBaseType(this);
}

EZLanguageParser::BaseTypeContext* EZLanguageParser::baseType() {
  BaseTypeContext *_localctx = _tracker.createInstance<BaseTypeContext>(_ctx, getState());
  enterRule(_localctx, 50, EZLanguageParser::RuleBaseType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(336);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case EZLanguageParser::T__30: {
        enterOuterAlt(_localctx, 1);
        setState(330);
        match(EZLanguageParser::T__30);
        break;
      }

      case EZLanguageParser::T__31: {
        enterOuterAlt(_localctx, 2);
        setState(331);
        match(EZLanguageParser::T__31);
        break;
      }

      case EZLanguageParser::T__32: {
        enterOuterAlt(_localctx, 3);
        setState(332);
        match(EZLanguageParser::T__32);
        break;
      }

      case EZLanguageParser::T__33: {
        enterOuterAlt(_localctx, 4);
        setState(333);
        match(EZLanguageParser::T__33);
        break;
      }

      case EZLanguageParser::T__34: {
        enterOuterAlt(_localctx, 5);
        setState(334);
        match(EZLanguageParser::T__34);
        break;
      }

      case EZLanguageParser::T__35: {
        enterOuterAlt(_localctx, 6);
        setState(335);
        mapType();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MapTypeContext ------------------------------------------------------------------

EZLanguageParser::MapTypeContext::MapTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<EZLanguageParser::BaseTypeContext *> EZLanguageParser::MapTypeContext::baseType() {
  return getRuleContexts<EZLanguageParser::BaseTypeContext>();
}

EZLanguageParser::BaseTypeContext* EZLanguageParser::MapTypeContext::baseType(size_t i) {
  return getRuleContext<EZLanguageParser::BaseTypeContext>(i);
}


size_t EZLanguageParser::MapTypeContext::getRuleIndex() const {
  return EZLanguageParser::RuleMapType;
}

void EZLanguageParser::MapTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EZLanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMapType(this);
}

void EZLanguageParser::MapTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EZLanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMapType(this);
}

EZLanguageParser::MapTypeContext* EZLanguageParser::mapType() {
  MapTypeContext *_localctx = _tracker.createInstance<MapTypeContext>(_ctx, getState());
  enterRule(_localctx, 52, EZLanguageParser::RuleMapType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(338);
    match(EZLanguageParser::T__35);
    setState(339);
    match(EZLanguageParser::T__36);
    setState(340);
    baseType();
    setState(341);
    match(EZLanguageParser::T__11);
    setState(342);
    baseType();
    setState(343);
    match(EZLanguageParser::T__37);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

void EZLanguageParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  ezlanguageParserInitialize();
#else
  ::antlr4::internal::call_once(ezlanguageParserOnceFlag, ezlanguageParserInitialize);
#endif
}
