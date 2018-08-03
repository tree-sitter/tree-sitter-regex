#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 72
#define SYMBOL_COUNT 58
#define ALIAS_COUNT 3
#define TOKEN_COUNT 38
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
  sym_class_atom = 18,
  sym_pattern_character = 19,
  anon_sym_QMARK = 20,
  anon_sym_STAR = 21,
  anon_sym_PLUS = 22,
  anon_sym_LBRACE = 23,
  anon_sym_COMMA = 24,
  anon_sym_RBRACE = 25,
  sym_decimal_escape = 26,
  aux_sym_SLASH_LBRACKdDsSwW_RBRACK_SLASH = 27,
  aux_sym_SLASH_LBRACKpP_RBRACK_SLASH = 28,
  sym_unicode_property = 29,
  anon_sym_c = 30,
  sym_control_escape = 31,
  sym_control_letter = 32,
  anon_sym_LPAREN = 33,
  anon_sym_LPAREN_QMARK_LT = 34,
  anon_sym_GT = 35,
  sym_group_name = 36,
  sym_decimal_digits = 37,
  sym_pattern = 38,
  sym_disjunction = 39,
  sym_term = 40,
  sym_atom = 41,
  sym_non_capturing_group = 42,
  sym_assertion = 43,
  sym_character_class = 44,
  sym_class_range = 45,
  sym_quantifier = 46,
  sym_quantifier_prefix = 47,
  sym_count_quantifier = 48,
  sym_atom_escape = 49,
  sym_character_class_escape = 50,
  sym_unicode_property_value_expression = 51,
  sym_character_escape = 52,
  sym_anonymous_capturing_group = 53,
  sym_named_capturing_group = 54,
  aux_sym_disjunction_repeat1 = 55,
  aux_sym_term_repeat1 = 56,
  aux_sym_character_class_repeat1 = 57,
  alias_sym_non_greedy = 58,
  alias_sym_unicode_property_name = 59,
  alias_sym_unicode_property_value = 60,
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
  [sym_class_atom] = "class_atom",
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
  [sym_class_atom] = {
    .visible = true,
    .named = true,
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
        ADVANCE(19);
      if (lookahead == '^')
        ADVANCE(20);
      if (lookahead == 'c')
        ADVANCE(21);
      if (lookahead == '{')
        ADVANCE(22);
      if (lookahead == '|')
        ADVANCE(23);
      if (lookahead == '}')
        ADVANCE(24);
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
      ACCEPT_TOKEN(sym_class_atom);
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
      if (lookahead == 'B')
        ADVANCE(17);
      if (lookahead == 'b')
        ADVANCE(18);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_BSLASHB);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_BSLASHb);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_c);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 25:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '$')
        ADVANCE(3);
      if (lookahead == '(')
        ADVANCE(26);
      if (lookahead == '.')
        ADVANCE(10);
      if (lookahead == '[')
        ADVANCE(15);
      if (lookahead == '\\')
        ADVANCE(16);
      if (lookahead == '^')
        ADVANCE(20);
      if (lookahead == '|')
        ADVANCE(23);
      if ((lookahead < '(' || lookahead > '+') &&
          lookahead != '?' &&
          (lookahead < '[' || lookahead > '^') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(30);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '?')
        ADVANCE(27);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_LPAREN_QMARK);
      if (lookahead == ':')
        ADVANCE(28);
      if (lookahead == '<')
        ADVANCE(29);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_LPAREN_QMARK_COLON);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_LPAREN_QMARK_LT);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_pattern_character);
      END_STATE();
    case 31:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '$')
        ADVANCE(3);
      if (lookahead == '(')
        ADVANCE(26);
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
        ADVANCE(16);
      if (lookahead == '^')
        ADVANCE(20);
      if (lookahead == '{')
        ADVANCE(22);
      if (lookahead == '|')
        ADVANCE(23);
      if ((lookahead < '[' || lookahead > '^') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(30);
      END_STATE();
    case 32:
      if (lookahead == 'c')
        ADVANCE(21);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(33);
      if (lookahead == '0' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'v')
        ADVANCE(34);
      if (lookahead == 'D' ||
          lookahead == 'S' ||
          lookahead == 'W' ||
          lookahead == 'd' ||
          lookahead == 's' ||
          lookahead == 'w')
        ADVANCE(35);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(36);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKpP_RBRACK_SLASH);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_control_escape);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKdDsSwW_RBRACK_SLASH);
      END_STATE();
    case 36:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(37);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_decimal_escape);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(37);
      END_STATE();
    case 38:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '<')
        ADVANCE(39);
      if (lookahead == '=')
        ADVANCE(12);
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
      if (lookahead == ']')
        ADVANCE(19);
      if (lookahead == '^')
        ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '-' &&
          (lookahead < '\\' || lookahead > '^'))
        ADVANCE(11);
      END_STATE();
    case 43:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(44);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_group_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(44);
      END_STATE();
    case 45:
      if (lookahead == 0)
        ADVANCE(1);
      END_STATE();
    case 46:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == ')')
        ADVANCE(5);
      END_STATE();
    case 47:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '|')
        ADVANCE(23);
      END_STATE();
    case 48:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == ')')
        ADVANCE(5);
      if (lookahead == '|')
        ADVANCE(23);
      END_STATE();
    case 49:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(50);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_control_letter);
      END_STATE();
    case 51:
      if (lookahead == '-')
        ADVANCE(9);
      if (lookahead == ']')
        ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '\\' &&
          lookahead != ']')
        ADVANCE(11);
      END_STATE();
    case 52:
      if (lookahead == '>')
        ADVANCE(13);
      END_STATE();
    case 53:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '$')
        ADVANCE(3);
      if (lookahead == '(')
        ADVANCE(26);
      if (lookahead == ')')
        ADVANCE(5);
      if (lookahead == '.')
        ADVANCE(10);
      if (lookahead == '?')
        ADVANCE(14);
      if (lookahead == '[')
        ADVANCE(15);
      if (lookahead == '\\')
        ADVANCE(16);
      if (lookahead == '^')
        ADVANCE(20);
      if (lookahead == '|')
        ADVANCE(23);
      if ((lookahead < '(' || lookahead > '+') &&
          (lookahead < '[' || lookahead > '^') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(30);
      END_STATE();
    case 54:
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
      if (lookahead == '$')
        ADVANCE(3);
      if (lookahead == '(')
        ADVANCE(26);
      if (lookahead == ')')
        ADVANCE(5);
      if (lookahead == '.')
        ADVANCE(10);
      if (lookahead == '[')
        ADVANCE(15);
      if (lookahead == '\\')
        ADVANCE(16);
      if (lookahead == '^')
        ADVANCE(20);
      if (lookahead == '|')
        ADVANCE(23);
      if ((lookahead < '(' || lookahead > '+') &&
          lookahead != '?' &&
          (lookahead < '[' || lookahead > '^') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(30);
      END_STATE();
    case 57:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(58);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_unicode_property);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(58);
      END_STATE();
    case 59:
      if (lookahead == ',')
        ADVANCE(8);
      if (lookahead == '}')
        ADVANCE(24);
      END_STATE();
    case 60:
      if (lookahead == '=')
        ADVANCE(12);
      if (lookahead == '}')
        ADVANCE(24);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 25},
  [2] = {.lex_state = 25},
  [3] = {.lex_state = 31},
  [4] = {.lex_state = 32},
  [5] = {.lex_state = 25},
  [6] = {.lex_state = 31},
  [7] = {.lex_state = 38},
  [8] = {.lex_state = 42},
  [9] = {.lex_state = 25},
  [10] = {.lex_state = 43},
  [11] = {.lex_state = 45},
  [12] = {.lex_state = 46},
  [13] = {.lex_state = 47},
  [14] = {.lex_state = 31},
  [15] = {.lex_state = 47},
  [16] = {.lex_state = 25},
  [17] = {.lex_state = 48},
  [18] = {.lex_state = 31},
  [19] = {.lex_state = 31},
  [20] = {.lex_state = 31},
  [21] = {.lex_state = 49},
  [22] = {.lex_state = 31},
  [23] = {.lex_state = 31},
  [24] = {.lex_state = 31},
  [25] = {.lex_state = 31},
  [26] = {.lex_state = 31},
  [27] = {.lex_state = 31},
  [28] = {.lex_state = 31},
  [29] = {.lex_state = 25},
  [30] = {.lex_state = 51},
  [31] = {.lex_state = 31},
  [32] = {.lex_state = 51},
  [33] = {.lex_state = 51},
  [34] = {.lex_state = 31},
  [35] = {.lex_state = 52},
  [36] = {.lex_state = 47},
  [37] = {.lex_state = 53},
  [38] = {.lex_state = 54},
  [39] = {.lex_state = 56},
  [40] = {.lex_state = 53},
  [41] = {.lex_state = 47},
  [42] = {.lex_state = 25},
  [43] = {.lex_state = 57},
  [44] = {.lex_state = 31},
  [45] = {.lex_state = 31},
  [46] = {.lex_state = 31},
  [47] = {.lex_state = 31},
  [48] = {.lex_state = 31},
  [49] = {.lex_state = 31},
  [50] = {.lex_state = 31},
  [51] = {.lex_state = 51},
  [52] = {.lex_state = 51},
  [53] = {.lex_state = 51},
  [54] = {.lex_state = 31},
  [55] = {.lex_state = 25},
  [56] = {.lex_state = 59},
  [57] = {.lex_state = 56},
  [58] = {.lex_state = 60},
  [59] = {.lex_state = 59},
  [60] = {.lex_state = 31},
  [61] = {.lex_state = 31},
  [62] = {.lex_state = 51},
  [63] = {.lex_state = 31},
  [64] = {.lex_state = 54},
  [65] = {.lex_state = 53},
  [66] = {.lex_state = 57},
  [67] = {.lex_state = 31},
  [68] = {.lex_state = 31},
  [69] = {.lex_state = 59},
  [70] = {.lex_state = 59},
  [71] = {.lex_state = 53},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_BSLASHb] = ACTIONS(1),
    [anon_sym_BSLASHB] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [sym_class_atom] = ACTIONS(3),
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
    [sym_class_range] = STATE(33),
    [aux_sym_character_class_repeat1] = STATE(33),
    [anon_sym_CARET] = ACTIONS(47),
    [anon_sym_RBRACK] = ACTIONS(49),
    [sym_class_atom] = ACTIONS(51),
  },
  [9] = {
    [sym_pattern] = STATE(34),
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
    [sym_group_name] = ACTIONS(53),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(55),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(57),
    [anon_sym_RPAREN] = ACTIONS(57),
  },
  [13] = {
    [aux_sym_disjunction_repeat1] = STATE(36),
    [ts_builtin_sym_end] = ACTIONS(57),
    [anon_sym_PIPE] = ACTIONS(5),
  },
  [14] = {
    [sym_quantifier] = STATE(39),
    [sym_quantifier_prefix] = STATE(40),
    [sym_count_quantifier] = STATE(37),
    [ts_builtin_sym_end] = ACTIONS(59),
    [anon_sym_PIPE] = ACTIONS(59),
    [anon_sym_DOT] = ACTIONS(59),
    [anon_sym_BSLASH] = ACTIONS(61),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(59),
    [anon_sym_RPAREN] = ACTIONS(59),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_DOLLAR] = ACTIONS(59),
    [anon_sym_BSLASHb] = ACTIONS(59),
    [anon_sym_BSLASHB] = ACTIONS(59),
    [anon_sym_LPAREN_QMARK] = ACTIONS(61),
    [anon_sym_LBRACK] = ACTIONS(59),
    [sym_pattern_character] = ACTIONS(59),
    [anon_sym_QMARK] = ACTIONS(63),
    [anon_sym_STAR] = ACTIONS(63),
    [anon_sym_PLUS] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(65),
    [anon_sym_LPAREN] = ACTIONS(61),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(59),
  },
  [15] = {
    [aux_sym_disjunction_repeat1] = STATE(41),
    [ts_builtin_sym_end] = ACTIONS(67),
    [anon_sym_PIPE] = ACTIONS(5),
  },
  [16] = {
    [sym_atom] = STATE(14),
    [sym_non_capturing_group] = STATE(3),
    [sym_assertion] = STATE(3),
    [sym_character_class] = STATE(3),
    [sym_anonymous_capturing_group] = STATE(3),
    [sym_named_capturing_group] = STATE(3),
    [aux_sym_term_repeat1] = STATE(42),
    [ts_builtin_sym_end] = ACTIONS(69),
    [anon_sym_PIPE] = ACTIONS(69),
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
    [ts_builtin_sym_end] = ACTIONS(71),
    [anon_sym_PIPE] = ACTIONS(71),
    [anon_sym_RPAREN] = ACTIONS(71),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(73),
    [anon_sym_PIPE] = ACTIONS(73),
    [anon_sym_DOT] = ACTIONS(73),
    [anon_sym_BSLASH] = ACTIONS(75),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(73),
    [anon_sym_RPAREN] = ACTIONS(73),
    [anon_sym_CARET] = ACTIONS(73),
    [anon_sym_DOLLAR] = ACTIONS(73),
    [anon_sym_BSLASHb] = ACTIONS(73),
    [anon_sym_BSLASHB] = ACTIONS(73),
    [anon_sym_LPAREN_QMARK] = ACTIONS(75),
    [anon_sym_LBRACK] = ACTIONS(73),
    [sym_pattern_character] = ACTIONS(73),
    [anon_sym_QMARK] = ACTIONS(73),
    [anon_sym_STAR] = ACTIONS(73),
    [anon_sym_PLUS] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(73),
    [anon_sym_LPAREN] = ACTIONS(75),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(73),
  },
  [19] = {
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
  [20] = {
    [anon_sym_LBRACE] = ACTIONS(81),
  },
  [21] = {
    [sym_control_letter] = ACTIONS(83),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(85),
    [anon_sym_PIPE] = ACTIONS(85),
    [anon_sym_DOT] = ACTIONS(85),
    [anon_sym_BSLASH] = ACTIONS(87),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(85),
    [anon_sym_RPAREN] = ACTIONS(85),
    [anon_sym_CARET] = ACTIONS(85),
    [anon_sym_DOLLAR] = ACTIONS(85),
    [anon_sym_BSLASHb] = ACTIONS(85),
    [anon_sym_BSLASHB] = ACTIONS(85),
    [anon_sym_LPAREN_QMARK] = ACTIONS(87),
    [anon_sym_LBRACK] = ACTIONS(85),
    [sym_pattern_character] = ACTIONS(85),
    [anon_sym_QMARK] = ACTIONS(85),
    [anon_sym_STAR] = ACTIONS(85),
    [anon_sym_PLUS] = ACTIONS(85),
    [anon_sym_LBRACE] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(87),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(85),
  },
  [23] = {
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
    [anon_sym_RPAREN] = ACTIONS(93),
  },
  [26] = {
    [aux_sym_disjunction_repeat1] = STATE(46),
    [anon_sym_PIPE] = ACTIONS(39),
    [anon_sym_RPAREN] = ACTIONS(57),
  },
  [27] = {
    [aux_sym_disjunction_repeat1] = STATE(47),
    [anon_sym_PIPE] = ACTIONS(39),
    [anon_sym_RPAREN] = ACTIONS(67),
  },
  [28] = {
    [sym_atom] = STATE(14),
    [sym_non_capturing_group] = STATE(3),
    [sym_assertion] = STATE(3),
    [sym_character_class] = STATE(3),
    [sym_anonymous_capturing_group] = STATE(3),
    [sym_named_capturing_group] = STATE(3),
    [aux_sym_term_repeat1] = STATE(48),
    [anon_sym_PIPE] = ACTIONS(69),
    [anon_sym_DOT] = ACTIONS(7),
    [anon_sym_BSLASH] = ACTIONS(9),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(11),
    [anon_sym_RPAREN] = ACTIONS(69),
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
    [sym_pattern] = STATE(49),
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
    [sym_class_range] = STATE(51),
    [aux_sym_character_class_repeat1] = STATE(51),
    [anon_sym_RBRACK] = ACTIONS(95),
    [sym_class_atom] = ACTIONS(97),
  },
  [31] = {
    [ts_builtin_sym_end] = ACTIONS(99),
    [anon_sym_PIPE] = ACTIONS(99),
    [anon_sym_DOT] = ACTIONS(99),
    [anon_sym_BSLASH] = ACTIONS(101),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(99),
    [anon_sym_RPAREN] = ACTIONS(99),
    [anon_sym_CARET] = ACTIONS(99),
    [anon_sym_DOLLAR] = ACTIONS(99),
    [anon_sym_BSLASHb] = ACTIONS(99),
    [anon_sym_BSLASHB] = ACTIONS(99),
    [anon_sym_LPAREN_QMARK] = ACTIONS(101),
    [anon_sym_LBRACK] = ACTIONS(99),
    [sym_pattern_character] = ACTIONS(99),
    [anon_sym_QMARK] = ACTIONS(99),
    [anon_sym_STAR] = ACTIONS(99),
    [anon_sym_PLUS] = ACTIONS(99),
    [anon_sym_LBRACE] = ACTIONS(99),
    [anon_sym_LPAREN] = ACTIONS(101),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(99),
  },
  [32] = {
    [anon_sym_RBRACK] = ACTIONS(103),
    [anon_sym_DASH] = ACTIONS(105),
    [sym_class_atom] = ACTIONS(103),
  },
  [33] = {
    [sym_class_range] = STATE(53),
    [aux_sym_character_class_repeat1] = STATE(53),
    [anon_sym_RBRACK] = ACTIONS(95),
    [sym_class_atom] = ACTIONS(97),
  },
  [34] = {
    [anon_sym_RPAREN] = ACTIONS(107),
  },
  [35] = {
    [anon_sym_GT] = ACTIONS(109),
  },
  [36] = {
    [aux_sym_disjunction_repeat1] = STATE(41),
    [ts_builtin_sym_end] = ACTIONS(111),
    [anon_sym_PIPE] = ACTIONS(5),
  },
  [37] = {
    [ts_builtin_sym_end] = ACTIONS(113),
    [anon_sym_PIPE] = ACTIONS(113),
    [anon_sym_DOT] = ACTIONS(113),
    [anon_sym_BSLASH] = ACTIONS(115),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(113),
    [anon_sym_RPAREN] = ACTIONS(113),
    [anon_sym_CARET] = ACTIONS(113),
    [anon_sym_DOLLAR] = ACTIONS(113),
    [anon_sym_BSLASHb] = ACTIONS(113),
    [anon_sym_BSLASHB] = ACTIONS(113),
    [anon_sym_LPAREN_QMARK] = ACTIONS(115),
    [anon_sym_LBRACK] = ACTIONS(113),
    [sym_pattern_character] = ACTIONS(113),
    [anon_sym_QMARK] = ACTIONS(113),
    [anon_sym_LPAREN] = ACTIONS(115),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(113),
  },
  [38] = {
    [sym_decimal_digits] = ACTIONS(117),
  },
  [39] = {
    [ts_builtin_sym_end] = ACTIONS(119),
    [anon_sym_PIPE] = ACTIONS(119),
    [anon_sym_DOT] = ACTIONS(119),
    [anon_sym_BSLASH] = ACTIONS(121),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(119),
    [anon_sym_RPAREN] = ACTIONS(119),
    [anon_sym_CARET] = ACTIONS(119),
    [anon_sym_DOLLAR] = ACTIONS(119),
    [anon_sym_BSLASHb] = ACTIONS(119),
    [anon_sym_BSLASHB] = ACTIONS(119),
    [anon_sym_LPAREN_QMARK] = ACTIONS(121),
    [anon_sym_LBRACK] = ACTIONS(119),
    [sym_pattern_character] = ACTIONS(119),
    [anon_sym_LPAREN] = ACTIONS(121),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(119),
  },
  [40] = {
    [ts_builtin_sym_end] = ACTIONS(123),
    [anon_sym_PIPE] = ACTIONS(123),
    [anon_sym_DOT] = ACTIONS(123),
    [anon_sym_BSLASH] = ACTIONS(125),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(123),
    [anon_sym_RPAREN] = ACTIONS(123),
    [anon_sym_CARET] = ACTIONS(123),
    [anon_sym_DOLLAR] = ACTIONS(123),
    [anon_sym_BSLASHb] = ACTIONS(123),
    [anon_sym_BSLASHB] = ACTIONS(123),
    [anon_sym_LPAREN_QMARK] = ACTIONS(125),
    [anon_sym_LBRACK] = ACTIONS(123),
    [sym_pattern_character] = ACTIONS(123),
    [anon_sym_QMARK] = ACTIONS(127),
    [anon_sym_LPAREN] = ACTIONS(125),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(123),
  },
  [41] = {
    [aux_sym_disjunction_repeat1] = STATE(41),
    [ts_builtin_sym_end] = ACTIONS(71),
    [anon_sym_PIPE] = ACTIONS(129),
  },
  [42] = {
    [sym_atom] = STATE(14),
    [sym_non_capturing_group] = STATE(3),
    [sym_assertion] = STATE(3),
    [sym_character_class] = STATE(3),
    [sym_anonymous_capturing_group] = STATE(3),
    [sym_named_capturing_group] = STATE(3),
    [aux_sym_term_repeat1] = STATE(42),
    [ts_builtin_sym_end] = ACTIONS(119),
    [anon_sym_PIPE] = ACTIONS(119),
    [anon_sym_DOT] = ACTIONS(132),
    [anon_sym_BSLASH] = ACTIONS(135),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(138),
    [anon_sym_CARET] = ACTIONS(141),
    [anon_sym_DOLLAR] = ACTIONS(141),
    [anon_sym_BSLASHb] = ACTIONS(141),
    [anon_sym_BSLASHB] = ACTIONS(141),
    [anon_sym_LPAREN_QMARK] = ACTIONS(144),
    [anon_sym_LBRACK] = ACTIONS(147),
    [sym_pattern_character] = ACTIONS(132),
    [anon_sym_LPAREN] = ACTIONS(150),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(153),
  },
  [43] = {
    [sym_unicode_property_value_expression] = STATE(59),
    [sym_unicode_property] = ACTIONS(156),
  },
  [44] = {
    [ts_builtin_sym_end] = ACTIONS(158),
    [anon_sym_PIPE] = ACTIONS(158),
    [anon_sym_DOT] = ACTIONS(158),
    [anon_sym_BSLASH] = ACTIONS(160),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(158),
    [anon_sym_RPAREN] = ACTIONS(158),
    [anon_sym_CARET] = ACTIONS(158),
    [anon_sym_DOLLAR] = ACTIONS(158),
    [anon_sym_BSLASHb] = ACTIONS(158),
    [anon_sym_BSLASHB] = ACTIONS(158),
    [anon_sym_LPAREN_QMARK] = ACTIONS(160),
    [anon_sym_LBRACK] = ACTIONS(158),
    [sym_pattern_character] = ACTIONS(158),
    [anon_sym_QMARK] = ACTIONS(158),
    [anon_sym_STAR] = ACTIONS(158),
    [anon_sym_PLUS] = ACTIONS(158),
    [anon_sym_LBRACE] = ACTIONS(158),
    [anon_sym_LPAREN] = ACTIONS(160),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(158),
  },
  [45] = {
    [ts_builtin_sym_end] = ACTIONS(162),
    [anon_sym_PIPE] = ACTIONS(162),
    [anon_sym_DOT] = ACTIONS(162),
    [anon_sym_BSLASH] = ACTIONS(164),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(162),
    [anon_sym_RPAREN] = ACTIONS(162),
    [anon_sym_CARET] = ACTIONS(162),
    [anon_sym_DOLLAR] = ACTIONS(162),
    [anon_sym_BSLASHb] = ACTIONS(162),
    [anon_sym_BSLASHB] = ACTIONS(162),
    [anon_sym_LPAREN_QMARK] = ACTIONS(164),
    [anon_sym_LBRACK] = ACTIONS(162),
    [sym_pattern_character] = ACTIONS(162),
    [anon_sym_QMARK] = ACTIONS(162),
    [anon_sym_STAR] = ACTIONS(162),
    [anon_sym_PLUS] = ACTIONS(162),
    [anon_sym_LBRACE] = ACTIONS(162),
    [anon_sym_LPAREN] = ACTIONS(164),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(162),
  },
  [46] = {
    [aux_sym_disjunction_repeat1] = STATE(47),
    [anon_sym_PIPE] = ACTIONS(39),
    [anon_sym_RPAREN] = ACTIONS(111),
  },
  [47] = {
    [aux_sym_disjunction_repeat1] = STATE(47),
    [anon_sym_PIPE] = ACTIONS(166),
    [anon_sym_RPAREN] = ACTIONS(71),
  },
  [48] = {
    [sym_atom] = STATE(14),
    [sym_non_capturing_group] = STATE(3),
    [sym_assertion] = STATE(3),
    [sym_character_class] = STATE(3),
    [sym_anonymous_capturing_group] = STATE(3),
    [sym_named_capturing_group] = STATE(3),
    [aux_sym_term_repeat1] = STATE(48),
    [anon_sym_PIPE] = ACTIONS(119),
    [anon_sym_DOT] = ACTIONS(132),
    [anon_sym_BSLASH] = ACTIONS(135),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(138),
    [anon_sym_RPAREN] = ACTIONS(119),
    [anon_sym_CARET] = ACTIONS(141),
    [anon_sym_DOLLAR] = ACTIONS(141),
    [anon_sym_BSLASHb] = ACTIONS(141),
    [anon_sym_BSLASHB] = ACTIONS(141),
    [anon_sym_LPAREN_QMARK] = ACTIONS(144),
    [anon_sym_LBRACK] = ACTIONS(147),
    [sym_pattern_character] = ACTIONS(132),
    [anon_sym_LPAREN] = ACTIONS(150),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(153),
  },
  [49] = {
    [anon_sym_RPAREN] = ACTIONS(169),
  },
  [50] = {
    [ts_builtin_sym_end] = ACTIONS(171),
    [anon_sym_PIPE] = ACTIONS(171),
    [anon_sym_DOT] = ACTIONS(171),
    [anon_sym_BSLASH] = ACTIONS(173),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(171),
    [anon_sym_RPAREN] = ACTIONS(171),
    [anon_sym_CARET] = ACTIONS(171),
    [anon_sym_DOLLAR] = ACTIONS(171),
    [anon_sym_BSLASHb] = ACTIONS(171),
    [anon_sym_BSLASHB] = ACTIONS(171),
    [anon_sym_LPAREN_QMARK] = ACTIONS(173),
    [anon_sym_LBRACK] = ACTIONS(171),
    [sym_pattern_character] = ACTIONS(171),
    [anon_sym_QMARK] = ACTIONS(171),
    [anon_sym_STAR] = ACTIONS(171),
    [anon_sym_PLUS] = ACTIONS(171),
    [anon_sym_LBRACE] = ACTIONS(171),
    [anon_sym_LPAREN] = ACTIONS(173),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(171),
  },
  [51] = {
    [sym_class_range] = STATE(53),
    [aux_sym_character_class_repeat1] = STATE(53),
    [anon_sym_RBRACK] = ACTIONS(175),
    [sym_class_atom] = ACTIONS(97),
  },
  [52] = {
    [sym_class_atom] = ACTIONS(177),
  },
  [53] = {
    [sym_class_range] = STATE(53),
    [aux_sym_character_class_repeat1] = STATE(53),
    [anon_sym_RBRACK] = ACTIONS(179),
    [sym_class_atom] = ACTIONS(181),
  },
  [54] = {
    [ts_builtin_sym_end] = ACTIONS(184),
    [anon_sym_PIPE] = ACTIONS(184),
    [anon_sym_DOT] = ACTIONS(184),
    [anon_sym_BSLASH] = ACTIONS(186),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(184),
    [anon_sym_RPAREN] = ACTIONS(184),
    [anon_sym_CARET] = ACTIONS(184),
    [anon_sym_DOLLAR] = ACTIONS(184),
    [anon_sym_BSLASHb] = ACTIONS(184),
    [anon_sym_BSLASHB] = ACTIONS(184),
    [anon_sym_LPAREN_QMARK] = ACTIONS(186),
    [anon_sym_LBRACK] = ACTIONS(184),
    [sym_pattern_character] = ACTIONS(184),
    [anon_sym_QMARK] = ACTIONS(184),
    [anon_sym_STAR] = ACTIONS(184),
    [anon_sym_PLUS] = ACTIONS(184),
    [anon_sym_LBRACE] = ACTIONS(184),
    [anon_sym_LPAREN] = ACTIONS(186),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(184),
  },
  [55] = {
    [sym_pattern] = STATE(63),
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
  [56] = {
    [anon_sym_COMMA] = ACTIONS(188),
    [anon_sym_RBRACE] = ACTIONS(190),
  },
  [57] = {
    [ts_builtin_sym_end] = ACTIONS(192),
    [anon_sym_PIPE] = ACTIONS(192),
    [anon_sym_DOT] = ACTIONS(192),
    [anon_sym_BSLASH] = ACTIONS(194),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(192),
    [anon_sym_RPAREN] = ACTIONS(192),
    [anon_sym_CARET] = ACTIONS(192),
    [anon_sym_DOLLAR] = ACTIONS(192),
    [anon_sym_BSLASHb] = ACTIONS(192),
    [anon_sym_BSLASHB] = ACTIONS(192),
    [anon_sym_LPAREN_QMARK] = ACTIONS(194),
    [anon_sym_LBRACK] = ACTIONS(192),
    [sym_pattern_character] = ACTIONS(192),
    [anon_sym_LPAREN] = ACTIONS(194),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(192),
  },
  [58] = {
    [anon_sym_EQ] = ACTIONS(196),
    [anon_sym_RBRACE] = ACTIONS(198),
  },
  [59] = {
    [anon_sym_RBRACE] = ACTIONS(200),
  },
  [60] = {
    [ts_builtin_sym_end] = ACTIONS(202),
    [anon_sym_PIPE] = ACTIONS(202),
    [anon_sym_DOT] = ACTIONS(202),
    [anon_sym_BSLASH] = ACTIONS(204),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(202),
    [anon_sym_RPAREN] = ACTIONS(202),
    [anon_sym_CARET] = ACTIONS(202),
    [anon_sym_DOLLAR] = ACTIONS(202),
    [anon_sym_BSLASHb] = ACTIONS(202),
    [anon_sym_BSLASHB] = ACTIONS(202),
    [anon_sym_LPAREN_QMARK] = ACTIONS(204),
    [anon_sym_LBRACK] = ACTIONS(202),
    [sym_pattern_character] = ACTIONS(202),
    [anon_sym_QMARK] = ACTIONS(202),
    [anon_sym_STAR] = ACTIONS(202),
    [anon_sym_PLUS] = ACTIONS(202),
    [anon_sym_LBRACE] = ACTIONS(202),
    [anon_sym_LPAREN] = ACTIONS(204),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(202),
  },
  [61] = {
    [ts_builtin_sym_end] = ACTIONS(206),
    [anon_sym_PIPE] = ACTIONS(206),
    [anon_sym_DOT] = ACTIONS(206),
    [anon_sym_BSLASH] = ACTIONS(208),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(206),
    [anon_sym_RPAREN] = ACTIONS(206),
    [anon_sym_CARET] = ACTIONS(206),
    [anon_sym_DOLLAR] = ACTIONS(206),
    [anon_sym_BSLASHb] = ACTIONS(206),
    [anon_sym_BSLASHB] = ACTIONS(206),
    [anon_sym_LPAREN_QMARK] = ACTIONS(208),
    [anon_sym_LBRACK] = ACTIONS(206),
    [sym_pattern_character] = ACTIONS(206),
    [anon_sym_QMARK] = ACTIONS(206),
    [anon_sym_STAR] = ACTIONS(206),
    [anon_sym_PLUS] = ACTIONS(206),
    [anon_sym_LBRACE] = ACTIONS(206),
    [anon_sym_LPAREN] = ACTIONS(208),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(206),
  },
  [62] = {
    [anon_sym_RBRACK] = ACTIONS(210),
    [sym_class_atom] = ACTIONS(210),
  },
  [63] = {
    [anon_sym_RPAREN] = ACTIONS(212),
  },
  [64] = {
    [sym_decimal_digits] = ACTIONS(214),
  },
  [65] = {
    [ts_builtin_sym_end] = ACTIONS(216),
    [anon_sym_PIPE] = ACTIONS(216),
    [anon_sym_DOT] = ACTIONS(216),
    [anon_sym_BSLASH] = ACTIONS(218),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(216),
    [anon_sym_RPAREN] = ACTIONS(216),
    [anon_sym_CARET] = ACTIONS(216),
    [anon_sym_DOLLAR] = ACTIONS(216),
    [anon_sym_BSLASHb] = ACTIONS(216),
    [anon_sym_BSLASHB] = ACTIONS(216),
    [anon_sym_LPAREN_QMARK] = ACTIONS(218),
    [anon_sym_LBRACK] = ACTIONS(216),
    [sym_pattern_character] = ACTIONS(216),
    [anon_sym_QMARK] = ACTIONS(216),
    [anon_sym_LPAREN] = ACTIONS(218),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(216),
  },
  [66] = {
    [sym_unicode_property] = ACTIONS(220),
  },
  [67] = {
    [ts_builtin_sym_end] = ACTIONS(222),
    [anon_sym_PIPE] = ACTIONS(222),
    [anon_sym_DOT] = ACTIONS(222),
    [anon_sym_BSLASH] = ACTIONS(224),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(222),
    [anon_sym_RPAREN] = ACTIONS(222),
    [anon_sym_CARET] = ACTIONS(222),
    [anon_sym_DOLLAR] = ACTIONS(222),
    [anon_sym_BSLASHb] = ACTIONS(222),
    [anon_sym_BSLASHB] = ACTIONS(222),
    [anon_sym_LPAREN_QMARK] = ACTIONS(224),
    [anon_sym_LBRACK] = ACTIONS(222),
    [sym_pattern_character] = ACTIONS(222),
    [anon_sym_QMARK] = ACTIONS(222),
    [anon_sym_STAR] = ACTIONS(222),
    [anon_sym_PLUS] = ACTIONS(222),
    [anon_sym_LBRACE] = ACTIONS(222),
    [anon_sym_LPAREN] = ACTIONS(224),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(222),
  },
  [68] = {
    [ts_builtin_sym_end] = ACTIONS(226),
    [anon_sym_PIPE] = ACTIONS(226),
    [anon_sym_DOT] = ACTIONS(226),
    [anon_sym_BSLASH] = ACTIONS(228),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(226),
    [anon_sym_RPAREN] = ACTIONS(226),
    [anon_sym_CARET] = ACTIONS(226),
    [anon_sym_DOLLAR] = ACTIONS(226),
    [anon_sym_BSLASHb] = ACTIONS(226),
    [anon_sym_BSLASHB] = ACTIONS(226),
    [anon_sym_LPAREN_QMARK] = ACTIONS(228),
    [anon_sym_LBRACK] = ACTIONS(226),
    [sym_pattern_character] = ACTIONS(226),
    [anon_sym_QMARK] = ACTIONS(226),
    [anon_sym_STAR] = ACTIONS(226),
    [anon_sym_PLUS] = ACTIONS(226),
    [anon_sym_LBRACE] = ACTIONS(226),
    [anon_sym_LPAREN] = ACTIONS(228),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(226),
  },
  [69] = {
    [anon_sym_RBRACE] = ACTIONS(230),
  },
  [70] = {
    [anon_sym_RBRACE] = ACTIONS(232),
  },
  [71] = {
    [ts_builtin_sym_end] = ACTIONS(234),
    [anon_sym_PIPE] = ACTIONS(234),
    [anon_sym_DOT] = ACTIONS(234),
    [anon_sym_BSLASH] = ACTIONS(236),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(234),
    [anon_sym_RPAREN] = ACTIONS(234),
    [anon_sym_CARET] = ACTIONS(234),
    [anon_sym_DOLLAR] = ACTIONS(234),
    [anon_sym_BSLASHb] = ACTIONS(234),
    [anon_sym_BSLASHB] = ACTIONS(234),
    [anon_sym_LPAREN_QMARK] = ACTIONS(236),
    [anon_sym_LBRACK] = ACTIONS(234),
    [sym_pattern_character] = ACTIONS(234),
    [anon_sym_QMARK] = ACTIONS(234),
    [anon_sym_LPAREN] = ACTIONS(236),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(234),
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
  [51] = {.count = 1, .reusable = false}, SHIFT(32),
  [53] = {.count = 1, .reusable = true}, SHIFT(35),
  [55] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [57] = {.count = 1, .reusable = true}, REDUCE(sym_pattern, 1),
  [59] = {.count = 1, .reusable = true}, REDUCE(aux_sym_term_repeat1, 1),
  [61] = {.count = 1, .reusable = false}, REDUCE(aux_sym_term_repeat1, 1),
  [63] = {.count = 1, .reusable = true}, SHIFT(37),
  [65] = {.count = 1, .reusable = true}, SHIFT(38),
  [67] = {.count = 1, .reusable = true}, REDUCE(sym_disjunction, 1),
  [69] = {.count = 1, .reusable = true}, REDUCE(sym_term, 1),
  [71] = {.count = 1, .reusable = true}, REDUCE(aux_sym_disjunction_repeat1, 2),
  [73] = {.count = 1, .reusable = true}, REDUCE(sym_atom_escape, 1),
  [75] = {.count = 1, .reusable = false}, REDUCE(sym_atom_escape, 1),
  [77] = {.count = 1, .reusable = true}, REDUCE(sym_character_class_escape, 1),
  [79] = {.count = 1, .reusable = false}, REDUCE(sym_character_class_escape, 1),
  [81] = {.count = 1, .reusable = true}, SHIFT(43),
  [83] = {.count = 1, .reusable = true}, SHIFT(44),
  [85] = {.count = 1, .reusable = true}, REDUCE(sym_character_escape, 1),
  [87] = {.count = 1, .reusable = false}, REDUCE(sym_character_escape, 1),
  [89] = {.count = 1, .reusable = true}, REDUCE(sym_atom, 2),
  [91] = {.count = 1, .reusable = false}, REDUCE(sym_atom, 2),
  [93] = {.count = 1, .reusable = true}, SHIFT(45),
  [95] = {.count = 1, .reusable = true}, SHIFT(50),
  [97] = {.count = 1, .reusable = true}, SHIFT(32),
  [99] = {.count = 1, .reusable = true}, REDUCE(sym_character_class, 2),
  [101] = {.count = 1, .reusable = false}, REDUCE(sym_character_class, 2),
  [103] = {.count = 1, .reusable = true}, REDUCE(sym_class_range, 1),
  [105] = {.count = 1, .reusable = true}, SHIFT(52),
  [107] = {.count = 1, .reusable = true}, SHIFT(54),
  [109] = {.count = 1, .reusable = true}, SHIFT(55),
  [111] = {.count = 1, .reusable = true}, REDUCE(sym_disjunction, 2),
  [113] = {.count = 1, .reusable = true}, REDUCE(sym_quantifier_prefix, 1),
  [115] = {.count = 1, .reusable = false}, REDUCE(sym_quantifier_prefix, 1),
  [117] = {.count = 1, .reusable = true}, SHIFT(56),
  [119] = {.count = 1, .reusable = true}, REDUCE(aux_sym_term_repeat1, 2),
  [121] = {.count = 1, .reusable = false}, REDUCE(aux_sym_term_repeat1, 2),
  [123] = {.count = 1, .reusable = true}, REDUCE(sym_quantifier, 1),
  [125] = {.count = 1, .reusable = false}, REDUCE(sym_quantifier, 1),
  [127] = {.count = 1, .reusable = true}, SHIFT(57),
  [129] = {.count = 2, .reusable = true}, REDUCE(aux_sym_disjunction_repeat1, 2), SHIFT_REPEAT(2),
  [132] = {.count = 2, .reusable = true}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(3),
  [135] = {.count = 2, .reusable = false}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(4),
  [138] = {.count = 2, .reusable = true}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(5),
  [141] = {.count = 2, .reusable = true}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(6),
  [144] = {.count = 2, .reusable = false}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(7),
  [147] = {.count = 2, .reusable = true}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(8),
  [150] = {.count = 2, .reusable = false}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(9),
  [153] = {.count = 2, .reusable = true}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(10),
  [156] = {.count = 1, .reusable = true}, SHIFT(58),
  [158] = {.count = 1, .reusable = true}, REDUCE(sym_character_escape, 2),
  [160] = {.count = 1, .reusable = false}, REDUCE(sym_character_escape, 2),
  [162] = {.count = 1, .reusable = true}, REDUCE(sym_non_capturing_group, 3),
  [164] = {.count = 1, .reusable = false}, REDUCE(sym_non_capturing_group, 3),
  [166] = {.count = 2, .reusable = true}, REDUCE(aux_sym_disjunction_repeat1, 2), SHIFT_REPEAT(24),
  [169] = {.count = 1, .reusable = true}, SHIFT(60),
  [171] = {.count = 1, .reusable = true}, REDUCE(sym_character_class, 3),
  [173] = {.count = 1, .reusable = false}, REDUCE(sym_character_class, 3),
  [175] = {.count = 1, .reusable = true}, SHIFT(61),
  [177] = {.count = 1, .reusable = true}, SHIFT(62),
  [179] = {.count = 1, .reusable = true}, REDUCE(aux_sym_character_class_repeat1, 2),
  [181] = {.count = 2, .reusable = true}, REDUCE(aux_sym_character_class_repeat1, 2), SHIFT_REPEAT(32),
  [184] = {.count = 1, .reusable = true}, REDUCE(sym_anonymous_capturing_group, 3),
  [186] = {.count = 1, .reusable = false}, REDUCE(sym_anonymous_capturing_group, 3),
  [188] = {.count = 1, .reusable = true}, SHIFT(64),
  [190] = {.count = 1, .reusable = true}, SHIFT(65),
  [192] = {.count = 1, .reusable = true}, REDUCE(sym_quantifier, 2, .alias_sequence_id = 1),
  [194] = {.count = 1, .reusable = false}, REDUCE(sym_quantifier, 2, .alias_sequence_id = 1),
  [196] = {.count = 1, .reusable = true}, SHIFT(66),
  [198] = {.count = 1, .reusable = true}, REDUCE(sym_unicode_property_value_expression, 1, .alias_sequence_id = 2),
  [200] = {.count = 1, .reusable = true}, SHIFT(67),
  [202] = {.count = 1, .reusable = true}, REDUCE(sym_assertion, 4),
  [204] = {.count = 1, .reusable = false}, REDUCE(sym_assertion, 4),
  [206] = {.count = 1, .reusable = true}, REDUCE(sym_character_class, 4),
  [208] = {.count = 1, .reusable = false}, REDUCE(sym_character_class, 4),
  [210] = {.count = 1, .reusable = true}, REDUCE(sym_class_range, 3),
  [212] = {.count = 1, .reusable = true}, SHIFT(68),
  [214] = {.count = 1, .reusable = true}, SHIFT(69),
  [216] = {.count = 1, .reusable = true}, REDUCE(sym_count_quantifier, 3),
  [218] = {.count = 1, .reusable = false}, REDUCE(sym_count_quantifier, 3),
  [220] = {.count = 1, .reusable = true}, SHIFT(70),
  [222] = {.count = 1, .reusable = true}, REDUCE(sym_character_class_escape, 4),
  [224] = {.count = 1, .reusable = false}, REDUCE(sym_character_class_escape, 4),
  [226] = {.count = 1, .reusable = true}, REDUCE(sym_named_capturing_group, 5),
  [228] = {.count = 1, .reusable = false}, REDUCE(sym_named_capturing_group, 5),
  [230] = {.count = 1, .reusable = true}, SHIFT(71),
  [232] = {.count = 1, .reusable = true}, REDUCE(sym_unicode_property_value_expression, 3, .alias_sequence_id = 3),
  [234] = {.count = 1, .reusable = true}, REDUCE(sym_count_quantifier, 5),
  [236] = {.count = 1, .reusable = false}, REDUCE(sym_count_quantifier, 5),
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
