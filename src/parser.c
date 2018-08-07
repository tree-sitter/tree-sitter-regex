#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 82
#define SYMBOL_COUNT 62
#define ALIAS_COUNT 3
#define TOKEN_COUNT 40
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3

enum {
  anon_sym_PIPE = 1,
  anon_sym_DOT = 2,
  anon_sym_LPAREN_QMARK_COLON = 3,
  anon_sym_RPAREN = 4,
  anon_sym_CARET = 5,
  anon_sym_DOLLAR = 6,
  anon_sym_BSLASHb = 7,
  anon_sym_BSLASHB = 8,
  anon_sym_LPAREN_QMARK = 9,
  anon_sym_EQ = 10,
  anon_sym_BANG = 11,
  anon_sym_LT_EQ = 12,
  anon_sym_LT_BANG = 13,
  anon_sym_LBRACK = 14,
  anon_sym_RBRACK = 15,
  anon_sym_DASH = 16,
  aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_BSLASH_RBRACK_BSLASH_DASH_RBRACK_SLASH = 17,
  anon_sym_BSLASH = 18,
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
  [anon_sym_BSLASH] = "\\",
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
  [anon_sym_BSLASH] = {
    .visible = true,
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
      ACCEPT_TOKEN(sym_pattern_character);
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
      if (lookahead == '\n')
        SKIP(24);
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
        ADVANCE(11);
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
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        SKIP(32);
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
        ADVANCE(11);
      END_STATE();
    case 33:
      if (lookahead == '\n')
        SKIP(33);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '<')
        ADVANCE(34);
      if (lookahead == '=')
        ADVANCE(12);
      END_STATE();
    case 34:
      if (lookahead == '!')
        ADVANCE(35);
      if (lookahead == '=')
        ADVANCE(36);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_LT_BANG);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 37:
      if (lookahead == '\n')
        ADVANCE(38);
      if (lookahead == '-')
        ADVANCE(9);
      if (lookahead == '\\')
        ADVANCE(16);
      if (lookahead == ']')
        ADVANCE(17);
      if (lookahead == '^')
        ADVANCE(18);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_BSLASH_RBRACK_BSLASH_DASH_RBRACK_SLASH);
      END_STATE();
    case 39:
      if (lookahead == '\n')
        SKIP(39);
      if (lookahead == 'c')
        ADVANCE(20);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(40);
      if (lookahead == '0' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'v')
        ADVANCE(41);
      if (lookahead == 'D' ||
          lookahead == 'S' ||
          lookahead == 'W' ||
          lookahead == 'd' ||
          lookahead == 's' ||
          lookahead == 'w')
        ADVANCE(42);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(43);
      if (lookahead == '$' ||
          ('(' <= lookahead && lookahead <= '+') ||
          lookahead == '.' ||
          lookahead == '?' ||
          ('[' <= lookahead && lookahead <= '^') ||
          ('{' <= lookahead && lookahead <= '}'))
        ADVANCE(45);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKpP_RBRACK_SLASH);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_control_escape);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKdDsSwW_RBRACK_SLASH);
      END_STATE();
    case 43:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(44);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_decimal_escape);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_identity_escape);
      END_STATE();
    case 46:
      if (lookahead == '\n')
        SKIP(46);
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
      if (lookahead == '\n')
        SKIP(48);
      END_STATE();
    case 49:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        SKIP(49);
      if (lookahead == ')')
        ADVANCE(5);
      END_STATE();
    case 50:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        SKIP(50);
      if (lookahead == '|')
        ADVANCE(22);
      END_STATE();
    case 51:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        SKIP(51);
      if (lookahead == ')')
        ADVANCE(5);
      if (lookahead == '|')
        ADVANCE(22);
      END_STATE();
    case 52:
      if (lookahead == '\n')
        ADVANCE(38);
      if (lookahead == '-')
        ADVANCE(9);
      if (lookahead == '\\')
        ADVANCE(16);
      if (lookahead == ']')
        ADVANCE(17);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 53:
      if (lookahead == '\n')
        SKIP(53);
      if (lookahead == '-')
        ADVANCE(9);
      if (lookahead == 'b')
        ADVANCE(19);
      if (lookahead == 'c')
        ADVANCE(20);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(40);
      if (lookahead == '0' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'v')
        ADVANCE(41);
      if (lookahead == 'D' ||
          lookahead == 'S' ||
          lookahead == 'W' ||
          lookahead == 'd' ||
          lookahead == 's' ||
          lookahead == 'w')
        ADVANCE(42);
      if (lookahead == '$' ||
          ('(' <= lookahead && lookahead <= '+') ||
          lookahead == '.' ||
          lookahead == '?' ||
          ('[' <= lookahead && lookahead <= '^') ||
          ('{' <= lookahead && lookahead <= '}'))
        ADVANCE(45);
      END_STATE();
    case 54:
      if (lookahead == '\n')
        SKIP(54);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_control_letter);
      END_STATE();
    case 56:
      if (lookahead == '\n')
        SKIP(56);
      if (lookahead == '>')
        ADVANCE(13);
      END_STATE();
    case 57:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        SKIP(57);
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
        ADVANCE(11);
      END_STATE();
    case 58:
      if (lookahead == '\n')
        SKIP(58);
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
      if (lookahead == '\n')
        SKIP(60);
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
        ADVANCE(11);
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
      if (lookahead == ',')
        ADVANCE(8);
      if (lookahead == '}')
        ADVANCE(23);
      END_STATE();
    case 64:
      if (lookahead == '\n')
        SKIP(64);
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
  [3] = {.lex_state = 32},
  [4] = {.lex_state = 24},
  [5] = {.lex_state = 32},
  [6] = {.lex_state = 33},
  [7] = {.lex_state = 37},
  [8] = {.lex_state = 39},
  [9] = {.lex_state = 24},
  [10] = {.lex_state = 46},
  [11] = {.lex_state = 48},
  [12] = {.lex_state = 49},
  [13] = {.lex_state = 50},
  [14] = {.lex_state = 32},
  [15] = {.lex_state = 50},
  [16] = {.lex_state = 24},
  [17] = {.lex_state = 51},
  [18] = {.lex_state = 32},
  [19] = {.lex_state = 32},
  [20] = {.lex_state = 32},
  [21] = {.lex_state = 32},
  [22] = {.lex_state = 32},
  [23] = {.lex_state = 24},
  [24] = {.lex_state = 52},
  [25] = {.lex_state = 32},
  [26] = {.lex_state = 52},
  [27] = {.lex_state = 53},
  [28] = {.lex_state = 52},
  [29] = {.lex_state = 52},
  [30] = {.lex_state = 32},
  [31] = {.lex_state = 32},
  [32] = {.lex_state = 32},
  [33] = {.lex_state = 54},
  [34] = {.lex_state = 32},
  [35] = {.lex_state = 32},
  [36] = {.lex_state = 56},
  [37] = {.lex_state = 50},
  [38] = {.lex_state = 57},
  [39] = {.lex_state = 58},
  [40] = {.lex_state = 60},
  [41] = {.lex_state = 57},
  [42] = {.lex_state = 50},
  [43] = {.lex_state = 24},
  [44] = {.lex_state = 32},
  [45] = {.lex_state = 32},
  [46] = {.lex_state = 32},
  [47] = {.lex_state = 32},
  [48] = {.lex_state = 32},
  [49] = {.lex_state = 32},
  [50] = {.lex_state = 52},
  [51] = {.lex_state = 52},
  [52] = {.lex_state = 52},
  [53] = {.lex_state = 32},
  [54] = {.lex_state = 54},
  [55] = {.lex_state = 52},
  [56] = {.lex_state = 52},
  [57] = {.lex_state = 52},
  [58] = {.lex_state = 61},
  [59] = {.lex_state = 32},
  [60] = {.lex_state = 32},
  [61] = {.lex_state = 24},
  [62] = {.lex_state = 63},
  [63] = {.lex_state = 60},
  [64] = {.lex_state = 32},
  [65] = {.lex_state = 32},
  [66] = {.lex_state = 61},
  [67] = {.lex_state = 52},
  [68] = {.lex_state = 52},
  [69] = {.lex_state = 64},
  [70] = {.lex_state = 63},
  [71] = {.lex_state = 32},
  [72] = {.lex_state = 58},
  [73] = {.lex_state = 57},
  [74] = {.lex_state = 63},
  [75] = {.lex_state = 61},
  [76] = {.lex_state = 32},
  [77] = {.lex_state = 32},
  [78] = {.lex_state = 63},
  [79] = {.lex_state = 52},
  [80] = {.lex_state = 63},
  [81] = {.lex_state = 57},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
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
    [sym_atom_escape] = STATE(3),
    [sym_anonymous_capturing_group] = STATE(3),
    [sym_named_capturing_group] = STATE(3),
    [aux_sym_disjunction_repeat1] = STATE(15),
    [aux_sym_term_repeat1] = STATE(16),
    [anon_sym_PIPE] = ACTIONS(5),
    [anon_sym_DOT] = ACTIONS(7),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(9),
    [anon_sym_CARET] = ACTIONS(11),
    [anon_sym_DOLLAR] = ACTIONS(11),
    [anon_sym_BSLASHb] = ACTIONS(11),
    [anon_sym_BSLASHB] = ACTIONS(11),
    [anon_sym_LPAREN_QMARK] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_BSLASH] = ACTIONS(17),
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
    [sym_atom_escape] = STATE(3),
    [sym_anonymous_capturing_group] = STATE(3),
    [sym_named_capturing_group] = STATE(3),
    [aux_sym_term_repeat1] = STATE(16),
    [ts_builtin_sym_end] = ACTIONS(23),
    [anon_sym_PIPE] = ACTIONS(23),
    [anon_sym_DOT] = ACTIONS(7),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(9),
    [anon_sym_CARET] = ACTIONS(11),
    [anon_sym_DOLLAR] = ACTIONS(11),
    [anon_sym_BSLASHb] = ACTIONS(11),
    [anon_sym_BSLASHB] = ACTIONS(11),
    [anon_sym_LPAREN_QMARK] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_BSLASH] = ACTIONS(17),
    [sym_pattern_character] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(21),
  },
  [3] = {
    [ts_builtin_sym_end] = ACTIONS(25),
    [anon_sym_PIPE] = ACTIONS(25),
    [anon_sym_DOT] = ACTIONS(25),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(25),
    [anon_sym_RPAREN] = ACTIONS(25),
    [anon_sym_CARET] = ACTIONS(25),
    [anon_sym_DOLLAR] = ACTIONS(25),
    [anon_sym_BSLASHb] = ACTIONS(25),
    [anon_sym_BSLASHB] = ACTIONS(25),
    [anon_sym_LPAREN_QMARK] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_BSLASH] = ACTIONS(27),
    [sym_pattern_character] = ACTIONS(25),
    [anon_sym_QMARK] = ACTIONS(25),
    [anon_sym_STAR] = ACTIONS(25),
    [anon_sym_PLUS] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(25),
  },
  [4] = {
    [sym_pattern] = STATE(19),
    [sym_disjunction] = STATE(12),
    [sym_term] = STATE(20),
    [sym_atom] = STATE(14),
    [sym_non_capturing_group] = STATE(3),
    [sym_assertion] = STATE(3),
    [sym_character_class] = STATE(3),
    [sym_atom_escape] = STATE(3),
    [sym_anonymous_capturing_group] = STATE(3),
    [sym_named_capturing_group] = STATE(3),
    [aux_sym_disjunction_repeat1] = STATE(21),
    [aux_sym_term_repeat1] = STATE(22),
    [anon_sym_PIPE] = ACTIONS(29),
    [anon_sym_DOT] = ACTIONS(7),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(9),
    [anon_sym_CARET] = ACTIONS(11),
    [anon_sym_DOLLAR] = ACTIONS(11),
    [anon_sym_BSLASHb] = ACTIONS(11),
    [anon_sym_BSLASHB] = ACTIONS(11),
    [anon_sym_LPAREN_QMARK] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_BSLASH] = ACTIONS(17),
    [sym_pattern_character] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(21),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(31),
    [anon_sym_PIPE] = ACTIONS(31),
    [anon_sym_DOT] = ACTIONS(31),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(31),
    [anon_sym_RPAREN] = ACTIONS(31),
    [anon_sym_CARET] = ACTIONS(31),
    [anon_sym_DOLLAR] = ACTIONS(31),
    [anon_sym_BSLASHb] = ACTIONS(31),
    [anon_sym_BSLASHB] = ACTIONS(31),
    [anon_sym_LPAREN_QMARK] = ACTIONS(33),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_BSLASH] = ACTIONS(33),
    [sym_pattern_character] = ACTIONS(31),
    [anon_sym_QMARK] = ACTIONS(31),
    [anon_sym_STAR] = ACTIONS(31),
    [anon_sym_PLUS] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(33),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(31),
  },
  [6] = {
    [anon_sym_EQ] = ACTIONS(35),
    [anon_sym_BANG] = ACTIONS(35),
    [anon_sym_LT_EQ] = ACTIONS(35),
    [anon_sym_LT_BANG] = ACTIONS(35),
  },
  [7] = {
    [sym_class_range] = STATE(29),
    [sym_class_atom] = STATE(28),
    [sym_class_escape] = STATE(26),
    [aux_sym_character_class_repeat1] = STATE(29),
    [anon_sym_CARET] = ACTIONS(37),
    [anon_sym_RBRACK] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(41),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_BSLASH_RBRACK_BSLASH_DASH_RBRACK_SLASH] = ACTIONS(41),
    [anon_sym_BSLASH] = ACTIONS(43),
  },
  [8] = {
    [sym_character_class_escape] = STATE(30),
    [sym_character_escape] = STATE(30),
    [sym_decimal_escape] = ACTIONS(45),
    [aux_sym_SLASH_LBRACKdDsSwW_RBRACK_SLASH] = ACTIONS(47),
    [aux_sym_SLASH_LBRACKpP_RBRACK_SLASH] = ACTIONS(49),
    [anon_sym_c] = ACTIONS(51),
    [sym_identity_escape] = ACTIONS(53),
    [sym_control_escape] = ACTIONS(53),
  },
  [9] = {
    [sym_pattern] = STATE(35),
    [sym_disjunction] = STATE(12),
    [sym_term] = STATE(20),
    [sym_atom] = STATE(14),
    [sym_non_capturing_group] = STATE(3),
    [sym_assertion] = STATE(3),
    [sym_character_class] = STATE(3),
    [sym_atom_escape] = STATE(3),
    [sym_anonymous_capturing_group] = STATE(3),
    [sym_named_capturing_group] = STATE(3),
    [aux_sym_disjunction_repeat1] = STATE(21),
    [aux_sym_term_repeat1] = STATE(22),
    [anon_sym_PIPE] = ACTIONS(29),
    [anon_sym_DOT] = ACTIONS(7),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(9),
    [anon_sym_CARET] = ACTIONS(11),
    [anon_sym_DOLLAR] = ACTIONS(11),
    [anon_sym_BSLASHb] = ACTIONS(11),
    [anon_sym_BSLASHB] = ACTIONS(11),
    [anon_sym_LPAREN_QMARK] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_BSLASH] = ACTIONS(17),
    [sym_pattern_character] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(21),
  },
  [10] = {
    [sym_group_name] = ACTIONS(55),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(57),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(59),
    [anon_sym_RPAREN] = ACTIONS(59),
  },
  [13] = {
    [aux_sym_disjunction_repeat1] = STATE(37),
    [ts_builtin_sym_end] = ACTIONS(59),
    [anon_sym_PIPE] = ACTIONS(5),
  },
  [14] = {
    [sym_quantifier] = STATE(40),
    [sym_quantifier_prefix] = STATE(41),
    [sym_count_quantifier] = STATE(38),
    [ts_builtin_sym_end] = ACTIONS(61),
    [anon_sym_PIPE] = ACTIONS(61),
    [anon_sym_DOT] = ACTIONS(61),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(61),
    [anon_sym_RPAREN] = ACTIONS(61),
    [anon_sym_CARET] = ACTIONS(61),
    [anon_sym_DOLLAR] = ACTIONS(61),
    [anon_sym_BSLASHb] = ACTIONS(61),
    [anon_sym_BSLASHB] = ACTIONS(61),
    [anon_sym_LPAREN_QMARK] = ACTIONS(63),
    [anon_sym_LBRACK] = ACTIONS(61),
    [anon_sym_BSLASH] = ACTIONS(63),
    [sym_pattern_character] = ACTIONS(61),
    [anon_sym_QMARK] = ACTIONS(65),
    [anon_sym_STAR] = ACTIONS(65),
    [anon_sym_PLUS] = ACTIONS(65),
    [anon_sym_LBRACE] = ACTIONS(67),
    [anon_sym_LPAREN] = ACTIONS(63),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(61),
  },
  [15] = {
    [aux_sym_disjunction_repeat1] = STATE(42),
    [ts_builtin_sym_end] = ACTIONS(69),
    [anon_sym_PIPE] = ACTIONS(5),
  },
  [16] = {
    [sym_atom] = STATE(14),
    [sym_non_capturing_group] = STATE(3),
    [sym_assertion] = STATE(3),
    [sym_character_class] = STATE(3),
    [sym_atom_escape] = STATE(3),
    [sym_anonymous_capturing_group] = STATE(3),
    [sym_named_capturing_group] = STATE(3),
    [aux_sym_term_repeat1] = STATE(43),
    [ts_builtin_sym_end] = ACTIONS(71),
    [anon_sym_PIPE] = ACTIONS(71),
    [anon_sym_DOT] = ACTIONS(7),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(9),
    [anon_sym_CARET] = ACTIONS(11),
    [anon_sym_DOLLAR] = ACTIONS(11),
    [anon_sym_BSLASHb] = ACTIONS(11),
    [anon_sym_BSLASHB] = ACTIONS(11),
    [anon_sym_LPAREN_QMARK] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_BSLASH] = ACTIONS(17),
    [sym_pattern_character] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(21),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(73),
    [anon_sym_PIPE] = ACTIONS(73),
    [anon_sym_RPAREN] = ACTIONS(73),
  },
  [18] = {
    [sym_term] = STATE(17),
    [sym_atom] = STATE(14),
    [sym_non_capturing_group] = STATE(3),
    [sym_assertion] = STATE(3),
    [sym_character_class] = STATE(3),
    [sym_atom_escape] = STATE(3),
    [sym_anonymous_capturing_group] = STATE(3),
    [sym_named_capturing_group] = STATE(3),
    [aux_sym_term_repeat1] = STATE(22),
    [anon_sym_PIPE] = ACTIONS(23),
    [anon_sym_DOT] = ACTIONS(7),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(9),
    [anon_sym_RPAREN] = ACTIONS(23),
    [anon_sym_CARET] = ACTIONS(11),
    [anon_sym_DOLLAR] = ACTIONS(11),
    [anon_sym_BSLASHb] = ACTIONS(11),
    [anon_sym_BSLASHB] = ACTIONS(11),
    [anon_sym_LPAREN_QMARK] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_BSLASH] = ACTIONS(17),
    [sym_pattern_character] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(21),
  },
  [19] = {
    [anon_sym_RPAREN] = ACTIONS(75),
  },
  [20] = {
    [aux_sym_disjunction_repeat1] = STATE(45),
    [anon_sym_PIPE] = ACTIONS(29),
    [anon_sym_RPAREN] = ACTIONS(59),
  },
  [21] = {
    [aux_sym_disjunction_repeat1] = STATE(46),
    [anon_sym_PIPE] = ACTIONS(29),
    [anon_sym_RPAREN] = ACTIONS(69),
  },
  [22] = {
    [sym_atom] = STATE(14),
    [sym_non_capturing_group] = STATE(3),
    [sym_assertion] = STATE(3),
    [sym_character_class] = STATE(3),
    [sym_atom_escape] = STATE(3),
    [sym_anonymous_capturing_group] = STATE(3),
    [sym_named_capturing_group] = STATE(3),
    [aux_sym_term_repeat1] = STATE(47),
    [anon_sym_PIPE] = ACTIONS(71),
    [anon_sym_DOT] = ACTIONS(7),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(9),
    [anon_sym_RPAREN] = ACTIONS(71),
    [anon_sym_CARET] = ACTIONS(11),
    [anon_sym_DOLLAR] = ACTIONS(11),
    [anon_sym_BSLASHb] = ACTIONS(11),
    [anon_sym_BSLASHB] = ACTIONS(11),
    [anon_sym_LPAREN_QMARK] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_BSLASH] = ACTIONS(17),
    [sym_pattern_character] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(21),
  },
  [23] = {
    [sym_pattern] = STATE(48),
    [sym_disjunction] = STATE(12),
    [sym_term] = STATE(20),
    [sym_atom] = STATE(14),
    [sym_non_capturing_group] = STATE(3),
    [sym_assertion] = STATE(3),
    [sym_character_class] = STATE(3),
    [sym_atom_escape] = STATE(3),
    [sym_anonymous_capturing_group] = STATE(3),
    [sym_named_capturing_group] = STATE(3),
    [aux_sym_disjunction_repeat1] = STATE(21),
    [aux_sym_term_repeat1] = STATE(22),
    [anon_sym_PIPE] = ACTIONS(29),
    [anon_sym_DOT] = ACTIONS(7),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(9),
    [anon_sym_CARET] = ACTIONS(11),
    [anon_sym_DOLLAR] = ACTIONS(11),
    [anon_sym_BSLASHb] = ACTIONS(11),
    [anon_sym_BSLASHB] = ACTIONS(11),
    [anon_sym_LPAREN_QMARK] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_BSLASH] = ACTIONS(17),
    [sym_pattern_character] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(21),
  },
  [24] = {
    [sym_class_range] = STATE(50),
    [sym_class_atom] = STATE(28),
    [sym_class_escape] = STATE(26),
    [aux_sym_character_class_repeat1] = STATE(50),
    [anon_sym_RBRACK] = ACTIONS(77),
    [anon_sym_DASH] = ACTIONS(41),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_BSLASH_RBRACK_BSLASH_DASH_RBRACK_SLASH] = ACTIONS(79),
    [anon_sym_BSLASH] = ACTIONS(43),
  },
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(81),
    [anon_sym_PIPE] = ACTIONS(81),
    [anon_sym_DOT] = ACTIONS(81),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(81),
    [anon_sym_RPAREN] = ACTIONS(81),
    [anon_sym_CARET] = ACTIONS(81),
    [anon_sym_DOLLAR] = ACTIONS(81),
    [anon_sym_BSLASHb] = ACTIONS(81),
    [anon_sym_BSLASHB] = ACTIONS(81),
    [anon_sym_LPAREN_QMARK] = ACTIONS(83),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_BSLASH] = ACTIONS(83),
    [sym_pattern_character] = ACTIONS(81),
    [anon_sym_QMARK] = ACTIONS(81),
    [anon_sym_STAR] = ACTIONS(81),
    [anon_sym_PLUS] = ACTIONS(81),
    [anon_sym_LBRACE] = ACTIONS(81),
    [anon_sym_LPAREN] = ACTIONS(83),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(81),
  },
  [26] = {
    [anon_sym_RBRACK] = ACTIONS(85),
    [anon_sym_DASH] = ACTIONS(85),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_BSLASH_RBRACK_BSLASH_DASH_RBRACK_SLASH] = ACTIONS(87),
    [anon_sym_BSLASH] = ACTIONS(85),
  },
  [27] = {
    [sym_character_class_escape] = STATE(51),
    [sym_character_escape] = STATE(51),
    [anon_sym_DASH] = ACTIONS(89),
    [anon_sym_b] = ACTIONS(89),
    [aux_sym_SLASH_LBRACKdDsSwW_RBRACK_SLASH] = ACTIONS(91),
    [aux_sym_SLASH_LBRACKpP_RBRACK_SLASH] = ACTIONS(93),
    [anon_sym_c] = ACTIONS(95),
    [sym_identity_escape] = ACTIONS(97),
    [sym_control_escape] = ACTIONS(97),
  },
  [28] = {
    [anon_sym_RBRACK] = ACTIONS(99),
    [anon_sym_DASH] = ACTIONS(101),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_BSLASH_RBRACK_BSLASH_DASH_RBRACK_SLASH] = ACTIONS(103),
    [anon_sym_BSLASH] = ACTIONS(99),
  },
  [29] = {
    [sym_class_range] = STATE(57),
    [sym_class_atom] = STATE(28),
    [sym_class_escape] = STATE(26),
    [aux_sym_character_class_repeat1] = STATE(57),
    [anon_sym_RBRACK] = ACTIONS(77),
    [anon_sym_DASH] = ACTIONS(41),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_BSLASH_RBRACK_BSLASH_DASH_RBRACK_SLASH] = ACTIONS(79),
    [anon_sym_BSLASH] = ACTIONS(43),
  },
  [30] = {
    [ts_builtin_sym_end] = ACTIONS(105),
    [anon_sym_PIPE] = ACTIONS(105),
    [anon_sym_DOT] = ACTIONS(105),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(105),
    [anon_sym_RPAREN] = ACTIONS(105),
    [anon_sym_CARET] = ACTIONS(105),
    [anon_sym_DOLLAR] = ACTIONS(105),
    [anon_sym_BSLASHb] = ACTIONS(105),
    [anon_sym_BSLASHB] = ACTIONS(105),
    [anon_sym_LPAREN_QMARK] = ACTIONS(107),
    [anon_sym_LBRACK] = ACTIONS(105),
    [anon_sym_BSLASH] = ACTIONS(107),
    [sym_pattern_character] = ACTIONS(105),
    [anon_sym_QMARK] = ACTIONS(105),
    [anon_sym_STAR] = ACTIONS(105),
    [anon_sym_PLUS] = ACTIONS(105),
    [anon_sym_LBRACE] = ACTIONS(105),
    [anon_sym_LPAREN] = ACTIONS(107),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(105),
  },
  [31] = {
    [ts_builtin_sym_end] = ACTIONS(109),
    [anon_sym_PIPE] = ACTIONS(109),
    [anon_sym_DOT] = ACTIONS(109),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(109),
    [anon_sym_RPAREN] = ACTIONS(109),
    [anon_sym_CARET] = ACTIONS(109),
    [anon_sym_DOLLAR] = ACTIONS(109),
    [anon_sym_BSLASHb] = ACTIONS(109),
    [anon_sym_BSLASHB] = ACTIONS(109),
    [anon_sym_LPAREN_QMARK] = ACTIONS(111),
    [anon_sym_LBRACK] = ACTIONS(109),
    [anon_sym_BSLASH] = ACTIONS(111),
    [sym_pattern_character] = ACTIONS(109),
    [anon_sym_QMARK] = ACTIONS(109),
    [anon_sym_STAR] = ACTIONS(109),
    [anon_sym_PLUS] = ACTIONS(109),
    [anon_sym_LBRACE] = ACTIONS(109),
    [anon_sym_LPAREN] = ACTIONS(111),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(109),
  },
  [32] = {
    [anon_sym_LBRACE] = ACTIONS(113),
  },
  [33] = {
    [sym_control_letter] = ACTIONS(115),
  },
  [34] = {
    [ts_builtin_sym_end] = ACTIONS(117),
    [anon_sym_PIPE] = ACTIONS(117),
    [anon_sym_DOT] = ACTIONS(117),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(117),
    [anon_sym_RPAREN] = ACTIONS(117),
    [anon_sym_CARET] = ACTIONS(117),
    [anon_sym_DOLLAR] = ACTIONS(117),
    [anon_sym_BSLASHb] = ACTIONS(117),
    [anon_sym_BSLASHB] = ACTIONS(117),
    [anon_sym_LPAREN_QMARK] = ACTIONS(119),
    [anon_sym_LBRACK] = ACTIONS(117),
    [anon_sym_BSLASH] = ACTIONS(119),
    [sym_pattern_character] = ACTIONS(117),
    [anon_sym_QMARK] = ACTIONS(117),
    [anon_sym_STAR] = ACTIONS(117),
    [anon_sym_PLUS] = ACTIONS(117),
    [anon_sym_LBRACE] = ACTIONS(117),
    [anon_sym_LPAREN] = ACTIONS(119),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(117),
  },
  [35] = {
    [anon_sym_RPAREN] = ACTIONS(121),
  },
  [36] = {
    [anon_sym_GT] = ACTIONS(123),
  },
  [37] = {
    [aux_sym_disjunction_repeat1] = STATE(42),
    [ts_builtin_sym_end] = ACTIONS(125),
    [anon_sym_PIPE] = ACTIONS(5),
  },
  [38] = {
    [ts_builtin_sym_end] = ACTIONS(127),
    [anon_sym_PIPE] = ACTIONS(127),
    [anon_sym_DOT] = ACTIONS(127),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(127),
    [anon_sym_RPAREN] = ACTIONS(127),
    [anon_sym_CARET] = ACTIONS(127),
    [anon_sym_DOLLAR] = ACTIONS(127),
    [anon_sym_BSLASHb] = ACTIONS(127),
    [anon_sym_BSLASHB] = ACTIONS(127),
    [anon_sym_LPAREN_QMARK] = ACTIONS(129),
    [anon_sym_LBRACK] = ACTIONS(127),
    [anon_sym_BSLASH] = ACTIONS(129),
    [sym_pattern_character] = ACTIONS(127),
    [anon_sym_QMARK] = ACTIONS(127),
    [anon_sym_LPAREN] = ACTIONS(129),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(127),
  },
  [39] = {
    [sym_decimal_digits] = ACTIONS(131),
  },
  [40] = {
    [ts_builtin_sym_end] = ACTIONS(133),
    [anon_sym_PIPE] = ACTIONS(133),
    [anon_sym_DOT] = ACTIONS(133),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(133),
    [anon_sym_RPAREN] = ACTIONS(133),
    [anon_sym_CARET] = ACTIONS(133),
    [anon_sym_DOLLAR] = ACTIONS(133),
    [anon_sym_BSLASHb] = ACTIONS(133),
    [anon_sym_BSLASHB] = ACTIONS(133),
    [anon_sym_LPAREN_QMARK] = ACTIONS(135),
    [anon_sym_LBRACK] = ACTIONS(133),
    [anon_sym_BSLASH] = ACTIONS(135),
    [sym_pattern_character] = ACTIONS(133),
    [anon_sym_LPAREN] = ACTIONS(135),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(133),
  },
  [41] = {
    [ts_builtin_sym_end] = ACTIONS(137),
    [anon_sym_PIPE] = ACTIONS(137),
    [anon_sym_DOT] = ACTIONS(137),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(137),
    [anon_sym_RPAREN] = ACTIONS(137),
    [anon_sym_CARET] = ACTIONS(137),
    [anon_sym_DOLLAR] = ACTIONS(137),
    [anon_sym_BSLASHb] = ACTIONS(137),
    [anon_sym_BSLASHB] = ACTIONS(137),
    [anon_sym_LPAREN_QMARK] = ACTIONS(139),
    [anon_sym_LBRACK] = ACTIONS(137),
    [anon_sym_BSLASH] = ACTIONS(139),
    [sym_pattern_character] = ACTIONS(137),
    [anon_sym_QMARK] = ACTIONS(141),
    [anon_sym_LPAREN] = ACTIONS(139),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(137),
  },
  [42] = {
    [aux_sym_disjunction_repeat1] = STATE(42),
    [ts_builtin_sym_end] = ACTIONS(73),
    [anon_sym_PIPE] = ACTIONS(143),
  },
  [43] = {
    [sym_atom] = STATE(14),
    [sym_non_capturing_group] = STATE(3),
    [sym_assertion] = STATE(3),
    [sym_character_class] = STATE(3),
    [sym_atom_escape] = STATE(3),
    [sym_anonymous_capturing_group] = STATE(3),
    [sym_named_capturing_group] = STATE(3),
    [aux_sym_term_repeat1] = STATE(43),
    [ts_builtin_sym_end] = ACTIONS(133),
    [anon_sym_PIPE] = ACTIONS(133),
    [anon_sym_DOT] = ACTIONS(146),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(149),
    [anon_sym_CARET] = ACTIONS(152),
    [anon_sym_DOLLAR] = ACTIONS(152),
    [anon_sym_BSLASHb] = ACTIONS(152),
    [anon_sym_BSLASHB] = ACTIONS(152),
    [anon_sym_LPAREN_QMARK] = ACTIONS(155),
    [anon_sym_LBRACK] = ACTIONS(158),
    [anon_sym_BSLASH] = ACTIONS(161),
    [sym_pattern_character] = ACTIONS(146),
    [anon_sym_LPAREN] = ACTIONS(164),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(167),
  },
  [44] = {
    [ts_builtin_sym_end] = ACTIONS(170),
    [anon_sym_PIPE] = ACTIONS(170),
    [anon_sym_DOT] = ACTIONS(170),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(170),
    [anon_sym_RPAREN] = ACTIONS(170),
    [anon_sym_CARET] = ACTIONS(170),
    [anon_sym_DOLLAR] = ACTIONS(170),
    [anon_sym_BSLASHb] = ACTIONS(170),
    [anon_sym_BSLASHB] = ACTIONS(170),
    [anon_sym_LPAREN_QMARK] = ACTIONS(172),
    [anon_sym_LBRACK] = ACTIONS(170),
    [anon_sym_BSLASH] = ACTIONS(172),
    [sym_pattern_character] = ACTIONS(170),
    [anon_sym_QMARK] = ACTIONS(170),
    [anon_sym_STAR] = ACTIONS(170),
    [anon_sym_PLUS] = ACTIONS(170),
    [anon_sym_LBRACE] = ACTIONS(170),
    [anon_sym_LPAREN] = ACTIONS(172),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(170),
  },
  [45] = {
    [aux_sym_disjunction_repeat1] = STATE(46),
    [anon_sym_PIPE] = ACTIONS(29),
    [anon_sym_RPAREN] = ACTIONS(125),
  },
  [46] = {
    [aux_sym_disjunction_repeat1] = STATE(46),
    [anon_sym_PIPE] = ACTIONS(174),
    [anon_sym_RPAREN] = ACTIONS(73),
  },
  [47] = {
    [sym_atom] = STATE(14),
    [sym_non_capturing_group] = STATE(3),
    [sym_assertion] = STATE(3),
    [sym_character_class] = STATE(3),
    [sym_atom_escape] = STATE(3),
    [sym_anonymous_capturing_group] = STATE(3),
    [sym_named_capturing_group] = STATE(3),
    [aux_sym_term_repeat1] = STATE(47),
    [anon_sym_PIPE] = ACTIONS(133),
    [anon_sym_DOT] = ACTIONS(146),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(149),
    [anon_sym_RPAREN] = ACTIONS(133),
    [anon_sym_CARET] = ACTIONS(152),
    [anon_sym_DOLLAR] = ACTIONS(152),
    [anon_sym_BSLASHb] = ACTIONS(152),
    [anon_sym_BSLASHB] = ACTIONS(152),
    [anon_sym_LPAREN_QMARK] = ACTIONS(155),
    [anon_sym_LBRACK] = ACTIONS(158),
    [anon_sym_BSLASH] = ACTIONS(161),
    [sym_pattern_character] = ACTIONS(146),
    [anon_sym_LPAREN] = ACTIONS(164),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(167),
  },
  [48] = {
    [anon_sym_RPAREN] = ACTIONS(177),
  },
  [49] = {
    [ts_builtin_sym_end] = ACTIONS(179),
    [anon_sym_PIPE] = ACTIONS(179),
    [anon_sym_DOT] = ACTIONS(179),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(179),
    [anon_sym_RPAREN] = ACTIONS(179),
    [anon_sym_CARET] = ACTIONS(179),
    [anon_sym_DOLLAR] = ACTIONS(179),
    [anon_sym_BSLASHb] = ACTIONS(179),
    [anon_sym_BSLASHB] = ACTIONS(179),
    [anon_sym_LPAREN_QMARK] = ACTIONS(181),
    [anon_sym_LBRACK] = ACTIONS(179),
    [anon_sym_BSLASH] = ACTIONS(181),
    [sym_pattern_character] = ACTIONS(179),
    [anon_sym_QMARK] = ACTIONS(179),
    [anon_sym_STAR] = ACTIONS(179),
    [anon_sym_PLUS] = ACTIONS(179),
    [anon_sym_LBRACE] = ACTIONS(179),
    [anon_sym_LPAREN] = ACTIONS(181),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(179),
  },
  [50] = {
    [sym_class_range] = STATE(57),
    [sym_class_atom] = STATE(28),
    [sym_class_escape] = STATE(26),
    [aux_sym_character_class_repeat1] = STATE(57),
    [anon_sym_RBRACK] = ACTIONS(183),
    [anon_sym_DASH] = ACTIONS(41),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_BSLASH_RBRACK_BSLASH_DASH_RBRACK_SLASH] = ACTIONS(79),
    [anon_sym_BSLASH] = ACTIONS(43),
  },
  [51] = {
    [anon_sym_RBRACK] = ACTIONS(185),
    [anon_sym_DASH] = ACTIONS(185),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_BSLASH_RBRACK_BSLASH_DASH_RBRACK_SLASH] = ACTIONS(187),
    [anon_sym_BSLASH] = ACTIONS(185),
  },
  [52] = {
    [anon_sym_RBRACK] = ACTIONS(111),
    [anon_sym_DASH] = ACTIONS(111),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_BSLASH_RBRACK_BSLASH_DASH_RBRACK_SLASH] = ACTIONS(109),
    [anon_sym_BSLASH] = ACTIONS(111),
  },
  [53] = {
    [anon_sym_LBRACE] = ACTIONS(189),
  },
  [54] = {
    [sym_control_letter] = ACTIONS(191),
  },
  [55] = {
    [anon_sym_RBRACK] = ACTIONS(119),
    [anon_sym_DASH] = ACTIONS(119),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_BSLASH_RBRACK_BSLASH_DASH_RBRACK_SLASH] = ACTIONS(117),
    [anon_sym_BSLASH] = ACTIONS(119),
  },
  [56] = {
    [sym_class_atom] = STATE(68),
    [sym_class_escape] = STATE(26),
    [anon_sym_DASH] = ACTIONS(41),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_BSLASH_RBRACK_BSLASH_DASH_RBRACK_SLASH] = ACTIONS(79),
    [anon_sym_BSLASH] = ACTIONS(43),
  },
  [57] = {
    [sym_class_range] = STATE(57),
    [sym_class_atom] = STATE(28),
    [sym_class_escape] = STATE(26),
    [aux_sym_character_class_repeat1] = STATE(57),
    [anon_sym_RBRACK] = ACTIONS(193),
    [anon_sym_DASH] = ACTIONS(195),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_BSLASH_RBRACK_BSLASH_DASH_RBRACK_SLASH] = ACTIONS(198),
    [anon_sym_BSLASH] = ACTIONS(201),
  },
  [58] = {
    [sym_unicode_property_value_expression] = STATE(70),
    [sym_unicode_property] = ACTIONS(204),
  },
  [59] = {
    [ts_builtin_sym_end] = ACTIONS(206),
    [anon_sym_PIPE] = ACTIONS(206),
    [anon_sym_DOT] = ACTIONS(206),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(206),
    [anon_sym_RPAREN] = ACTIONS(206),
    [anon_sym_CARET] = ACTIONS(206),
    [anon_sym_DOLLAR] = ACTIONS(206),
    [anon_sym_BSLASHb] = ACTIONS(206),
    [anon_sym_BSLASHB] = ACTIONS(206),
    [anon_sym_LPAREN_QMARK] = ACTIONS(208),
    [anon_sym_LBRACK] = ACTIONS(206),
    [anon_sym_BSLASH] = ACTIONS(208),
    [sym_pattern_character] = ACTIONS(206),
    [anon_sym_QMARK] = ACTIONS(206),
    [anon_sym_STAR] = ACTIONS(206),
    [anon_sym_PLUS] = ACTIONS(206),
    [anon_sym_LBRACE] = ACTIONS(206),
    [anon_sym_LPAREN] = ACTIONS(208),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(206),
  },
  [60] = {
    [ts_builtin_sym_end] = ACTIONS(210),
    [anon_sym_PIPE] = ACTIONS(210),
    [anon_sym_DOT] = ACTIONS(210),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(210),
    [anon_sym_RPAREN] = ACTIONS(210),
    [anon_sym_CARET] = ACTIONS(210),
    [anon_sym_DOLLAR] = ACTIONS(210),
    [anon_sym_BSLASHb] = ACTIONS(210),
    [anon_sym_BSLASHB] = ACTIONS(210),
    [anon_sym_LPAREN_QMARK] = ACTIONS(212),
    [anon_sym_LBRACK] = ACTIONS(210),
    [anon_sym_BSLASH] = ACTIONS(212),
    [sym_pattern_character] = ACTIONS(210),
    [anon_sym_QMARK] = ACTIONS(210),
    [anon_sym_STAR] = ACTIONS(210),
    [anon_sym_PLUS] = ACTIONS(210),
    [anon_sym_LBRACE] = ACTIONS(210),
    [anon_sym_LPAREN] = ACTIONS(212),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(210),
  },
  [61] = {
    [sym_pattern] = STATE(71),
    [sym_disjunction] = STATE(12),
    [sym_term] = STATE(20),
    [sym_atom] = STATE(14),
    [sym_non_capturing_group] = STATE(3),
    [sym_assertion] = STATE(3),
    [sym_character_class] = STATE(3),
    [sym_atom_escape] = STATE(3),
    [sym_anonymous_capturing_group] = STATE(3),
    [sym_named_capturing_group] = STATE(3),
    [aux_sym_disjunction_repeat1] = STATE(21),
    [aux_sym_term_repeat1] = STATE(22),
    [anon_sym_PIPE] = ACTIONS(29),
    [anon_sym_DOT] = ACTIONS(7),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(9),
    [anon_sym_CARET] = ACTIONS(11),
    [anon_sym_DOLLAR] = ACTIONS(11),
    [anon_sym_BSLASHb] = ACTIONS(11),
    [anon_sym_BSLASHB] = ACTIONS(11),
    [anon_sym_LPAREN_QMARK] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_BSLASH] = ACTIONS(17),
    [sym_pattern_character] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(21),
  },
  [62] = {
    [anon_sym_COMMA] = ACTIONS(214),
    [anon_sym_RBRACE] = ACTIONS(216),
  },
  [63] = {
    [ts_builtin_sym_end] = ACTIONS(218),
    [anon_sym_PIPE] = ACTIONS(218),
    [anon_sym_DOT] = ACTIONS(218),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(218),
    [anon_sym_RPAREN] = ACTIONS(218),
    [anon_sym_CARET] = ACTIONS(218),
    [anon_sym_DOLLAR] = ACTIONS(218),
    [anon_sym_BSLASHb] = ACTIONS(218),
    [anon_sym_BSLASHB] = ACTIONS(218),
    [anon_sym_LPAREN_QMARK] = ACTIONS(220),
    [anon_sym_LBRACK] = ACTIONS(218),
    [anon_sym_BSLASH] = ACTIONS(220),
    [sym_pattern_character] = ACTIONS(218),
    [anon_sym_LPAREN] = ACTIONS(220),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(218),
  },
  [64] = {
    [ts_builtin_sym_end] = ACTIONS(222),
    [anon_sym_PIPE] = ACTIONS(222),
    [anon_sym_DOT] = ACTIONS(222),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(222),
    [anon_sym_RPAREN] = ACTIONS(222),
    [anon_sym_CARET] = ACTIONS(222),
    [anon_sym_DOLLAR] = ACTIONS(222),
    [anon_sym_BSLASHb] = ACTIONS(222),
    [anon_sym_BSLASHB] = ACTIONS(222),
    [anon_sym_LPAREN_QMARK] = ACTIONS(224),
    [anon_sym_LBRACK] = ACTIONS(222),
    [anon_sym_BSLASH] = ACTIONS(224),
    [sym_pattern_character] = ACTIONS(222),
    [anon_sym_QMARK] = ACTIONS(222),
    [anon_sym_STAR] = ACTIONS(222),
    [anon_sym_PLUS] = ACTIONS(222),
    [anon_sym_LBRACE] = ACTIONS(222),
    [anon_sym_LPAREN] = ACTIONS(224),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(222),
  },
  [65] = {
    [ts_builtin_sym_end] = ACTIONS(226),
    [anon_sym_PIPE] = ACTIONS(226),
    [anon_sym_DOT] = ACTIONS(226),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(226),
    [anon_sym_RPAREN] = ACTIONS(226),
    [anon_sym_CARET] = ACTIONS(226),
    [anon_sym_DOLLAR] = ACTIONS(226),
    [anon_sym_BSLASHb] = ACTIONS(226),
    [anon_sym_BSLASHB] = ACTIONS(226),
    [anon_sym_LPAREN_QMARK] = ACTIONS(228),
    [anon_sym_LBRACK] = ACTIONS(226),
    [anon_sym_BSLASH] = ACTIONS(228),
    [sym_pattern_character] = ACTIONS(226),
    [anon_sym_QMARK] = ACTIONS(226),
    [anon_sym_STAR] = ACTIONS(226),
    [anon_sym_PLUS] = ACTIONS(226),
    [anon_sym_LBRACE] = ACTIONS(226),
    [anon_sym_LPAREN] = ACTIONS(228),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(226),
  },
  [66] = {
    [sym_unicode_property_value_expression] = STATE(74),
    [sym_unicode_property] = ACTIONS(204),
  },
  [67] = {
    [anon_sym_RBRACK] = ACTIONS(208),
    [anon_sym_DASH] = ACTIONS(208),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_BSLASH_RBRACK_BSLASH_DASH_RBRACK_SLASH] = ACTIONS(206),
    [anon_sym_BSLASH] = ACTIONS(208),
  },
  [68] = {
    [anon_sym_RBRACK] = ACTIONS(230),
    [anon_sym_DASH] = ACTIONS(230),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_BSLASH_RBRACK_BSLASH_DASH_RBRACK_SLASH] = ACTIONS(232),
    [anon_sym_BSLASH] = ACTIONS(230),
  },
  [69] = {
    [anon_sym_EQ] = ACTIONS(234),
    [anon_sym_RBRACE] = ACTIONS(236),
  },
  [70] = {
    [anon_sym_RBRACE] = ACTIONS(238),
  },
  [71] = {
    [anon_sym_RPAREN] = ACTIONS(240),
  },
  [72] = {
    [sym_decimal_digits] = ACTIONS(242),
  },
  [73] = {
    [ts_builtin_sym_end] = ACTIONS(244),
    [anon_sym_PIPE] = ACTIONS(244),
    [anon_sym_DOT] = ACTIONS(244),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(244),
    [anon_sym_RPAREN] = ACTIONS(244),
    [anon_sym_CARET] = ACTIONS(244),
    [anon_sym_DOLLAR] = ACTIONS(244),
    [anon_sym_BSLASHb] = ACTIONS(244),
    [anon_sym_BSLASHB] = ACTIONS(244),
    [anon_sym_LPAREN_QMARK] = ACTIONS(246),
    [anon_sym_LBRACK] = ACTIONS(244),
    [anon_sym_BSLASH] = ACTIONS(246),
    [sym_pattern_character] = ACTIONS(244),
    [anon_sym_QMARK] = ACTIONS(244),
    [anon_sym_LPAREN] = ACTIONS(246),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(244),
  },
  [74] = {
    [anon_sym_RBRACE] = ACTIONS(248),
  },
  [75] = {
    [sym_unicode_property] = ACTIONS(250),
  },
  [76] = {
    [ts_builtin_sym_end] = ACTIONS(252),
    [anon_sym_PIPE] = ACTIONS(252),
    [anon_sym_DOT] = ACTIONS(252),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(252),
    [anon_sym_RPAREN] = ACTIONS(252),
    [anon_sym_CARET] = ACTIONS(252),
    [anon_sym_DOLLAR] = ACTIONS(252),
    [anon_sym_BSLASHb] = ACTIONS(252),
    [anon_sym_BSLASHB] = ACTIONS(252),
    [anon_sym_LPAREN_QMARK] = ACTIONS(254),
    [anon_sym_LBRACK] = ACTIONS(252),
    [anon_sym_BSLASH] = ACTIONS(254),
    [sym_pattern_character] = ACTIONS(252),
    [anon_sym_QMARK] = ACTIONS(252),
    [anon_sym_STAR] = ACTIONS(252),
    [anon_sym_PLUS] = ACTIONS(252),
    [anon_sym_LBRACE] = ACTIONS(252),
    [anon_sym_LPAREN] = ACTIONS(254),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(252),
  },
  [77] = {
    [ts_builtin_sym_end] = ACTIONS(256),
    [anon_sym_PIPE] = ACTIONS(256),
    [anon_sym_DOT] = ACTIONS(256),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(256),
    [anon_sym_RPAREN] = ACTIONS(256),
    [anon_sym_CARET] = ACTIONS(256),
    [anon_sym_DOLLAR] = ACTIONS(256),
    [anon_sym_BSLASHb] = ACTIONS(256),
    [anon_sym_BSLASHB] = ACTIONS(256),
    [anon_sym_LPAREN_QMARK] = ACTIONS(258),
    [anon_sym_LBRACK] = ACTIONS(256),
    [anon_sym_BSLASH] = ACTIONS(258),
    [sym_pattern_character] = ACTIONS(256),
    [anon_sym_QMARK] = ACTIONS(256),
    [anon_sym_STAR] = ACTIONS(256),
    [anon_sym_PLUS] = ACTIONS(256),
    [anon_sym_LBRACE] = ACTIONS(256),
    [anon_sym_LPAREN] = ACTIONS(258),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(256),
  },
  [78] = {
    [anon_sym_RBRACE] = ACTIONS(260),
  },
  [79] = {
    [anon_sym_RBRACK] = ACTIONS(254),
    [anon_sym_DASH] = ACTIONS(254),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_BSLASH_RBRACK_BSLASH_DASH_RBRACK_SLASH] = ACTIONS(252),
    [anon_sym_BSLASH] = ACTIONS(254),
  },
  [80] = {
    [anon_sym_RBRACE] = ACTIONS(262),
  },
  [81] = {
    [ts_builtin_sym_end] = ACTIONS(264),
    [anon_sym_PIPE] = ACTIONS(264),
    [anon_sym_DOT] = ACTIONS(264),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(264),
    [anon_sym_RPAREN] = ACTIONS(264),
    [anon_sym_CARET] = ACTIONS(264),
    [anon_sym_DOLLAR] = ACTIONS(264),
    [anon_sym_BSLASHb] = ACTIONS(264),
    [anon_sym_BSLASHB] = ACTIONS(264),
    [anon_sym_LPAREN_QMARK] = ACTIONS(266),
    [anon_sym_LBRACK] = ACTIONS(264),
    [anon_sym_BSLASH] = ACTIONS(266),
    [sym_pattern_character] = ACTIONS(264),
    [anon_sym_QMARK] = ACTIONS(264),
    [anon_sym_LPAREN] = ACTIONS(266),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(264),
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
  [19] = {.count = 1, .reusable = false}, SHIFT(9),
  [21] = {.count = 1, .reusable = true}, SHIFT(10),
  [23] = {.count = 1, .reusable = true}, REDUCE(aux_sym_disjunction_repeat1, 1),
  [25] = {.count = 1, .reusable = true}, REDUCE(sym_atom, 1),
  [27] = {.count = 1, .reusable = false}, REDUCE(sym_atom, 1),
  [29] = {.count = 1, .reusable = true}, SHIFT(18),
  [31] = {.count = 1, .reusable = true}, REDUCE(sym_assertion, 1),
  [33] = {.count = 1, .reusable = false}, REDUCE(sym_assertion, 1),
  [35] = {.count = 1, .reusable = true}, SHIFT(23),
  [37] = {.count = 1, .reusable = false}, SHIFT(24),
  [39] = {.count = 1, .reusable = false}, SHIFT(25),
  [41] = {.count = 1, .reusable = false}, SHIFT(26),
  [43] = {.count = 1, .reusable = false}, SHIFT(27),
  [45] = {.count = 1, .reusable = true}, SHIFT(30),
  [47] = {.count = 1, .reusable = true}, SHIFT(31),
  [49] = {.count = 1, .reusable = true}, SHIFT(32),
  [51] = {.count = 1, .reusable = true}, SHIFT(33),
  [53] = {.count = 1, .reusable = true}, SHIFT(34),
  [55] = {.count = 1, .reusable = true}, SHIFT(36),
  [57] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [59] = {.count = 1, .reusable = true}, REDUCE(sym_pattern, 1),
  [61] = {.count = 1, .reusable = true}, REDUCE(aux_sym_term_repeat1, 1),
  [63] = {.count = 1, .reusable = false}, REDUCE(aux_sym_term_repeat1, 1),
  [65] = {.count = 1, .reusable = true}, SHIFT(38),
  [67] = {.count = 1, .reusable = true}, SHIFT(39),
  [69] = {.count = 1, .reusable = true}, REDUCE(sym_disjunction, 1),
  [71] = {.count = 1, .reusable = true}, REDUCE(sym_term, 1),
  [73] = {.count = 1, .reusable = true}, REDUCE(aux_sym_disjunction_repeat1, 2),
  [75] = {.count = 1, .reusable = true}, SHIFT(44),
  [77] = {.count = 1, .reusable = false}, SHIFT(49),
  [79] = {.count = 1, .reusable = true}, SHIFT(26),
  [81] = {.count = 1, .reusable = true}, REDUCE(sym_character_class, 2),
  [83] = {.count = 1, .reusable = false}, REDUCE(sym_character_class, 2),
  [85] = {.count = 1, .reusable = false}, REDUCE(sym_class_atom, 1),
  [87] = {.count = 1, .reusable = true}, REDUCE(sym_class_atom, 1),
  [89] = {.count = 1, .reusable = true}, SHIFT(51),
  [91] = {.count = 1, .reusable = true}, SHIFT(52),
  [93] = {.count = 1, .reusable = true}, SHIFT(53),
  [95] = {.count = 1, .reusable = true}, SHIFT(54),
  [97] = {.count = 1, .reusable = true}, SHIFT(55),
  [99] = {.count = 1, .reusable = false}, REDUCE(sym_class_range, 1),
  [101] = {.count = 1, .reusable = false}, SHIFT(56),
  [103] = {.count = 1, .reusable = true}, REDUCE(sym_class_range, 1),
  [105] = {.count = 1, .reusable = true}, REDUCE(sym_atom_escape, 2),
  [107] = {.count = 1, .reusable = false}, REDUCE(sym_atom_escape, 2),
  [109] = {.count = 1, .reusable = true}, REDUCE(sym_character_class_escape, 1),
  [111] = {.count = 1, .reusable = false}, REDUCE(sym_character_class_escape, 1),
  [113] = {.count = 1, .reusable = true}, SHIFT(58),
  [115] = {.count = 1, .reusable = true}, SHIFT(59),
  [117] = {.count = 1, .reusable = true}, REDUCE(sym_character_escape, 1),
  [119] = {.count = 1, .reusable = false}, REDUCE(sym_character_escape, 1),
  [121] = {.count = 1, .reusable = true}, SHIFT(60),
  [123] = {.count = 1, .reusable = true}, SHIFT(61),
  [125] = {.count = 1, .reusable = true}, REDUCE(sym_disjunction, 2),
  [127] = {.count = 1, .reusable = true}, REDUCE(sym_quantifier_prefix, 1),
  [129] = {.count = 1, .reusable = false}, REDUCE(sym_quantifier_prefix, 1),
  [131] = {.count = 1, .reusable = true}, SHIFT(62),
  [133] = {.count = 1, .reusable = true}, REDUCE(aux_sym_term_repeat1, 2),
  [135] = {.count = 1, .reusable = false}, REDUCE(aux_sym_term_repeat1, 2),
  [137] = {.count = 1, .reusable = true}, REDUCE(sym_quantifier, 1),
  [139] = {.count = 1, .reusable = false}, REDUCE(sym_quantifier, 1),
  [141] = {.count = 1, .reusable = true}, SHIFT(63),
  [143] = {.count = 2, .reusable = true}, REDUCE(aux_sym_disjunction_repeat1, 2), SHIFT_REPEAT(2),
  [146] = {.count = 2, .reusable = true}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(3),
  [149] = {.count = 2, .reusable = true}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(4),
  [152] = {.count = 2, .reusable = true}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(5),
  [155] = {.count = 2, .reusable = false}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(6),
  [158] = {.count = 2, .reusable = true}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(7),
  [161] = {.count = 2, .reusable = false}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(8),
  [164] = {.count = 2, .reusable = false}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(9),
  [167] = {.count = 2, .reusable = true}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(10),
  [170] = {.count = 1, .reusable = true}, REDUCE(sym_non_capturing_group, 3),
  [172] = {.count = 1, .reusable = false}, REDUCE(sym_non_capturing_group, 3),
  [174] = {.count = 2, .reusable = true}, REDUCE(aux_sym_disjunction_repeat1, 2), SHIFT_REPEAT(18),
  [177] = {.count = 1, .reusable = true}, SHIFT(64),
  [179] = {.count = 1, .reusable = true}, REDUCE(sym_character_class, 3),
  [181] = {.count = 1, .reusable = false}, REDUCE(sym_character_class, 3),
  [183] = {.count = 1, .reusable = false}, SHIFT(65),
  [185] = {.count = 1, .reusable = false}, REDUCE(sym_class_escape, 2),
  [187] = {.count = 1, .reusable = true}, REDUCE(sym_class_escape, 2),
  [189] = {.count = 1, .reusable = true}, SHIFT(66),
  [191] = {.count = 1, .reusable = true}, SHIFT(67),
  [193] = {.count = 1, .reusable = false}, REDUCE(aux_sym_character_class_repeat1, 2),
  [195] = {.count = 2, .reusable = false}, REDUCE(aux_sym_character_class_repeat1, 2), SHIFT_REPEAT(26),
  [198] = {.count = 2, .reusable = true}, REDUCE(aux_sym_character_class_repeat1, 2), SHIFT_REPEAT(26),
  [201] = {.count = 2, .reusable = false}, REDUCE(aux_sym_character_class_repeat1, 2), SHIFT_REPEAT(27),
  [204] = {.count = 1, .reusable = true}, SHIFT(69),
  [206] = {.count = 1, .reusable = true}, REDUCE(sym_character_escape, 2),
  [208] = {.count = 1, .reusable = false}, REDUCE(sym_character_escape, 2),
  [210] = {.count = 1, .reusable = true}, REDUCE(sym_anonymous_capturing_group, 3),
  [212] = {.count = 1, .reusable = false}, REDUCE(sym_anonymous_capturing_group, 3),
  [214] = {.count = 1, .reusable = true}, SHIFT(72),
  [216] = {.count = 1, .reusable = true}, SHIFT(73),
  [218] = {.count = 1, .reusable = true}, REDUCE(sym_quantifier, 2, .alias_sequence_id = 1),
  [220] = {.count = 1, .reusable = false}, REDUCE(sym_quantifier, 2, .alias_sequence_id = 1),
  [222] = {.count = 1, .reusable = true}, REDUCE(sym_assertion, 4),
  [224] = {.count = 1, .reusable = false}, REDUCE(sym_assertion, 4),
  [226] = {.count = 1, .reusable = true}, REDUCE(sym_character_class, 4),
  [228] = {.count = 1, .reusable = false}, REDUCE(sym_character_class, 4),
  [230] = {.count = 1, .reusable = false}, REDUCE(sym_class_range, 3),
  [232] = {.count = 1, .reusable = true}, REDUCE(sym_class_range, 3),
  [234] = {.count = 1, .reusable = true}, SHIFT(75),
  [236] = {.count = 1, .reusable = true}, REDUCE(sym_unicode_property_value_expression, 1, .alias_sequence_id = 2),
  [238] = {.count = 1, .reusable = true}, SHIFT(76),
  [240] = {.count = 1, .reusable = true}, SHIFT(77),
  [242] = {.count = 1, .reusable = true}, SHIFT(78),
  [244] = {.count = 1, .reusable = true}, REDUCE(sym_count_quantifier, 3),
  [246] = {.count = 1, .reusable = false}, REDUCE(sym_count_quantifier, 3),
  [248] = {.count = 1, .reusable = true}, SHIFT(79),
  [250] = {.count = 1, .reusable = true}, SHIFT(80),
  [252] = {.count = 1, .reusable = true}, REDUCE(sym_character_class_escape, 4),
  [254] = {.count = 1, .reusable = false}, REDUCE(sym_character_class_escape, 4),
  [256] = {.count = 1, .reusable = true}, REDUCE(sym_named_capturing_group, 5),
  [258] = {.count = 1, .reusable = false}, REDUCE(sym_named_capturing_group, 5),
  [260] = {.count = 1, .reusable = true}, SHIFT(81),
  [262] = {.count = 1, .reusable = true}, REDUCE(sym_unicode_property_value_expression, 3, .alias_sequence_id = 3),
  [264] = {.count = 1, .reusable = true}, REDUCE(sym_count_quantifier, 5),
  [266] = {.count = 1, .reusable = false}, REDUCE(sym_count_quantifier, 5),
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
