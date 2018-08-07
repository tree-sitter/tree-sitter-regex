#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 91
#define SYMBOL_COUNT 60
#define ALIAS_COUNT 5
#define TOKEN_COUNT 40
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
  anon_sym_BSLASH = 31,
  aux_sym_SLASH_LBRACKdDsSwW_RBRACK_SLASH = 32,
  aux_sym_SLASH_LBRACKpP_RBRACK_SLASH = 33,
  sym_unicode_property = 34,
  sym_identity_escape = 35,
  sym_control_escape = 36,
  sym_control_letter_escape = 37,
  sym_group_name = 38,
  sym_decimal_digits = 39,
  sym_pattern = 40,
  sym_disjunction = 41,
  sym_term = 42,
  sym_start_assertion = 43,
  sym_lookahead_assertion = 44,
  sym_character_class = 45,
  sym_class_range = 46,
  sym_anonymous_capturing_group = 47,
  sym_named_capturing_group = 48,
  sym_non_capturing_group = 49,
  sym_zero_or_more = 50,
  sym_one_or_more = 51,
  sym_optional = 52,
  sym_count_quantifier = 53,
  sym_backreference_escape = 54,
  sym_character_class_escape = 55,
  sym_unicode_property_value_expression = 56,
  aux_sym_disjunction_repeat1 = 57,
  aux_sym_term_repeat1 = 58,
  aux_sym_character_class_repeat1 = 59,
  alias_sym_class_character = 60,
  alias_sym_identity_escape = 61,
  alias_sym_lazy = 62,
  alias_sym_unicode_property_name = 63,
  alias_sym_unicode_property_value = 64,
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
  [anon_sym_BSLASH] = "\\",
  [aux_sym_SLASH_LBRACKdDsSwW_RBRACK_SLASH] = "/[dDsSwW]/",
  [aux_sym_SLASH_LBRACKpP_RBRACK_SLASH] = "/[pP]/",
  [sym_unicode_property] = "unicode_property",
  [sym_identity_escape] = "identity_escape",
  [sym_control_escape] = "control_escape",
  [sym_control_letter_escape] = "control_letter_escape",
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
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASH_LBRACKdDsSwW_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_LBRACKpP_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [sym_unicode_property] = {
    .visible = true,
    .named = true,
  },
  [sym_identity_escape] = {
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
    [0] = alias_sym_class_character,
    [2] = alias_sym_class_character,
  },
  [5] = {
    [0] = alias_sym_class_character,
    [2] = alias_sym_identity_escape,
  },
  [6] = {
    [0] = alias_sym_identity_escape,
    [2] = alias_sym_class_character,
  },
  [7] = {
    [0] = alias_sym_identity_escape,
    [2] = alias_sym_identity_escape,
  },
  [8] = {
    [2] = alias_sym_class_character,
  },
  [9] = {
    [2] = alias_sym_identity_escape,
  },
  [10] = {
    [0] = alias_sym_unicode_property_value,
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
        ADVANCE(29);
      if (lookahead == '^')
        ADVANCE(30);
      if (lookahead == '{')
        ADVANCE(31);
      if (lookahead == '|')
        ADVANCE(32);
      if (lookahead == '}')
        ADVANCE(33);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(34);
      if (lookahead == 'D' ||
          lookahead == 'S' ||
          lookahead == 'W' ||
          lookahead == 'd' ||
          lookahead == 's' ||
          lookahead == 'w')
        ADVANCE(34);
      ADVANCE(34);
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
      ACCEPT_TOKEN(anon_sym_BSLASH);
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
      if (lookahead == '0' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'v')
        ADVANCE(25);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(26);
      if (lookahead == '$' ||
          ('(' <= lookahead && lookahead <= '+') ||
          lookahead == '.' ||
          lookahead == '?' ||
          ('[' <= lookahead && lookahead <= '^') ||
          ('{' <= lookahead && lookahead <= '}'))
        ADVANCE(28);
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
      ACCEPT_TOKEN(sym_control_escape);
      END_STATE();
    case 26:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(27);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_decimal_escape);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_identity_escape);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_pattern_character);
      END_STATE();
    case 35:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        SKIP(35);
      if (lookahead == '$')
        ADVANCE(3);
      if (lookahead == '(')
        ADVANCE(4);
      if (lookahead == '.')
        ADVANCE(13);
      if (lookahead == '[')
        ADVANCE(17);
      if (lookahead == '\\')
        ADVANCE(36);
      if (lookahead == '^')
        ADVANCE(30);
      if (lookahead == '|')
        ADVANCE(32);
      if ((lookahead < '(' || lookahead > '+') &&
          lookahead != '?' &&
          (lookahead < '[' || lookahead > '^') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(34);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == 'B')
        ADVANCE(20);
      if (lookahead == 'b')
        ADVANCE(21);
      if (lookahead == 'c')
        ADVANCE(22);
      if (lookahead == 'k')
        ADVANCE(24);
      if (lookahead == '0' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'v')
        ADVANCE(25);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(26);
      if (lookahead == '$' ||
          ('(' <= lookahead && lookahead <= '+') ||
          lookahead == '.' ||
          lookahead == '?' ||
          ('[' <= lookahead && lookahead <= '^') ||
          ('{' <= lookahead && lookahead <= '}'))
        ADVANCE(28);
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
        ADVANCE(36);
      if (lookahead == '^')
        ADVANCE(30);
      if (lookahead == '{')
        ADVANCE(31);
      if (lookahead == '|')
        ADVANCE(32);
      if ((lookahead < '[' || lookahead > '^') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(34);
      END_STATE();
    case 38:
      if (lookahead == '\n')
        SKIP(38);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '<')
        ADVANCE(39);
      if (lookahead == '=')
        ADVANCE(14);
      END_STATE();
    case 39:
      if (lookahead == '!')
        ADVANCE(40);
      if (lookahead == '=')
        ADVANCE(41);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_LT_BANG);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 42:
      if (lookahead == '\n')
        ADVANCE(43);
      if (lookahead == '-')
        ADVANCE(12);
      if (lookahead == '\\')
        ADVANCE(44);
      if (lookahead == ']')
        ADVANCE(29);
      if (lookahead == '^')
        ADVANCE(30);
      if (lookahead != 0)
        ADVANCE(43);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_class_character);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(19);
      if (lookahead == 'c')
        ADVANCE(22);
      if (lookahead == '0' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'v')
        ADVANCE(25);
      if (lookahead == '$' ||
          ('(' <= lookahead && lookahead <= '+') ||
          lookahead == '.' ||
          lookahead == '?' ||
          ('[' <= lookahead && lookahead <= '^') ||
          ('{' <= lookahead && lookahead <= '}'))
        ADVANCE(28);
      END_STATE();
    case 45:
      if (lookahead == '\n')
        SKIP(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_group_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 47:
      if (lookahead == '\n')
        SKIP(47);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(48);
      if (lookahead == 'D' ||
          lookahead == 'S' ||
          lookahead == 'W' ||
          lookahead == 'd' ||
          lookahead == 's' ||
          lookahead == 'w')
        ADVANCE(49);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKpP_RBRACK_SLASH);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKdDsSwW_RBRACK_SLASH);
      END_STATE();
    case 50:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        SKIP(50);
      END_STATE();
    case 51:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        SKIP(51);
      if (lookahead == ')')
        ADVANCE(8);
      END_STATE();
    case 52:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        SKIP(52);
      if (lookahead == '|')
        ADVANCE(32);
      END_STATE();
    case 53:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        SKIP(53);
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == '|')
        ADVANCE(32);
      END_STATE();
    case 54:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        SKIP(54);
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
        ADVANCE(36);
      if (lookahead == '^')
        ADVANCE(30);
      if (lookahead == '|')
        ADVANCE(32);
      if ((lookahead < '(' || lookahead > '+') &&
          (lookahead < '[' || lookahead > '^') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(34);
      END_STATE();
    case 55:
      if (lookahead == '\n')
        SKIP(55);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(56);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_decimal_digits);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(56);
      END_STATE();
    case 57:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        SKIP(57);
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
        ADVANCE(36);
      if (lookahead == '^')
        ADVANCE(30);
      if (lookahead == '|')
        ADVANCE(32);
      if ((lookahead < '(' || lookahead > '+') &&
          lookahead != '?' &&
          (lookahead < '[' || lookahead > '^') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(34);
      END_STATE();
    case 58:
      if (lookahead == '\n')
        ADVANCE(43);
      if (lookahead == '-')
        ADVANCE(12);
      if (lookahead == '\\')
        ADVANCE(44);
      if (lookahead == ']')
        ADVANCE(29);
      if (lookahead != 0)
        ADVANCE(43);
      END_STATE();
    case 59:
      if (lookahead == '\n')
        SKIP(59);
      if (lookahead == '>')
        ADVANCE(15);
      END_STATE();
    case 60:
      if (lookahead == '\n')
        SKIP(60);
      if (lookahead == ',')
        ADVANCE(11);
      if (lookahead == '}')
        ADVANCE(33);
      END_STATE();
    case 61:
      if (lookahead == '\n')
        SKIP(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(62);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_unicode_property);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(62);
      END_STATE();
    case 63:
      if (lookahead == '\n')
        SKIP(63);
      if (lookahead == '=')
        ADVANCE(14);
      if (lookahead == '}')
        ADVANCE(33);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 35},
  [2] = {.lex_state = 35},
  [3] = {.lex_state = 37},
  [4] = {.lex_state = 37},
  [5] = {.lex_state = 38},
  [6] = {.lex_state = 42},
  [7] = {.lex_state = 35},
  [8] = {.lex_state = 45},
  [9] = {.lex_state = 35},
  [10] = {.lex_state = 45},
  [11] = {.lex_state = 47},
  [12] = {.lex_state = 50},
  [13] = {.lex_state = 51},
  [14] = {.lex_state = 52},
  [15] = {.lex_state = 52},
  [16] = {.lex_state = 35},
  [17] = {.lex_state = 53},
  [18] = {.lex_state = 54},
  [19] = {.lex_state = 54},
  [20] = {.lex_state = 54},
  [21] = {.lex_state = 55},
  [22] = {.lex_state = 57},
  [23] = {.lex_state = 35},
  [24] = {.lex_state = 58},
  [25] = {.lex_state = 37},
  [26] = {.lex_state = 58},
  [27] = {.lex_state = 58},
  [28] = {.lex_state = 58},
  [29] = {.lex_state = 47},
  [30] = {.lex_state = 58},
  [31] = {.lex_state = 37},
  [32] = {.lex_state = 37},
  [33] = {.lex_state = 37},
  [34] = {.lex_state = 37},
  [35] = {.lex_state = 37},
  [36] = {.lex_state = 59},
  [37] = {.lex_state = 37},
  [38] = {.lex_state = 37},
  [39] = {.lex_state = 37},
  [40] = {.lex_state = 37},
  [41] = {.lex_state = 52},
  [42] = {.lex_state = 52},
  [43] = {.lex_state = 35},
  [44] = {.lex_state = 57},
  [45] = {.lex_state = 57},
  [46] = {.lex_state = 57},
  [47] = {.lex_state = 60},
  [48] = {.lex_state = 37},
  [49] = {.lex_state = 37},
  [50] = {.lex_state = 58},
  [51] = {.lex_state = 58},
  [52] = {.lex_state = 58},
  [53] = {.lex_state = 58},
  [54] = {.lex_state = 58},
  [55] = {.lex_state = 37},
  [56] = {.lex_state = 58},
  [57] = {.lex_state = 37},
  [58] = {.lex_state = 37},
  [59] = {.lex_state = 37},
  [60] = {.lex_state = 37},
  [61] = {.lex_state = 35},
  [62] = {.lex_state = 37},
  [63] = {.lex_state = 61},
  [64] = {.lex_state = 55},
  [65] = {.lex_state = 54},
  [66] = {.lex_state = 37},
  [67] = {.lex_state = 37},
  [68] = {.lex_state = 58},
  [69] = {.lex_state = 58},
  [70] = {.lex_state = 58},
  [71] = {.lex_state = 58},
  [72] = {.lex_state = 58},
  [73] = {.lex_state = 58},
  [74] = {.lex_state = 58},
  [75] = {.lex_state = 58},
  [76] = {.lex_state = 58},
  [77] = {.lex_state = 61},
  [78] = {.lex_state = 37},
  [79] = {.lex_state = 63},
  [80] = {.lex_state = 60},
  [81] = {.lex_state = 60},
  [82] = {.lex_state = 57},
  [83] = {.lex_state = 60},
  [84] = {.lex_state = 37},
  [85] = {.lex_state = 61},
  [86] = {.lex_state = 37},
  [87] = {.lex_state = 54},
  [88] = {.lex_state = 58},
  [89] = {.lex_state = 60},
  [90] = {.lex_state = 57},
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
    [anon_sym_BSLASH] = ACTIONS(3),
    [aux_sym_SLASH_LBRACKdDsSwW_RBRACK_SLASH] = ACTIONS(3),
    [aux_sym_SLASH_LBRACKpP_RBRACK_SLASH] = ACTIONS(3),
    [sym_identity_escape] = ACTIONS(1),
    [sym_control_escape] = ACTIONS(3),
    [sym_control_letter_escape] = ACTIONS(1),
  },
  [1] = {
    [sym_pattern] = STATE(12),
    [sym_disjunction] = STATE(13),
    [sym_term] = STATE(14),
    [sym_start_assertion] = STATE(3),
    [sym_lookahead_assertion] = STATE(3),
    [sym_character_class] = STATE(3),
    [sym_anonymous_capturing_group] = STATE(3),
    [sym_named_capturing_group] = STATE(3),
    [sym_non_capturing_group] = STATE(3),
    [sym_backreference_escape] = STATE(3),
    [sym_character_class_escape] = STATE(3),
    [aux_sym_disjunction_repeat1] = STATE(15),
    [aux_sym_term_repeat1] = STATE(16),
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
    [anon_sym_BSLASH] = ACTIONS(23),
    [sym_identity_escape] = ACTIONS(7),
    [sym_control_escape] = ACTIONS(25),
    [sym_control_letter_escape] = ACTIONS(7),
  },
  [2] = {
    [sym_term] = STATE(17),
    [sym_start_assertion] = STATE(3),
    [sym_lookahead_assertion] = STATE(3),
    [sym_character_class] = STATE(3),
    [sym_anonymous_capturing_group] = STATE(3),
    [sym_named_capturing_group] = STATE(3),
    [sym_non_capturing_group] = STATE(3),
    [sym_backreference_escape] = STATE(3),
    [sym_character_class_escape] = STATE(3),
    [aux_sym_term_repeat1] = STATE(16),
    [ts_builtin_sym_end] = ACTIONS(27),
    [anon_sym_PIPE] = ACTIONS(27),
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
    [anon_sym_BSLASH] = ACTIONS(23),
    [sym_identity_escape] = ACTIONS(7),
    [sym_control_escape] = ACTIONS(25),
    [sym_control_letter_escape] = ACTIONS(7),
  },
  [3] = {
    [sym_zero_or_more] = STATE(22),
    [sym_one_or_more] = STATE(22),
    [sym_optional] = STATE(22),
    [sym_count_quantifier] = STATE(22),
    [ts_builtin_sym_end] = ACTIONS(29),
    [anon_sym_PIPE] = ACTIONS(29),
    [sym_any_character] = ACTIONS(29),
    [anon_sym_CARET] = ACTIONS(29),
    [sym_end_assertion] = ACTIONS(29),
    [sym_boundary_assertion] = ACTIONS(29),
    [sym_non_boundary_assertion] = ACTIONS(29),
    [anon_sym_LPAREN_QMARK] = ACTIONS(31),
    [anon_sym_RPAREN] = ACTIONS(29),
    [sym_pattern_character] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(29),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(29),
    [anon_sym_STAR] = ACTIONS(33),
    [anon_sym_QMARK] = ACTIONS(35),
    [anon_sym_PLUS] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(39),
    [anon_sym_BSLASHk] = ACTIONS(29),
    [sym_decimal_escape] = ACTIONS(29),
    [anon_sym_BSLASH] = ACTIONS(31),
    [sym_identity_escape] = ACTIONS(29),
    [sym_control_escape] = ACTIONS(31),
    [sym_control_letter_escape] = ACTIONS(29),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(41),
    [anon_sym_PIPE] = ACTIONS(41),
    [sym_any_character] = ACTIONS(41),
    [anon_sym_CARET] = ACTIONS(41),
    [sym_end_assertion] = ACTIONS(41),
    [sym_boundary_assertion] = ACTIONS(41),
    [sym_non_boundary_assertion] = ACTIONS(41),
    [anon_sym_LPAREN_QMARK] = ACTIONS(43),
    [anon_sym_RPAREN] = ACTIONS(41),
    [sym_pattern_character] = ACTIONS(41),
    [anon_sym_LBRACK] = ACTIONS(41),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(41),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(41),
    [anon_sym_STAR] = ACTIONS(41),
    [anon_sym_QMARK] = ACTIONS(41),
    [anon_sym_PLUS] = ACTIONS(41),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_BSLASHk] = ACTIONS(41),
    [sym_decimal_escape] = ACTIONS(41),
    [anon_sym_BSLASH] = ACTIONS(43),
    [sym_identity_escape] = ACTIONS(41),
    [sym_control_escape] = ACTIONS(43),
    [sym_control_letter_escape] = ACTIONS(41),
  },
  [5] = {
    [anon_sym_EQ] = ACTIONS(45),
    [anon_sym_BANG] = ACTIONS(45),
    [anon_sym_LT_EQ] = ACTIONS(45),
    [anon_sym_LT_BANG] = ACTIONS(45),
  },
  [6] = {
    [sym_class_range] = STATE(30),
    [sym_character_class_escape] = STATE(28),
    [aux_sym_character_class_repeat1] = STATE(30),
    [anon_sym_CARET] = ACTIONS(47),
    [anon_sym_RBRACK] = ACTIONS(49),
    [anon_sym_DASH] = ACTIONS(51),
    [anon_sym_BSLASH_DASH] = ACTIONS(53),
    [sym_class_character] = ACTIONS(55),
    [anon_sym_BSLASH] = ACTIONS(57),
    [sym_identity_escape] = ACTIONS(55),
    [sym_control_escape] = ACTIONS(55),
    [sym_control_letter_escape] = ACTIONS(55),
  },
  [7] = {
    [sym_pattern] = STATE(32),
    [sym_disjunction] = STATE(13),
    [sym_term] = STATE(33),
    [sym_start_assertion] = STATE(3),
    [sym_lookahead_assertion] = STATE(3),
    [sym_character_class] = STATE(3),
    [sym_anonymous_capturing_group] = STATE(3),
    [sym_named_capturing_group] = STATE(3),
    [sym_non_capturing_group] = STATE(3),
    [sym_backreference_escape] = STATE(3),
    [sym_character_class_escape] = STATE(3),
    [aux_sym_disjunction_repeat1] = STATE(34),
    [aux_sym_term_repeat1] = STATE(35),
    [anon_sym_PIPE] = ACTIONS(59),
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
    [anon_sym_BSLASH] = ACTIONS(23),
    [sym_identity_escape] = ACTIONS(7),
    [sym_control_escape] = ACTIONS(25),
    [sym_control_letter_escape] = ACTIONS(7),
  },
  [8] = {
    [sym_group_name] = ACTIONS(61),
  },
  [9] = {
    [sym_pattern] = STATE(37),
    [sym_disjunction] = STATE(13),
    [sym_term] = STATE(33),
    [sym_start_assertion] = STATE(3),
    [sym_lookahead_assertion] = STATE(3),
    [sym_character_class] = STATE(3),
    [sym_anonymous_capturing_group] = STATE(3),
    [sym_named_capturing_group] = STATE(3),
    [sym_non_capturing_group] = STATE(3),
    [sym_backreference_escape] = STATE(3),
    [sym_character_class_escape] = STATE(3),
    [aux_sym_disjunction_repeat1] = STATE(34),
    [aux_sym_term_repeat1] = STATE(35),
    [anon_sym_PIPE] = ACTIONS(59),
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
    [anon_sym_BSLASH] = ACTIONS(23),
    [sym_identity_escape] = ACTIONS(7),
    [sym_control_escape] = ACTIONS(25),
    [sym_control_letter_escape] = ACTIONS(7),
  },
  [10] = {
    [sym_group_name] = ACTIONS(63),
  },
  [11] = {
    [aux_sym_SLASH_LBRACKdDsSwW_RBRACK_SLASH] = ACTIONS(65),
    [aux_sym_SLASH_LBRACKpP_RBRACK_SLASH] = ACTIONS(67),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(69),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(71),
    [anon_sym_RPAREN] = ACTIONS(71),
  },
  [14] = {
    [aux_sym_disjunction_repeat1] = STATE(41),
    [ts_builtin_sym_end] = ACTIONS(71),
    [anon_sym_PIPE] = ACTIONS(5),
  },
  [15] = {
    [aux_sym_disjunction_repeat1] = STATE(42),
    [ts_builtin_sym_end] = ACTIONS(73),
    [anon_sym_PIPE] = ACTIONS(5),
  },
  [16] = {
    [sym_start_assertion] = STATE(3),
    [sym_lookahead_assertion] = STATE(3),
    [sym_character_class] = STATE(3),
    [sym_anonymous_capturing_group] = STATE(3),
    [sym_named_capturing_group] = STATE(3),
    [sym_non_capturing_group] = STATE(3),
    [sym_backreference_escape] = STATE(3),
    [sym_character_class_escape] = STATE(3),
    [aux_sym_term_repeat1] = STATE(43),
    [ts_builtin_sym_end] = ACTIONS(75),
    [anon_sym_PIPE] = ACTIONS(75),
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
    [anon_sym_BSLASH] = ACTIONS(23),
    [sym_identity_escape] = ACTIONS(7),
    [sym_control_escape] = ACTIONS(25),
    [sym_control_letter_escape] = ACTIONS(7),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(77),
    [anon_sym_PIPE] = ACTIONS(77),
    [anon_sym_RPAREN] = ACTIONS(77),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(79),
    [anon_sym_PIPE] = ACTIONS(79),
    [sym_any_character] = ACTIONS(79),
    [anon_sym_CARET] = ACTIONS(79),
    [sym_end_assertion] = ACTIONS(79),
    [sym_boundary_assertion] = ACTIONS(79),
    [sym_non_boundary_assertion] = ACTIONS(79),
    [anon_sym_LPAREN_QMARK] = ACTIONS(81),
    [anon_sym_RPAREN] = ACTIONS(79),
    [sym_pattern_character] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(79),
    [anon_sym_LPAREN] = ACTIONS(81),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(79),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(79),
    [anon_sym_QMARK] = ACTIONS(83),
    [anon_sym_BSLASHk] = ACTIONS(79),
    [sym_decimal_escape] = ACTIONS(79),
    [anon_sym_BSLASH] = ACTIONS(81),
    [sym_identity_escape] = ACTIONS(79),
    [sym_control_escape] = ACTIONS(81),
    [sym_control_letter_escape] = ACTIONS(79),
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
    [anon_sym_BSLASH] = ACTIONS(87),
    [sym_identity_escape] = ACTIONS(85),
    [sym_control_escape] = ACTIONS(87),
    [sym_control_letter_escape] = ACTIONS(85),
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
    [anon_sym_BSLASH] = ACTIONS(93),
    [sym_identity_escape] = ACTIONS(91),
    [sym_control_escape] = ACTIONS(93),
    [sym_control_letter_escape] = ACTIONS(91),
  },
  [21] = {
    [sym_decimal_digits] = ACTIONS(97),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(99),
    [anon_sym_PIPE] = ACTIONS(99),
    [sym_any_character] = ACTIONS(99),
    [anon_sym_CARET] = ACTIONS(99),
    [sym_end_assertion] = ACTIONS(99),
    [sym_boundary_assertion] = ACTIONS(99),
    [sym_non_boundary_assertion] = ACTIONS(99),
    [anon_sym_LPAREN_QMARK] = ACTIONS(101),
    [anon_sym_RPAREN] = ACTIONS(99),
    [sym_pattern_character] = ACTIONS(99),
    [anon_sym_LBRACK] = ACTIONS(99),
    [anon_sym_LPAREN] = ACTIONS(101),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(99),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(99),
    [anon_sym_BSLASHk] = ACTIONS(99),
    [sym_decimal_escape] = ACTIONS(99),
    [anon_sym_BSLASH] = ACTIONS(101),
    [sym_identity_escape] = ACTIONS(99),
    [sym_control_escape] = ACTIONS(101),
    [sym_control_letter_escape] = ACTIONS(99),
  },
  [23] = {
    [sym_pattern] = STATE(48),
    [sym_disjunction] = STATE(13),
    [sym_term] = STATE(33),
    [sym_start_assertion] = STATE(3),
    [sym_lookahead_assertion] = STATE(3),
    [sym_character_class] = STATE(3),
    [sym_anonymous_capturing_group] = STATE(3),
    [sym_named_capturing_group] = STATE(3),
    [sym_non_capturing_group] = STATE(3),
    [sym_backreference_escape] = STATE(3),
    [sym_character_class_escape] = STATE(3),
    [aux_sym_disjunction_repeat1] = STATE(34),
    [aux_sym_term_repeat1] = STATE(35),
    [anon_sym_PIPE] = ACTIONS(59),
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
    [anon_sym_BSLASH] = ACTIONS(23),
    [sym_identity_escape] = ACTIONS(7),
    [sym_control_escape] = ACTIONS(25),
    [sym_control_letter_escape] = ACTIONS(7),
  },
  [24] = {
    [sym_class_range] = STATE(50),
    [sym_character_class_escape] = STATE(28),
    [aux_sym_character_class_repeat1] = STATE(50),
    [anon_sym_RBRACK] = ACTIONS(103),
    [anon_sym_DASH] = ACTIONS(51),
    [anon_sym_BSLASH_DASH] = ACTIONS(53),
    [sym_class_character] = ACTIONS(105),
    [anon_sym_BSLASH] = ACTIONS(57),
    [sym_identity_escape] = ACTIONS(55),
    [sym_control_escape] = ACTIONS(55),
    [sym_control_letter_escape] = ACTIONS(55),
  },
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(107),
    [anon_sym_PIPE] = ACTIONS(107),
    [sym_any_character] = ACTIONS(107),
    [anon_sym_CARET] = ACTIONS(107),
    [sym_end_assertion] = ACTIONS(107),
    [sym_boundary_assertion] = ACTIONS(107),
    [sym_non_boundary_assertion] = ACTIONS(107),
    [anon_sym_LPAREN_QMARK] = ACTIONS(109),
    [anon_sym_RPAREN] = ACTIONS(107),
    [sym_pattern_character] = ACTIONS(107),
    [anon_sym_LBRACK] = ACTIONS(107),
    [anon_sym_LPAREN] = ACTIONS(109),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(107),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(107),
    [anon_sym_STAR] = ACTIONS(107),
    [anon_sym_QMARK] = ACTIONS(107),
    [anon_sym_PLUS] = ACTIONS(107),
    [anon_sym_LBRACE] = ACTIONS(107),
    [anon_sym_BSLASHk] = ACTIONS(107),
    [sym_decimal_escape] = ACTIONS(107),
    [anon_sym_BSLASH] = ACTIONS(109),
    [sym_identity_escape] = ACTIONS(107),
    [sym_control_escape] = ACTIONS(109),
    [sym_control_letter_escape] = ACTIONS(107),
  },
  [26] = {
    [anon_sym_RBRACK] = ACTIONS(111),
    [anon_sym_DASH] = ACTIONS(113),
    [anon_sym_BSLASH_DASH] = ACTIONS(111),
    [sym_class_character] = ACTIONS(115),
    [anon_sym_BSLASH] = ACTIONS(111),
    [sym_identity_escape] = ACTIONS(111),
    [sym_control_escape] = ACTIONS(111),
    [sym_control_letter_escape] = ACTIONS(111),
  },
  [27] = {
    [anon_sym_RBRACK] = ACTIONS(117),
    [anon_sym_DASH] = ACTIONS(119),
    [anon_sym_BSLASH_DASH] = ACTIONS(117),
    [sym_class_character] = ACTIONS(121),
    [anon_sym_BSLASH] = ACTIONS(117),
    [sym_identity_escape] = ACTIONS(117),
    [sym_control_escape] = ACTIONS(117),
    [sym_control_letter_escape] = ACTIONS(117),
  },
  [28] = {
    [anon_sym_RBRACK] = ACTIONS(123),
    [anon_sym_DASH] = ACTIONS(125),
    [anon_sym_BSLASH_DASH] = ACTIONS(123),
    [sym_class_character] = ACTIONS(127),
    [anon_sym_BSLASH] = ACTIONS(123),
    [sym_identity_escape] = ACTIONS(123),
    [sym_control_escape] = ACTIONS(123),
    [sym_control_letter_escape] = ACTIONS(123),
  },
  [29] = {
    [aux_sym_SLASH_LBRACKdDsSwW_RBRACK_SLASH] = ACTIONS(129),
    [aux_sym_SLASH_LBRACKpP_RBRACK_SLASH] = ACTIONS(131),
  },
  [30] = {
    [sym_class_range] = STATE(56),
    [sym_character_class_escape] = STATE(28),
    [aux_sym_character_class_repeat1] = STATE(56),
    [anon_sym_RBRACK] = ACTIONS(103),
    [anon_sym_DASH] = ACTIONS(51),
    [anon_sym_BSLASH_DASH] = ACTIONS(53),
    [sym_class_character] = ACTIONS(105),
    [anon_sym_BSLASH] = ACTIONS(57),
    [sym_identity_escape] = ACTIONS(55),
    [sym_control_escape] = ACTIONS(55),
    [sym_control_letter_escape] = ACTIONS(55),
  },
  [31] = {
    [sym_term] = STATE(17),
    [sym_start_assertion] = STATE(3),
    [sym_lookahead_assertion] = STATE(3),
    [sym_character_class] = STATE(3),
    [sym_anonymous_capturing_group] = STATE(3),
    [sym_named_capturing_group] = STATE(3),
    [sym_non_capturing_group] = STATE(3),
    [sym_backreference_escape] = STATE(3),
    [sym_character_class_escape] = STATE(3),
    [aux_sym_term_repeat1] = STATE(35),
    [anon_sym_PIPE] = ACTIONS(27),
    [sym_any_character] = ACTIONS(7),
    [anon_sym_CARET] = ACTIONS(9),
    [sym_end_assertion] = ACTIONS(7),
    [sym_boundary_assertion] = ACTIONS(7),
    [sym_non_boundary_assertion] = ACTIONS(7),
    [anon_sym_LPAREN_QMARK] = ACTIONS(11),
    [anon_sym_RPAREN] = ACTIONS(27),
    [sym_pattern_character] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(17),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(19),
    [anon_sym_BSLASHk] = ACTIONS(21),
    [sym_decimal_escape] = ACTIONS(7),
    [anon_sym_BSLASH] = ACTIONS(23),
    [sym_identity_escape] = ACTIONS(7),
    [sym_control_escape] = ACTIONS(25),
    [sym_control_letter_escape] = ACTIONS(7),
  },
  [32] = {
    [anon_sym_RPAREN] = ACTIONS(133),
  },
  [33] = {
    [aux_sym_disjunction_repeat1] = STATE(58),
    [anon_sym_PIPE] = ACTIONS(59),
    [anon_sym_RPAREN] = ACTIONS(71),
  },
  [34] = {
    [aux_sym_disjunction_repeat1] = STATE(59),
    [anon_sym_PIPE] = ACTIONS(59),
    [anon_sym_RPAREN] = ACTIONS(73),
  },
  [35] = {
    [sym_start_assertion] = STATE(3),
    [sym_lookahead_assertion] = STATE(3),
    [sym_character_class] = STATE(3),
    [sym_anonymous_capturing_group] = STATE(3),
    [sym_named_capturing_group] = STATE(3),
    [sym_non_capturing_group] = STATE(3),
    [sym_backreference_escape] = STATE(3),
    [sym_character_class_escape] = STATE(3),
    [aux_sym_term_repeat1] = STATE(60),
    [anon_sym_PIPE] = ACTIONS(75),
    [sym_any_character] = ACTIONS(7),
    [anon_sym_CARET] = ACTIONS(9),
    [sym_end_assertion] = ACTIONS(7),
    [sym_boundary_assertion] = ACTIONS(7),
    [sym_non_boundary_assertion] = ACTIONS(7),
    [anon_sym_LPAREN_QMARK] = ACTIONS(11),
    [anon_sym_RPAREN] = ACTIONS(75),
    [sym_pattern_character] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(17),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(19),
    [anon_sym_BSLASHk] = ACTIONS(21),
    [sym_decimal_escape] = ACTIONS(7),
    [anon_sym_BSLASH] = ACTIONS(23),
    [sym_identity_escape] = ACTIONS(7),
    [sym_control_escape] = ACTIONS(25),
    [sym_control_letter_escape] = ACTIONS(7),
  },
  [36] = {
    [anon_sym_GT] = ACTIONS(135),
  },
  [37] = {
    [anon_sym_RPAREN] = ACTIONS(137),
  },
  [38] = {
    [ts_builtin_sym_end] = ACTIONS(139),
    [anon_sym_PIPE] = ACTIONS(139),
    [sym_any_character] = ACTIONS(139),
    [anon_sym_CARET] = ACTIONS(139),
    [sym_end_assertion] = ACTIONS(139),
    [sym_boundary_assertion] = ACTIONS(139),
    [sym_non_boundary_assertion] = ACTIONS(139),
    [anon_sym_LPAREN_QMARK] = ACTIONS(141),
    [anon_sym_RPAREN] = ACTIONS(139),
    [sym_pattern_character] = ACTIONS(139),
    [anon_sym_LBRACK] = ACTIONS(139),
    [anon_sym_LPAREN] = ACTIONS(141),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(139),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(139),
    [anon_sym_STAR] = ACTIONS(139),
    [anon_sym_QMARK] = ACTIONS(139),
    [anon_sym_PLUS] = ACTIONS(139),
    [anon_sym_LBRACE] = ACTIONS(139),
    [anon_sym_BSLASHk] = ACTIONS(139),
    [sym_decimal_escape] = ACTIONS(139),
    [anon_sym_BSLASH] = ACTIONS(141),
    [sym_identity_escape] = ACTIONS(139),
    [sym_control_escape] = ACTIONS(141),
    [sym_control_letter_escape] = ACTIONS(139),
  },
  [39] = {
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
    [anon_sym_BSLASH] = ACTIONS(145),
    [sym_identity_escape] = ACTIONS(143),
    [sym_control_escape] = ACTIONS(145),
    [sym_control_letter_escape] = ACTIONS(143),
  },
  [40] = {
    [anon_sym_LBRACE] = ACTIONS(147),
  },
  [41] = {
    [aux_sym_disjunction_repeat1] = STATE(42),
    [ts_builtin_sym_end] = ACTIONS(149),
    [anon_sym_PIPE] = ACTIONS(5),
  },
  [42] = {
    [aux_sym_disjunction_repeat1] = STATE(42),
    [ts_builtin_sym_end] = ACTIONS(77),
    [anon_sym_PIPE] = ACTIONS(151),
  },
  [43] = {
    [sym_start_assertion] = STATE(3),
    [sym_lookahead_assertion] = STATE(3),
    [sym_character_class] = STATE(3),
    [sym_anonymous_capturing_group] = STATE(3),
    [sym_named_capturing_group] = STATE(3),
    [sym_non_capturing_group] = STATE(3),
    [sym_backreference_escape] = STATE(3),
    [sym_character_class_escape] = STATE(3),
    [aux_sym_term_repeat1] = STATE(43),
    [ts_builtin_sym_end] = ACTIONS(99),
    [anon_sym_PIPE] = ACTIONS(99),
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
    [anon_sym_BSLASH] = ACTIONS(178),
    [sym_identity_escape] = ACTIONS(154),
    [sym_control_escape] = ACTIONS(181),
    [sym_control_letter_escape] = ACTIONS(154),
  },
  [44] = {
    [ts_builtin_sym_end] = ACTIONS(184),
    [anon_sym_PIPE] = ACTIONS(184),
    [sym_any_character] = ACTIONS(184),
    [anon_sym_CARET] = ACTIONS(184),
    [sym_end_assertion] = ACTIONS(184),
    [sym_boundary_assertion] = ACTIONS(184),
    [sym_non_boundary_assertion] = ACTIONS(184),
    [anon_sym_LPAREN_QMARK] = ACTIONS(186),
    [anon_sym_RPAREN] = ACTIONS(184),
    [sym_pattern_character] = ACTIONS(184),
    [anon_sym_LBRACK] = ACTIONS(184),
    [anon_sym_LPAREN] = ACTIONS(186),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(184),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(184),
    [anon_sym_BSLASHk] = ACTIONS(184),
    [sym_decimal_escape] = ACTIONS(184),
    [anon_sym_BSLASH] = ACTIONS(186),
    [sym_identity_escape] = ACTIONS(184),
    [sym_control_escape] = ACTIONS(186),
    [sym_control_letter_escape] = ACTIONS(184),
  },
  [45] = {
    [ts_builtin_sym_end] = ACTIONS(188),
    [anon_sym_PIPE] = ACTIONS(188),
    [sym_any_character] = ACTIONS(188),
    [anon_sym_CARET] = ACTIONS(188),
    [sym_end_assertion] = ACTIONS(188),
    [sym_boundary_assertion] = ACTIONS(188),
    [sym_non_boundary_assertion] = ACTIONS(188),
    [anon_sym_LPAREN_QMARK] = ACTIONS(190),
    [anon_sym_RPAREN] = ACTIONS(188),
    [sym_pattern_character] = ACTIONS(188),
    [anon_sym_LBRACK] = ACTIONS(188),
    [anon_sym_LPAREN] = ACTIONS(190),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(188),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(188),
    [anon_sym_BSLASHk] = ACTIONS(188),
    [sym_decimal_escape] = ACTIONS(188),
    [anon_sym_BSLASH] = ACTIONS(190),
    [sym_identity_escape] = ACTIONS(188),
    [sym_control_escape] = ACTIONS(190),
    [sym_control_letter_escape] = ACTIONS(188),
  },
  [46] = {
    [ts_builtin_sym_end] = ACTIONS(192),
    [anon_sym_PIPE] = ACTIONS(192),
    [sym_any_character] = ACTIONS(192),
    [anon_sym_CARET] = ACTIONS(192),
    [sym_end_assertion] = ACTIONS(192),
    [sym_boundary_assertion] = ACTIONS(192),
    [sym_non_boundary_assertion] = ACTIONS(192),
    [anon_sym_LPAREN_QMARK] = ACTIONS(194),
    [anon_sym_RPAREN] = ACTIONS(192),
    [sym_pattern_character] = ACTIONS(192),
    [anon_sym_LBRACK] = ACTIONS(192),
    [anon_sym_LPAREN] = ACTIONS(194),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(192),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(192),
    [anon_sym_BSLASHk] = ACTIONS(192),
    [sym_decimal_escape] = ACTIONS(192),
    [anon_sym_BSLASH] = ACTIONS(194),
    [sym_identity_escape] = ACTIONS(192),
    [sym_control_escape] = ACTIONS(194),
    [sym_control_letter_escape] = ACTIONS(192),
  },
  [47] = {
    [anon_sym_COMMA] = ACTIONS(196),
    [anon_sym_RBRACE] = ACTIONS(198),
  },
  [48] = {
    [anon_sym_RPAREN] = ACTIONS(200),
  },
  [49] = {
    [ts_builtin_sym_end] = ACTIONS(202),
    [anon_sym_PIPE] = ACTIONS(202),
    [sym_any_character] = ACTIONS(202),
    [anon_sym_CARET] = ACTIONS(202),
    [sym_end_assertion] = ACTIONS(202),
    [sym_boundary_assertion] = ACTIONS(202),
    [sym_non_boundary_assertion] = ACTIONS(202),
    [anon_sym_LPAREN_QMARK] = ACTIONS(204),
    [anon_sym_RPAREN] = ACTIONS(202),
    [sym_pattern_character] = ACTIONS(202),
    [anon_sym_LBRACK] = ACTIONS(202),
    [anon_sym_LPAREN] = ACTIONS(204),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(202),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(202),
    [anon_sym_STAR] = ACTIONS(202),
    [anon_sym_QMARK] = ACTIONS(202),
    [anon_sym_PLUS] = ACTIONS(202),
    [anon_sym_LBRACE] = ACTIONS(202),
    [anon_sym_BSLASHk] = ACTIONS(202),
    [sym_decimal_escape] = ACTIONS(202),
    [anon_sym_BSLASH] = ACTIONS(204),
    [sym_identity_escape] = ACTIONS(202),
    [sym_control_escape] = ACTIONS(204),
    [sym_control_letter_escape] = ACTIONS(202),
  },
  [50] = {
    [sym_class_range] = STATE(56),
    [sym_character_class_escape] = STATE(28),
    [aux_sym_character_class_repeat1] = STATE(56),
    [anon_sym_RBRACK] = ACTIONS(206),
    [anon_sym_DASH] = ACTIONS(51),
    [anon_sym_BSLASH_DASH] = ACTIONS(53),
    [sym_class_character] = ACTIONS(105),
    [anon_sym_BSLASH] = ACTIONS(57),
    [sym_identity_escape] = ACTIONS(55),
    [sym_control_escape] = ACTIONS(55),
    [sym_control_letter_escape] = ACTIONS(55),
  },
  [51] = {
    [sym_character_class_escape] = STATE(70),
    [anon_sym_DASH] = ACTIONS(208),
    [anon_sym_BSLASH_DASH] = ACTIONS(210),
    [sym_class_character] = ACTIONS(212),
    [anon_sym_BSLASH] = ACTIONS(57),
    [sym_identity_escape] = ACTIONS(214),
    [sym_control_escape] = ACTIONS(214),
    [sym_control_letter_escape] = ACTIONS(214),
  },
  [52] = {
    [sym_character_class_escape] = STATE(73),
    [anon_sym_DASH] = ACTIONS(216),
    [anon_sym_BSLASH_DASH] = ACTIONS(218),
    [sym_class_character] = ACTIONS(220),
    [anon_sym_BSLASH] = ACTIONS(57),
    [sym_identity_escape] = ACTIONS(222),
    [sym_control_escape] = ACTIONS(222),
    [sym_control_letter_escape] = ACTIONS(222),
  },
  [53] = {
    [sym_character_class_escape] = STATE(76),
    [anon_sym_DASH] = ACTIONS(224),
    [anon_sym_BSLASH_DASH] = ACTIONS(226),
    [sym_class_character] = ACTIONS(228),
    [anon_sym_BSLASH] = ACTIONS(57),
    [sym_identity_escape] = ACTIONS(230),
    [sym_control_escape] = ACTIONS(230),
    [sym_control_letter_escape] = ACTIONS(230),
  },
  [54] = {
    [anon_sym_RBRACK] = ACTIONS(145),
    [anon_sym_DASH] = ACTIONS(145),
    [anon_sym_BSLASH_DASH] = ACTIONS(145),
    [sym_class_character] = ACTIONS(143),
    [anon_sym_BSLASH] = ACTIONS(145),
    [sym_identity_escape] = ACTIONS(145),
    [sym_control_escape] = ACTIONS(145),
    [sym_control_letter_escape] = ACTIONS(145),
  },
  [55] = {
    [anon_sym_LBRACE] = ACTIONS(232),
  },
  [56] = {
    [sym_class_range] = STATE(56),
    [sym_character_class_escape] = STATE(28),
    [aux_sym_character_class_repeat1] = STATE(56),
    [anon_sym_RBRACK] = ACTIONS(234),
    [anon_sym_DASH] = ACTIONS(236),
    [anon_sym_BSLASH_DASH] = ACTIONS(239),
    [sym_class_character] = ACTIONS(242),
    [anon_sym_BSLASH] = ACTIONS(245),
    [sym_identity_escape] = ACTIONS(248),
    [sym_control_escape] = ACTIONS(248),
    [sym_control_letter_escape] = ACTIONS(248),
  },
  [57] = {
    [ts_builtin_sym_end] = ACTIONS(251),
    [anon_sym_PIPE] = ACTIONS(251),
    [sym_any_character] = ACTIONS(251),
    [anon_sym_CARET] = ACTIONS(251),
    [sym_end_assertion] = ACTIONS(251),
    [sym_boundary_assertion] = ACTIONS(251),
    [sym_non_boundary_assertion] = ACTIONS(251),
    [anon_sym_LPAREN_QMARK] = ACTIONS(253),
    [anon_sym_RPAREN] = ACTIONS(251),
    [sym_pattern_character] = ACTIONS(251),
    [anon_sym_LBRACK] = ACTIONS(251),
    [anon_sym_LPAREN] = ACTIONS(253),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(251),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(251),
    [anon_sym_STAR] = ACTIONS(251),
    [anon_sym_QMARK] = ACTIONS(251),
    [anon_sym_PLUS] = ACTIONS(251),
    [anon_sym_LBRACE] = ACTIONS(251),
    [anon_sym_BSLASHk] = ACTIONS(251),
    [sym_decimal_escape] = ACTIONS(251),
    [anon_sym_BSLASH] = ACTIONS(253),
    [sym_identity_escape] = ACTIONS(251),
    [sym_control_escape] = ACTIONS(253),
    [sym_control_letter_escape] = ACTIONS(251),
  },
  [58] = {
    [aux_sym_disjunction_repeat1] = STATE(59),
    [anon_sym_PIPE] = ACTIONS(59),
    [anon_sym_RPAREN] = ACTIONS(149),
  },
  [59] = {
    [aux_sym_disjunction_repeat1] = STATE(59),
    [anon_sym_PIPE] = ACTIONS(255),
    [anon_sym_RPAREN] = ACTIONS(77),
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
    [anon_sym_PIPE] = ACTIONS(99),
    [sym_any_character] = ACTIONS(154),
    [anon_sym_CARET] = ACTIONS(157),
    [sym_end_assertion] = ACTIONS(154),
    [sym_boundary_assertion] = ACTIONS(154),
    [sym_non_boundary_assertion] = ACTIONS(154),
    [anon_sym_LPAREN_QMARK] = ACTIONS(160),
    [anon_sym_RPAREN] = ACTIONS(99),
    [sym_pattern_character] = ACTIONS(154),
    [anon_sym_LBRACK] = ACTIONS(163),
    [anon_sym_LPAREN] = ACTIONS(166),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(169),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(172),
    [anon_sym_BSLASHk] = ACTIONS(175),
    [sym_decimal_escape] = ACTIONS(154),
    [anon_sym_BSLASH] = ACTIONS(178),
    [sym_identity_escape] = ACTIONS(154),
    [sym_control_escape] = ACTIONS(181),
    [sym_control_letter_escape] = ACTIONS(154),
  },
  [61] = {
    [sym_pattern] = STATE(78),
    [sym_disjunction] = STATE(13),
    [sym_term] = STATE(33),
    [sym_start_assertion] = STATE(3),
    [sym_lookahead_assertion] = STATE(3),
    [sym_character_class] = STATE(3),
    [sym_anonymous_capturing_group] = STATE(3),
    [sym_named_capturing_group] = STATE(3),
    [sym_non_capturing_group] = STATE(3),
    [sym_backreference_escape] = STATE(3),
    [sym_character_class_escape] = STATE(3),
    [aux_sym_disjunction_repeat1] = STATE(34),
    [aux_sym_term_repeat1] = STATE(35),
    [anon_sym_PIPE] = ACTIONS(59),
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
    [anon_sym_BSLASH] = ACTIONS(23),
    [sym_identity_escape] = ACTIONS(7),
    [sym_control_escape] = ACTIONS(25),
    [sym_control_letter_escape] = ACTIONS(7),
  },
  [62] = {
    [ts_builtin_sym_end] = ACTIONS(258),
    [anon_sym_PIPE] = ACTIONS(258),
    [sym_any_character] = ACTIONS(258),
    [anon_sym_CARET] = ACTIONS(258),
    [sym_end_assertion] = ACTIONS(258),
    [sym_boundary_assertion] = ACTIONS(258),
    [sym_non_boundary_assertion] = ACTIONS(258),
    [anon_sym_LPAREN_QMARK] = ACTIONS(260),
    [anon_sym_RPAREN] = ACTIONS(258),
    [sym_pattern_character] = ACTIONS(258),
    [anon_sym_LBRACK] = ACTIONS(258),
    [anon_sym_LPAREN] = ACTIONS(260),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(258),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(258),
    [anon_sym_STAR] = ACTIONS(258),
    [anon_sym_QMARK] = ACTIONS(258),
    [anon_sym_PLUS] = ACTIONS(258),
    [anon_sym_LBRACE] = ACTIONS(258),
    [anon_sym_BSLASHk] = ACTIONS(258),
    [sym_decimal_escape] = ACTIONS(258),
    [anon_sym_BSLASH] = ACTIONS(260),
    [sym_identity_escape] = ACTIONS(258),
    [sym_control_escape] = ACTIONS(260),
    [sym_control_letter_escape] = ACTIONS(258),
  },
  [63] = {
    [sym_unicode_property_value_expression] = STATE(80),
    [sym_unicode_property] = ACTIONS(262),
  },
  [64] = {
    [sym_decimal_digits] = ACTIONS(264),
  },
  [65] = {
    [ts_builtin_sym_end] = ACTIONS(266),
    [anon_sym_PIPE] = ACTIONS(266),
    [sym_any_character] = ACTIONS(266),
    [anon_sym_CARET] = ACTIONS(266),
    [sym_end_assertion] = ACTIONS(266),
    [sym_boundary_assertion] = ACTIONS(266),
    [sym_non_boundary_assertion] = ACTIONS(266),
    [anon_sym_LPAREN_QMARK] = ACTIONS(268),
    [anon_sym_RPAREN] = ACTIONS(266),
    [sym_pattern_character] = ACTIONS(266),
    [anon_sym_LBRACK] = ACTIONS(266),
    [anon_sym_LPAREN] = ACTIONS(268),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(266),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(266),
    [anon_sym_QMARK] = ACTIONS(270),
    [anon_sym_BSLASHk] = ACTIONS(266),
    [sym_decimal_escape] = ACTIONS(266),
    [anon_sym_BSLASH] = ACTIONS(268),
    [sym_identity_escape] = ACTIONS(266),
    [sym_control_escape] = ACTIONS(268),
    [sym_control_letter_escape] = ACTIONS(266),
  },
  [66] = {
    [ts_builtin_sym_end] = ACTIONS(272),
    [anon_sym_PIPE] = ACTIONS(272),
    [sym_any_character] = ACTIONS(272),
    [anon_sym_CARET] = ACTIONS(272),
    [sym_end_assertion] = ACTIONS(272),
    [sym_boundary_assertion] = ACTIONS(272),
    [sym_non_boundary_assertion] = ACTIONS(272),
    [anon_sym_LPAREN_QMARK] = ACTIONS(274),
    [anon_sym_RPAREN] = ACTIONS(272),
    [sym_pattern_character] = ACTIONS(272),
    [anon_sym_LBRACK] = ACTIONS(272),
    [anon_sym_LPAREN] = ACTIONS(274),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(272),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(272),
    [anon_sym_STAR] = ACTIONS(272),
    [anon_sym_QMARK] = ACTIONS(272),
    [anon_sym_PLUS] = ACTIONS(272),
    [anon_sym_LBRACE] = ACTIONS(272),
    [anon_sym_BSLASHk] = ACTIONS(272),
    [sym_decimal_escape] = ACTIONS(272),
    [anon_sym_BSLASH] = ACTIONS(274),
    [sym_identity_escape] = ACTIONS(272),
    [sym_control_escape] = ACTIONS(274),
    [sym_control_letter_escape] = ACTIONS(272),
  },
  [67] = {
    [ts_builtin_sym_end] = ACTIONS(276),
    [anon_sym_PIPE] = ACTIONS(276),
    [sym_any_character] = ACTIONS(276),
    [anon_sym_CARET] = ACTIONS(276),
    [sym_end_assertion] = ACTIONS(276),
    [sym_boundary_assertion] = ACTIONS(276),
    [sym_non_boundary_assertion] = ACTIONS(276),
    [anon_sym_LPAREN_QMARK] = ACTIONS(278),
    [anon_sym_RPAREN] = ACTIONS(276),
    [sym_pattern_character] = ACTIONS(276),
    [anon_sym_LBRACK] = ACTIONS(276),
    [anon_sym_LPAREN] = ACTIONS(278),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(276),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(276),
    [anon_sym_STAR] = ACTIONS(276),
    [anon_sym_QMARK] = ACTIONS(276),
    [anon_sym_PLUS] = ACTIONS(276),
    [anon_sym_LBRACE] = ACTIONS(276),
    [anon_sym_BSLASHk] = ACTIONS(276),
    [sym_decimal_escape] = ACTIONS(276),
    [anon_sym_BSLASH] = ACTIONS(278),
    [sym_identity_escape] = ACTIONS(276),
    [sym_control_escape] = ACTIONS(278),
    [sym_control_letter_escape] = ACTIONS(276),
  },
  [68] = {
    [anon_sym_RBRACK] = ACTIONS(280),
    [anon_sym_DASH] = ACTIONS(280),
    [anon_sym_BSLASH_DASH] = ACTIONS(280),
    [sym_class_character] = ACTIONS(282),
    [anon_sym_BSLASH] = ACTIONS(280),
    [sym_identity_escape] = ACTIONS(280),
    [sym_control_escape] = ACTIONS(280),
    [sym_control_letter_escape] = ACTIONS(280),
  },
  [69] = {
    [anon_sym_RBRACK] = ACTIONS(284),
    [anon_sym_DASH] = ACTIONS(284),
    [anon_sym_BSLASH_DASH] = ACTIONS(284),
    [sym_class_character] = ACTIONS(286),
    [anon_sym_BSLASH] = ACTIONS(284),
    [sym_identity_escape] = ACTIONS(284),
    [sym_control_escape] = ACTIONS(284),
    [sym_control_letter_escape] = ACTIONS(284),
  },
  [70] = {
    [anon_sym_RBRACK] = ACTIONS(288),
    [anon_sym_DASH] = ACTIONS(288),
    [anon_sym_BSLASH_DASH] = ACTIONS(288),
    [sym_class_character] = ACTIONS(290),
    [anon_sym_BSLASH] = ACTIONS(288),
    [sym_identity_escape] = ACTIONS(288),
    [sym_control_escape] = ACTIONS(288),
    [sym_control_letter_escape] = ACTIONS(288),
  },
  [71] = {
    [anon_sym_RBRACK] = ACTIONS(292),
    [anon_sym_DASH] = ACTIONS(292),
    [anon_sym_BSLASH_DASH] = ACTIONS(292),
    [sym_class_character] = ACTIONS(294),
    [anon_sym_BSLASH] = ACTIONS(292),
    [sym_identity_escape] = ACTIONS(292),
    [sym_control_escape] = ACTIONS(292),
    [sym_control_letter_escape] = ACTIONS(292),
  },
  [72] = {
    [anon_sym_RBRACK] = ACTIONS(296),
    [anon_sym_DASH] = ACTIONS(296),
    [anon_sym_BSLASH_DASH] = ACTIONS(296),
    [sym_class_character] = ACTIONS(298),
    [anon_sym_BSLASH] = ACTIONS(296),
    [sym_identity_escape] = ACTIONS(296),
    [sym_control_escape] = ACTIONS(296),
    [sym_control_letter_escape] = ACTIONS(296),
  },
  [73] = {
    [anon_sym_RBRACK] = ACTIONS(300),
    [anon_sym_DASH] = ACTIONS(300),
    [anon_sym_BSLASH_DASH] = ACTIONS(300),
    [sym_class_character] = ACTIONS(302),
    [anon_sym_BSLASH] = ACTIONS(300),
    [sym_identity_escape] = ACTIONS(300),
    [sym_control_escape] = ACTIONS(300),
    [sym_control_letter_escape] = ACTIONS(300),
  },
  [74] = {
    [anon_sym_RBRACK] = ACTIONS(304),
    [anon_sym_DASH] = ACTIONS(304),
    [anon_sym_BSLASH_DASH] = ACTIONS(304),
    [sym_class_character] = ACTIONS(306),
    [anon_sym_BSLASH] = ACTIONS(304),
    [sym_identity_escape] = ACTIONS(304),
    [sym_control_escape] = ACTIONS(304),
    [sym_control_letter_escape] = ACTIONS(304),
  },
  [75] = {
    [anon_sym_RBRACK] = ACTIONS(308),
    [anon_sym_DASH] = ACTIONS(308),
    [anon_sym_BSLASH_DASH] = ACTIONS(308),
    [sym_class_character] = ACTIONS(310),
    [anon_sym_BSLASH] = ACTIONS(308),
    [sym_identity_escape] = ACTIONS(308),
    [sym_control_escape] = ACTIONS(308),
    [sym_control_letter_escape] = ACTIONS(308),
  },
  [76] = {
    [anon_sym_RBRACK] = ACTIONS(312),
    [anon_sym_DASH] = ACTIONS(312),
    [anon_sym_BSLASH_DASH] = ACTIONS(312),
    [sym_class_character] = ACTIONS(314),
    [anon_sym_BSLASH] = ACTIONS(312),
    [sym_identity_escape] = ACTIONS(312),
    [sym_control_escape] = ACTIONS(312),
    [sym_control_letter_escape] = ACTIONS(312),
  },
  [77] = {
    [sym_unicode_property_value_expression] = STATE(83),
    [sym_unicode_property] = ACTIONS(262),
  },
  [78] = {
    [anon_sym_RPAREN] = ACTIONS(316),
  },
  [79] = {
    [anon_sym_EQ] = ACTIONS(318),
    [anon_sym_RBRACE] = ACTIONS(320),
  },
  [80] = {
    [anon_sym_RBRACE] = ACTIONS(322),
  },
  [81] = {
    [anon_sym_RBRACE] = ACTIONS(324),
  },
  [82] = {
    [ts_builtin_sym_end] = ACTIONS(326),
    [anon_sym_PIPE] = ACTIONS(326),
    [sym_any_character] = ACTIONS(326),
    [anon_sym_CARET] = ACTIONS(326),
    [sym_end_assertion] = ACTIONS(326),
    [sym_boundary_assertion] = ACTIONS(326),
    [sym_non_boundary_assertion] = ACTIONS(326),
    [anon_sym_LPAREN_QMARK] = ACTIONS(328),
    [anon_sym_RPAREN] = ACTIONS(326),
    [sym_pattern_character] = ACTIONS(326),
    [anon_sym_LBRACK] = ACTIONS(326),
    [anon_sym_LPAREN] = ACTIONS(328),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(326),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(326),
    [anon_sym_BSLASHk] = ACTIONS(326),
    [sym_decimal_escape] = ACTIONS(326),
    [anon_sym_BSLASH] = ACTIONS(328),
    [sym_identity_escape] = ACTIONS(326),
    [sym_control_escape] = ACTIONS(328),
    [sym_control_letter_escape] = ACTIONS(326),
  },
  [83] = {
    [anon_sym_RBRACE] = ACTIONS(330),
  },
  [84] = {
    [ts_builtin_sym_end] = ACTIONS(332),
    [anon_sym_PIPE] = ACTIONS(332),
    [sym_any_character] = ACTIONS(332),
    [anon_sym_CARET] = ACTIONS(332),
    [sym_end_assertion] = ACTIONS(332),
    [sym_boundary_assertion] = ACTIONS(332),
    [sym_non_boundary_assertion] = ACTIONS(332),
    [anon_sym_LPAREN_QMARK] = ACTIONS(334),
    [anon_sym_RPAREN] = ACTIONS(332),
    [sym_pattern_character] = ACTIONS(332),
    [anon_sym_LBRACK] = ACTIONS(332),
    [anon_sym_LPAREN] = ACTIONS(334),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(332),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(332),
    [anon_sym_STAR] = ACTIONS(332),
    [anon_sym_QMARK] = ACTIONS(332),
    [anon_sym_PLUS] = ACTIONS(332),
    [anon_sym_LBRACE] = ACTIONS(332),
    [anon_sym_BSLASHk] = ACTIONS(332),
    [sym_decimal_escape] = ACTIONS(332),
    [anon_sym_BSLASH] = ACTIONS(334),
    [sym_identity_escape] = ACTIONS(332),
    [sym_control_escape] = ACTIONS(334),
    [sym_control_letter_escape] = ACTIONS(332),
  },
  [85] = {
    [sym_unicode_property] = ACTIONS(336),
  },
  [86] = {
    [ts_builtin_sym_end] = ACTIONS(338),
    [anon_sym_PIPE] = ACTIONS(338),
    [sym_any_character] = ACTIONS(338),
    [anon_sym_CARET] = ACTIONS(338),
    [sym_end_assertion] = ACTIONS(338),
    [sym_boundary_assertion] = ACTIONS(338),
    [sym_non_boundary_assertion] = ACTIONS(338),
    [anon_sym_LPAREN_QMARK] = ACTIONS(340),
    [anon_sym_RPAREN] = ACTIONS(338),
    [sym_pattern_character] = ACTIONS(338),
    [anon_sym_LBRACK] = ACTIONS(338),
    [anon_sym_LPAREN] = ACTIONS(340),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(338),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(338),
    [anon_sym_STAR] = ACTIONS(338),
    [anon_sym_QMARK] = ACTIONS(338),
    [anon_sym_PLUS] = ACTIONS(338),
    [anon_sym_LBRACE] = ACTIONS(338),
    [anon_sym_BSLASHk] = ACTIONS(338),
    [sym_decimal_escape] = ACTIONS(338),
    [anon_sym_BSLASH] = ACTIONS(340),
    [sym_identity_escape] = ACTIONS(338),
    [sym_control_escape] = ACTIONS(340),
    [sym_control_letter_escape] = ACTIONS(338),
  },
  [87] = {
    [ts_builtin_sym_end] = ACTIONS(342),
    [anon_sym_PIPE] = ACTIONS(342),
    [sym_any_character] = ACTIONS(342),
    [anon_sym_CARET] = ACTIONS(342),
    [sym_end_assertion] = ACTIONS(342),
    [sym_boundary_assertion] = ACTIONS(342),
    [sym_non_boundary_assertion] = ACTIONS(342),
    [anon_sym_LPAREN_QMARK] = ACTIONS(344),
    [anon_sym_RPAREN] = ACTIONS(342),
    [sym_pattern_character] = ACTIONS(342),
    [anon_sym_LBRACK] = ACTIONS(342),
    [anon_sym_LPAREN] = ACTIONS(344),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(342),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(342),
    [anon_sym_QMARK] = ACTIONS(346),
    [anon_sym_BSLASHk] = ACTIONS(342),
    [sym_decimal_escape] = ACTIONS(342),
    [anon_sym_BSLASH] = ACTIONS(344),
    [sym_identity_escape] = ACTIONS(342),
    [sym_control_escape] = ACTIONS(344),
    [sym_control_letter_escape] = ACTIONS(342),
  },
  [88] = {
    [anon_sym_RBRACK] = ACTIONS(340),
    [anon_sym_DASH] = ACTIONS(340),
    [anon_sym_BSLASH_DASH] = ACTIONS(340),
    [sym_class_character] = ACTIONS(338),
    [anon_sym_BSLASH] = ACTIONS(340),
    [sym_identity_escape] = ACTIONS(340),
    [sym_control_escape] = ACTIONS(340),
    [sym_control_letter_escape] = ACTIONS(340),
  },
  [89] = {
    [anon_sym_RBRACE] = ACTIONS(348),
  },
  [90] = {
    [ts_builtin_sym_end] = ACTIONS(350),
    [anon_sym_PIPE] = ACTIONS(350),
    [sym_any_character] = ACTIONS(350),
    [anon_sym_CARET] = ACTIONS(350),
    [sym_end_assertion] = ACTIONS(350),
    [sym_boundary_assertion] = ACTIONS(350),
    [sym_non_boundary_assertion] = ACTIONS(350),
    [anon_sym_LPAREN_QMARK] = ACTIONS(352),
    [anon_sym_RPAREN] = ACTIONS(350),
    [sym_pattern_character] = ACTIONS(350),
    [anon_sym_LBRACK] = ACTIONS(350),
    [anon_sym_LPAREN] = ACTIONS(352),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(350),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(350),
    [anon_sym_BSLASHk] = ACTIONS(350),
    [sym_decimal_escape] = ACTIONS(350),
    [anon_sym_BSLASH] = ACTIONS(352),
    [sym_identity_escape] = ACTIONS(350),
    [sym_control_escape] = ACTIONS(352),
    [sym_control_letter_escape] = ACTIONS(350),
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
  [23] = {.count = 1, .reusable = false}, SHIFT(11),
  [25] = {.count = 1, .reusable = false}, SHIFT(3),
  [27] = {.count = 1, .reusable = true}, REDUCE(aux_sym_disjunction_repeat1, 1),
  [29] = {.count = 1, .reusable = true}, REDUCE(aux_sym_term_repeat1, 1),
  [31] = {.count = 1, .reusable = false}, REDUCE(aux_sym_term_repeat1, 1),
  [33] = {.count = 1, .reusable = true}, SHIFT(18),
  [35] = {.count = 1, .reusable = true}, SHIFT(19),
  [37] = {.count = 1, .reusable = true}, SHIFT(20),
  [39] = {.count = 1, .reusable = true}, SHIFT(21),
  [41] = {.count = 1, .reusable = true}, REDUCE(sym_start_assertion, 1),
  [43] = {.count = 1, .reusable = false}, REDUCE(sym_start_assertion, 1),
  [45] = {.count = 1, .reusable = true}, SHIFT(23),
  [47] = {.count = 1, .reusable = false}, SHIFT(24),
  [49] = {.count = 1, .reusable = false}, SHIFT(25),
  [51] = {.count = 1, .reusable = false}, SHIFT(26),
  [53] = {.count = 1, .reusable = false}, SHIFT(27),
  [55] = {.count = 1, .reusable = false}, SHIFT(28),
  [57] = {.count = 1, .reusable = false}, SHIFT(29),
  [59] = {.count = 1, .reusable = true}, SHIFT(31),
  [61] = {.count = 1, .reusable = true}, SHIFT(36),
  [63] = {.count = 1, .reusable = true}, SHIFT(38),
  [65] = {.count = 1, .reusable = true}, SHIFT(39),
  [67] = {.count = 1, .reusable = true}, SHIFT(40),
  [69] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [71] = {.count = 1, .reusable = true}, REDUCE(sym_pattern, 1),
  [73] = {.count = 1, .reusable = true}, REDUCE(sym_disjunction, 1),
  [75] = {.count = 1, .reusable = true}, REDUCE(sym_term, 1),
  [77] = {.count = 1, .reusable = true}, REDUCE(aux_sym_disjunction_repeat1, 2),
  [79] = {.count = 1, .reusable = true}, REDUCE(sym_zero_or_more, 1),
  [81] = {.count = 1, .reusable = false}, REDUCE(sym_zero_or_more, 1),
  [83] = {.count = 1, .reusable = true}, SHIFT(44),
  [85] = {.count = 1, .reusable = true}, REDUCE(sym_optional, 1),
  [87] = {.count = 1, .reusable = false}, REDUCE(sym_optional, 1),
  [89] = {.count = 1, .reusable = true}, SHIFT(45),
  [91] = {.count = 1, .reusable = true}, REDUCE(sym_one_or_more, 1),
  [93] = {.count = 1, .reusable = false}, REDUCE(sym_one_or_more, 1),
  [95] = {.count = 1, .reusable = true}, SHIFT(46),
  [97] = {.count = 1, .reusable = true}, SHIFT(47),
  [99] = {.count = 1, .reusable = true}, REDUCE(aux_sym_term_repeat1, 2),
  [101] = {.count = 1, .reusable = false}, REDUCE(aux_sym_term_repeat1, 2),
  [103] = {.count = 1, .reusable = false}, SHIFT(49),
  [105] = {.count = 1, .reusable = true}, SHIFT(28),
  [107] = {.count = 1, .reusable = true}, REDUCE(sym_character_class, 2),
  [109] = {.count = 1, .reusable = false}, REDUCE(sym_character_class, 2),
  [111] = {.count = 1, .reusable = false}, REDUCE(aux_sym_character_class_repeat1, 1, .alias_sequence_id = 1),
  [113] = {.count = 1, .reusable = false}, SHIFT(51),
  [115] = {.count = 1, .reusable = true}, REDUCE(aux_sym_character_class_repeat1, 1, .alias_sequence_id = 1),
  [117] = {.count = 1, .reusable = false}, REDUCE(aux_sym_character_class_repeat1, 1, .alias_sequence_id = 2),
  [119] = {.count = 1, .reusable = false}, SHIFT(52),
  [121] = {.count = 1, .reusable = true}, REDUCE(aux_sym_character_class_repeat1, 1, .alias_sequence_id = 2),
  [123] = {.count = 1, .reusable = false}, REDUCE(aux_sym_character_class_repeat1, 1),
  [125] = {.count = 1, .reusable = false}, SHIFT(53),
  [127] = {.count = 1, .reusable = true}, REDUCE(aux_sym_character_class_repeat1, 1),
  [129] = {.count = 1, .reusable = true}, SHIFT(54),
  [131] = {.count = 1, .reusable = true}, SHIFT(55),
  [133] = {.count = 1, .reusable = true}, SHIFT(57),
  [135] = {.count = 1, .reusable = true}, SHIFT(61),
  [137] = {.count = 1, .reusable = true}, SHIFT(62),
  [139] = {.count = 1, .reusable = true}, REDUCE(sym_backreference_escape, 2),
  [141] = {.count = 1, .reusable = false}, REDUCE(sym_backreference_escape, 2),
  [143] = {.count = 1, .reusable = true}, REDUCE(sym_character_class_escape, 2),
  [145] = {.count = 1, .reusable = false}, REDUCE(sym_character_class_escape, 2),
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
  [178] = {.count = 2, .reusable = false}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(11),
  [181] = {.count = 2, .reusable = false}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(3),
  [184] = {.count = 1, .reusable = true}, REDUCE(sym_zero_or_more, 2, .alias_sequence_id = 3),
  [186] = {.count = 1, .reusable = false}, REDUCE(sym_zero_or_more, 2, .alias_sequence_id = 3),
  [188] = {.count = 1, .reusable = true}, REDUCE(sym_optional, 2, .alias_sequence_id = 3),
  [190] = {.count = 1, .reusable = false}, REDUCE(sym_optional, 2, .alias_sequence_id = 3),
  [192] = {.count = 1, .reusable = true}, REDUCE(sym_one_or_more, 2, .alias_sequence_id = 3),
  [194] = {.count = 1, .reusable = false}, REDUCE(sym_one_or_more, 2, .alias_sequence_id = 3),
  [196] = {.count = 1, .reusable = true}, SHIFT(64),
  [198] = {.count = 1, .reusable = true}, SHIFT(65),
  [200] = {.count = 1, .reusable = true}, SHIFT(66),
  [202] = {.count = 1, .reusable = true}, REDUCE(sym_character_class, 3),
  [204] = {.count = 1, .reusable = false}, REDUCE(sym_character_class, 3),
  [206] = {.count = 1, .reusable = false}, SHIFT(67),
  [208] = {.count = 1, .reusable = false}, SHIFT(68),
  [210] = {.count = 1, .reusable = false}, SHIFT(69),
  [212] = {.count = 1, .reusable = true}, SHIFT(70),
  [214] = {.count = 1, .reusable = false}, SHIFT(70),
  [216] = {.count = 1, .reusable = false}, SHIFT(71),
  [218] = {.count = 1, .reusable = false}, SHIFT(72),
  [220] = {.count = 1, .reusable = true}, SHIFT(73),
  [222] = {.count = 1, .reusable = false}, SHIFT(73),
  [224] = {.count = 1, .reusable = false}, SHIFT(74),
  [226] = {.count = 1, .reusable = false}, SHIFT(75),
  [228] = {.count = 1, .reusable = true}, SHIFT(76),
  [230] = {.count = 1, .reusable = false}, SHIFT(76),
  [232] = {.count = 1, .reusable = true}, SHIFT(77),
  [234] = {.count = 1, .reusable = false}, REDUCE(aux_sym_character_class_repeat1, 2),
  [236] = {.count = 2, .reusable = false}, REDUCE(aux_sym_character_class_repeat1, 2), SHIFT_REPEAT(26),
  [239] = {.count = 2, .reusable = false}, REDUCE(aux_sym_character_class_repeat1, 2), SHIFT_REPEAT(27),
  [242] = {.count = 2, .reusable = true}, REDUCE(aux_sym_character_class_repeat1, 2), SHIFT_REPEAT(28),
  [245] = {.count = 2, .reusable = false}, REDUCE(aux_sym_character_class_repeat1, 2), SHIFT_REPEAT(29),
  [248] = {.count = 2, .reusable = false}, REDUCE(aux_sym_character_class_repeat1, 2), SHIFT_REPEAT(28),
  [251] = {.count = 1, .reusable = true}, REDUCE(sym_anonymous_capturing_group, 3),
  [253] = {.count = 1, .reusable = false}, REDUCE(sym_anonymous_capturing_group, 3),
  [255] = {.count = 2, .reusable = true}, REDUCE(aux_sym_disjunction_repeat1, 2), SHIFT_REPEAT(31),
  [258] = {.count = 1, .reusable = true}, REDUCE(sym_non_capturing_group, 3),
  [260] = {.count = 1, .reusable = false}, REDUCE(sym_non_capturing_group, 3),
  [262] = {.count = 1, .reusable = true}, SHIFT(79),
  [264] = {.count = 1, .reusable = true}, SHIFT(81),
  [266] = {.count = 1, .reusable = true}, REDUCE(sym_count_quantifier, 3),
  [268] = {.count = 1, .reusable = false}, REDUCE(sym_count_quantifier, 3),
  [270] = {.count = 1, .reusable = true}, SHIFT(82),
  [272] = {.count = 1, .reusable = true}, REDUCE(sym_lookahead_assertion, 4),
  [274] = {.count = 1, .reusable = false}, REDUCE(sym_lookahead_assertion, 4),
  [276] = {.count = 1, .reusable = true}, REDUCE(sym_character_class, 4),
  [278] = {.count = 1, .reusable = false}, REDUCE(sym_character_class, 4),
  [280] = {.count = 1, .reusable = false}, REDUCE(sym_class_range, 3, .alias_sequence_id = 4),
  [282] = {.count = 1, .reusable = true}, REDUCE(sym_class_range, 3, .alias_sequence_id = 4),
  [284] = {.count = 1, .reusable = false}, REDUCE(sym_class_range, 3, .alias_sequence_id = 5),
  [286] = {.count = 1, .reusable = true}, REDUCE(sym_class_range, 3, .alias_sequence_id = 5),
  [288] = {.count = 1, .reusable = false}, REDUCE(sym_class_range, 3, .alias_sequence_id = 1),
  [290] = {.count = 1, .reusable = true}, REDUCE(sym_class_range, 3, .alias_sequence_id = 1),
  [292] = {.count = 1, .reusable = false}, REDUCE(sym_class_range, 3, .alias_sequence_id = 6),
  [294] = {.count = 1, .reusable = true}, REDUCE(sym_class_range, 3, .alias_sequence_id = 6),
  [296] = {.count = 1, .reusable = false}, REDUCE(sym_class_range, 3, .alias_sequence_id = 7),
  [298] = {.count = 1, .reusable = true}, REDUCE(sym_class_range, 3, .alias_sequence_id = 7),
  [300] = {.count = 1, .reusable = false}, REDUCE(sym_class_range, 3, .alias_sequence_id = 2),
  [302] = {.count = 1, .reusable = true}, REDUCE(sym_class_range, 3, .alias_sequence_id = 2),
  [304] = {.count = 1, .reusable = false}, REDUCE(sym_class_range, 3, .alias_sequence_id = 8),
  [306] = {.count = 1, .reusable = true}, REDUCE(sym_class_range, 3, .alias_sequence_id = 8),
  [308] = {.count = 1, .reusable = false}, REDUCE(sym_class_range, 3, .alias_sequence_id = 9),
  [310] = {.count = 1, .reusable = true}, REDUCE(sym_class_range, 3, .alias_sequence_id = 9),
  [312] = {.count = 1, .reusable = false}, REDUCE(sym_class_range, 3),
  [314] = {.count = 1, .reusable = true}, REDUCE(sym_class_range, 3),
  [316] = {.count = 1, .reusable = true}, SHIFT(84),
  [318] = {.count = 1, .reusable = true}, SHIFT(85),
  [320] = {.count = 1, .reusable = true}, REDUCE(sym_unicode_property_value_expression, 1, .alias_sequence_id = 10),
  [322] = {.count = 1, .reusable = true}, SHIFT(86),
  [324] = {.count = 1, .reusable = true}, SHIFT(87),
  [326] = {.count = 1, .reusable = true}, REDUCE(sym_count_quantifier, 4, .alias_sequence_id = 11),
  [328] = {.count = 1, .reusable = false}, REDUCE(sym_count_quantifier, 4, .alias_sequence_id = 11),
  [330] = {.count = 1, .reusable = true}, SHIFT(88),
  [332] = {.count = 1, .reusable = true}, REDUCE(sym_named_capturing_group, 5),
  [334] = {.count = 1, .reusable = false}, REDUCE(sym_named_capturing_group, 5),
  [336] = {.count = 1, .reusable = true}, SHIFT(89),
  [338] = {.count = 1, .reusable = true}, REDUCE(sym_character_class_escape, 5),
  [340] = {.count = 1, .reusable = false}, REDUCE(sym_character_class_escape, 5),
  [342] = {.count = 1, .reusable = true}, REDUCE(sym_count_quantifier, 5),
  [344] = {.count = 1, .reusable = false}, REDUCE(sym_count_quantifier, 5),
  [346] = {.count = 1, .reusable = true}, SHIFT(90),
  [348] = {.count = 1, .reusable = true}, REDUCE(sym_unicode_property_value_expression, 3, .alias_sequence_id = 12),
  [350] = {.count = 1, .reusable = true}, REDUCE(sym_count_quantifier, 6, .alias_sequence_id = 13),
  [352] = {.count = 1, .reusable = false}, REDUCE(sym_count_quantifier, 6, .alias_sequence_id = 13),
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
