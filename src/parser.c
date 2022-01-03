#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 75
#define LARGE_STATE_COUNT 9
#define SYMBOL_COUNT 59
#define ALIAS_COUNT 2
#define TOKEN_COUNT 39
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 8

enum {
  anon_sym_PIPE = 1,
  sym_any_character = 2,
  anon_sym_CARET = 3,
  sym_end_assertion = 4,
  sym_boundary_assertion = 5,
  sym_non_boundary_assertion = 6,
  anon_sym_LPAREN_QMARK = 7,
  anon_sym_EQ = 8,
  anon_sym_BANG = 9,
  anon_sym_LT_EQ = 10,
  anon_sym_LT_BANG = 11,
  anon_sym_RPAREN = 12,
  sym_pattern_character = 13,
  anon_sym_LBRACK = 14,
  anon_sym_RBRACK = 15,
  anon_sym_DASH = 16,
  anon_sym_BSLASH_DASH = 17,
  sym_class_character = 18,
  anon_sym_LPAREN = 19,
  anon_sym_LPAREN_QMARK_LT = 20,
  anon_sym_GT = 21,
  anon_sym_LPAREN_QMARK_COLON = 22,
  anon_sym_STAR = 23,
  anon_sym_QMARK = 24,
  anon_sym_PLUS = 25,
  anon_sym_LBRACE = 26,
  anon_sym_COMMA = 27,
  anon_sym_RBRACE = 28,
  anon_sym_BSLASHk = 29,
  sym_decimal_escape = 30,
  aux_sym_character_class_escape_token1 = 31,
  aux_sym_character_class_escape_token2 = 32,
  sym_unicode_property = 33,
  sym_control_escape = 34,
  sym_control_letter_escape = 35,
  sym_identity_escape = 36,
  sym_group_name = 37,
  sym_decimal_digits = 38,
  sym_pattern = 39,
  sym_alternation = 40,
  sym_term = 41,
  sym_start_assertion = 42,
  sym_lookahead_assertion = 43,
  sym_character_class = 44,
  sym_class_range = 45,
  sym_anonymous_capturing_group = 46,
  sym_named_capturing_group = 47,
  sym_non_capturing_group = 48,
  sym_zero_or_more = 49,
  sym_one_or_more = 50,
  sym_optional = 51,
  sym_count_quantifier = 52,
  sym_backreference_escape = 53,
  sym_character_class_escape = 54,
  sym_unicode_property_value_expression = 55,
  aux_sym_alternation_repeat1 = 56,
  aux_sym_term_repeat1 = 57,
  aux_sym_character_class_repeat1 = 58,
  alias_sym_lazy = 59,
  alias_sym_unicode_property_name = 60,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_PIPE] = "|",
  [sym_any_character] = "any_character",
  [anon_sym_CARET] = "^",
  [sym_end_assertion] = "end_assertion",
  [sym_boundary_assertion] = "boundary_assertion",
  [sym_non_boundary_assertion] = "non_boundary_assertion",
  [anon_sym_LPAREN_QMARK] = "(\?",
  [anon_sym_EQ] = "=",
  [anon_sym_BANG] = "!",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_LT_BANG] = "<!",
  [anon_sym_RPAREN] = ")",
  [sym_pattern_character] = "pattern_character",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_DASH] = "-",
  [anon_sym_BSLASH_DASH] = "identity_escape",
  [sym_class_character] = "class_character",
  [anon_sym_LPAREN] = "(",
  [anon_sym_LPAREN_QMARK_LT] = "(\?<",
  [anon_sym_GT] = ">",
  [anon_sym_LPAREN_QMARK_COLON] = "(\?:",
  [anon_sym_STAR] = "*",
  [anon_sym_QMARK] = "\?",
  [anon_sym_PLUS] = "+",
  [anon_sym_LBRACE] = "{",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACE] = "}",
  [anon_sym_BSLASHk] = "\\k",
  [sym_decimal_escape] = "decimal_escape",
  [aux_sym_character_class_escape_token1] = "character_class_escape_token1",
  [aux_sym_character_class_escape_token2] = "character_class_escape_token2",
  [sym_unicode_property] = "unicode_property_value",
  [sym_control_escape] = "control_escape",
  [sym_control_letter_escape] = "control_letter_escape",
  [sym_identity_escape] = "identity_escape",
  [sym_group_name] = "group_name",
  [sym_decimal_digits] = "decimal_digits",
  [sym_pattern] = "pattern",
  [sym_alternation] = "alternation",
  [sym_term] = "term",
  [sym_start_assertion] = "start_assertion",
  [sym_lookahead_assertion] = "lookahead_assertion",
  [sym_character_class] = "character_class",
  [sym_class_range] = "class_range",
  [sym_anonymous_capturing_group] = "anonymous_capturing_group",
  [sym_named_capturing_group] = "named_capturing_group",
  [sym_non_capturing_group] = "non_capturing_group",
  [sym_zero_or_more] = "zero_or_more",
  [sym_one_or_more] = "one_or_more",
  [sym_optional] = "optional",
  [sym_count_quantifier] = "count_quantifier",
  [sym_backreference_escape] = "backreference_escape",
  [sym_character_class_escape] = "character_class_escape",
  [sym_unicode_property_value_expression] = "unicode_property_value_expression",
  [aux_sym_alternation_repeat1] = "alternation_repeat1",
  [aux_sym_term_repeat1] = "term_repeat1",
  [aux_sym_character_class_repeat1] = "character_class_repeat1",
  [alias_sym_lazy] = "lazy",
  [alias_sym_unicode_property_name] = "unicode_property_name",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [sym_any_character] = sym_any_character,
  [anon_sym_CARET] = anon_sym_CARET,
  [sym_end_assertion] = sym_end_assertion,
  [sym_boundary_assertion] = sym_boundary_assertion,
  [sym_non_boundary_assertion] = sym_non_boundary_assertion,
  [anon_sym_LPAREN_QMARK] = anon_sym_LPAREN_QMARK,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_LT_BANG] = anon_sym_LT_BANG,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_pattern_character] = sym_pattern_character,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_BSLASH_DASH] = sym_identity_escape,
  [sym_class_character] = sym_class_character,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_LPAREN_QMARK_LT] = anon_sym_LPAREN_QMARK_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LPAREN_QMARK_COLON] = anon_sym_LPAREN_QMARK_COLON,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_BSLASHk] = anon_sym_BSLASHk,
  [sym_decimal_escape] = sym_decimal_escape,
  [aux_sym_character_class_escape_token1] = aux_sym_character_class_escape_token1,
  [aux_sym_character_class_escape_token2] = aux_sym_character_class_escape_token2,
  [sym_unicode_property] = sym_unicode_property,
  [sym_control_escape] = sym_control_escape,
  [sym_control_letter_escape] = sym_control_letter_escape,
  [sym_identity_escape] = sym_identity_escape,
  [sym_group_name] = sym_group_name,
  [sym_decimal_digits] = sym_decimal_digits,
  [sym_pattern] = sym_pattern,
  [sym_alternation] = sym_alternation,
  [sym_term] = sym_term,
  [sym_start_assertion] = sym_start_assertion,
  [sym_lookahead_assertion] = sym_lookahead_assertion,
  [sym_character_class] = sym_character_class,
  [sym_class_range] = sym_class_range,
  [sym_anonymous_capturing_group] = sym_anonymous_capturing_group,
  [sym_named_capturing_group] = sym_named_capturing_group,
  [sym_non_capturing_group] = sym_non_capturing_group,
  [sym_zero_or_more] = sym_zero_or_more,
  [sym_one_or_more] = sym_one_or_more,
  [sym_optional] = sym_optional,
  [sym_count_quantifier] = sym_count_quantifier,
  [sym_backreference_escape] = sym_backreference_escape,
  [sym_character_class_escape] = sym_character_class_escape,
  [sym_unicode_property_value_expression] = sym_unicode_property_value_expression,
  [aux_sym_alternation_repeat1] = aux_sym_alternation_repeat1,
  [aux_sym_term_repeat1] = aux_sym_term_repeat1,
  [aux_sym_character_class_repeat1] = aux_sym_character_class_repeat1,
  [alias_sym_lazy] = alias_sym_lazy,
  [alias_sym_unicode_property_name] = alias_sym_unicode_property_name,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [sym_any_character] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [sym_end_assertion] = {
    .visible = true,
    .named = true,
  },
  [sym_boundary_assertion] = {
    .visible = true,
    .named = true,
  },
  [sym_non_boundary_assertion] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_pattern_character] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH_DASH] = {
    .visible = true,
    .named = true,
  },
  [sym_class_character] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN_QMARK_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN_QMARK_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHk] = {
    .visible = true,
    .named = false,
  },
  [sym_decimal_escape] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_character_class_escape_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_character_class_escape_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_unicode_property] = {
    .visible = true,
    .named = true,
  },
  [sym_control_escape] = {
    .visible = true,
    .named = true,
  },
  [sym_control_letter_escape] = {
    .visible = true,
    .named = true,
  },
  [sym_identity_escape] = {
    .visible = true,
    .named = true,
  },
  [sym_group_name] = {
    .visible = true,
    .named = true,
  },
  [sym_decimal_digits] = {
    .visible = true,
    .named = true,
  },
  [sym_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_alternation] = {
    .visible = true,
    .named = true,
  },
  [sym_term] = {
    .visible = true,
    .named = true,
  },
  [sym_start_assertion] = {
    .visible = true,
    .named = true,
  },
  [sym_lookahead_assertion] = {
    .visible = true,
    .named = true,
  },
  [sym_character_class] = {
    .visible = true,
    .named = true,
  },
  [sym_class_range] = {
    .visible = true,
    .named = true,
  },
  [sym_anonymous_capturing_group] = {
    .visible = true,
    .named = true,
  },
  [sym_named_capturing_group] = {
    .visible = true,
    .named = true,
  },
  [sym_non_capturing_group] = {
    .visible = true,
    .named = true,
  },
  [sym_zero_or_more] = {
    .visible = true,
    .named = true,
  },
  [sym_one_or_more] = {
    .visible = true,
    .named = true,
  },
  [sym_optional] = {
    .visible = true,
    .named = true,
  },
  [sym_count_quantifier] = {
    .visible = true,
    .named = true,
  },
  [sym_backreference_escape] = {
    .visible = true,
    .named = true,
  },
  [sym_character_class_escape] = {
    .visible = true,
    .named = true,
  },
  [sym_unicode_property_value_expression] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_alternation_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_term_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_character_class_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_lazy] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_unicode_property_name] = {
    .visible = true,
    .named = true,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = sym_class_character,
  },
  [2] = {
    [1] = alias_sym_lazy,
  },
  [3] = {
    [0] = sym_class_character,
    [2] = sym_class_character,
  },
  [4] = {
    [2] = sym_class_character,
  },
  [5] = {
    [3] = alias_sym_lazy,
  },
  [6] = {
    [0] = alias_sym_unicode_property_name,
  },
  [7] = {
    [5] = alias_sym_lazy,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(18);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(13)
      if (lookahead == '!') ADVANCE(27);
      if (lookahead == '$') ADVANCE(22);
      if (lookahead == '(') ADVANCE(39);
      if (lookahead == ')') ADVANCE(30);
      if (lookahead == '*') ADVANCE(43);
      if (lookahead == '+') ADVANCE(45);
      if (lookahead == ',') ADVANCE(47);
      if (lookahead == '-') ADVANCE(34);
      if (lookahead == '.') ADVANCE(20);
      if (lookahead == '=') ADVANCE(26);
      if (lookahead == '>') ADVANCE(41);
      if (lookahead == '?') ADVANCE(44);
      if (lookahead == '[') ADVANCE(32);
      if (lookahead == '\\') ADVANCE(10);
      if (lookahead == ']') ADVANCE(33);
      if (lookahead == '^') ADVANCE(21);
      if (lookahead == '{') ADVANCE(46);
      if (lookahead == '|') ADVANCE(19);
      if (lookahead == '}') ADVANCE(48);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(37);
      if (lookahead == '\r') ADVANCE(36);
      if (lookahead == '-') ADVANCE(34);
      if (lookahead == '\\') ADVANCE(11);
      if (lookahead == ']') ADVANCE(33);
      if (lookahead == '^') ADVANCE(21);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(38);
      if (lookahead == '\r') ADVANCE(36);
      if (lookahead == '-') ADVANCE(34);
      if (lookahead == '\\') ADVANCE(11);
      if (lookahead == ']') ADVANCE(33);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(4)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '\r') SKIP(3)
      if (lookahead == '!') ADVANCE(27);
      if (lookahead == ',') ADVANCE(47);
      if (lookahead == '<') ADVANCE(9);
      if (lookahead == '=') ADVANCE(26);
      if (lookahead == '>') ADVANCE(41);
      if (lookahead == '}') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(6)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(6)
      if (lookahead == '\r') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(8)
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(8)
      if (lookahead == '\r') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      END_STATE();
    case 9:
      if (lookahead == '!') ADVANCE(29);
      if (lookahead == '=') ADVANCE(28);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(35);
      if (lookahead == 'B') ADVANCE(24);
      if (lookahead == 'b') ADVANCE(23);
      if (lookahead == 'c') ADVANCE(57);
      if (lookahead == 'k') ADVANCE(49);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(52);
      if (lookahead == '0' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'v') ADVANCE(54);
      if (lookahead == 'D' ||
          lookahead == 'S' ||
          lookahead == 'W' ||
          lookahead == 'd' ||
          lookahead == 's' ||
          lookahead == 'w') ADVANCE(51);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(50);
      if (lookahead != 0) ADVANCE(56);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(35);
      if (lookahead == 'c') ADVANCE(57);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(52);
      if (lookahead == 'D' ||
          lookahead == 'S' ||
          lookahead == 'W' ||
          lookahead == 'd' ||
          lookahead == 's' ||
          lookahead == 'w') ADVANCE(51);
      if (lookahead == '0' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          ('r' <= lookahead && lookahead <= 't') ||
          lookahead == 'v') ADVANCE(54);
      if (lookahead != 0 &&
          (lookahead < '1' || '9' < lookahead) &&
          lookahead != 'k') ADVANCE(56);
      END_STATE();
    case 12:
      if (lookahead == 'B') ADVANCE(24);
      if (lookahead == 'b') ADVANCE(23);
      if (lookahead == 'c') ADVANCE(57);
      if (lookahead == 'k') ADVANCE(49);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(52);
      if (lookahead == '0' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'v') ADVANCE(54);
      if (lookahead == 'D' ||
          lookahead == 'S' ||
          lookahead == 'W' ||
          lookahead == 'd' ||
          lookahead == 's' ||
          lookahead == 'w') ADVANCE(51);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(50);
      if (lookahead != 0) ADVANCE(56);
      END_STATE();
    case 13:
      if (eof) ADVANCE(18);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 14:
      if (eof) ADVANCE(18);
      if (lookahead == '\n') SKIP(15)
      END_STATE();
    case 15:
      if (eof) ADVANCE(18);
      if (lookahead == '\n') SKIP(15)
      if (lookahead == '\r') SKIP(14)
      if (lookahead == '$') ADVANCE(22);
      if (lookahead == '(') ADVANCE(39);
      if (lookahead == ')') ADVANCE(30);
      if (lookahead == '.') ADVANCE(20);
      if (lookahead == '?') ADVANCE(44);
      if (lookahead == '[') ADVANCE(32);
      if (lookahead == '\\') ADVANCE(12);
      if (lookahead == '^') ADVANCE(21);
      if (lookahead == '|') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '+' &&
          lookahead != ']') ADVANCE(31);
      END_STATE();
    case 16:
      if (eof) ADVANCE(18);
      if (lookahead == '\n') SKIP(17)
      END_STATE();
    case 17:
      if (eof) ADVANCE(18);
      if (lookahead == '\n') SKIP(17)
      if (lookahead == '\r') SKIP(16)
      if (lookahead == '$') ADVANCE(22);
      if (lookahead == '(') ADVANCE(39);
      if (lookahead == ')') ADVANCE(30);
      if (lookahead == '*') ADVANCE(43);
      if (lookahead == '+') ADVANCE(45);
      if (lookahead == '.') ADVANCE(20);
      if (lookahead == '?') ADVANCE(44);
      if (lookahead == '[') ADVANCE(32);
      if (lookahead == '\\') ADVANCE(12);
      if (lookahead == '^') ADVANCE(21);
      if (lookahead == '{') ADVANCE(46);
      if (lookahead == '|') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(31);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_any_character);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_end_assertion);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_boundary_assertion);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_non_boundary_assertion);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_LPAREN_QMARK);
      if (lookahead == ':') ADVANCE(42);
      if (lookahead == '<') ADVANCE(40);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_LT_BANG);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_pattern_character);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_BSLASH_DASH);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_class_character);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_class_character);
      if (lookahead == '\n') ADVANCE(37);
      if (lookahead == '\r') ADVANCE(36);
      if (lookahead == '^') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != '\\' &&
          lookahead != ']') ADVANCE(36);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_class_character);
      if (lookahead == '\n') ADVANCE(38);
      if (lookahead == '\r') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != '\\' &&
          lookahead != ']') ADVANCE(36);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '?') ADVANCE(25);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_LPAREN_QMARK_LT);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_LPAREN_QMARK_COLON);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_BSLASHk);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_decimal_escape);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_character_class_escape_token1);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_character_class_escape_token2);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_unicode_property);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_control_escape);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_control_letter_escape);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_identity_escape);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_identity_escape);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_group_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_decimal_digits);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 15},
  [2] = {.lex_state = 15},
  [3] = {.lex_state = 15},
  [4] = {.lex_state = 15},
  [5] = {.lex_state = 15},
  [6] = {.lex_state = 15},
  [7] = {.lex_state = 15},
  [8] = {.lex_state = 15},
  [9] = {.lex_state = 17},
  [10] = {.lex_state = 17},
  [11] = {.lex_state = 17},
  [12] = {.lex_state = 17},
  [13] = {.lex_state = 17},
  [14] = {.lex_state = 17},
  [15] = {.lex_state = 17},
  [16] = {.lex_state = 17},
  [17] = {.lex_state = 17},
  [18] = {.lex_state = 17},
  [19] = {.lex_state = 17},
  [20] = {.lex_state = 17},
  [21] = {.lex_state = 15},
  [22] = {.lex_state = 15},
  [23] = {.lex_state = 15},
  [24] = {.lex_state = 15},
  [25] = {.lex_state = 15},
  [26] = {.lex_state = 15},
  [27] = {.lex_state = 15},
  [28] = {.lex_state = 15},
  [29] = {.lex_state = 15},
  [30] = {.lex_state = 15},
  [31] = {.lex_state = 15},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 4},
  [54] = {.lex_state = 4},
  [55] = {.lex_state = 4},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 4},
  [58] = {.lex_state = 4},
  [59] = {.lex_state = 6},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 4},
  [63] = {.lex_state = 6},
  [64] = {.lex_state = 4},
  [65] = {.lex_state = 8},
  [66] = {.lex_state = 8},
  [67] = {.lex_state = 4},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 4},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 4},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [sym_any_character] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [sym_end_assertion] = ACTIONS(1),
    [sym_boundary_assertion] = ACTIONS(1),
    [sym_non_boundary_assertion] = ACTIONS(1),
    [anon_sym_LPAREN_QMARK] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_pattern_character] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_BSLASH_DASH] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_BSLASHk] = ACTIONS(1),
    [sym_decimal_escape] = ACTIONS(1),
    [aux_sym_character_class_escape_token1] = ACTIONS(1),
    [aux_sym_character_class_escape_token2] = ACTIONS(1),
    [sym_control_escape] = ACTIONS(1),
    [sym_control_letter_escape] = ACTIONS(1),
    [sym_identity_escape] = ACTIONS(1),
  },
  [1] = {
    [sym_pattern] = STATE(73),
    [sym_alternation] = STATE(56),
    [sym_term] = STATE(49),
    [sym_start_assertion] = STATE(9),
    [sym_lookahead_assertion] = STATE(9),
    [sym_character_class] = STATE(9),
    [sym_anonymous_capturing_group] = STATE(9),
    [sym_named_capturing_group] = STATE(9),
    [sym_non_capturing_group] = STATE(9),
    [sym_backreference_escape] = STATE(9),
    [sym_character_class_escape] = STATE(9),
    [aux_sym_alternation_repeat1] = STATE(47),
    [aux_sym_term_repeat1] = STATE(8),
    [anon_sym_PIPE] = ACTIONS(3),
    [sym_any_character] = ACTIONS(5),
    [anon_sym_CARET] = ACTIONS(7),
    [sym_end_assertion] = ACTIONS(5),
    [sym_boundary_assertion] = ACTIONS(5),
    [sym_non_boundary_assertion] = ACTIONS(5),
    [anon_sym_LPAREN_QMARK] = ACTIONS(9),
    [sym_pattern_character] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(15),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(17),
    [anon_sym_BSLASHk] = ACTIONS(19),
    [sym_decimal_escape] = ACTIONS(5),
    [aux_sym_character_class_escape_token1] = ACTIONS(21),
    [aux_sym_character_class_escape_token2] = ACTIONS(23),
    [sym_control_escape] = ACTIONS(25),
    [sym_control_letter_escape] = ACTIONS(5),
    [sym_identity_escape] = ACTIONS(25),
  },
  [2] = {
    [sym_pattern] = STATE(60),
    [sym_alternation] = STATE(56),
    [sym_term] = STATE(49),
    [sym_start_assertion] = STATE(9),
    [sym_lookahead_assertion] = STATE(9),
    [sym_character_class] = STATE(9),
    [sym_anonymous_capturing_group] = STATE(9),
    [sym_named_capturing_group] = STATE(9),
    [sym_non_capturing_group] = STATE(9),
    [sym_backreference_escape] = STATE(9),
    [sym_character_class_escape] = STATE(9),
    [aux_sym_alternation_repeat1] = STATE(47),
    [aux_sym_term_repeat1] = STATE(8),
    [anon_sym_PIPE] = ACTIONS(3),
    [sym_any_character] = ACTIONS(5),
    [anon_sym_CARET] = ACTIONS(7),
    [sym_end_assertion] = ACTIONS(5),
    [sym_boundary_assertion] = ACTIONS(5),
    [sym_non_boundary_assertion] = ACTIONS(5),
    [anon_sym_LPAREN_QMARK] = ACTIONS(9),
    [sym_pattern_character] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(15),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(17),
    [anon_sym_BSLASHk] = ACTIONS(19),
    [sym_decimal_escape] = ACTIONS(5),
    [aux_sym_character_class_escape_token1] = ACTIONS(21),
    [aux_sym_character_class_escape_token2] = ACTIONS(23),
    [sym_control_escape] = ACTIONS(25),
    [sym_control_letter_escape] = ACTIONS(5),
    [sym_identity_escape] = ACTIONS(25),
  },
  [3] = {
    [sym_pattern] = STATE(61),
    [sym_alternation] = STATE(56),
    [sym_term] = STATE(49),
    [sym_start_assertion] = STATE(9),
    [sym_lookahead_assertion] = STATE(9),
    [sym_character_class] = STATE(9),
    [sym_anonymous_capturing_group] = STATE(9),
    [sym_named_capturing_group] = STATE(9),
    [sym_non_capturing_group] = STATE(9),
    [sym_backreference_escape] = STATE(9),
    [sym_character_class_escape] = STATE(9),
    [aux_sym_alternation_repeat1] = STATE(47),
    [aux_sym_term_repeat1] = STATE(8),
    [anon_sym_PIPE] = ACTIONS(3),
    [sym_any_character] = ACTIONS(5),
    [anon_sym_CARET] = ACTIONS(7),
    [sym_end_assertion] = ACTIONS(5),
    [sym_boundary_assertion] = ACTIONS(5),
    [sym_non_boundary_assertion] = ACTIONS(5),
    [anon_sym_LPAREN_QMARK] = ACTIONS(9),
    [sym_pattern_character] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(15),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(17),
    [anon_sym_BSLASHk] = ACTIONS(19),
    [sym_decimal_escape] = ACTIONS(5),
    [aux_sym_character_class_escape_token1] = ACTIONS(21),
    [aux_sym_character_class_escape_token2] = ACTIONS(23),
    [sym_control_escape] = ACTIONS(25),
    [sym_control_letter_escape] = ACTIONS(5),
    [sym_identity_escape] = ACTIONS(25),
  },
  [4] = {
    [sym_pattern] = STATE(71),
    [sym_alternation] = STATE(56),
    [sym_term] = STATE(49),
    [sym_start_assertion] = STATE(9),
    [sym_lookahead_assertion] = STATE(9),
    [sym_character_class] = STATE(9),
    [sym_anonymous_capturing_group] = STATE(9),
    [sym_named_capturing_group] = STATE(9),
    [sym_non_capturing_group] = STATE(9),
    [sym_backreference_escape] = STATE(9),
    [sym_character_class_escape] = STATE(9),
    [aux_sym_alternation_repeat1] = STATE(47),
    [aux_sym_term_repeat1] = STATE(8),
    [anon_sym_PIPE] = ACTIONS(3),
    [sym_any_character] = ACTIONS(5),
    [anon_sym_CARET] = ACTIONS(7),
    [sym_end_assertion] = ACTIONS(5),
    [sym_boundary_assertion] = ACTIONS(5),
    [sym_non_boundary_assertion] = ACTIONS(5),
    [anon_sym_LPAREN_QMARK] = ACTIONS(9),
    [sym_pattern_character] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(15),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(17),
    [anon_sym_BSLASHk] = ACTIONS(19),
    [sym_decimal_escape] = ACTIONS(5),
    [aux_sym_character_class_escape_token1] = ACTIONS(21),
    [aux_sym_character_class_escape_token2] = ACTIONS(23),
    [sym_control_escape] = ACTIONS(25),
    [sym_control_letter_escape] = ACTIONS(5),
    [sym_identity_escape] = ACTIONS(25),
  },
  [5] = {
    [sym_pattern] = STATE(69),
    [sym_alternation] = STATE(56),
    [sym_term] = STATE(49),
    [sym_start_assertion] = STATE(9),
    [sym_lookahead_assertion] = STATE(9),
    [sym_character_class] = STATE(9),
    [sym_anonymous_capturing_group] = STATE(9),
    [sym_named_capturing_group] = STATE(9),
    [sym_non_capturing_group] = STATE(9),
    [sym_backreference_escape] = STATE(9),
    [sym_character_class_escape] = STATE(9),
    [aux_sym_alternation_repeat1] = STATE(47),
    [aux_sym_term_repeat1] = STATE(8),
    [anon_sym_PIPE] = ACTIONS(3),
    [sym_any_character] = ACTIONS(5),
    [anon_sym_CARET] = ACTIONS(7),
    [sym_end_assertion] = ACTIONS(5),
    [sym_boundary_assertion] = ACTIONS(5),
    [sym_non_boundary_assertion] = ACTIONS(5),
    [anon_sym_LPAREN_QMARK] = ACTIONS(9),
    [sym_pattern_character] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(15),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(17),
    [anon_sym_BSLASHk] = ACTIONS(19),
    [sym_decimal_escape] = ACTIONS(5),
    [aux_sym_character_class_escape_token1] = ACTIONS(21),
    [aux_sym_character_class_escape_token2] = ACTIONS(23),
    [sym_control_escape] = ACTIONS(25),
    [sym_control_letter_escape] = ACTIONS(5),
    [sym_identity_escape] = ACTIONS(25),
  },
  [6] = {
    [sym_term] = STATE(52),
    [sym_start_assertion] = STATE(9),
    [sym_lookahead_assertion] = STATE(9),
    [sym_character_class] = STATE(9),
    [sym_anonymous_capturing_group] = STATE(9),
    [sym_named_capturing_group] = STATE(9),
    [sym_non_capturing_group] = STATE(9),
    [sym_backreference_escape] = STATE(9),
    [sym_character_class_escape] = STATE(9),
    [aux_sym_term_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(27),
    [anon_sym_PIPE] = ACTIONS(27),
    [sym_any_character] = ACTIONS(5),
    [anon_sym_CARET] = ACTIONS(7),
    [sym_end_assertion] = ACTIONS(5),
    [sym_boundary_assertion] = ACTIONS(5),
    [sym_non_boundary_assertion] = ACTIONS(5),
    [anon_sym_LPAREN_QMARK] = ACTIONS(9),
    [anon_sym_RPAREN] = ACTIONS(27),
    [sym_pattern_character] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(15),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(17),
    [anon_sym_BSLASHk] = ACTIONS(19),
    [sym_decimal_escape] = ACTIONS(5),
    [aux_sym_character_class_escape_token1] = ACTIONS(21),
    [aux_sym_character_class_escape_token2] = ACTIONS(23),
    [sym_control_escape] = ACTIONS(25),
    [sym_control_letter_escape] = ACTIONS(5),
    [sym_identity_escape] = ACTIONS(25),
  },
  [7] = {
    [sym_start_assertion] = STATE(9),
    [sym_lookahead_assertion] = STATE(9),
    [sym_character_class] = STATE(9),
    [sym_anonymous_capturing_group] = STATE(9),
    [sym_named_capturing_group] = STATE(9),
    [sym_non_capturing_group] = STATE(9),
    [sym_backreference_escape] = STATE(9),
    [sym_character_class_escape] = STATE(9),
    [aux_sym_term_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(29),
    [anon_sym_PIPE] = ACTIONS(29),
    [sym_any_character] = ACTIONS(31),
    [anon_sym_CARET] = ACTIONS(34),
    [sym_end_assertion] = ACTIONS(31),
    [sym_boundary_assertion] = ACTIONS(31),
    [sym_non_boundary_assertion] = ACTIONS(31),
    [anon_sym_LPAREN_QMARK] = ACTIONS(37),
    [anon_sym_RPAREN] = ACTIONS(29),
    [sym_pattern_character] = ACTIONS(31),
    [anon_sym_LBRACK] = ACTIONS(40),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(46),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(49),
    [anon_sym_BSLASHk] = ACTIONS(52),
    [sym_decimal_escape] = ACTIONS(31),
    [aux_sym_character_class_escape_token1] = ACTIONS(55),
    [aux_sym_character_class_escape_token2] = ACTIONS(58),
    [sym_control_escape] = ACTIONS(61),
    [sym_control_letter_escape] = ACTIONS(31),
    [sym_identity_escape] = ACTIONS(61),
  },
  [8] = {
    [sym_start_assertion] = STATE(9),
    [sym_lookahead_assertion] = STATE(9),
    [sym_character_class] = STATE(9),
    [sym_anonymous_capturing_group] = STATE(9),
    [sym_named_capturing_group] = STATE(9),
    [sym_non_capturing_group] = STATE(9),
    [sym_backreference_escape] = STATE(9),
    [sym_character_class_escape] = STATE(9),
    [aux_sym_term_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(64),
    [anon_sym_PIPE] = ACTIONS(64),
    [sym_any_character] = ACTIONS(5),
    [anon_sym_CARET] = ACTIONS(7),
    [sym_end_assertion] = ACTIONS(5),
    [sym_boundary_assertion] = ACTIONS(5),
    [sym_non_boundary_assertion] = ACTIONS(5),
    [anon_sym_LPAREN_QMARK] = ACTIONS(9),
    [anon_sym_RPAREN] = ACTIONS(64),
    [sym_pattern_character] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(15),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(17),
    [anon_sym_BSLASHk] = ACTIONS(19),
    [sym_decimal_escape] = ACTIONS(5),
    [aux_sym_character_class_escape_token1] = ACTIONS(21),
    [aux_sym_character_class_escape_token2] = ACTIONS(23),
    [sym_control_escape] = ACTIONS(25),
    [sym_control_letter_escape] = ACTIONS(5),
    [sym_identity_escape] = ACTIONS(25),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(70), 1,
      anon_sym_STAR,
    ACTIONS(72), 1,
      anon_sym_QMARK,
    ACTIONS(74), 1,
      anon_sym_PLUS,
    ACTIONS(76), 1,
      anon_sym_LBRACE,
    STATE(27), 4,
      sym_zero_or_more,
      sym_one_or_more,
      sym_optional,
      sym_count_quantifier,
    ACTIONS(68), 5,
      anon_sym_LPAREN_QMARK,
      sym_pattern_character,
      anon_sym_LPAREN,
      sym_control_escape,
      sym_identity_escape,
    ACTIONS(66), 16,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      sym_any_character,
      anon_sym_CARET,
      sym_end_assertion,
      sym_boundary_assertion,
      sym_non_boundary_assertion,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_LPAREN_QMARK_LT,
      anon_sym_LPAREN_QMARK_COLON,
      anon_sym_BSLASHk,
      sym_decimal_escape,
      aux_sym_character_class_escape_token1,
      aux_sym_character_class_escape_token2,
      sym_control_letter_escape,
  [44] = 2,
    ACTIONS(80), 5,
      anon_sym_LPAREN_QMARK,
      sym_pattern_character,
      anon_sym_LPAREN,
      sym_control_escape,
      sym_identity_escape,
    ACTIONS(78), 20,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      sym_any_character,
      anon_sym_CARET,
      sym_end_assertion,
      sym_boundary_assertion,
      sym_non_boundary_assertion,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_LPAREN_QMARK_LT,
      anon_sym_LPAREN_QMARK_COLON,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_LBRACE,
      anon_sym_BSLASHk,
      sym_decimal_escape,
      aux_sym_character_class_escape_token1,
      aux_sym_character_class_escape_token2,
      sym_control_letter_escape,
  [74] = 2,
    ACTIONS(84), 5,
      anon_sym_LPAREN_QMARK,
      sym_pattern_character,
      anon_sym_LPAREN,
      sym_control_escape,
      sym_identity_escape,
    ACTIONS(82), 20,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      sym_any_character,
      anon_sym_CARET,
      sym_end_assertion,
      sym_boundary_assertion,
      sym_non_boundary_assertion,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_LPAREN_QMARK_LT,
      anon_sym_LPAREN_QMARK_COLON,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_LBRACE,
      anon_sym_BSLASHk,
      sym_decimal_escape,
      aux_sym_character_class_escape_token1,
      aux_sym_character_class_escape_token2,
      sym_control_letter_escape,
  [104] = 2,
    ACTIONS(88), 5,
      anon_sym_LPAREN_QMARK,
      sym_pattern_character,
      anon_sym_LPAREN,
      sym_control_escape,
      sym_identity_escape,
    ACTIONS(86), 20,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      sym_any_character,
      anon_sym_CARET,
      sym_end_assertion,
      sym_boundary_assertion,
      sym_non_boundary_assertion,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_LPAREN_QMARK_LT,
      anon_sym_LPAREN_QMARK_COLON,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_LBRACE,
      anon_sym_BSLASHk,
      sym_decimal_escape,
      aux_sym_character_class_escape_token1,
      aux_sym_character_class_escape_token2,
      sym_control_letter_escape,
  [134] = 2,
    ACTIONS(92), 5,
      anon_sym_LPAREN_QMARK,
      sym_pattern_character,
      anon_sym_LPAREN,
      sym_control_escape,
      sym_identity_escape,
    ACTIONS(90), 20,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      sym_any_character,
      anon_sym_CARET,
      sym_end_assertion,
      sym_boundary_assertion,
      sym_non_boundary_assertion,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_LPAREN_QMARK_LT,
      anon_sym_LPAREN_QMARK_COLON,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_LBRACE,
      anon_sym_BSLASHk,
      sym_decimal_escape,
      aux_sym_character_class_escape_token1,
      aux_sym_character_class_escape_token2,
      sym_control_letter_escape,
  [164] = 2,
    ACTIONS(96), 5,
      anon_sym_LPAREN_QMARK,
      sym_pattern_character,
      anon_sym_LPAREN,
      sym_control_escape,
      sym_identity_escape,
    ACTIONS(94), 20,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      sym_any_character,
      anon_sym_CARET,
      sym_end_assertion,
      sym_boundary_assertion,
      sym_non_boundary_assertion,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_LPAREN_QMARK_LT,
      anon_sym_LPAREN_QMARK_COLON,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_LBRACE,
      anon_sym_BSLASHk,
      sym_decimal_escape,
      aux_sym_character_class_escape_token1,
      aux_sym_character_class_escape_token2,
      sym_control_letter_escape,
  [194] = 2,
    ACTIONS(100), 5,
      anon_sym_LPAREN_QMARK,
      sym_pattern_character,
      anon_sym_LPAREN,
      sym_control_escape,
      sym_identity_escape,
    ACTIONS(98), 20,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      sym_any_character,
      anon_sym_CARET,
      sym_end_assertion,
      sym_boundary_assertion,
      sym_non_boundary_assertion,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_LPAREN_QMARK_LT,
      anon_sym_LPAREN_QMARK_COLON,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_LBRACE,
      anon_sym_BSLASHk,
      sym_decimal_escape,
      aux_sym_character_class_escape_token1,
      aux_sym_character_class_escape_token2,
      sym_control_letter_escape,
  [224] = 2,
    ACTIONS(104), 5,
      anon_sym_LPAREN_QMARK,
      sym_pattern_character,
      anon_sym_LPAREN,
      sym_control_escape,
      sym_identity_escape,
    ACTIONS(102), 20,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      sym_any_character,
      anon_sym_CARET,
      sym_end_assertion,
      sym_boundary_assertion,
      sym_non_boundary_assertion,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_LPAREN_QMARK_LT,
      anon_sym_LPAREN_QMARK_COLON,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_LBRACE,
      anon_sym_BSLASHk,
      sym_decimal_escape,
      aux_sym_character_class_escape_token1,
      aux_sym_character_class_escape_token2,
      sym_control_letter_escape,
  [254] = 2,
    ACTIONS(108), 5,
      anon_sym_LPAREN_QMARK,
      sym_pattern_character,
      anon_sym_LPAREN,
      sym_control_escape,
      sym_identity_escape,
    ACTIONS(106), 20,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      sym_any_character,
      anon_sym_CARET,
      sym_end_assertion,
      sym_boundary_assertion,
      sym_non_boundary_assertion,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_LPAREN_QMARK_LT,
      anon_sym_LPAREN_QMARK_COLON,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_LBRACE,
      anon_sym_BSLASHk,
      sym_decimal_escape,
      aux_sym_character_class_escape_token1,
      aux_sym_character_class_escape_token2,
      sym_control_letter_escape,
  [284] = 2,
    ACTIONS(112), 5,
      anon_sym_LPAREN_QMARK,
      sym_pattern_character,
      anon_sym_LPAREN,
      sym_control_escape,
      sym_identity_escape,
    ACTIONS(110), 20,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      sym_any_character,
      anon_sym_CARET,
      sym_end_assertion,
      sym_boundary_assertion,
      sym_non_boundary_assertion,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_LPAREN_QMARK_LT,
      anon_sym_LPAREN_QMARK_COLON,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_LBRACE,
      anon_sym_BSLASHk,
      sym_decimal_escape,
      aux_sym_character_class_escape_token1,
      aux_sym_character_class_escape_token2,
      sym_control_letter_escape,
  [314] = 2,
    ACTIONS(116), 5,
      anon_sym_LPAREN_QMARK,
      sym_pattern_character,
      anon_sym_LPAREN,
      sym_control_escape,
      sym_identity_escape,
    ACTIONS(114), 20,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      sym_any_character,
      anon_sym_CARET,
      sym_end_assertion,
      sym_boundary_assertion,
      sym_non_boundary_assertion,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_LPAREN_QMARK_LT,
      anon_sym_LPAREN_QMARK_COLON,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_LBRACE,
      anon_sym_BSLASHk,
      sym_decimal_escape,
      aux_sym_character_class_escape_token1,
      aux_sym_character_class_escape_token2,
      sym_control_letter_escape,
  [344] = 2,
    ACTIONS(120), 5,
      anon_sym_LPAREN_QMARK,
      sym_pattern_character,
      anon_sym_LPAREN,
      sym_control_escape,
      sym_identity_escape,
    ACTIONS(118), 20,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      sym_any_character,
      anon_sym_CARET,
      sym_end_assertion,
      sym_boundary_assertion,
      sym_non_boundary_assertion,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_LPAREN_QMARK_LT,
      anon_sym_LPAREN_QMARK_COLON,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_LBRACE,
      anon_sym_BSLASHk,
      sym_decimal_escape,
      aux_sym_character_class_escape_token1,
      aux_sym_character_class_escape_token2,
      sym_control_letter_escape,
  [374] = 3,
    ACTIONS(126), 1,
      anon_sym_QMARK,
    ACTIONS(124), 4,
      anon_sym_LPAREN_QMARK,
      anon_sym_LPAREN,
      sym_control_escape,
      sym_identity_escape,
    ACTIONS(122), 17,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      sym_any_character,
      anon_sym_CARET,
      sym_end_assertion,
      sym_boundary_assertion,
      sym_non_boundary_assertion,
      anon_sym_RPAREN,
      sym_pattern_character,
      anon_sym_LBRACK,
      anon_sym_LPAREN_QMARK_LT,
      anon_sym_LPAREN_QMARK_COLON,
      anon_sym_BSLASHk,
      sym_decimal_escape,
      aux_sym_character_class_escape_token1,
      aux_sym_character_class_escape_token2,
      sym_control_letter_escape,
  [403] = 3,
    ACTIONS(132), 1,
      anon_sym_QMARK,
    ACTIONS(130), 4,
      anon_sym_LPAREN_QMARK,
      anon_sym_LPAREN,
      sym_control_escape,
      sym_identity_escape,
    ACTIONS(128), 17,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      sym_any_character,
      anon_sym_CARET,
      sym_end_assertion,
      sym_boundary_assertion,
      sym_non_boundary_assertion,
      anon_sym_RPAREN,
      sym_pattern_character,
      anon_sym_LBRACK,
      anon_sym_LPAREN_QMARK_LT,
      anon_sym_LPAREN_QMARK_COLON,
      anon_sym_BSLASHk,
      sym_decimal_escape,
      aux_sym_character_class_escape_token1,
      aux_sym_character_class_escape_token2,
      sym_control_letter_escape,
  [432] = 3,
    ACTIONS(138), 1,
      anon_sym_QMARK,
    ACTIONS(136), 4,
      anon_sym_LPAREN_QMARK,
      anon_sym_LPAREN,
      sym_control_escape,
      sym_identity_escape,
    ACTIONS(134), 17,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      sym_any_character,
      anon_sym_CARET,
      sym_end_assertion,
      sym_boundary_assertion,
      sym_non_boundary_assertion,
      anon_sym_RPAREN,
      sym_pattern_character,
      anon_sym_LBRACK,
      anon_sym_LPAREN_QMARK_LT,
      anon_sym_LPAREN_QMARK_COLON,
      anon_sym_BSLASHk,
      sym_decimal_escape,
      aux_sym_character_class_escape_token1,
      aux_sym_character_class_escape_token2,
      sym_control_letter_escape,
  [461] = 3,
    ACTIONS(144), 1,
      anon_sym_QMARK,
    ACTIONS(142), 4,
      anon_sym_LPAREN_QMARK,
      anon_sym_LPAREN,
      sym_control_escape,
      sym_identity_escape,
    ACTIONS(140), 17,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      sym_any_character,
      anon_sym_CARET,
      sym_end_assertion,
      sym_boundary_assertion,
      sym_non_boundary_assertion,
      anon_sym_RPAREN,
      sym_pattern_character,
      anon_sym_LBRACK,
      anon_sym_LPAREN_QMARK_LT,
      anon_sym_LPAREN_QMARK_COLON,
      anon_sym_BSLASHk,
      sym_decimal_escape,
      aux_sym_character_class_escape_token1,
      aux_sym_character_class_escape_token2,
      sym_control_letter_escape,
  [490] = 3,
    ACTIONS(150), 1,
      anon_sym_QMARK,
    ACTIONS(148), 4,
      anon_sym_LPAREN_QMARK,
      anon_sym_LPAREN,
      sym_control_escape,
      sym_identity_escape,
    ACTIONS(146), 17,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      sym_any_character,
      anon_sym_CARET,
      sym_end_assertion,
      sym_boundary_assertion,
      sym_non_boundary_assertion,
      anon_sym_RPAREN,
      sym_pattern_character,
      anon_sym_LBRACK,
      anon_sym_LPAREN_QMARK_LT,
      anon_sym_LPAREN_QMARK_COLON,
      anon_sym_BSLASHk,
      sym_decimal_escape,
      aux_sym_character_class_escape_token1,
      aux_sym_character_class_escape_token2,
      sym_control_letter_escape,
  [519] = 2,
    ACTIONS(154), 4,
      anon_sym_LPAREN_QMARK,
      anon_sym_LPAREN,
      sym_control_escape,
      sym_identity_escape,
    ACTIONS(152), 17,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      sym_any_character,
      anon_sym_CARET,
      sym_end_assertion,
      sym_boundary_assertion,
      sym_non_boundary_assertion,
      anon_sym_RPAREN,
      sym_pattern_character,
      anon_sym_LBRACK,
      anon_sym_LPAREN_QMARK_LT,
      anon_sym_LPAREN_QMARK_COLON,
      anon_sym_BSLASHk,
      sym_decimal_escape,
      aux_sym_character_class_escape_token1,
      aux_sym_character_class_escape_token2,
      sym_control_letter_escape,
  [545] = 2,
    ACTIONS(156), 4,
      anon_sym_LPAREN_QMARK,
      anon_sym_LPAREN,
      sym_control_escape,
      sym_identity_escape,
    ACTIONS(29), 17,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      sym_any_character,
      anon_sym_CARET,
      sym_end_assertion,
      sym_boundary_assertion,
      sym_non_boundary_assertion,
      anon_sym_RPAREN,
      sym_pattern_character,
      anon_sym_LBRACK,
      anon_sym_LPAREN_QMARK_LT,
      anon_sym_LPAREN_QMARK_COLON,
      anon_sym_BSLASHk,
      sym_decimal_escape,
      aux_sym_character_class_escape_token1,
      aux_sym_character_class_escape_token2,
      sym_control_letter_escape,
  [571] = 2,
    ACTIONS(160), 4,
      anon_sym_LPAREN_QMARK,
      anon_sym_LPAREN,
      sym_control_escape,
      sym_identity_escape,
    ACTIONS(158), 17,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      sym_any_character,
      anon_sym_CARET,
      sym_end_assertion,
      sym_boundary_assertion,
      sym_non_boundary_assertion,
      anon_sym_RPAREN,
      sym_pattern_character,
      anon_sym_LBRACK,
      anon_sym_LPAREN_QMARK_LT,
      anon_sym_LPAREN_QMARK_COLON,
      anon_sym_BSLASHk,
      sym_decimal_escape,
      aux_sym_character_class_escape_token1,
      aux_sym_character_class_escape_token2,
      sym_control_letter_escape,
  [597] = 2,
    ACTIONS(164), 4,
      anon_sym_LPAREN_QMARK,
      anon_sym_LPAREN,
      sym_control_escape,
      sym_identity_escape,
    ACTIONS(162), 17,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      sym_any_character,
      anon_sym_CARET,
      sym_end_assertion,
      sym_boundary_assertion,
      sym_non_boundary_assertion,
      anon_sym_RPAREN,
      sym_pattern_character,
      anon_sym_LBRACK,
      anon_sym_LPAREN_QMARK_LT,
      anon_sym_LPAREN_QMARK_COLON,
      anon_sym_BSLASHk,
      sym_decimal_escape,
      aux_sym_character_class_escape_token1,
      aux_sym_character_class_escape_token2,
      sym_control_letter_escape,
  [623] = 2,
    ACTIONS(168), 4,
      anon_sym_LPAREN_QMARK,
      anon_sym_LPAREN,
      sym_control_escape,
      sym_identity_escape,
    ACTIONS(166), 17,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      sym_any_character,
      anon_sym_CARET,
      sym_end_assertion,
      sym_boundary_assertion,
      sym_non_boundary_assertion,
      anon_sym_RPAREN,
      sym_pattern_character,
      anon_sym_LBRACK,
      anon_sym_LPAREN_QMARK_LT,
      anon_sym_LPAREN_QMARK_COLON,
      anon_sym_BSLASHk,
      sym_decimal_escape,
      aux_sym_character_class_escape_token1,
      aux_sym_character_class_escape_token2,
      sym_control_letter_escape,
  [649] = 2,
    ACTIONS(172), 4,
      anon_sym_LPAREN_QMARK,
      anon_sym_LPAREN,
      sym_control_escape,
      sym_identity_escape,
    ACTIONS(170), 17,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      sym_any_character,
      anon_sym_CARET,
      sym_end_assertion,
      sym_boundary_assertion,
      sym_non_boundary_assertion,
      anon_sym_RPAREN,
      sym_pattern_character,
      anon_sym_LBRACK,
      anon_sym_LPAREN_QMARK_LT,
      anon_sym_LPAREN_QMARK_COLON,
      anon_sym_BSLASHk,
      sym_decimal_escape,
      aux_sym_character_class_escape_token1,
      aux_sym_character_class_escape_token2,
      sym_control_letter_escape,
  [675] = 8,
    ACTIONS(174), 1,
      anon_sym_CARET,
    ACTIONS(176), 1,
      anon_sym_RBRACK,
    ACTIONS(178), 1,
      anon_sym_DASH,
    ACTIONS(182), 1,
      aux_sym_character_class_escape_token1,
    ACTIONS(184), 1,
      aux_sym_character_class_escape_token2,
    STATE(41), 1,
      sym_character_class_escape,
    STATE(34), 2,
      sym_class_range,
      aux_sym_character_class_repeat1,
    ACTIONS(180), 5,
      anon_sym_BSLASH_DASH,
      sym_class_character,
      sym_control_escape,
      sym_control_letter_escape,
      sym_identity_escape,
  [705] = 8,
    ACTIONS(186), 1,
      anon_sym_RBRACK,
    ACTIONS(188), 1,
      anon_sym_DASH,
    ACTIONS(194), 1,
      sym_class_character,
    ACTIONS(197), 1,
      aux_sym_character_class_escape_token1,
    ACTIONS(200), 1,
      aux_sym_character_class_escape_token2,
    STATE(41), 1,
      sym_character_class_escape,
    STATE(33), 2,
      sym_class_range,
      aux_sym_character_class_repeat1,
    ACTIONS(191), 4,
      anon_sym_BSLASH_DASH,
      sym_control_escape,
      sym_control_letter_escape,
      sym_identity_escape,
  [734] = 8,
    ACTIONS(178), 1,
      anon_sym_DASH,
    ACTIONS(182), 1,
      aux_sym_character_class_escape_token1,
    ACTIONS(184), 1,
      aux_sym_character_class_escape_token2,
    ACTIONS(203), 1,
      anon_sym_RBRACK,
    ACTIONS(205), 1,
      sym_class_character,
    STATE(41), 1,
      sym_character_class_escape,
    STATE(33), 2,
      sym_class_range,
      aux_sym_character_class_repeat1,
    ACTIONS(180), 4,
      anon_sym_BSLASH_DASH,
      sym_control_escape,
      sym_control_letter_escape,
      sym_identity_escape,
  [763] = 8,
    ACTIONS(178), 1,
      anon_sym_DASH,
    ACTIONS(182), 1,
      aux_sym_character_class_escape_token1,
    ACTIONS(184), 1,
      aux_sym_character_class_escape_token2,
    ACTIONS(203), 1,
      anon_sym_RBRACK,
    ACTIONS(205), 1,
      sym_class_character,
    STATE(41), 1,
      sym_character_class_escape,
    STATE(36), 2,
      sym_class_range,
      aux_sym_character_class_repeat1,
    ACTIONS(180), 4,
      anon_sym_BSLASH_DASH,
      sym_control_escape,
      sym_control_letter_escape,
      sym_identity_escape,
  [792] = 8,
    ACTIONS(178), 1,
      anon_sym_DASH,
    ACTIONS(182), 1,
      aux_sym_character_class_escape_token1,
    ACTIONS(184), 1,
      aux_sym_character_class_escape_token2,
    ACTIONS(205), 1,
      sym_class_character,
    ACTIONS(207), 1,
      anon_sym_RBRACK,
    STATE(41), 1,
      sym_character_class_escape,
    STATE(33), 2,
      sym_class_range,
      aux_sym_character_class_repeat1,
    ACTIONS(180), 4,
      anon_sym_BSLASH_DASH,
      sym_control_escape,
      sym_control_letter_escape,
      sym_identity_escape,
  [821] = 2,
    ACTIONS(82), 1,
      sym_class_character,
    ACTIONS(84), 8,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_BSLASH_DASH,
      aux_sym_character_class_escape_token1,
      aux_sym_character_class_escape_token2,
      sym_control_escape,
      sym_control_letter_escape,
      sym_identity_escape,
  [835] = 2,
    ACTIONS(106), 1,
      sym_class_character,
    ACTIONS(108), 8,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_BSLASH_DASH,
      aux_sym_character_class_escape_token1,
      aux_sym_character_class_escape_token2,
      sym_control_escape,
      sym_control_letter_escape,
      sym_identity_escape,
  [849] = 2,
    ACTIONS(211), 1,
      sym_class_character,
    ACTIONS(209), 8,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_BSLASH_DASH,
      aux_sym_character_class_escape_token1,
      aux_sym_character_class_escape_token2,
      sym_control_escape,
      sym_control_letter_escape,
      sym_identity_escape,
  [863] = 2,
    ACTIONS(215), 1,
      sym_class_character,
    ACTIONS(213), 8,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_BSLASH_DASH,
      aux_sym_character_class_escape_token1,
      aux_sym_character_class_escape_token2,
      sym_control_escape,
      sym_control_letter_escape,
      sym_identity_escape,
  [877] = 3,
    ACTIONS(219), 1,
      anon_sym_DASH,
    ACTIONS(222), 1,
      sym_class_character,
    ACTIONS(217), 7,
      anon_sym_RBRACK,
      anon_sym_BSLASH_DASH,
      aux_sym_character_class_escape_token1,
      aux_sym_character_class_escape_token2,
      sym_control_escape,
      sym_control_letter_escape,
      sym_identity_escape,
  [893] = 3,
    ACTIONS(226), 1,
      anon_sym_DASH,
    ACTIONS(229), 1,
      sym_class_character,
    ACTIONS(224), 7,
      anon_sym_RBRACK,
      anon_sym_BSLASH_DASH,
      aux_sym_character_class_escape_token1,
      aux_sym_character_class_escape_token2,
      sym_control_escape,
      sym_control_letter_escape,
      sym_identity_escape,
  [909] = 2,
    ACTIONS(233), 1,
      sym_class_character,
    ACTIONS(231), 8,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_BSLASH_DASH,
      aux_sym_character_class_escape_token1,
      aux_sym_character_class_escape_token2,
      sym_control_escape,
      sym_control_letter_escape,
      sym_identity_escape,
  [923] = 2,
    ACTIONS(237), 1,
      sym_class_character,
    ACTIONS(235), 8,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_BSLASH_DASH,
      aux_sym_character_class_escape_token1,
      aux_sym_character_class_escape_token2,
      sym_control_escape,
      sym_control_letter_escape,
      sym_identity_escape,
  [937] = 6,
    ACTIONS(182), 1,
      aux_sym_character_class_escape_token1,
    ACTIONS(184), 1,
      aux_sym_character_class_escape_token2,
    ACTIONS(239), 1,
      anon_sym_DASH,
    ACTIONS(243), 1,
      sym_class_character,
    STATE(43), 1,
      sym_character_class_escape,
    ACTIONS(241), 4,
      anon_sym_BSLASH_DASH,
      sym_control_escape,
      sym_control_letter_escape,
      sym_identity_escape,
  [959] = 6,
    ACTIONS(182), 1,
      aux_sym_character_class_escape_token1,
    ACTIONS(184), 1,
      aux_sym_character_class_escape_token2,
    ACTIONS(245), 1,
      anon_sym_DASH,
    ACTIONS(249), 1,
      sym_class_character,
    STATE(39), 1,
      sym_character_class_escape,
    ACTIONS(247), 4,
      anon_sym_BSLASH_DASH,
      sym_control_escape,
      sym_control_letter_escape,
      sym_identity_escape,
  [981] = 3,
    ACTIONS(3), 1,
      anon_sym_PIPE,
    STATE(50), 1,
      aux_sym_alternation_repeat1,
    ACTIONS(251), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [992] = 3,
    ACTIONS(3), 1,
      anon_sym_PIPE,
    STATE(50), 1,
      aux_sym_alternation_repeat1,
    ACTIONS(253), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [1003] = 3,
    ACTIONS(3), 1,
      anon_sym_PIPE,
    STATE(48), 1,
      aux_sym_alternation_repeat1,
    ACTIONS(255), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [1014] = 3,
    ACTIONS(259), 1,
      anon_sym_PIPE,
    STATE(50), 1,
      aux_sym_alternation_repeat1,
    ACTIONS(257), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [1025] = 1,
    ACTIONS(262), 4,
      anon_sym_EQ,
      anon_sym_BANG,
      anon_sym_LT_EQ,
      anon_sym_LT_BANG,
  [1032] = 1,
    ACTIONS(257), 3,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_RPAREN,
  [1038] = 2,
    ACTIONS(264), 1,
      anon_sym_EQ,
    ACTIONS(266), 1,
      anon_sym_RBRACE,
  [1045] = 2,
    ACTIONS(268), 1,
      sym_unicode_property,
    STATE(72), 1,
      sym_unicode_property_value_expression,
  [1052] = 2,
    ACTIONS(268), 1,
      sym_unicode_property,
    STATE(62), 1,
      sym_unicode_property_value_expression,
  [1059] = 1,
    ACTIONS(255), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [1064] = 2,
    ACTIONS(270), 1,
      anon_sym_COMMA,
    ACTIONS(272), 1,
      anon_sym_RBRACE,
  [1071] = 1,
    ACTIONS(274), 1,
      sym_unicode_property,
  [1075] = 1,
    ACTIONS(276), 1,
      sym_group_name,
  [1079] = 1,
    ACTIONS(278), 1,
      anon_sym_RPAREN,
  [1083] = 1,
    ACTIONS(280), 1,
      anon_sym_RPAREN,
  [1087] = 1,
    ACTIONS(282), 1,
      anon_sym_RBRACE,
  [1091] = 1,
    ACTIONS(284), 1,
      sym_group_name,
  [1095] = 1,
    ACTIONS(286), 1,
      anon_sym_RBRACE,
  [1099] = 1,
    ACTIONS(288), 1,
      sym_decimal_digits,
  [1103] = 1,
    ACTIONS(290), 1,
      sym_decimal_digits,
  [1107] = 1,
    ACTIONS(292), 1,
      anon_sym_RBRACE,
  [1111] = 1,
    ACTIONS(294), 1,
      anon_sym_LBRACE,
  [1115] = 1,
    ACTIONS(296), 1,
      anon_sym_RPAREN,
  [1119] = 1,
    ACTIONS(298), 1,
      anon_sym_GT,
  [1123] = 1,
    ACTIONS(300), 1,
      anon_sym_RPAREN,
  [1127] = 1,
    ACTIONS(302), 1,
      anon_sym_RBRACE,
  [1131] = 1,
    ACTIONS(304), 1,
      ts_builtin_sym_end,
  [1135] = 1,
    ACTIONS(306), 1,
      anon_sym_LBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(9)] = 0,
  [SMALL_STATE(10)] = 44,
  [SMALL_STATE(11)] = 74,
  [SMALL_STATE(12)] = 104,
  [SMALL_STATE(13)] = 134,
  [SMALL_STATE(14)] = 164,
  [SMALL_STATE(15)] = 194,
  [SMALL_STATE(16)] = 224,
  [SMALL_STATE(17)] = 254,
  [SMALL_STATE(18)] = 284,
  [SMALL_STATE(19)] = 314,
  [SMALL_STATE(20)] = 344,
  [SMALL_STATE(21)] = 374,
  [SMALL_STATE(22)] = 403,
  [SMALL_STATE(23)] = 432,
  [SMALL_STATE(24)] = 461,
  [SMALL_STATE(25)] = 490,
  [SMALL_STATE(26)] = 519,
  [SMALL_STATE(27)] = 545,
  [SMALL_STATE(28)] = 571,
  [SMALL_STATE(29)] = 597,
  [SMALL_STATE(30)] = 623,
  [SMALL_STATE(31)] = 649,
  [SMALL_STATE(32)] = 675,
  [SMALL_STATE(33)] = 705,
  [SMALL_STATE(34)] = 734,
  [SMALL_STATE(35)] = 763,
  [SMALL_STATE(36)] = 792,
  [SMALL_STATE(37)] = 821,
  [SMALL_STATE(38)] = 835,
  [SMALL_STATE(39)] = 849,
  [SMALL_STATE(40)] = 863,
  [SMALL_STATE(41)] = 877,
  [SMALL_STATE(42)] = 893,
  [SMALL_STATE(43)] = 909,
  [SMALL_STATE(44)] = 923,
  [SMALL_STATE(45)] = 937,
  [SMALL_STATE(46)] = 959,
  [SMALL_STATE(47)] = 981,
  [SMALL_STATE(48)] = 992,
  [SMALL_STATE(49)] = 1003,
  [SMALL_STATE(50)] = 1014,
  [SMALL_STATE(51)] = 1025,
  [SMALL_STATE(52)] = 1032,
  [SMALL_STATE(53)] = 1038,
  [SMALL_STATE(54)] = 1045,
  [SMALL_STATE(55)] = 1052,
  [SMALL_STATE(56)] = 1059,
  [SMALL_STATE(57)] = 1064,
  [SMALL_STATE(58)] = 1071,
  [SMALL_STATE(59)] = 1075,
  [SMALL_STATE(60)] = 1079,
  [SMALL_STATE(61)] = 1083,
  [SMALL_STATE(62)] = 1087,
  [SMALL_STATE(63)] = 1091,
  [SMALL_STATE(64)] = 1095,
  [SMALL_STATE(65)] = 1099,
  [SMALL_STATE(66)] = 1103,
  [SMALL_STATE(67)] = 1107,
  [SMALL_STATE(68)] = 1111,
  [SMALL_STATE(69)] = 1115,
  [SMALL_STATE(70)] = 1119,
  [SMALL_STATE(71)] = 1123,
  [SMALL_STATE(72)] = 1127,
  [SMALL_STATE(73)] = 1131,
  [SMALL_STATE(74)] = 1135,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alternation_repeat1, 1),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_term_repeat1, 2),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(9),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(12),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(51),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(32),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(4),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(63),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(5),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(59),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(11),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(68),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(9),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 1),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_term_repeat1, 1),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_term_repeat1, 1),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lookahead_assertion, 4),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lookahead_assertion, 4),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_character_class_escape, 1),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_character_class_escape, 1),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_assertion, 1),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_assertion, 1),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_non_capturing_group, 3),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_non_capturing_group, 3),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_character_class, 4),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_character_class, 4),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_anonymous_capturing_group, 3),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_anonymous_capturing_group, 3),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_character_class, 3),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_character_class, 3),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_character_class_escape, 4),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_character_class_escape, 4),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_capturing_group, 5),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_named_capturing_group, 5),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_backreference_escape, 2),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_backreference_escape, 2),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_character_class, 2),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_character_class, 2),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_count_quantifier, 3),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_count_quantifier, 3),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optional, 1),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_optional, 1),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_one_or_more, 1),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_one_or_more, 1),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_zero_or_more, 1),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_zero_or_more, 1),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_count_quantifier, 5),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_count_quantifier, 5),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_count_quantifier, 6, .production_id = 7),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_count_quantifier, 6, .production_id = 7),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_term_repeat1, 2),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_one_or_more, 2, .production_id = 2),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_one_or_more, 2, .production_id = 2),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optional, 2, .production_id = 2),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_optional, 2, .production_id = 2),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_zero_or_more, 2, .production_id = 2),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_zero_or_more, 2, .production_id = 2),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_count_quantifier, 4, .production_id = 5),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_count_quantifier, 4, .production_id = 5),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_character_class_repeat1, 2),
  [188] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_character_class_repeat1, 2), SHIFT_REPEAT(42),
  [191] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_character_class_repeat1, 2), SHIFT_REPEAT(41),
  [194] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_character_class_repeat1, 2), SHIFT_REPEAT(41),
  [197] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_character_class_repeat1, 2), SHIFT_REPEAT(37),
  [200] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_character_class_repeat1, 2), SHIFT_REPEAT(74),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_range, 3),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_range, 3),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_range, 3, .production_id = 4),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_range, 3, .production_id = 4),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_character_class_repeat1, 1),
  [219] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_character_class_repeat1, 1), SHIFT(46),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_character_class_repeat1, 1),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_character_class_repeat1, 1, .production_id = 1),
  [226] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_character_class_repeat1, 1, .production_id = 1), SHIFT(45),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_character_class_repeat1, 1, .production_id = 1),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_range, 3, .production_id = 1),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_range, 3, .production_id = 1),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_range, 3, .production_id = 3),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_range, 3, .production_id = 3),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alternation, 1),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alternation, 2),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 1),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alternation_repeat1, 2),
  [259] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alternation_repeat1, 2), SHIFT_REPEAT(6),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unicode_property_value_expression, 1),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unicode_property_value_expression, 3, .production_id = 6),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [304] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_regex(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
