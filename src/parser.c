#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 82
#define SYMBOL_COUNT 59
#define ALIAS_COUNT 3
#define TOKEN_COUNT 39
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6

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
  sym_disjunction = 40,
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
  aux_sym_disjunction_repeat1 = 56,
  aux_sym_term_repeat1 = 57,
  aux_sym_character_class_repeat1 = 58,
  alias_sym_lazy = 59,
  alias_sym_unicode_property_value = 60,
  alias_sym_unicode_property_name = 61,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_PIPE] = "|",
  [sym_any_character] = "any_character",
  [anon_sym_CARET] = "^",
  [sym_end_assertion] = "end_assertion",
  [sym_boundary_assertion] = "boundary_assertion",
  [sym_non_boundary_assertion] = "non_boundary_assertion",
  [anon_sym_LPAREN_QMARK] = "(?",
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
  [anon_sym_LPAREN_QMARK_LT] = "(?<",
  [anon_sym_GT] = ">",
  [anon_sym_LPAREN_QMARK_COLON] = "(?:",
  [anon_sym_STAR] = "*",
  [anon_sym_QMARK] = "?",
  [anon_sym_PLUS] = "+",
  [anon_sym_LBRACE] = "{",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACE] = "}",
  [anon_sym_BSLASHk] = "\\k",
  [sym_decimal_escape] = "decimal_escape",
  [aux_sym_character_class_escape_token1] = "character_class_escape_token1",
  [aux_sym_character_class_escape_token2] = "character_class_escape_token2",
  [sym_unicode_property] = "unicode_property",
  [sym_control_escape] = "control_escape",
  [sym_control_letter_escape] = "control_letter_escape",
  [sym_identity_escape] = "identity_escape",
  [sym_group_name] = "group_name",
  [sym_decimal_digits] = "decimal_digits",
  [sym_pattern] = "pattern",
  [sym_disjunction] = "disjunction",
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
  [aux_sym_disjunction_repeat1] = "disjunction_repeat1",
  [aux_sym_term_repeat1] = "term_repeat1",
  [aux_sym_character_class_repeat1] = "character_class_repeat1",
  [alias_sym_lazy] = "lazy",
  [alias_sym_unicode_property_value] = "unicode_property_value",
  [alias_sym_unicode_property_name] = "unicode_property_name",
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
  [sym_disjunction] = {
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
  [aux_sym_disjunction_repeat1] = {
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
  [alias_sym_unicode_property_value] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_unicode_property_name] = {
    .visible = true,
    .named = true,
  },
};

static TSSymbol ts_alias_sequences[9][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [1] = {
    [0] = sym_class_character,
  },
  [2] = {
    [1] = alias_sym_lazy,
  },
  [3] = {
    [0] = alias_sym_unicode_property_value,
  },
  [4] = {
    [2] = sym_class_character,
  },
  [5] = {
    [0] = sym_class_character,
    [2] = sym_class_character,
  },
  [6] = {
    [3] = alias_sym_lazy,
  },
  [7] = {
    [0] = alias_sym_unicode_property_name,
    [2] = alias_sym_unicode_property_value,
  },
  [8] = {
    [5] = alias_sym_lazy,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        SKIP(0);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '$')
        ADVANCE(3);
      if (lookahead == '(')
        ADVANCE(4);
      if (lookahead == ')')
        ADVANCE(5);
      if (lookahead == '*')
        ADVANCE(6);
      if (lookahead == '+')
        ADVANCE(7);
      if (lookahead == ',')
        ADVANCE(8);
      if (lookahead == '-')
        ADVANCE(9);
      if (lookahead == '.')
        ADVANCE(10);
      if (lookahead == '=')
        ADVANCE(11);
      if (lookahead == '>')
        ADVANCE(12);
      if (lookahead == '?')
        ADVANCE(13);
      if (lookahead == '[')
        ADVANCE(14);
      if (lookahead == '\\')
        ADVANCE(15);
      if (lookahead == ']')
        ADVANCE(16);
      if (lookahead == '^')
        ADVANCE(17);
      if (lookahead == '{')
        ADVANCE(18);
      if (lookahead == '|')
        ADVANCE(19);
      if (lookahead == '}')
        ADVANCE(20);
      if (lookahead != 0)
        ADVANCE(21);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(sym_end_assertion);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '?')
        ADVANCE(22);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_any_character);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 15:
      if (lookahead == '-')
        ADVANCE(23);
      if (lookahead == 'B')
        ADVANCE(24);
      if (lookahead == 'b')
        ADVANCE(25);
      if (lookahead == 'c')
        ADVANCE(26);
      if (lookahead == 'k')
        ADVANCE(27);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(28);
      if (lookahead == '0' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'v')
        ADVANCE(29);
      if (lookahead == 'D' ||
          lookahead == 'S' ||
          lookahead == 'W' ||
          lookahead == 'd' ||
          lookahead == 's' ||
          lookahead == 'w')
        ADVANCE(30);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(31);
      if (lookahead != 0)
        ADVANCE(32);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_pattern_character);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_LPAREN_QMARK);
      if (lookahead == ':')
        ADVANCE(33);
      if (lookahead == '<')
        ADVANCE(34);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_BSLASH_DASH);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_non_boundary_assertion);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_boundary_assertion);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_identity_escape);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(35);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_BSLASHk);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_character_class_escape_token2);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_control_escape);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_character_class_escape_token1);
      END_STATE();
    case 31:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(36);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_identity_escape);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_LPAREN_QMARK_COLON);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_LPAREN_QMARK_LT);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_control_letter_escape);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_decimal_escape);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(36);
      END_STATE();
    case 37:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        SKIP(37);
      if (lookahead == '$')
        ADVANCE(3);
      if (lookahead == '(')
        ADVANCE(4);
      if (lookahead == ')')
        ADVANCE(5);
      if (lookahead == '*')
        ADVANCE(6);
      if (lookahead == '+')
        ADVANCE(7);
      if (lookahead == '.')
        ADVANCE(10);
      if (lookahead == '?')
        ADVANCE(13);
      if (lookahead == '[')
        ADVANCE(14);
      if (lookahead == '\\')
        ADVANCE(38);
      if (lookahead == '^')
        ADVANCE(17);
      if (lookahead == '{')
        ADVANCE(18);
      if (lookahead == '|')
        ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != ']' &&
          lookahead != '}')
        ADVANCE(21);
      END_STATE();
    case 38:
      if (lookahead == 'B')
        ADVANCE(24);
      if (lookahead == 'b')
        ADVANCE(25);
      if (lookahead == 'c')
        ADVANCE(26);
      if (lookahead == 'k')
        ADVANCE(27);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(28);
      if (lookahead == '0' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'v')
        ADVANCE(29);
      if (lookahead == 'D' ||
          lookahead == 'S' ||
          lookahead == 'W' ||
          lookahead == 'd' ||
          lookahead == 's' ||
          lookahead == 'w')
        ADVANCE(30);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(31);
      if (lookahead != 0)
        ADVANCE(32);
      END_STATE();
    case 39:
      if (lookahead == '\n')
        SKIP(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(40);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_group_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(40);
      END_STATE();
    case 41:
      if (lookahead == '\n')
        ADVANCE(42);
      if (lookahead == '-')
        ADVANCE(9);
      if (lookahead == '\\')
        ADVANCE(43);
      if (lookahead == ']')
        ADVANCE(16);
      if (lookahead == '^')
        ADVANCE(17);
      if (lookahead != 0)
        ADVANCE(44);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_class_character);
      if (lookahead == '\n')
        ADVANCE(42);
      if (lookahead == '^')
        ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != '\\' &&
          lookahead != ']')
        ADVANCE(44);
      END_STATE();
    case 43:
      if (lookahead == '-')
        ADVANCE(23);
      if (lookahead == 'c')
        ADVANCE(26);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(28);
      if (lookahead == 'D' ||
          lookahead == 'S' ||
          lookahead == 'W' ||
          lookahead == 'd' ||
          lookahead == 's' ||
          lookahead == 'w')
        ADVANCE(30);
      if (lookahead == '0' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          ('r' <= lookahead && lookahead <= 't') ||
          lookahead == 'v')
        ADVANCE(29);
      if (lookahead != 0 &&
          (lookahead < '1' || '9' < lookahead) &&
          lookahead != 'k')
        ADVANCE(32);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_class_character);
      END_STATE();
    case 45:
      if (lookahead == '\n')
        SKIP(45);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '<')
        ADVANCE(46);
      if (lookahead == '=')
        ADVANCE(11);
      END_STATE();
    case 46:
      if (lookahead == '!')
        ADVANCE(47);
      if (lookahead == '=')
        ADVANCE(48);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_LT_BANG);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 49:
      if (lookahead == '\n')
        SKIP(49);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(50);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_decimal_digits);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(50);
      END_STATE();
    case 51:
      if (lookahead == '\n')
        SKIP(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_unicode_property);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 53:
      if (lookahead == '\n')
        ADVANCE(54);
      if (lookahead == '-')
        ADVANCE(9);
      if (lookahead == '\\')
        ADVANCE(43);
      if (lookahead == ']')
        ADVANCE(16);
      if (lookahead != 0)
        ADVANCE(44);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_class_character);
      if (lookahead == '\n')
        ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != '\\' &&
          lookahead != ']')
        ADVANCE(44);
      END_STATE();
    case 55:
      if (lookahead == '\n')
        SKIP(55);
      if (lookahead == '>')
        ADVANCE(12);
      END_STATE();
    case 56:
      if (lookahead == '\n')
        SKIP(56);
      if (lookahead == ',')
        ADVANCE(8);
      if (lookahead == '}')
        ADVANCE(20);
      END_STATE();
    case 57:
      if (lookahead == '\n')
        SKIP(57);
      if (lookahead == '=')
        ADVANCE(11);
      if (lookahead == '}')
        ADVANCE(20);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 37},
  [2] = {.lex_state = 37},
  [3] = {.lex_state = 37},
  [4] = {.lex_state = 37},
  [5] = {.lex_state = 39},
  [6] = {.lex_state = 41},
  [7] = {.lex_state = 37},
  [8] = {.lex_state = 37},
  [9] = {.lex_state = 39},
  [10] = {.lex_state = 37},
  [11] = {.lex_state = 45},
  [12] = {.lex_state = 37},
  [13] = {.lex_state = 37},
  [14] = {.lex_state = 37},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 37},
  [17] = {.lex_state = 37},
  [18] = {.lex_state = 49},
  [19] = {.lex_state = 37},
  [20] = {.lex_state = 37},
  [21] = {.lex_state = 37},
  [22] = {.lex_state = 37},
  [23] = {.lex_state = 37},
  [24] = {.lex_state = 51},
  [25] = {.lex_state = 37},
  [26] = {.lex_state = 53},
  [27] = {.lex_state = 53},
  [28] = {.lex_state = 37},
  [29] = {.lex_state = 53},
  [30] = {.lex_state = 37},
  [31] = {.lex_state = 53},
  [32] = {.lex_state = 53},
  [33] = {.lex_state = 55},
  [34] = {.lex_state = 37},
  [35] = {.lex_state = 37},
  [36] = {.lex_state = 37},
  [37] = {.lex_state = 37},
  [38] = {.lex_state = 37},
  [39] = {.lex_state = 37},
  [40] = {.lex_state = 37},
  [41] = {.lex_state = 37},
  [42] = {.lex_state = 37},
  [43] = {.lex_state = 37},
  [44] = {.lex_state = 56},
  [45] = {.lex_state = 37},
  [46] = {.lex_state = 37},
  [47] = {.lex_state = 37},
  [48] = {.lex_state = 57},
  [49] = {.lex_state = 56},
  [50] = {.lex_state = 53},
  [51] = {.lex_state = 53},
  [52] = {.lex_state = 51},
  [53] = {.lex_state = 37},
  [54] = {.lex_state = 53},
  [55] = {.lex_state = 53},
  [56] = {.lex_state = 37},
  [57] = {.lex_state = 37},
  [58] = {.lex_state = 37},
  [59] = {.lex_state = 37},
  [60] = {.lex_state = 37},
  [61] = {.lex_state = 37},
  [62] = {.lex_state = 37},
  [63] = {.lex_state = 49},
  [64] = {.lex_state = 37},
  [65] = {.lex_state = 51},
  [66] = {.lex_state = 37},
  [67] = {.lex_state = 53},
  [68] = {.lex_state = 53},
  [69] = {.lex_state = 53},
  [70] = {.lex_state = 53},
  [71] = {.lex_state = 56},
  [72] = {.lex_state = 37},
  [73] = {.lex_state = 37},
  [74] = {.lex_state = 37},
  [75] = {.lex_state = 56},
  [76] = {.lex_state = 37},
  [77] = {.lex_state = 56},
  [78] = {.lex_state = 53},
  [79] = {.lex_state = 37},
  [80] = {.lex_state = 37},
  [81] = {.lex_state = 37},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [anon_sym_GT] = ACTIONS(1),
    [sym_identity_escape] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_boundary_assertion] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [aux_sym_character_class_escape_token1] = ACTIONS(1),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(1),
    [anon_sym_BSLASH_DASH] = ACTIONS(1),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(1),
    [sym_control_escape] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_end_assertion] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [sym_non_boundary_assertion] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [aux_sym_character_class_escape_token2] = ACTIONS(1),
    [anon_sym_BSLASHk] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [sym_control_letter_escape] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [sym_pattern_character] = ACTIONS(1),
    [sym_any_character] = ACTIONS(1),
    [anon_sym_LPAREN_QMARK] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [sym_decimal_escape] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
  },
  [1] = {
    [aux_sym_disjunction_repeat1] = STATE(13),
    [aux_sym_term_repeat1] = STATE(14),
    [sym_start_assertion] = STATE(2),
    [sym_lookahead_assertion] = STATE(2),
    [sym_named_capturing_group] = STATE(2),
    [sym_non_capturing_group] = STATE(2),
    [sym_character_class] = STATE(2),
    [sym_backreference_escape] = STATE(2),
    [sym_character_class_escape] = STATE(2),
    [sym_pattern] = STATE(15),
    [sym_disjunction] = STATE(16),
    [sym_term] = STATE(17),
    [sym_anonymous_capturing_group] = STATE(2),
    [sym_end_assertion] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(5),
    [sym_non_boundary_assertion] = ACTIONS(3),
    [sym_identity_escape] = ACTIONS(7),
    [aux_sym_character_class_escape_token2] = ACTIONS(9),
    [anon_sym_BSLASHk] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_CARET] = ACTIONS(15),
    [sym_control_letter_escape] = ACTIONS(3),
    [sym_boundary_assertion] = ACTIONS(3),
    [aux_sym_character_class_escape_token1] = ACTIONS(17),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(19),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(21),
    [sym_pattern_character] = ACTIONS(3),
    [sym_any_character] = ACTIONS(3),
    [anon_sym_LPAREN_QMARK] = ACTIONS(23),
    [sym_control_escape] = ACTIONS(7),
    [sym_decimal_escape] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(25),
  },
  [2] = {
    [sym_count_quantifier] = STATE(22),
    [sym_zero_or_more] = STATE(22),
    [sym_one_or_more] = STATE(22),
    [sym_optional] = STATE(22),
    [sym_end_assertion] = ACTIONS(27),
    [anon_sym_PIPE] = ACTIONS(27),
    [sym_non_boundary_assertion] = ACTIONS(27),
    [sym_identity_escape] = ACTIONS(29),
    [aux_sym_character_class_escape_token2] = ACTIONS(27),
    [anon_sym_BSLASHk] = ACTIONS(27),
    [anon_sym_STAR] = ACTIONS(31),
    [anon_sym_RPAREN] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_CARET] = ACTIONS(27),
    [sym_control_letter_escape] = ACTIONS(27),
    [sym_boundary_assertion] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(33),
    [aux_sym_character_class_escape_token1] = ACTIONS(27),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(27),
    [ts_builtin_sym_end] = ACTIONS(27),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(27),
    [sym_pattern_character] = ACTIONS(27),
    [sym_any_character] = ACTIONS(27),
    [anon_sym_LPAREN_QMARK] = ACTIONS(29),
    [sym_control_escape] = ACTIONS(29),
    [anon_sym_PLUS] = ACTIONS(35),
    [sym_decimal_escape] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_QMARK] = ACTIONS(37),
  },
  [3] = {
    [sym_start_assertion] = STATE(2),
    [aux_sym_term_repeat1] = STATE(14),
    [sym_lookahead_assertion] = STATE(2),
    [sym_named_capturing_group] = STATE(2),
    [sym_non_capturing_group] = STATE(2),
    [sym_backreference_escape] = STATE(2),
    [sym_character_class] = STATE(2),
    [sym_character_class_escape] = STATE(2),
    [sym_term] = STATE(23),
    [sym_anonymous_capturing_group] = STATE(2),
    [sym_end_assertion] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(39),
    [sym_identity_escape] = ACTIONS(7),
    [sym_non_boundary_assertion] = ACTIONS(3),
    [aux_sym_character_class_escape_token2] = ACTIONS(9),
    [anon_sym_BSLASHk] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_CARET] = ACTIONS(15),
    [sym_control_letter_escape] = ACTIONS(3),
    [sym_boundary_assertion] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(39),
    [aux_sym_character_class_escape_token1] = ACTIONS(17),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(19),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(21),
    [sym_pattern_character] = ACTIONS(3),
    [sym_any_character] = ACTIONS(3),
    [anon_sym_LPAREN_QMARK] = ACTIONS(23),
    [sym_control_escape] = ACTIONS(7),
    [sym_decimal_escape] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(25),
  },
  [4] = {
    [anon_sym_LBRACE] = ACTIONS(41),
  },
  [5] = {
    [sym_group_name] = ACTIONS(43),
  },
  [6] = {
    [sym_class_range] = STATE(32),
    [sym_character_class_escape] = STATE(27),
    [aux_sym_character_class_repeat1] = STATE(32),
    [aux_sym_character_class_escape_token1] = ACTIONS(45),
    [sym_identity_escape] = ACTIONS(47),
    [anon_sym_BSLASH_DASH] = ACTIONS(47),
    [anon_sym_RBRACK] = ACTIONS(49),
    [aux_sym_character_class_escape_token2] = ACTIONS(51),
    [anon_sym_DASH] = ACTIONS(53),
    [sym_class_character] = ACTIONS(47),
    [sym_control_escape] = ACTIONS(47),
    [sym_control_letter_escape] = ACTIONS(47),
    [anon_sym_CARET] = ACTIONS(55),
  },
  [7] = {
    [sym_end_assertion] = ACTIONS(57),
    [anon_sym_PIPE] = ACTIONS(57),
    [sym_non_boundary_assertion] = ACTIONS(57),
    [sym_identity_escape] = ACTIONS(59),
    [aux_sym_character_class_escape_token2] = ACTIONS(57),
    [anon_sym_BSLASHk] = ACTIONS(57),
    [anon_sym_STAR] = ACTIONS(57),
    [anon_sym_RPAREN] = ACTIONS(57),
    [anon_sym_LBRACK] = ACTIONS(57),
    [anon_sym_CARET] = ACTIONS(57),
    [sym_control_letter_escape] = ACTIONS(57),
    [sym_boundary_assertion] = ACTIONS(57),
    [anon_sym_LBRACE] = ACTIONS(57),
    [aux_sym_character_class_escape_token1] = ACTIONS(57),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(57),
    [ts_builtin_sym_end] = ACTIONS(57),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(57),
    [sym_pattern_character] = ACTIONS(57),
    [sym_any_character] = ACTIONS(57),
    [anon_sym_LPAREN_QMARK] = ACTIONS(59),
    [sym_control_escape] = ACTIONS(59),
    [anon_sym_PLUS] = ACTIONS(57),
    [sym_decimal_escape] = ACTIONS(57),
    [anon_sym_LPAREN] = ACTIONS(59),
    [anon_sym_QMARK] = ACTIONS(57),
  },
  [8] = {
    [sym_end_assertion] = ACTIONS(61),
    [anon_sym_PIPE] = ACTIONS(61),
    [sym_non_boundary_assertion] = ACTIONS(61),
    [sym_identity_escape] = ACTIONS(63),
    [aux_sym_character_class_escape_token2] = ACTIONS(61),
    [anon_sym_BSLASHk] = ACTIONS(61),
    [anon_sym_STAR] = ACTIONS(61),
    [anon_sym_RPAREN] = ACTIONS(61),
    [anon_sym_LBRACK] = ACTIONS(61),
    [anon_sym_CARET] = ACTIONS(61),
    [sym_control_letter_escape] = ACTIONS(61),
    [sym_boundary_assertion] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(61),
    [aux_sym_character_class_escape_token1] = ACTIONS(61),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(61),
    [ts_builtin_sym_end] = ACTIONS(61),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(61),
    [sym_pattern_character] = ACTIONS(61),
    [sym_any_character] = ACTIONS(61),
    [anon_sym_LPAREN_QMARK] = ACTIONS(63),
    [sym_control_escape] = ACTIONS(63),
    [anon_sym_PLUS] = ACTIONS(61),
    [sym_decimal_escape] = ACTIONS(61),
    [anon_sym_LPAREN] = ACTIONS(63),
    [anon_sym_QMARK] = ACTIONS(61),
  },
  [9] = {
    [sym_group_name] = ACTIONS(65),
  },
  [10] = {
    [aux_sym_disjunction_repeat1] = STATE(35),
    [aux_sym_term_repeat1] = STATE(36),
    [sym_start_assertion] = STATE(2),
    [sym_lookahead_assertion] = STATE(2),
    [sym_named_capturing_group] = STATE(2),
    [sym_non_capturing_group] = STATE(2),
    [sym_character_class] = STATE(2),
    [sym_backreference_escape] = STATE(2),
    [sym_character_class_escape] = STATE(2),
    [sym_pattern] = STATE(37),
    [sym_disjunction] = STATE(16),
    [sym_term] = STATE(38),
    [sym_anonymous_capturing_group] = STATE(2),
    [sym_end_assertion] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(67),
    [sym_non_boundary_assertion] = ACTIONS(3),
    [sym_identity_escape] = ACTIONS(7),
    [aux_sym_character_class_escape_token2] = ACTIONS(9),
    [anon_sym_BSLASHk] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_CARET] = ACTIONS(15),
    [sym_control_letter_escape] = ACTIONS(3),
    [sym_boundary_assertion] = ACTIONS(3),
    [aux_sym_character_class_escape_token1] = ACTIONS(17),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(19),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(21),
    [sym_pattern_character] = ACTIONS(3),
    [sym_any_character] = ACTIONS(3),
    [anon_sym_LPAREN_QMARK] = ACTIONS(23),
    [sym_control_escape] = ACTIONS(7),
    [sym_decimal_escape] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(25),
  },
  [11] = {
    [anon_sym_LT_EQ] = ACTIONS(69),
    [anon_sym_BANG] = ACTIONS(69),
    [anon_sym_LT_BANG] = ACTIONS(69),
    [anon_sym_EQ] = ACTIONS(69),
  },
  [12] = {
    [aux_sym_disjunction_repeat1] = STATE(35),
    [aux_sym_term_repeat1] = STATE(36),
    [sym_start_assertion] = STATE(2),
    [sym_lookahead_assertion] = STATE(2),
    [sym_named_capturing_group] = STATE(2),
    [sym_non_capturing_group] = STATE(2),
    [sym_character_class] = STATE(2),
    [sym_backreference_escape] = STATE(2),
    [sym_character_class_escape] = STATE(2),
    [sym_pattern] = STATE(40),
    [sym_disjunction] = STATE(16),
    [sym_term] = STATE(38),
    [sym_anonymous_capturing_group] = STATE(2),
    [sym_end_assertion] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(67),
    [sym_non_boundary_assertion] = ACTIONS(3),
    [sym_identity_escape] = ACTIONS(7),
    [aux_sym_character_class_escape_token2] = ACTIONS(9),
    [anon_sym_BSLASHk] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_CARET] = ACTIONS(15),
    [sym_control_letter_escape] = ACTIONS(3),
    [sym_boundary_assertion] = ACTIONS(3),
    [aux_sym_character_class_escape_token1] = ACTIONS(17),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(19),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(21),
    [sym_pattern_character] = ACTIONS(3),
    [sym_any_character] = ACTIONS(3),
    [anon_sym_LPAREN_QMARK] = ACTIONS(23),
    [sym_control_escape] = ACTIONS(7),
    [sym_decimal_escape] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(25),
  },
  [13] = {
    [aux_sym_disjunction_repeat1] = STATE(41),
    [anon_sym_PIPE] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(71),
  },
  [14] = {
    [sym_start_assertion] = STATE(2),
    [sym_lookahead_assertion] = STATE(2),
    [sym_named_capturing_group] = STATE(2),
    [sym_non_capturing_group] = STATE(2),
    [sym_backreference_escape] = STATE(2),
    [sym_character_class_escape] = STATE(2),
    [sym_character_class] = STATE(2),
    [aux_sym_term_repeat1] = STATE(42),
    [sym_anonymous_capturing_group] = STATE(2),
    [sym_end_assertion] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(73),
    [sym_identity_escape] = ACTIONS(7),
    [sym_non_boundary_assertion] = ACTIONS(3),
    [aux_sym_character_class_escape_token2] = ACTIONS(9),
    [anon_sym_BSLASHk] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_CARET] = ACTIONS(15),
    [sym_control_letter_escape] = ACTIONS(3),
    [sym_boundary_assertion] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(73),
    [aux_sym_character_class_escape_token1] = ACTIONS(17),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(19),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(21),
    [sym_pattern_character] = ACTIONS(3),
    [sym_any_character] = ACTIONS(3),
    [anon_sym_LPAREN_QMARK] = ACTIONS(23),
    [sym_control_escape] = ACTIONS(7),
    [sym_decimal_escape] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(25),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(75),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(77),
    [anon_sym_RPAREN] = ACTIONS(77),
  },
  [17] = {
    [aux_sym_disjunction_repeat1] = STATE(43),
    [anon_sym_PIPE] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(77),
  },
  [18] = {
    [sym_decimal_digits] = ACTIONS(79),
  },
  [19] = {
    [sym_end_assertion] = ACTIONS(81),
    [anon_sym_PIPE] = ACTIONS(81),
    [sym_non_boundary_assertion] = ACTIONS(81),
    [sym_identity_escape] = ACTIONS(83),
    [aux_sym_character_class_escape_token2] = ACTIONS(81),
    [anon_sym_BSLASHk] = ACTIONS(81),
    [anon_sym_RPAREN] = ACTIONS(81),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_CARET] = ACTIONS(81),
    [sym_control_letter_escape] = ACTIONS(81),
    [sym_boundary_assertion] = ACTIONS(81),
    [aux_sym_character_class_escape_token1] = ACTIONS(81),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(81),
    [ts_builtin_sym_end] = ACTIONS(81),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(81),
    [sym_pattern_character] = ACTIONS(81),
    [sym_any_character] = ACTIONS(81),
    [anon_sym_LPAREN_QMARK] = ACTIONS(83),
    [sym_control_escape] = ACTIONS(83),
    [sym_decimal_escape] = ACTIONS(81),
    [anon_sym_LPAREN] = ACTIONS(83),
    [anon_sym_QMARK] = ACTIONS(85),
  },
  [20] = {
    [sym_end_assertion] = ACTIONS(87),
    [anon_sym_PIPE] = ACTIONS(87),
    [sym_non_boundary_assertion] = ACTIONS(87),
    [sym_identity_escape] = ACTIONS(89),
    [aux_sym_character_class_escape_token2] = ACTIONS(87),
    [anon_sym_BSLASHk] = ACTIONS(87),
    [anon_sym_RPAREN] = ACTIONS(87),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_CARET] = ACTIONS(87),
    [sym_control_letter_escape] = ACTIONS(87),
    [sym_boundary_assertion] = ACTIONS(87),
    [aux_sym_character_class_escape_token1] = ACTIONS(87),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(87),
    [ts_builtin_sym_end] = ACTIONS(87),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(87),
    [sym_pattern_character] = ACTIONS(87),
    [sym_any_character] = ACTIONS(87),
    [anon_sym_LPAREN_QMARK] = ACTIONS(89),
    [sym_control_escape] = ACTIONS(89),
    [sym_decimal_escape] = ACTIONS(87),
    [anon_sym_LPAREN] = ACTIONS(89),
    [anon_sym_QMARK] = ACTIONS(91),
  },
  [21] = {
    [sym_end_assertion] = ACTIONS(93),
    [anon_sym_PIPE] = ACTIONS(93),
    [sym_non_boundary_assertion] = ACTIONS(93),
    [sym_identity_escape] = ACTIONS(95),
    [aux_sym_character_class_escape_token2] = ACTIONS(93),
    [anon_sym_BSLASHk] = ACTIONS(93),
    [anon_sym_RPAREN] = ACTIONS(93),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_CARET] = ACTIONS(93),
    [sym_control_letter_escape] = ACTIONS(93),
    [sym_boundary_assertion] = ACTIONS(93),
    [aux_sym_character_class_escape_token1] = ACTIONS(93),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(93),
    [ts_builtin_sym_end] = ACTIONS(93),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(93),
    [sym_pattern_character] = ACTIONS(93),
    [sym_any_character] = ACTIONS(93),
    [anon_sym_LPAREN_QMARK] = ACTIONS(95),
    [sym_control_escape] = ACTIONS(95),
    [sym_decimal_escape] = ACTIONS(93),
    [anon_sym_LPAREN] = ACTIONS(95),
    [anon_sym_QMARK] = ACTIONS(97),
  },
  [22] = {
    [sym_end_assertion] = ACTIONS(99),
    [anon_sym_PIPE] = ACTIONS(99),
    [sym_non_boundary_assertion] = ACTIONS(99),
    [sym_identity_escape] = ACTIONS(101),
    [aux_sym_character_class_escape_token2] = ACTIONS(99),
    [anon_sym_BSLASHk] = ACTIONS(99),
    [anon_sym_RPAREN] = ACTIONS(99),
    [anon_sym_LBRACK] = ACTIONS(99),
    [anon_sym_CARET] = ACTIONS(99),
    [sym_control_letter_escape] = ACTIONS(99),
    [sym_boundary_assertion] = ACTIONS(99),
    [aux_sym_character_class_escape_token1] = ACTIONS(99),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(99),
    [ts_builtin_sym_end] = ACTIONS(99),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(99),
    [sym_pattern_character] = ACTIONS(99),
    [sym_any_character] = ACTIONS(99),
    [anon_sym_LPAREN_QMARK] = ACTIONS(101),
    [sym_control_escape] = ACTIONS(101),
    [sym_decimal_escape] = ACTIONS(99),
    [anon_sym_LPAREN] = ACTIONS(101),
  },
  [23] = {
    [anon_sym_PIPE] = ACTIONS(103),
    [ts_builtin_sym_end] = ACTIONS(103),
    [anon_sym_RPAREN] = ACTIONS(103),
  },
  [24] = {
    [sym_unicode_property_value_expression] = STATE(49),
    [sym_unicode_property] = ACTIONS(105),
  },
  [25] = {
    [sym_end_assertion] = ACTIONS(107),
    [anon_sym_PIPE] = ACTIONS(107),
    [sym_non_boundary_assertion] = ACTIONS(107),
    [sym_identity_escape] = ACTIONS(109),
    [aux_sym_character_class_escape_token2] = ACTIONS(107),
    [anon_sym_BSLASHk] = ACTIONS(107),
    [anon_sym_STAR] = ACTIONS(107),
    [anon_sym_RPAREN] = ACTIONS(107),
    [anon_sym_LBRACK] = ACTIONS(107),
    [anon_sym_CARET] = ACTIONS(107),
    [sym_control_letter_escape] = ACTIONS(107),
    [sym_boundary_assertion] = ACTIONS(107),
    [anon_sym_LBRACE] = ACTIONS(107),
    [aux_sym_character_class_escape_token1] = ACTIONS(107),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(107),
    [ts_builtin_sym_end] = ACTIONS(107),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(107),
    [sym_pattern_character] = ACTIONS(107),
    [sym_any_character] = ACTIONS(107),
    [anon_sym_LPAREN_QMARK] = ACTIONS(109),
    [sym_control_escape] = ACTIONS(109),
    [anon_sym_PLUS] = ACTIONS(107),
    [sym_decimal_escape] = ACTIONS(107),
    [anon_sym_LPAREN] = ACTIONS(109),
    [anon_sym_QMARK] = ACTIONS(107),
  },
  [26] = {
    [anon_sym_RBRACK] = ACTIONS(63),
    [aux_sym_character_class_escape_token1] = ACTIONS(63),
    [anon_sym_BSLASH_DASH] = ACTIONS(63),
    [sym_identity_escape] = ACTIONS(63),
    [aux_sym_character_class_escape_token2] = ACTIONS(63),
    [anon_sym_DASH] = ACTIONS(63),
    [sym_class_character] = ACTIONS(61),
    [sym_control_escape] = ACTIONS(63),
    [sym_control_letter_escape] = ACTIONS(63),
  },
  [27] = {
    [anon_sym_RBRACK] = ACTIONS(111),
    [aux_sym_character_class_escape_token1] = ACTIONS(111),
    [anon_sym_BSLASH_DASH] = ACTIONS(111),
    [sym_identity_escape] = ACTIONS(111),
    [aux_sym_character_class_escape_token2] = ACTIONS(111),
    [anon_sym_DASH] = ACTIONS(113),
    [sym_class_character] = ACTIONS(115),
    [sym_control_escape] = ACTIONS(111),
    [sym_control_letter_escape] = ACTIONS(111),
  },
  [28] = {
    [sym_end_assertion] = ACTIONS(117),
    [anon_sym_PIPE] = ACTIONS(117),
    [sym_non_boundary_assertion] = ACTIONS(117),
    [sym_identity_escape] = ACTIONS(119),
    [aux_sym_character_class_escape_token2] = ACTIONS(117),
    [anon_sym_BSLASHk] = ACTIONS(117),
    [anon_sym_STAR] = ACTIONS(117),
    [anon_sym_RPAREN] = ACTIONS(117),
    [anon_sym_LBRACK] = ACTIONS(117),
    [anon_sym_CARET] = ACTIONS(117),
    [sym_control_letter_escape] = ACTIONS(117),
    [sym_boundary_assertion] = ACTIONS(117),
    [anon_sym_LBRACE] = ACTIONS(117),
    [aux_sym_character_class_escape_token1] = ACTIONS(117),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(117),
    [ts_builtin_sym_end] = ACTIONS(117),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(117),
    [sym_pattern_character] = ACTIONS(117),
    [sym_any_character] = ACTIONS(117),
    [anon_sym_LPAREN_QMARK] = ACTIONS(119),
    [sym_control_escape] = ACTIONS(119),
    [anon_sym_PLUS] = ACTIONS(117),
    [sym_decimal_escape] = ACTIONS(117),
    [anon_sym_LPAREN] = ACTIONS(119),
    [anon_sym_QMARK] = ACTIONS(117),
  },
  [29] = {
    [anon_sym_RBRACK] = ACTIONS(121),
    [aux_sym_character_class_escape_token1] = ACTIONS(121),
    [anon_sym_BSLASH_DASH] = ACTIONS(121),
    [sym_identity_escape] = ACTIONS(121),
    [aux_sym_character_class_escape_token2] = ACTIONS(121),
    [anon_sym_DASH] = ACTIONS(123),
    [sym_class_character] = ACTIONS(125),
    [sym_control_escape] = ACTIONS(121),
    [sym_control_letter_escape] = ACTIONS(121),
  },
  [30] = {
    [anon_sym_LBRACE] = ACTIONS(127),
  },
  [31] = {
    [sym_class_range] = STATE(54),
    [sym_character_class_escape] = STATE(27),
    [aux_sym_character_class_repeat1] = STATE(54),
    [aux_sym_character_class_escape_token1] = ACTIONS(45),
    [sym_identity_escape] = ACTIONS(47),
    [anon_sym_BSLASH_DASH] = ACTIONS(47),
    [anon_sym_RBRACK] = ACTIONS(129),
    [aux_sym_character_class_escape_token2] = ACTIONS(51),
    [anon_sym_DASH] = ACTIONS(53),
    [sym_class_character] = ACTIONS(131),
    [sym_control_escape] = ACTIONS(47),
    [sym_control_letter_escape] = ACTIONS(47),
  },
  [32] = {
    [sym_class_range] = STATE(55),
    [sym_character_class_escape] = STATE(27),
    [aux_sym_character_class_repeat1] = STATE(55),
    [aux_sym_character_class_escape_token1] = ACTIONS(45),
    [sym_identity_escape] = ACTIONS(47),
    [anon_sym_BSLASH_DASH] = ACTIONS(47),
    [anon_sym_RBRACK] = ACTIONS(129),
    [aux_sym_character_class_escape_token2] = ACTIONS(51),
    [anon_sym_DASH] = ACTIONS(53),
    [sym_class_character] = ACTIONS(131),
    [sym_control_escape] = ACTIONS(47),
    [sym_control_letter_escape] = ACTIONS(47),
  },
  [33] = {
    [anon_sym_GT] = ACTIONS(133),
  },
  [34] = {
    [sym_start_assertion] = STATE(2),
    [aux_sym_term_repeat1] = STATE(36),
    [sym_lookahead_assertion] = STATE(2),
    [sym_named_capturing_group] = STATE(2),
    [sym_non_capturing_group] = STATE(2),
    [sym_backreference_escape] = STATE(2),
    [sym_character_class] = STATE(2),
    [sym_character_class_escape] = STATE(2),
    [sym_term] = STATE(23),
    [sym_anonymous_capturing_group] = STATE(2),
    [sym_end_assertion] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(39),
    [sym_identity_escape] = ACTIONS(7),
    [sym_non_boundary_assertion] = ACTIONS(3),
    [aux_sym_character_class_escape_token2] = ACTIONS(9),
    [anon_sym_BSLASHk] = ACTIONS(11),
    [anon_sym_RPAREN] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_CARET] = ACTIONS(15),
    [sym_control_letter_escape] = ACTIONS(3),
    [sym_boundary_assertion] = ACTIONS(3),
    [aux_sym_character_class_escape_token1] = ACTIONS(17),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(19),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(21),
    [sym_pattern_character] = ACTIONS(3),
    [sym_any_character] = ACTIONS(3),
    [anon_sym_LPAREN_QMARK] = ACTIONS(23),
    [sym_control_escape] = ACTIONS(7),
    [sym_decimal_escape] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(25),
  },
  [35] = {
    [aux_sym_disjunction_repeat1] = STATE(57),
    [anon_sym_PIPE] = ACTIONS(67),
    [anon_sym_RPAREN] = ACTIONS(71),
  },
  [36] = {
    [sym_start_assertion] = STATE(2),
    [sym_lookahead_assertion] = STATE(2),
    [sym_named_capturing_group] = STATE(2),
    [sym_non_capturing_group] = STATE(2),
    [sym_backreference_escape] = STATE(2),
    [sym_character_class_escape] = STATE(2),
    [sym_character_class] = STATE(2),
    [aux_sym_term_repeat1] = STATE(58),
    [sym_anonymous_capturing_group] = STATE(2),
    [sym_end_assertion] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(73),
    [sym_identity_escape] = ACTIONS(7),
    [sym_non_boundary_assertion] = ACTIONS(3),
    [aux_sym_character_class_escape_token2] = ACTIONS(9),
    [anon_sym_BSLASHk] = ACTIONS(11),
    [anon_sym_RPAREN] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_CARET] = ACTIONS(15),
    [sym_control_letter_escape] = ACTIONS(3),
    [sym_boundary_assertion] = ACTIONS(3),
    [aux_sym_character_class_escape_token1] = ACTIONS(17),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(19),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(21),
    [sym_pattern_character] = ACTIONS(3),
    [sym_any_character] = ACTIONS(3),
    [anon_sym_LPAREN_QMARK] = ACTIONS(23),
    [sym_control_escape] = ACTIONS(7),
    [sym_decimal_escape] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(25),
  },
  [37] = {
    [anon_sym_RPAREN] = ACTIONS(135),
  },
  [38] = {
    [aux_sym_disjunction_repeat1] = STATE(60),
    [anon_sym_PIPE] = ACTIONS(67),
    [anon_sym_RPAREN] = ACTIONS(77),
  },
  [39] = {
    [aux_sym_disjunction_repeat1] = STATE(35),
    [aux_sym_term_repeat1] = STATE(36),
    [sym_start_assertion] = STATE(2),
    [sym_lookahead_assertion] = STATE(2),
    [sym_named_capturing_group] = STATE(2),
    [sym_non_capturing_group] = STATE(2),
    [sym_character_class] = STATE(2),
    [sym_backreference_escape] = STATE(2),
    [sym_character_class_escape] = STATE(2),
    [sym_pattern] = STATE(61),
    [sym_disjunction] = STATE(16),
    [sym_term] = STATE(38),
    [sym_anonymous_capturing_group] = STATE(2),
    [sym_end_assertion] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(67),
    [sym_non_boundary_assertion] = ACTIONS(3),
    [sym_identity_escape] = ACTIONS(7),
    [aux_sym_character_class_escape_token2] = ACTIONS(9),
    [anon_sym_BSLASHk] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_CARET] = ACTIONS(15),
    [sym_control_letter_escape] = ACTIONS(3),
    [sym_boundary_assertion] = ACTIONS(3),
    [aux_sym_character_class_escape_token1] = ACTIONS(17),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(19),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(21),
    [sym_pattern_character] = ACTIONS(3),
    [sym_any_character] = ACTIONS(3),
    [anon_sym_LPAREN_QMARK] = ACTIONS(23),
    [sym_control_escape] = ACTIONS(7),
    [sym_decimal_escape] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(25),
  },
  [40] = {
    [anon_sym_RPAREN] = ACTIONS(137),
  },
  [41] = {
    [aux_sym_disjunction_repeat1] = STATE(41),
    [anon_sym_PIPE] = ACTIONS(139),
    [ts_builtin_sym_end] = ACTIONS(103),
  },
  [42] = {
    [sym_start_assertion] = STATE(2),
    [sym_lookahead_assertion] = STATE(2),
    [sym_named_capturing_group] = STATE(2),
    [sym_non_capturing_group] = STATE(2),
    [sym_backreference_escape] = STATE(2),
    [sym_character_class_escape] = STATE(2),
    [sym_character_class] = STATE(2),
    [aux_sym_term_repeat1] = STATE(42),
    [sym_anonymous_capturing_group] = STATE(2),
    [sym_end_assertion] = ACTIONS(142),
    [anon_sym_PIPE] = ACTIONS(99),
    [sym_non_boundary_assertion] = ACTIONS(142),
    [sym_identity_escape] = ACTIONS(145),
    [aux_sym_character_class_escape_token2] = ACTIONS(148),
    [anon_sym_BSLASHk] = ACTIONS(151),
    [anon_sym_LBRACK] = ACTIONS(154),
    [anon_sym_CARET] = ACTIONS(157),
    [sym_control_letter_escape] = ACTIONS(142),
    [sym_boundary_assertion] = ACTIONS(142),
    [aux_sym_character_class_escape_token1] = ACTIONS(160),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(163),
    [ts_builtin_sym_end] = ACTIONS(99),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(166),
    [sym_pattern_character] = ACTIONS(142),
    [sym_any_character] = ACTIONS(142),
    [anon_sym_LPAREN_QMARK] = ACTIONS(169),
    [sym_control_escape] = ACTIONS(145),
    [sym_decimal_escape] = ACTIONS(142),
    [anon_sym_LPAREN] = ACTIONS(172),
  },
  [43] = {
    [aux_sym_disjunction_repeat1] = STATE(41),
    [anon_sym_PIPE] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(175),
  },
  [44] = {
    [anon_sym_COMMA] = ACTIONS(177),
    [anon_sym_RBRACE] = ACTIONS(179),
  },
  [45] = {
    [sym_end_assertion] = ACTIONS(181),
    [anon_sym_PIPE] = ACTIONS(181),
    [sym_non_boundary_assertion] = ACTIONS(181),
    [sym_identity_escape] = ACTIONS(183),
    [aux_sym_character_class_escape_token2] = ACTIONS(181),
    [anon_sym_BSLASHk] = ACTIONS(181),
    [anon_sym_RPAREN] = ACTIONS(181),
    [anon_sym_LBRACK] = ACTIONS(181),
    [anon_sym_CARET] = ACTIONS(181),
    [sym_control_letter_escape] = ACTIONS(181),
    [sym_boundary_assertion] = ACTIONS(181),
    [aux_sym_character_class_escape_token1] = ACTIONS(181),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(181),
    [ts_builtin_sym_end] = ACTIONS(181),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(181),
    [sym_pattern_character] = ACTIONS(181),
    [sym_any_character] = ACTIONS(181),
    [anon_sym_LPAREN_QMARK] = ACTIONS(183),
    [sym_control_escape] = ACTIONS(183),
    [sym_decimal_escape] = ACTIONS(181),
    [anon_sym_LPAREN] = ACTIONS(183),
  },
  [46] = {
    [sym_end_assertion] = ACTIONS(185),
    [anon_sym_PIPE] = ACTIONS(185),
    [sym_non_boundary_assertion] = ACTIONS(185),
    [sym_identity_escape] = ACTIONS(187),
    [aux_sym_character_class_escape_token2] = ACTIONS(185),
    [anon_sym_BSLASHk] = ACTIONS(185),
    [anon_sym_RPAREN] = ACTIONS(185),
    [anon_sym_LBRACK] = ACTIONS(185),
    [anon_sym_CARET] = ACTIONS(185),
    [sym_control_letter_escape] = ACTIONS(185),
    [sym_boundary_assertion] = ACTIONS(185),
    [aux_sym_character_class_escape_token1] = ACTIONS(185),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(185),
    [ts_builtin_sym_end] = ACTIONS(185),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(185),
    [sym_pattern_character] = ACTIONS(185),
    [sym_any_character] = ACTIONS(185),
    [anon_sym_LPAREN_QMARK] = ACTIONS(187),
    [sym_control_escape] = ACTIONS(187),
    [sym_decimal_escape] = ACTIONS(185),
    [anon_sym_LPAREN] = ACTIONS(187),
  },
  [47] = {
    [sym_end_assertion] = ACTIONS(189),
    [anon_sym_PIPE] = ACTIONS(189),
    [sym_non_boundary_assertion] = ACTIONS(189),
    [sym_identity_escape] = ACTIONS(191),
    [aux_sym_character_class_escape_token2] = ACTIONS(189),
    [anon_sym_BSLASHk] = ACTIONS(189),
    [anon_sym_RPAREN] = ACTIONS(189),
    [anon_sym_LBRACK] = ACTIONS(189),
    [anon_sym_CARET] = ACTIONS(189),
    [sym_control_letter_escape] = ACTIONS(189),
    [sym_boundary_assertion] = ACTIONS(189),
    [aux_sym_character_class_escape_token1] = ACTIONS(189),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(189),
    [ts_builtin_sym_end] = ACTIONS(189),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(189),
    [sym_pattern_character] = ACTIONS(189),
    [sym_any_character] = ACTIONS(189),
    [anon_sym_LPAREN_QMARK] = ACTIONS(191),
    [sym_control_escape] = ACTIONS(191),
    [sym_decimal_escape] = ACTIONS(189),
    [anon_sym_LPAREN] = ACTIONS(191),
  },
  [48] = {
    [anon_sym_EQ] = ACTIONS(193),
    [anon_sym_RBRACE] = ACTIONS(195),
  },
  [49] = {
    [anon_sym_RBRACE] = ACTIONS(197),
  },
  [50] = {
    [sym_character_class_escape] = STATE(67),
    [aux_sym_character_class_escape_token1] = ACTIONS(45),
    [sym_identity_escape] = ACTIONS(199),
    [anon_sym_BSLASH_DASH] = ACTIONS(199),
    [anon_sym_DASH] = ACTIONS(201),
    [aux_sym_character_class_escape_token2] = ACTIONS(51),
    [sym_class_character] = ACTIONS(203),
    [sym_control_escape] = ACTIONS(199),
    [sym_control_letter_escape] = ACTIONS(199),
  },
  [51] = {
    [sym_character_class_escape] = STATE(69),
    [aux_sym_character_class_escape_token1] = ACTIONS(45),
    [sym_identity_escape] = ACTIONS(205),
    [anon_sym_BSLASH_DASH] = ACTIONS(205),
    [anon_sym_DASH] = ACTIONS(207),
    [aux_sym_character_class_escape_token2] = ACTIONS(51),
    [sym_class_character] = ACTIONS(209),
    [sym_control_escape] = ACTIONS(205),
    [sym_control_letter_escape] = ACTIONS(205),
  },
  [52] = {
    [sym_unicode_property_value_expression] = STATE(71),
    [sym_unicode_property] = ACTIONS(105),
  },
  [53] = {
    [sym_end_assertion] = ACTIONS(211),
    [anon_sym_PIPE] = ACTIONS(211),
    [sym_non_boundary_assertion] = ACTIONS(211),
    [sym_identity_escape] = ACTIONS(213),
    [aux_sym_character_class_escape_token2] = ACTIONS(211),
    [anon_sym_BSLASHk] = ACTIONS(211),
    [anon_sym_STAR] = ACTIONS(211),
    [anon_sym_RPAREN] = ACTIONS(211),
    [anon_sym_LBRACK] = ACTIONS(211),
    [anon_sym_CARET] = ACTIONS(211),
    [sym_control_letter_escape] = ACTIONS(211),
    [sym_boundary_assertion] = ACTIONS(211),
    [anon_sym_LBRACE] = ACTIONS(211),
    [aux_sym_character_class_escape_token1] = ACTIONS(211),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(211),
    [ts_builtin_sym_end] = ACTIONS(211),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(211),
    [sym_pattern_character] = ACTIONS(211),
    [sym_any_character] = ACTIONS(211),
    [anon_sym_LPAREN_QMARK] = ACTIONS(213),
    [sym_control_escape] = ACTIONS(213),
    [anon_sym_PLUS] = ACTIONS(211),
    [sym_decimal_escape] = ACTIONS(211),
    [anon_sym_LPAREN] = ACTIONS(213),
    [anon_sym_QMARK] = ACTIONS(211),
  },
  [54] = {
    [sym_class_range] = STATE(55),
    [sym_character_class_escape] = STATE(27),
    [aux_sym_character_class_repeat1] = STATE(55),
    [aux_sym_character_class_escape_token1] = ACTIONS(45),
    [sym_identity_escape] = ACTIONS(47),
    [anon_sym_BSLASH_DASH] = ACTIONS(47),
    [anon_sym_RBRACK] = ACTIONS(215),
    [aux_sym_character_class_escape_token2] = ACTIONS(51),
    [anon_sym_DASH] = ACTIONS(53),
    [sym_class_character] = ACTIONS(131),
    [sym_control_escape] = ACTIONS(47),
    [sym_control_letter_escape] = ACTIONS(47),
  },
  [55] = {
    [sym_class_range] = STATE(55),
    [sym_character_class_escape] = STATE(27),
    [aux_sym_character_class_repeat1] = STATE(55),
    [anon_sym_RBRACK] = ACTIONS(217),
    [aux_sym_character_class_escape_token1] = ACTIONS(219),
    [anon_sym_BSLASH_DASH] = ACTIONS(222),
    [sym_identity_escape] = ACTIONS(222),
    [aux_sym_character_class_escape_token2] = ACTIONS(225),
    [anon_sym_DASH] = ACTIONS(228),
    [sym_class_character] = ACTIONS(231),
    [sym_control_escape] = ACTIONS(222),
    [sym_control_letter_escape] = ACTIONS(222),
  },
  [56] = {
    [aux_sym_disjunction_repeat1] = STATE(35),
    [aux_sym_term_repeat1] = STATE(36),
    [sym_start_assertion] = STATE(2),
    [sym_lookahead_assertion] = STATE(2),
    [sym_named_capturing_group] = STATE(2),
    [sym_non_capturing_group] = STATE(2),
    [sym_character_class] = STATE(2),
    [sym_backreference_escape] = STATE(2),
    [sym_character_class_escape] = STATE(2),
    [sym_pattern] = STATE(73),
    [sym_disjunction] = STATE(16),
    [sym_term] = STATE(38),
    [sym_anonymous_capturing_group] = STATE(2),
    [sym_end_assertion] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(67),
    [sym_non_boundary_assertion] = ACTIONS(3),
    [sym_identity_escape] = ACTIONS(7),
    [aux_sym_character_class_escape_token2] = ACTIONS(9),
    [anon_sym_BSLASHk] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_CARET] = ACTIONS(15),
    [sym_control_letter_escape] = ACTIONS(3),
    [sym_boundary_assertion] = ACTIONS(3),
    [aux_sym_character_class_escape_token1] = ACTIONS(17),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(19),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(21),
    [sym_pattern_character] = ACTIONS(3),
    [sym_any_character] = ACTIONS(3),
    [anon_sym_LPAREN_QMARK] = ACTIONS(23),
    [sym_control_escape] = ACTIONS(7),
    [sym_decimal_escape] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(25),
  },
  [57] = {
    [aux_sym_disjunction_repeat1] = STATE(57),
    [anon_sym_PIPE] = ACTIONS(234),
    [anon_sym_RPAREN] = ACTIONS(103),
  },
  [58] = {
    [sym_start_assertion] = STATE(2),
    [sym_lookahead_assertion] = STATE(2),
    [sym_named_capturing_group] = STATE(2),
    [sym_non_capturing_group] = STATE(2),
    [sym_backreference_escape] = STATE(2),
    [sym_character_class_escape] = STATE(2),
    [sym_character_class] = STATE(2),
    [aux_sym_term_repeat1] = STATE(58),
    [sym_anonymous_capturing_group] = STATE(2),
    [sym_end_assertion] = ACTIONS(142),
    [anon_sym_PIPE] = ACTIONS(99),
    [sym_non_boundary_assertion] = ACTIONS(142),
    [sym_identity_escape] = ACTIONS(145),
    [aux_sym_character_class_escape_token2] = ACTIONS(148),
    [anon_sym_BSLASHk] = ACTIONS(151),
    [anon_sym_RPAREN] = ACTIONS(99),
    [anon_sym_LBRACK] = ACTIONS(154),
    [anon_sym_CARET] = ACTIONS(157),
    [sym_control_letter_escape] = ACTIONS(142),
    [sym_boundary_assertion] = ACTIONS(142),
    [aux_sym_character_class_escape_token1] = ACTIONS(160),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(163),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(166),
    [sym_pattern_character] = ACTIONS(142),
    [sym_any_character] = ACTIONS(142),
    [anon_sym_LPAREN_QMARK] = ACTIONS(169),
    [sym_control_escape] = ACTIONS(145),
    [sym_decimal_escape] = ACTIONS(142),
    [anon_sym_LPAREN] = ACTIONS(172),
  },
  [59] = {
    [sym_end_assertion] = ACTIONS(237),
    [anon_sym_PIPE] = ACTIONS(237),
    [sym_non_boundary_assertion] = ACTIONS(237),
    [sym_identity_escape] = ACTIONS(239),
    [aux_sym_character_class_escape_token2] = ACTIONS(237),
    [anon_sym_BSLASHk] = ACTIONS(237),
    [anon_sym_STAR] = ACTIONS(237),
    [anon_sym_RPAREN] = ACTIONS(237),
    [anon_sym_LBRACK] = ACTIONS(237),
    [anon_sym_CARET] = ACTIONS(237),
    [sym_control_letter_escape] = ACTIONS(237),
    [sym_boundary_assertion] = ACTIONS(237),
    [anon_sym_LBRACE] = ACTIONS(237),
    [aux_sym_character_class_escape_token1] = ACTIONS(237),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(237),
    [ts_builtin_sym_end] = ACTIONS(237),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(237),
    [sym_pattern_character] = ACTIONS(237),
    [sym_any_character] = ACTIONS(237),
    [anon_sym_LPAREN_QMARK] = ACTIONS(239),
    [sym_control_escape] = ACTIONS(239),
    [anon_sym_PLUS] = ACTIONS(237),
    [sym_decimal_escape] = ACTIONS(237),
    [anon_sym_LPAREN] = ACTIONS(239),
    [anon_sym_QMARK] = ACTIONS(237),
  },
  [60] = {
    [aux_sym_disjunction_repeat1] = STATE(57),
    [anon_sym_PIPE] = ACTIONS(67),
    [anon_sym_RPAREN] = ACTIONS(175),
  },
  [61] = {
    [anon_sym_RPAREN] = ACTIONS(241),
  },
  [62] = {
    [sym_end_assertion] = ACTIONS(243),
    [anon_sym_PIPE] = ACTIONS(243),
    [sym_non_boundary_assertion] = ACTIONS(243),
    [sym_identity_escape] = ACTIONS(245),
    [aux_sym_character_class_escape_token2] = ACTIONS(243),
    [anon_sym_BSLASHk] = ACTIONS(243),
    [anon_sym_STAR] = ACTIONS(243),
    [anon_sym_RPAREN] = ACTIONS(243),
    [anon_sym_LBRACK] = ACTIONS(243),
    [anon_sym_CARET] = ACTIONS(243),
    [sym_control_letter_escape] = ACTIONS(243),
    [sym_boundary_assertion] = ACTIONS(243),
    [anon_sym_LBRACE] = ACTIONS(243),
    [aux_sym_character_class_escape_token1] = ACTIONS(243),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(243),
    [ts_builtin_sym_end] = ACTIONS(243),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(243),
    [sym_pattern_character] = ACTIONS(243),
    [sym_any_character] = ACTIONS(243),
    [anon_sym_LPAREN_QMARK] = ACTIONS(245),
    [sym_control_escape] = ACTIONS(245),
    [anon_sym_PLUS] = ACTIONS(243),
    [sym_decimal_escape] = ACTIONS(243),
    [anon_sym_LPAREN] = ACTIONS(245),
    [anon_sym_QMARK] = ACTIONS(243),
  },
  [63] = {
    [sym_decimal_digits] = ACTIONS(247),
  },
  [64] = {
    [sym_end_assertion] = ACTIONS(249),
    [anon_sym_PIPE] = ACTIONS(249),
    [sym_non_boundary_assertion] = ACTIONS(249),
    [sym_identity_escape] = ACTIONS(251),
    [aux_sym_character_class_escape_token2] = ACTIONS(249),
    [anon_sym_BSLASHk] = ACTIONS(249),
    [anon_sym_RPAREN] = ACTIONS(249),
    [anon_sym_LBRACK] = ACTIONS(249),
    [anon_sym_CARET] = ACTIONS(249),
    [sym_control_letter_escape] = ACTIONS(249),
    [sym_boundary_assertion] = ACTIONS(249),
    [aux_sym_character_class_escape_token1] = ACTIONS(249),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(249),
    [ts_builtin_sym_end] = ACTIONS(249),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(249),
    [sym_pattern_character] = ACTIONS(249),
    [sym_any_character] = ACTIONS(249),
    [anon_sym_LPAREN_QMARK] = ACTIONS(251),
    [sym_control_escape] = ACTIONS(251),
    [sym_decimal_escape] = ACTIONS(249),
    [anon_sym_LPAREN] = ACTIONS(251),
    [anon_sym_QMARK] = ACTIONS(253),
  },
  [65] = {
    [sym_unicode_property] = ACTIONS(255),
  },
  [66] = {
    [sym_end_assertion] = ACTIONS(257),
    [anon_sym_PIPE] = ACTIONS(257),
    [sym_non_boundary_assertion] = ACTIONS(257),
    [sym_identity_escape] = ACTIONS(259),
    [aux_sym_character_class_escape_token2] = ACTIONS(257),
    [anon_sym_BSLASHk] = ACTIONS(257),
    [anon_sym_STAR] = ACTIONS(257),
    [anon_sym_RPAREN] = ACTIONS(257),
    [anon_sym_LBRACK] = ACTIONS(257),
    [anon_sym_CARET] = ACTIONS(257),
    [sym_control_letter_escape] = ACTIONS(257),
    [sym_boundary_assertion] = ACTIONS(257),
    [anon_sym_LBRACE] = ACTIONS(257),
    [aux_sym_character_class_escape_token1] = ACTIONS(257),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(257),
    [ts_builtin_sym_end] = ACTIONS(257),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(257),
    [sym_pattern_character] = ACTIONS(257),
    [sym_any_character] = ACTIONS(257),
    [anon_sym_LPAREN_QMARK] = ACTIONS(259),
    [sym_control_escape] = ACTIONS(259),
    [anon_sym_PLUS] = ACTIONS(257),
    [sym_decimal_escape] = ACTIONS(257),
    [anon_sym_LPAREN] = ACTIONS(259),
    [anon_sym_QMARK] = ACTIONS(257),
  },
  [67] = {
    [anon_sym_RBRACK] = ACTIONS(261),
    [aux_sym_character_class_escape_token1] = ACTIONS(261),
    [anon_sym_BSLASH_DASH] = ACTIONS(261),
    [sym_identity_escape] = ACTIONS(261),
    [aux_sym_character_class_escape_token2] = ACTIONS(261),
    [anon_sym_DASH] = ACTIONS(261),
    [sym_class_character] = ACTIONS(263),
    [sym_control_escape] = ACTIONS(261),
    [sym_control_letter_escape] = ACTIONS(261),
  },
  [68] = {
    [anon_sym_RBRACK] = ACTIONS(265),
    [aux_sym_character_class_escape_token1] = ACTIONS(265),
    [anon_sym_BSLASH_DASH] = ACTIONS(265),
    [sym_identity_escape] = ACTIONS(265),
    [aux_sym_character_class_escape_token2] = ACTIONS(265),
    [anon_sym_DASH] = ACTIONS(265),
    [sym_class_character] = ACTIONS(267),
    [sym_control_escape] = ACTIONS(265),
    [sym_control_letter_escape] = ACTIONS(265),
  },
  [69] = {
    [anon_sym_RBRACK] = ACTIONS(269),
    [aux_sym_character_class_escape_token1] = ACTIONS(269),
    [anon_sym_BSLASH_DASH] = ACTIONS(269),
    [sym_identity_escape] = ACTIONS(269),
    [aux_sym_character_class_escape_token2] = ACTIONS(269),
    [anon_sym_DASH] = ACTIONS(269),
    [sym_class_character] = ACTIONS(271),
    [sym_control_escape] = ACTIONS(269),
    [sym_control_letter_escape] = ACTIONS(269),
  },
  [70] = {
    [anon_sym_RBRACK] = ACTIONS(273),
    [aux_sym_character_class_escape_token1] = ACTIONS(273),
    [anon_sym_BSLASH_DASH] = ACTIONS(273),
    [sym_identity_escape] = ACTIONS(273),
    [aux_sym_character_class_escape_token2] = ACTIONS(273),
    [anon_sym_DASH] = ACTIONS(273),
    [sym_class_character] = ACTIONS(275),
    [sym_control_escape] = ACTIONS(273),
    [sym_control_letter_escape] = ACTIONS(273),
  },
  [71] = {
    [anon_sym_RBRACE] = ACTIONS(277),
  },
  [72] = {
    [sym_end_assertion] = ACTIONS(279),
    [anon_sym_PIPE] = ACTIONS(279),
    [sym_non_boundary_assertion] = ACTIONS(279),
    [sym_identity_escape] = ACTIONS(281),
    [aux_sym_character_class_escape_token2] = ACTIONS(279),
    [anon_sym_BSLASHk] = ACTIONS(279),
    [anon_sym_STAR] = ACTIONS(279),
    [anon_sym_RPAREN] = ACTIONS(279),
    [anon_sym_LBRACK] = ACTIONS(279),
    [anon_sym_CARET] = ACTIONS(279),
    [sym_control_letter_escape] = ACTIONS(279),
    [sym_boundary_assertion] = ACTIONS(279),
    [anon_sym_LBRACE] = ACTIONS(279),
    [aux_sym_character_class_escape_token1] = ACTIONS(279),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(279),
    [ts_builtin_sym_end] = ACTIONS(279),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(279),
    [sym_pattern_character] = ACTIONS(279),
    [sym_any_character] = ACTIONS(279),
    [anon_sym_LPAREN_QMARK] = ACTIONS(281),
    [sym_control_escape] = ACTIONS(281),
    [anon_sym_PLUS] = ACTIONS(279),
    [sym_decimal_escape] = ACTIONS(279),
    [anon_sym_LPAREN] = ACTIONS(281),
    [anon_sym_QMARK] = ACTIONS(279),
  },
  [73] = {
    [anon_sym_RPAREN] = ACTIONS(283),
  },
  [74] = {
    [sym_end_assertion] = ACTIONS(285),
    [anon_sym_PIPE] = ACTIONS(285),
    [sym_non_boundary_assertion] = ACTIONS(285),
    [sym_identity_escape] = ACTIONS(287),
    [aux_sym_character_class_escape_token2] = ACTIONS(285),
    [anon_sym_BSLASHk] = ACTIONS(285),
    [anon_sym_STAR] = ACTIONS(285),
    [anon_sym_RPAREN] = ACTIONS(285),
    [anon_sym_LBRACK] = ACTIONS(285),
    [anon_sym_CARET] = ACTIONS(285),
    [sym_control_letter_escape] = ACTIONS(285),
    [sym_boundary_assertion] = ACTIONS(285),
    [anon_sym_LBRACE] = ACTIONS(285),
    [aux_sym_character_class_escape_token1] = ACTIONS(285),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(285),
    [ts_builtin_sym_end] = ACTIONS(285),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(285),
    [sym_pattern_character] = ACTIONS(285),
    [sym_any_character] = ACTIONS(285),
    [anon_sym_LPAREN_QMARK] = ACTIONS(287),
    [sym_control_escape] = ACTIONS(287),
    [anon_sym_PLUS] = ACTIONS(285),
    [sym_decimal_escape] = ACTIONS(285),
    [anon_sym_LPAREN] = ACTIONS(287),
    [anon_sym_QMARK] = ACTIONS(285),
  },
  [75] = {
    [anon_sym_RBRACE] = ACTIONS(289),
  },
  [76] = {
    [sym_end_assertion] = ACTIONS(291),
    [anon_sym_PIPE] = ACTIONS(291),
    [sym_non_boundary_assertion] = ACTIONS(291),
    [sym_identity_escape] = ACTIONS(293),
    [aux_sym_character_class_escape_token2] = ACTIONS(291),
    [anon_sym_BSLASHk] = ACTIONS(291),
    [anon_sym_RPAREN] = ACTIONS(291),
    [anon_sym_LBRACK] = ACTIONS(291),
    [anon_sym_CARET] = ACTIONS(291),
    [sym_control_letter_escape] = ACTIONS(291),
    [sym_boundary_assertion] = ACTIONS(291),
    [aux_sym_character_class_escape_token1] = ACTIONS(291),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(291),
    [ts_builtin_sym_end] = ACTIONS(291),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(291),
    [sym_pattern_character] = ACTIONS(291),
    [sym_any_character] = ACTIONS(291),
    [anon_sym_LPAREN_QMARK] = ACTIONS(293),
    [sym_control_escape] = ACTIONS(293),
    [sym_decimal_escape] = ACTIONS(291),
    [anon_sym_LPAREN] = ACTIONS(293),
  },
  [77] = {
    [anon_sym_RBRACE] = ACTIONS(295),
  },
  [78] = {
    [anon_sym_RBRACK] = ACTIONS(259),
    [aux_sym_character_class_escape_token1] = ACTIONS(259),
    [anon_sym_BSLASH_DASH] = ACTIONS(259),
    [sym_identity_escape] = ACTIONS(259),
    [aux_sym_character_class_escape_token2] = ACTIONS(259),
    [anon_sym_DASH] = ACTIONS(259),
    [sym_class_character] = ACTIONS(257),
    [sym_control_escape] = ACTIONS(259),
    [sym_control_letter_escape] = ACTIONS(259),
  },
  [79] = {
    [sym_end_assertion] = ACTIONS(297),
    [anon_sym_PIPE] = ACTIONS(297),
    [sym_non_boundary_assertion] = ACTIONS(297),
    [sym_identity_escape] = ACTIONS(299),
    [aux_sym_character_class_escape_token2] = ACTIONS(297),
    [anon_sym_BSLASHk] = ACTIONS(297),
    [anon_sym_STAR] = ACTIONS(297),
    [anon_sym_RPAREN] = ACTIONS(297),
    [anon_sym_LBRACK] = ACTIONS(297),
    [anon_sym_CARET] = ACTIONS(297),
    [sym_control_letter_escape] = ACTIONS(297),
    [sym_boundary_assertion] = ACTIONS(297),
    [anon_sym_LBRACE] = ACTIONS(297),
    [aux_sym_character_class_escape_token1] = ACTIONS(297),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(297),
    [ts_builtin_sym_end] = ACTIONS(297),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(297),
    [sym_pattern_character] = ACTIONS(297),
    [sym_any_character] = ACTIONS(297),
    [anon_sym_LPAREN_QMARK] = ACTIONS(299),
    [sym_control_escape] = ACTIONS(299),
    [anon_sym_PLUS] = ACTIONS(297),
    [sym_decimal_escape] = ACTIONS(297),
    [anon_sym_LPAREN] = ACTIONS(299),
    [anon_sym_QMARK] = ACTIONS(297),
  },
  [80] = {
    [sym_end_assertion] = ACTIONS(301),
    [anon_sym_PIPE] = ACTIONS(301),
    [sym_non_boundary_assertion] = ACTIONS(301),
    [sym_identity_escape] = ACTIONS(303),
    [aux_sym_character_class_escape_token2] = ACTIONS(301),
    [anon_sym_BSLASHk] = ACTIONS(301),
    [anon_sym_RPAREN] = ACTIONS(301),
    [anon_sym_LBRACK] = ACTIONS(301),
    [anon_sym_CARET] = ACTIONS(301),
    [sym_control_letter_escape] = ACTIONS(301),
    [sym_boundary_assertion] = ACTIONS(301),
    [aux_sym_character_class_escape_token1] = ACTIONS(301),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(301),
    [ts_builtin_sym_end] = ACTIONS(301),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(301),
    [sym_pattern_character] = ACTIONS(301),
    [sym_any_character] = ACTIONS(301),
    [anon_sym_LPAREN_QMARK] = ACTIONS(303),
    [sym_control_escape] = ACTIONS(303),
    [sym_decimal_escape] = ACTIONS(301),
    [anon_sym_LPAREN] = ACTIONS(303),
    [anon_sym_QMARK] = ACTIONS(305),
  },
  [81] = {
    [sym_end_assertion] = ACTIONS(307),
    [anon_sym_PIPE] = ACTIONS(307),
    [sym_non_boundary_assertion] = ACTIONS(307),
    [sym_identity_escape] = ACTIONS(309),
    [aux_sym_character_class_escape_token2] = ACTIONS(307),
    [anon_sym_BSLASHk] = ACTIONS(307),
    [anon_sym_RPAREN] = ACTIONS(307),
    [anon_sym_LBRACK] = ACTIONS(307),
    [anon_sym_CARET] = ACTIONS(307),
    [sym_control_letter_escape] = ACTIONS(307),
    [sym_boundary_assertion] = ACTIONS(307),
    [aux_sym_character_class_escape_token1] = ACTIONS(307),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(307),
    [ts_builtin_sym_end] = ACTIONS(307),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(307),
    [sym_pattern_character] = ACTIONS(307),
    [sym_any_character] = ACTIONS(307),
    [anon_sym_LPAREN_QMARK] = ACTIONS(309),
    [sym_control_escape] = ACTIONS(309),
    [sym_decimal_escape] = ACTIONS(307),
    [anon_sym_LPAREN] = ACTIONS(309),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT(2),
  [5] = {.count = 1, .reusable = true}, SHIFT(3),
  [7] = {.count = 1, .reusable = false}, SHIFT(2),
  [9] = {.count = 1, .reusable = true}, SHIFT(4),
  [11] = {.count = 1, .reusable = true}, SHIFT(5),
  [13] = {.count = 1, .reusable = true}, SHIFT(6),
  [15] = {.count = 1, .reusable = true}, SHIFT(7),
  [17] = {.count = 1, .reusable = true}, SHIFT(8),
  [19] = {.count = 1, .reusable = true}, SHIFT(9),
  [21] = {.count = 1, .reusable = true}, SHIFT(10),
  [23] = {.count = 1, .reusable = false}, SHIFT(11),
  [25] = {.count = 1, .reusable = false}, SHIFT(12),
  [27] = {.count = 1, .reusable = true}, REDUCE(aux_sym_term_repeat1, 1),
  [29] = {.count = 1, .reusable = false}, REDUCE(aux_sym_term_repeat1, 1),
  [31] = {.count = 1, .reusable = true}, SHIFT(19),
  [33] = {.count = 1, .reusable = true}, SHIFT(18),
  [35] = {.count = 1, .reusable = true}, SHIFT(20),
  [37] = {.count = 1, .reusable = true}, SHIFT(21),
  [39] = {.count = 1, .reusable = true}, REDUCE(aux_sym_disjunction_repeat1, 1),
  [41] = {.count = 1, .reusable = true}, SHIFT(24),
  [43] = {.count = 1, .reusable = true}, SHIFT(25),
  [45] = {.count = 1, .reusable = false}, SHIFT(26),
  [47] = {.count = 1, .reusable = false}, SHIFT(27),
  [49] = {.count = 1, .reusable = false}, SHIFT(28),
  [51] = {.count = 1, .reusable = false}, SHIFT(30),
  [53] = {.count = 1, .reusable = false}, SHIFT(29),
  [55] = {.count = 1, .reusable = true}, SHIFT(31),
  [57] = {.count = 1, .reusable = true}, REDUCE(sym_start_assertion, 1),
  [59] = {.count = 1, .reusable = false}, REDUCE(sym_start_assertion, 1),
  [61] = {.count = 1, .reusable = true}, REDUCE(sym_character_class_escape, 1),
  [63] = {.count = 1, .reusable = false}, REDUCE(sym_character_class_escape, 1),
  [65] = {.count = 1, .reusable = true}, SHIFT(33),
  [67] = {.count = 1, .reusable = true}, SHIFT(34),
  [69] = {.count = 1, .reusable = true}, SHIFT(39),
  [71] = {.count = 1, .reusable = true}, REDUCE(sym_disjunction, 1),
  [73] = {.count = 1, .reusable = true}, REDUCE(sym_term, 1),
  [75] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [77] = {.count = 1, .reusable = true}, REDUCE(sym_pattern, 1),
  [79] = {.count = 1, .reusable = true}, SHIFT(44),
  [81] = {.count = 1, .reusable = true}, REDUCE(sym_zero_or_more, 1),
  [83] = {.count = 1, .reusable = false}, REDUCE(sym_zero_or_more, 1),
  [85] = {.count = 1, .reusable = true}, SHIFT(45),
  [87] = {.count = 1, .reusable = true}, REDUCE(sym_one_or_more, 1),
  [89] = {.count = 1, .reusable = false}, REDUCE(sym_one_or_more, 1),
  [91] = {.count = 1, .reusable = true}, SHIFT(46),
  [93] = {.count = 1, .reusable = true}, REDUCE(sym_optional, 1),
  [95] = {.count = 1, .reusable = false}, REDUCE(sym_optional, 1),
  [97] = {.count = 1, .reusable = true}, SHIFT(47),
  [99] = {.count = 1, .reusable = true}, REDUCE(aux_sym_term_repeat1, 2),
  [101] = {.count = 1, .reusable = false}, REDUCE(aux_sym_term_repeat1, 2),
  [103] = {.count = 1, .reusable = true}, REDUCE(aux_sym_disjunction_repeat1, 2),
  [105] = {.count = 1, .reusable = true}, SHIFT(48),
  [107] = {.count = 1, .reusable = true}, REDUCE(sym_backreference_escape, 2),
  [109] = {.count = 1, .reusable = false}, REDUCE(sym_backreference_escape, 2),
  [111] = {.count = 1, .reusable = false}, REDUCE(aux_sym_character_class_repeat1, 1),
  [113] = {.count = 1, .reusable = false}, SHIFT(50),
  [115] = {.count = 1, .reusable = true}, REDUCE(aux_sym_character_class_repeat1, 1),
  [117] = {.count = 1, .reusable = true}, REDUCE(sym_character_class, 2),
  [119] = {.count = 1, .reusable = false}, REDUCE(sym_character_class, 2),
  [121] = {.count = 1, .reusable = false}, REDUCE(aux_sym_character_class_repeat1, 1, .alias_sequence_id = 1),
  [123] = {.count = 1, .reusable = false}, SHIFT(51),
  [125] = {.count = 1, .reusable = true}, REDUCE(aux_sym_character_class_repeat1, 1, .alias_sequence_id = 1),
  [127] = {.count = 1, .reusable = true}, SHIFT(52),
  [129] = {.count = 1, .reusable = false}, SHIFT(53),
  [131] = {.count = 1, .reusable = true}, SHIFT(27),
  [133] = {.count = 1, .reusable = true}, SHIFT(56),
  [135] = {.count = 1, .reusable = true}, SHIFT(59),
  [137] = {.count = 1, .reusable = true}, SHIFT(62),
  [139] = {.count = 2, .reusable = true}, REDUCE(aux_sym_disjunction_repeat1, 2), SHIFT_REPEAT(3),
  [142] = {.count = 2, .reusable = true}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(2),
  [145] = {.count = 2, .reusable = false}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(2),
  [148] = {.count = 2, .reusable = true}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(4),
  [151] = {.count = 2, .reusable = true}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(5),
  [154] = {.count = 2, .reusable = true}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(6),
  [157] = {.count = 2, .reusable = true}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(7),
  [160] = {.count = 2, .reusable = true}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(8),
  [163] = {.count = 2, .reusable = true}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(9),
  [166] = {.count = 2, .reusable = true}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(10),
  [169] = {.count = 2, .reusable = false}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(11),
  [172] = {.count = 2, .reusable = false}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(12),
  [175] = {.count = 1, .reusable = true}, REDUCE(sym_disjunction, 2),
  [177] = {.count = 1, .reusable = true}, SHIFT(63),
  [179] = {.count = 1, .reusable = true}, SHIFT(64),
  [181] = {.count = 1, .reusable = true}, REDUCE(sym_zero_or_more, 2, .alias_sequence_id = 2),
  [183] = {.count = 1, .reusable = false}, REDUCE(sym_zero_or_more, 2, .alias_sequence_id = 2),
  [185] = {.count = 1, .reusable = true}, REDUCE(sym_one_or_more, 2, .alias_sequence_id = 2),
  [187] = {.count = 1, .reusable = false}, REDUCE(sym_one_or_more, 2, .alias_sequence_id = 2),
  [189] = {.count = 1, .reusable = true}, REDUCE(sym_optional, 2, .alias_sequence_id = 2),
  [191] = {.count = 1, .reusable = false}, REDUCE(sym_optional, 2, .alias_sequence_id = 2),
  [193] = {.count = 1, .reusable = true}, SHIFT(65),
  [195] = {.count = 1, .reusable = true}, REDUCE(sym_unicode_property_value_expression, 1, .alias_sequence_id = 3),
  [197] = {.count = 1, .reusable = true}, SHIFT(66),
  [199] = {.count = 1, .reusable = false}, SHIFT(67),
  [201] = {.count = 1, .reusable = false}, SHIFT(68),
  [203] = {.count = 1, .reusable = true}, SHIFT(67),
  [205] = {.count = 1, .reusable = false}, SHIFT(69),
  [207] = {.count = 1, .reusable = false}, SHIFT(70),
  [209] = {.count = 1, .reusable = true}, SHIFT(69),
  [211] = {.count = 1, .reusable = true}, REDUCE(sym_character_class, 3),
  [213] = {.count = 1, .reusable = false}, REDUCE(sym_character_class, 3),
  [215] = {.count = 1, .reusable = false}, SHIFT(72),
  [217] = {.count = 1, .reusable = false}, REDUCE(aux_sym_character_class_repeat1, 2),
  [219] = {.count = 2, .reusable = false}, REDUCE(aux_sym_character_class_repeat1, 2), SHIFT_REPEAT(26),
  [222] = {.count = 2, .reusable = false}, REDUCE(aux_sym_character_class_repeat1, 2), SHIFT_REPEAT(27),
  [225] = {.count = 2, .reusable = false}, REDUCE(aux_sym_character_class_repeat1, 2), SHIFT_REPEAT(30),
  [228] = {.count = 2, .reusable = false}, REDUCE(aux_sym_character_class_repeat1, 2), SHIFT_REPEAT(29),
  [231] = {.count = 2, .reusable = true}, REDUCE(aux_sym_character_class_repeat1, 2), SHIFT_REPEAT(27),
  [234] = {.count = 2, .reusable = true}, REDUCE(aux_sym_disjunction_repeat1, 2), SHIFT_REPEAT(34),
  [237] = {.count = 1, .reusable = true}, REDUCE(sym_non_capturing_group, 3),
  [239] = {.count = 1, .reusable = false}, REDUCE(sym_non_capturing_group, 3),
  [241] = {.count = 1, .reusable = true}, SHIFT(74),
  [243] = {.count = 1, .reusable = true}, REDUCE(sym_anonymous_capturing_group, 3),
  [245] = {.count = 1, .reusable = false}, REDUCE(sym_anonymous_capturing_group, 3),
  [247] = {.count = 1, .reusable = true}, SHIFT(75),
  [249] = {.count = 1, .reusable = true}, REDUCE(sym_count_quantifier, 3),
  [251] = {.count = 1, .reusable = false}, REDUCE(sym_count_quantifier, 3),
  [253] = {.count = 1, .reusable = true}, SHIFT(76),
  [255] = {.count = 1, .reusable = true}, SHIFT(77),
  [257] = {.count = 1, .reusable = true}, REDUCE(sym_character_class_escape, 4),
  [259] = {.count = 1, .reusable = false}, REDUCE(sym_character_class_escape, 4),
  [261] = {.count = 1, .reusable = false}, REDUCE(sym_class_range, 3),
  [263] = {.count = 1, .reusable = true}, REDUCE(sym_class_range, 3),
  [265] = {.count = 1, .reusable = false}, REDUCE(sym_class_range, 3, .alias_sequence_id = 4),
  [267] = {.count = 1, .reusable = true}, REDUCE(sym_class_range, 3, .alias_sequence_id = 4),
  [269] = {.count = 1, .reusable = false}, REDUCE(sym_class_range, 3, .alias_sequence_id = 1),
  [271] = {.count = 1, .reusable = true}, REDUCE(sym_class_range, 3, .alias_sequence_id = 1),
  [273] = {.count = 1, .reusable = false}, REDUCE(sym_class_range, 3, .alias_sequence_id = 5),
  [275] = {.count = 1, .reusable = true}, REDUCE(sym_class_range, 3, .alias_sequence_id = 5),
  [277] = {.count = 1, .reusable = true}, SHIFT(78),
  [279] = {.count = 1, .reusable = true}, REDUCE(sym_character_class, 4),
  [281] = {.count = 1, .reusable = false}, REDUCE(sym_character_class, 4),
  [283] = {.count = 1, .reusable = true}, SHIFT(79),
  [285] = {.count = 1, .reusable = true}, REDUCE(sym_lookahead_assertion, 4),
  [287] = {.count = 1, .reusable = false}, REDUCE(sym_lookahead_assertion, 4),
  [289] = {.count = 1, .reusable = true}, SHIFT(80),
  [291] = {.count = 1, .reusable = true}, REDUCE(sym_count_quantifier, 4, .alias_sequence_id = 6),
  [293] = {.count = 1, .reusable = false}, REDUCE(sym_count_quantifier, 4, .alias_sequence_id = 6),
  [295] = {.count = 1, .reusable = true}, REDUCE(sym_unicode_property_value_expression, 3, .alias_sequence_id = 7),
  [297] = {.count = 1, .reusable = true}, REDUCE(sym_named_capturing_group, 5),
  [299] = {.count = 1, .reusable = false}, REDUCE(sym_named_capturing_group, 5),
  [301] = {.count = 1, .reusable = true}, REDUCE(sym_count_quantifier, 5),
  [303] = {.count = 1, .reusable = false}, REDUCE(sym_count_quantifier, 5),
  [305] = {.count = 1, .reusable = true}, SHIFT(81),
  [307] = {.count = 1, .reusable = true}, REDUCE(sym_count_quantifier, 6, .alias_sequence_id = 8),
  [309] = {.count = 1, .reusable = false}, REDUCE(sym_count_quantifier, 6, .alias_sequence_id = 8),
};

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_regex() {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
