
// Generated from /Users/thosakwe/Source/CPP/parcc/src/Parcc.g4 by ANTLR 4.7



#include "ParccParser.h"


using namespace antlrcpp;
using namespace parcc_grammar;
using namespace antlr4;

ParccParser::ParccParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

ParccParser::~ParccParser() {
  delete _interpreter;
}

std::string ParccParser::getGrammarFileName() const {
  return "Parcc.g4";
}

const std::vector<std::string>& ParccParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& ParccParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- GrammarUnitContext ------------------------------------------------------------------

ParccParser::GrammarUnitContext::GrammarUnitContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ParccParser::DefinitionContext *> ParccParser::GrammarUnitContext::definition() {
  return getRuleContexts<ParccParser::DefinitionContext>();
}

ParccParser::DefinitionContext* ParccParser::GrammarUnitContext::definition(size_t i) {
  return getRuleContext<ParccParser::DefinitionContext>(i);
}


size_t ParccParser::GrammarUnitContext::getRuleIndex() const {
  return ParccParser::RuleGrammarUnit;
}


ParccParser::GrammarUnitContext* ParccParser::grammarUnit() {
  GrammarUnitContext *_localctx = _tracker.createInstance<GrammarUnitContext>(_ctx, getState());
  enterRule(_localctx, 0, ParccParser::RuleGrammarUnit);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(11);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ParccParser::T__0

    || _la == ParccParser::T__1) {
      setState(8);
      definition();
      setState(13);
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

//----------------- DefinitionContext ------------------------------------------------------------------

ParccParser::DefinitionContext::DefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ParccParser::DefinitionContext::getRuleIndex() const {
  return ParccParser::RuleDefinition;
}

void ParccParser::DefinitionContext::copyFrom(DefinitionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- NodeDefinitionContext ------------------------------------------------------------------

ParccParser::RuleDefContext* ParccParser::NodeDefinitionContext::ruleDef() {
  return getRuleContext<ParccParser::RuleDefContext>(0);
}

ParccParser::NodeDefinitionContext::NodeDefinitionContext(DefinitionContext *ctx) { copyFrom(ctx); }


//----------------- TokenDefinitionContext ------------------------------------------------------------------

ParccParser::RuleDefContext* ParccParser::TokenDefinitionContext::ruleDef() {
  return getRuleContext<ParccParser::RuleDefContext>(0);
}

ParccParser::TokenDefinitionContext::TokenDefinitionContext(DefinitionContext *ctx) { copyFrom(ctx); }


ParccParser::DefinitionContext* ParccParser::definition() {
  DefinitionContext *_localctx = _tracker.createInstance<DefinitionContext>(_ctx, getState());
  enterRule(_localctx, 2, ParccParser::RuleDefinition);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(18);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ParccParser::T__0: {
        _localctx = dynamic_cast<DefinitionContext *>(_tracker.createInstance<ParccParser::TokenDefinitionContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(14);
        match(ParccParser::T__0);
        setState(15);
        ruleDef();
        break;
      }

      case ParccParser::T__1: {
        _localctx = dynamic_cast<DefinitionContext *>(_tracker.createInstance<ParccParser::NodeDefinitionContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(16);
        match(ParccParser::T__1);
        setState(17);
        ruleDef();
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

//----------------- RuleDefContext ------------------------------------------------------------------

ParccParser::RuleDefContext::RuleDefContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ParccParser::RuleDefContext::ID() {
  return getToken(ParccParser::ID, 0);
}

std::vector<ParccParser::AlternativeContext *> ParccParser::RuleDefContext::alternative() {
  return getRuleContexts<ParccParser::AlternativeContext>();
}

ParccParser::AlternativeContext* ParccParser::RuleDefContext::alternative(size_t i) {
  return getRuleContext<ParccParser::AlternativeContext>(i);
}


size_t ParccParser::RuleDefContext::getRuleIndex() const {
  return ParccParser::RuleRuleDef;
}


ParccParser::RuleDefContext* ParccParser::ruleDef() {
  RuleDefContext *_localctx = _tracker.createInstance<RuleDefContext>(_ctx, getState());
  enterRule(_localctx, 4, ParccParser::RuleRuleDef);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(20);
    match(ParccParser::ID);
    setState(21);
    match(ParccParser::T__2);
    setState(23); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(22);
      alternative();
      setState(25); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ParccParser::T__4)
      | (1ULL << ParccParser::T__7)
      | (1ULL << ParccParser::REGEX)
      | (1ULL << ParccParser::STRING)
      | (1ULL << ParccParser::ID))) != 0));
    setState(27);
    match(ParccParser::T__3);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AlternativeContext ------------------------------------------------------------------

ParccParser::AlternativeContext::AlternativeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ParccParser::AlternativeContext::getRuleIndex() const {
  return ParccParser::RuleAlternative;
}

void ParccParser::AlternativeContext::copyFrom(AlternativeContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ParenthesizedAlternativeContext ------------------------------------------------------------------

ParccParser::RuleDefContext* ParccParser::ParenthesizedAlternativeContext::ruleDef() {
  return getRuleContext<ParccParser::RuleDefContext>(0);
}

ParccParser::ParenthesizedAlternativeContext::ParenthesizedAlternativeContext(AlternativeContext *ctx) { copyFrom(ctx); }


//----------------- OrAlternativeContext ------------------------------------------------------------------

std::vector<ParccParser::RuleDefContext *> ParccParser::OrAlternativeContext::ruleDef() {
  return getRuleContexts<ParccParser::RuleDefContext>();
}

ParccParser::RuleDefContext* ParccParser::OrAlternativeContext::ruleDef(size_t i) {
  return getRuleContext<ParccParser::RuleDefContext>(i);
}

ParccParser::OrAlternativeContext::OrAlternativeContext(AlternativeContext *ctx) { copyFrom(ctx); }


//----------------- ReferenceAlternativeContext ------------------------------------------------------------------

tree::TerminalNode* ParccParser::ReferenceAlternativeContext::ID() {
  return getToken(ParccParser::ID, 0);
}

ParccParser::ReferenceAlternativeContext::ReferenceAlternativeContext(AlternativeContext *ctx) { copyFrom(ctx); }


//----------------- StringLiteralAlternativeContext ------------------------------------------------------------------

tree::TerminalNode* ParccParser::StringLiteralAlternativeContext::STRING() {
  return getToken(ParccParser::STRING, 0);
}

ParccParser::StringLiteralAlternativeContext::StringLiteralAlternativeContext(AlternativeContext *ctx) { copyFrom(ctx); }


//----------------- RegularExpressionAlternativeContext ------------------------------------------------------------------

tree::TerminalNode* ParccParser::RegularExpressionAlternativeContext::REGEX() {
  return getToken(ParccParser::REGEX, 0);
}

ParccParser::RegularExpressionAlternativeContext::RegularExpressionAlternativeContext(AlternativeContext *ctx) { copyFrom(ctx); }


//----------------- SwitchAlternativeContext ------------------------------------------------------------------

std::vector<ParccParser::RuleDefContext *> ParccParser::SwitchAlternativeContext::ruleDef() {
  return getRuleContexts<ParccParser::RuleDefContext>();
}

ParccParser::RuleDefContext* ParccParser::SwitchAlternativeContext::ruleDef(size_t i) {
  return getRuleContext<ParccParser::RuleDefContext>(i);
}

ParccParser::SwitchAlternativeContext::SwitchAlternativeContext(AlternativeContext *ctx) { copyFrom(ctx); }


ParccParser::AlternativeContext* ParccParser::alternative() {
  AlternativeContext *_localctx = _tracker.createInstance<AlternativeContext>(_ctx, getState());
  enterRule(_localctx, 6, ParccParser::RuleAlternative);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(49);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<AlternativeContext *>(_tracker.createInstance<ParccParser::ReferenceAlternativeContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(29);
      match(ParccParser::ID);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<AlternativeContext *>(_tracker.createInstance<ParccParser::StringLiteralAlternativeContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(30);
      match(ParccParser::STRING);
      break;
    }

    case 3: {
      _localctx = dynamic_cast<AlternativeContext *>(_tracker.createInstance<ParccParser::RegularExpressionAlternativeContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(31);
      match(ParccParser::REGEX);
      break;
    }

    case 4: {
      _localctx = dynamic_cast<AlternativeContext *>(_tracker.createInstance<ParccParser::SwitchAlternativeContext>(_localctx));
      enterOuterAlt(_localctx, 4);
      setState(32);
      match(ParccParser::T__4);
      setState(33);
      match(ParccParser::T__5);
      setState(37);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == ParccParser::ID) {
        setState(34);
        ruleDef();
        setState(39);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(40);
      match(ParccParser::T__6);
      break;
    }

    case 5: {
      _localctx = dynamic_cast<AlternativeContext *>(_tracker.createInstance<ParccParser::ParenthesizedAlternativeContext>(_localctx));
      enterOuterAlt(_localctx, 5);
      setState(41);
      match(ParccParser::T__7);
      setState(42);
      ruleDef();
      setState(43);
      match(ParccParser::T__8);
      break;
    }

    case 6: {
      _localctx = dynamic_cast<AlternativeContext *>(_tracker.createInstance<ParccParser::OrAlternativeContext>(_localctx));
      enterOuterAlt(_localctx, 6);
      setState(45);
      ruleDef();
      setState(46);
      match(ParccParser::T__9);
      setState(47);
      ruleDef();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

// Static vars and initialization.
std::vector<dfa::DFA> ParccParser::_decisionToDFA;
atn::PredictionContextCache ParccParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN ParccParser::_atn;
std::vector<uint16_t> ParccParser::_serializedATN;

std::vector<std::string> ParccParser::_ruleNames = {
  "grammarUnit", "definition", "ruleDef", "alternative"
};

std::vector<std::string> ParccParser::_literalNames = {
  "", "'token'", "'node'", "':'", "';'", "'switch'", "'{'", "'}'", "'('", 
  "')'", "'|'"
};

std::vector<std::string> ParccParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "WS", "COMMENT", "REGEX", 
  "STRING", "ID"
};

dfa::Vocabulary ParccParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> ParccParser::_tokenNames;

ParccParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x11, 0x36, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x3, 0x2, 0x7, 0x2, 0xc, 0xa, 0x2, 0xc, 0x2, 
    0xe, 0x2, 0xf, 0xb, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x5, 
    0x3, 0x15, 0xa, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x6, 0x4, 0x1a, 0xa, 
    0x4, 0xd, 0x4, 0xe, 0x4, 0x1b, 0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 
    0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x7, 0x5, 0x26, 0xa, 0x5, 0xc, 
    0x5, 0xe, 0x5, 0x29, 0xb, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 
    0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 0x34, 0xa, 
    0x5, 0x3, 0x5, 0x2, 0x2, 0x6, 0x2, 0x4, 0x6, 0x8, 0x2, 0x2, 0x2, 0x3a, 
    0x2, 0xd, 0x3, 0x2, 0x2, 0x2, 0x4, 0x14, 0x3, 0x2, 0x2, 0x2, 0x6, 0x16, 
    0x3, 0x2, 0x2, 0x2, 0x8, 0x33, 0x3, 0x2, 0x2, 0x2, 0xa, 0xc, 0x5, 0x4, 
    0x3, 0x2, 0xb, 0xa, 0x3, 0x2, 0x2, 0x2, 0xc, 0xf, 0x3, 0x2, 0x2, 0x2, 
    0xd, 0xb, 0x3, 0x2, 0x2, 0x2, 0xd, 0xe, 0x3, 0x2, 0x2, 0x2, 0xe, 0x3, 
    0x3, 0x2, 0x2, 0x2, 0xf, 0xd, 0x3, 0x2, 0x2, 0x2, 0x10, 0x11, 0x7, 0x3, 
    0x2, 0x2, 0x11, 0x15, 0x5, 0x6, 0x4, 0x2, 0x12, 0x13, 0x7, 0x4, 0x2, 
    0x2, 0x13, 0x15, 0x5, 0x6, 0x4, 0x2, 0x14, 0x10, 0x3, 0x2, 0x2, 0x2, 
    0x14, 0x12, 0x3, 0x2, 0x2, 0x2, 0x15, 0x5, 0x3, 0x2, 0x2, 0x2, 0x16, 
    0x17, 0x7, 0x11, 0x2, 0x2, 0x17, 0x19, 0x7, 0x5, 0x2, 0x2, 0x18, 0x1a, 
    0x5, 0x8, 0x5, 0x2, 0x19, 0x18, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x1b, 0x3, 
    0x2, 0x2, 0x2, 0x1b, 0x19, 0x3, 0x2, 0x2, 0x2, 0x1b, 0x1c, 0x3, 0x2, 
    0x2, 0x2, 0x1c, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x1d, 0x1e, 0x7, 0x6, 0x2, 
    0x2, 0x1e, 0x7, 0x3, 0x2, 0x2, 0x2, 0x1f, 0x34, 0x7, 0x11, 0x2, 0x2, 
    0x20, 0x34, 0x7, 0x10, 0x2, 0x2, 0x21, 0x34, 0x7, 0xf, 0x2, 0x2, 0x22, 
    0x23, 0x7, 0x7, 0x2, 0x2, 0x23, 0x27, 0x7, 0x8, 0x2, 0x2, 0x24, 0x26, 
    0x5, 0x6, 0x4, 0x2, 0x25, 0x24, 0x3, 0x2, 0x2, 0x2, 0x26, 0x29, 0x3, 
    0x2, 0x2, 0x2, 0x27, 0x25, 0x3, 0x2, 0x2, 0x2, 0x27, 0x28, 0x3, 0x2, 
    0x2, 0x2, 0x28, 0x2a, 0x3, 0x2, 0x2, 0x2, 0x29, 0x27, 0x3, 0x2, 0x2, 
    0x2, 0x2a, 0x34, 0x7, 0x9, 0x2, 0x2, 0x2b, 0x2c, 0x7, 0xa, 0x2, 0x2, 
    0x2c, 0x2d, 0x5, 0x6, 0x4, 0x2, 0x2d, 0x2e, 0x7, 0xb, 0x2, 0x2, 0x2e, 
    0x34, 0x3, 0x2, 0x2, 0x2, 0x2f, 0x30, 0x5, 0x6, 0x4, 0x2, 0x30, 0x31, 
    0x7, 0xc, 0x2, 0x2, 0x31, 0x32, 0x5, 0x6, 0x4, 0x2, 0x32, 0x34, 0x3, 
    0x2, 0x2, 0x2, 0x33, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x33, 0x20, 0x3, 0x2, 
    0x2, 0x2, 0x33, 0x21, 0x3, 0x2, 0x2, 0x2, 0x33, 0x22, 0x3, 0x2, 0x2, 
    0x2, 0x33, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x33, 0x2f, 0x3, 0x2, 0x2, 0x2, 
    0x34, 0x9, 0x3, 0x2, 0x2, 0x2, 0x7, 0xd, 0x14, 0x1b, 0x27, 0x33, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

ParccParser::Initializer ParccParser::_init;
