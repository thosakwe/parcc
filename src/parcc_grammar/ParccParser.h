
// Generated from /Users/thosakwe/Source/CPP/parcc/src/Parcc.g4 by ANTLR 4.7

#pragma once


#include "antlr4-runtime.h"


namespace parcc_grammar {


class  ParccParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, WS = 11, COMMENT = 12, REGEX = 13, STRING = 14, 
    ID = 15
  };

  enum {
    RuleGrammarUnit = 0, RuleDefinition = 1, RuleRuleDef = 2, RuleAlternative = 3
  };

  ParccParser(antlr4::TokenStream *input);
  ~ParccParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class GrammarUnitContext;
  class DefinitionContext;
  class RuleDefContext;
  class AlternativeContext; 

  class  GrammarUnitContext : public antlr4::ParserRuleContext {
  public:
    GrammarUnitContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<DefinitionContext *> definition();
    DefinitionContext* definition(size_t i);

   
  };

  GrammarUnitContext* grammarUnit();

  class  DefinitionContext : public antlr4::ParserRuleContext {
  public:
    DefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    DefinitionContext() : antlr4::ParserRuleContext() { }
    void copyFrom(DefinitionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  NodeDefinitionContext : public DefinitionContext {
  public:
    NodeDefinitionContext(DefinitionContext *ctx);

    RuleDefContext *ruleDef();
  };

  class  TokenDefinitionContext : public DefinitionContext {
  public:
    TokenDefinitionContext(DefinitionContext *ctx);

    RuleDefContext *ruleDef();
  };

  DefinitionContext* definition();

  class  RuleDefContext : public antlr4::ParserRuleContext {
  public:
    RuleDefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    std::vector<AlternativeContext *> alternative();
    AlternativeContext* alternative(size_t i);

   
  };

  RuleDefContext* ruleDef();

  class  AlternativeContext : public antlr4::ParserRuleContext {
  public:
    AlternativeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    AlternativeContext() : antlr4::ParserRuleContext() { }
    void copyFrom(AlternativeContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ParenthesizedAlternativeContext : public AlternativeContext {
  public:
    ParenthesizedAlternativeContext(AlternativeContext *ctx);

    RuleDefContext *ruleDef();
  };

  class  OrAlternativeContext : public AlternativeContext {
  public:
    OrAlternativeContext(AlternativeContext *ctx);

    std::vector<RuleDefContext *> ruleDef();
    RuleDefContext* ruleDef(size_t i);
  };

  class  ReferenceAlternativeContext : public AlternativeContext {
  public:
    ReferenceAlternativeContext(AlternativeContext *ctx);

    antlr4::tree::TerminalNode *ID();
  };

  class  StringLiteralAlternativeContext : public AlternativeContext {
  public:
    StringLiteralAlternativeContext(AlternativeContext *ctx);

    antlr4::tree::TerminalNode *STRING();
  };

  class  RegularExpressionAlternativeContext : public AlternativeContext {
  public:
    RegularExpressionAlternativeContext(AlternativeContext *ctx);

    antlr4::tree::TerminalNode *REGEX();
  };

  class  SwitchAlternativeContext : public AlternativeContext {
  public:
    SwitchAlternativeContext(AlternativeContext *ctx);

    std::vector<RuleDefContext *> ruleDef();
    RuleDefContext* ruleDef(size_t i);
  };

  AlternativeContext* alternative();


private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

}  // namespace parcc_grammar
