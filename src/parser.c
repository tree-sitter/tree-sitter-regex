#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 89
#define SYMBOL_COUNT 59
#define ALIAS_COUNT 5
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
  aux_sym_SLASH_BSLASH_BSLASH_LBRACKdDsSwW_RBRACK_SLASH = 31,
  aux_sym_SLASH_BSLASH_BSLASH_LBRACKpP_RBRACK_SLASH = 32,
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
  alias_sym_class_character = 59,
  alias_sym_identity_escape = 60,
  alias_sym_lazy = 61,
  alias_sym_unicode_property_name = 62,
  alias_sym_unicode_property_value = 63,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
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
  [anon_sym_BSLASH_DASH] = "\\-",
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
  [aux_sym_SLASH_BSLASH_BSLASH_LBRACKdDsSwW_RBRACK_SLASH] = "/\\\\[dDsSwW]/",
  [aux_sym_SLASH_BSLASH_BSLASH_LBRACKpP_RBRACK_SLASH] = "/\\\\[pP]/",
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
  [alias_sym_class_character] = "class_character",
  [alias_sym_identity_escape] = "identity_escape",
  [alias_sym_lazy] = "lazy",
  [alias_sym_unicode_property_name] = "unicode_property_name",
  [alias_sym_unicode_property_value] = "unicode_property_value",
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
    .named = false,
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
  [aux_sym_SLASH_BSLASH_BSLASH_LBRACKdDsSwW_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_BSLASH_BSLASH_LBRACKpP_RBRACK_SLASH] = {
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
  [alias_sym_class_character] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_identity_escape] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_lazy] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_unicode_property_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_unicode_property_value] = {
    .visible = true,
    .named = true,
  },
};

static TSSymbol ts_alias_sequences[14][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [1] = {
    [0] = alias_sym_class_character,
  },
  [2] = {
    [0] = alias_sym_identity_escape,
  },
  [3] = {
    [1] = alias_sym_lazy,
  },
  [4] = {
    [0] = alias_sym_unicode_property_value,
  },
  [5] = {
    [0] = alias_sym_class_character,
    [2] = alias_sym_class_character,
  },
  [6] = {
    [0] = alias_sym_class_character,
    [2] = alias_sym_identity_escape,
  },
  [7] = {
    [0] = alias_sym_identity_escape,
    [2] = alias_sym_class_character,
  },
  [8] = {
    [0] = alias_sym_identity_escape,
    [2] = alias_sym_identity_escape,
  },
  [9] = {
    [2] = alias_sym_class_character,
  },
  [10] = {
    [2] = alias_sym_identity_escape,
  },
  [11] = {
    [3] = alias_sym_lazy,
  },
  [12] = {
    [0] = alias_sym_unicode_property_name,
    [2] = alias_sym_unicode_property_value,
  },
  [13] = {
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
        ADVANCE(8);
      if (lookahead == '*')
        ADVANCE(9);
      if (lookahead == '+')
        ADVANCE(10);
      if (lookahead == ',')
        ADVANCE(11);
      if (lookahead == '-')
        ADVANCE(12);
      if (lookahead == '.')
        ADVANCE(13);
      if (lookahead == '=')
        ADVANCE(14);
      if (lookahead == '>')
        ADVANCE(15);
      if (lookahead == '?')
        ADVANCE(16);
      if (lookahead == '[')
        ADVANCE(17);
      if (lookahead == '\\')
        ADVANCE(18);
      if (lookahead == ']')
        ADVANCE(31);
      if (lookahead == '^')
        ADVANCE(32);
      if (lookahead == '{')
        ADVANCE(33);
      if (lookahead == '|')
        ADVANCE(34);
      if (lookahead == '}')
        ADVANCE(35);
      ADVANCE(36);
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
        ADVANCE(5);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_LPAREN_QMARK);
      if (lookahead == ':')
        ADVANCE(6);
      if (lookahead == '<')
        ADVANCE(7);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_LPAREN_QMARK_COLON);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_LPAREN_QMARK_LT);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_any_character);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 18:
      if (lookahead == '-')
        ADVANCE(19);
      if (lookahead == 'B')
        ADVANCE(20);
      if (lookahead == 'b')
        ADVANCE(21);
      if (lookahead == 'c')
        ADVANCE(22);
      if (lookahead == 'k')
        ADVANCE(24);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(25);
      if (lookahead == '0' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'v')
        ADVANCE(26);
      if (lookahead == 'D' ||
          lookahead == 'S' ||
          lookahead == 'W' ||
          lookahead == 'd' ||
          lookahead == 's' ||
          lookahead == 'w')
        ADVANCE(27);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(28);
      if (lookahead != 0)
        ADVANCE(30);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_BSLASH_DASH);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_non_boundary_assertion);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_boundary_assertion);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_identity_escape);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(23);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_control_letter_escape);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_BSLASHk);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_BSLASH_LBRACKpP_RBRACK_SLASH);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_control_escape);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_BSLASH_LBRACKdDsSwW_RBRACK_SLASH);
      END_STATE();
    case 28:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(29);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_decimal_escape);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_identity_escape);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_pattern_character);
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
      if (lookahead == '.')
        ADVANCE(13);
      if (lookahead == '[')
        ADVANCE(17);
      if (lookahead == '\\')
        ADVANCE(38);
      if (lookahead == '^')
        ADVANCE(32);
      if (lookahead == '|')
        ADVANCE(34);
      if ((lookahead < '(' || lookahead > '+') &&
          lookahead != '?' &&
          (lookahead < '[' || lookahead > '^') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(36);
      END_STATE();
    case 38:
      if (lookahead == 'B')
        ADVANCE(20);
      if (lookahead == 'b')
        ADVANCE(21);
      if (lookahead == 'c')
        ADVANCE(22);
      if (lookahead == 'k')
        ADVANCE(24);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(25);
      if (lookahead == '0' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'v')
        ADVANCE(26);
      if (lookahead == 'D' ||
          lookahead == 'S' ||
          lookahead == 'W' ||
          lookahead == 'd' ||
          lookahead == 's' ||
          lookahead == 'w')
        ADVANCE(27);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(28);
      if (lookahead != 0)
        ADVANCE(30);
      END_STATE();
    case 39:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        SKIP(39);
      if (lookahead == '$')
        ADVANCE(3);
      if (lookahead == '(')
        ADVANCE(4);
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == '*')
        ADVANCE(9);
      if (lookahead == '+')
        ADVANCE(10);
      if (lookahead == '.')
        ADVANCE(13);
      if (lookahead == '?')
        ADVANCE(16);
      if (lookahead == '[')
        ADVANCE(17);
      if (lookahead == '\\')
        ADVANCE(38);
      if (lookahead == '^')
        ADVANCE(32);
      if (lookahead == '{')
        ADVANCE(33);
      if (lookahead == '|')
        ADVANCE(34);
      if ((lookahead < '[' || lookahead > '^') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(36);
      END_STATE();
    case 40:
      if (lookahead == '\n')
        SKIP(40);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '<')
        ADVANCE(41);
      if (lookahead == '=')
        ADVANCE(14);
      END_STATE();
    case 41:
      if (lookahead == '!')
        ADVANCE(42);
      if (lookahead == '=')
        ADVANCE(43);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_LT_BANG);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 44:
      if (lookahead == '\n')
        ADVANCE(45);
      if (lookahead == '-')
        ADVANCE(12);
      if (lookahead == '\\')
        ADVANCE(46);
      if (lookahead == ']')
        ADVANCE(31);
      if (lookahead == '^')
        ADVANCE(32);
      if (lookahead != 0)
        ADVANCE(45);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_class_character);
      END_STATE();
    case 46:
      if (lookahead == '-')
        ADVANCE(19);
      if (lookahead == 'c')
        ADVANCE(22);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(25);
      if (lookahead == 'D' ||
          lookahead == 'S' ||
          lookahead == 'W' ||
          lookahead == 'd' ||
          lookahead == 's' ||
          lookahead == 'w')
        ADVANCE(27);
      if (lookahead == '0' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          ('r' <= lookahead && lookahead <= 't') ||
          lookahead == 'v')
        ADVANCE(26);
      if (lookahead != 0 &&
          (lookahead < '0' || lookahead > '9') &&
          lookahead != 'k')
        ADVANCE(30);
      END_STATE();
    case 47:
      if (lookahead == '\n')
        SKIP(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_group_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 49:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        SKIP(49);
      END_STATE();
    case 50:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        SKIP(50);
      if (lookahead == ')')
        ADVANCE(8);
      END_STATE();
    case 51:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        SKIP(51);
      if (lookahead == '|')
        ADVANCE(34);
      END_STATE();
    case 52:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        SKIP(52);
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == '|')
        ADVANCE(34);
      END_STATE();
    case 53:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        SKIP(53);
      if (lookahead == '$')
        ADVANCE(3);
      if (lookahead == '(')
        ADVANCE(4);
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == '.')
        ADVANCE(13);
      if (lookahead == '?')
        ADVANCE(16);
      if (lookahead == '[')
        ADVANCE(17);
      if (lookahead == '\\')
        ADVANCE(38);
      if (lookahead == '^')
        ADVANCE(32);
      if (lookahead == '|')
        ADVANCE(34);
      if ((lookahead < '(' || lookahead > '+') &&
          (lookahead < '[' || lookahead > '^') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(36);
      END_STATE();
    case 54:
      if (lookahead == '\n')
        SKIP(54);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(55);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_decimal_digits);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(55);
      END_STATE();
    case 56:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        SKIP(56);
      if (lookahead == '$')
        ADVANCE(3);
      if (lookahead == '(')
        ADVANCE(4);
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == '.')
        ADVANCE(13);
      if (lookahead == '[')
        ADVANCE(17);
      if (lookahead == '\\')
        ADVANCE(38);
      if (lookahead == '^')
        ADVANCE(32);
      if (lookahead == '|')
        ADVANCE(34);
      if ((lookahead < '(' || lookahead > '+') &&
          lookahead != '?' &&
          (lookahead < '[' || lookahead > '^') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(36);
      END_STATE();
    case 57:
      if (lookahead == '\n')
        ADVANCE(45);
      if (lookahead == '-')
        ADVANCE(12);
      if (lookahead == '\\')
        ADVANCE(46);
      if (lookahead == ']')
        ADVANCE(31);
      if (lookahead != 0)
        ADVANCE(45);
      END_STATE();
    case 58:
      if (lookahead == '\n')
        SKIP(58);
      if (lookahead == '>')
        ADVANCE(15);
      END_STATE();
    case 59:
      if (lookahead == '\n')
        SKIP(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(60);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_unicode_property);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(60);
      END_STATE();
    case 61:
      if (lookahead == '\n')
        SKIP(61);
      if (lookahead == ',')
        ADVANCE(11);
      if (lookahead == '}')
        ADVANCE(35);
      END_STATE();
    case 62:
      if (lookahead == '\n')
        SKIP(62);
      if (lookahead == '=')
        ADVANCE(14);
      if (lookahead == '}')
        ADVANCE(35);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 37},
  [2] = {.lex_state = 37},
  [3] = {.lex_state = 39},
  [4] = {.lex_state = 39},
  [5] = {.lex_state = 40},
  [6] = {.lex_state = 44},
  [7] = {.lex_state = 37},
  [8] = {.lex_state = 47},
  [9] = {.lex_state = 37},
  [10] = {.lex_state = 47},
  [11] = {.lex_state = 39},
  [12] = {.lex_state = 39},
  [13] = {.lex_state = 49},
  [14] = {.lex_state = 50},
  [15] = {.lex_state = 51},
  [16] = {.lex_state = 51},
  [17] = {.lex_state = 37},
  [18] = {.lex_state = 52},
  [19] = {.lex_state = 53},
  [20] = {.lex_state = 53},
  [21] = {.lex_state = 53},
  [22] = {.lex_state = 54},
  [23] = {.lex_state = 56},
  [24] = {.lex_state = 37},
  [25] = {.lex_state = 57},
  [26] = {.lex_state = 39},
  [27] = {.lex_state = 57},
  [28] = {.lex_state = 57},
  [29] = {.lex_state = 57},
  [30] = {.lex_state = 57},
  [31] = {.lex_state = 39},
  [32] = {.lex_state = 57},
  [33] = {.lex_state = 39},
  [34] = {.lex_state = 39},
  [35] = {.lex_state = 39},
  [36] = {.lex_state = 39},
  [37] = {.lex_state = 39},
  [38] = {.lex_state = 58},
  [39] = {.lex_state = 39},
  [40] = {.lex_state = 39},
  [41] = {.lex_state = 59},
  [42] = {.lex_state = 51},
  [43] = {.lex_state = 51},
  [44] = {.lex_state = 37},
  [45] = {.lex_state = 56},
  [46] = {.lex_state = 56},
  [47] = {.lex_state = 56},
  [48] = {.lex_state = 61},
  [49] = {.lex_state = 39},
  [50] = {.lex_state = 39},
  [51] = {.lex_state = 57},
  [52] = {.lex_state = 57},
  [53] = {.lex_state = 57},
  [54] = {.lex_state = 57},
  [55] = {.lex_state = 59},
  [56] = {.lex_state = 57},
  [57] = {.lex_state = 39},
  [58] = {.lex_state = 39},
  [59] = {.lex_state = 39},
  [60] = {.lex_state = 39},
  [61] = {.lex_state = 37},
  [62] = {.lex_state = 39},
  [63] = {.lex_state = 62},
  [64] = {.lex_state = 61},
  [65] = {.lex_state = 54},
  [66] = {.lex_state = 53},
  [67] = {.lex_state = 39},
  [68] = {.lex_state = 39},
  [69] = {.lex_state = 57},
  [70] = {.lex_state = 57},
  [71] = {.lex_state = 57},
  [72] = {.lex_state = 57},
  [73] = {.lex_state = 57},
  [74] = {.lex_state = 57},
  [75] = {.lex_state = 57},
  [76] = {.lex_state = 57},
  [77] = {.lex_state = 57},
  [78] = {.lex_state = 61},
  [79] = {.lex_state = 39},
  [80] = {.lex_state = 59},
  [81] = {.lex_state = 39},
  [82] = {.lex_state = 61},
  [83] = {.lex_state = 56},
  [84] = {.lex_state = 57},
  [85] = {.lex_state = 39},
  [86] = {.lex_state = 61},
  [87] = {.lex_state = 53},
  [88] = {.lex_state = 56},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [sym_any_character] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [sym_end_assertion] = ACTIONS(1),
    [sym_boundary_assertion] = ACTIONS(1),
    [sym_non_boundary_assertion] = ACTIONS(1),
    [anon_sym_LPAREN_QMARK] = ACTIONS(3),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_pattern_character] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_BSLASH_DASH] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(3),
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
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACKdDsSwW_RBRACK_SLASH] = ACTIONS(1),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACKpP_RBRACK_SLASH] = ACTIONS(1),
    [sym_control_escape] = ACTIONS(3),
    [sym_control_letter_escape] = ACTIONS(1),
    [sym_identity_escape] = ACTIONS(3),
  },
  [1] = {
    [sym_pattern] = STATE(13),
    [sym_disjunction] = STATE(14),
    [sym_term] = STATE(15),
    [sym_start_assertion] = STATE(3),
    [sym_lookahead_assertion] = STATE(3),
    [sym_character_class] = STATE(3),
    [sym_anonymous_capturing_group] = STATE(3),
    [sym_named_capturing_group] = STATE(3),
    [sym_non_capturing_group] = STATE(3),
    [sym_backreference_escape] = STATE(3),
    [sym_character_class_escape] = STATE(3),
    [aux_sym_disjunction_repeat1] = STATE(16),
    [aux_sym_term_repeat1] = STATE(17),
    [anon_sym_PIPE] = ACTIONS(5),
    [sym_any_character] = ACTIONS(7),
    [anon_sym_CARET] = ACTIONS(9),
    [sym_end_assertion] = ACTIONS(7),
    [sym_boundary_assertion] = ACTIONS(7),
    [sym_non_boundary_assertion] = ACTIONS(7),
    [anon_sym_LPAREN_QMARK] = ACTIONS(11),
    [sym_pattern_character] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(17),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(19),
    [anon_sym_BSLASHk] = ACTIONS(21),
    [sym_decimal_escape] = ACTIONS(7),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACKdDsSwW_RBRACK_SLASH] = ACTIONS(23),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACKpP_RBRACK_SLASH] = ACTIONS(25),
    [sym_control_escape] = ACTIONS(27),
    [sym_control_letter_escape] = ACTIONS(7),
    [sym_identity_escape] = ACTIONS(27),
  },
  [2] = {
    [sym_term] = STATE(18),
    [sym_start_assertion] = STATE(3),
    [sym_lookahead_assertion] = STATE(3),
    [sym_character_class] = STATE(3),
    [sym_anonymous_capturing_group] = STATE(3),
    [sym_named_capturing_group] = STATE(3),
    [sym_non_capturing_group] = STATE(3),
    [sym_backreference_escape] = STATE(3),
    [sym_character_class_escape] = STATE(3),
    [aux_sym_term_repeat1] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(29),
    [anon_sym_PIPE] = ACTIONS(29),
    [sym_any_character] = ACTIONS(7),
    [anon_sym_CARET] = ACTIONS(9),
    [sym_end_assertion] = ACTIONS(7),
    [sym_boundary_assertion] = ACTIONS(7),
    [sym_non_boundary_assertion] = ACTIONS(7),
    [anon_sym_LPAREN_QMARK] = ACTIONS(11),
    [sym_pattern_character] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(17),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(19),
    [anon_sym_BSLASHk] = ACTIONS(21),
    [sym_decimal_escape] = ACTIONS(7),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACKdDsSwW_RBRACK_SLASH] = ACTIONS(23),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACKpP_RBRACK_SLASH] = ACTIONS(25),
    [sym_control_escape] = ACTIONS(27),
    [sym_control_letter_escape] = ACTIONS(7),
    [sym_identity_escape] = ACTIONS(27),
  },
  [3] = {
    [sym_zero_or_more] = STATE(23),
    [sym_one_or_more] = STATE(23),
    [sym_optional] = STATE(23),
    [sym_count_quantifier] = STATE(23),
    [ts_builtin_sym_end] = ACTIONS(31),
    [anon_sym_PIPE] = ACTIONS(31),
    [sym_any_character] = ACTIONS(31),
    [anon_sym_CARET] = ACTIONS(31),
    [sym_end_assertion] = ACTIONS(31),
    [sym_boundary_assertion] = ACTIONS(31),
    [sym_non_boundary_assertion] = ACTIONS(31),
    [anon_sym_LPAREN_QMARK] = ACTIONS(33),
    [anon_sym_RPAREN] = ACTIONS(31),
    [sym_pattern_character] = ACTIONS(31),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(33),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(31),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(31),
    [anon_sym_STAR] = ACTIONS(35),
    [anon_sym_QMARK] = ACTIONS(37),
    [anon_sym_PLUS] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_BSLASHk] = ACTIONS(31),
    [sym_decimal_escape] = ACTIONS(31),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACKdDsSwW_RBRACK_SLASH] = ACTIONS(31),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACKpP_RBRACK_SLASH] = ACTIONS(31),
    [sym_control_escape] = ACTIONS(33),
    [sym_control_letter_escape] = ACTIONS(31),
    [sym_identity_escape] = ACTIONS(33),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(43),
    [anon_sym_PIPE] = ACTIONS(43),
    [sym_any_character] = ACTIONS(43),
    [anon_sym_CARET] = ACTIONS(43),
    [sym_end_assertion] = ACTIONS(43),
    [sym_boundary_assertion] = ACTIONS(43),
    [sym_non_boundary_assertion] = ACTIONS(43),
    [anon_sym_LPAREN_QMARK] = ACTIONS(45),
    [anon_sym_RPAREN] = ACTIONS(43),
    [sym_pattern_character] = ACTIONS(43),
    [anon_sym_LBRACK] = ACTIONS(43),
    [anon_sym_LPAREN] = ACTIONS(45),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(43),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(43),
    [anon_sym_STAR] = ACTIONS(43),
    [anon_sym_QMARK] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_BSLASHk] = ACTIONS(43),
    [sym_decimal_escape] = ACTIONS(43),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACKdDsSwW_RBRACK_SLASH] = ACTIONS(43),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACKpP_RBRACK_SLASH] = ACTIONS(43),
    [sym_control_escape] = ACTIONS(45),
    [sym_control_letter_escape] = ACTIONS(43),
    [sym_identity_escape] = ACTIONS(45),
  },
  [5] = {
    [anon_sym_EQ] = ACTIONS(47),
    [anon_sym_BANG] = ACTIONS(47),
    [anon_sym_LT_EQ] = ACTIONS(47),
    [anon_sym_LT_BANG] = ACTIONS(47),
  },
  [6] = {
    [sym_class_range] = STATE(32),
    [sym_character_class_escape] = STATE(29),
    [aux_sym_character_class_repeat1] = STATE(32),
    [anon_sym_CARET] = ACTIONS(49),
    [anon_sym_RBRACK] = ACTIONS(51),
    [anon_sym_DASH] = ACTIONS(53),
    [anon_sym_BSLASH_DASH] = ACTIONS(55),
    [sym_class_character] = ACTIONS(57),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACKdDsSwW_RBRACK_SLASH] = ACTIONS(59),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACKpP_RBRACK_SLASH] = ACTIONS(61),
    [sym_control_escape] = ACTIONS(57),
    [sym_control_letter_escape] = ACTIONS(57),
    [sym_identity_escape] = ACTIONS(57),
  },
  [7] = {
    [sym_pattern] = STATE(34),
    [sym_disjunction] = STATE(14),
    [sym_term] = STATE(35),
    [sym_start_assertion] = STATE(3),
    [sym_lookahead_assertion] = STATE(3),
    [sym_character_class] = STATE(3),
    [sym_anonymous_capturing_group] = STATE(3),
    [sym_named_capturing_group] = STATE(3),
    [sym_non_capturing_group] = STATE(3),
    [sym_backreference_escape] = STATE(3),
    [sym_character_class_escape] = STATE(3),
    [aux_sym_disjunction_repeat1] = STATE(36),
    [aux_sym_term_repeat1] = STATE(37),
    [anon_sym_PIPE] = ACTIONS(63),
    [sym_any_character] = ACTIONS(7),
    [anon_sym_CARET] = ACTIONS(9),
    [sym_end_assertion] = ACTIONS(7),
    [sym_boundary_assertion] = ACTIONS(7),
    [sym_non_boundary_assertion] = ACTIONS(7),
    [anon_sym_LPAREN_QMARK] = ACTIONS(11),
    [sym_pattern_character] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(17),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(19),
    [anon_sym_BSLASHk] = ACTIONS(21),
    [sym_decimal_escape] = ACTIONS(7),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACKdDsSwW_RBRACK_SLASH] = ACTIONS(23),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACKpP_RBRACK_SLASH] = ACTIONS(25),
    [sym_control_escape] = ACTIONS(27),
    [sym_control_letter_escape] = ACTIONS(7),
    [sym_identity_escape] = ACTIONS(27),
  },
  [8] = {
    [sym_group_name] = ACTIONS(65),
  },
  [9] = {
    [sym_pattern] = STATE(39),
    [sym_disjunction] = STATE(14),
    [sym_term] = STATE(35),
    [sym_start_assertion] = STATE(3),
    [sym_lookahead_assertion] = STATE(3),
    [sym_character_class] = STATE(3),
    [sym_anonymous_capturing_group] = STATE(3),
    [sym_named_capturing_group] = STATE(3),
    [sym_non_capturing_group] = STATE(3),
    [sym_backreference_escape] = STATE(3),
    [sym_character_class_escape] = STATE(3),
    [aux_sym_disjunction_repeat1] = STATE(36),
    [aux_sym_term_repeat1] = STATE(37),
    [anon_sym_PIPE] = ACTIONS(63),
    [sym_any_character] = ACTIONS(7),
    [anon_sym_CARET] = ACTIONS(9),
    [sym_end_assertion] = ACTIONS(7),
    [sym_boundary_assertion] = ACTIONS(7),
    [sym_non_boundary_assertion] = ACTIONS(7),
    [anon_sym_LPAREN_QMARK] = ACTIONS(11),
    [sym_pattern_character] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(17),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(19),
    [anon_sym_BSLASHk] = ACTIONS(21),
    [sym_decimal_escape] = ACTIONS(7),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACKdDsSwW_RBRACK_SLASH] = ACTIONS(23),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACKpP_RBRACK_SLASH] = ACTIONS(25),
    [sym_control_escape] = ACTIONS(27),
    [sym_control_letter_escape] = ACTIONS(7),
    [sym_identity_escape] = ACTIONS(27),
  },
  [10] = {
    [sym_group_name] = ACTIONS(67),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(69),
    [anon_sym_PIPE] = ACTIONS(69),
    [sym_any_character] = ACTIONS(69),
    [anon_sym_CARET] = ACTIONS(69),
    [sym_end_assertion] = ACTIONS(69),
    [sym_boundary_assertion] = ACTIONS(69),
    [sym_non_boundary_assertion] = ACTIONS(69),
    [anon_sym_LPAREN_QMARK] = ACTIONS(71),
    [anon_sym_RPAREN] = ACTIONS(69),
    [sym_pattern_character] = ACTIONS(69),
    [anon_sym_LBRACK] = ACTIONS(69),
    [anon_sym_LPAREN] = ACTIONS(71),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(69),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(69),
    [anon_sym_STAR] = ACTIONS(69),
    [anon_sym_QMARK] = ACTIONS(69),
    [anon_sym_PLUS] = ACTIONS(69),
    [anon_sym_LBRACE] = ACTIONS(69),
    [anon_sym_BSLASHk] = ACTIONS(69),
    [sym_decimal_escape] = ACTIONS(69),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACKdDsSwW_RBRACK_SLASH] = ACTIONS(69),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACKpP_RBRACK_SLASH] = ACTIONS(69),
    [sym_control_escape] = ACTIONS(71),
    [sym_control_letter_escape] = ACTIONS(69),
    [sym_identity_escape] = ACTIONS(71),
  },
  [12] = {
    [anon_sym_LBRACE] = ACTIONS(73),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(75),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(77),
    [anon_sym_RPAREN] = ACTIONS(77),
  },
  [15] = {
    [aux_sym_disjunction_repeat1] = STATE(42),
    [ts_builtin_sym_end] = ACTIONS(77),
    [anon_sym_PIPE] = ACTIONS(5),
  },
  [16] = {
    [aux_sym_disjunction_repeat1] = STATE(43),
    [ts_builtin_sym_end] = ACTIONS(79),
    [anon_sym_PIPE] = ACTIONS(5),
  },
  [17] = {
    [sym_start_assertion] = STATE(3),
    [sym_lookahead_assertion] = STATE(3),
    [sym_character_class] = STATE(3),
    [sym_anonymous_capturing_group] = STATE(3),
    [sym_named_capturing_group] = STATE(3),
    [sym_non_capturing_group] = STATE(3),
    [sym_backreference_escape] = STATE(3),
    [sym_character_class_escape] = STATE(3),
    [aux_sym_term_repeat1] = STATE(44),
    [ts_builtin_sym_end] = ACTIONS(81),
    [anon_sym_PIPE] = ACTIONS(81),
    [sym_any_character] = ACTIONS(7),
    [anon_sym_CARET] = ACTIONS(9),
    [sym_end_assertion] = ACTIONS(7),
    [sym_boundary_assertion] = ACTIONS(7),
    [sym_non_boundary_assertion] = ACTIONS(7),
    [anon_sym_LPAREN_QMARK] = ACTIONS(11),
    [sym_pattern_character] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(17),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(19),
    [anon_sym_BSLASHk] = ACTIONS(21),
    [sym_decimal_escape] = ACTIONS(7),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACKdDsSwW_RBRACK_SLASH] = ACTIONS(23),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACKpP_RBRACK_SLASH] = ACTIONS(25),
    [sym_control_escape] = ACTIONS(27),
    [sym_control_letter_escape] = ACTIONS(7),
    [sym_identity_escape] = ACTIONS(27),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(83),
    [anon_sym_PIPE] = ACTIONS(83),
    [anon_sym_RPAREN] = ACTIONS(83),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(85),
    [anon_sym_PIPE] = ACTIONS(85),
    [sym_any_character] = ACTIONS(85),
    [anon_sym_CARET] = ACTIONS(85),
    [sym_end_assertion] = ACTIONS(85),
    [sym_boundary_assertion] = ACTIONS(85),
    [sym_non_boundary_assertion] = ACTIONS(85),
    [anon_sym_LPAREN_QMARK] = ACTIONS(87),
    [anon_sym_RPAREN] = ACTIONS(85),
    [sym_pattern_character] = ACTIONS(85),
    [anon_sym_LBRACK] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(87),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(85),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(85),
    [anon_sym_QMARK] = ACTIONS(89),
    [anon_sym_BSLASHk] = ACTIONS(85),
    [sym_decimal_escape] = ACTIONS(85),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACKdDsSwW_RBRACK_SLASH] = ACTIONS(85),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACKpP_RBRACK_SLASH] = ACTIONS(85),
    [sym_control_escape] = ACTIONS(87),
    [sym_control_letter_escape] = ACTIONS(85),
    [sym_identity_escape] = ACTIONS(87),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(91),
    [anon_sym_PIPE] = ACTIONS(91),
    [sym_any_character] = ACTIONS(91),
    [anon_sym_CARET] = ACTIONS(91),
    [sym_end_assertion] = ACTIONS(91),
    [sym_boundary_assertion] = ACTIONS(91),
    [sym_non_boundary_assertion] = ACTIONS(91),
    [anon_sym_LPAREN_QMARK] = ACTIONS(93),
    [anon_sym_RPAREN] = ACTIONS(91),
    [sym_pattern_character] = ACTIONS(91),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_LPAREN] = ACTIONS(93),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(91),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(91),
    [anon_sym_QMARK] = ACTIONS(95),
    [anon_sym_BSLASHk] = ACTIONS(91),
    [sym_decimal_escape] = ACTIONS(91),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACKdDsSwW_RBRACK_SLASH] = ACTIONS(91),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACKpP_RBRACK_SLASH] = ACTIONS(91),
    [sym_control_escape] = ACTIONS(93),
    [sym_control_letter_escape] = ACTIONS(91),
    [sym_identity_escape] = ACTIONS(93),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(97),
    [anon_sym_PIPE] = ACTIONS(97),
    [sym_any_character] = ACTIONS(97),
    [anon_sym_CARET] = ACTIONS(97),
    [sym_end_assertion] = ACTIONS(97),
    [sym_boundary_assertion] = ACTIONS(97),
    [sym_non_boundary_assertion] = ACTIONS(97),
    [anon_sym_LPAREN_QMARK] = ACTIONS(99),
    [anon_sym_RPAREN] = ACTIONS(97),
    [sym_pattern_character] = ACTIONS(97),
    [anon_sym_LBRACK] = ACTIONS(97),
    [anon_sym_LPAREN] = ACTIONS(99),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(97),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(97),
    [anon_sym_QMARK] = ACTIONS(101),
    [anon_sym_BSLASHk] = ACTIONS(97),
    [sym_decimal_escape] = ACTIONS(97),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACKdDsSwW_RBRACK_SLASH] = ACTIONS(97),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACKpP_RBRACK_SLASH] = ACTIONS(97),
    [sym_control_escape] = ACTIONS(99),
    [sym_control_letter_escape] = ACTIONS(97),
    [sym_identity_escape] = ACTIONS(99),
  },
  [22] = {
    [sym_decimal_digits] = ACTIONS(103),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(105),
    [anon_sym_PIPE] = ACTIONS(105),
    [sym_any_character] = ACTIONS(105),
    [anon_sym_CARET] = ACTIONS(105),
    [sym_end_assertion] = ACTIONS(105),
    [sym_boundary_assertion] = ACTIONS(105),
    [sym_non_boundary_assertion] = ACTIONS(105),
    [anon_sym_LPAREN_QMARK] = ACTIONS(107),
    [anon_sym_RPAREN] = ACTIONS(105),
    [sym_pattern_character] = ACTIONS(105),
    [anon_sym_LBRACK] = ACTIONS(105),
    [anon_sym_LPAREN] = ACTIONS(107),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(105),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(105),
    [anon_sym_BSLASHk] = ACTIONS(105),
    [sym_decimal_escape] = ACTIONS(105),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACKdDsSwW_RBRACK_SLASH] = ACTIONS(105),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACKpP_RBRACK_SLASH] = ACTIONS(105),
    [sym_control_escape] = ACTIONS(107),
    [sym_control_letter_escape] = ACTIONS(105),
    [sym_identity_escape] = ACTIONS(107),
  },
  [24] = {
    [sym_pattern] = STATE(49),
    [sym_disjunction] = STATE(14),
    [sym_term] = STATE(35),
    [sym_start_assertion] = STATE(3),
    [sym_lookahead_assertion] = STATE(3),
    [sym_character_class] = STATE(3),
    [sym_anonymous_capturing_group] = STATE(3),
    [sym_named_capturing_group] = STATE(3),
    [sym_non_capturing_group] = STATE(3),
    [sym_backreference_escape] = STATE(3),
    [sym_character_class_escape] = STATE(3),
    [aux_sym_disjunction_repeat1] = STATE(36),
    [aux_sym_term_repeat1] = STATE(37),
    [anon_sym_PIPE] = ACTIONS(63),
    [sym_any_character] = ACTIONS(7),
    [anon_sym_CARET] = ACTIONS(9),
    [sym_end_assertion] = ACTIONS(7),
    [sym_boundary_assertion] = ACTIONS(7),
    [sym_non_boundary_assertion] = ACTIONS(7),
    [anon_sym_LPAREN_QMARK] = ACTIONS(11),
    [sym_pattern_character] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(17),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(19),
    [anon_sym_BSLASHk] = ACTIONS(21),
    [sym_decimal_escape] = ACTIONS(7),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACKdDsSwW_RBRACK_SLASH] = ACTIONS(23),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACKpP_RBRACK_SLASH] = ACTIONS(25),
    [sym_control_escape] = ACTIONS(27),
    [sym_control_letter_escape] = ACTIONS(7),
    [sym_identity_escape] = ACTIONS(27),
  },
  [25] = {
    [sym_class_range] = STATE(51),
    [sym_character_class_escape] = STATE(29),
    [aux_sym_character_class_repeat1] = STATE(51),
    [anon_sym_RBRACK] = ACTIONS(109),
    [anon_sym_DASH] = ACTIONS(53),
    [anon_sym_BSLASH_DASH] = ACTIONS(55),
    [sym_class_character] = ACTIONS(111),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACKdDsSwW_RBRACK_SLASH] = ACTIONS(59),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACKpP_RBRACK_SLASH] = ACTIONS(61),
    [sym_control_escape] = ACTIONS(57),
    [sym_control_letter_escape] = ACTIONS(57),
    [sym_identity_escape] = ACTIONS(57),
  },
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(113),
    [anon_sym_PIPE] = ACTIONS(113),
    [sym_any_character] = ACTIONS(113),
    [anon_sym_CARET] = ACTIONS(113),
    [sym_end_assertion] = ACTIONS(113),
    [sym_boundary_assertion] = ACTIONS(113),
    [sym_non_boundary_assertion] = ACTIONS(113),
    [anon_sym_LPAREN_QMARK] = ACTIONS(115),
    [anon_sym_RPAREN] = ACTIONS(113),
    [sym_pattern_character] = ACTIONS(113),
    [anon_sym_LBRACK] = ACTIONS(113),
    [anon_sym_LPAREN] = ACTIONS(115),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(113),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(113),
    [anon_sym_STAR] = ACTIONS(113),
    [anon_sym_QMARK] = ACTIONS(113),
    [anon_sym_PLUS] = ACTIONS(113),
    [anon_sym_LBRACE] = ACTIONS(113),
    [anon_sym_BSLASHk] = ACTIONS(113),
    [sym_decimal_escape] = ACTIONS(113),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACKdDsSwW_RBRACK_SLASH] = ACTIONS(113),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACKpP_RBRACK_SLASH] = ACTIONS(113),
    [sym_control_escape] = ACTIONS(115),
    [sym_control_letter_escape] = ACTIONS(113),
    [sym_identity_escape] = ACTIONS(115),
  },
  [27] = {
    [anon_sym_RBRACK] = ACTIONS(117),
    [anon_sym_DASH] = ACTIONS(119),
    [anon_sym_BSLASH_DASH] = ACTIONS(117),
    [sym_class_character] = ACTIONS(121),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACKdDsSwW_RBRACK_SLASH] = ACTIONS(117),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACKpP_RBRACK_SLASH] = ACTIONS(117),
    [sym_control_escape] = ACTIONS(117),
    [sym_control_letter_escape] = ACTIONS(117),
    [sym_identity_escape] = ACTIONS(117),
  },
  [28] = {
    [anon_sym_RBRACK] = ACTIONS(123),
    [anon_sym_DASH] = ACTIONS(125),
    [anon_sym_BSLASH_DASH] = ACTIONS(123),
    [sym_class_character] = ACTIONS(127),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACKdDsSwW_RBRACK_SLASH] = ACTIONS(123),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACKpP_RBRACK_SLASH] = ACTIONS(123),
    [sym_control_escape] = ACTIONS(123),
    [sym_control_letter_escape] = ACTIONS(123),
    [sym_identity_escape] = ACTIONS(123),
  },
  [29] = {
    [anon_sym_RBRACK] = ACTIONS(129),
    [anon_sym_DASH] = ACTIONS(131),
    [anon_sym_BSLASH_DASH] = ACTIONS(129),
    [sym_class_character] = ACTIONS(133),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACKdDsSwW_RBRACK_SLASH] = ACTIONS(129),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACKpP_RBRACK_SLASH] = ACTIONS(129),
    [sym_control_escape] = ACTIONS(129),
    [sym_control_letter_escape] = ACTIONS(129),
    [sym_identity_escape] = ACTIONS(129),
  },
  [30] = {
    [anon_sym_RBRACK] = ACTIONS(71),
    [anon_sym_DASH] = ACTIONS(71),
    [anon_sym_BSLASH_DASH] = ACTIONS(71),
    [sym_class_character] = ACTIONS(69),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACKdDsSwW_RBRACK_SLASH] = ACTIONS(71),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACKpP_RBRACK_SLASH] = ACTIONS(71),
    [sym_control_escape] = ACTIONS(71),
    [sym_control_letter_escape] = ACTIONS(71),
    [sym_identity_escape] = ACTIONS(71),
  },
  [31] = {
    [anon_sym_LBRACE] = ACTIONS(135),
  },
  [32] = {
    [sym_class_range] = STATE(56),
    [sym_character_class_escape] = STATE(29),
    [aux_sym_character_class_repeat1] = STATE(56),
    [anon_sym_RBRACK] = ACTIONS(109),
    [anon_sym_DASH] = ACTIONS(53),
    [anon_sym_BSLASH_DASH] = ACTIONS(55),
    [sym_class_character] = ACTIONS(111),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACKdDsSwW_RBRACK_SLASH] = ACTIONS(59),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACKpP_RBRACK_SLASH] = ACTIONS(61),
    [sym_control_escape] = ACTIONS(57),
    [sym_control_letter_escape] = ACTIONS(57),
    [sym_identity_escape] = ACTIONS(57),
  },
  [33] = {
    [sym_term] = STATE(18),
    [sym_start_assertion] = STATE(3),
    [sym_lookahead_assertion] = STATE(3),
    [sym_character_class] = STATE(3),
    [sym_anonymous_capturing_group] = STATE(3),
    [sym_named_capturing_group] = STATE(3),
    [sym_non_capturing_group] = STATE(3),
    [sym_backreference_escape] = STATE(3),
    [sym_character_class_escape] = STATE(3),
    [aux_sym_term_repeat1] = STATE(37),
    [anon_sym_PIPE] = ACTIONS(29),
    [sym_any_character] = ACTIONS(7),
    [anon_sym_CARET] = ACTIONS(9),
    [sym_end_assertion] = ACTIONS(7),
    [sym_boundary_assertion] = ACTIONS(7),
    [sym_non_boundary_assertion] = ACTIONS(7),
    [anon_sym_LPAREN_QMARK] = ACTIONS(11),
    [anon_sym_RPAREN] = ACTIONS(29),
    [sym_pattern_character] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(17),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(19),
    [anon_sym_BSLASHk] = ACTIONS(21),
    [sym_decimal_escape] = ACTIONS(7),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACKdDsSwW_RBRACK_SLASH] = ACTIONS(23),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACKpP_RBRACK_SLASH] = ACTIONS(25),
    [sym_control_escape] = ACTIONS(27),
    [sym_control_letter_escape] = ACTIONS(7),
    [sym_identity_escape] = ACTIONS(27),
  },
  [34] = {
    [anon_sym_RPAREN] = ACTIONS(137),
  },
  [35] = {
    [aux_sym_disjunction_repeat1] = STATE(58),
    [anon_sym_PIPE] = ACTIONS(63),
    [anon_sym_RPAREN] = ACTIONS(77),
  },
  [36] = {
    [aux_sym_disjunction_repeat1] = STATE(59),
    [anon_sym_PIPE] = ACTIONS(63),
    [anon_sym_RPAREN] = ACTIONS(79),
  },
  [37] = {
    [sym_start_assertion] = STATE(3),
    [sym_lookahead_assertion] = STATE(3),
    [sym_character_class] = STATE(3),
    [sym_anonymous_capturing_group] = STATE(3),
    [sym_named_capturing_group] = STATE(3),
    [sym_non_capturing_group] = STATE(3),
    [sym_backreference_escape] = STATE(3),
    [sym_character_class_escape] = STATE(3),
    [aux_sym_term_repeat1] = STATE(60),
    [anon_sym_PIPE] = ACTIONS(81),
    [sym_any_character] = ACTIONS(7),
    [anon_sym_CARET] = ACTIONS(9),
    [sym_end_assertion] = ACTIONS(7),
    [sym_boundary_assertion] = ACTIONS(7),
    [sym_non_boundary_assertion] = ACTIONS(7),
    [anon_sym_LPAREN_QMARK] = ACTIONS(11),
    [anon_sym_RPAREN] = ACTIONS(81),
    [sym_pattern_character] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(17),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(19),
    [anon_sym_BSLASHk] = ACTIONS(21),
    [sym_decimal_escape] = ACTIONS(7),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACKdDsSwW_RBRACK_SLASH] = ACTIONS(23),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACKpP_RBRACK_SLASH] = ACTIONS(25),
    [sym_control_escape] = ACTIONS(27),
    [sym_control_letter_escape] = ACTIONS(7),
    [sym_identity_escape] = ACTIONS(27),
  },
  [38] = {
    [anon_sym_GT] = ACTIONS(139),
  },
  [39] = {
    [anon_sym_RPAREN] = ACTIONS(141),
  },
  [40] = {
    [ts_builtin_sym_end] = ACTIONS(143),
    [anon_sym_PIPE] = ACTIONS(143),
    [sym_any_character] = ACTIONS(143),
    [anon_sym_CARET] = ACTIONS(143),
    [sym_end_assertion] = ACTIONS(143),
    [sym_boundary_assertion] = ACTIONS(143),
    [sym_non_boundary_assertion] = ACTIONS(143),
    [anon_sym_LPAREN_QMARK] = ACTIONS(145),
    [anon_sym_RPAREN] = ACTIONS(143),
    [sym_pattern_character] = ACTIONS(143),
    [anon_sym_LBRACK] = ACTIONS(143),
    [anon_sym_LPAREN] = ACTIONS(145),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(143),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(143),
    [anon_sym_STAR] = ACTIONS(143),
    [anon_sym_QMARK] = ACTIONS(143),
    [anon_sym_PLUS] = ACTIONS(143),
    [anon_sym_LBRACE] = ACTIONS(143),
    [anon_sym_BSLASHk] = ACTIONS(143),
    [sym_decimal_escape] = ACTIONS(143),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACKdDsSwW_RBRACK_SLASH] = ACTIONS(143),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACKpP_RBRACK_SLASH] = ACTIONS(143),
    [sym_control_escape] = ACTIONS(145),
    [sym_control_letter_escape] = ACTIONS(143),
    [sym_identity_escape] = ACTIONS(145),
  },
  [41] = {
    [sym_unicode_property_value_expression] = STATE(64),
    [sym_unicode_property] = ACTIONS(147),
  },
  [42] = {
    [aux_sym_disjunction_repeat1] = STATE(43),
    [ts_builtin_sym_end] = ACTIONS(149),
    [anon_sym_PIPE] = ACTIONS(5),
  },
  [43] = {
    [aux_sym_disjunction_repeat1] = STATE(43),
    [ts_builtin_sym_end] = ACTIONS(83),
    [anon_sym_PIPE] = ACTIONS(151),
  },
  [44] = {
    [sym_start_assertion] = STATE(3),
    [sym_lookahead_assertion] = STATE(3),
    [sym_character_class] = STATE(3),
    [sym_anonymous_capturing_group] = STATE(3),
    [sym_named_capturing_group] = STATE(3),
    [sym_non_capturing_group] = STATE(3),
    [sym_backreference_escape] = STATE(3),
    [sym_character_class_escape] = STATE(3),
    [aux_sym_term_repeat1] = STATE(44),
    [ts_builtin_sym_end] = ACTIONS(105),
    [anon_sym_PIPE] = ACTIONS(105),
    [sym_any_character] = ACTIONS(154),
    [anon_sym_CARET] = ACTIONS(157),
    [sym_end_assertion] = ACTIONS(154),
    [sym_boundary_assertion] = ACTIONS(154),
    [sym_non_boundary_assertion] = ACTIONS(154),
    [anon_sym_LPAREN_QMARK] = ACTIONS(160),
    [sym_pattern_character] = ACTIONS(154),
    [anon_sym_LBRACK] = ACTIONS(163),
    [anon_sym_LPAREN] = ACTIONS(166),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(169),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(172),
    [anon_sym_BSLASHk] = ACTIONS(175),
    [sym_decimal_escape] = ACTIONS(154),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACKdDsSwW_RBRACK_SLASH] = ACTIONS(178),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACKpP_RBRACK_SLASH] = ACTIONS(181),
    [sym_control_escape] = ACTIONS(184),
    [sym_control_letter_escape] = ACTIONS(154),
    [sym_identity_escape] = ACTIONS(184),
  },
  [45] = {
    [ts_builtin_sym_end] = ACTIONS(187),
    [anon_sym_PIPE] = ACTIONS(187),
    [sym_any_character] = ACTIONS(187),
    [anon_sym_CARET] = ACTIONS(187),
    [sym_end_assertion] = ACTIONS(187),
    [sym_boundary_assertion] = ACTIONS(187),
    [sym_non_boundary_assertion] = ACTIONS(187),
    [anon_sym_LPAREN_QMARK] = ACTIONS(189),
    [anon_sym_RPAREN] = ACTIONS(187),
    [sym_pattern_character] = ACTIONS(187),
    [anon_sym_LBRACK] = ACTIONS(187),
    [anon_sym_LPAREN] = ACTIONS(189),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(187),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(187),
    [anon_sym_BSLASHk] = ACTIONS(187),
    [sym_decimal_escape] = ACTIONS(187),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACKdDsSwW_RBRACK_SLASH] = ACTIONS(187),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACKpP_RBRACK_SLASH] = ACTIONS(187),
    [sym_control_escape] = ACTIONS(189),
    [sym_control_letter_escape] = ACTIONS(187),
    [sym_identity_escape] = ACTIONS(189),
  },
  [46] = {
    [ts_builtin_sym_end] = ACTIONS(191),
    [anon_sym_PIPE] = ACTIONS(191),
    [sym_any_character] = ACTIONS(191),
    [anon_sym_CARET] = ACTIONS(191),
    [sym_end_assertion] = ACTIONS(191),
    [sym_boundary_assertion] = ACTIONS(191),
    [sym_non_boundary_assertion] = ACTIONS(191),
    [anon_sym_LPAREN_QMARK] = ACTIONS(193),
    [anon_sym_RPAREN] = ACTIONS(191),
    [sym_pattern_character] = ACTIONS(191),
    [anon_sym_LBRACK] = ACTIONS(191),
    [anon_sym_LPAREN] = ACTIONS(193),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(191),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(191),
    [anon_sym_BSLASHk] = ACTIONS(191),
    [sym_decimal_escape] = ACTIONS(191),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACKdDsSwW_RBRACK_SLASH] = ACTIONS(191),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACKpP_RBRACK_SLASH] = ACTIONS(191),
    [sym_control_escape] = ACTIONS(193),
    [sym_control_letter_escape] = ACTIONS(191),
    [sym_identity_escape] = ACTIONS(193),
  },
  [47] = {
    [ts_builtin_sym_end] = ACTIONS(195),
    [anon_sym_PIPE] = ACTIONS(195),
    [sym_any_character] = ACTIONS(195),
    [anon_sym_CARET] = ACTIONS(195),
    [sym_end_assertion] = ACTIONS(195),
    [sym_boundary_assertion] = ACTIONS(195),
    [sym_non_boundary_assertion] = ACTIONS(195),
    [anon_sym_LPAREN_QMARK] = ACTIONS(197),
    [anon_sym_RPAREN] = ACTIONS(195),
    [sym_pattern_character] = ACTIONS(195),
    [anon_sym_LBRACK] = ACTIONS(195),
    [anon_sym_LPAREN] = ACTIONS(197),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(195),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(195),
    [anon_sym_BSLASHk] = ACTIONS(195),
    [sym_decimal_escape] = ACTIONS(195),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACKdDsSwW_RBRACK_SLASH] = ACTIONS(195),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACKpP_RBRACK_SLASH] = ACTIONS(195),
    [sym_control_escape] = ACTIONS(197),
    [sym_control_letter_escape] = ACTIONS(195),
    [sym_identity_escape] = ACTIONS(197),
  },
  [48] = {
    [anon_sym_COMMA] = ACTIONS(199),
    [anon_sym_RBRACE] = ACTIONS(201),
  },
  [49] = {
    [anon_sym_RPAREN] = ACTIONS(203),
  },
  [50] = {
    [ts_builtin_sym_end] = ACTIONS(205),
    [anon_sym_PIPE] = ACTIONS(205),
    [sym_any_character] = ACTIONS(205),
    [anon_sym_CARET] = ACTIONS(205),
    [sym_end_assertion] = ACTIONS(205),
    [sym_boundary_assertion] = ACTIONS(205),
    [sym_non_boundary_assertion] = ACTIONS(205),
    [anon_sym_LPAREN_QMARK] = ACTIONS(207),
    [anon_sym_RPAREN] = ACTIONS(205),
    [sym_pattern_character] = ACTIONS(205),
    [anon_sym_LBRACK] = ACTIONS(205),
    [anon_sym_LPAREN] = ACTIONS(207),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(205),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(205),
    [anon_sym_STAR] = ACTIONS(205),
    [anon_sym_QMARK] = ACTIONS(205),
    [anon_sym_PLUS] = ACTIONS(205),
    [anon_sym_LBRACE] = ACTIONS(205),
    [anon_sym_BSLASHk] = ACTIONS(205),
    [sym_decimal_escape] = ACTIONS(205),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACKdDsSwW_RBRACK_SLASH] = ACTIONS(205),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACKpP_RBRACK_SLASH] = ACTIONS(205),
    [sym_control_escape] = ACTIONS(207),
    [sym_control_letter_escape] = ACTIONS(205),
    [sym_identity_escape] = ACTIONS(207),
  },
  [51] = {
    [sym_class_range] = STATE(56),
    [sym_character_class_escape] = STATE(29),
    [aux_sym_character_class_repeat1] = STATE(56),
    [anon_sym_RBRACK] = ACTIONS(209),
    [anon_sym_DASH] = ACTIONS(53),
    [anon_sym_BSLASH_DASH] = ACTIONS(55),
    [sym_class_character] = ACTIONS(111),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACKdDsSwW_RBRACK_SLASH] = ACTIONS(59),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACKpP_RBRACK_SLASH] = ACTIONS(61),
    [sym_control_escape] = ACTIONS(57),
    [sym_control_letter_escape] = ACTIONS(57),
    [sym_identity_escape] = ACTIONS(57),
  },
  [52] = {
    [sym_character_class_escape] = STATE(71),
    [anon_sym_DASH] = ACTIONS(211),
    [anon_sym_BSLASH_DASH] = ACTIONS(213),
    [sym_class_character] = ACTIONS(215),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACKdDsSwW_RBRACK_SLASH] = ACTIONS(59),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACKpP_RBRACK_SLASH] = ACTIONS(61),
    [sym_control_escape] = ACTIONS(217),
    [sym_control_letter_escape] = ACTIONS(217),
    [sym_identity_escape] = ACTIONS(217),
  },
  [53] = {
    [sym_character_class_escape] = STATE(74),
    [anon_sym_DASH] = ACTIONS(219),
    [anon_sym_BSLASH_DASH] = ACTIONS(221),
    [sym_class_character] = ACTIONS(223),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACKdDsSwW_RBRACK_SLASH] = ACTIONS(59),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACKpP_RBRACK_SLASH] = ACTIONS(61),
    [sym_control_escape] = ACTIONS(225),
    [sym_control_letter_escape] = ACTIONS(225),
    [sym_identity_escape] = ACTIONS(225),
  },
  [54] = {
    [sym_character_class_escape] = STATE(77),
    [anon_sym_DASH] = ACTIONS(227),
    [anon_sym_BSLASH_DASH] = ACTIONS(229),
    [sym_class_character] = ACTIONS(231),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACKdDsSwW_RBRACK_SLASH] = ACTIONS(59),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACKpP_RBRACK_SLASH] = ACTIONS(61),
    [sym_control_escape] = ACTIONS(233),
    [sym_control_letter_escape] = ACTIONS(233),
    [sym_identity_escape] = ACTIONS(233),
  },
  [55] = {
    [sym_unicode_property_value_expression] = STATE(78),
    [sym_unicode_property] = ACTIONS(147),
  },
  [56] = {
    [sym_class_range] = STATE(56),
    [sym_character_class_escape] = STATE(29),
    [aux_sym_character_class_repeat1] = STATE(56),
    [anon_sym_RBRACK] = ACTIONS(235),
    [anon_sym_DASH] = ACTIONS(237),
    [anon_sym_BSLASH_DASH] = ACTIONS(240),
    [sym_class_character] = ACTIONS(243),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACKdDsSwW_RBRACK_SLASH] = ACTIONS(246),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACKpP_RBRACK_SLASH] = ACTIONS(249),
    [sym_control_escape] = ACTIONS(252),
    [sym_control_letter_escape] = ACTIONS(252),
    [sym_identity_escape] = ACTIONS(252),
  },
  [57] = {
    [ts_builtin_sym_end] = ACTIONS(255),
    [anon_sym_PIPE] = ACTIONS(255),
    [sym_any_character] = ACTIONS(255),
    [anon_sym_CARET] = ACTIONS(255),
    [sym_end_assertion] = ACTIONS(255),
    [sym_boundary_assertion] = ACTIONS(255),
    [sym_non_boundary_assertion] = ACTIONS(255),
    [anon_sym_LPAREN_QMARK] = ACTIONS(257),
    [anon_sym_RPAREN] = ACTIONS(255),
    [sym_pattern_character] = ACTIONS(255),
    [anon_sym_LBRACK] = ACTIONS(255),
    [anon_sym_LPAREN] = ACTIONS(257),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(255),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(255),
    [anon_sym_STAR] = ACTIONS(255),
    [anon_sym_QMARK] = ACTIONS(255),
    [anon_sym_PLUS] = ACTIONS(255),
    [anon_sym_LBRACE] = ACTIONS(255),
    [anon_sym_BSLASHk] = ACTIONS(255),
    [sym_decimal_escape] = ACTIONS(255),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACKdDsSwW_RBRACK_SLASH] = ACTIONS(255),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACKpP_RBRACK_SLASH] = ACTIONS(255),
    [sym_control_escape] = ACTIONS(257),
    [sym_control_letter_escape] = ACTIONS(255),
    [sym_identity_escape] = ACTIONS(257),
  },
  [58] = {
    [aux_sym_disjunction_repeat1] = STATE(59),
    [anon_sym_PIPE] = ACTIONS(63),
    [anon_sym_RPAREN] = ACTIONS(149),
  },
  [59] = {
    [aux_sym_disjunction_repeat1] = STATE(59),
    [anon_sym_PIPE] = ACTIONS(259),
    [anon_sym_RPAREN] = ACTIONS(83),
  },
  [60] = {
    [sym_start_assertion] = STATE(3),
    [sym_lookahead_assertion] = STATE(3),
    [sym_character_class] = STATE(3),
    [sym_anonymous_capturing_group] = STATE(3),
    [sym_named_capturing_group] = STATE(3),
    [sym_non_capturing_group] = STATE(3),
    [sym_backreference_escape] = STATE(3),
    [sym_character_class_escape] = STATE(3),
    [aux_sym_term_repeat1] = STATE(60),
    [anon_sym_PIPE] = ACTIONS(105),
    [sym_any_character] = ACTIONS(154),
    [anon_sym_CARET] = ACTIONS(157),
    [sym_end_assertion] = ACTIONS(154),
    [sym_boundary_assertion] = ACTIONS(154),
    [sym_non_boundary_assertion] = ACTIONS(154),
    [anon_sym_LPAREN_QMARK] = ACTIONS(160),
    [anon_sym_RPAREN] = ACTIONS(105),
    [sym_pattern_character] = ACTIONS(154),
    [anon_sym_LBRACK] = ACTIONS(163),
    [anon_sym_LPAREN] = ACTIONS(166),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(169),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(172),
    [anon_sym_BSLASHk] = ACTIONS(175),
    [sym_decimal_escape] = ACTIONS(154),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACKdDsSwW_RBRACK_SLASH] = ACTIONS(178),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACKpP_RBRACK_SLASH] = ACTIONS(181),
    [sym_control_escape] = ACTIONS(184),
    [sym_control_letter_escape] = ACTIONS(154),
    [sym_identity_escape] = ACTIONS(184),
  },
  [61] = {
    [sym_pattern] = STATE(79),
    [sym_disjunction] = STATE(14),
    [sym_term] = STATE(35),
    [sym_start_assertion] = STATE(3),
    [sym_lookahead_assertion] = STATE(3),
    [sym_character_class] = STATE(3),
    [sym_anonymous_capturing_group] = STATE(3),
    [sym_named_capturing_group] = STATE(3),
    [sym_non_capturing_group] = STATE(3),
    [sym_backreference_escape] = STATE(3),
    [sym_character_class_escape] = STATE(3),
    [aux_sym_disjunction_repeat1] = STATE(36),
    [aux_sym_term_repeat1] = STATE(37),
    [anon_sym_PIPE] = ACTIONS(63),
    [sym_any_character] = ACTIONS(7),
    [anon_sym_CARET] = ACTIONS(9),
    [sym_end_assertion] = ACTIONS(7),
    [sym_boundary_assertion] = ACTIONS(7),
    [sym_non_boundary_assertion] = ACTIONS(7),
    [anon_sym_LPAREN_QMARK] = ACTIONS(11),
    [sym_pattern_character] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(17),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(19),
    [anon_sym_BSLASHk] = ACTIONS(21),
    [sym_decimal_escape] = ACTIONS(7),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACKdDsSwW_RBRACK_SLASH] = ACTIONS(23),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACKpP_RBRACK_SLASH] = ACTIONS(25),
    [sym_control_escape] = ACTIONS(27),
    [sym_control_letter_escape] = ACTIONS(7),
    [sym_identity_escape] = ACTIONS(27),
  },
  [62] = {
    [ts_builtin_sym_end] = ACTIONS(262),
    [anon_sym_PIPE] = ACTIONS(262),
    [sym_any_character] = ACTIONS(262),
    [anon_sym_CARET] = ACTIONS(262),
    [sym_end_assertion] = ACTIONS(262),
    [sym_boundary_assertion] = ACTIONS(262),
    [sym_non_boundary_assertion] = ACTIONS(262),
    [anon_sym_LPAREN_QMARK] = ACTIONS(264),
    [anon_sym_RPAREN] = ACTIONS(262),
    [sym_pattern_character] = ACTIONS(262),
    [anon_sym_LBRACK] = ACTIONS(262),
    [anon_sym_LPAREN] = ACTIONS(264),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(262),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(262),
    [anon_sym_STAR] = ACTIONS(262),
    [anon_sym_QMARK] = ACTIONS(262),
    [anon_sym_PLUS] = ACTIONS(262),
    [anon_sym_LBRACE] = ACTIONS(262),
    [anon_sym_BSLASHk] = ACTIONS(262),
    [sym_decimal_escape] = ACTIONS(262),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACKdDsSwW_RBRACK_SLASH] = ACTIONS(262),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACKpP_RBRACK_SLASH] = ACTIONS(262),
    [sym_control_escape] = ACTIONS(264),
    [sym_control_letter_escape] = ACTIONS(262),
    [sym_identity_escape] = ACTIONS(264),
  },
  [63] = {
    [anon_sym_EQ] = ACTIONS(266),
    [anon_sym_RBRACE] = ACTIONS(268),
  },
  [64] = {
    [anon_sym_RBRACE] = ACTIONS(270),
  },
  [65] = {
    [sym_decimal_digits] = ACTIONS(272),
  },
  [66] = {
    [ts_builtin_sym_end] = ACTIONS(274),
    [anon_sym_PIPE] = ACTIONS(274),
    [sym_any_character] = ACTIONS(274),
    [anon_sym_CARET] = ACTIONS(274),
    [sym_end_assertion] = ACTIONS(274),
    [sym_boundary_assertion] = ACTIONS(274),
    [sym_non_boundary_assertion] = ACTIONS(274),
    [anon_sym_LPAREN_QMARK] = ACTIONS(276),
    [anon_sym_RPAREN] = ACTIONS(274),
    [sym_pattern_character] = ACTIONS(274),
    [anon_sym_LBRACK] = ACTIONS(274),
    [anon_sym_LPAREN] = ACTIONS(276),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(274),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(274),
    [anon_sym_QMARK] = ACTIONS(278),
    [anon_sym_BSLASHk] = ACTIONS(274),
    [sym_decimal_escape] = ACTIONS(274),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACKdDsSwW_RBRACK_SLASH] = ACTIONS(274),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACKpP_RBRACK_SLASH] = ACTIONS(274),
    [sym_control_escape] = ACTIONS(276),
    [sym_control_letter_escape] = ACTIONS(274),
    [sym_identity_escape] = ACTIONS(276),
  },
  [67] = {
    [ts_builtin_sym_end] = ACTIONS(280),
    [anon_sym_PIPE] = ACTIONS(280),
    [sym_any_character] = ACTIONS(280),
    [anon_sym_CARET] = ACTIONS(280),
    [sym_end_assertion] = ACTIONS(280),
    [sym_boundary_assertion] = ACTIONS(280),
    [sym_non_boundary_assertion] = ACTIONS(280),
    [anon_sym_LPAREN_QMARK] = ACTIONS(282),
    [anon_sym_RPAREN] = ACTIONS(280),
    [sym_pattern_character] = ACTIONS(280),
    [anon_sym_LBRACK] = ACTIONS(280),
    [anon_sym_LPAREN] = ACTIONS(282),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(280),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(280),
    [anon_sym_STAR] = ACTIONS(280),
    [anon_sym_QMARK] = ACTIONS(280),
    [anon_sym_PLUS] = ACTIONS(280),
    [anon_sym_LBRACE] = ACTIONS(280),
    [anon_sym_BSLASHk] = ACTIONS(280),
    [sym_decimal_escape] = ACTIONS(280),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACKdDsSwW_RBRACK_SLASH] = ACTIONS(280),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACKpP_RBRACK_SLASH] = ACTIONS(280),
    [sym_control_escape] = ACTIONS(282),
    [sym_control_letter_escape] = ACTIONS(280),
    [sym_identity_escape] = ACTIONS(282),
  },
  [68] = {
    [ts_builtin_sym_end] = ACTIONS(284),
    [anon_sym_PIPE] = ACTIONS(284),
    [sym_any_character] = ACTIONS(284),
    [anon_sym_CARET] = ACTIONS(284),
    [sym_end_assertion] = ACTIONS(284),
    [sym_boundary_assertion] = ACTIONS(284),
    [sym_non_boundary_assertion] = ACTIONS(284),
    [anon_sym_LPAREN_QMARK] = ACTIONS(286),
    [anon_sym_RPAREN] = ACTIONS(284),
    [sym_pattern_character] = ACTIONS(284),
    [anon_sym_LBRACK] = ACTIONS(284),
    [anon_sym_LPAREN] = ACTIONS(286),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(284),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(284),
    [anon_sym_STAR] = ACTIONS(284),
    [anon_sym_QMARK] = ACTIONS(284),
    [anon_sym_PLUS] = ACTIONS(284),
    [anon_sym_LBRACE] = ACTIONS(284),
    [anon_sym_BSLASHk] = ACTIONS(284),
    [sym_decimal_escape] = ACTIONS(284),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACKdDsSwW_RBRACK_SLASH] = ACTIONS(284),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACKpP_RBRACK_SLASH] = ACTIONS(284),
    [sym_control_escape] = ACTIONS(286),
    [sym_control_letter_escape] = ACTIONS(284),
    [sym_identity_escape] = ACTIONS(286),
  },
  [69] = {
    [anon_sym_RBRACK] = ACTIONS(288),
    [anon_sym_DASH] = ACTIONS(288),
    [anon_sym_BSLASH_DASH] = ACTIONS(288),
    [sym_class_character] = ACTIONS(290),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACKdDsSwW_RBRACK_SLASH] = ACTIONS(288),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACKpP_RBRACK_SLASH] = ACTIONS(288),
    [sym_control_escape] = ACTIONS(288),
    [sym_control_letter_escape] = ACTIONS(288),
    [sym_identity_escape] = ACTIONS(288),
  },
  [70] = {
    [anon_sym_RBRACK] = ACTIONS(292),
    [anon_sym_DASH] = ACTIONS(292),
    [anon_sym_BSLASH_DASH] = ACTIONS(292),
    [sym_class_character] = ACTIONS(294),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACKdDsSwW_RBRACK_SLASH] = ACTIONS(292),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACKpP_RBRACK_SLASH] = ACTIONS(292),
    [sym_control_escape] = ACTIONS(292),
    [sym_control_letter_escape] = ACTIONS(292),
    [sym_identity_escape] = ACTIONS(292),
  },
  [71] = {
    [anon_sym_RBRACK] = ACTIONS(296),
    [anon_sym_DASH] = ACTIONS(296),
    [anon_sym_BSLASH_DASH] = ACTIONS(296),
    [sym_class_character] = ACTIONS(298),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACKdDsSwW_RBRACK_SLASH] = ACTIONS(296),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACKpP_RBRACK_SLASH] = ACTIONS(296),
    [sym_control_escape] = ACTIONS(296),
    [sym_control_letter_escape] = ACTIONS(296),
    [sym_identity_escape] = ACTIONS(296),
  },
  [72] = {
    [anon_sym_RBRACK] = ACTIONS(300),
    [anon_sym_DASH] = ACTIONS(300),
    [anon_sym_BSLASH_DASH] = ACTIONS(300),
    [sym_class_character] = ACTIONS(302),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACKdDsSwW_RBRACK_SLASH] = ACTIONS(300),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACKpP_RBRACK_SLASH] = ACTIONS(300),
    [sym_control_escape] = ACTIONS(300),
    [sym_control_letter_escape] = ACTIONS(300),
    [sym_identity_escape] = ACTIONS(300),
  },
  [73] = {
    [anon_sym_RBRACK] = ACTIONS(304),
    [anon_sym_DASH] = ACTIONS(304),
    [anon_sym_BSLASH_DASH] = ACTIONS(304),
    [sym_class_character] = ACTIONS(306),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACKdDsSwW_RBRACK_SLASH] = ACTIONS(304),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACKpP_RBRACK_SLASH] = ACTIONS(304),
    [sym_control_escape] = ACTIONS(304),
    [sym_control_letter_escape] = ACTIONS(304),
    [sym_identity_escape] = ACTIONS(304),
  },
  [74] = {
    [anon_sym_RBRACK] = ACTIONS(308),
    [anon_sym_DASH] = ACTIONS(308),
    [anon_sym_BSLASH_DASH] = ACTIONS(308),
    [sym_class_character] = ACTIONS(310),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACKdDsSwW_RBRACK_SLASH] = ACTIONS(308),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACKpP_RBRACK_SLASH] = ACTIONS(308),
    [sym_control_escape] = ACTIONS(308),
    [sym_control_letter_escape] = ACTIONS(308),
    [sym_identity_escape] = ACTIONS(308),
  },
  [75] = {
    [anon_sym_RBRACK] = ACTIONS(312),
    [anon_sym_DASH] = ACTIONS(312),
    [anon_sym_BSLASH_DASH] = ACTIONS(312),
    [sym_class_character] = ACTIONS(314),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACKdDsSwW_RBRACK_SLASH] = ACTIONS(312),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACKpP_RBRACK_SLASH] = ACTIONS(312),
    [sym_control_escape] = ACTIONS(312),
    [sym_control_letter_escape] = ACTIONS(312),
    [sym_identity_escape] = ACTIONS(312),
  },
  [76] = {
    [anon_sym_RBRACK] = ACTIONS(316),
    [anon_sym_DASH] = ACTIONS(316),
    [anon_sym_BSLASH_DASH] = ACTIONS(316),
    [sym_class_character] = ACTIONS(318),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACKdDsSwW_RBRACK_SLASH] = ACTIONS(316),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACKpP_RBRACK_SLASH] = ACTIONS(316),
    [sym_control_escape] = ACTIONS(316),
    [sym_control_letter_escape] = ACTIONS(316),
    [sym_identity_escape] = ACTIONS(316),
  },
  [77] = {
    [anon_sym_RBRACK] = ACTIONS(320),
    [anon_sym_DASH] = ACTIONS(320),
    [anon_sym_BSLASH_DASH] = ACTIONS(320),
    [sym_class_character] = ACTIONS(322),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACKdDsSwW_RBRACK_SLASH] = ACTIONS(320),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACKpP_RBRACK_SLASH] = ACTIONS(320),
    [sym_control_escape] = ACTIONS(320),
    [sym_control_letter_escape] = ACTIONS(320),
    [sym_identity_escape] = ACTIONS(320),
  },
  [78] = {
    [anon_sym_RBRACE] = ACTIONS(324),
  },
  [79] = {
    [anon_sym_RPAREN] = ACTIONS(326),
  },
  [80] = {
    [sym_unicode_property] = ACTIONS(328),
  },
  [81] = {
    [ts_builtin_sym_end] = ACTIONS(330),
    [anon_sym_PIPE] = ACTIONS(330),
    [sym_any_character] = ACTIONS(330),
    [anon_sym_CARET] = ACTIONS(330),
    [sym_end_assertion] = ACTIONS(330),
    [sym_boundary_assertion] = ACTIONS(330),
    [sym_non_boundary_assertion] = ACTIONS(330),
    [anon_sym_LPAREN_QMARK] = ACTIONS(332),
    [anon_sym_RPAREN] = ACTIONS(330),
    [sym_pattern_character] = ACTIONS(330),
    [anon_sym_LBRACK] = ACTIONS(330),
    [anon_sym_LPAREN] = ACTIONS(332),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(330),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(330),
    [anon_sym_STAR] = ACTIONS(330),
    [anon_sym_QMARK] = ACTIONS(330),
    [anon_sym_PLUS] = ACTIONS(330),
    [anon_sym_LBRACE] = ACTIONS(330),
    [anon_sym_BSLASHk] = ACTIONS(330),
    [sym_decimal_escape] = ACTIONS(330),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACKdDsSwW_RBRACK_SLASH] = ACTIONS(330),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACKpP_RBRACK_SLASH] = ACTIONS(330),
    [sym_control_escape] = ACTIONS(332),
    [sym_control_letter_escape] = ACTIONS(330),
    [sym_identity_escape] = ACTIONS(332),
  },
  [82] = {
    [anon_sym_RBRACE] = ACTIONS(334),
  },
  [83] = {
    [ts_builtin_sym_end] = ACTIONS(336),
    [anon_sym_PIPE] = ACTIONS(336),
    [sym_any_character] = ACTIONS(336),
    [anon_sym_CARET] = ACTIONS(336),
    [sym_end_assertion] = ACTIONS(336),
    [sym_boundary_assertion] = ACTIONS(336),
    [sym_non_boundary_assertion] = ACTIONS(336),
    [anon_sym_LPAREN_QMARK] = ACTIONS(338),
    [anon_sym_RPAREN] = ACTIONS(336),
    [sym_pattern_character] = ACTIONS(336),
    [anon_sym_LBRACK] = ACTIONS(336),
    [anon_sym_LPAREN] = ACTIONS(338),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(336),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(336),
    [anon_sym_BSLASHk] = ACTIONS(336),
    [sym_decimal_escape] = ACTIONS(336),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACKdDsSwW_RBRACK_SLASH] = ACTIONS(336),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACKpP_RBRACK_SLASH] = ACTIONS(336),
    [sym_control_escape] = ACTIONS(338),
    [sym_control_letter_escape] = ACTIONS(336),
    [sym_identity_escape] = ACTIONS(338),
  },
  [84] = {
    [anon_sym_RBRACK] = ACTIONS(332),
    [anon_sym_DASH] = ACTIONS(332),
    [anon_sym_BSLASH_DASH] = ACTIONS(332),
    [sym_class_character] = ACTIONS(330),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACKdDsSwW_RBRACK_SLASH] = ACTIONS(332),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACKpP_RBRACK_SLASH] = ACTIONS(332),
    [sym_control_escape] = ACTIONS(332),
    [sym_control_letter_escape] = ACTIONS(332),
    [sym_identity_escape] = ACTIONS(332),
  },
  [85] = {
    [ts_builtin_sym_end] = ACTIONS(340),
    [anon_sym_PIPE] = ACTIONS(340),
    [sym_any_character] = ACTIONS(340),
    [anon_sym_CARET] = ACTIONS(340),
    [sym_end_assertion] = ACTIONS(340),
    [sym_boundary_assertion] = ACTIONS(340),
    [sym_non_boundary_assertion] = ACTIONS(340),
    [anon_sym_LPAREN_QMARK] = ACTIONS(342),
    [anon_sym_RPAREN] = ACTIONS(340),
    [sym_pattern_character] = ACTIONS(340),
    [anon_sym_LBRACK] = ACTIONS(340),
    [anon_sym_LPAREN] = ACTIONS(342),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(340),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(340),
    [anon_sym_STAR] = ACTIONS(340),
    [anon_sym_QMARK] = ACTIONS(340),
    [anon_sym_PLUS] = ACTIONS(340),
    [anon_sym_LBRACE] = ACTIONS(340),
    [anon_sym_BSLASHk] = ACTIONS(340),
    [sym_decimal_escape] = ACTIONS(340),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACKdDsSwW_RBRACK_SLASH] = ACTIONS(340),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACKpP_RBRACK_SLASH] = ACTIONS(340),
    [sym_control_escape] = ACTIONS(342),
    [sym_control_letter_escape] = ACTIONS(340),
    [sym_identity_escape] = ACTIONS(342),
  },
  [86] = {
    [anon_sym_RBRACE] = ACTIONS(344),
  },
  [87] = {
    [ts_builtin_sym_end] = ACTIONS(346),
    [anon_sym_PIPE] = ACTIONS(346),
    [sym_any_character] = ACTIONS(346),
    [anon_sym_CARET] = ACTIONS(346),
    [sym_end_assertion] = ACTIONS(346),
    [sym_boundary_assertion] = ACTIONS(346),
    [sym_non_boundary_assertion] = ACTIONS(346),
    [anon_sym_LPAREN_QMARK] = ACTIONS(348),
    [anon_sym_RPAREN] = ACTIONS(346),
    [sym_pattern_character] = ACTIONS(346),
    [anon_sym_LBRACK] = ACTIONS(346),
    [anon_sym_LPAREN] = ACTIONS(348),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(346),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(346),
    [anon_sym_QMARK] = ACTIONS(350),
    [anon_sym_BSLASHk] = ACTIONS(346),
    [sym_decimal_escape] = ACTIONS(346),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACKdDsSwW_RBRACK_SLASH] = ACTIONS(346),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACKpP_RBRACK_SLASH] = ACTIONS(346),
    [sym_control_escape] = ACTIONS(348),
    [sym_control_letter_escape] = ACTIONS(346),
    [sym_identity_escape] = ACTIONS(348),
  },
  [88] = {
    [ts_builtin_sym_end] = ACTIONS(352),
    [anon_sym_PIPE] = ACTIONS(352),
    [sym_any_character] = ACTIONS(352),
    [anon_sym_CARET] = ACTIONS(352),
    [sym_end_assertion] = ACTIONS(352),
    [sym_boundary_assertion] = ACTIONS(352),
    [sym_non_boundary_assertion] = ACTIONS(352),
    [anon_sym_LPAREN_QMARK] = ACTIONS(354),
    [anon_sym_RPAREN] = ACTIONS(352),
    [sym_pattern_character] = ACTIONS(352),
    [anon_sym_LBRACK] = ACTIONS(352),
    [anon_sym_LPAREN] = ACTIONS(354),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(352),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(352),
    [anon_sym_BSLASHk] = ACTIONS(352),
    [sym_decimal_escape] = ACTIONS(352),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACKdDsSwW_RBRACK_SLASH] = ACTIONS(352),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACKpP_RBRACK_SLASH] = ACTIONS(352),
    [sym_control_escape] = ACTIONS(354),
    [sym_control_letter_escape] = ACTIONS(352),
    [sym_identity_escape] = ACTIONS(354),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, RECOVER(),
  [5] = {.count = 1, .reusable = true}, SHIFT(2),
  [7] = {.count = 1, .reusable = true}, SHIFT(3),
  [9] = {.count = 1, .reusable = true}, SHIFT(4),
  [11] = {.count = 1, .reusable = false}, SHIFT(5),
  [13] = {.count = 1, .reusable = true}, SHIFT(6),
  [15] = {.count = 1, .reusable = false}, SHIFT(7),
  [17] = {.count = 1, .reusable = true}, SHIFT(8),
  [19] = {.count = 1, .reusable = true}, SHIFT(9),
  [21] = {.count = 1, .reusable = true}, SHIFT(10),
  [23] = {.count = 1, .reusable = true}, SHIFT(11),
  [25] = {.count = 1, .reusable = true}, SHIFT(12),
  [27] = {.count = 1, .reusable = false}, SHIFT(3),
  [29] = {.count = 1, .reusable = true}, REDUCE(aux_sym_disjunction_repeat1, 1),
  [31] = {.count = 1, .reusable = true}, REDUCE(aux_sym_term_repeat1, 1),
  [33] = {.count = 1, .reusable = false}, REDUCE(aux_sym_term_repeat1, 1),
  [35] = {.count = 1, .reusable = true}, SHIFT(19),
  [37] = {.count = 1, .reusable = true}, SHIFT(20),
  [39] = {.count = 1, .reusable = true}, SHIFT(21),
  [41] = {.count = 1, .reusable = true}, SHIFT(22),
  [43] = {.count = 1, .reusable = true}, REDUCE(sym_start_assertion, 1),
  [45] = {.count = 1, .reusable = false}, REDUCE(sym_start_assertion, 1),
  [47] = {.count = 1, .reusable = true}, SHIFT(24),
  [49] = {.count = 1, .reusable = false}, SHIFT(25),
  [51] = {.count = 1, .reusable = false}, SHIFT(26),
  [53] = {.count = 1, .reusable = false}, SHIFT(27),
  [55] = {.count = 1, .reusable = false}, SHIFT(28),
  [57] = {.count = 1, .reusable = false}, SHIFT(29),
  [59] = {.count = 1, .reusable = false}, SHIFT(30),
  [61] = {.count = 1, .reusable = false}, SHIFT(31),
  [63] = {.count = 1, .reusable = true}, SHIFT(33),
  [65] = {.count = 1, .reusable = true}, SHIFT(38),
  [67] = {.count = 1, .reusable = true}, SHIFT(40),
  [69] = {.count = 1, .reusable = true}, REDUCE(sym_character_class_escape, 1),
  [71] = {.count = 1, .reusable = false}, REDUCE(sym_character_class_escape, 1),
  [73] = {.count = 1, .reusable = true}, SHIFT(41),
  [75] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [77] = {.count = 1, .reusable = true}, REDUCE(sym_pattern, 1),
  [79] = {.count = 1, .reusable = true}, REDUCE(sym_disjunction, 1),
  [81] = {.count = 1, .reusable = true}, REDUCE(sym_term, 1),
  [83] = {.count = 1, .reusable = true}, REDUCE(aux_sym_disjunction_repeat1, 2),
  [85] = {.count = 1, .reusable = true}, REDUCE(sym_zero_or_more, 1),
  [87] = {.count = 1, .reusable = false}, REDUCE(sym_zero_or_more, 1),
  [89] = {.count = 1, .reusable = true}, SHIFT(45),
  [91] = {.count = 1, .reusable = true}, REDUCE(sym_optional, 1),
  [93] = {.count = 1, .reusable = false}, REDUCE(sym_optional, 1),
  [95] = {.count = 1, .reusable = true}, SHIFT(46),
  [97] = {.count = 1, .reusable = true}, REDUCE(sym_one_or_more, 1),
  [99] = {.count = 1, .reusable = false}, REDUCE(sym_one_or_more, 1),
  [101] = {.count = 1, .reusable = true}, SHIFT(47),
  [103] = {.count = 1, .reusable = true}, SHIFT(48),
  [105] = {.count = 1, .reusable = true}, REDUCE(aux_sym_term_repeat1, 2),
  [107] = {.count = 1, .reusable = false}, REDUCE(aux_sym_term_repeat1, 2),
  [109] = {.count = 1, .reusable = false}, SHIFT(50),
  [111] = {.count = 1, .reusable = true}, SHIFT(29),
  [113] = {.count = 1, .reusable = true}, REDUCE(sym_character_class, 2),
  [115] = {.count = 1, .reusable = false}, REDUCE(sym_character_class, 2),
  [117] = {.count = 1, .reusable = false}, REDUCE(aux_sym_character_class_repeat1, 1, .alias_sequence_id = 1),
  [119] = {.count = 1, .reusable = false}, SHIFT(52),
  [121] = {.count = 1, .reusable = true}, REDUCE(aux_sym_character_class_repeat1, 1, .alias_sequence_id = 1),
  [123] = {.count = 1, .reusable = false}, REDUCE(aux_sym_character_class_repeat1, 1, .alias_sequence_id = 2),
  [125] = {.count = 1, .reusable = false}, SHIFT(53),
  [127] = {.count = 1, .reusable = true}, REDUCE(aux_sym_character_class_repeat1, 1, .alias_sequence_id = 2),
  [129] = {.count = 1, .reusable = false}, REDUCE(aux_sym_character_class_repeat1, 1),
  [131] = {.count = 1, .reusable = false}, SHIFT(54),
  [133] = {.count = 1, .reusable = true}, REDUCE(aux_sym_character_class_repeat1, 1),
  [135] = {.count = 1, .reusable = true}, SHIFT(55),
  [137] = {.count = 1, .reusable = true}, SHIFT(57),
  [139] = {.count = 1, .reusable = true}, SHIFT(61),
  [141] = {.count = 1, .reusable = true}, SHIFT(62),
  [143] = {.count = 1, .reusable = true}, REDUCE(sym_backreference_escape, 2),
  [145] = {.count = 1, .reusable = false}, REDUCE(sym_backreference_escape, 2),
  [147] = {.count = 1, .reusable = true}, SHIFT(63),
  [149] = {.count = 1, .reusable = true}, REDUCE(sym_disjunction, 2),
  [151] = {.count = 2, .reusable = true}, REDUCE(aux_sym_disjunction_repeat1, 2), SHIFT_REPEAT(2),
  [154] = {.count = 2, .reusable = true}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(3),
  [157] = {.count = 2, .reusable = true}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(4),
  [160] = {.count = 2, .reusable = false}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(5),
  [163] = {.count = 2, .reusable = true}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(6),
  [166] = {.count = 2, .reusable = false}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(7),
  [169] = {.count = 2, .reusable = true}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(8),
  [172] = {.count = 2, .reusable = true}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(9),
  [175] = {.count = 2, .reusable = true}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(10),
  [178] = {.count = 2, .reusable = true}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(11),
  [181] = {.count = 2, .reusable = true}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(12),
  [184] = {.count = 2, .reusable = false}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(3),
  [187] = {.count = 1, .reusable = true}, REDUCE(sym_zero_or_more, 2, .alias_sequence_id = 3),
  [189] = {.count = 1, .reusable = false}, REDUCE(sym_zero_or_more, 2, .alias_sequence_id = 3),
  [191] = {.count = 1, .reusable = true}, REDUCE(sym_optional, 2, .alias_sequence_id = 3),
  [193] = {.count = 1, .reusable = false}, REDUCE(sym_optional, 2, .alias_sequence_id = 3),
  [195] = {.count = 1, .reusable = true}, REDUCE(sym_one_or_more, 2, .alias_sequence_id = 3),
  [197] = {.count = 1, .reusable = false}, REDUCE(sym_one_or_more, 2, .alias_sequence_id = 3),
  [199] = {.count = 1, .reusable = true}, SHIFT(65),
  [201] = {.count = 1, .reusable = true}, SHIFT(66),
  [203] = {.count = 1, .reusable = true}, SHIFT(67),
  [205] = {.count = 1, .reusable = true}, REDUCE(sym_character_class, 3),
  [207] = {.count = 1, .reusable = false}, REDUCE(sym_character_class, 3),
  [209] = {.count = 1, .reusable = false}, SHIFT(68),
  [211] = {.count = 1, .reusable = false}, SHIFT(69),
  [213] = {.count = 1, .reusable = false}, SHIFT(70),
  [215] = {.count = 1, .reusable = true}, SHIFT(71),
  [217] = {.count = 1, .reusable = false}, SHIFT(71),
  [219] = {.count = 1, .reusable = false}, SHIFT(72),
  [221] = {.count = 1, .reusable = false}, SHIFT(73),
  [223] = {.count = 1, .reusable = true}, SHIFT(74),
  [225] = {.count = 1, .reusable = false}, SHIFT(74),
  [227] = {.count = 1, .reusable = false}, SHIFT(75),
  [229] = {.count = 1, .reusable = false}, SHIFT(76),
  [231] = {.count = 1, .reusable = true}, SHIFT(77),
  [233] = {.count = 1, .reusable = false}, SHIFT(77),
  [235] = {.count = 1, .reusable = false}, REDUCE(aux_sym_character_class_repeat1, 2),
  [237] = {.count = 2, .reusable = false}, REDUCE(aux_sym_character_class_repeat1, 2), SHIFT_REPEAT(27),
  [240] = {.count = 2, .reusable = false}, REDUCE(aux_sym_character_class_repeat1, 2), SHIFT_REPEAT(28),
  [243] = {.count = 2, .reusable = true}, REDUCE(aux_sym_character_class_repeat1, 2), SHIFT_REPEAT(29),
  [246] = {.count = 2, .reusable = false}, REDUCE(aux_sym_character_class_repeat1, 2), SHIFT_REPEAT(30),
  [249] = {.count = 2, .reusable = false}, REDUCE(aux_sym_character_class_repeat1, 2), SHIFT_REPEAT(31),
  [252] = {.count = 2, .reusable = false}, REDUCE(aux_sym_character_class_repeat1, 2), SHIFT_REPEAT(29),
  [255] = {.count = 1, .reusable = true}, REDUCE(sym_anonymous_capturing_group, 3),
  [257] = {.count = 1, .reusable = false}, REDUCE(sym_anonymous_capturing_group, 3),
  [259] = {.count = 2, .reusable = true}, REDUCE(aux_sym_disjunction_repeat1, 2), SHIFT_REPEAT(33),
  [262] = {.count = 1, .reusable = true}, REDUCE(sym_non_capturing_group, 3),
  [264] = {.count = 1, .reusable = false}, REDUCE(sym_non_capturing_group, 3),
  [266] = {.count = 1, .reusable = true}, SHIFT(80),
  [268] = {.count = 1, .reusable = true}, REDUCE(sym_unicode_property_value_expression, 1, .alias_sequence_id = 4),
  [270] = {.count = 1, .reusable = true}, SHIFT(81),
  [272] = {.count = 1, .reusable = true}, SHIFT(82),
  [274] = {.count = 1, .reusable = true}, REDUCE(sym_count_quantifier, 3),
  [276] = {.count = 1, .reusable = false}, REDUCE(sym_count_quantifier, 3),
  [278] = {.count = 1, .reusable = true}, SHIFT(83),
  [280] = {.count = 1, .reusable = true}, REDUCE(sym_lookahead_assertion, 4),
  [282] = {.count = 1, .reusable = false}, REDUCE(sym_lookahead_assertion, 4),
  [284] = {.count = 1, .reusable = true}, REDUCE(sym_character_class, 4),
  [286] = {.count = 1, .reusable = false}, REDUCE(sym_character_class, 4),
  [288] = {.count = 1, .reusable = false}, REDUCE(sym_class_range, 3, .alias_sequence_id = 5),
  [290] = {.count = 1, .reusable = true}, REDUCE(sym_class_range, 3, .alias_sequence_id = 5),
  [292] = {.count = 1, .reusable = false}, REDUCE(sym_class_range, 3, .alias_sequence_id = 6),
  [294] = {.count = 1, .reusable = true}, REDUCE(sym_class_range, 3, .alias_sequence_id = 6),
  [296] = {.count = 1, .reusable = false}, REDUCE(sym_class_range, 3, .alias_sequence_id = 1),
  [298] = {.count = 1, .reusable = true}, REDUCE(sym_class_range, 3, .alias_sequence_id = 1),
  [300] = {.count = 1, .reusable = false}, REDUCE(sym_class_range, 3, .alias_sequence_id = 7),
  [302] = {.count = 1, .reusable = true}, REDUCE(sym_class_range, 3, .alias_sequence_id = 7),
  [304] = {.count = 1, .reusable = false}, REDUCE(sym_class_range, 3, .alias_sequence_id = 8),
  [306] = {.count = 1, .reusable = true}, REDUCE(sym_class_range, 3, .alias_sequence_id = 8),
  [308] = {.count = 1, .reusable = false}, REDUCE(sym_class_range, 3, .alias_sequence_id = 2),
  [310] = {.count = 1, .reusable = true}, REDUCE(sym_class_range, 3, .alias_sequence_id = 2),
  [312] = {.count = 1, .reusable = false}, REDUCE(sym_class_range, 3, .alias_sequence_id = 9),
  [314] = {.count = 1, .reusable = true}, REDUCE(sym_class_range, 3, .alias_sequence_id = 9),
  [316] = {.count = 1, .reusable = false}, REDUCE(sym_class_range, 3, .alias_sequence_id = 10),
  [318] = {.count = 1, .reusable = true}, REDUCE(sym_class_range, 3, .alias_sequence_id = 10),
  [320] = {.count = 1, .reusable = false}, REDUCE(sym_class_range, 3),
  [322] = {.count = 1, .reusable = true}, REDUCE(sym_class_range, 3),
  [324] = {.count = 1, .reusable = true}, SHIFT(84),
  [326] = {.count = 1, .reusable = true}, SHIFT(85),
  [328] = {.count = 1, .reusable = true}, SHIFT(86),
  [330] = {.count = 1, .reusable = true}, REDUCE(sym_character_class_escape, 4),
  [332] = {.count = 1, .reusable = false}, REDUCE(sym_character_class_escape, 4),
  [334] = {.count = 1, .reusable = true}, SHIFT(87),
  [336] = {.count = 1, .reusable = true}, REDUCE(sym_count_quantifier, 4, .alias_sequence_id = 11),
  [338] = {.count = 1, .reusable = false}, REDUCE(sym_count_quantifier, 4, .alias_sequence_id = 11),
  [340] = {.count = 1, .reusable = true}, REDUCE(sym_named_capturing_group, 5),
  [342] = {.count = 1, .reusable = false}, REDUCE(sym_named_capturing_group, 5),
  [344] = {.count = 1, .reusable = true}, REDUCE(sym_unicode_property_value_expression, 3, .alias_sequence_id = 12),
  [346] = {.count = 1, .reusable = true}, REDUCE(sym_count_quantifier, 5),
  [348] = {.count = 1, .reusable = false}, REDUCE(sym_count_quantifier, 5),
  [350] = {.count = 1, .reusable = true}, SHIFT(88),
  [352] = {.count = 1, .reusable = true}, REDUCE(sym_count_quantifier, 6, .alias_sequence_id = 13),
  [354] = {.count = 1, .reusable = false}, REDUCE(sym_count_quantifier, 6, .alias_sequence_id = 13),
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
