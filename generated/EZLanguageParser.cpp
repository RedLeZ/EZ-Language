
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
      "parameterList", "parameter", "returnStatement", "functionCall", "friendFunctionCall", 
      "argumentList", "controlFlowStatement", "ifStatement", "loopStatement", 
      "foreachStatement", "tryCatchStatement", "runStatement", "expressionStatement", 
      "expression", "primaryExpression", "literal", "accessModifier", "type", 
      "baseType", "mapType"
    },
    std::vector<std::string>{
      "", "'env'", "';'", "'import'", "'friend'", "':'", "'as'", "'class'", 
      "'('", "')'", "'extends'", "'implements'", "'{'", "'}'", "'='", "'return'", 
      "'.'", "'if'", "'else if'", "'else'", "'while'", "'for'", "'in'", 
      "'try'", "'catch'", "'finally'", "'run'", "'public'", "'private'", 
      "'protected'", "'[]'", "'int'", "'float'", "'boolean'", "'string'", 
      "'void'", "'map'", "", "'<'", "'>'", "','"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "OPERATOR", "LT", "GT", "COMMA", "BOOLEAN", "IDENTIFIER", 
      "STRING", "NUMBER", "LINE_COMMENT", "BLOCK_COMMENT", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,47,356,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,1,0,1,
  	0,1,0,1,0,5,0,61,8,0,10,0,12,0,64,9,0,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,
  	1,1,1,1,1,1,1,1,3,1,78,8,1,1,2,1,2,1,2,1,2,1,3,1,3,1,3,1,3,1,4,1,4,1,
  	4,1,4,1,4,1,4,1,4,1,4,1,5,3,5,97,8,5,1,5,1,5,1,5,1,5,1,5,1,5,3,5,105,
  	8,5,1,5,1,5,1,5,1,5,5,5,111,8,5,10,5,12,5,114,9,5,3,5,116,8,5,1,5,1,5,
  	1,5,5,5,121,8,5,10,5,12,5,124,9,5,1,5,1,5,1,6,3,6,129,8,6,1,6,1,6,1,6,
  	1,6,3,6,135,8,6,1,6,1,6,1,7,3,7,140,8,7,1,7,1,7,1,7,1,7,3,7,146,8,7,1,
  	7,1,7,1,7,5,7,151,8,7,10,7,12,7,154,9,7,1,7,1,7,1,8,1,8,1,8,5,8,161,8,
  	8,10,8,12,8,164,9,8,1,9,1,9,1,9,1,10,1,10,3,10,171,8,10,1,10,1,10,1,11,
  	1,11,1,11,3,11,178,8,11,1,11,1,11,1,12,1,12,1,12,1,12,1,12,3,12,187,8,
  	12,1,12,1,12,1,13,1,13,1,13,5,13,194,8,13,10,13,12,13,197,9,13,1,14,1,
  	14,3,14,201,8,14,1,15,1,15,1,15,1,15,1,15,1,15,5,15,209,8,15,10,15,12,
  	15,212,9,15,1,15,1,15,1,15,1,15,1,15,1,15,1,15,5,15,221,8,15,10,15,12,
  	15,224,9,15,1,15,1,15,5,15,228,8,15,10,15,12,15,231,9,15,1,15,1,15,1,
  	15,5,15,236,8,15,10,15,12,15,239,9,15,1,15,3,15,242,8,15,1,16,1,16,1,
  	16,3,16,247,8,16,1,16,1,16,1,16,5,16,252,8,16,10,16,12,16,255,9,16,1,
  	16,1,16,1,17,1,17,1,17,1,17,1,17,1,17,5,17,265,8,17,10,17,12,17,268,9,
  	17,1,17,1,17,1,18,1,18,1,18,5,18,275,8,18,10,18,12,18,278,9,18,1,18,1,
  	18,1,18,1,18,1,18,1,18,1,18,5,18,287,8,18,10,18,12,18,290,9,18,1,18,3,
  	18,293,8,18,1,18,1,18,1,18,5,18,298,8,18,10,18,12,18,301,9,18,1,18,3,
  	18,304,8,18,1,19,1,19,1,19,1,19,1,19,1,19,1,20,1,20,1,20,1,21,1,21,1,
  	21,5,21,318,8,21,10,21,12,21,321,9,21,1,22,1,22,1,22,1,22,1,22,1,22,1,
  	22,1,22,3,22,331,8,22,1,23,1,23,1,24,1,24,1,25,1,25,3,25,339,8,25,1,26,
  	1,26,1,26,1,26,1,26,1,26,3,26,347,8,26,1,27,1,27,1,27,1,27,1,27,1,27,
  	1,27,1,27,0,0,28,0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,34,36,
  	38,40,42,44,46,48,50,52,54,0,4,1,0,20,21,1,0,37,39,2,0,41,41,43,44,1,
  	0,27,29,381,0,62,1,0,0,0,2,77,1,0,0,0,4,79,1,0,0,0,6,83,1,0,0,0,8,87,
  	1,0,0,0,10,96,1,0,0,0,12,128,1,0,0,0,14,139,1,0,0,0,16,157,1,0,0,0,18,
  	165,1,0,0,0,20,168,1,0,0,0,22,174,1,0,0,0,24,181,1,0,0,0,26,190,1,0,0,
  	0,28,200,1,0,0,0,30,202,1,0,0,0,32,243,1,0,0,0,34,258,1,0,0,0,36,271,
  	1,0,0,0,38,305,1,0,0,0,40,311,1,0,0,0,42,314,1,0,0,0,44,330,1,0,0,0,46,
  	332,1,0,0,0,48,334,1,0,0,0,50,336,1,0,0,0,52,346,1,0,0,0,54,348,1,0,0,
  	0,56,61,3,2,1,0,57,61,3,10,5,0,58,61,3,36,18,0,59,61,3,38,19,0,60,56,
  	1,0,0,0,60,57,1,0,0,0,60,58,1,0,0,0,60,59,1,0,0,0,61,64,1,0,0,0,62,60,
  	1,0,0,0,62,63,1,0,0,0,63,65,1,0,0,0,64,62,1,0,0,0,65,66,5,0,0,1,66,1,
  	1,0,0,0,67,78,3,4,2,0,68,78,3,6,3,0,69,78,3,8,4,0,70,78,3,24,12,0,71,
  	78,3,40,20,0,72,78,3,12,6,0,73,78,3,28,14,0,74,78,3,34,17,0,75,78,3,14,
  	7,0,76,78,3,20,10,0,77,67,1,0,0,0,77,68,1,0,0,0,77,69,1,0,0,0,77,70,1,
  	0,0,0,77,71,1,0,0,0,77,72,1,0,0,0,77,73,1,0,0,0,77,74,1,0,0,0,77,75,1,
  	0,0,0,77,76,1,0,0,0,78,3,1,0,0,0,79,80,5,1,0,0,80,81,5,42,0,0,81,82,5,
  	2,0,0,82,5,1,0,0,0,83,84,5,3,0,0,84,85,5,42,0,0,85,86,5,2,0,0,86,7,1,
  	0,0,0,87,88,5,4,0,0,88,89,5,42,0,0,89,90,5,5,0,0,90,91,5,42,0,0,91,92,
  	5,6,0,0,92,93,5,42,0,0,93,94,5,2,0,0,94,9,1,0,0,0,95,97,3,48,24,0,96,
  	95,1,0,0,0,96,97,1,0,0,0,97,98,1,0,0,0,98,99,5,7,0,0,99,100,5,42,0,0,
  	100,101,5,8,0,0,101,104,5,9,0,0,102,103,5,10,0,0,103,105,5,42,0,0,104,
  	102,1,0,0,0,104,105,1,0,0,0,105,115,1,0,0,0,106,107,5,11,0,0,107,112,
  	5,42,0,0,108,109,5,40,0,0,109,111,5,42,0,0,110,108,1,0,0,0,111,114,1,
  	0,0,0,112,110,1,0,0,0,112,113,1,0,0,0,113,116,1,0,0,0,114,112,1,0,0,0,
  	115,106,1,0,0,0,115,116,1,0,0,0,116,117,1,0,0,0,117,122,5,12,0,0,118,
  	121,3,12,6,0,119,121,3,14,7,0,120,118,1,0,0,0,120,119,1,0,0,0,121,124,
  	1,0,0,0,122,120,1,0,0,0,122,123,1,0,0,0,123,125,1,0,0,0,124,122,1,0,0,
  	0,125,126,5,13,0,0,126,11,1,0,0,0,127,129,3,48,24,0,128,127,1,0,0,0,128,
  	129,1,0,0,0,129,130,1,0,0,0,130,131,3,50,25,0,131,134,5,42,0,0,132,133,
  	5,14,0,0,133,135,3,42,21,0,134,132,1,0,0,0,134,135,1,0,0,0,135,136,1,
  	0,0,0,136,137,5,2,0,0,137,13,1,0,0,0,138,140,3,48,24,0,139,138,1,0,0,
  	0,139,140,1,0,0,0,140,141,1,0,0,0,141,142,3,50,25,0,142,143,5,42,0,0,
  	143,145,5,8,0,0,144,146,3,16,8,0,145,144,1,0,0,0,145,146,1,0,0,0,146,
  	147,1,0,0,0,147,148,5,9,0,0,148,152,5,12,0,0,149,151,3,2,1,0,150,149,
  	1,0,0,0,151,154,1,0,0,0,152,150,1,0,0,0,152,153,1,0,0,0,153,155,1,0,0,
  	0,154,152,1,0,0,0,155,156,5,13,0,0,156,15,1,0,0,0,157,162,3,18,9,0,158,
  	159,5,40,0,0,159,161,3,18,9,0,160,158,1,0,0,0,161,164,1,0,0,0,162,160,
  	1,0,0,0,162,163,1,0,0,0,163,17,1,0,0,0,164,162,1,0,0,0,165,166,3,50,25,
  	0,166,167,5,42,0,0,167,19,1,0,0,0,168,170,5,15,0,0,169,171,3,42,21,0,
  	170,169,1,0,0,0,170,171,1,0,0,0,171,172,1,0,0,0,172,173,5,2,0,0,173,21,
  	1,0,0,0,174,175,5,42,0,0,175,177,5,8,0,0,176,178,3,26,13,0,177,176,1,
  	0,0,0,177,178,1,0,0,0,178,179,1,0,0,0,179,180,5,9,0,0,180,23,1,0,0,0,
  	181,182,5,42,0,0,182,183,5,16,0,0,183,184,5,42,0,0,184,186,5,8,0,0,185,
  	187,3,26,13,0,186,185,1,0,0,0,186,187,1,0,0,0,187,188,1,0,0,0,188,189,
  	5,9,0,0,189,25,1,0,0,0,190,195,3,42,21,0,191,192,5,40,0,0,192,194,3,42,
  	21,0,193,191,1,0,0,0,194,197,1,0,0,0,195,193,1,0,0,0,195,196,1,0,0,0,
  	196,27,1,0,0,0,197,195,1,0,0,0,198,201,3,30,15,0,199,201,3,32,16,0,200,
  	198,1,0,0,0,200,199,1,0,0,0,201,29,1,0,0,0,202,203,5,17,0,0,203,204,5,
  	8,0,0,204,205,3,42,21,0,205,206,5,9,0,0,206,210,5,12,0,0,207,209,3,2,
  	1,0,208,207,1,0,0,0,209,212,1,0,0,0,210,208,1,0,0,0,210,211,1,0,0,0,211,
  	213,1,0,0,0,212,210,1,0,0,0,213,229,5,13,0,0,214,215,5,18,0,0,215,216,
  	5,8,0,0,216,217,3,42,21,0,217,218,5,9,0,0,218,222,5,12,0,0,219,221,3,
  	2,1,0,220,219,1,0,0,0,221,224,1,0,0,0,222,220,1,0,0,0,222,223,1,0,0,0,
  	223,225,1,0,0,0,224,222,1,0,0,0,225,226,5,13,0,0,226,228,1,0,0,0,227,
  	214,1,0,0,0,228,231,1,0,0,0,229,227,1,0,0,0,229,230,1,0,0,0,230,241,1,
  	0,0,0,231,229,1,0,0,0,232,233,5,19,0,0,233,237,5,12,0,0,234,236,3,2,1,
  	0,235,234,1,0,0,0,236,239,1,0,0,0,237,235,1,0,0,0,237,238,1,0,0,0,238,
  	240,1,0,0,0,239,237,1,0,0,0,240,242,5,13,0,0,241,232,1,0,0,0,241,242,
  	1,0,0,0,242,31,1,0,0,0,243,244,7,0,0,0,244,246,5,8,0,0,245,247,3,42,21,
  	0,246,245,1,0,0,0,246,247,1,0,0,0,247,248,1,0,0,0,248,249,5,9,0,0,249,
  	253,5,12,0,0,250,252,3,2,1,0,251,250,1,0,0,0,252,255,1,0,0,0,253,251,
  	1,0,0,0,253,254,1,0,0,0,254,256,1,0,0,0,255,253,1,0,0,0,256,257,5,13,
  	0,0,257,33,1,0,0,0,258,259,5,21,0,0,259,260,5,42,0,0,260,261,5,22,0,0,
  	261,262,5,42,0,0,262,266,5,12,0,0,263,265,3,2,1,0,264,263,1,0,0,0,265,
  	268,1,0,0,0,266,264,1,0,0,0,266,267,1,0,0,0,267,269,1,0,0,0,268,266,1,
  	0,0,0,269,270,5,13,0,0,270,35,1,0,0,0,271,272,5,23,0,0,272,276,5,12,0,
  	0,273,275,3,2,1,0,274,273,1,0,0,0,275,278,1,0,0,0,276,274,1,0,0,0,276,
  	277,1,0,0,0,277,279,1,0,0,0,278,276,1,0,0,0,279,292,5,13,0,0,280,281,
  	5,24,0,0,281,282,5,8,0,0,282,283,5,42,0,0,283,284,5,9,0,0,284,288,5,12,
  	0,0,285,287,3,2,1,0,286,285,1,0,0,0,287,290,1,0,0,0,288,286,1,0,0,0,288,
  	289,1,0,0,0,289,291,1,0,0,0,290,288,1,0,0,0,291,293,5,13,0,0,292,280,
  	1,0,0,0,292,293,1,0,0,0,293,303,1,0,0,0,294,295,5,25,0,0,295,299,5,12,
  	0,0,296,298,3,2,1,0,297,296,1,0,0,0,298,301,1,0,0,0,299,297,1,0,0,0,299,
  	300,1,0,0,0,300,302,1,0,0,0,301,299,1,0,0,0,302,304,5,13,0,0,303,294,
  	1,0,0,0,303,304,1,0,0,0,304,37,1,0,0,0,305,306,5,26,0,0,306,307,5,42,
  	0,0,307,308,5,5,0,0,308,309,5,43,0,0,309,310,5,2,0,0,310,39,1,0,0,0,311,
  	312,3,42,21,0,312,313,5,2,0,0,313,41,1,0,0,0,314,319,3,44,22,0,315,316,
  	7,1,0,0,316,318,3,44,22,0,317,315,1,0,0,0,318,321,1,0,0,0,319,317,1,0,
  	0,0,319,320,1,0,0,0,320,43,1,0,0,0,321,319,1,0,0,0,322,331,5,42,0,0,323,
  	331,3,46,23,0,324,331,3,22,11,0,325,331,3,24,12,0,326,327,5,8,0,0,327,
  	328,3,42,21,0,328,329,5,9,0,0,329,331,1,0,0,0,330,322,1,0,0,0,330,323,
  	1,0,0,0,330,324,1,0,0,0,330,325,1,0,0,0,330,326,1,0,0,0,331,45,1,0,0,
  	0,332,333,7,2,0,0,333,47,1,0,0,0,334,335,7,3,0,0,335,49,1,0,0,0,336,338,
  	3,52,26,0,337,339,5,30,0,0,338,337,1,0,0,0,338,339,1,0,0,0,339,51,1,0,
  	0,0,340,347,5,31,0,0,341,347,5,32,0,0,342,347,5,33,0,0,343,347,5,34,0,
  	0,344,347,5,35,0,0,345,347,3,54,27,0,346,340,1,0,0,0,346,341,1,0,0,0,
  	346,342,1,0,0,0,346,343,1,0,0,0,346,344,1,0,0,0,346,345,1,0,0,0,347,53,
  	1,0,0,0,348,349,5,36,0,0,349,350,5,38,0,0,350,351,3,52,26,0,351,352,5,
  	40,0,0,352,353,3,52,26,0,353,354,5,39,0,0,354,55,1,0,0,0,37,60,62,77,
  	96,104,112,115,120,122,128,134,139,145,152,162,170,177,186,195,200,210,
  	222,229,237,241,246,253,266,276,288,292,299,303,319,330,338,346
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
    setState(62);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 33121658634650) != 0)) {
      setState(60);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
      case 1: {
        setState(56);
        statement();
        break;
      }

      case 2: {
        setState(57);
        classDeclaration();
        break;
      }

      case 3: {
        setState(58);
        tryCatchStatement();
        break;
      }

      case 4: {
        setState(59);
        runStatement();
        break;
      }

      default:
        break;
      }
      setState(64);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(65);
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

EZLanguageParser::FunctionDeclarationContext* EZLanguageParser::StatementContext::functionDeclaration() {
  return getRuleContext<EZLanguageParser::FunctionDeclarationContext>(0);
}

EZLanguageParser::ReturnStatementContext* EZLanguageParser::StatementContext::returnStatement() {
  return getRuleContext<EZLanguageParser::ReturnStatementContext>(0);
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
    setState(77);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(67);
      envDeclaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(68);
      includeStatement();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(69);
      friendStatement();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(70);
      friendFunctionCall();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(71);
      expressionStatement();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(72);
      variableDeclaration();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(73);
      controlFlowStatement();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(74);
      foreachStatement();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(75);
      functionDeclaration();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(76);
      returnStatement();
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
    setState(79);
    match(EZLanguageParser::T__0);
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
    setState(83);
    match(EZLanguageParser::T__2);
    setState(84);
    match(EZLanguageParser::IDENTIFIER);
    setState(85);
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
    setState(87);
    match(EZLanguageParser::T__3);
    setState(88);
    match(EZLanguageParser::IDENTIFIER);
    setState(89);
    match(EZLanguageParser::T__4);
    setState(90);
    match(EZLanguageParser::IDENTIFIER);
    setState(91);
    match(EZLanguageParser::T__5);
    setState(92);
    match(EZLanguageParser::IDENTIFIER);
    setState(93);
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

std::vector<tree::TerminalNode *> EZLanguageParser::ClassDeclarationContext::COMMA() {
  return getTokens(EZLanguageParser::COMMA);
}

tree::TerminalNode* EZLanguageParser::ClassDeclarationContext::COMMA(size_t i) {
  return getToken(EZLanguageParser::COMMA, i);
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
    setState(96);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 939524096) != 0)) {
      setState(95);
      accessModifier();
    }
    setState(98);
    match(EZLanguageParser::T__6);
    setState(99);
    match(EZLanguageParser::IDENTIFIER);
    setState(100);
    match(EZLanguageParser::T__7);
    setState(101);
    match(EZLanguageParser::T__8);
    setState(104);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == EZLanguageParser::T__9) {
      setState(102);
      match(EZLanguageParser::T__9);
      setState(103);
      match(EZLanguageParser::IDENTIFIER);
    }
    setState(115);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == EZLanguageParser::T__10) {
      setState(106);
      match(EZLanguageParser::T__10);
      setState(107);
      match(EZLanguageParser::IDENTIFIER);
      setState(112);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == EZLanguageParser::COMMA) {
        setState(108);
        match(EZLanguageParser::COMMA);
        setState(109);
        match(EZLanguageParser::IDENTIFIER);
        setState(114);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(117);
    match(EZLanguageParser::T__11);
    setState(122);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 136230993920) != 0)) {
      setState(120);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
      case 1: {
        setState(118);
        variableDeclaration();
        break;
      }

      case 2: {
        setState(119);
        functionDeclaration();
        break;
      }

      default:
        break;
      }
      setState(124);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(125);
    match(EZLanguageParser::T__12);
   
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
    setState(128);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 939524096) != 0)) {
      setState(127);
      accessModifier();
    }
    setState(130);
    type();
    setState(131);
    match(EZLanguageParser::IDENTIFIER);
    setState(134);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == EZLanguageParser::T__13) {
      setState(132);
      match(EZLanguageParser::T__13);
      setState(133);
      expression();
    }
    setState(136);
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
    setState(139);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 939524096) != 0)) {
      setState(138);
      accessModifier();
    }
    setState(141);
    type();
    setState(142);
    match(EZLanguageParser::IDENTIFIER);
    setState(143);
    match(EZLanguageParser::T__7);
    setState(145);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 135291469824) != 0)) {
      setState(144);
      parameterList();
    }
    setState(147);
    match(EZLanguageParser::T__8);
    setState(148);
    match(EZLanguageParser::T__11);
    setState(152);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 33121583137050) != 0)) {
      setState(149);
      statement();
      setState(154);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(155);
    match(EZLanguageParser::T__12);
   
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

std::vector<tree::TerminalNode *> EZLanguageParser::ParameterListContext::COMMA() {
  return getTokens(EZLanguageParser::COMMA);
}

tree::TerminalNode* EZLanguageParser::ParameterListContext::COMMA(size_t i) {
  return getToken(EZLanguageParser::COMMA, i);
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
    setState(157);
    parameter();
    setState(162);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == EZLanguageParser::COMMA) {
      setState(158);
      match(EZLanguageParser::COMMA);
      setState(159);
      parameter();
      setState(164);
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
    setState(165);
    type();
    setState(166);
    match(EZLanguageParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ReturnStatementContext ------------------------------------------------------------------

EZLanguageParser::ReturnStatementContext::ReturnStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

EZLanguageParser::ExpressionContext* EZLanguageParser::ReturnStatementContext::expression() {
  return getRuleContext<EZLanguageParser::ExpressionContext>(0);
}


size_t EZLanguageParser::ReturnStatementContext::getRuleIndex() const {
  return EZLanguageParser::RuleReturnStatement;
}

void EZLanguageParser::ReturnStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EZLanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReturnStatement(this);
}

void EZLanguageParser::ReturnStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EZLanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReturnStatement(this);
}

EZLanguageParser::ReturnStatementContext* EZLanguageParser::returnStatement() {
  ReturnStatementContext *_localctx = _tracker.createInstance<ReturnStatementContext>(_ctx, getState());
  enterRule(_localctx, 20, EZLanguageParser::RuleReturnStatement);
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
    setState(168);
    match(EZLanguageParser::T__14);
    setState(170);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 32985348833536) != 0)) {
      setState(169);
      expression();
    }
    setState(172);
    match(EZLanguageParser::T__1);
   
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
  enterRule(_localctx, 22, EZLanguageParser::RuleFunctionCall);
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
    setState(174);
    match(EZLanguageParser::IDENTIFIER);
    setState(175);
    match(EZLanguageParser::T__7);
    setState(177);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 32985348833536) != 0)) {
      setState(176);
      argumentList();
    }
    setState(179);
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
  enterRule(_localctx, 24, EZLanguageParser::RuleFriendFunctionCall);
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
    setState(181);
    match(EZLanguageParser::IDENTIFIER);
    setState(182);
    match(EZLanguageParser::T__15);
    setState(183);
    match(EZLanguageParser::IDENTIFIER);
    setState(184);
    match(EZLanguageParser::T__7);
    setState(186);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 32985348833536) != 0)) {
      setState(185);
      argumentList();
    }
    setState(188);
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

std::vector<tree::TerminalNode *> EZLanguageParser::ArgumentListContext::COMMA() {
  return getTokens(EZLanguageParser::COMMA);
}

tree::TerminalNode* EZLanguageParser::ArgumentListContext::COMMA(size_t i) {
  return getToken(EZLanguageParser::COMMA, i);
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
  enterRule(_localctx, 26, EZLanguageParser::RuleArgumentList);
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
    setState(190);
    expression();
    setState(195);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == EZLanguageParser::COMMA) {
      setState(191);
      match(EZLanguageParser::COMMA);
      setState(192);
      expression();
      setState(197);
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
  enterRule(_localctx, 28, EZLanguageParser::RuleControlFlowStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(200);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case EZLanguageParser::T__16: {
        enterOuterAlt(_localctx, 1);
        setState(198);
        ifStatement();
        break;
      }

      case EZLanguageParser::T__19:
      case EZLanguageParser::T__20: {
        enterOuterAlt(_localctx, 2);
        setState(199);
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
  enterRule(_localctx, 30, EZLanguageParser::RuleIfStatement);
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
    setState(202);
    match(EZLanguageParser::T__16);
    setState(203);
    match(EZLanguageParser::T__7);
    setState(204);
    expression();
    setState(205);
    match(EZLanguageParser::T__8);
    setState(206);
    match(EZLanguageParser::T__11);
    setState(210);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 33121583137050) != 0)) {
      setState(207);
      statement();
      setState(212);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(213);
    match(EZLanguageParser::T__12);
    setState(229);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == EZLanguageParser::T__17) {
      setState(214);
      match(EZLanguageParser::T__17);
      setState(215);
      match(EZLanguageParser::T__7);
      setState(216);
      expression();
      setState(217);
      match(EZLanguageParser::T__8);
      setState(218);
      match(EZLanguageParser::T__11);
      setState(222);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 33121583137050) != 0)) {
        setState(219);
        statement();
        setState(224);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(225);
      match(EZLanguageParser::T__12);
      setState(231);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(241);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == EZLanguageParser::T__18) {
      setState(232);
      match(EZLanguageParser::T__18);
      setState(233);
      match(EZLanguageParser::T__11);
      setState(237);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 33121583137050) != 0)) {
        setState(234);
        statement();
        setState(239);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(240);
      match(EZLanguageParser::T__12);
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
  enterRule(_localctx, 32, EZLanguageParser::RuleLoopStatement);
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
    setState(243);
    _la = _input->LA(1);
    if (!(_la == EZLanguageParser::T__19

    || _la == EZLanguageParser::T__20)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(244);
    match(EZLanguageParser::T__7);
    setState(246);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 32985348833536) != 0)) {
      setState(245);
      expression();
    }
    setState(248);
    match(EZLanguageParser::T__8);
    setState(249);
    match(EZLanguageParser::T__11);
    setState(253);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 33121583137050) != 0)) {
      setState(250);
      statement();
      setState(255);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(256);
    match(EZLanguageParser::T__12);
   
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
  enterRule(_localctx, 34, EZLanguageParser::RuleForeachStatement);
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
    setState(258);
    match(EZLanguageParser::T__20);
    setState(259);
    match(EZLanguageParser::IDENTIFIER);
    setState(260);
    match(EZLanguageParser::T__21);
    setState(261);
    match(EZLanguageParser::IDENTIFIER);
    setState(262);
    match(EZLanguageParser::T__11);
    setState(266);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 33121583137050) != 0)) {
      setState(263);
      statement();
      setState(268);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(269);
    match(EZLanguageParser::T__12);
   
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
  enterRule(_localctx, 36, EZLanguageParser::RuleTryCatchStatement);
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
    setState(271);
    match(EZLanguageParser::T__22);
    setState(272);
    match(EZLanguageParser::T__11);
    setState(276);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 33121583137050) != 0)) {
      setState(273);
      statement();
      setState(278);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(279);
    match(EZLanguageParser::T__12);
    setState(292);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == EZLanguageParser::T__23) {
      setState(280);
      match(EZLanguageParser::T__23);
      setState(281);
      match(EZLanguageParser::T__7);
      setState(282);
      match(EZLanguageParser::IDENTIFIER);
      setState(283);
      match(EZLanguageParser::T__8);
      setState(284);
      match(EZLanguageParser::T__11);
      setState(288);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 33121583137050) != 0)) {
        setState(285);
        statement();
        setState(290);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(291);
      match(EZLanguageParser::T__12);
    }
    setState(303);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == EZLanguageParser::T__24) {
      setState(294);
      match(EZLanguageParser::T__24);
      setState(295);
      match(EZLanguageParser::T__11);
      setState(299);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 33121583137050) != 0)) {
        setState(296);
        statement();
        setState(301);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(302);
      match(EZLanguageParser::T__12);
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
  enterRule(_localctx, 38, EZLanguageParser::RuleRunStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(305);
    match(EZLanguageParser::T__25);
    setState(306);
    match(EZLanguageParser::IDENTIFIER);
    setState(307);
    match(EZLanguageParser::T__4);
    setState(308);
    match(EZLanguageParser::STRING);
    setState(309);
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
  enterRule(_localctx, 40, EZLanguageParser::RuleExpressionStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(311);
    expression();
    setState(312);
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

std::vector<tree::TerminalNode *> EZLanguageParser::ExpressionContext::LT() {
  return getTokens(EZLanguageParser::LT);
}

tree::TerminalNode* EZLanguageParser::ExpressionContext::LT(size_t i) {
  return getToken(EZLanguageParser::LT, i);
}

std::vector<tree::TerminalNode *> EZLanguageParser::ExpressionContext::GT() {
  return getTokens(EZLanguageParser::GT);
}

tree::TerminalNode* EZLanguageParser::ExpressionContext::GT(size_t i) {
  return getToken(EZLanguageParser::GT, i);
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
  enterRule(_localctx, 42, EZLanguageParser::RuleExpression);
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
    setState(314);
    primaryExpression();
    setState(319);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 962072674304) != 0)) {
      setState(315);
      antlrcpp::downCast<ExpressionContext *>(_localctx)->op = _input->LT(1);
      _la = _input->LA(1);
      if (!((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 962072674304) != 0))) {
        antlrcpp::downCast<ExpressionContext *>(_localctx)->op = _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(316);
      primaryExpression();
      setState(321);
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
  enterRule(_localctx, 44, EZLanguageParser::RulePrimaryExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(330);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 34, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(322);
      match(EZLanguageParser::IDENTIFIER);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(323);
      literal();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(324);
      functionCall();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(325);
      friendFunctionCall();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(326);
      match(EZLanguageParser::T__7);
      setState(327);
      expression();
      setState(328);
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
  enterRule(_localctx, 46, EZLanguageParser::RuleLiteral);
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
    setState(332);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 28587302322176) != 0))) {
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
  enterRule(_localctx, 48, EZLanguageParser::RuleAccessModifier);
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
    setState(334);
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
  enterRule(_localctx, 50, EZLanguageParser::RuleType);
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
    setState(336);
    baseType();
    setState(338);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == EZLanguageParser::T__29) {
      setState(337);
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
  enterRule(_localctx, 52, EZLanguageParser::RuleBaseType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(346);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case EZLanguageParser::T__30: {
        enterOuterAlt(_localctx, 1);
        setState(340);
        match(EZLanguageParser::T__30);
        break;
      }

      case EZLanguageParser::T__31: {
        enterOuterAlt(_localctx, 2);
        setState(341);
        match(EZLanguageParser::T__31);
        break;
      }

      case EZLanguageParser::T__32: {
        enterOuterAlt(_localctx, 3);
        setState(342);
        match(EZLanguageParser::T__32);
        break;
      }

      case EZLanguageParser::T__33: {
        enterOuterAlt(_localctx, 4);
        setState(343);
        match(EZLanguageParser::T__33);
        break;
      }

      case EZLanguageParser::T__34: {
        enterOuterAlt(_localctx, 5);
        setState(344);
        match(EZLanguageParser::T__34);
        break;
      }

      case EZLanguageParser::T__35: {
        enterOuterAlt(_localctx, 6);
        setState(345);
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

tree::TerminalNode* EZLanguageParser::MapTypeContext::LT() {
  return getToken(EZLanguageParser::LT, 0);
}

std::vector<EZLanguageParser::BaseTypeContext *> EZLanguageParser::MapTypeContext::baseType() {
  return getRuleContexts<EZLanguageParser::BaseTypeContext>();
}

EZLanguageParser::BaseTypeContext* EZLanguageParser::MapTypeContext::baseType(size_t i) {
  return getRuleContext<EZLanguageParser::BaseTypeContext>(i);
}

tree::TerminalNode* EZLanguageParser::MapTypeContext::COMMA() {
  return getToken(EZLanguageParser::COMMA, 0);
}

tree::TerminalNode* EZLanguageParser::MapTypeContext::GT() {
  return getToken(EZLanguageParser::GT, 0);
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
  enterRule(_localctx, 54, EZLanguageParser::RuleMapType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(348);
    match(EZLanguageParser::T__35);
    setState(349);
    match(EZLanguageParser::LT);
    setState(350);
    baseType();
    setState(351);
    match(EZLanguageParser::COMMA);
    setState(352);
    baseType();
    setState(353);
    match(EZLanguageParser::GT);
   
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
