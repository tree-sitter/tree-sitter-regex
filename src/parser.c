#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 84
#define SYMBOL_COUNT 62
#define ALIAS_COUNT 3
#define TOKEN_COUNT 40
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3

enum {
  anon_sym_PIPE = 1,
  anon_sym_DOT = 2,
  anon_sym_BSLASH = 3,
  anon_sym_LPAREN_QMARK_COLON = 4,
  anon_sym_RPAREN = 5,
  anon_sym_CARET = 6,
  anon_sym_DOLLAR = 7,
  anon_sym_BSLASHb = 8,
  anon_sym_BSLASHB = 9,
  anon_sym_LPAREN_QMARK = 10,
  anon_sym_EQ = 11,
  anon_sym_BANG = 12,
  anon_sym_LT_EQ = 13,
  anon_sym_LT_BANG = 14,
  anon_sym_LBRACK = 15,
  anon_sym_RBRACK = 16,
  anon_sym_DASH = 17,
  aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_BSLASH_RBRACK_BSLASH_DASH_RBRACK_SLASH = 18,
  anon_sym_b = 19,
  sym_pattern_character = 20,
  anon_sym_QMARK = 21,
  anon_sym_STAR = 22,
  anon_sym_PLUS = 23,
  anon_sym_LBRACE = 24,
  anon_sym_COMMA = 25,
  anon_sym_RBRACE = 26,
  sym_decimal_escape = 27,
  aux_sym_SLASH_LBRACKdDsSwW_RBRACK_SLASH = 28,
  aux_sym_SLASH_LBRACKpP_RBRACK_SLASH = 29,
  sym_unicode_property = 30,
  anon_sym_c = 31,
  sym_identity_escape = 32,
  sym_control_escape = 33,
  sym_control_letter = 34,
  anon_sym_LPAREN = 35,
  anon_sym_LPAREN_QMARK_LT = 36,
  anon_sym_GT = 37,
  sym_group_name = 38,
  sym_decimal_digits = 39,
  sym_pattern = 40,
  sym_disjunction = 41,
  sym_term = 42,
  sym_atom = 43,
  sym_non_capturing_group = 44,
  sym_assertion = 45,
  sym_character_class = 46,
  sym_class_range = 47,
  sym_class_atom = 48,
  sym_class_escape = 49,
  sym_quantifier = 50,
  sym_quantifier_prefix = 51,
  sym_count_quantifier = 52,
  sym_atom_escape = 53,
  sym_character_class_escape = 54,
  sym_unicode_property_value_expression = 55,
  sym_character_escape = 56,
  sym_anonymous_capturing_group = 57,
  sym_named_capturing_group = 58,
  aux_sym_disjunction_repeat1 = 59,
  aux_sym_term_repeat1 = 60,
  aux_sym_character_class_repeat1 = 61,
  alias_sym_non_greedy = 62,
  alias_sym_unicode_property_name = 63,
  alias_sym_unicode_property_value = 64,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [anon_sym_PIPE] = "|",
  [anon_sym_DOT] = ".",
  [anon_sym_BSLASH] = "\\",
  [anon_sym_LPAREN_QMARK_COLON] = "(?:",
  [anon_sym_RPAREN] = ")",
  [anon_sym_CARET] = "^",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_BSLASHb] = "\\b",
  [anon_sym_BSLASHB] = "\\B",
  [anon_sym_LPAREN_QMARK] = "(?",
  [anon_sym_EQ] = "=",
  [anon_sym_BANG] = "!",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_LT_BANG] = "<!",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_DASH] = "-",
  [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_BSLASH_RBRACK_BSLASH_DASH_RBRACK_SLASH] = "/[^\\\\\\]\\-]/",
  [anon_sym_b] = "b",
  [sym_pattern_character] = "pattern_character",
  [anon_sym_QMARK] = "?",
  [anon_sym_STAR] = "*",
  [anon_sym_PLUS] = "+",
  [anon_sym_LBRACE] = "{",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACE] = "}",
  [sym_decimal_escape] = "decimal_escape",
  [aux_sym_SLASH_LBRACKdDsSwW_RBRACK_SLASH] = "/[dDsSwW]/",
  [aux_sym_SLASH_LBRACKpP_RBRACK_SLASH] = "/[pP]/",
  [sym_unicode_property] = "unicode_property",
  [anon_sym_c] = "c",
  [sym_identity_escape] = "identity_escape",
  [sym_control_escape] = "control_escape",
  [sym_control_letter] = "control_letter",
  [anon_sym_LPAREN] = "(",
  [anon_sym_LPAREN_QMARK_LT] = "(?<",
  [anon_sym_GT] = ">",
  [sym_group_name] = "group_name",
  [sym_decimal_digits] = "decimal_digits",
  [sym_pattern] = "pattern",
  [sym_disjunction] = "disjunction",
  [sym_term] = "term",
  [sym_atom] = "atom",
  [sym_non_capturing_group] = "non_capturing_group",
  [sym_assertion] = "assertion",
  [sym_character_class] = "character_class",
  [sym_class_range] = "class_range",
  [sym_class_atom] = "class_atom",
  [sym_class_escape] = "class_escape",
  [sym_quantifier] = "quantifier",
  [sym_quantifier_prefix] = "quantifier_prefix",
  [sym_count_quantifier] = "count_quantifier",
  [sym_atom_escape] = "atom_escape",
  [sym_character_class_escape] = "character_class_escape",
  [sym_unicode_property_value_expression] = "unicode_property_value_expression",
  [sym_character_escape] = "character_escape",
  [sym_anonymous_capturing_group] = "anonymous_capturing_group",
  [sym_named_capturing_group] = "named_capturing_group",
  [aux_sym_disjunction_repeat1] = "disjunction_repeat1",
  [aux_sym_term_repeat1] = "term_repeat1",
  [aux_sym_character_class_repeat1] = "character_class_repeat1",
  [alias_sym_non_greedy] = "non_greedy",
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
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
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
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHB] = {
    .visible = true,
    .named = false,
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
  [anon_sym_b] = {
    .visible = true,
    .named = false,
  },
  [sym_pattern_character] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
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
  [anon_sym_c] = {
    .visible = true,
    .named = false,
  },
  [sym_identity_escape] = {
    .visible = true,
    .named = true,
  },
  [sym_control_escape] = {
    .visible = true,
    .named = true,
  },
  [sym_control_letter] = {
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
  [sym_atom] = {
    .visible = true,
    .named = true,
  },
  [sym_non_capturing_group] = {
    .visible = true,
    .named = true,
  },
  [sym_assertion] = {
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
  [sym_class_escape] = {
    .visible = true,
    .named = true,
  },
  [sym_quantifier] = {
    .visible = true,
    .named = true,
  },
  [sym_quantifier_prefix] = {
    .visible = true,
    .named = true,
  },
  [sym_count_quantifier] = {
    .visible = true,
    .named = true,
  },
  [sym_atom_escape] = {
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
  [sym_character_escape] = {
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
  [alias_sym_non_greedy] = {
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

static TSSymbol ts_alias_sequences[4][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [1] = {
    [1] = alias_sym_non_greedy,
  },
  [2] = {
    [0] = alias_sym_unicode_property_value,
  },
  [3] = {
    [0] = alias_sym_unicode_property_name,
    [2] = alias_sym_unicode_property_value,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0)
        ADVANCE(1);
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
      if (lookahead == '0')
        ADVANCE(11);
      if (lookahead == '=')
        ADVANCE(12);
      if (lookahead == '>')
        ADVANCE(13);
      if (lookahead == '?')
        ADVANCE(14);
      if (lookahead == '[')
        ADVANCE(15);
      if (lookahead == '\\')
        ADVANCE(16);
      if (lookahead == ']')
        ADVANCE(17);
      if (lookahead == '^')
        ADVANCE(18);
      if (lookahead == 'b')
        ADVANCE(19);
      if (lookahead == 'c')
        ADVANCE(20);
      if (lookahead == '{')
        ADVANCE(21);
      if (lookahead == '|')
        ADVANCE(22);
      if (lookahead == '}')
        ADVANCE(23);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(11);
      if (lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'v')
        ADVANCE(11);
      if (lookahead == 'D' ||
          lookahead == 'S' ||
          lookahead == 'W' ||
          lookahead == 'd' ||
          lookahead == 's' ||
          lookahead == 'w')
        ADVANCE(11);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      ADVANCE(11);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_LPAREN);
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
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_BSLASH_RBRACK_BSLASH_DASH_RBRACK_SLASH);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_b);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_c);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 24:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '$')
        ADVANCE(3);
      if (lookahead == '(')
        ADVANCE(25);
      if (lookahead == '.')
        ADVANCE(10);
      if (lookahead == '[')
        ADVANCE(15);
      if (lookahead == '\\')
        ADVANCE(29);
      if (lookahead == '^')
        ADVANCE(18);
      if (lookahead == '|')
        ADVANCE(22);
      if ((lookahead < '(' || lookahead > '+') &&
          lookahead != '?' &&
          (lookahead < '[' || lookahead > '^') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(32);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '?')
        ADVANCE(26);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_LPAREN_QMARK);
      if (lookahead == ':')
        ADVANCE(27);
      if (lookahead == '<')
        ADVANCE(28);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_LPAREN_QMARK_COLON);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_LPAREN_QMARK_LT);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == 'B')
        ADVANCE(30);
      if (lookahead == 'b')
        ADVANCE(31);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_BSLASHB);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_BSLASHb);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_pattern_character);
      END_STATE();
    case 33:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '$')
        ADVANCE(3);
      if (lookahead == '(')
        ADVANCE(25);
      if (lookahead == ')')
        ADVANCE(5);
      if (lookahead == '*')
        ADVANCE(6);
      if (lookahead == '+')
        ADVANCE(7);
      if (lookahead == '.')
        ADVANCE(10);
      if (lookahead == '?')
        ADVANCE(14);
      if (lookahead == '[')
        ADVANCE(15);
      if (lookahead == '\\')
        ADVANCE(29);
      if (lookahead == '^')
        ADVANCE(18);
      if (lookahead == '{')
        ADVANCE(21);
      if (lookahead == '|')
        ADVANCE(22);
      if ((lookahead < '[' || lookahead > '^') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(32);
      END_STATE();
    case 34:
      if (lookahead == 'c')
        ADVANCE(20);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(35);
      if (lookahead == '0' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'v')
        ADVANCE(36);
      if (lookahead == 'D' ||
          lookahead == 'S' ||
          lookahead == 'W' ||
          lookahead == 'd' ||
          lookahead == 's' ||
          lookahead == 'w')
        ADVANCE(37);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(38);
      if (lookahead == '$' ||
          ('(' <= lookahead && lookahead <= '+') ||
          lookahead == '.' ||
          lookahead == '?' ||
          ('[' <= lookahead && lookahead <= '^') ||
          ('{' <= lookahead && lookahead <= '}'))
        ADVANCE(40);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKpP_RBRACK_SLASH);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_control_escape);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKdDsSwW_RBRACK_SLASH);
      END_STATE();
    case 38:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(39);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_decimal_escape);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_identity_escape);
      END_STATE();
    case 41:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '<')
        ADVANCE(42);
      if (lookahead == '=')
        ADVANCE(12);
      END_STATE();
    case 42:
      if (lookahead == '!')
        ADVANCE(43);
      if (lookahead == '=')
        ADVANCE(44);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_LT_BANG);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 45:
      if (lookahead == '-')
        ADVANCE(9);
      if (lookahead == '\\')
        ADVANCE(16);
      if (lookahead == ']')
        ADVANCE(17);
      if (lookahead == '^')
        ADVANCE(18);
      if (lookahead != 0)
        ADVANCE(11);
      END_STATE();
    case 46:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_group_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 48:
      if (lookahead == 0)
        ADVANCE(1);
      END_STATE();
    case 49:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == ')')
        ADVANCE(5);
      END_STATE();
    case 50:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '|')
        ADVANCE(22);
      END_STATE();
    case 51:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == ')')
        ADVANCE(5);
      if (lookahead == '|')
        ADVANCE(22);
      END_STATE();
    case 52:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(53);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_control_letter);
      END_STATE();
    case 54:
      if (lookahead == '-')
        ADVANCE(9);
      if (lookahead == 'b')
        ADVANCE(19);
      if (lookahead == 'c')
        ADVANCE(20);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(35);
      if (lookahead == '0' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'v')
        ADVANCE(36);
      if (lookahead == 'D' ||
          lookahead == 'S' ||
          lookahead == 'W' ||
          lookahead == 'd' ||
          lookahead == 's' ||
          lookahead == 'w')
        ADVANCE(37);
      if (lookahead == '$' ||
          ('(' <= lookahead && lookahead <= '+') ||
          lookahead == '.' ||
          lookahead == '?' ||
          ('[' <= lookahead && lookahead <= '^') ||
          ('{' <= lookahead && lookahead <= '}'))
        ADVANCE(40);
      END_STATE();
    case 55:
      if (lookahead == '-')
        ADVANCE(9);
      if (lookahead == '\\')
        ADVANCE(16);
      if (lookahead == ']')
        ADVANCE(17);
      if (lookahead != 0)
        ADVANCE(11);
      END_STATE();
    case 56:
      if (lookahead == '>')
        ADVANCE(13);
      END_STATE();
    case 57:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '$')
        ADVANCE(3);
      if (lookahead == '(')
        ADVANCE(25);
      if (lookahead == ')')
        ADVANCE(5);
      if (lookahead == '.')
        ADVANCE(10);
      if (lookahead == '?')
        ADVANCE(14);
      if (lookahead == '[')
        ADVANCE(15);
      if (lookahead == '\\')
        ADVANCE(29);
      if (lookahead == '^')
        ADVANCE(18);
      if (lookahead == '|')
        ADVANCE(22);
      if ((lookahead < '(' || lookahead > '+') &&
          (lookahead < '[' || lookahead > '^') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(32);
      END_STATE();
    case 58:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(59);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_decimal_digits);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(59);
      END_STATE();
    case 60:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '$')
        ADVANCE(3);
      if (lookahead == '(')
        ADVANCE(25);
      if (lookahead == ')')
        ADVANCE(5);
      if (lookahead == '.')
        ADVANCE(10);
      if (lookahead == '[')
        ADVANCE(15);
      if (lookahead == '\\')
        ADVANCE(29);
      if (lookahead == '^')
        ADVANCE(18);
      if (lookahead == '|')
        ADVANCE(22);
      if ((lookahead < '(' || lookahead > '+') &&
          lookahead != '?' &&
          (lookahead < '[' || lookahead > '^') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(32);
      END_STATE();
    case 61:
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
      if (lookahead == ',')
        ADVANCE(8);
      if (lookahead == '}')
        ADVANCE(23);
      END_STATE();
    case 64:
      if (lookahead == '=')
        ADVANCE(12);
      if (lookahead == '}')
        ADVANCE(23);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 24},
  [2] = {.lex_state = 24},
  [3] = {.lex_state = 33},
  [4] = {.lex_state = 34},
  [5] = {.lex_state = 24},
  [6] = {.lex_state = 33},
  [7] = {.lex_state = 41},
  [8] = {.lex_state = 45},
  [9] = {.lex_state = 24},
  [10] = {.lex_state = 46},
  [11] = {.lex_state = 48},
  [12] = {.lex_state = 49},
  [13] = {.lex_state = 50},
  [14] = {.lex_state = 33},
  [15] = {.lex_state = 50},
  [16] = {.lex_state = 24},
  [17] = {.lex_state = 51},
  [18] = {.lex_state = 33},
  [19] = {.lex_state = 33},
  [20] = {.lex_state = 33},
  [21] = {.lex_state = 52},
  [22] = {.lex_state = 33},
  [23] = {.lex_state = 33},
  [24] = {.lex_state = 33},
  [25] = {.lex_state = 33},
  [26] = {.lex_state = 33},
  [27] = {.lex_state = 33},
  [28] = {.lex_state = 33},
  [29] = {.lex_state = 24},
  [30] = {.lex_state = 54},
  [31] = {.lex_state = 55},
  [32] = {.lex_state = 33},
  [33] = {.lex_state = 55},
  [34] = {.lex_state = 55},
  [35] = {.lex_state = 55},
  [36] = {.lex_state = 33},
  [37] = {.lex_state = 56},
  [38] = {.lex_state = 50},
  [39] = {.lex_state = 57},
  [40] = {.lex_state = 58},
  [41] = {.lex_state = 60},
  [42] = {.lex_state = 57},
  [43] = {.lex_state = 50},
  [44] = {.lex_state = 24},
  [45] = {.lex_state = 61},
  [46] = {.lex_state = 33},
  [47] = {.lex_state = 33},
  [48] = {.lex_state = 33},
  [49] = {.lex_state = 33},
  [50] = {.lex_state = 33},
  [51] = {.lex_state = 33},
  [52] = {.lex_state = 55},
  [53] = {.lex_state = 55},
  [54] = {.lex_state = 33},
  [55] = {.lex_state = 52},
  [56] = {.lex_state = 55},
  [57] = {.lex_state = 55},
  [58] = {.lex_state = 33},
  [59] = {.lex_state = 55},
  [60] = {.lex_state = 55},
  [61] = {.lex_state = 55},
  [62] = {.lex_state = 33},
  [63] = {.lex_state = 24},
  [64] = {.lex_state = 63},
  [65] = {.lex_state = 60},
  [66] = {.lex_state = 64},
  [67] = {.lex_state = 63},
  [68] = {.lex_state = 33},
  [69] = {.lex_state = 61},
  [70] = {.lex_state = 55},
  [71] = {.lex_state = 33},
  [72] = {.lex_state = 55},
  [73] = {.lex_state = 33},
  [74] = {.lex_state = 58},
  [75] = {.lex_state = 57},
  [76] = {.lex_state = 61},
  [77] = {.lex_state = 33},
  [78] = {.lex_state = 63},
  [79] = {.lex_state = 33},
  [80] = {.lex_state = 63},
  [81] = {.lex_state = 63},
  [82] = {.lex_state = 55},
  [83] = {.lex_state = 57},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_BSLASH_RBRACK_BSLASH_DASH_RBRACK_SLASH] = ACTIONS(3),
    [anon_sym_b] = ACTIONS(1),
    [sym_pattern_character] = ACTIONS(3),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [aux_sym_SLASH_LBRACKdDsSwW_RBRACK_SLASH] = ACTIONS(3),
    [aux_sym_SLASH_LBRACKpP_RBRACK_SLASH] = ACTIONS(3),
    [anon_sym_c] = ACTIONS(1),
    [sym_identity_escape] = ACTIONS(3),
    [sym_control_escape] = ACTIONS(3),
    [sym_control_letter] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
  },
  [1] = {
    [sym_pattern] = STATE(11),
    [sym_disjunction] = STATE(12),
    [sym_term] = STATE(13),
    [sym_atom] = STATE(14),
    [sym_non_capturing_group] = STATE(3),
    [sym_assertion] = STATE(3),
    [sym_character_class] = STATE(3),
    [sym_anonymous_capturing_group] = STATE(3),
    [sym_named_capturing_group] = STATE(3),
    [aux_sym_disjunction_repeat1] = STATE(15),
    [aux_sym_term_repeat1] = STATE(16),
    [anon_sym_PIPE] = ACTIONS(5),
    [anon_sym_DOT] = ACTIONS(7),
    [anon_sym_BSLASH] = ACTIONS(9),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(11),
    [anon_sym_CARET] = ACTIONS(13),
    [anon_sym_DOLLAR] = ACTIONS(13),
    [anon_sym_BSLASHb] = ACTIONS(13),
    [anon_sym_BSLASHB] = ACTIONS(13),
    [anon_sym_LPAREN_QMARK] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_pattern_character] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(21),
  },
  [2] = {
    [sym_term] = STATE(17),
    [sym_atom] = STATE(14),
    [sym_non_capturing_group] = STATE(3),
    [sym_assertion] = STATE(3),
    [sym_character_class] = STATE(3),
    [sym_anonymous_capturing_group] = STATE(3),
    [sym_named_capturing_group] = STATE(3),
    [aux_sym_term_repeat1] = STATE(16),
    [ts_builtin_sym_end] = ACTIONS(23),
    [anon_sym_PIPE] = ACTIONS(23),
    [anon_sym_DOT] = ACTIONS(7),
    [anon_sym_BSLASH] = ACTIONS(9),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(11),
    [anon_sym_CARET] = ACTIONS(13),
    [anon_sym_DOLLAR] = ACTIONS(13),
    [anon_sym_BSLASHb] = ACTIONS(13),
    [anon_sym_BSLASHB] = ACTIONS(13),
    [anon_sym_LPAREN_QMARK] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_pattern_character] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(21),
  },
  [3] = {
    [ts_builtin_sym_end] = ACTIONS(25),
    [anon_sym_PIPE] = ACTIONS(25),
    [anon_sym_DOT] = ACTIONS(25),
    [anon_sym_BSLASH] = ACTIONS(27),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(25),
    [anon_sym_RPAREN] = ACTIONS(25),
    [anon_sym_CARET] = ACTIONS(25),
    [anon_sym_DOLLAR] = ACTIONS(25),
    [anon_sym_BSLASHb] = ACTIONS(25),
    [anon_sym_BSLASHB] = ACTIONS(25),
    [anon_sym_LPAREN_QMARK] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(25),
    [sym_pattern_character] = ACTIONS(25),
    [anon_sym_QMARK] = ACTIONS(25),
    [anon_sym_STAR] = ACTIONS(25),
    [anon_sym_PLUS] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(25),
  },
  [4] = {
    [sym_atom_escape] = STATE(23),
    [sym_character_class_escape] = STATE(18),
    [sym_character_escape] = STATE(18),
    [sym_decimal_escape] = ACTIONS(29),
    [aux_sym_SLASH_LBRACKdDsSwW_RBRACK_SLASH] = ACTIONS(31),
    [aux_sym_SLASH_LBRACKpP_RBRACK_SLASH] = ACTIONS(33),
    [anon_sym_c] = ACTIONS(35),
    [sym_identity_escape] = ACTIONS(37),
    [sym_control_escape] = ACTIONS(37),
  },
  [5] = {
    [sym_pattern] = STATE(25),
    [sym_disjunction] = STATE(12),
    [sym_term] = STATE(26),
    [sym_atom] = STATE(14),
    [sym_non_capturing_group] = STATE(3),
    [sym_assertion] = STATE(3),
    [sym_character_class] = STATE(3),
    [sym_anonymous_capturing_group] = STATE(3),
    [sym_named_capturing_group] = STATE(3),
    [aux_sym_disjunction_repeat1] = STATE(27),
    [aux_sym_term_repeat1] = STATE(28),
    [anon_sym_PIPE] = ACTIONS(39),
    [anon_sym_DOT] = ACTIONS(7),
    [anon_sym_BSLASH] = ACTIONS(9),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(11),
    [anon_sym_CARET] = ACTIONS(13),
    [anon_sym_DOLLAR] = ACTIONS(13),
    [anon_sym_BSLASHb] = ACTIONS(13),
    [anon_sym_BSLASHB] = ACTIONS(13),
    [anon_sym_LPAREN_QMARK] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_pattern_character] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(21),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(41),
    [anon_sym_PIPE] = ACTIONS(41),
    [anon_sym_DOT] = ACTIONS(41),
    [anon_sym_BSLASH] = ACTIONS(43),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(41),
    [anon_sym_RPAREN] = ACTIONS(41),
    [anon_sym_CARET] = ACTIONS(41),
    [anon_sym_DOLLAR] = ACTIONS(41),
    [anon_sym_BSLASHb] = ACTIONS(41),
    [anon_sym_BSLASHB] = ACTIONS(41),
    [anon_sym_LPAREN_QMARK] = ACTIONS(43),
    [anon_sym_LBRACK] = ACTIONS(41),
    [sym_pattern_character] = ACTIONS(41),
    [anon_sym_QMARK] = ACTIONS(41),
    [anon_sym_STAR] = ACTIONS(41),
    [anon_sym_PLUS] = ACTIONS(41),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(41),
  },
  [7] = {
    [anon_sym_EQ] = ACTIONS(45),
    [anon_sym_BANG] = ACTIONS(45),
    [anon_sym_LT_EQ] = ACTIONS(45),
    [anon_sym_LT_BANG] = ACTIONS(45),
  },
  [8] = {
    [sym_class_range] = STATE(35),
    [sym_class_atom] = STATE(34),
    [aux_sym_character_class_repeat1] = STATE(35),
    [anon_sym_BSLASH] = ACTIONS(47),
    [anon_sym_CARET] = ACTIONS(49),
    [anon_sym_RBRACK] = ACTIONS(51),
    [anon_sym_DASH] = ACTIONS(53),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_BSLASH_RBRACK_BSLASH_DASH_RBRACK_SLASH] = ACTIONS(55),
  },
  [9] = {
    [sym_pattern] = STATE(36),
    [sym_disjunction] = STATE(12),
    [sym_term] = STATE(26),
    [sym_atom] = STATE(14),
    [sym_non_capturing_group] = STATE(3),
    [sym_assertion] = STATE(3),
    [sym_character_class] = STATE(3),
    [sym_anonymous_capturing_group] = STATE(3),
    [sym_named_capturing_group] = STATE(3),
    [aux_sym_disjunction_repeat1] = STATE(27),
    [aux_sym_term_repeat1] = STATE(28),
    [anon_sym_PIPE] = ACTIONS(39),
    [anon_sym_DOT] = ACTIONS(7),
    [anon_sym_BSLASH] = ACTIONS(9),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(11),
    [anon_sym_CARET] = ACTIONS(13),
    [anon_sym_DOLLAR] = ACTIONS(13),
    [anon_sym_BSLASHb] = ACTIONS(13),
    [anon_sym_BSLASHB] = ACTIONS(13),
    [anon_sym_LPAREN_QMARK] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_pattern_character] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(21),
  },
  [10] = {
    [sym_group_name] = ACTIONS(57),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(59),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(61),
    [anon_sym_RPAREN] = ACTIONS(61),
  },
  [13] = {
    [aux_sym_disjunction_repeat1] = STATE(38),
    [ts_builtin_sym_end] = ACTIONS(61),
    [anon_sym_PIPE] = ACTIONS(5),
  },
  [14] = {
    [sym_quantifier] = STATE(41),
    [sym_quantifier_prefix] = STATE(42),
    [sym_count_quantifier] = STATE(39),
    [ts_builtin_sym_end] = ACTIONS(63),
    [anon_sym_PIPE] = ACTIONS(63),
    [anon_sym_DOT] = ACTIONS(63),
    [anon_sym_BSLASH] = ACTIONS(65),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(63),
    [anon_sym_RPAREN] = ACTIONS(63),
    [anon_sym_CARET] = ACTIONS(63),
    [anon_sym_DOLLAR] = ACTIONS(63),
    [anon_sym_BSLASHb] = ACTIONS(63),
    [anon_sym_BSLASHB] = ACTIONS(63),
    [anon_sym_LPAREN_QMARK] = ACTIONS(65),
    [anon_sym_LBRACK] = ACTIONS(63),
    [sym_pattern_character] = ACTIONS(63),
    [anon_sym_QMARK] = ACTIONS(67),
    [anon_sym_STAR] = ACTIONS(67),
    [anon_sym_PLUS] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(69),
    [anon_sym_LPAREN] = ACTIONS(65),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(63),
  },
  [15] = {
    [aux_sym_disjunction_repeat1] = STATE(43),
    [ts_builtin_sym_end] = ACTIONS(71),
    [anon_sym_PIPE] = ACTIONS(5),
  },
  [16] = {
    [sym_atom] = STATE(14),
    [sym_non_capturing_group] = STATE(3),
    [sym_assertion] = STATE(3),
    [sym_character_class] = STATE(3),
    [sym_anonymous_capturing_group] = STATE(3),
    [sym_named_capturing_group] = STATE(3),
    [aux_sym_term_repeat1] = STATE(44),
    [ts_builtin_sym_end] = ACTIONS(73),
    [anon_sym_PIPE] = ACTIONS(73),
    [anon_sym_DOT] = ACTIONS(7),
    [anon_sym_BSLASH] = ACTIONS(9),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(11),
    [anon_sym_CARET] = ACTIONS(13),
    [anon_sym_DOLLAR] = ACTIONS(13),
    [anon_sym_BSLASHb] = ACTIONS(13),
    [anon_sym_BSLASHB] = ACTIONS(13),
    [anon_sym_LPAREN_QMARK] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_pattern_character] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(21),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(75),
    [anon_sym_PIPE] = ACTIONS(75),
    [anon_sym_RPAREN] = ACTIONS(75),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(77),
    [anon_sym_PIPE] = ACTIONS(77),
    [anon_sym_DOT] = ACTIONS(77),
    [anon_sym_BSLASH] = ACTIONS(79),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(77),
    [anon_sym_RPAREN] = ACTIONS(77),
    [anon_sym_CARET] = ACTIONS(77),
    [anon_sym_DOLLAR] = ACTIONS(77),
    [anon_sym_BSLASHb] = ACTIONS(77),
    [anon_sym_BSLASHB] = ACTIONS(77),
    [anon_sym_LPAREN_QMARK] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(77),
    [sym_pattern_character] = ACTIONS(77),
    [anon_sym_QMARK] = ACTIONS(77),
    [anon_sym_STAR] = ACTIONS(77),
    [anon_sym_PLUS] = ACTIONS(77),
    [anon_sym_LBRACE] = ACTIONS(77),
    [anon_sym_LPAREN] = ACTIONS(79),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(77),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(81),
    [anon_sym_PIPE] = ACTIONS(81),
    [anon_sym_DOT] = ACTIONS(81),
    [anon_sym_BSLASH] = ACTIONS(83),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(81),
    [anon_sym_RPAREN] = ACTIONS(81),
    [anon_sym_CARET] = ACTIONS(81),
    [anon_sym_DOLLAR] = ACTIONS(81),
    [anon_sym_BSLASHb] = ACTIONS(81),
    [anon_sym_BSLASHB] = ACTIONS(81),
    [anon_sym_LPAREN_QMARK] = ACTIONS(83),
    [anon_sym_LBRACK] = ACTIONS(81),
    [sym_pattern_character] = ACTIONS(81),
    [anon_sym_QMARK] = ACTIONS(81),
    [anon_sym_STAR] = ACTIONS(81),
    [anon_sym_PLUS] = ACTIONS(81),
    [anon_sym_LBRACE] = ACTIONS(81),
    [anon_sym_LPAREN] = ACTIONS(83),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(81),
  },
  [20] = {
    [anon_sym_LBRACE] = ACTIONS(85),
  },
  [21] = {
    [sym_control_letter] = ACTIONS(87),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(89),
    [anon_sym_PIPE] = ACTIONS(89),
    [anon_sym_DOT] = ACTIONS(89),
    [anon_sym_BSLASH] = ACTIONS(91),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(89),
    [anon_sym_RPAREN] = ACTIONS(89),
    [anon_sym_CARET] = ACTIONS(89),
    [anon_sym_DOLLAR] = ACTIONS(89),
    [anon_sym_BSLASHb] = ACTIONS(89),
    [anon_sym_BSLASHB] = ACTIONS(89),
    [anon_sym_LPAREN_QMARK] = ACTIONS(91),
    [anon_sym_LBRACK] = ACTIONS(89),
    [sym_pattern_character] = ACTIONS(89),
    [anon_sym_QMARK] = ACTIONS(89),
    [anon_sym_STAR] = ACTIONS(89),
    [anon_sym_PLUS] = ACTIONS(89),
    [anon_sym_LBRACE] = ACTIONS(89),
    [anon_sym_LPAREN] = ACTIONS(91),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(89),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(93),
    [anon_sym_PIPE] = ACTIONS(93),
    [anon_sym_DOT] = ACTIONS(93),
    [anon_sym_BSLASH] = ACTIONS(95),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(93),
    [anon_sym_RPAREN] = ACTIONS(93),
    [anon_sym_CARET] = ACTIONS(93),
    [anon_sym_DOLLAR] = ACTIONS(93),
    [anon_sym_BSLASHb] = ACTIONS(93),
    [anon_sym_BSLASHB] = ACTIONS(93),
    [anon_sym_LPAREN_QMARK] = ACTIONS(95),
    [anon_sym_LBRACK] = ACTIONS(93),
    [sym_pattern_character] = ACTIONS(93),
    [anon_sym_QMARK] = ACTIONS(93),
    [anon_sym_STAR] = ACTIONS(93),
    [anon_sym_PLUS] = ACTIONS(93),
    [anon_sym_LBRACE] = ACTIONS(93),
    [anon_sym_LPAREN] = ACTIONS(95),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(93),
  },
  [24] = {
    [sym_term] = STATE(17),
    [sym_atom] = STATE(14),
    [sym_non_capturing_group] = STATE(3),
    [sym_assertion] = STATE(3),
    [sym_character_class] = STATE(3),
    [sym_anonymous_capturing_group] = STATE(3),
    [sym_named_capturing_group] = STATE(3),
    [aux_sym_term_repeat1] = STATE(28),
    [anon_sym_PIPE] = ACTIONS(23),
    [anon_sym_DOT] = ACTIONS(7),
    [anon_sym_BSLASH] = ACTIONS(9),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(11),
    [anon_sym_RPAREN] = ACTIONS(23),
    [anon_sym_CARET] = ACTIONS(13),
    [anon_sym_DOLLAR] = ACTIONS(13),
    [anon_sym_BSLASHb] = ACTIONS(13),
    [anon_sym_BSLASHB] = ACTIONS(13),
    [anon_sym_LPAREN_QMARK] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_pattern_character] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(21),
  },
  [25] = {
    [anon_sym_RPAREN] = ACTIONS(97),
  },
  [26] = {
    [aux_sym_disjunction_repeat1] = STATE(48),
    [anon_sym_PIPE] = ACTIONS(39),
    [anon_sym_RPAREN] = ACTIONS(61),
  },
  [27] = {
    [aux_sym_disjunction_repeat1] = STATE(49),
    [anon_sym_PIPE] = ACTIONS(39),
    [anon_sym_RPAREN] = ACTIONS(71),
  },
  [28] = {
    [sym_atom] = STATE(14),
    [sym_non_capturing_group] = STATE(3),
    [sym_assertion] = STATE(3),
    [sym_character_class] = STATE(3),
    [sym_anonymous_capturing_group] = STATE(3),
    [sym_named_capturing_group] = STATE(3),
    [aux_sym_term_repeat1] = STATE(50),
    [anon_sym_PIPE] = ACTIONS(73),
    [anon_sym_DOT] = ACTIONS(7),
    [anon_sym_BSLASH] = ACTIONS(9),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(11),
    [anon_sym_RPAREN] = ACTIONS(73),
    [anon_sym_CARET] = ACTIONS(13),
    [anon_sym_DOLLAR] = ACTIONS(13),
    [anon_sym_BSLASHb] = ACTIONS(13),
    [anon_sym_BSLASHB] = ACTIONS(13),
    [anon_sym_LPAREN_QMARK] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_pattern_character] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(21),
  },
  [29] = {
    [sym_pattern] = STATE(51),
    [sym_disjunction] = STATE(12),
    [sym_term] = STATE(26),
    [sym_atom] = STATE(14),
    [sym_non_capturing_group] = STATE(3),
    [sym_assertion] = STATE(3),
    [sym_character_class] = STATE(3),
    [sym_anonymous_capturing_group] = STATE(3),
    [sym_named_capturing_group] = STATE(3),
    [aux_sym_disjunction_repeat1] = STATE(27),
    [aux_sym_term_repeat1] = STATE(28),
    [anon_sym_PIPE] = ACTIONS(39),
    [anon_sym_DOT] = ACTIONS(7),
    [anon_sym_BSLASH] = ACTIONS(9),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(11),
    [anon_sym_CARET] = ACTIONS(13),
    [anon_sym_DOLLAR] = ACTIONS(13),
    [anon_sym_BSLASHb] = ACTIONS(13),
    [anon_sym_BSLASHB] = ACTIONS(13),
    [anon_sym_LPAREN_QMARK] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_pattern_character] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(21),
  },
  [30] = {
    [sym_class_escape] = STATE(57),
    [sym_character_class_escape] = STATE(52),
    [sym_character_escape] = STATE(52),
    [anon_sym_DASH] = ACTIONS(99),
    [anon_sym_b] = ACTIONS(99),
    [aux_sym_SLASH_LBRACKdDsSwW_RBRACK_SLASH] = ACTIONS(101),
    [aux_sym_SLASH_LBRACKpP_RBRACK_SLASH] = ACTIONS(103),
    [anon_sym_c] = ACTIONS(105),
    [sym_identity_escape] = ACTIONS(107),
    [sym_control_escape] = ACTIONS(107),
  },
  [31] = {
    [sym_class_range] = STATE(59),
    [sym_class_atom] = STATE(34),
    [aux_sym_character_class_repeat1] = STATE(59),
    [anon_sym_BSLASH] = ACTIONS(47),
    [anon_sym_RBRACK] = ACTIONS(109),
    [anon_sym_DASH] = ACTIONS(53),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_BSLASH_RBRACK_BSLASH_DASH_RBRACK_SLASH] = ACTIONS(53),
  },
  [32] = {
    [ts_builtin_sym_end] = ACTIONS(111),
    [anon_sym_PIPE] = ACTIONS(111),
    [anon_sym_DOT] = ACTIONS(111),
    [anon_sym_BSLASH] = ACTIONS(113),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(111),
    [anon_sym_RPAREN] = ACTIONS(111),
    [anon_sym_CARET] = ACTIONS(111),
    [anon_sym_DOLLAR] = ACTIONS(111),
    [anon_sym_BSLASHb] = ACTIONS(111),
    [anon_sym_BSLASHB] = ACTIONS(111),
    [anon_sym_LPAREN_QMARK] = ACTIONS(113),
    [anon_sym_LBRACK] = ACTIONS(111),
    [sym_pattern_character] = ACTIONS(111),
    [anon_sym_QMARK] = ACTIONS(111),
    [anon_sym_STAR] = ACTIONS(111),
    [anon_sym_PLUS] = ACTIONS(111),
    [anon_sym_LBRACE] = ACTIONS(111),
    [anon_sym_LPAREN] = ACTIONS(113),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(111),
  },
  [33] = {
    [anon_sym_BSLASH] = ACTIONS(115),
    [anon_sym_RBRACK] = ACTIONS(115),
    [anon_sym_DASH] = ACTIONS(115),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_BSLASH_RBRACK_BSLASH_DASH_RBRACK_SLASH] = ACTIONS(115),
  },
  [34] = {
    [anon_sym_BSLASH] = ACTIONS(117),
    [anon_sym_RBRACK] = ACTIONS(117),
    [anon_sym_DASH] = ACTIONS(119),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_BSLASH_RBRACK_BSLASH_DASH_RBRACK_SLASH] = ACTIONS(117),
  },
  [35] = {
    [sym_class_range] = STATE(61),
    [sym_class_atom] = STATE(34),
    [aux_sym_character_class_repeat1] = STATE(61),
    [anon_sym_BSLASH] = ACTIONS(47),
    [anon_sym_RBRACK] = ACTIONS(109),
    [anon_sym_DASH] = ACTIONS(53),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_BSLASH_RBRACK_BSLASH_DASH_RBRACK_SLASH] = ACTIONS(53),
  },
  [36] = {
    [anon_sym_RPAREN] = ACTIONS(121),
  },
  [37] = {
    [anon_sym_GT] = ACTIONS(123),
  },
  [38] = {
    [aux_sym_disjunction_repeat1] = STATE(43),
    [ts_builtin_sym_end] = ACTIONS(125),
    [anon_sym_PIPE] = ACTIONS(5),
  },
  [39] = {
    [ts_builtin_sym_end] = ACTIONS(127),
    [anon_sym_PIPE] = ACTIONS(127),
    [anon_sym_DOT] = ACTIONS(127),
    [anon_sym_BSLASH] = ACTIONS(129),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(127),
    [anon_sym_RPAREN] = ACTIONS(127),
    [anon_sym_CARET] = ACTIONS(127),
    [anon_sym_DOLLAR] = ACTIONS(127),
    [anon_sym_BSLASHb] = ACTIONS(127),
    [anon_sym_BSLASHB] = ACTIONS(127),
    [anon_sym_LPAREN_QMARK] = ACTIONS(129),
    [anon_sym_LBRACK] = ACTIONS(127),
    [sym_pattern_character] = ACTIONS(127),
    [anon_sym_QMARK] = ACTIONS(127),
    [anon_sym_LPAREN] = ACTIONS(129),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(127),
  },
  [40] = {
    [sym_decimal_digits] = ACTIONS(131),
  },
  [41] = {
    [ts_builtin_sym_end] = ACTIONS(133),
    [anon_sym_PIPE] = ACTIONS(133),
    [anon_sym_DOT] = ACTIONS(133),
    [anon_sym_BSLASH] = ACTIONS(135),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(133),
    [anon_sym_RPAREN] = ACTIONS(133),
    [anon_sym_CARET] = ACTIONS(133),
    [anon_sym_DOLLAR] = ACTIONS(133),
    [anon_sym_BSLASHb] = ACTIONS(133),
    [anon_sym_BSLASHB] = ACTIONS(133),
    [anon_sym_LPAREN_QMARK] = ACTIONS(135),
    [anon_sym_LBRACK] = ACTIONS(133),
    [sym_pattern_character] = ACTIONS(133),
    [anon_sym_LPAREN] = ACTIONS(135),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(133),
  },
  [42] = {
    [ts_builtin_sym_end] = ACTIONS(137),
    [anon_sym_PIPE] = ACTIONS(137),
    [anon_sym_DOT] = ACTIONS(137),
    [anon_sym_BSLASH] = ACTIONS(139),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(137),
    [anon_sym_RPAREN] = ACTIONS(137),
    [anon_sym_CARET] = ACTIONS(137),
    [anon_sym_DOLLAR] = ACTIONS(137),
    [anon_sym_BSLASHb] = ACTIONS(137),
    [anon_sym_BSLASHB] = ACTIONS(137),
    [anon_sym_LPAREN_QMARK] = ACTIONS(139),
    [anon_sym_LBRACK] = ACTIONS(137),
    [sym_pattern_character] = ACTIONS(137),
    [anon_sym_QMARK] = ACTIONS(141),
    [anon_sym_LPAREN] = ACTIONS(139),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(137),
  },
  [43] = {
    [aux_sym_disjunction_repeat1] = STATE(43),
    [ts_builtin_sym_end] = ACTIONS(75),
    [anon_sym_PIPE] = ACTIONS(143),
  },
  [44] = {
    [sym_atom] = STATE(14),
    [sym_non_capturing_group] = STATE(3),
    [sym_assertion] = STATE(3),
    [sym_character_class] = STATE(3),
    [sym_anonymous_capturing_group] = STATE(3),
    [sym_named_capturing_group] = STATE(3),
    [aux_sym_term_repeat1] = STATE(44),
    [ts_builtin_sym_end] = ACTIONS(133),
    [anon_sym_PIPE] = ACTIONS(133),
    [anon_sym_DOT] = ACTIONS(146),
    [anon_sym_BSLASH] = ACTIONS(149),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(152),
    [anon_sym_CARET] = ACTIONS(155),
    [anon_sym_DOLLAR] = ACTIONS(155),
    [anon_sym_BSLASHb] = ACTIONS(155),
    [anon_sym_BSLASHB] = ACTIONS(155),
    [anon_sym_LPAREN_QMARK] = ACTIONS(158),
    [anon_sym_LBRACK] = ACTIONS(161),
    [sym_pattern_character] = ACTIONS(146),
    [anon_sym_LPAREN] = ACTIONS(164),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(167),
  },
  [45] = {
    [sym_unicode_property_value_expression] = STATE(67),
    [sym_unicode_property] = ACTIONS(170),
  },
  [46] = {
    [ts_builtin_sym_end] = ACTIONS(172),
    [anon_sym_PIPE] = ACTIONS(172),
    [anon_sym_DOT] = ACTIONS(172),
    [anon_sym_BSLASH] = ACTIONS(174),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(172),
    [anon_sym_RPAREN] = ACTIONS(172),
    [anon_sym_CARET] = ACTIONS(172),
    [anon_sym_DOLLAR] = ACTIONS(172),
    [anon_sym_BSLASHb] = ACTIONS(172),
    [anon_sym_BSLASHB] = ACTIONS(172),
    [anon_sym_LPAREN_QMARK] = ACTIONS(174),
    [anon_sym_LBRACK] = ACTIONS(172),
    [sym_pattern_character] = ACTIONS(172),
    [anon_sym_QMARK] = ACTIONS(172),
    [anon_sym_STAR] = ACTIONS(172),
    [anon_sym_PLUS] = ACTIONS(172),
    [anon_sym_LBRACE] = ACTIONS(172),
    [anon_sym_LPAREN] = ACTIONS(174),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(172),
  },
  [47] = {
    [ts_builtin_sym_end] = ACTIONS(176),
    [anon_sym_PIPE] = ACTIONS(176),
    [anon_sym_DOT] = ACTIONS(176),
    [anon_sym_BSLASH] = ACTIONS(178),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(176),
    [anon_sym_RPAREN] = ACTIONS(176),
    [anon_sym_CARET] = ACTIONS(176),
    [anon_sym_DOLLAR] = ACTIONS(176),
    [anon_sym_BSLASHb] = ACTIONS(176),
    [anon_sym_BSLASHB] = ACTIONS(176),
    [anon_sym_LPAREN_QMARK] = ACTIONS(178),
    [anon_sym_LBRACK] = ACTIONS(176),
    [sym_pattern_character] = ACTIONS(176),
    [anon_sym_QMARK] = ACTIONS(176),
    [anon_sym_STAR] = ACTIONS(176),
    [anon_sym_PLUS] = ACTIONS(176),
    [anon_sym_LBRACE] = ACTIONS(176),
    [anon_sym_LPAREN] = ACTIONS(178),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(176),
  },
  [48] = {
    [aux_sym_disjunction_repeat1] = STATE(49),
    [anon_sym_PIPE] = ACTIONS(39),
    [anon_sym_RPAREN] = ACTIONS(125),
  },
  [49] = {
    [aux_sym_disjunction_repeat1] = STATE(49),
    [anon_sym_PIPE] = ACTIONS(180),
    [anon_sym_RPAREN] = ACTIONS(75),
  },
  [50] = {
    [sym_atom] = STATE(14),
    [sym_non_capturing_group] = STATE(3),
    [sym_assertion] = STATE(3),
    [sym_character_class] = STATE(3),
    [sym_anonymous_capturing_group] = STATE(3),
    [sym_named_capturing_group] = STATE(3),
    [aux_sym_term_repeat1] = STATE(50),
    [anon_sym_PIPE] = ACTIONS(133),
    [anon_sym_DOT] = ACTIONS(146),
    [anon_sym_BSLASH] = ACTIONS(149),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(152),
    [anon_sym_RPAREN] = ACTIONS(133),
    [anon_sym_CARET] = ACTIONS(155),
    [anon_sym_DOLLAR] = ACTIONS(155),
    [anon_sym_BSLASHb] = ACTIONS(155),
    [anon_sym_BSLASHB] = ACTIONS(155),
    [anon_sym_LPAREN_QMARK] = ACTIONS(158),
    [anon_sym_LBRACK] = ACTIONS(161),
    [sym_pattern_character] = ACTIONS(146),
    [anon_sym_LPAREN] = ACTIONS(164),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(167),
  },
  [51] = {
    [anon_sym_RPAREN] = ACTIONS(183),
  },
  [52] = {
    [anon_sym_BSLASH] = ACTIONS(185),
    [anon_sym_RBRACK] = ACTIONS(185),
    [anon_sym_DASH] = ACTIONS(185),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_BSLASH_RBRACK_BSLASH_DASH_RBRACK_SLASH] = ACTIONS(185),
  },
  [53] = {
    [anon_sym_BSLASH] = ACTIONS(81),
    [anon_sym_RBRACK] = ACTIONS(81),
    [anon_sym_DASH] = ACTIONS(81),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_BSLASH_RBRACK_BSLASH_DASH_RBRACK_SLASH] = ACTIONS(81),
  },
  [54] = {
    [anon_sym_LBRACE] = ACTIONS(187),
  },
  [55] = {
    [sym_control_letter] = ACTIONS(189),
  },
  [56] = {
    [anon_sym_BSLASH] = ACTIONS(89),
    [anon_sym_RBRACK] = ACTIONS(89),
    [anon_sym_DASH] = ACTIONS(89),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_BSLASH_RBRACK_BSLASH_DASH_RBRACK_SLASH] = ACTIONS(89),
  },
  [57] = {
    [anon_sym_BSLASH] = ACTIONS(191),
    [anon_sym_RBRACK] = ACTIONS(191),
    [anon_sym_DASH] = ACTIONS(191),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_BSLASH_RBRACK_BSLASH_DASH_RBRACK_SLASH] = ACTIONS(191),
  },
  [58] = {
    [ts_builtin_sym_end] = ACTIONS(193),
    [anon_sym_PIPE] = ACTIONS(193),
    [anon_sym_DOT] = ACTIONS(193),
    [anon_sym_BSLASH] = ACTIONS(195),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(193),
    [anon_sym_RPAREN] = ACTIONS(193),
    [anon_sym_CARET] = ACTIONS(193),
    [anon_sym_DOLLAR] = ACTIONS(193),
    [anon_sym_BSLASHb] = ACTIONS(193),
    [anon_sym_BSLASHB] = ACTIONS(193),
    [anon_sym_LPAREN_QMARK] = ACTIONS(195),
    [anon_sym_LBRACK] = ACTIONS(193),
    [sym_pattern_character] = ACTIONS(193),
    [anon_sym_QMARK] = ACTIONS(193),
    [anon_sym_STAR] = ACTIONS(193),
    [anon_sym_PLUS] = ACTIONS(193),
    [anon_sym_LBRACE] = ACTIONS(193),
    [anon_sym_LPAREN] = ACTIONS(195),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(193),
  },
  [59] = {
    [sym_class_range] = STATE(61),
    [sym_class_atom] = STATE(34),
    [aux_sym_character_class_repeat1] = STATE(61),
    [anon_sym_BSLASH] = ACTIONS(47),
    [anon_sym_RBRACK] = ACTIONS(197),
    [anon_sym_DASH] = ACTIONS(53),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_BSLASH_RBRACK_BSLASH_DASH_RBRACK_SLASH] = ACTIONS(53),
  },
  [60] = {
    [sym_class_atom] = STATE(72),
    [anon_sym_BSLASH] = ACTIONS(47),
    [anon_sym_DASH] = ACTIONS(53),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_BSLASH_RBRACK_BSLASH_DASH_RBRACK_SLASH] = ACTIONS(53),
  },
  [61] = {
    [sym_class_range] = STATE(61),
    [sym_class_atom] = STATE(34),
    [aux_sym_character_class_repeat1] = STATE(61),
    [anon_sym_BSLASH] = ACTIONS(199),
    [anon_sym_RBRACK] = ACTIONS(202),
    [anon_sym_DASH] = ACTIONS(204),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_BSLASH_RBRACK_BSLASH_DASH_RBRACK_SLASH] = ACTIONS(204),
  },
  [62] = {
    [ts_builtin_sym_end] = ACTIONS(207),
    [anon_sym_PIPE] = ACTIONS(207),
    [anon_sym_DOT] = ACTIONS(207),
    [anon_sym_BSLASH] = ACTIONS(209),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(207),
    [anon_sym_RPAREN] = ACTIONS(207),
    [anon_sym_CARET] = ACTIONS(207),
    [anon_sym_DOLLAR] = ACTIONS(207),
    [anon_sym_BSLASHb] = ACTIONS(207),
    [anon_sym_BSLASHB] = ACTIONS(207),
    [anon_sym_LPAREN_QMARK] = ACTIONS(209),
    [anon_sym_LBRACK] = ACTIONS(207),
    [sym_pattern_character] = ACTIONS(207),
    [anon_sym_QMARK] = ACTIONS(207),
    [anon_sym_STAR] = ACTIONS(207),
    [anon_sym_PLUS] = ACTIONS(207),
    [anon_sym_LBRACE] = ACTIONS(207),
    [anon_sym_LPAREN] = ACTIONS(209),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(207),
  },
  [63] = {
    [sym_pattern] = STATE(73),
    [sym_disjunction] = STATE(12),
    [sym_term] = STATE(26),
    [sym_atom] = STATE(14),
    [sym_non_capturing_group] = STATE(3),
    [sym_assertion] = STATE(3),
    [sym_character_class] = STATE(3),
    [sym_anonymous_capturing_group] = STATE(3),
    [sym_named_capturing_group] = STATE(3),
    [aux_sym_disjunction_repeat1] = STATE(27),
    [aux_sym_term_repeat1] = STATE(28),
    [anon_sym_PIPE] = ACTIONS(39),
    [anon_sym_DOT] = ACTIONS(7),
    [anon_sym_BSLASH] = ACTIONS(9),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(11),
    [anon_sym_CARET] = ACTIONS(13),
    [anon_sym_DOLLAR] = ACTIONS(13),
    [anon_sym_BSLASHb] = ACTIONS(13),
    [anon_sym_BSLASHB] = ACTIONS(13),
    [anon_sym_LPAREN_QMARK] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_pattern_character] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(21),
  },
  [64] = {
    [anon_sym_COMMA] = ACTIONS(211),
    [anon_sym_RBRACE] = ACTIONS(213),
  },
  [65] = {
    [ts_builtin_sym_end] = ACTIONS(215),
    [anon_sym_PIPE] = ACTIONS(215),
    [anon_sym_DOT] = ACTIONS(215),
    [anon_sym_BSLASH] = ACTIONS(217),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(215),
    [anon_sym_RPAREN] = ACTIONS(215),
    [anon_sym_CARET] = ACTIONS(215),
    [anon_sym_DOLLAR] = ACTIONS(215),
    [anon_sym_BSLASHb] = ACTIONS(215),
    [anon_sym_BSLASHB] = ACTIONS(215),
    [anon_sym_LPAREN_QMARK] = ACTIONS(217),
    [anon_sym_LBRACK] = ACTIONS(215),
    [sym_pattern_character] = ACTIONS(215),
    [anon_sym_LPAREN] = ACTIONS(217),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(215),
  },
  [66] = {
    [anon_sym_EQ] = ACTIONS(219),
    [anon_sym_RBRACE] = ACTIONS(221),
  },
  [67] = {
    [anon_sym_RBRACE] = ACTIONS(223),
  },
  [68] = {
    [ts_builtin_sym_end] = ACTIONS(225),
    [anon_sym_PIPE] = ACTIONS(225),
    [anon_sym_DOT] = ACTIONS(225),
    [anon_sym_BSLASH] = ACTIONS(227),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(225),
    [anon_sym_RPAREN] = ACTIONS(225),
    [anon_sym_CARET] = ACTIONS(225),
    [anon_sym_DOLLAR] = ACTIONS(225),
    [anon_sym_BSLASHb] = ACTIONS(225),
    [anon_sym_BSLASHB] = ACTIONS(225),
    [anon_sym_LPAREN_QMARK] = ACTIONS(227),
    [anon_sym_LBRACK] = ACTIONS(225),
    [sym_pattern_character] = ACTIONS(225),
    [anon_sym_QMARK] = ACTIONS(225),
    [anon_sym_STAR] = ACTIONS(225),
    [anon_sym_PLUS] = ACTIONS(225),
    [anon_sym_LBRACE] = ACTIONS(225),
    [anon_sym_LPAREN] = ACTIONS(227),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(225),
  },
  [69] = {
    [sym_unicode_property_value_expression] = STATE(78),
    [sym_unicode_property] = ACTIONS(170),
  },
  [70] = {
    [anon_sym_BSLASH] = ACTIONS(172),
    [anon_sym_RBRACK] = ACTIONS(172),
    [anon_sym_DASH] = ACTIONS(172),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_BSLASH_RBRACK_BSLASH_DASH_RBRACK_SLASH] = ACTIONS(172),
  },
  [71] = {
    [ts_builtin_sym_end] = ACTIONS(229),
    [anon_sym_PIPE] = ACTIONS(229),
    [anon_sym_DOT] = ACTIONS(229),
    [anon_sym_BSLASH] = ACTIONS(231),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(229),
    [anon_sym_RPAREN] = ACTIONS(229),
    [anon_sym_CARET] = ACTIONS(229),
    [anon_sym_DOLLAR] = ACTIONS(229),
    [anon_sym_BSLASHb] = ACTIONS(229),
    [anon_sym_BSLASHB] = ACTIONS(229),
    [anon_sym_LPAREN_QMARK] = ACTIONS(231),
    [anon_sym_LBRACK] = ACTIONS(229),
    [sym_pattern_character] = ACTIONS(229),
    [anon_sym_QMARK] = ACTIONS(229),
    [anon_sym_STAR] = ACTIONS(229),
    [anon_sym_PLUS] = ACTIONS(229),
    [anon_sym_LBRACE] = ACTIONS(229),
    [anon_sym_LPAREN] = ACTIONS(231),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(229),
  },
  [72] = {
    [anon_sym_BSLASH] = ACTIONS(233),
    [anon_sym_RBRACK] = ACTIONS(233),
    [anon_sym_DASH] = ACTIONS(233),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_BSLASH_RBRACK_BSLASH_DASH_RBRACK_SLASH] = ACTIONS(233),
  },
  [73] = {
    [anon_sym_RPAREN] = ACTIONS(235),
  },
  [74] = {
    [sym_decimal_digits] = ACTIONS(237),
  },
  [75] = {
    [ts_builtin_sym_end] = ACTIONS(239),
    [anon_sym_PIPE] = ACTIONS(239),
    [anon_sym_DOT] = ACTIONS(239),
    [anon_sym_BSLASH] = ACTIONS(241),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(239),
    [anon_sym_RPAREN] = ACTIONS(239),
    [anon_sym_CARET] = ACTIONS(239),
    [anon_sym_DOLLAR] = ACTIONS(239),
    [anon_sym_BSLASHb] = ACTIONS(239),
    [anon_sym_BSLASHB] = ACTIONS(239),
    [anon_sym_LPAREN_QMARK] = ACTIONS(241),
    [anon_sym_LBRACK] = ACTIONS(239),
    [sym_pattern_character] = ACTIONS(239),
    [anon_sym_QMARK] = ACTIONS(239),
    [anon_sym_LPAREN] = ACTIONS(241),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(239),
  },
  [76] = {
    [sym_unicode_property] = ACTIONS(243),
  },
  [77] = {
    [ts_builtin_sym_end] = ACTIONS(245),
    [anon_sym_PIPE] = ACTIONS(245),
    [anon_sym_DOT] = ACTIONS(245),
    [anon_sym_BSLASH] = ACTIONS(247),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(245),
    [anon_sym_RPAREN] = ACTIONS(245),
    [anon_sym_CARET] = ACTIONS(245),
    [anon_sym_DOLLAR] = ACTIONS(245),
    [anon_sym_BSLASHb] = ACTIONS(245),
    [anon_sym_BSLASHB] = ACTIONS(245),
    [anon_sym_LPAREN_QMARK] = ACTIONS(247),
    [anon_sym_LBRACK] = ACTIONS(245),
    [sym_pattern_character] = ACTIONS(245),
    [anon_sym_QMARK] = ACTIONS(245),
    [anon_sym_STAR] = ACTIONS(245),
    [anon_sym_PLUS] = ACTIONS(245),
    [anon_sym_LBRACE] = ACTIONS(245),
    [anon_sym_LPAREN] = ACTIONS(247),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(245),
  },
  [78] = {
    [anon_sym_RBRACE] = ACTIONS(249),
  },
  [79] = {
    [ts_builtin_sym_end] = ACTIONS(251),
    [anon_sym_PIPE] = ACTIONS(251),
    [anon_sym_DOT] = ACTIONS(251),
    [anon_sym_BSLASH] = ACTIONS(253),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(251),
    [anon_sym_RPAREN] = ACTIONS(251),
    [anon_sym_CARET] = ACTIONS(251),
    [anon_sym_DOLLAR] = ACTIONS(251),
    [anon_sym_BSLASHb] = ACTIONS(251),
    [anon_sym_BSLASHB] = ACTIONS(251),
    [anon_sym_LPAREN_QMARK] = ACTIONS(253),
    [anon_sym_LBRACK] = ACTIONS(251),
    [sym_pattern_character] = ACTIONS(251),
    [anon_sym_QMARK] = ACTIONS(251),
    [anon_sym_STAR] = ACTIONS(251),
    [anon_sym_PLUS] = ACTIONS(251),
    [anon_sym_LBRACE] = ACTIONS(251),
    [anon_sym_LPAREN] = ACTIONS(253),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(251),
  },
  [80] = {
    [anon_sym_RBRACE] = ACTIONS(255),
  },
  [81] = {
    [anon_sym_RBRACE] = ACTIONS(257),
  },
  [82] = {
    [anon_sym_BSLASH] = ACTIONS(245),
    [anon_sym_RBRACK] = ACTIONS(245),
    [anon_sym_DASH] = ACTIONS(245),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_BSLASH_RBRACK_BSLASH_DASH_RBRACK_SLASH] = ACTIONS(245),
  },
  [83] = {
    [ts_builtin_sym_end] = ACTIONS(259),
    [anon_sym_PIPE] = ACTIONS(259),
    [anon_sym_DOT] = ACTIONS(259),
    [anon_sym_BSLASH] = ACTIONS(261),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(259),
    [anon_sym_RPAREN] = ACTIONS(259),
    [anon_sym_CARET] = ACTIONS(259),
    [anon_sym_DOLLAR] = ACTIONS(259),
    [anon_sym_BSLASHb] = ACTIONS(259),
    [anon_sym_BSLASHB] = ACTIONS(259),
    [anon_sym_LPAREN_QMARK] = ACTIONS(261),
    [anon_sym_LBRACK] = ACTIONS(259),
    [sym_pattern_character] = ACTIONS(259),
    [anon_sym_QMARK] = ACTIONS(259),
    [anon_sym_LPAREN] = ACTIONS(261),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(259),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, RECOVER(),
  [5] = {.count = 1, .reusable = true}, SHIFT(2),
  [7] = {.count = 1, .reusable = true}, SHIFT(3),
  [9] = {.count = 1, .reusable = false}, SHIFT(4),
  [11] = {.count = 1, .reusable = true}, SHIFT(5),
  [13] = {.count = 1, .reusable = true}, SHIFT(6),
  [15] = {.count = 1, .reusable = false}, SHIFT(7),
  [17] = {.count = 1, .reusable = true}, SHIFT(8),
  [19] = {.count = 1, .reusable = false}, SHIFT(9),
  [21] = {.count = 1, .reusable = true}, SHIFT(10),
  [23] = {.count = 1, .reusable = true}, REDUCE(aux_sym_disjunction_repeat1, 1),
  [25] = {.count = 1, .reusable = true}, REDUCE(sym_atom, 1),
  [27] = {.count = 1, .reusable = false}, REDUCE(sym_atom, 1),
  [29] = {.count = 1, .reusable = true}, SHIFT(18),
  [31] = {.count = 1, .reusable = true}, SHIFT(19),
  [33] = {.count = 1, .reusable = true}, SHIFT(20),
  [35] = {.count = 1, .reusable = true}, SHIFT(21),
  [37] = {.count = 1, .reusable = true}, SHIFT(22),
  [39] = {.count = 1, .reusable = true}, SHIFT(24),
  [41] = {.count = 1, .reusable = true}, REDUCE(sym_assertion, 1),
  [43] = {.count = 1, .reusable = false}, REDUCE(sym_assertion, 1),
  [45] = {.count = 1, .reusable = true}, SHIFT(29),
  [47] = {.count = 1, .reusable = true}, SHIFT(30),
  [49] = {.count = 1, .reusable = true}, SHIFT(31),
  [51] = {.count = 1, .reusable = true}, SHIFT(32),
  [53] = {.count = 1, .reusable = true}, SHIFT(33),
  [55] = {.count = 1, .reusable = false}, SHIFT(33),
  [57] = {.count = 1, .reusable = true}, SHIFT(37),
  [59] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [61] = {.count = 1, .reusable = true}, REDUCE(sym_pattern, 1),
  [63] = {.count = 1, .reusable = true}, REDUCE(aux_sym_term_repeat1, 1),
  [65] = {.count = 1, .reusable = false}, REDUCE(aux_sym_term_repeat1, 1),
  [67] = {.count = 1, .reusable = true}, SHIFT(39),
  [69] = {.count = 1, .reusable = true}, SHIFT(40),
  [71] = {.count = 1, .reusable = true}, REDUCE(sym_disjunction, 1),
  [73] = {.count = 1, .reusable = true}, REDUCE(sym_term, 1),
  [75] = {.count = 1, .reusable = true}, REDUCE(aux_sym_disjunction_repeat1, 2),
  [77] = {.count = 1, .reusable = true}, REDUCE(sym_atom_escape, 1),
  [79] = {.count = 1, .reusable = false}, REDUCE(sym_atom_escape, 1),
  [81] = {.count = 1, .reusable = true}, REDUCE(sym_character_class_escape, 1),
  [83] = {.count = 1, .reusable = false}, REDUCE(sym_character_class_escape, 1),
  [85] = {.count = 1, .reusable = true}, SHIFT(45),
  [87] = {.count = 1, .reusable = true}, SHIFT(46),
  [89] = {.count = 1, .reusable = true}, REDUCE(sym_character_escape, 1),
  [91] = {.count = 1, .reusable = false}, REDUCE(sym_character_escape, 1),
  [93] = {.count = 1, .reusable = true}, REDUCE(sym_atom, 2),
  [95] = {.count = 1, .reusable = false}, REDUCE(sym_atom, 2),
  [97] = {.count = 1, .reusable = true}, SHIFT(47),
  [99] = {.count = 1, .reusable = true}, SHIFT(52),
  [101] = {.count = 1, .reusable = true}, SHIFT(53),
  [103] = {.count = 1, .reusable = true}, SHIFT(54),
  [105] = {.count = 1, .reusable = true}, SHIFT(55),
  [107] = {.count = 1, .reusable = true}, SHIFT(56),
  [109] = {.count = 1, .reusable = true}, SHIFT(58),
  [111] = {.count = 1, .reusable = true}, REDUCE(sym_character_class, 2),
  [113] = {.count = 1, .reusable = false}, REDUCE(sym_character_class, 2),
  [115] = {.count = 1, .reusable = true}, REDUCE(sym_class_atom, 1),
  [117] = {.count = 1, .reusable = true}, REDUCE(sym_class_range, 1),
  [119] = {.count = 1, .reusable = true}, SHIFT(60),
  [121] = {.count = 1, .reusable = true}, SHIFT(62),
  [123] = {.count = 1, .reusable = true}, SHIFT(63),
  [125] = {.count = 1, .reusable = true}, REDUCE(sym_disjunction, 2),
  [127] = {.count = 1, .reusable = true}, REDUCE(sym_quantifier_prefix, 1),
  [129] = {.count = 1, .reusable = false}, REDUCE(sym_quantifier_prefix, 1),
  [131] = {.count = 1, .reusable = true}, SHIFT(64),
  [133] = {.count = 1, .reusable = true}, REDUCE(aux_sym_term_repeat1, 2),
  [135] = {.count = 1, .reusable = false}, REDUCE(aux_sym_term_repeat1, 2),
  [137] = {.count = 1, .reusable = true}, REDUCE(sym_quantifier, 1),
  [139] = {.count = 1, .reusable = false}, REDUCE(sym_quantifier, 1),
  [141] = {.count = 1, .reusable = true}, SHIFT(65),
  [143] = {.count = 2, .reusable = true}, REDUCE(aux_sym_disjunction_repeat1, 2), SHIFT_REPEAT(2),
  [146] = {.count = 2, .reusable = true}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(3),
  [149] = {.count = 2, .reusable = false}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(4),
  [152] = {.count = 2, .reusable = true}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(5),
  [155] = {.count = 2, .reusable = true}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(6),
  [158] = {.count = 2, .reusable = false}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(7),
  [161] = {.count = 2, .reusable = true}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(8),
  [164] = {.count = 2, .reusable = false}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(9),
  [167] = {.count = 2, .reusable = true}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(10),
  [170] = {.count = 1, .reusable = true}, SHIFT(66),
  [172] = {.count = 1, .reusable = true}, REDUCE(sym_character_escape, 2),
  [174] = {.count = 1, .reusable = false}, REDUCE(sym_character_escape, 2),
  [176] = {.count = 1, .reusable = true}, REDUCE(sym_non_capturing_group, 3),
  [178] = {.count = 1, .reusable = false}, REDUCE(sym_non_capturing_group, 3),
  [180] = {.count = 2, .reusable = true}, REDUCE(aux_sym_disjunction_repeat1, 2), SHIFT_REPEAT(24),
  [183] = {.count = 1, .reusable = true}, SHIFT(68),
  [185] = {.count = 1, .reusable = true}, REDUCE(sym_class_escape, 1),
  [187] = {.count = 1, .reusable = true}, SHIFT(69),
  [189] = {.count = 1, .reusable = true}, SHIFT(70),
  [191] = {.count = 1, .reusable = true}, REDUCE(sym_class_atom, 2),
  [193] = {.count = 1, .reusable = true}, REDUCE(sym_character_class, 3),
  [195] = {.count = 1, .reusable = false}, REDUCE(sym_character_class, 3),
  [197] = {.count = 1, .reusable = true}, SHIFT(71),
  [199] = {.count = 2, .reusable = true}, REDUCE(aux_sym_character_class_repeat1, 2), SHIFT_REPEAT(30),
  [202] = {.count = 1, .reusable = true}, REDUCE(aux_sym_character_class_repeat1, 2),
  [204] = {.count = 2, .reusable = true}, REDUCE(aux_sym_character_class_repeat1, 2), SHIFT_REPEAT(33),
  [207] = {.count = 1, .reusable = true}, REDUCE(sym_anonymous_capturing_group, 3),
  [209] = {.count = 1, .reusable = false}, REDUCE(sym_anonymous_capturing_group, 3),
  [211] = {.count = 1, .reusable = true}, SHIFT(74),
  [213] = {.count = 1, .reusable = true}, SHIFT(75),
  [215] = {.count = 1, .reusable = true}, REDUCE(sym_quantifier, 2, .alias_sequence_id = 1),
  [217] = {.count = 1, .reusable = false}, REDUCE(sym_quantifier, 2, .alias_sequence_id = 1),
  [219] = {.count = 1, .reusable = true}, SHIFT(76),
  [221] = {.count = 1, .reusable = true}, REDUCE(sym_unicode_property_value_expression, 1, .alias_sequence_id = 2),
  [223] = {.count = 1, .reusable = true}, SHIFT(77),
  [225] = {.count = 1, .reusable = true}, REDUCE(sym_assertion, 4),
  [227] = {.count = 1, .reusable = false}, REDUCE(sym_assertion, 4),
  [229] = {.count = 1, .reusable = true}, REDUCE(sym_character_class, 4),
  [231] = {.count = 1, .reusable = false}, REDUCE(sym_character_class, 4),
  [233] = {.count = 1, .reusable = true}, REDUCE(sym_class_range, 3),
  [235] = {.count = 1, .reusable = true}, SHIFT(79),
  [237] = {.count = 1, .reusable = true}, SHIFT(80),
  [239] = {.count = 1, .reusable = true}, REDUCE(sym_count_quantifier, 3),
  [241] = {.count = 1, .reusable = false}, REDUCE(sym_count_quantifier, 3),
  [243] = {.count = 1, .reusable = true}, SHIFT(81),
  [245] = {.count = 1, .reusable = true}, REDUCE(sym_character_class_escape, 4),
  [247] = {.count = 1, .reusable = false}, REDUCE(sym_character_class_escape, 4),
  [249] = {.count = 1, .reusable = true}, SHIFT(82),
  [251] = {.count = 1, .reusable = true}, REDUCE(sym_named_capturing_group, 5),
  [253] = {.count = 1, .reusable = false}, REDUCE(sym_named_capturing_group, 5),
  [255] = {.count = 1, .reusable = true}, SHIFT(83),
  [257] = {.count = 1, .reusable = true}, REDUCE(sym_unicode_property_value_expression, 3, .alias_sequence_id = 3),
  [259] = {.count = 1, .reusable = true}, REDUCE(sym_count_quantifier, 5),
  [261] = {.count = 1, .reusable = false}, REDUCE(sym_count_quantifier, 5),
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
