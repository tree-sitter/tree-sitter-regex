#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 81
#define SYMBOL_COUNT 61
#define ALIAS_COUNT 4
#define TOKEN_COUNT 40
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6

enum {
  anon_sym_PIPE = 1,
  sym_any_character = 2,
  anon_sym_LPAREN_QMARK_COLON = 3,
  anon_sym_RPAREN = 4,
  anon_sym_CARET = 5,
  sym_end_assertion = 6,
  sym_boundary_assertion = 7,
  sym_non_boundary_assertion = 8,
  anon_sym_LPAREN_QMARK = 9,
  anon_sym_EQ = 10,
  anon_sym_BANG = 11,
  anon_sym_LT_EQ = 12,
  anon_sym_LT_BANG = 13,
  anon_sym_LBRACK = 14,
  anon_sym_RBRACK = 15,
  anon_sym_DASH = 16,
  aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_BSLASH_RBRACK_BSLASH_DASH_RBRACK_SLASH = 17,
  anon_sym_BSLASH_DASH = 18,
  sym_pattern_character = 19,
  anon_sym_STAR = 20,
  anon_sym_QMARK = 21,
  anon_sym_PLUS = 22,
  anon_sym_LBRACE = 23,
  anon_sym_COMMA = 24,
  anon_sym_RBRACE = 25,
  sym_decimal_escape = 26,
  anon_sym_BSLASH = 27,
  aux_sym_SLASH_LBRACKdDsSwW_RBRACK_SLASH = 28,
  aux_sym_SLASH_LBRACKpP_RBRACK_SLASH = 29,
  anon_sym_BSLASHk = 30,
  sym_unicode_property = 31,
  sym_identity_escape = 32,
  sym_control_escape = 33,
  sym_control_letter_escape = 34,
  anon_sym_LPAREN = 35,
  anon_sym_LPAREN_QMARK_LT = 36,
  anon_sym_GT = 37,
  sym_group_name = 38,
  sym_decimal_digits = 39,
  sym_pattern = 40,
  sym_disjunction = 41,
  sym_term = 42,
  sym_non_capturing_group = 43,
  sym_start_assertion = 44,
  sym_lookahead_assertion = 45,
  sym_character_class = 46,
  sym_class_range = 47,
  sym_class_atom = 48,
  sym_zero_or_more = 49,
  sym_one_or_more = 50,
  sym_optional = 51,
  sym_count_quantifier = 52,
  sym_character_class_escape = 53,
  sym_backreference_escape = 54,
  sym_unicode_property_value_expression = 55,
  sym_anonymous_capturing_group = 56,
  sym_named_capturing_group = 57,
  aux_sym_disjunction_repeat1 = 58,
  aux_sym_term_repeat1 = 59,
  aux_sym_character_class_repeat1 = 60,
  alias_sym_identity_escape = 61,
  alias_sym_lazy = 62,
  alias_sym_unicode_property_name = 63,
  alias_sym_unicode_property_value = 64,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [anon_sym_PIPE] = "|",
  [sym_any_character] = "any_character",
  [anon_sym_LPAREN_QMARK_COLON] = "(?:",
  [anon_sym_RPAREN] = ")",
  [anon_sym_CARET] = "^",
  [sym_end_assertion] = "end_assertion",
  [sym_boundary_assertion] = "boundary_assertion",
  [sym_non_boundary_assertion] = "non_boundary_assertion",
  [anon_sym_LPAREN_QMARK] = "(?",
  [anon_sym_EQ] = "=",
  [anon_sym_BANG] = "!",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_LT_BANG] = "<!",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_DASH] = "-",
  [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_BSLASH_RBRACK_BSLASH_DASH_RBRACK_SLASH] = "/[^\\\\\\]\\-]/",
  [anon_sym_BSLASH_DASH] = "\\-",
  [sym_pattern_character] = "pattern_character",
  [anon_sym_STAR] = "*",
  [anon_sym_QMARK] = "?",
  [anon_sym_PLUS] = "+",
  [anon_sym_LBRACE] = "{",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACE] = "}",
  [sym_decimal_escape] = "decimal_escape",
  [anon_sym_BSLASH] = "\\",
  [aux_sym_SLASH_LBRACKdDsSwW_RBRACK_SLASH] = "/[dDsSwW]/",
  [aux_sym_SLASH_LBRACKpP_RBRACK_SLASH] = "/[pP]/",
  [anon_sym_BSLASHk] = "\\k",
  [sym_unicode_property] = "unicode_property",
  [sym_identity_escape] = "identity_escape",
  [sym_control_escape] = "control_escape",
  [sym_control_letter_escape] = "control_letter_escape",
  [anon_sym_LPAREN] = "(",
  [anon_sym_LPAREN_QMARK_LT] = "(?<",
  [anon_sym_GT] = ">",
  [sym_group_name] = "group_name",
  [sym_decimal_digits] = "decimal_digits",
  [sym_pattern] = "pattern",
  [sym_disjunction] = "disjunction",
  [sym_term] = "term",
  [sym_non_capturing_group] = "non_capturing_group",
  [sym_start_assertion] = "start_assertion",
  [sym_lookahead_assertion] = "lookahead_assertion",
  [sym_character_class] = "character_class",
  [sym_class_range] = "class_range",
  [sym_class_atom] = "class_atom",
  [sym_zero_or_more] = "zero_or_more",
  [sym_one_or_more] = "one_or_more",
  [sym_optional] = "optional",
  [sym_count_quantifier] = "count_quantifier",
  [sym_character_class_escape] = "character_class_escape",
  [sym_backreference_escape] = "backreference_escape",
  [sym_unicode_property_value_expression] = "unicode_property_value_expression",
  [sym_anonymous_capturing_group] = "anonymous_capturing_group",
  [sym_named_capturing_group] = "named_capturing_group",
  [aux_sym_disjunction_repeat1] = "disjunction_repeat1",
  [aux_sym_term_repeat1] = "term_repeat1",
  [aux_sym_character_class_repeat1] = "character_class_repeat1",
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
  [anon_sym_LPAREN_QMARK_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
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
  [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_BSLASH_RBRACK_BSLASH_DASH_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BSLASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [sym_pattern_character] = {
    .visible = true,
    .named = true,
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
  [anon_sym_BSLASHk] = {
    .visible = true,
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
  [sym_non_capturing_group] = {
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
  [sym_class_atom] = {
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
  [sym_character_class_escape] = {
    .visible = true,
    .named = true,
  },
  [sym_backreference_escape] = {
    .visible = true,
    .named = true,
  },
  [sym_unicode_property_value_expression] = {
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

static TSSymbol ts_alias_sequences[7][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [1] = {
    [0] = alias_sym_identity_escape,
  },
  [2] = {
    [1] = alias_sym_lazy,
  },
  [3] = {
    [0] = alias_sym_unicode_property_value,
  },
  [4] = {
    [3] = alias_sym_lazy,
  },
  [5] = {
    [0] = alias_sym_unicode_property_name,
    [2] = alias_sym_unicode_property_value,
  },
  [6] = {
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
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_BSLASH_RBRACK_BSLASH_DASH_RBRACK_SLASH);
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
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(46);
      if (lookahead == 'D' ||
          lookahead == 'S' ||
          lookahead == 'W' ||
          lookahead == 'd' ||
          lookahead == 's' ||
          lookahead == 'w')
        ADVANCE(47);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKpP_RBRACK_SLASH);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKdDsSwW_RBRACK_SLASH);
      END_STATE();
    case 48:
      if (lookahead == '\n')
        SKIP(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_group_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
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
  [4] = {.lex_state = 35},
  [5] = {.lex_state = 37},
  [6] = {.lex_state = 38},
  [7] = {.lex_state = 42},
  [8] = {.lex_state = 45},
  [9] = {.lex_state = 48},
  [10] = {.lex_state = 35},
  [11] = {.lex_state = 48},
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
  [23] = {.lex_state = 37},
  [24] = {.lex_state = 37},
  [25] = {.lex_state = 37},
  [26] = {.lex_state = 37},
  [27] = {.lex_state = 37},
  [28] = {.lex_state = 35},
  [29] = {.lex_state = 58},
  [30] = {.lex_state = 37},
  [31] = {.lex_state = 58},
  [32] = {.lex_state = 58},
  [33] = {.lex_state = 45},
  [34] = {.lex_state = 58},
  [35] = {.lex_state = 58},
  [36] = {.lex_state = 37},
  [37] = {.lex_state = 37},
  [38] = {.lex_state = 37},
  [39] = {.lex_state = 37},
  [40] = {.lex_state = 59},
  [41] = {.lex_state = 52},
  [42] = {.lex_state = 52},
  [43] = {.lex_state = 35},
  [44] = {.lex_state = 57},
  [45] = {.lex_state = 57},
  [46] = {.lex_state = 57},
  [47] = {.lex_state = 60},
  [48] = {.lex_state = 37},
  [49] = {.lex_state = 37},
  [50] = {.lex_state = 37},
  [51] = {.lex_state = 37},
  [52] = {.lex_state = 37},
  [53] = {.lex_state = 37},
  [54] = {.lex_state = 58},
  [55] = {.lex_state = 58},
  [56] = {.lex_state = 37},
  [57] = {.lex_state = 58},
  [58] = {.lex_state = 58},
  [59] = {.lex_state = 61},
  [60] = {.lex_state = 37},
  [61] = {.lex_state = 35},
  [62] = {.lex_state = 55},
  [63] = {.lex_state = 54},
  [64] = {.lex_state = 37},
  [65] = {.lex_state = 37},
  [66] = {.lex_state = 61},
  [67] = {.lex_state = 58},
  [68] = {.lex_state = 63},
  [69] = {.lex_state = 60},
  [70] = {.lex_state = 37},
  [71] = {.lex_state = 60},
  [72] = {.lex_state = 57},
  [73] = {.lex_state = 60},
  [74] = {.lex_state = 61},
  [75] = {.lex_state = 37},
  [76] = {.lex_state = 37},
  [77] = {.lex_state = 54},
  [78] = {.lex_state = 58},
  [79] = {.lex_state = 60},
  [80] = {.lex_state = 57},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [sym_any_character] = ACTIONS(1),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [sym_end_assertion] = ACTIONS(1),
    [sym_boundary_assertion] = ACTIONS(1),
    [sym_non_boundary_assertion] = ACTIONS(1),
    [anon_sym_LPAREN_QMARK] = ACTIONS(3),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_BSLASH_DASH] = ACTIONS(1),
    [sym_pattern_character] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_decimal_escape] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(3),
    [aux_sym_SLASH_LBRACKdDsSwW_RBRACK_SLASH] = ACTIONS(3),
    [aux_sym_SLASH_LBRACKpP_RBRACK_SLASH] = ACTIONS(3),
    [anon_sym_BSLASHk] = ACTIONS(1),
    [sym_identity_escape] = ACTIONS(1),
    [sym_control_escape] = ACTIONS(3),
    [sym_control_letter_escape] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(3),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
  },
  [1] = {
    [sym_pattern] = STATE(12),
    [sym_disjunction] = STATE(13),
    [sym_term] = STATE(14),
    [sym_non_capturing_group] = STATE(3),
    [sym_start_assertion] = STATE(3),
    [sym_lookahead_assertion] = STATE(3),
    [sym_character_class] = STATE(3),
    [sym_character_class_escape] = STATE(3),
    [sym_backreference_escape] = STATE(3),
    [sym_anonymous_capturing_group] = STATE(3),
    [sym_named_capturing_group] = STATE(3),
    [aux_sym_disjunction_repeat1] = STATE(15),
    [aux_sym_term_repeat1] = STATE(16),
    [anon_sym_PIPE] = ACTIONS(5),
    [sym_any_character] = ACTIONS(7),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(9),
    [anon_sym_CARET] = ACTIONS(11),
    [sym_end_assertion] = ACTIONS(7),
    [sym_boundary_assertion] = ACTIONS(7),
    [sym_non_boundary_assertion] = ACTIONS(7),
    [anon_sym_LPAREN_QMARK] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [sym_pattern_character] = ACTIONS(7),
    [sym_decimal_escape] = ACTIONS(7),
    [anon_sym_BSLASH] = ACTIONS(17),
    [anon_sym_BSLASHk] = ACTIONS(19),
    [sym_identity_escape] = ACTIONS(7),
    [sym_control_escape] = ACTIONS(21),
    [sym_control_letter_escape] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(25),
  },
  [2] = {
    [sym_term] = STATE(17),
    [sym_non_capturing_group] = STATE(3),
    [sym_start_assertion] = STATE(3),
    [sym_lookahead_assertion] = STATE(3),
    [sym_character_class] = STATE(3),
    [sym_character_class_escape] = STATE(3),
    [sym_backreference_escape] = STATE(3),
    [sym_anonymous_capturing_group] = STATE(3),
    [sym_named_capturing_group] = STATE(3),
    [aux_sym_term_repeat1] = STATE(16),
    [ts_builtin_sym_end] = ACTIONS(27),
    [anon_sym_PIPE] = ACTIONS(27),
    [sym_any_character] = ACTIONS(7),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(9),
    [anon_sym_CARET] = ACTIONS(11),
    [sym_end_assertion] = ACTIONS(7),
    [sym_boundary_assertion] = ACTIONS(7),
    [sym_non_boundary_assertion] = ACTIONS(7),
    [anon_sym_LPAREN_QMARK] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [sym_pattern_character] = ACTIONS(7),
    [sym_decimal_escape] = ACTIONS(7),
    [anon_sym_BSLASH] = ACTIONS(17),
    [anon_sym_BSLASHk] = ACTIONS(19),
    [sym_identity_escape] = ACTIONS(7),
    [sym_control_escape] = ACTIONS(21),
    [sym_control_letter_escape] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(25),
  },
  [3] = {
    [sym_zero_or_more] = STATE(22),
    [sym_one_or_more] = STATE(22),
    [sym_optional] = STATE(22),
    [sym_count_quantifier] = STATE(22),
    [ts_builtin_sym_end] = ACTIONS(29),
    [anon_sym_PIPE] = ACTIONS(29),
    [sym_any_character] = ACTIONS(29),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(29),
    [anon_sym_RPAREN] = ACTIONS(29),
    [anon_sym_CARET] = ACTIONS(29),
    [sym_end_assertion] = ACTIONS(29),
    [sym_boundary_assertion] = ACTIONS(29),
    [sym_non_boundary_assertion] = ACTIONS(29),
    [anon_sym_LPAREN_QMARK] = ACTIONS(31),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_pattern_character] = ACTIONS(29),
    [anon_sym_STAR] = ACTIONS(33),
    [anon_sym_QMARK] = ACTIONS(35),
    [anon_sym_PLUS] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(39),
    [sym_decimal_escape] = ACTIONS(29),
    [anon_sym_BSLASH] = ACTIONS(31),
    [anon_sym_BSLASHk] = ACTIONS(29),
    [sym_identity_escape] = ACTIONS(29),
    [sym_control_escape] = ACTIONS(31),
    [sym_control_letter_escape] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(29),
  },
  [4] = {
    [sym_pattern] = STATE(24),
    [sym_disjunction] = STATE(13),
    [sym_term] = STATE(25),
    [sym_non_capturing_group] = STATE(3),
    [sym_start_assertion] = STATE(3),
    [sym_lookahead_assertion] = STATE(3),
    [sym_character_class] = STATE(3),
    [sym_character_class_escape] = STATE(3),
    [sym_backreference_escape] = STATE(3),
    [sym_anonymous_capturing_group] = STATE(3),
    [sym_named_capturing_group] = STATE(3),
    [aux_sym_disjunction_repeat1] = STATE(26),
    [aux_sym_term_repeat1] = STATE(27),
    [anon_sym_PIPE] = ACTIONS(41),
    [sym_any_character] = ACTIONS(7),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(9),
    [anon_sym_CARET] = ACTIONS(11),
    [sym_end_assertion] = ACTIONS(7),
    [sym_boundary_assertion] = ACTIONS(7),
    [sym_non_boundary_assertion] = ACTIONS(7),
    [anon_sym_LPAREN_QMARK] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [sym_pattern_character] = ACTIONS(7),
    [sym_decimal_escape] = ACTIONS(7),
    [anon_sym_BSLASH] = ACTIONS(17),
    [anon_sym_BSLASHk] = ACTIONS(19),
    [sym_identity_escape] = ACTIONS(7),
    [sym_control_escape] = ACTIONS(21),
    [sym_control_letter_escape] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(25),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(43),
    [anon_sym_PIPE] = ACTIONS(43),
    [sym_any_character] = ACTIONS(43),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(43),
    [anon_sym_RPAREN] = ACTIONS(43),
    [anon_sym_CARET] = ACTIONS(43),
    [sym_end_assertion] = ACTIONS(43),
    [sym_boundary_assertion] = ACTIONS(43),
    [sym_non_boundary_assertion] = ACTIONS(43),
    [anon_sym_LPAREN_QMARK] = ACTIONS(45),
    [anon_sym_LBRACK] = ACTIONS(43),
    [sym_pattern_character] = ACTIONS(43),
    [anon_sym_STAR] = ACTIONS(43),
    [anon_sym_QMARK] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(43),
    [sym_decimal_escape] = ACTIONS(43),
    [anon_sym_BSLASH] = ACTIONS(45),
    [anon_sym_BSLASHk] = ACTIONS(43),
    [sym_identity_escape] = ACTIONS(43),
    [sym_control_escape] = ACTIONS(45),
    [sym_control_letter_escape] = ACTIONS(43),
    [anon_sym_LPAREN] = ACTIONS(45),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(43),
  },
  [6] = {
    [anon_sym_EQ] = ACTIONS(47),
    [anon_sym_BANG] = ACTIONS(47),
    [anon_sym_LT_EQ] = ACTIONS(47),
    [anon_sym_LT_BANG] = ACTIONS(47),
  },
  [7] = {
    [sym_class_range] = STATE(35),
    [sym_class_atom] = STATE(34),
    [sym_character_class_escape] = STATE(31),
    [aux_sym_character_class_repeat1] = STATE(35),
    [anon_sym_CARET] = ACTIONS(49),
    [anon_sym_RBRACK] = ACTIONS(51),
    [anon_sym_DASH] = ACTIONS(53),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_BSLASH_RBRACK_BSLASH_DASH_RBRACK_SLASH] = ACTIONS(53),
    [anon_sym_BSLASH_DASH] = ACTIONS(55),
    [anon_sym_BSLASH] = ACTIONS(57),
    [sym_identity_escape] = ACTIONS(53),
    [sym_control_escape] = ACTIONS(53),
    [sym_control_letter_escape] = ACTIONS(53),
  },
  [8] = {
    [aux_sym_SLASH_LBRACKdDsSwW_RBRACK_SLASH] = ACTIONS(59),
    [aux_sym_SLASH_LBRACKpP_RBRACK_SLASH] = ACTIONS(61),
  },
  [9] = {
    [sym_group_name] = ACTIONS(63),
  },
  [10] = {
    [sym_pattern] = STATE(39),
    [sym_disjunction] = STATE(13),
    [sym_term] = STATE(25),
    [sym_non_capturing_group] = STATE(3),
    [sym_start_assertion] = STATE(3),
    [sym_lookahead_assertion] = STATE(3),
    [sym_character_class] = STATE(3),
    [sym_character_class_escape] = STATE(3),
    [sym_backreference_escape] = STATE(3),
    [sym_anonymous_capturing_group] = STATE(3),
    [sym_named_capturing_group] = STATE(3),
    [aux_sym_disjunction_repeat1] = STATE(26),
    [aux_sym_term_repeat1] = STATE(27),
    [anon_sym_PIPE] = ACTIONS(41),
    [sym_any_character] = ACTIONS(7),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(9),
    [anon_sym_CARET] = ACTIONS(11),
    [sym_end_assertion] = ACTIONS(7),
    [sym_boundary_assertion] = ACTIONS(7),
    [sym_non_boundary_assertion] = ACTIONS(7),
    [anon_sym_LPAREN_QMARK] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [sym_pattern_character] = ACTIONS(7),
    [sym_decimal_escape] = ACTIONS(7),
    [anon_sym_BSLASH] = ACTIONS(17),
    [anon_sym_BSLASHk] = ACTIONS(19),
    [sym_identity_escape] = ACTIONS(7),
    [sym_control_escape] = ACTIONS(21),
    [sym_control_letter_escape] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(25),
  },
  [11] = {
    [sym_group_name] = ACTIONS(65),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(67),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(69),
    [anon_sym_RPAREN] = ACTIONS(69),
  },
  [14] = {
    [aux_sym_disjunction_repeat1] = STATE(41),
    [ts_builtin_sym_end] = ACTIONS(69),
    [anon_sym_PIPE] = ACTIONS(5),
  },
  [15] = {
    [aux_sym_disjunction_repeat1] = STATE(42),
    [ts_builtin_sym_end] = ACTIONS(71),
    [anon_sym_PIPE] = ACTIONS(5),
  },
  [16] = {
    [sym_non_capturing_group] = STATE(3),
    [sym_start_assertion] = STATE(3),
    [sym_lookahead_assertion] = STATE(3),
    [sym_character_class] = STATE(3),
    [sym_character_class_escape] = STATE(3),
    [sym_backreference_escape] = STATE(3),
    [sym_anonymous_capturing_group] = STATE(3),
    [sym_named_capturing_group] = STATE(3),
    [aux_sym_term_repeat1] = STATE(43),
    [ts_builtin_sym_end] = ACTIONS(73),
    [anon_sym_PIPE] = ACTIONS(73),
    [sym_any_character] = ACTIONS(7),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(9),
    [anon_sym_CARET] = ACTIONS(11),
    [sym_end_assertion] = ACTIONS(7),
    [sym_boundary_assertion] = ACTIONS(7),
    [sym_non_boundary_assertion] = ACTIONS(7),
    [anon_sym_LPAREN_QMARK] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [sym_pattern_character] = ACTIONS(7),
    [sym_decimal_escape] = ACTIONS(7),
    [anon_sym_BSLASH] = ACTIONS(17),
    [anon_sym_BSLASHk] = ACTIONS(19),
    [sym_identity_escape] = ACTIONS(7),
    [sym_control_escape] = ACTIONS(21),
    [sym_control_letter_escape] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(25),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(75),
    [anon_sym_PIPE] = ACTIONS(75),
    [anon_sym_RPAREN] = ACTIONS(75),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(77),
    [anon_sym_PIPE] = ACTIONS(77),
    [sym_any_character] = ACTIONS(77),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(77),
    [anon_sym_RPAREN] = ACTIONS(77),
    [anon_sym_CARET] = ACTIONS(77),
    [sym_end_assertion] = ACTIONS(77),
    [sym_boundary_assertion] = ACTIONS(77),
    [sym_non_boundary_assertion] = ACTIONS(77),
    [anon_sym_LPAREN_QMARK] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(77),
    [sym_pattern_character] = ACTIONS(77),
    [anon_sym_QMARK] = ACTIONS(81),
    [sym_decimal_escape] = ACTIONS(77),
    [anon_sym_BSLASH] = ACTIONS(79),
    [anon_sym_BSLASHk] = ACTIONS(77),
    [sym_identity_escape] = ACTIONS(77),
    [sym_control_escape] = ACTIONS(79),
    [sym_control_letter_escape] = ACTIONS(77),
    [anon_sym_LPAREN] = ACTIONS(79),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(77),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(83),
    [anon_sym_PIPE] = ACTIONS(83),
    [sym_any_character] = ACTIONS(83),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(83),
    [anon_sym_RPAREN] = ACTIONS(83),
    [anon_sym_CARET] = ACTIONS(83),
    [sym_end_assertion] = ACTIONS(83),
    [sym_boundary_assertion] = ACTIONS(83),
    [sym_non_boundary_assertion] = ACTIONS(83),
    [anon_sym_LPAREN_QMARK] = ACTIONS(85),
    [anon_sym_LBRACK] = ACTIONS(83),
    [sym_pattern_character] = ACTIONS(83),
    [anon_sym_QMARK] = ACTIONS(87),
    [sym_decimal_escape] = ACTIONS(83),
    [anon_sym_BSLASH] = ACTIONS(85),
    [anon_sym_BSLASHk] = ACTIONS(83),
    [sym_identity_escape] = ACTIONS(83),
    [sym_control_escape] = ACTIONS(85),
    [sym_control_letter_escape] = ACTIONS(83),
    [anon_sym_LPAREN] = ACTIONS(85),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(83),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(89),
    [anon_sym_PIPE] = ACTIONS(89),
    [sym_any_character] = ACTIONS(89),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(89),
    [anon_sym_RPAREN] = ACTIONS(89),
    [anon_sym_CARET] = ACTIONS(89),
    [sym_end_assertion] = ACTIONS(89),
    [sym_boundary_assertion] = ACTIONS(89),
    [sym_non_boundary_assertion] = ACTIONS(89),
    [anon_sym_LPAREN_QMARK] = ACTIONS(91),
    [anon_sym_LBRACK] = ACTIONS(89),
    [sym_pattern_character] = ACTIONS(89),
    [anon_sym_QMARK] = ACTIONS(93),
    [sym_decimal_escape] = ACTIONS(89),
    [anon_sym_BSLASH] = ACTIONS(91),
    [anon_sym_BSLASHk] = ACTIONS(89),
    [sym_identity_escape] = ACTIONS(89),
    [sym_control_escape] = ACTIONS(91),
    [sym_control_letter_escape] = ACTIONS(89),
    [anon_sym_LPAREN] = ACTIONS(91),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(89),
  },
  [21] = {
    [sym_decimal_digits] = ACTIONS(95),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(97),
    [anon_sym_PIPE] = ACTIONS(97),
    [sym_any_character] = ACTIONS(97),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(97),
    [anon_sym_RPAREN] = ACTIONS(97),
    [anon_sym_CARET] = ACTIONS(97),
    [sym_end_assertion] = ACTIONS(97),
    [sym_boundary_assertion] = ACTIONS(97),
    [sym_non_boundary_assertion] = ACTIONS(97),
    [anon_sym_LPAREN_QMARK] = ACTIONS(99),
    [anon_sym_LBRACK] = ACTIONS(97),
    [sym_pattern_character] = ACTIONS(97),
    [sym_decimal_escape] = ACTIONS(97),
    [anon_sym_BSLASH] = ACTIONS(99),
    [anon_sym_BSLASHk] = ACTIONS(97),
    [sym_identity_escape] = ACTIONS(97),
    [sym_control_escape] = ACTIONS(99),
    [sym_control_letter_escape] = ACTIONS(97),
    [anon_sym_LPAREN] = ACTIONS(99),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(97),
  },
  [23] = {
    [sym_term] = STATE(17),
    [sym_non_capturing_group] = STATE(3),
    [sym_start_assertion] = STATE(3),
    [sym_lookahead_assertion] = STATE(3),
    [sym_character_class] = STATE(3),
    [sym_character_class_escape] = STATE(3),
    [sym_backreference_escape] = STATE(3),
    [sym_anonymous_capturing_group] = STATE(3),
    [sym_named_capturing_group] = STATE(3),
    [aux_sym_term_repeat1] = STATE(27),
    [anon_sym_PIPE] = ACTIONS(27),
    [sym_any_character] = ACTIONS(7),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(9),
    [anon_sym_RPAREN] = ACTIONS(27),
    [anon_sym_CARET] = ACTIONS(11),
    [sym_end_assertion] = ACTIONS(7),
    [sym_boundary_assertion] = ACTIONS(7),
    [sym_non_boundary_assertion] = ACTIONS(7),
    [anon_sym_LPAREN_QMARK] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [sym_pattern_character] = ACTIONS(7),
    [sym_decimal_escape] = ACTIONS(7),
    [anon_sym_BSLASH] = ACTIONS(17),
    [anon_sym_BSLASHk] = ACTIONS(19),
    [sym_identity_escape] = ACTIONS(7),
    [sym_control_escape] = ACTIONS(21),
    [sym_control_letter_escape] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(25),
  },
  [24] = {
    [anon_sym_RPAREN] = ACTIONS(101),
  },
  [25] = {
    [aux_sym_disjunction_repeat1] = STATE(49),
    [anon_sym_PIPE] = ACTIONS(41),
    [anon_sym_RPAREN] = ACTIONS(69),
  },
  [26] = {
    [aux_sym_disjunction_repeat1] = STATE(50),
    [anon_sym_PIPE] = ACTIONS(41),
    [anon_sym_RPAREN] = ACTIONS(71),
  },
  [27] = {
    [sym_non_capturing_group] = STATE(3),
    [sym_start_assertion] = STATE(3),
    [sym_lookahead_assertion] = STATE(3),
    [sym_character_class] = STATE(3),
    [sym_character_class_escape] = STATE(3),
    [sym_backreference_escape] = STATE(3),
    [sym_anonymous_capturing_group] = STATE(3),
    [sym_named_capturing_group] = STATE(3),
    [aux_sym_term_repeat1] = STATE(51),
    [anon_sym_PIPE] = ACTIONS(73),
    [sym_any_character] = ACTIONS(7),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(9),
    [anon_sym_RPAREN] = ACTIONS(73),
    [anon_sym_CARET] = ACTIONS(11),
    [sym_end_assertion] = ACTIONS(7),
    [sym_boundary_assertion] = ACTIONS(7),
    [sym_non_boundary_assertion] = ACTIONS(7),
    [anon_sym_LPAREN_QMARK] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [sym_pattern_character] = ACTIONS(7),
    [sym_decimal_escape] = ACTIONS(7),
    [anon_sym_BSLASH] = ACTIONS(17),
    [anon_sym_BSLASHk] = ACTIONS(19),
    [sym_identity_escape] = ACTIONS(7),
    [sym_control_escape] = ACTIONS(21),
    [sym_control_letter_escape] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(25),
  },
  [28] = {
    [sym_pattern] = STATE(52),
    [sym_disjunction] = STATE(13),
    [sym_term] = STATE(25),
    [sym_non_capturing_group] = STATE(3),
    [sym_start_assertion] = STATE(3),
    [sym_lookahead_assertion] = STATE(3),
    [sym_character_class] = STATE(3),
    [sym_character_class_escape] = STATE(3),
    [sym_backreference_escape] = STATE(3),
    [sym_anonymous_capturing_group] = STATE(3),
    [sym_named_capturing_group] = STATE(3),
    [aux_sym_disjunction_repeat1] = STATE(26),
    [aux_sym_term_repeat1] = STATE(27),
    [anon_sym_PIPE] = ACTIONS(41),
    [sym_any_character] = ACTIONS(7),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(9),
    [anon_sym_CARET] = ACTIONS(11),
    [sym_end_assertion] = ACTIONS(7),
    [sym_boundary_assertion] = ACTIONS(7),
    [sym_non_boundary_assertion] = ACTIONS(7),
    [anon_sym_LPAREN_QMARK] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [sym_pattern_character] = ACTIONS(7),
    [sym_decimal_escape] = ACTIONS(7),
    [anon_sym_BSLASH] = ACTIONS(17),
    [anon_sym_BSLASHk] = ACTIONS(19),
    [sym_identity_escape] = ACTIONS(7),
    [sym_control_escape] = ACTIONS(21),
    [sym_control_letter_escape] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(25),
  },
  [29] = {
    [sym_class_range] = STATE(54),
    [sym_class_atom] = STATE(34),
    [sym_character_class_escape] = STATE(31),
    [aux_sym_character_class_repeat1] = STATE(54),
    [anon_sym_RBRACK] = ACTIONS(103),
    [anon_sym_DASH] = ACTIONS(53),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_BSLASH_RBRACK_BSLASH_DASH_RBRACK_SLASH] = ACTIONS(105),
    [anon_sym_BSLASH_DASH] = ACTIONS(55),
    [anon_sym_BSLASH] = ACTIONS(57),
    [sym_identity_escape] = ACTIONS(53),
    [sym_control_escape] = ACTIONS(53),
    [sym_control_letter_escape] = ACTIONS(53),
  },
  [30] = {
    [ts_builtin_sym_end] = ACTIONS(107),
    [anon_sym_PIPE] = ACTIONS(107),
    [sym_any_character] = ACTIONS(107),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(107),
    [anon_sym_RPAREN] = ACTIONS(107),
    [anon_sym_CARET] = ACTIONS(107),
    [sym_end_assertion] = ACTIONS(107),
    [sym_boundary_assertion] = ACTIONS(107),
    [sym_non_boundary_assertion] = ACTIONS(107),
    [anon_sym_LPAREN_QMARK] = ACTIONS(109),
    [anon_sym_LBRACK] = ACTIONS(107),
    [sym_pattern_character] = ACTIONS(107),
    [anon_sym_STAR] = ACTIONS(107),
    [anon_sym_QMARK] = ACTIONS(107),
    [anon_sym_PLUS] = ACTIONS(107),
    [anon_sym_LBRACE] = ACTIONS(107),
    [sym_decimal_escape] = ACTIONS(107),
    [anon_sym_BSLASH] = ACTIONS(109),
    [anon_sym_BSLASHk] = ACTIONS(107),
    [sym_identity_escape] = ACTIONS(107),
    [sym_control_escape] = ACTIONS(109),
    [sym_control_letter_escape] = ACTIONS(107),
    [anon_sym_LPAREN] = ACTIONS(109),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(107),
  },
  [31] = {
    [anon_sym_RBRACK] = ACTIONS(111),
    [anon_sym_DASH] = ACTIONS(111),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_BSLASH_RBRACK_BSLASH_DASH_RBRACK_SLASH] = ACTIONS(113),
    [anon_sym_BSLASH_DASH] = ACTIONS(111),
    [anon_sym_BSLASH] = ACTIONS(111),
    [sym_identity_escape] = ACTIONS(111),
    [sym_control_escape] = ACTIONS(111),
    [sym_control_letter_escape] = ACTIONS(111),
  },
  [32] = {
    [anon_sym_RBRACK] = ACTIONS(115),
    [anon_sym_DASH] = ACTIONS(115),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_BSLASH_RBRACK_BSLASH_DASH_RBRACK_SLASH] = ACTIONS(117),
    [anon_sym_BSLASH_DASH] = ACTIONS(115),
    [anon_sym_BSLASH] = ACTIONS(115),
    [sym_identity_escape] = ACTIONS(115),
    [sym_control_escape] = ACTIONS(115),
    [sym_control_letter_escape] = ACTIONS(115),
  },
  [33] = {
    [aux_sym_SLASH_LBRACKdDsSwW_RBRACK_SLASH] = ACTIONS(119),
    [aux_sym_SLASH_LBRACKpP_RBRACK_SLASH] = ACTIONS(121),
  },
  [34] = {
    [anon_sym_RBRACK] = ACTIONS(123),
    [anon_sym_DASH] = ACTIONS(125),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_BSLASH_RBRACK_BSLASH_DASH_RBRACK_SLASH] = ACTIONS(127),
    [anon_sym_BSLASH_DASH] = ACTIONS(123),
    [anon_sym_BSLASH] = ACTIONS(123),
    [sym_identity_escape] = ACTIONS(123),
    [sym_control_escape] = ACTIONS(123),
    [sym_control_letter_escape] = ACTIONS(123),
  },
  [35] = {
    [sym_class_range] = STATE(58),
    [sym_class_atom] = STATE(34),
    [sym_character_class_escape] = STATE(31),
    [aux_sym_character_class_repeat1] = STATE(58),
    [anon_sym_RBRACK] = ACTIONS(103),
    [anon_sym_DASH] = ACTIONS(53),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_BSLASH_RBRACK_BSLASH_DASH_RBRACK_SLASH] = ACTIONS(105),
    [anon_sym_BSLASH_DASH] = ACTIONS(55),
    [anon_sym_BSLASH] = ACTIONS(57),
    [sym_identity_escape] = ACTIONS(53),
    [sym_control_escape] = ACTIONS(53),
    [sym_control_letter_escape] = ACTIONS(53),
  },
  [36] = {
    [ts_builtin_sym_end] = ACTIONS(129),
    [anon_sym_PIPE] = ACTIONS(129),
    [sym_any_character] = ACTIONS(129),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(129),
    [anon_sym_RPAREN] = ACTIONS(129),
    [anon_sym_CARET] = ACTIONS(129),
    [sym_end_assertion] = ACTIONS(129),
    [sym_boundary_assertion] = ACTIONS(129),
    [sym_non_boundary_assertion] = ACTIONS(129),
    [anon_sym_LPAREN_QMARK] = ACTIONS(131),
    [anon_sym_LBRACK] = ACTIONS(129),
    [sym_pattern_character] = ACTIONS(129),
    [anon_sym_STAR] = ACTIONS(129),
    [anon_sym_QMARK] = ACTIONS(129),
    [anon_sym_PLUS] = ACTIONS(129),
    [anon_sym_LBRACE] = ACTIONS(129),
    [sym_decimal_escape] = ACTIONS(129),
    [anon_sym_BSLASH] = ACTIONS(131),
    [anon_sym_BSLASHk] = ACTIONS(129),
    [sym_identity_escape] = ACTIONS(129),
    [sym_control_escape] = ACTIONS(131),
    [sym_control_letter_escape] = ACTIONS(129),
    [anon_sym_LPAREN] = ACTIONS(131),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(129),
  },
  [37] = {
    [anon_sym_LBRACE] = ACTIONS(133),
  },
  [38] = {
    [ts_builtin_sym_end] = ACTIONS(135),
    [anon_sym_PIPE] = ACTIONS(135),
    [sym_any_character] = ACTIONS(135),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(135),
    [anon_sym_RPAREN] = ACTIONS(135),
    [anon_sym_CARET] = ACTIONS(135),
    [sym_end_assertion] = ACTIONS(135),
    [sym_boundary_assertion] = ACTIONS(135),
    [sym_non_boundary_assertion] = ACTIONS(135),
    [anon_sym_LPAREN_QMARK] = ACTIONS(137),
    [anon_sym_LBRACK] = ACTIONS(135),
    [sym_pattern_character] = ACTIONS(135),
    [anon_sym_STAR] = ACTIONS(135),
    [anon_sym_QMARK] = ACTIONS(135),
    [anon_sym_PLUS] = ACTIONS(135),
    [anon_sym_LBRACE] = ACTIONS(135),
    [sym_decimal_escape] = ACTIONS(135),
    [anon_sym_BSLASH] = ACTIONS(137),
    [anon_sym_BSLASHk] = ACTIONS(135),
    [sym_identity_escape] = ACTIONS(135),
    [sym_control_escape] = ACTIONS(137),
    [sym_control_letter_escape] = ACTIONS(135),
    [anon_sym_LPAREN] = ACTIONS(137),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(135),
  },
  [39] = {
    [anon_sym_RPAREN] = ACTIONS(139),
  },
  [40] = {
    [anon_sym_GT] = ACTIONS(141),
  },
  [41] = {
    [aux_sym_disjunction_repeat1] = STATE(42),
    [ts_builtin_sym_end] = ACTIONS(143),
    [anon_sym_PIPE] = ACTIONS(5),
  },
  [42] = {
    [aux_sym_disjunction_repeat1] = STATE(42),
    [ts_builtin_sym_end] = ACTIONS(75),
    [anon_sym_PIPE] = ACTIONS(145),
  },
  [43] = {
    [sym_non_capturing_group] = STATE(3),
    [sym_start_assertion] = STATE(3),
    [sym_lookahead_assertion] = STATE(3),
    [sym_character_class] = STATE(3),
    [sym_character_class_escape] = STATE(3),
    [sym_backreference_escape] = STATE(3),
    [sym_anonymous_capturing_group] = STATE(3),
    [sym_named_capturing_group] = STATE(3),
    [aux_sym_term_repeat1] = STATE(43),
    [ts_builtin_sym_end] = ACTIONS(97),
    [anon_sym_PIPE] = ACTIONS(97),
    [sym_any_character] = ACTIONS(148),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(151),
    [anon_sym_CARET] = ACTIONS(154),
    [sym_end_assertion] = ACTIONS(148),
    [sym_boundary_assertion] = ACTIONS(148),
    [sym_non_boundary_assertion] = ACTIONS(148),
    [anon_sym_LPAREN_QMARK] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(160),
    [sym_pattern_character] = ACTIONS(148),
    [sym_decimal_escape] = ACTIONS(148),
    [anon_sym_BSLASH] = ACTIONS(163),
    [anon_sym_BSLASHk] = ACTIONS(166),
    [sym_identity_escape] = ACTIONS(148),
    [sym_control_escape] = ACTIONS(169),
    [sym_control_letter_escape] = ACTIONS(148),
    [anon_sym_LPAREN] = ACTIONS(172),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(175),
  },
  [44] = {
    [ts_builtin_sym_end] = ACTIONS(178),
    [anon_sym_PIPE] = ACTIONS(178),
    [sym_any_character] = ACTIONS(178),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(178),
    [anon_sym_RPAREN] = ACTIONS(178),
    [anon_sym_CARET] = ACTIONS(178),
    [sym_end_assertion] = ACTIONS(178),
    [sym_boundary_assertion] = ACTIONS(178),
    [sym_non_boundary_assertion] = ACTIONS(178),
    [anon_sym_LPAREN_QMARK] = ACTIONS(180),
    [anon_sym_LBRACK] = ACTIONS(178),
    [sym_pattern_character] = ACTIONS(178),
    [sym_decimal_escape] = ACTIONS(178),
    [anon_sym_BSLASH] = ACTIONS(180),
    [anon_sym_BSLASHk] = ACTIONS(178),
    [sym_identity_escape] = ACTIONS(178),
    [sym_control_escape] = ACTIONS(180),
    [sym_control_letter_escape] = ACTIONS(178),
    [anon_sym_LPAREN] = ACTIONS(180),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(178),
  },
  [45] = {
    [ts_builtin_sym_end] = ACTIONS(182),
    [anon_sym_PIPE] = ACTIONS(182),
    [sym_any_character] = ACTIONS(182),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(182),
    [anon_sym_RPAREN] = ACTIONS(182),
    [anon_sym_CARET] = ACTIONS(182),
    [sym_end_assertion] = ACTIONS(182),
    [sym_boundary_assertion] = ACTIONS(182),
    [sym_non_boundary_assertion] = ACTIONS(182),
    [anon_sym_LPAREN_QMARK] = ACTIONS(184),
    [anon_sym_LBRACK] = ACTIONS(182),
    [sym_pattern_character] = ACTIONS(182),
    [sym_decimal_escape] = ACTIONS(182),
    [anon_sym_BSLASH] = ACTIONS(184),
    [anon_sym_BSLASHk] = ACTIONS(182),
    [sym_identity_escape] = ACTIONS(182),
    [sym_control_escape] = ACTIONS(184),
    [sym_control_letter_escape] = ACTIONS(182),
    [anon_sym_LPAREN] = ACTIONS(184),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(182),
  },
  [46] = {
    [ts_builtin_sym_end] = ACTIONS(186),
    [anon_sym_PIPE] = ACTIONS(186),
    [sym_any_character] = ACTIONS(186),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(186),
    [anon_sym_RPAREN] = ACTIONS(186),
    [anon_sym_CARET] = ACTIONS(186),
    [sym_end_assertion] = ACTIONS(186),
    [sym_boundary_assertion] = ACTIONS(186),
    [sym_non_boundary_assertion] = ACTIONS(186),
    [anon_sym_LPAREN_QMARK] = ACTIONS(188),
    [anon_sym_LBRACK] = ACTIONS(186),
    [sym_pattern_character] = ACTIONS(186),
    [sym_decimal_escape] = ACTIONS(186),
    [anon_sym_BSLASH] = ACTIONS(188),
    [anon_sym_BSLASHk] = ACTIONS(186),
    [sym_identity_escape] = ACTIONS(186),
    [sym_control_escape] = ACTIONS(188),
    [sym_control_letter_escape] = ACTIONS(186),
    [anon_sym_LPAREN] = ACTIONS(188),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(186),
  },
  [47] = {
    [anon_sym_COMMA] = ACTIONS(190),
    [anon_sym_RBRACE] = ACTIONS(192),
  },
  [48] = {
    [ts_builtin_sym_end] = ACTIONS(194),
    [anon_sym_PIPE] = ACTIONS(194),
    [sym_any_character] = ACTIONS(194),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(194),
    [anon_sym_RPAREN] = ACTIONS(194),
    [anon_sym_CARET] = ACTIONS(194),
    [sym_end_assertion] = ACTIONS(194),
    [sym_boundary_assertion] = ACTIONS(194),
    [sym_non_boundary_assertion] = ACTIONS(194),
    [anon_sym_LPAREN_QMARK] = ACTIONS(196),
    [anon_sym_LBRACK] = ACTIONS(194),
    [sym_pattern_character] = ACTIONS(194),
    [anon_sym_STAR] = ACTIONS(194),
    [anon_sym_QMARK] = ACTIONS(194),
    [anon_sym_PLUS] = ACTIONS(194),
    [anon_sym_LBRACE] = ACTIONS(194),
    [sym_decimal_escape] = ACTIONS(194),
    [anon_sym_BSLASH] = ACTIONS(196),
    [anon_sym_BSLASHk] = ACTIONS(194),
    [sym_identity_escape] = ACTIONS(194),
    [sym_control_escape] = ACTIONS(196),
    [sym_control_letter_escape] = ACTIONS(194),
    [anon_sym_LPAREN] = ACTIONS(196),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(194),
  },
  [49] = {
    [aux_sym_disjunction_repeat1] = STATE(50),
    [anon_sym_PIPE] = ACTIONS(41),
    [anon_sym_RPAREN] = ACTIONS(143),
  },
  [50] = {
    [aux_sym_disjunction_repeat1] = STATE(50),
    [anon_sym_PIPE] = ACTIONS(198),
    [anon_sym_RPAREN] = ACTIONS(75),
  },
  [51] = {
    [sym_non_capturing_group] = STATE(3),
    [sym_start_assertion] = STATE(3),
    [sym_lookahead_assertion] = STATE(3),
    [sym_character_class] = STATE(3),
    [sym_character_class_escape] = STATE(3),
    [sym_backreference_escape] = STATE(3),
    [sym_anonymous_capturing_group] = STATE(3),
    [sym_named_capturing_group] = STATE(3),
    [aux_sym_term_repeat1] = STATE(51),
    [anon_sym_PIPE] = ACTIONS(97),
    [sym_any_character] = ACTIONS(148),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(151),
    [anon_sym_RPAREN] = ACTIONS(97),
    [anon_sym_CARET] = ACTIONS(154),
    [sym_end_assertion] = ACTIONS(148),
    [sym_boundary_assertion] = ACTIONS(148),
    [sym_non_boundary_assertion] = ACTIONS(148),
    [anon_sym_LPAREN_QMARK] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(160),
    [sym_pattern_character] = ACTIONS(148),
    [sym_decimal_escape] = ACTIONS(148),
    [anon_sym_BSLASH] = ACTIONS(163),
    [anon_sym_BSLASHk] = ACTIONS(166),
    [sym_identity_escape] = ACTIONS(148),
    [sym_control_escape] = ACTIONS(169),
    [sym_control_letter_escape] = ACTIONS(148),
    [anon_sym_LPAREN] = ACTIONS(172),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(175),
  },
  [52] = {
    [anon_sym_RPAREN] = ACTIONS(201),
  },
  [53] = {
    [ts_builtin_sym_end] = ACTIONS(203),
    [anon_sym_PIPE] = ACTIONS(203),
    [sym_any_character] = ACTIONS(203),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(203),
    [anon_sym_RPAREN] = ACTIONS(203),
    [anon_sym_CARET] = ACTIONS(203),
    [sym_end_assertion] = ACTIONS(203),
    [sym_boundary_assertion] = ACTIONS(203),
    [sym_non_boundary_assertion] = ACTIONS(203),
    [anon_sym_LPAREN_QMARK] = ACTIONS(205),
    [anon_sym_LBRACK] = ACTIONS(203),
    [sym_pattern_character] = ACTIONS(203),
    [anon_sym_STAR] = ACTIONS(203),
    [anon_sym_QMARK] = ACTIONS(203),
    [anon_sym_PLUS] = ACTIONS(203),
    [anon_sym_LBRACE] = ACTIONS(203),
    [sym_decimal_escape] = ACTIONS(203),
    [anon_sym_BSLASH] = ACTIONS(205),
    [anon_sym_BSLASHk] = ACTIONS(203),
    [sym_identity_escape] = ACTIONS(203),
    [sym_control_escape] = ACTIONS(205),
    [sym_control_letter_escape] = ACTIONS(203),
    [anon_sym_LPAREN] = ACTIONS(205),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(203),
  },
  [54] = {
    [sym_class_range] = STATE(58),
    [sym_class_atom] = STATE(34),
    [sym_character_class_escape] = STATE(31),
    [aux_sym_character_class_repeat1] = STATE(58),
    [anon_sym_RBRACK] = ACTIONS(207),
    [anon_sym_DASH] = ACTIONS(53),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_BSLASH_RBRACK_BSLASH_DASH_RBRACK_SLASH] = ACTIONS(105),
    [anon_sym_BSLASH_DASH] = ACTIONS(55),
    [anon_sym_BSLASH] = ACTIONS(57),
    [sym_identity_escape] = ACTIONS(53),
    [sym_control_escape] = ACTIONS(53),
    [sym_control_letter_escape] = ACTIONS(53),
  },
  [55] = {
    [anon_sym_RBRACK] = ACTIONS(131),
    [anon_sym_DASH] = ACTIONS(131),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_BSLASH_RBRACK_BSLASH_DASH_RBRACK_SLASH] = ACTIONS(129),
    [anon_sym_BSLASH_DASH] = ACTIONS(131),
    [anon_sym_BSLASH] = ACTIONS(131),
    [sym_identity_escape] = ACTIONS(131),
    [sym_control_escape] = ACTIONS(131),
    [sym_control_letter_escape] = ACTIONS(131),
  },
  [56] = {
    [anon_sym_LBRACE] = ACTIONS(209),
  },
  [57] = {
    [sym_class_atom] = STATE(67),
    [sym_character_class_escape] = STATE(31),
    [anon_sym_DASH] = ACTIONS(53),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_BSLASH_RBRACK_BSLASH_DASH_RBRACK_SLASH] = ACTIONS(105),
    [anon_sym_BSLASH_DASH] = ACTIONS(55),
    [anon_sym_BSLASH] = ACTIONS(57),
    [sym_identity_escape] = ACTIONS(53),
    [sym_control_escape] = ACTIONS(53),
    [sym_control_letter_escape] = ACTIONS(53),
  },
  [58] = {
    [sym_class_range] = STATE(58),
    [sym_class_atom] = STATE(34),
    [sym_character_class_escape] = STATE(31),
    [aux_sym_character_class_repeat1] = STATE(58),
    [anon_sym_RBRACK] = ACTIONS(211),
    [anon_sym_DASH] = ACTIONS(213),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_BSLASH_RBRACK_BSLASH_DASH_RBRACK_SLASH] = ACTIONS(216),
    [anon_sym_BSLASH_DASH] = ACTIONS(219),
    [anon_sym_BSLASH] = ACTIONS(222),
    [sym_identity_escape] = ACTIONS(213),
    [sym_control_escape] = ACTIONS(213),
    [sym_control_letter_escape] = ACTIONS(213),
  },
  [59] = {
    [sym_unicode_property_value_expression] = STATE(69),
    [sym_unicode_property] = ACTIONS(225),
  },
  [60] = {
    [ts_builtin_sym_end] = ACTIONS(227),
    [anon_sym_PIPE] = ACTIONS(227),
    [sym_any_character] = ACTIONS(227),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(227),
    [anon_sym_RPAREN] = ACTIONS(227),
    [anon_sym_CARET] = ACTIONS(227),
    [sym_end_assertion] = ACTIONS(227),
    [sym_boundary_assertion] = ACTIONS(227),
    [sym_non_boundary_assertion] = ACTIONS(227),
    [anon_sym_LPAREN_QMARK] = ACTIONS(229),
    [anon_sym_LBRACK] = ACTIONS(227),
    [sym_pattern_character] = ACTIONS(227),
    [anon_sym_STAR] = ACTIONS(227),
    [anon_sym_QMARK] = ACTIONS(227),
    [anon_sym_PLUS] = ACTIONS(227),
    [anon_sym_LBRACE] = ACTIONS(227),
    [sym_decimal_escape] = ACTIONS(227),
    [anon_sym_BSLASH] = ACTIONS(229),
    [anon_sym_BSLASHk] = ACTIONS(227),
    [sym_identity_escape] = ACTIONS(227),
    [sym_control_escape] = ACTIONS(229),
    [sym_control_letter_escape] = ACTIONS(227),
    [anon_sym_LPAREN] = ACTIONS(229),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(227),
  },
  [61] = {
    [sym_pattern] = STATE(70),
    [sym_disjunction] = STATE(13),
    [sym_term] = STATE(25),
    [sym_non_capturing_group] = STATE(3),
    [sym_start_assertion] = STATE(3),
    [sym_lookahead_assertion] = STATE(3),
    [sym_character_class] = STATE(3),
    [sym_character_class_escape] = STATE(3),
    [sym_backreference_escape] = STATE(3),
    [sym_anonymous_capturing_group] = STATE(3),
    [sym_named_capturing_group] = STATE(3),
    [aux_sym_disjunction_repeat1] = STATE(26),
    [aux_sym_term_repeat1] = STATE(27),
    [anon_sym_PIPE] = ACTIONS(41),
    [sym_any_character] = ACTIONS(7),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(9),
    [anon_sym_CARET] = ACTIONS(11),
    [sym_end_assertion] = ACTIONS(7),
    [sym_boundary_assertion] = ACTIONS(7),
    [sym_non_boundary_assertion] = ACTIONS(7),
    [anon_sym_LPAREN_QMARK] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [sym_pattern_character] = ACTIONS(7),
    [sym_decimal_escape] = ACTIONS(7),
    [anon_sym_BSLASH] = ACTIONS(17),
    [anon_sym_BSLASHk] = ACTIONS(19),
    [sym_identity_escape] = ACTIONS(7),
    [sym_control_escape] = ACTIONS(21),
    [sym_control_letter_escape] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(25),
  },
  [62] = {
    [sym_decimal_digits] = ACTIONS(231),
  },
  [63] = {
    [ts_builtin_sym_end] = ACTIONS(233),
    [anon_sym_PIPE] = ACTIONS(233),
    [sym_any_character] = ACTIONS(233),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(233),
    [anon_sym_RPAREN] = ACTIONS(233),
    [anon_sym_CARET] = ACTIONS(233),
    [sym_end_assertion] = ACTIONS(233),
    [sym_boundary_assertion] = ACTIONS(233),
    [sym_non_boundary_assertion] = ACTIONS(233),
    [anon_sym_LPAREN_QMARK] = ACTIONS(235),
    [anon_sym_LBRACK] = ACTIONS(233),
    [sym_pattern_character] = ACTIONS(233),
    [anon_sym_QMARK] = ACTIONS(237),
    [sym_decimal_escape] = ACTIONS(233),
    [anon_sym_BSLASH] = ACTIONS(235),
    [anon_sym_BSLASHk] = ACTIONS(233),
    [sym_identity_escape] = ACTIONS(233),
    [sym_control_escape] = ACTIONS(235),
    [sym_control_letter_escape] = ACTIONS(233),
    [anon_sym_LPAREN] = ACTIONS(235),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(233),
  },
  [64] = {
    [ts_builtin_sym_end] = ACTIONS(239),
    [anon_sym_PIPE] = ACTIONS(239),
    [sym_any_character] = ACTIONS(239),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(239),
    [anon_sym_RPAREN] = ACTIONS(239),
    [anon_sym_CARET] = ACTIONS(239),
    [sym_end_assertion] = ACTIONS(239),
    [sym_boundary_assertion] = ACTIONS(239),
    [sym_non_boundary_assertion] = ACTIONS(239),
    [anon_sym_LPAREN_QMARK] = ACTIONS(241),
    [anon_sym_LBRACK] = ACTIONS(239),
    [sym_pattern_character] = ACTIONS(239),
    [anon_sym_STAR] = ACTIONS(239),
    [anon_sym_QMARK] = ACTIONS(239),
    [anon_sym_PLUS] = ACTIONS(239),
    [anon_sym_LBRACE] = ACTIONS(239),
    [sym_decimal_escape] = ACTIONS(239),
    [anon_sym_BSLASH] = ACTIONS(241),
    [anon_sym_BSLASHk] = ACTIONS(239),
    [sym_identity_escape] = ACTIONS(239),
    [sym_control_escape] = ACTIONS(241),
    [sym_control_letter_escape] = ACTIONS(239),
    [anon_sym_LPAREN] = ACTIONS(241),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(239),
  },
  [65] = {
    [ts_builtin_sym_end] = ACTIONS(243),
    [anon_sym_PIPE] = ACTIONS(243),
    [sym_any_character] = ACTIONS(243),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(243),
    [anon_sym_RPAREN] = ACTIONS(243),
    [anon_sym_CARET] = ACTIONS(243),
    [sym_end_assertion] = ACTIONS(243),
    [sym_boundary_assertion] = ACTIONS(243),
    [sym_non_boundary_assertion] = ACTIONS(243),
    [anon_sym_LPAREN_QMARK] = ACTIONS(245),
    [anon_sym_LBRACK] = ACTIONS(243),
    [sym_pattern_character] = ACTIONS(243),
    [anon_sym_STAR] = ACTIONS(243),
    [anon_sym_QMARK] = ACTIONS(243),
    [anon_sym_PLUS] = ACTIONS(243),
    [anon_sym_LBRACE] = ACTIONS(243),
    [sym_decimal_escape] = ACTIONS(243),
    [anon_sym_BSLASH] = ACTIONS(245),
    [anon_sym_BSLASHk] = ACTIONS(243),
    [sym_identity_escape] = ACTIONS(243),
    [sym_control_escape] = ACTIONS(245),
    [sym_control_letter_escape] = ACTIONS(243),
    [anon_sym_LPAREN] = ACTIONS(245),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(243),
  },
  [66] = {
    [sym_unicode_property_value_expression] = STATE(73),
    [sym_unicode_property] = ACTIONS(225),
  },
  [67] = {
    [anon_sym_RBRACK] = ACTIONS(247),
    [anon_sym_DASH] = ACTIONS(247),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_BSLASH_RBRACK_BSLASH_DASH_RBRACK_SLASH] = ACTIONS(249),
    [anon_sym_BSLASH_DASH] = ACTIONS(247),
    [anon_sym_BSLASH] = ACTIONS(247),
    [sym_identity_escape] = ACTIONS(247),
    [sym_control_escape] = ACTIONS(247),
    [sym_control_letter_escape] = ACTIONS(247),
  },
  [68] = {
    [anon_sym_EQ] = ACTIONS(251),
    [anon_sym_RBRACE] = ACTIONS(253),
  },
  [69] = {
    [anon_sym_RBRACE] = ACTIONS(255),
  },
  [70] = {
    [anon_sym_RPAREN] = ACTIONS(257),
  },
  [71] = {
    [anon_sym_RBRACE] = ACTIONS(259),
  },
  [72] = {
    [ts_builtin_sym_end] = ACTIONS(261),
    [anon_sym_PIPE] = ACTIONS(261),
    [sym_any_character] = ACTIONS(261),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(261),
    [anon_sym_RPAREN] = ACTIONS(261),
    [anon_sym_CARET] = ACTIONS(261),
    [sym_end_assertion] = ACTIONS(261),
    [sym_boundary_assertion] = ACTIONS(261),
    [sym_non_boundary_assertion] = ACTIONS(261),
    [anon_sym_LPAREN_QMARK] = ACTIONS(263),
    [anon_sym_LBRACK] = ACTIONS(261),
    [sym_pattern_character] = ACTIONS(261),
    [sym_decimal_escape] = ACTIONS(261),
    [anon_sym_BSLASH] = ACTIONS(263),
    [anon_sym_BSLASHk] = ACTIONS(261),
    [sym_identity_escape] = ACTIONS(261),
    [sym_control_escape] = ACTIONS(263),
    [sym_control_letter_escape] = ACTIONS(261),
    [anon_sym_LPAREN] = ACTIONS(263),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(261),
  },
  [73] = {
    [anon_sym_RBRACE] = ACTIONS(265),
  },
  [74] = {
    [sym_unicode_property] = ACTIONS(267),
  },
  [75] = {
    [ts_builtin_sym_end] = ACTIONS(269),
    [anon_sym_PIPE] = ACTIONS(269),
    [sym_any_character] = ACTIONS(269),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(269),
    [anon_sym_RPAREN] = ACTIONS(269),
    [anon_sym_CARET] = ACTIONS(269),
    [sym_end_assertion] = ACTIONS(269),
    [sym_boundary_assertion] = ACTIONS(269),
    [sym_non_boundary_assertion] = ACTIONS(269),
    [anon_sym_LPAREN_QMARK] = ACTIONS(271),
    [anon_sym_LBRACK] = ACTIONS(269),
    [sym_pattern_character] = ACTIONS(269),
    [anon_sym_STAR] = ACTIONS(269),
    [anon_sym_QMARK] = ACTIONS(269),
    [anon_sym_PLUS] = ACTIONS(269),
    [anon_sym_LBRACE] = ACTIONS(269),
    [sym_decimal_escape] = ACTIONS(269),
    [anon_sym_BSLASH] = ACTIONS(271),
    [anon_sym_BSLASHk] = ACTIONS(269),
    [sym_identity_escape] = ACTIONS(269),
    [sym_control_escape] = ACTIONS(271),
    [sym_control_letter_escape] = ACTIONS(269),
    [anon_sym_LPAREN] = ACTIONS(271),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(269),
  },
  [76] = {
    [ts_builtin_sym_end] = ACTIONS(273),
    [anon_sym_PIPE] = ACTIONS(273),
    [sym_any_character] = ACTIONS(273),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(273),
    [anon_sym_RPAREN] = ACTIONS(273),
    [anon_sym_CARET] = ACTIONS(273),
    [sym_end_assertion] = ACTIONS(273),
    [sym_boundary_assertion] = ACTIONS(273),
    [sym_non_boundary_assertion] = ACTIONS(273),
    [anon_sym_LPAREN_QMARK] = ACTIONS(275),
    [anon_sym_LBRACK] = ACTIONS(273),
    [sym_pattern_character] = ACTIONS(273),
    [anon_sym_STAR] = ACTIONS(273),
    [anon_sym_QMARK] = ACTIONS(273),
    [anon_sym_PLUS] = ACTIONS(273),
    [anon_sym_LBRACE] = ACTIONS(273),
    [sym_decimal_escape] = ACTIONS(273),
    [anon_sym_BSLASH] = ACTIONS(275),
    [anon_sym_BSLASHk] = ACTIONS(273),
    [sym_identity_escape] = ACTIONS(273),
    [sym_control_escape] = ACTIONS(275),
    [sym_control_letter_escape] = ACTIONS(273),
    [anon_sym_LPAREN] = ACTIONS(275),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(273),
  },
  [77] = {
    [ts_builtin_sym_end] = ACTIONS(277),
    [anon_sym_PIPE] = ACTIONS(277),
    [sym_any_character] = ACTIONS(277),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(277),
    [anon_sym_RPAREN] = ACTIONS(277),
    [anon_sym_CARET] = ACTIONS(277),
    [sym_end_assertion] = ACTIONS(277),
    [sym_boundary_assertion] = ACTIONS(277),
    [sym_non_boundary_assertion] = ACTIONS(277),
    [anon_sym_LPAREN_QMARK] = ACTIONS(279),
    [anon_sym_LBRACK] = ACTIONS(277),
    [sym_pattern_character] = ACTIONS(277),
    [anon_sym_QMARK] = ACTIONS(281),
    [sym_decimal_escape] = ACTIONS(277),
    [anon_sym_BSLASH] = ACTIONS(279),
    [anon_sym_BSLASHk] = ACTIONS(277),
    [sym_identity_escape] = ACTIONS(277),
    [sym_control_escape] = ACTIONS(279),
    [sym_control_letter_escape] = ACTIONS(277),
    [anon_sym_LPAREN] = ACTIONS(279),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(277),
  },
  [78] = {
    [anon_sym_RBRACK] = ACTIONS(271),
    [anon_sym_DASH] = ACTIONS(271),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_BSLASH_RBRACK_BSLASH_DASH_RBRACK_SLASH] = ACTIONS(269),
    [anon_sym_BSLASH_DASH] = ACTIONS(271),
    [anon_sym_BSLASH] = ACTIONS(271),
    [sym_identity_escape] = ACTIONS(271),
    [sym_control_escape] = ACTIONS(271),
    [sym_control_letter_escape] = ACTIONS(271),
  },
  [79] = {
    [anon_sym_RBRACE] = ACTIONS(283),
  },
  [80] = {
    [ts_builtin_sym_end] = ACTIONS(285),
    [anon_sym_PIPE] = ACTIONS(285),
    [sym_any_character] = ACTIONS(285),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(285),
    [anon_sym_RPAREN] = ACTIONS(285),
    [anon_sym_CARET] = ACTIONS(285),
    [sym_end_assertion] = ACTIONS(285),
    [sym_boundary_assertion] = ACTIONS(285),
    [sym_non_boundary_assertion] = ACTIONS(285),
    [anon_sym_LPAREN_QMARK] = ACTIONS(287),
    [anon_sym_LBRACK] = ACTIONS(285),
    [sym_pattern_character] = ACTIONS(285),
    [sym_decimal_escape] = ACTIONS(285),
    [anon_sym_BSLASH] = ACTIONS(287),
    [anon_sym_BSLASHk] = ACTIONS(285),
    [sym_identity_escape] = ACTIONS(285),
    [sym_control_escape] = ACTIONS(287),
    [sym_control_letter_escape] = ACTIONS(285),
    [anon_sym_LPAREN] = ACTIONS(287),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(285),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, RECOVER(),
  [5] = {.count = 1, .reusable = true}, SHIFT(2),
  [7] = {.count = 1, .reusable = true}, SHIFT(3),
  [9] = {.count = 1, .reusable = true}, SHIFT(4),
  [11] = {.count = 1, .reusable = true}, SHIFT(5),
  [13] = {.count = 1, .reusable = false}, SHIFT(6),
  [15] = {.count = 1, .reusable = true}, SHIFT(7),
  [17] = {.count = 1, .reusable = false}, SHIFT(8),
  [19] = {.count = 1, .reusable = true}, SHIFT(9),
  [21] = {.count = 1, .reusable = false}, SHIFT(3),
  [23] = {.count = 1, .reusable = false}, SHIFT(10),
  [25] = {.count = 1, .reusable = true}, SHIFT(11),
  [27] = {.count = 1, .reusable = true}, REDUCE(aux_sym_disjunction_repeat1, 1),
  [29] = {.count = 1, .reusable = true}, REDUCE(aux_sym_term_repeat1, 1),
  [31] = {.count = 1, .reusable = false}, REDUCE(aux_sym_term_repeat1, 1),
  [33] = {.count = 1, .reusable = true}, SHIFT(18),
  [35] = {.count = 1, .reusable = true}, SHIFT(19),
  [37] = {.count = 1, .reusable = true}, SHIFT(20),
  [39] = {.count = 1, .reusable = true}, SHIFT(21),
  [41] = {.count = 1, .reusable = true}, SHIFT(23),
  [43] = {.count = 1, .reusable = true}, REDUCE(sym_start_assertion, 1),
  [45] = {.count = 1, .reusable = false}, REDUCE(sym_start_assertion, 1),
  [47] = {.count = 1, .reusable = true}, SHIFT(28),
  [49] = {.count = 1, .reusable = false}, SHIFT(29),
  [51] = {.count = 1, .reusable = false}, SHIFT(30),
  [53] = {.count = 1, .reusable = false}, SHIFT(31),
  [55] = {.count = 1, .reusable = false}, SHIFT(32),
  [57] = {.count = 1, .reusable = false}, SHIFT(33),
  [59] = {.count = 1, .reusable = true}, SHIFT(36),
  [61] = {.count = 1, .reusable = true}, SHIFT(37),
  [63] = {.count = 1, .reusable = true}, SHIFT(38),
  [65] = {.count = 1, .reusable = true}, SHIFT(40),
  [67] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [69] = {.count = 1, .reusable = true}, REDUCE(sym_pattern, 1),
  [71] = {.count = 1, .reusable = true}, REDUCE(sym_disjunction, 1),
  [73] = {.count = 1, .reusable = true}, REDUCE(sym_term, 1),
  [75] = {.count = 1, .reusable = true}, REDUCE(aux_sym_disjunction_repeat1, 2),
  [77] = {.count = 1, .reusable = true}, REDUCE(sym_zero_or_more, 1),
  [79] = {.count = 1, .reusable = false}, REDUCE(sym_zero_or_more, 1),
  [81] = {.count = 1, .reusable = true}, SHIFT(44),
  [83] = {.count = 1, .reusable = true}, REDUCE(sym_optional, 1),
  [85] = {.count = 1, .reusable = false}, REDUCE(sym_optional, 1),
  [87] = {.count = 1, .reusable = true}, SHIFT(45),
  [89] = {.count = 1, .reusable = true}, REDUCE(sym_one_or_more, 1),
  [91] = {.count = 1, .reusable = false}, REDUCE(sym_one_or_more, 1),
  [93] = {.count = 1, .reusable = true}, SHIFT(46),
  [95] = {.count = 1, .reusable = true}, SHIFT(47),
  [97] = {.count = 1, .reusable = true}, REDUCE(aux_sym_term_repeat1, 2),
  [99] = {.count = 1, .reusable = false}, REDUCE(aux_sym_term_repeat1, 2),
  [101] = {.count = 1, .reusable = true}, SHIFT(48),
  [103] = {.count = 1, .reusable = false}, SHIFT(53),
  [105] = {.count = 1, .reusable = true}, SHIFT(31),
  [107] = {.count = 1, .reusable = true}, REDUCE(sym_character_class, 2),
  [109] = {.count = 1, .reusable = false}, REDUCE(sym_character_class, 2),
  [111] = {.count = 1, .reusable = false}, REDUCE(sym_class_atom, 1),
  [113] = {.count = 1, .reusable = true}, REDUCE(sym_class_atom, 1),
  [115] = {.count = 1, .reusable = false}, REDUCE(sym_class_atom, 1, .alias_sequence_id = 1),
  [117] = {.count = 1, .reusable = true}, REDUCE(sym_class_atom, 1, .alias_sequence_id = 1),
  [119] = {.count = 1, .reusable = true}, SHIFT(55),
  [121] = {.count = 1, .reusable = true}, SHIFT(56),
  [123] = {.count = 1, .reusable = false}, REDUCE(sym_class_range, 1),
  [125] = {.count = 1, .reusable = false}, SHIFT(57),
  [127] = {.count = 1, .reusable = true}, REDUCE(sym_class_range, 1),
  [129] = {.count = 1, .reusable = true}, REDUCE(sym_character_class_escape, 2),
  [131] = {.count = 1, .reusable = false}, REDUCE(sym_character_class_escape, 2),
  [133] = {.count = 1, .reusable = true}, SHIFT(59),
  [135] = {.count = 1, .reusable = true}, REDUCE(sym_backreference_escape, 2),
  [137] = {.count = 1, .reusable = false}, REDUCE(sym_backreference_escape, 2),
  [139] = {.count = 1, .reusable = true}, SHIFT(60),
  [141] = {.count = 1, .reusable = true}, SHIFT(61),
  [143] = {.count = 1, .reusable = true}, REDUCE(sym_disjunction, 2),
  [145] = {.count = 2, .reusable = true}, REDUCE(aux_sym_disjunction_repeat1, 2), SHIFT_REPEAT(2),
  [148] = {.count = 2, .reusable = true}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(3),
  [151] = {.count = 2, .reusable = true}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(4),
  [154] = {.count = 2, .reusable = true}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(5),
  [157] = {.count = 2, .reusable = false}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(6),
  [160] = {.count = 2, .reusable = true}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(7),
  [163] = {.count = 2, .reusable = false}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(8),
  [166] = {.count = 2, .reusable = true}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(9),
  [169] = {.count = 2, .reusable = false}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(3),
  [172] = {.count = 2, .reusable = false}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(10),
  [175] = {.count = 2, .reusable = true}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(11),
  [178] = {.count = 1, .reusable = true}, REDUCE(sym_zero_or_more, 2, .alias_sequence_id = 2),
  [180] = {.count = 1, .reusable = false}, REDUCE(sym_zero_or_more, 2, .alias_sequence_id = 2),
  [182] = {.count = 1, .reusable = true}, REDUCE(sym_optional, 2, .alias_sequence_id = 2),
  [184] = {.count = 1, .reusable = false}, REDUCE(sym_optional, 2, .alias_sequence_id = 2),
  [186] = {.count = 1, .reusable = true}, REDUCE(sym_one_or_more, 2, .alias_sequence_id = 2),
  [188] = {.count = 1, .reusable = false}, REDUCE(sym_one_or_more, 2, .alias_sequence_id = 2),
  [190] = {.count = 1, .reusable = true}, SHIFT(62),
  [192] = {.count = 1, .reusable = true}, SHIFT(63),
  [194] = {.count = 1, .reusable = true}, REDUCE(sym_non_capturing_group, 3),
  [196] = {.count = 1, .reusable = false}, REDUCE(sym_non_capturing_group, 3),
  [198] = {.count = 2, .reusable = true}, REDUCE(aux_sym_disjunction_repeat1, 2), SHIFT_REPEAT(23),
  [201] = {.count = 1, .reusable = true}, SHIFT(64),
  [203] = {.count = 1, .reusable = true}, REDUCE(sym_character_class, 3),
  [205] = {.count = 1, .reusable = false}, REDUCE(sym_character_class, 3),
  [207] = {.count = 1, .reusable = false}, SHIFT(65),
  [209] = {.count = 1, .reusable = true}, SHIFT(66),
  [211] = {.count = 1, .reusable = false}, REDUCE(aux_sym_character_class_repeat1, 2),
  [213] = {.count = 2, .reusable = false}, REDUCE(aux_sym_character_class_repeat1, 2), SHIFT_REPEAT(31),
  [216] = {.count = 2, .reusable = true}, REDUCE(aux_sym_character_class_repeat1, 2), SHIFT_REPEAT(31),
  [219] = {.count = 2, .reusable = false}, REDUCE(aux_sym_character_class_repeat1, 2), SHIFT_REPEAT(32),
  [222] = {.count = 2, .reusable = false}, REDUCE(aux_sym_character_class_repeat1, 2), SHIFT_REPEAT(33),
  [225] = {.count = 1, .reusable = true}, SHIFT(68),
  [227] = {.count = 1, .reusable = true}, REDUCE(sym_anonymous_capturing_group, 3),
  [229] = {.count = 1, .reusable = false}, REDUCE(sym_anonymous_capturing_group, 3),
  [231] = {.count = 1, .reusable = true}, SHIFT(71),
  [233] = {.count = 1, .reusable = true}, REDUCE(sym_count_quantifier, 3),
  [235] = {.count = 1, .reusable = false}, REDUCE(sym_count_quantifier, 3),
  [237] = {.count = 1, .reusable = true}, SHIFT(72),
  [239] = {.count = 1, .reusable = true}, REDUCE(sym_lookahead_assertion, 4),
  [241] = {.count = 1, .reusable = false}, REDUCE(sym_lookahead_assertion, 4),
  [243] = {.count = 1, .reusable = true}, REDUCE(sym_character_class, 4),
  [245] = {.count = 1, .reusable = false}, REDUCE(sym_character_class, 4),
  [247] = {.count = 1, .reusable = false}, REDUCE(sym_class_range, 3),
  [249] = {.count = 1, .reusable = true}, REDUCE(sym_class_range, 3),
  [251] = {.count = 1, .reusable = true}, SHIFT(74),
  [253] = {.count = 1, .reusable = true}, REDUCE(sym_unicode_property_value_expression, 1, .alias_sequence_id = 3),
  [255] = {.count = 1, .reusable = true}, SHIFT(75),
  [257] = {.count = 1, .reusable = true}, SHIFT(76),
  [259] = {.count = 1, .reusable = true}, SHIFT(77),
  [261] = {.count = 1, .reusable = true}, REDUCE(sym_count_quantifier, 4, .alias_sequence_id = 4),
  [263] = {.count = 1, .reusable = false}, REDUCE(sym_count_quantifier, 4, .alias_sequence_id = 4),
  [265] = {.count = 1, .reusable = true}, SHIFT(78),
  [267] = {.count = 1, .reusable = true}, SHIFT(79),
  [269] = {.count = 1, .reusable = true}, REDUCE(sym_character_class_escape, 5),
  [271] = {.count = 1, .reusable = false}, REDUCE(sym_character_class_escape, 5),
  [273] = {.count = 1, .reusable = true}, REDUCE(sym_named_capturing_group, 5),
  [275] = {.count = 1, .reusable = false}, REDUCE(sym_named_capturing_group, 5),
  [277] = {.count = 1, .reusable = true}, REDUCE(sym_count_quantifier, 5),
  [279] = {.count = 1, .reusable = false}, REDUCE(sym_count_quantifier, 5),
  [281] = {.count = 1, .reusable = true}, SHIFT(80),
  [283] = {.count = 1, .reusable = true}, REDUCE(sym_unicode_property_value_expression, 3, .alias_sequence_id = 5),
  [285] = {.count = 1, .reusable = true}, REDUCE(sym_count_quantifier, 6, .alias_sequence_id = 6),
  [287] = {.count = 1, .reusable = false}, REDUCE(sym_count_quantifier, 6, .alias_sequence_id = 6),
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
