#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 64
#define SYMBOL_COUNT 52
#define ALIAS_COUNT 3
#define TOKEN_COUNT 34
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
  sym_decimal_digits = 33,
  sym_pattern = 34,
  sym_disjunction = 35,
  sym_term = 36,
  sym_atom = 37,
  sym_non_capturing_group = 38,
  sym_assertion = 39,
  sym_character_class = 40,
  sym_class_range = 41,
  sym_quantifier = 42,
  sym_quantifier_prefix = 43,
  sym_count_quantifier = 44,
  sym_atom_escape = 45,
  sym_character_class_escape = 46,
  sym_unicode_property_value_expression = 47,
  sym_character_escape = 48,
  aux_sym_disjunction_repeat1 = 49,
  aux_sym_term_repeat1 = 50,
  aux_sym_character_class_repeat1 = 51,
  alias_sym_non_greedy = 52,
  alias_sym_unicode_property_name = 53,
  alias_sym_unicode_property_value = 54,
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
        ADVANCE(4);
      if (lookahead == '=')
        ADVANCE(11);
      if (lookahead == '?')
        ADVANCE(12);
      if (lookahead == '[')
        ADVANCE(13);
      if (lookahead == '\\')
        ADVANCE(14);
      if (lookahead == ']')
        ADVANCE(17);
      if (lookahead == '^')
        ADVANCE(18);
      if (lookahead == 'c')
        ADVANCE(19);
      if (lookahead == '{')
        ADVANCE(20);
      if (lookahead == '|')
        ADVANCE(21);
      if (lookahead == '}')
        ADVANCE(22);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(4);
      if (lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'v')
        ADVANCE(4);
      if (lookahead == 'D' ||
          lookahead == 'S' ||
          lookahead == 'W' ||
          lookahead == 'd' ||
          lookahead == 's' ||
          lookahead == 'w')
        ADVANCE(4);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(4);
      ADVANCE(4);
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
      ACCEPT_TOKEN(sym_class_atom);
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
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == 'B')
        ADVANCE(15);
      if (lookahead == 'b')
        ADVANCE(16);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_BSLASHB);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_BSLASHb);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_c);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 23:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '$')
        ADVANCE(3);
      if (lookahead == '(')
        ADVANCE(24);
      if (lookahead == '.')
        ADVANCE(10);
      if (lookahead == '[')
        ADVANCE(13);
      if (lookahead == '\\')
        ADVANCE(14);
      if (lookahead == '^')
        ADVANCE(18);
      if (lookahead == '|')
        ADVANCE(21);
      if ((lookahead < '(' || lookahead > '+') &&
          lookahead != '?' &&
          (lookahead < '[' || lookahead > '^') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(27);
      END_STATE();
    case 24:
      if (lookahead == '?')
        ADVANCE(25);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_LPAREN_QMARK);
      if (lookahead == ':')
        ADVANCE(26);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_LPAREN_QMARK_COLON);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_pattern_character);
      END_STATE();
    case 28:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '$')
        ADVANCE(3);
      if (lookahead == '(')
        ADVANCE(24);
      if (lookahead == ')')
        ADVANCE(5);
      if (lookahead == '*')
        ADVANCE(6);
      if (lookahead == '+')
        ADVANCE(7);
      if (lookahead == '.')
        ADVANCE(10);
      if (lookahead == '?')
        ADVANCE(12);
      if (lookahead == '[')
        ADVANCE(13);
      if (lookahead == '\\')
        ADVANCE(14);
      if (lookahead == '^')
        ADVANCE(18);
      if (lookahead == '{')
        ADVANCE(20);
      if (lookahead == '|')
        ADVANCE(21);
      if ((lookahead < '[' || lookahead > '^') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(27);
      END_STATE();
    case 29:
      if (lookahead == 'c')
        ADVANCE(19);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(30);
      if (lookahead == '0' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'v')
        ADVANCE(31);
      if (lookahead == 'D' ||
          lookahead == 'S' ||
          lookahead == 'W' ||
          lookahead == 'd' ||
          lookahead == 's' ||
          lookahead == 'w')
        ADVANCE(32);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(33);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKpP_RBRACK_SLASH);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_control_escape);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKdDsSwW_RBRACK_SLASH);
      END_STATE();
    case 33:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(34);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_decimal_escape);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(34);
      END_STATE();
    case 35:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '<')
        ADVANCE(36);
      if (lookahead == '=')
        ADVANCE(11);
      END_STATE();
    case 36:
      if (lookahead == '!')
        ADVANCE(37);
      if (lookahead == '=')
        ADVANCE(38);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_LT_BANG);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 39:
      if (lookahead == ']')
        ADVANCE(17);
      if (lookahead == '^')
        ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '-' &&
          (lookahead < '\\' || lookahead > '^'))
        ADVANCE(4);
      END_STATE();
    case 40:
      if (lookahead == 0)
        ADVANCE(1);
      END_STATE();
    case 41:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == ')')
        ADVANCE(5);
      END_STATE();
    case 42:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '|')
        ADVANCE(21);
      END_STATE();
    case 43:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == ')')
        ADVANCE(5);
      if (lookahead == '|')
        ADVANCE(21);
      END_STATE();
    case 44:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_control_letter);
      END_STATE();
    case 46:
      if (lookahead == '-')
        ADVANCE(9);
      if (lookahead == ']')
        ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '\\' &&
          lookahead != ']')
        ADVANCE(4);
      END_STATE();
    case 47:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '$')
        ADVANCE(3);
      if (lookahead == '(')
        ADVANCE(24);
      if (lookahead == ')')
        ADVANCE(5);
      if (lookahead == '.')
        ADVANCE(10);
      if (lookahead == '?')
        ADVANCE(12);
      if (lookahead == '[')
        ADVANCE(13);
      if (lookahead == '\\')
        ADVANCE(14);
      if (lookahead == '^')
        ADVANCE(18);
      if (lookahead == '|')
        ADVANCE(21);
      if ((lookahead < '(' || lookahead > '+') &&
          (lookahead < '[' || lookahead > '^') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(27);
      END_STATE();
    case 48:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(49);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_decimal_digits);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(49);
      END_STATE();
    case 50:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '$')
        ADVANCE(3);
      if (lookahead == '(')
        ADVANCE(24);
      if (lookahead == ')')
        ADVANCE(5);
      if (lookahead == '.')
        ADVANCE(10);
      if (lookahead == '[')
        ADVANCE(13);
      if (lookahead == '\\')
        ADVANCE(14);
      if (lookahead == '^')
        ADVANCE(18);
      if (lookahead == '|')
        ADVANCE(21);
      if ((lookahead < '(' || lookahead > '+') &&
          lookahead != '?' &&
          (lookahead < '[' || lookahead > '^') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(27);
      END_STATE();
    case 51:
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
      if (lookahead == ',')
        ADVANCE(8);
      if (lookahead == '}')
        ADVANCE(22);
      END_STATE();
    case 54:
      if (lookahead == '=')
        ADVANCE(11);
      if (lookahead == '}')
        ADVANCE(22);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 23},
  [2] = {.lex_state = 23},
  [3] = {.lex_state = 28},
  [4] = {.lex_state = 29},
  [5] = {.lex_state = 23},
  [6] = {.lex_state = 28},
  [7] = {.lex_state = 35},
  [8] = {.lex_state = 39},
  [9] = {.lex_state = 40},
  [10] = {.lex_state = 41},
  [11] = {.lex_state = 42},
  [12] = {.lex_state = 28},
  [13] = {.lex_state = 42},
  [14] = {.lex_state = 23},
  [15] = {.lex_state = 43},
  [16] = {.lex_state = 28},
  [17] = {.lex_state = 28},
  [18] = {.lex_state = 28},
  [19] = {.lex_state = 44},
  [20] = {.lex_state = 28},
  [21] = {.lex_state = 28},
  [22] = {.lex_state = 28},
  [23] = {.lex_state = 28},
  [24] = {.lex_state = 28},
  [25] = {.lex_state = 28},
  [26] = {.lex_state = 28},
  [27] = {.lex_state = 23},
  [28] = {.lex_state = 46},
  [29] = {.lex_state = 28},
  [30] = {.lex_state = 46},
  [31] = {.lex_state = 46},
  [32] = {.lex_state = 42},
  [33] = {.lex_state = 47},
  [34] = {.lex_state = 48},
  [35] = {.lex_state = 50},
  [36] = {.lex_state = 47},
  [37] = {.lex_state = 42},
  [38] = {.lex_state = 23},
  [39] = {.lex_state = 51},
  [40] = {.lex_state = 28},
  [41] = {.lex_state = 28},
  [42] = {.lex_state = 28},
  [43] = {.lex_state = 28},
  [44] = {.lex_state = 28},
  [45] = {.lex_state = 28},
  [46] = {.lex_state = 28},
  [47] = {.lex_state = 46},
  [48] = {.lex_state = 46},
  [49] = {.lex_state = 46},
  [50] = {.lex_state = 53},
  [51] = {.lex_state = 50},
  [52] = {.lex_state = 54},
  [53] = {.lex_state = 53},
  [54] = {.lex_state = 28},
  [55] = {.lex_state = 28},
  [56] = {.lex_state = 46},
  [57] = {.lex_state = 48},
  [58] = {.lex_state = 47},
  [59] = {.lex_state = 51},
  [60] = {.lex_state = 28},
  [61] = {.lex_state = 53},
  [62] = {.lex_state = 53},
  [63] = {.lex_state = 47},
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
  },
  [1] = {
    [sym_pattern] = STATE(9),
    [sym_disjunction] = STATE(10),
    [sym_term] = STATE(11),
    [sym_atom] = STATE(12),
    [sym_non_capturing_group] = STATE(3),
    [sym_assertion] = STATE(3),
    [sym_character_class] = STATE(3),
    [aux_sym_disjunction_repeat1] = STATE(13),
    [aux_sym_term_repeat1] = STATE(14),
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
  },
  [2] = {
    [sym_term] = STATE(15),
    [sym_atom] = STATE(12),
    [sym_non_capturing_group] = STATE(3),
    [sym_assertion] = STATE(3),
    [sym_character_class] = STATE(3),
    [aux_sym_term_repeat1] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(19),
    [anon_sym_PIPE] = ACTIONS(19),
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
  },
  [3] = {
    [ts_builtin_sym_end] = ACTIONS(21),
    [anon_sym_PIPE] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(21),
    [anon_sym_CARET] = ACTIONS(21),
    [anon_sym_DOLLAR] = ACTIONS(21),
    [anon_sym_BSLASHb] = ACTIONS(21),
    [anon_sym_BSLASHB] = ACTIONS(21),
    [anon_sym_LPAREN_QMARK] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(21),
    [sym_pattern_character] = ACTIONS(21),
    [anon_sym_QMARK] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(21),
  },
  [4] = {
    [sym_atom_escape] = STATE(21),
    [sym_character_class_escape] = STATE(16),
    [sym_character_escape] = STATE(16),
    [sym_decimal_escape] = ACTIONS(25),
    [aux_sym_SLASH_LBRACKdDsSwW_RBRACK_SLASH] = ACTIONS(27),
    [aux_sym_SLASH_LBRACKpP_RBRACK_SLASH] = ACTIONS(29),
    [anon_sym_c] = ACTIONS(31),
    [sym_control_escape] = ACTIONS(33),
  },
  [5] = {
    [sym_pattern] = STATE(23),
    [sym_disjunction] = STATE(10),
    [sym_term] = STATE(24),
    [sym_atom] = STATE(12),
    [sym_non_capturing_group] = STATE(3),
    [sym_assertion] = STATE(3),
    [sym_character_class] = STATE(3),
    [aux_sym_disjunction_repeat1] = STATE(25),
    [aux_sym_term_repeat1] = STATE(26),
    [anon_sym_PIPE] = ACTIONS(35),
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
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(37),
    [anon_sym_PIPE] = ACTIONS(37),
    [anon_sym_DOT] = ACTIONS(37),
    [anon_sym_BSLASH] = ACTIONS(39),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(37),
    [anon_sym_RPAREN] = ACTIONS(37),
    [anon_sym_CARET] = ACTIONS(37),
    [anon_sym_DOLLAR] = ACTIONS(37),
    [anon_sym_BSLASHb] = ACTIONS(37),
    [anon_sym_BSLASHB] = ACTIONS(37),
    [anon_sym_LPAREN_QMARK] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(37),
    [sym_pattern_character] = ACTIONS(37),
    [anon_sym_QMARK] = ACTIONS(37),
    [anon_sym_STAR] = ACTIONS(37),
    [anon_sym_PLUS] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(37),
  },
  [7] = {
    [anon_sym_EQ] = ACTIONS(41),
    [anon_sym_BANG] = ACTIONS(41),
    [anon_sym_LT_EQ] = ACTIONS(41),
    [anon_sym_LT_BANG] = ACTIONS(41),
  },
  [8] = {
    [sym_class_range] = STATE(31),
    [aux_sym_character_class_repeat1] = STATE(31),
    [anon_sym_CARET] = ACTIONS(43),
    [anon_sym_RBRACK] = ACTIONS(45),
    [sym_class_atom] = ACTIONS(47),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(49),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(51),
    [anon_sym_RPAREN] = ACTIONS(51),
  },
  [11] = {
    [aux_sym_disjunction_repeat1] = STATE(32),
    [ts_builtin_sym_end] = ACTIONS(51),
    [anon_sym_PIPE] = ACTIONS(5),
  },
  [12] = {
    [sym_quantifier] = STATE(35),
    [sym_quantifier_prefix] = STATE(36),
    [sym_count_quantifier] = STATE(33),
    [ts_builtin_sym_end] = ACTIONS(53),
    [anon_sym_PIPE] = ACTIONS(53),
    [anon_sym_DOT] = ACTIONS(53),
    [anon_sym_BSLASH] = ACTIONS(55),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(53),
    [anon_sym_RPAREN] = ACTIONS(53),
    [anon_sym_CARET] = ACTIONS(53),
    [anon_sym_DOLLAR] = ACTIONS(53),
    [anon_sym_BSLASHb] = ACTIONS(53),
    [anon_sym_BSLASHB] = ACTIONS(53),
    [anon_sym_LPAREN_QMARK] = ACTIONS(55),
    [anon_sym_LBRACK] = ACTIONS(53),
    [sym_pattern_character] = ACTIONS(53),
    [anon_sym_QMARK] = ACTIONS(57),
    [anon_sym_STAR] = ACTIONS(57),
    [anon_sym_PLUS] = ACTIONS(57),
    [anon_sym_LBRACE] = ACTIONS(59),
  },
  [13] = {
    [aux_sym_disjunction_repeat1] = STATE(37),
    [ts_builtin_sym_end] = ACTIONS(61),
    [anon_sym_PIPE] = ACTIONS(5),
  },
  [14] = {
    [sym_atom] = STATE(12),
    [sym_non_capturing_group] = STATE(3),
    [sym_assertion] = STATE(3),
    [sym_character_class] = STATE(3),
    [aux_sym_term_repeat1] = STATE(38),
    [ts_builtin_sym_end] = ACTIONS(63),
    [anon_sym_PIPE] = ACTIONS(63),
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
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(65),
    [anon_sym_PIPE] = ACTIONS(65),
    [anon_sym_RPAREN] = ACTIONS(65),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(67),
    [anon_sym_PIPE] = ACTIONS(67),
    [anon_sym_DOT] = ACTIONS(67),
    [anon_sym_BSLASH] = ACTIONS(69),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(67),
    [anon_sym_RPAREN] = ACTIONS(67),
    [anon_sym_CARET] = ACTIONS(67),
    [anon_sym_DOLLAR] = ACTIONS(67),
    [anon_sym_BSLASHb] = ACTIONS(67),
    [anon_sym_BSLASHB] = ACTIONS(67),
    [anon_sym_LPAREN_QMARK] = ACTIONS(69),
    [anon_sym_LBRACK] = ACTIONS(67),
    [sym_pattern_character] = ACTIONS(67),
    [anon_sym_QMARK] = ACTIONS(67),
    [anon_sym_STAR] = ACTIONS(67),
    [anon_sym_PLUS] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(67),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(71),
    [anon_sym_PIPE] = ACTIONS(71),
    [anon_sym_DOT] = ACTIONS(71),
    [anon_sym_BSLASH] = ACTIONS(73),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(71),
    [anon_sym_RPAREN] = ACTIONS(71),
    [anon_sym_CARET] = ACTIONS(71),
    [anon_sym_DOLLAR] = ACTIONS(71),
    [anon_sym_BSLASHb] = ACTIONS(71),
    [anon_sym_BSLASHB] = ACTIONS(71),
    [anon_sym_LPAREN_QMARK] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(71),
    [sym_pattern_character] = ACTIONS(71),
    [anon_sym_QMARK] = ACTIONS(71),
    [anon_sym_STAR] = ACTIONS(71),
    [anon_sym_PLUS] = ACTIONS(71),
    [anon_sym_LBRACE] = ACTIONS(71),
  },
  [18] = {
    [anon_sym_LBRACE] = ACTIONS(75),
  },
  [19] = {
    [sym_control_letter] = ACTIONS(77),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(79),
    [anon_sym_PIPE] = ACTIONS(79),
    [anon_sym_DOT] = ACTIONS(79),
    [anon_sym_BSLASH] = ACTIONS(81),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(79),
    [anon_sym_RPAREN] = ACTIONS(79),
    [anon_sym_CARET] = ACTIONS(79),
    [anon_sym_DOLLAR] = ACTIONS(79),
    [anon_sym_BSLASHb] = ACTIONS(79),
    [anon_sym_BSLASHB] = ACTIONS(79),
    [anon_sym_LPAREN_QMARK] = ACTIONS(81),
    [anon_sym_LBRACK] = ACTIONS(79),
    [sym_pattern_character] = ACTIONS(79),
    [anon_sym_QMARK] = ACTIONS(79),
    [anon_sym_STAR] = ACTIONS(79),
    [anon_sym_PLUS] = ACTIONS(79),
    [anon_sym_LBRACE] = ACTIONS(79),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(83),
    [anon_sym_PIPE] = ACTIONS(83),
    [anon_sym_DOT] = ACTIONS(83),
    [anon_sym_BSLASH] = ACTIONS(85),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(83),
    [anon_sym_RPAREN] = ACTIONS(83),
    [anon_sym_CARET] = ACTIONS(83),
    [anon_sym_DOLLAR] = ACTIONS(83),
    [anon_sym_BSLASHb] = ACTIONS(83),
    [anon_sym_BSLASHB] = ACTIONS(83),
    [anon_sym_LPAREN_QMARK] = ACTIONS(85),
    [anon_sym_LBRACK] = ACTIONS(83),
    [sym_pattern_character] = ACTIONS(83),
    [anon_sym_QMARK] = ACTIONS(83),
    [anon_sym_STAR] = ACTIONS(83),
    [anon_sym_PLUS] = ACTIONS(83),
    [anon_sym_LBRACE] = ACTIONS(83),
  },
  [22] = {
    [sym_term] = STATE(15),
    [sym_atom] = STATE(12),
    [sym_non_capturing_group] = STATE(3),
    [sym_assertion] = STATE(3),
    [sym_character_class] = STATE(3),
    [aux_sym_term_repeat1] = STATE(26),
    [anon_sym_PIPE] = ACTIONS(19),
    [anon_sym_DOT] = ACTIONS(7),
    [anon_sym_BSLASH] = ACTIONS(9),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(11),
    [anon_sym_RPAREN] = ACTIONS(19),
    [anon_sym_CARET] = ACTIONS(13),
    [anon_sym_DOLLAR] = ACTIONS(13),
    [anon_sym_BSLASHb] = ACTIONS(13),
    [anon_sym_BSLASHB] = ACTIONS(13),
    [anon_sym_LPAREN_QMARK] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_pattern_character] = ACTIONS(7),
  },
  [23] = {
    [anon_sym_RPAREN] = ACTIONS(87),
  },
  [24] = {
    [aux_sym_disjunction_repeat1] = STATE(42),
    [anon_sym_PIPE] = ACTIONS(35),
    [anon_sym_RPAREN] = ACTIONS(51),
  },
  [25] = {
    [aux_sym_disjunction_repeat1] = STATE(43),
    [anon_sym_PIPE] = ACTIONS(35),
    [anon_sym_RPAREN] = ACTIONS(61),
  },
  [26] = {
    [sym_atom] = STATE(12),
    [sym_non_capturing_group] = STATE(3),
    [sym_assertion] = STATE(3),
    [sym_character_class] = STATE(3),
    [aux_sym_term_repeat1] = STATE(44),
    [anon_sym_PIPE] = ACTIONS(63),
    [anon_sym_DOT] = ACTIONS(7),
    [anon_sym_BSLASH] = ACTIONS(9),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(11),
    [anon_sym_RPAREN] = ACTIONS(63),
    [anon_sym_CARET] = ACTIONS(13),
    [anon_sym_DOLLAR] = ACTIONS(13),
    [anon_sym_BSLASHb] = ACTIONS(13),
    [anon_sym_BSLASHB] = ACTIONS(13),
    [anon_sym_LPAREN_QMARK] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_pattern_character] = ACTIONS(7),
  },
  [27] = {
    [sym_pattern] = STATE(45),
    [sym_disjunction] = STATE(10),
    [sym_term] = STATE(24),
    [sym_atom] = STATE(12),
    [sym_non_capturing_group] = STATE(3),
    [sym_assertion] = STATE(3),
    [sym_character_class] = STATE(3),
    [aux_sym_disjunction_repeat1] = STATE(25),
    [aux_sym_term_repeat1] = STATE(26),
    [anon_sym_PIPE] = ACTIONS(35),
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
  },
  [28] = {
    [sym_class_range] = STATE(47),
    [aux_sym_character_class_repeat1] = STATE(47),
    [anon_sym_RBRACK] = ACTIONS(89),
    [sym_class_atom] = ACTIONS(91),
  },
  [29] = {
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
  },
  [30] = {
    [anon_sym_RBRACK] = ACTIONS(97),
    [anon_sym_DASH] = ACTIONS(99),
    [sym_class_atom] = ACTIONS(97),
  },
  [31] = {
    [sym_class_range] = STATE(49),
    [aux_sym_character_class_repeat1] = STATE(49),
    [anon_sym_RBRACK] = ACTIONS(89),
    [sym_class_atom] = ACTIONS(91),
  },
  [32] = {
    [aux_sym_disjunction_repeat1] = STATE(37),
    [ts_builtin_sym_end] = ACTIONS(101),
    [anon_sym_PIPE] = ACTIONS(5),
  },
  [33] = {
    [ts_builtin_sym_end] = ACTIONS(103),
    [anon_sym_PIPE] = ACTIONS(103),
    [anon_sym_DOT] = ACTIONS(103),
    [anon_sym_BSLASH] = ACTIONS(105),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(103),
    [anon_sym_RPAREN] = ACTIONS(103),
    [anon_sym_CARET] = ACTIONS(103),
    [anon_sym_DOLLAR] = ACTIONS(103),
    [anon_sym_BSLASHb] = ACTIONS(103),
    [anon_sym_BSLASHB] = ACTIONS(103),
    [anon_sym_LPAREN_QMARK] = ACTIONS(105),
    [anon_sym_LBRACK] = ACTIONS(103),
    [sym_pattern_character] = ACTIONS(103),
    [anon_sym_QMARK] = ACTIONS(103),
  },
  [34] = {
    [sym_decimal_digits] = ACTIONS(107),
  },
  [35] = {
    [ts_builtin_sym_end] = ACTIONS(109),
    [anon_sym_PIPE] = ACTIONS(109),
    [anon_sym_DOT] = ACTIONS(109),
    [anon_sym_BSLASH] = ACTIONS(111),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(109),
    [anon_sym_RPAREN] = ACTIONS(109),
    [anon_sym_CARET] = ACTIONS(109),
    [anon_sym_DOLLAR] = ACTIONS(109),
    [anon_sym_BSLASHb] = ACTIONS(109),
    [anon_sym_BSLASHB] = ACTIONS(109),
    [anon_sym_LPAREN_QMARK] = ACTIONS(111),
    [anon_sym_LBRACK] = ACTIONS(109),
    [sym_pattern_character] = ACTIONS(109),
  },
  [36] = {
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
    [anon_sym_QMARK] = ACTIONS(117),
  },
  [37] = {
    [aux_sym_disjunction_repeat1] = STATE(37),
    [ts_builtin_sym_end] = ACTIONS(65),
    [anon_sym_PIPE] = ACTIONS(119),
  },
  [38] = {
    [sym_atom] = STATE(12),
    [sym_non_capturing_group] = STATE(3),
    [sym_assertion] = STATE(3),
    [sym_character_class] = STATE(3),
    [aux_sym_term_repeat1] = STATE(38),
    [ts_builtin_sym_end] = ACTIONS(109),
    [anon_sym_PIPE] = ACTIONS(109),
    [anon_sym_DOT] = ACTIONS(122),
    [anon_sym_BSLASH] = ACTIONS(125),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(128),
    [anon_sym_CARET] = ACTIONS(131),
    [anon_sym_DOLLAR] = ACTIONS(131),
    [anon_sym_BSLASHb] = ACTIONS(131),
    [anon_sym_BSLASHB] = ACTIONS(131),
    [anon_sym_LPAREN_QMARK] = ACTIONS(134),
    [anon_sym_LBRACK] = ACTIONS(137),
    [sym_pattern_character] = ACTIONS(122),
  },
  [39] = {
    [sym_unicode_property_value_expression] = STATE(53),
    [sym_unicode_property] = ACTIONS(140),
  },
  [40] = {
    [ts_builtin_sym_end] = ACTIONS(142),
    [anon_sym_PIPE] = ACTIONS(142),
    [anon_sym_DOT] = ACTIONS(142),
    [anon_sym_BSLASH] = ACTIONS(144),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(142),
    [anon_sym_RPAREN] = ACTIONS(142),
    [anon_sym_CARET] = ACTIONS(142),
    [anon_sym_DOLLAR] = ACTIONS(142),
    [anon_sym_BSLASHb] = ACTIONS(142),
    [anon_sym_BSLASHB] = ACTIONS(142),
    [anon_sym_LPAREN_QMARK] = ACTIONS(144),
    [anon_sym_LBRACK] = ACTIONS(142),
    [sym_pattern_character] = ACTIONS(142),
    [anon_sym_QMARK] = ACTIONS(142),
    [anon_sym_STAR] = ACTIONS(142),
    [anon_sym_PLUS] = ACTIONS(142),
    [anon_sym_LBRACE] = ACTIONS(142),
  },
  [41] = {
    [ts_builtin_sym_end] = ACTIONS(146),
    [anon_sym_PIPE] = ACTIONS(146),
    [anon_sym_DOT] = ACTIONS(146),
    [anon_sym_BSLASH] = ACTIONS(148),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(146),
    [anon_sym_RPAREN] = ACTIONS(146),
    [anon_sym_CARET] = ACTIONS(146),
    [anon_sym_DOLLAR] = ACTIONS(146),
    [anon_sym_BSLASHb] = ACTIONS(146),
    [anon_sym_BSLASHB] = ACTIONS(146),
    [anon_sym_LPAREN_QMARK] = ACTIONS(148),
    [anon_sym_LBRACK] = ACTIONS(146),
    [sym_pattern_character] = ACTIONS(146),
    [anon_sym_QMARK] = ACTIONS(146),
    [anon_sym_STAR] = ACTIONS(146),
    [anon_sym_PLUS] = ACTIONS(146),
    [anon_sym_LBRACE] = ACTIONS(146),
  },
  [42] = {
    [aux_sym_disjunction_repeat1] = STATE(43),
    [anon_sym_PIPE] = ACTIONS(35),
    [anon_sym_RPAREN] = ACTIONS(101),
  },
  [43] = {
    [aux_sym_disjunction_repeat1] = STATE(43),
    [anon_sym_PIPE] = ACTIONS(150),
    [anon_sym_RPAREN] = ACTIONS(65),
  },
  [44] = {
    [sym_atom] = STATE(12),
    [sym_non_capturing_group] = STATE(3),
    [sym_assertion] = STATE(3),
    [sym_character_class] = STATE(3),
    [aux_sym_term_repeat1] = STATE(44),
    [anon_sym_PIPE] = ACTIONS(109),
    [anon_sym_DOT] = ACTIONS(122),
    [anon_sym_BSLASH] = ACTIONS(125),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(128),
    [anon_sym_RPAREN] = ACTIONS(109),
    [anon_sym_CARET] = ACTIONS(131),
    [anon_sym_DOLLAR] = ACTIONS(131),
    [anon_sym_BSLASHb] = ACTIONS(131),
    [anon_sym_BSLASHB] = ACTIONS(131),
    [anon_sym_LPAREN_QMARK] = ACTIONS(134),
    [anon_sym_LBRACK] = ACTIONS(137),
    [sym_pattern_character] = ACTIONS(122),
  },
  [45] = {
    [anon_sym_RPAREN] = ACTIONS(153),
  },
  [46] = {
    [ts_builtin_sym_end] = ACTIONS(155),
    [anon_sym_PIPE] = ACTIONS(155),
    [anon_sym_DOT] = ACTIONS(155),
    [anon_sym_BSLASH] = ACTIONS(157),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(155),
    [anon_sym_RPAREN] = ACTIONS(155),
    [anon_sym_CARET] = ACTIONS(155),
    [anon_sym_DOLLAR] = ACTIONS(155),
    [anon_sym_BSLASHb] = ACTIONS(155),
    [anon_sym_BSLASHB] = ACTIONS(155),
    [anon_sym_LPAREN_QMARK] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(155),
    [sym_pattern_character] = ACTIONS(155),
    [anon_sym_QMARK] = ACTIONS(155),
    [anon_sym_STAR] = ACTIONS(155),
    [anon_sym_PLUS] = ACTIONS(155),
    [anon_sym_LBRACE] = ACTIONS(155),
  },
  [47] = {
    [sym_class_range] = STATE(49),
    [aux_sym_character_class_repeat1] = STATE(49),
    [anon_sym_RBRACK] = ACTIONS(159),
    [sym_class_atom] = ACTIONS(91),
  },
  [48] = {
    [sym_class_atom] = ACTIONS(161),
  },
  [49] = {
    [sym_class_range] = STATE(49),
    [aux_sym_character_class_repeat1] = STATE(49),
    [anon_sym_RBRACK] = ACTIONS(163),
    [sym_class_atom] = ACTIONS(165),
  },
  [50] = {
    [anon_sym_COMMA] = ACTIONS(168),
    [anon_sym_RBRACE] = ACTIONS(170),
  },
  [51] = {
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
  },
  [52] = {
    [anon_sym_EQ] = ACTIONS(176),
    [anon_sym_RBRACE] = ACTIONS(178),
  },
  [53] = {
    [anon_sym_RBRACE] = ACTIONS(180),
  },
  [54] = {
    [ts_builtin_sym_end] = ACTIONS(182),
    [anon_sym_PIPE] = ACTIONS(182),
    [anon_sym_DOT] = ACTIONS(182),
    [anon_sym_BSLASH] = ACTIONS(184),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(182),
    [anon_sym_RPAREN] = ACTIONS(182),
    [anon_sym_CARET] = ACTIONS(182),
    [anon_sym_DOLLAR] = ACTIONS(182),
    [anon_sym_BSLASHb] = ACTIONS(182),
    [anon_sym_BSLASHB] = ACTIONS(182),
    [anon_sym_LPAREN_QMARK] = ACTIONS(184),
    [anon_sym_LBRACK] = ACTIONS(182),
    [sym_pattern_character] = ACTIONS(182),
    [anon_sym_QMARK] = ACTIONS(182),
    [anon_sym_STAR] = ACTIONS(182),
    [anon_sym_PLUS] = ACTIONS(182),
    [anon_sym_LBRACE] = ACTIONS(182),
  },
  [55] = {
    [ts_builtin_sym_end] = ACTIONS(186),
    [anon_sym_PIPE] = ACTIONS(186),
    [anon_sym_DOT] = ACTIONS(186),
    [anon_sym_BSLASH] = ACTIONS(188),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(186),
    [anon_sym_RPAREN] = ACTIONS(186),
    [anon_sym_CARET] = ACTIONS(186),
    [anon_sym_DOLLAR] = ACTIONS(186),
    [anon_sym_BSLASHb] = ACTIONS(186),
    [anon_sym_BSLASHB] = ACTIONS(186),
    [anon_sym_LPAREN_QMARK] = ACTIONS(188),
    [anon_sym_LBRACK] = ACTIONS(186),
    [sym_pattern_character] = ACTIONS(186),
    [anon_sym_QMARK] = ACTIONS(186),
    [anon_sym_STAR] = ACTIONS(186),
    [anon_sym_PLUS] = ACTIONS(186),
    [anon_sym_LBRACE] = ACTIONS(186),
  },
  [56] = {
    [anon_sym_RBRACK] = ACTIONS(190),
    [sym_class_atom] = ACTIONS(190),
  },
  [57] = {
    [sym_decimal_digits] = ACTIONS(192),
  },
  [58] = {
    [ts_builtin_sym_end] = ACTIONS(194),
    [anon_sym_PIPE] = ACTIONS(194),
    [anon_sym_DOT] = ACTIONS(194),
    [anon_sym_BSLASH] = ACTIONS(196),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(194),
    [anon_sym_RPAREN] = ACTIONS(194),
    [anon_sym_CARET] = ACTIONS(194),
    [anon_sym_DOLLAR] = ACTIONS(194),
    [anon_sym_BSLASHb] = ACTIONS(194),
    [anon_sym_BSLASHB] = ACTIONS(194),
    [anon_sym_LPAREN_QMARK] = ACTIONS(196),
    [anon_sym_LBRACK] = ACTIONS(194),
    [sym_pattern_character] = ACTIONS(194),
    [anon_sym_QMARK] = ACTIONS(194),
  },
  [59] = {
    [sym_unicode_property] = ACTIONS(198),
  },
  [60] = {
    [ts_builtin_sym_end] = ACTIONS(200),
    [anon_sym_PIPE] = ACTIONS(200),
    [anon_sym_DOT] = ACTIONS(200),
    [anon_sym_BSLASH] = ACTIONS(202),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(200),
    [anon_sym_RPAREN] = ACTIONS(200),
    [anon_sym_CARET] = ACTIONS(200),
    [anon_sym_DOLLAR] = ACTIONS(200),
    [anon_sym_BSLASHb] = ACTIONS(200),
    [anon_sym_BSLASHB] = ACTIONS(200),
    [anon_sym_LPAREN_QMARK] = ACTIONS(202),
    [anon_sym_LBRACK] = ACTIONS(200),
    [sym_pattern_character] = ACTIONS(200),
    [anon_sym_QMARK] = ACTIONS(200),
    [anon_sym_STAR] = ACTIONS(200),
    [anon_sym_PLUS] = ACTIONS(200),
    [anon_sym_LBRACE] = ACTIONS(200),
  },
  [61] = {
    [anon_sym_RBRACE] = ACTIONS(204),
  },
  [62] = {
    [anon_sym_RBRACE] = ACTIONS(206),
  },
  [63] = {
    [ts_builtin_sym_end] = ACTIONS(208),
    [anon_sym_PIPE] = ACTIONS(208),
    [anon_sym_DOT] = ACTIONS(208),
    [anon_sym_BSLASH] = ACTIONS(210),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(208),
    [anon_sym_RPAREN] = ACTIONS(208),
    [anon_sym_CARET] = ACTIONS(208),
    [anon_sym_DOLLAR] = ACTIONS(208),
    [anon_sym_BSLASHb] = ACTIONS(208),
    [anon_sym_BSLASHB] = ACTIONS(208),
    [anon_sym_LPAREN_QMARK] = ACTIONS(210),
    [anon_sym_LBRACK] = ACTIONS(208),
    [sym_pattern_character] = ACTIONS(208),
    [anon_sym_QMARK] = ACTIONS(208),
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
  [19] = {.count = 1, .reusable = true}, REDUCE(aux_sym_disjunction_repeat1, 1),
  [21] = {.count = 1, .reusable = true}, REDUCE(sym_atom, 1),
  [23] = {.count = 1, .reusable = false}, REDUCE(sym_atom, 1),
  [25] = {.count = 1, .reusable = true}, SHIFT(16),
  [27] = {.count = 1, .reusable = true}, SHIFT(17),
  [29] = {.count = 1, .reusable = true}, SHIFT(18),
  [31] = {.count = 1, .reusable = true}, SHIFT(19),
  [33] = {.count = 1, .reusable = true}, SHIFT(20),
  [35] = {.count = 1, .reusable = true}, SHIFT(22),
  [37] = {.count = 1, .reusable = true}, REDUCE(sym_assertion, 1),
  [39] = {.count = 1, .reusable = false}, REDUCE(sym_assertion, 1),
  [41] = {.count = 1, .reusable = true}, SHIFT(27),
  [43] = {.count = 1, .reusable = true}, SHIFT(28),
  [45] = {.count = 1, .reusable = true}, SHIFT(29),
  [47] = {.count = 1, .reusable = false}, SHIFT(30),
  [49] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [51] = {.count = 1, .reusable = true}, REDUCE(sym_pattern, 1),
  [53] = {.count = 1, .reusable = true}, REDUCE(aux_sym_term_repeat1, 1),
  [55] = {.count = 1, .reusable = false}, REDUCE(aux_sym_term_repeat1, 1),
  [57] = {.count = 1, .reusable = true}, SHIFT(33),
  [59] = {.count = 1, .reusable = true}, SHIFT(34),
  [61] = {.count = 1, .reusable = true}, REDUCE(sym_disjunction, 1),
  [63] = {.count = 1, .reusable = true}, REDUCE(sym_term, 1),
  [65] = {.count = 1, .reusable = true}, REDUCE(aux_sym_disjunction_repeat1, 2),
  [67] = {.count = 1, .reusable = true}, REDUCE(sym_atom_escape, 1),
  [69] = {.count = 1, .reusable = false}, REDUCE(sym_atom_escape, 1),
  [71] = {.count = 1, .reusable = true}, REDUCE(sym_character_class_escape, 1),
  [73] = {.count = 1, .reusable = false}, REDUCE(sym_character_class_escape, 1),
  [75] = {.count = 1, .reusable = true}, SHIFT(39),
  [77] = {.count = 1, .reusable = true}, SHIFT(40),
  [79] = {.count = 1, .reusable = true}, REDUCE(sym_character_escape, 1),
  [81] = {.count = 1, .reusable = false}, REDUCE(sym_character_escape, 1),
  [83] = {.count = 1, .reusable = true}, REDUCE(sym_atom, 2),
  [85] = {.count = 1, .reusable = false}, REDUCE(sym_atom, 2),
  [87] = {.count = 1, .reusable = true}, SHIFT(41),
  [89] = {.count = 1, .reusable = true}, SHIFT(46),
  [91] = {.count = 1, .reusable = true}, SHIFT(30),
  [93] = {.count = 1, .reusable = true}, REDUCE(sym_character_class, 2),
  [95] = {.count = 1, .reusable = false}, REDUCE(sym_character_class, 2),
  [97] = {.count = 1, .reusable = true}, REDUCE(sym_class_range, 1),
  [99] = {.count = 1, .reusable = true}, SHIFT(48),
  [101] = {.count = 1, .reusable = true}, REDUCE(sym_disjunction, 2),
  [103] = {.count = 1, .reusable = true}, REDUCE(sym_quantifier_prefix, 1),
  [105] = {.count = 1, .reusable = false}, REDUCE(sym_quantifier_prefix, 1),
  [107] = {.count = 1, .reusable = true}, SHIFT(50),
  [109] = {.count = 1, .reusable = true}, REDUCE(aux_sym_term_repeat1, 2),
  [111] = {.count = 1, .reusable = false}, REDUCE(aux_sym_term_repeat1, 2),
  [113] = {.count = 1, .reusable = true}, REDUCE(sym_quantifier, 1),
  [115] = {.count = 1, .reusable = false}, REDUCE(sym_quantifier, 1),
  [117] = {.count = 1, .reusable = true}, SHIFT(51),
  [119] = {.count = 2, .reusable = true}, REDUCE(aux_sym_disjunction_repeat1, 2), SHIFT_REPEAT(2),
  [122] = {.count = 2, .reusable = true}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(3),
  [125] = {.count = 2, .reusable = false}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(4),
  [128] = {.count = 2, .reusable = true}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(5),
  [131] = {.count = 2, .reusable = true}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(6),
  [134] = {.count = 2, .reusable = false}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(7),
  [137] = {.count = 2, .reusable = true}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(8),
  [140] = {.count = 1, .reusable = true}, SHIFT(52),
  [142] = {.count = 1, .reusable = true}, REDUCE(sym_character_escape, 2),
  [144] = {.count = 1, .reusable = false}, REDUCE(sym_character_escape, 2),
  [146] = {.count = 1, .reusable = true}, REDUCE(sym_non_capturing_group, 3),
  [148] = {.count = 1, .reusable = false}, REDUCE(sym_non_capturing_group, 3),
  [150] = {.count = 2, .reusable = true}, REDUCE(aux_sym_disjunction_repeat1, 2), SHIFT_REPEAT(22),
  [153] = {.count = 1, .reusable = true}, SHIFT(54),
  [155] = {.count = 1, .reusable = true}, REDUCE(sym_character_class, 3),
  [157] = {.count = 1, .reusable = false}, REDUCE(sym_character_class, 3),
  [159] = {.count = 1, .reusable = true}, SHIFT(55),
  [161] = {.count = 1, .reusable = true}, SHIFT(56),
  [163] = {.count = 1, .reusable = true}, REDUCE(aux_sym_character_class_repeat1, 2),
  [165] = {.count = 2, .reusable = true}, REDUCE(aux_sym_character_class_repeat1, 2), SHIFT_REPEAT(30),
  [168] = {.count = 1, .reusable = true}, SHIFT(57),
  [170] = {.count = 1, .reusable = true}, SHIFT(58),
  [172] = {.count = 1, .reusable = true}, REDUCE(sym_quantifier, 2, .alias_sequence_id = 1),
  [174] = {.count = 1, .reusable = false}, REDUCE(sym_quantifier, 2, .alias_sequence_id = 1),
  [176] = {.count = 1, .reusable = true}, SHIFT(59),
  [178] = {.count = 1, .reusable = true}, REDUCE(sym_unicode_property_value_expression, 1, .alias_sequence_id = 2),
  [180] = {.count = 1, .reusable = true}, SHIFT(60),
  [182] = {.count = 1, .reusable = true}, REDUCE(sym_assertion, 4),
  [184] = {.count = 1, .reusable = false}, REDUCE(sym_assertion, 4),
  [186] = {.count = 1, .reusable = true}, REDUCE(sym_character_class, 4),
  [188] = {.count = 1, .reusable = false}, REDUCE(sym_character_class, 4),
  [190] = {.count = 1, .reusable = true}, REDUCE(sym_class_range, 3),
  [192] = {.count = 1, .reusable = true}, SHIFT(61),
  [194] = {.count = 1, .reusable = true}, REDUCE(sym_count_quantifier, 3),
  [196] = {.count = 1, .reusable = false}, REDUCE(sym_count_quantifier, 3),
  [198] = {.count = 1, .reusable = true}, SHIFT(62),
  [200] = {.count = 1, .reusable = true}, REDUCE(sym_character_class_escape, 4),
  [202] = {.count = 1, .reusable = false}, REDUCE(sym_character_class_escape, 4),
  [204] = {.count = 1, .reusable = true}, SHIFT(63),
  [206] = {.count = 1, .reusable = true}, REDUCE(sym_unicode_property_value_expression, 3, .alias_sequence_id = 3),
  [208] = {.count = 1, .reusable = true}, REDUCE(sym_count_quantifier, 5),
  [210] = {.count = 1, .reusable = false}, REDUCE(sym_count_quantifier, 5),
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
