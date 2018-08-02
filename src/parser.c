#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 50
#define SYMBOL_COUNT 44
#define ALIAS_COUNT 1
#define TOKEN_COUNT 30
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 2

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
  sym_class_atom = 17,
  sym_pattern_character = 18,
  anon_sym_QMARK = 19,
  anon_sym_STAR = 20,
  anon_sym_PLUS = 21,
  anon_sym_LBRACE = 22,
  anon_sym_COMMA = 23,
  anon_sym_RBRACE = 24,
  sym_character_class_escape = 25,
  anon_sym_c = 26,
  sym_control_escape = 27,
  sym_control_letter = 28,
  sym_decimal_digits = 29,
  sym_pattern = 30,
  sym_disjunction = 31,
  sym_term = 32,
  sym_atom = 33,
  sym_non_capturing_group = 34,
  sym_assertion = 35,
  sym_character_class = 36,
  sym_class_range = 37,
  sym_quantifier = 38,
  sym_quantifier_prefix = 39,
  sym_count_quantifier = 40,
  aux_sym_disjunction_repeat1 = 41,
  aux_sym_term_repeat1 = 42,
  aux_sym_character_class_repeat1 = 43,
  alias_sym_non_greedy = 44,
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
  [sym_class_atom] = "class_atom",
  [sym_pattern_character] = "pattern_character",
  [anon_sym_QMARK] = "?",
  [anon_sym_STAR] = "*",
  [anon_sym_PLUS] = "+",
  [anon_sym_LBRACE] = "{",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACE] = "}",
  [sym_character_class_escape] = "character_class_escape",
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
  [aux_sym_disjunction_repeat1] = "disjunction_repeat1",
  [aux_sym_term_repeat1] = "term_repeat1",
  [aux_sym_character_class_repeat1] = "character_class_repeat1",
  [alias_sym_non_greedy] = "non_greedy",
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
  [sym_character_class_escape] = {
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
};

static TSSymbol ts_alias_sequences[2][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [1] = {
    [1] = alias_sym_non_greedy,
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
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '<')
        ADVANCE(30);
      if (lookahead == '=')
        ADVANCE(11);
      END_STATE();
    case 30:
      if (lookahead == '!')
        ADVANCE(31);
      if (lookahead == '=')
        ADVANCE(32);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_LT_BANG);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 33:
      if (lookahead == ']')
        ADVANCE(17);
      if (lookahead == '^')
        ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '-' &&
          (lookahead < '\\' || lookahead > '^'))
        ADVANCE(4);
      END_STATE();
    case 34:
      if (lookahead == 0)
        ADVANCE(1);
      END_STATE();
    case 35:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == ')')
        ADVANCE(5);
      END_STATE();
    case 36:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '|')
        ADVANCE(21);
      END_STATE();
    case 37:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == ')')
        ADVANCE(5);
      if (lookahead == '|')
        ADVANCE(21);
      END_STATE();
    case 38:
      if (lookahead == '-')
        ADVANCE(9);
      if (lookahead == ']')
        ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '\\' &&
          lookahead != ']')
        ADVANCE(4);
      END_STATE();
    case 39:
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
    case 40:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(41);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_decimal_digits);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(41);
      END_STATE();
    case 42:
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
    case 43:
      if (lookahead == ',')
        ADVANCE(8);
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
  [4] = {.lex_state = 23},
  [5] = {.lex_state = 28},
  [6] = {.lex_state = 29},
  [7] = {.lex_state = 33},
  [8] = {.lex_state = 34},
  [9] = {.lex_state = 35},
  [10] = {.lex_state = 36},
  [11] = {.lex_state = 28},
  [12] = {.lex_state = 36},
  [13] = {.lex_state = 23},
  [14] = {.lex_state = 37},
  [15] = {.lex_state = 28},
  [16] = {.lex_state = 28},
  [17] = {.lex_state = 28},
  [18] = {.lex_state = 28},
  [19] = {.lex_state = 28},
  [20] = {.lex_state = 23},
  [21] = {.lex_state = 38},
  [22] = {.lex_state = 28},
  [23] = {.lex_state = 38},
  [24] = {.lex_state = 38},
  [25] = {.lex_state = 36},
  [26] = {.lex_state = 39},
  [27] = {.lex_state = 40},
  [28] = {.lex_state = 42},
  [29] = {.lex_state = 39},
  [30] = {.lex_state = 36},
  [31] = {.lex_state = 23},
  [32] = {.lex_state = 28},
  [33] = {.lex_state = 28},
  [34] = {.lex_state = 28},
  [35] = {.lex_state = 28},
  [36] = {.lex_state = 28},
  [37] = {.lex_state = 28},
  [38] = {.lex_state = 38},
  [39] = {.lex_state = 38},
  [40] = {.lex_state = 38},
  [41] = {.lex_state = 43},
  [42] = {.lex_state = 42},
  [43] = {.lex_state = 28},
  [44] = {.lex_state = 28},
  [45] = {.lex_state = 38},
  [46] = {.lex_state = 40},
  [47] = {.lex_state = 39},
  [48] = {.lex_state = 43},
  [49] = {.lex_state = 39},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
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
    [sym_character_class_escape] = ACTIONS(3),
    [anon_sym_c] = ACTIONS(1),
    [sym_control_escape] = ACTIONS(3),
    [sym_control_letter] = ACTIONS(3),
  },
  [1] = {
    [sym_pattern] = STATE(8),
    [sym_disjunction] = STATE(9),
    [sym_term] = STATE(10),
    [sym_atom] = STATE(11),
    [sym_non_capturing_group] = STATE(3),
    [sym_assertion] = STATE(3),
    [sym_character_class] = STATE(3),
    [aux_sym_disjunction_repeat1] = STATE(12),
    [aux_sym_term_repeat1] = STATE(13),
    [anon_sym_PIPE] = ACTIONS(5),
    [anon_sym_DOT] = ACTIONS(7),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(9),
    [anon_sym_CARET] = ACTIONS(11),
    [anon_sym_DOLLAR] = ACTIONS(11),
    [anon_sym_BSLASHb] = ACTIONS(11),
    [anon_sym_BSLASHB] = ACTIONS(11),
    [anon_sym_LPAREN_QMARK] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [sym_pattern_character] = ACTIONS(7),
  },
  [2] = {
    [sym_term] = STATE(14),
    [sym_atom] = STATE(11),
    [sym_non_capturing_group] = STATE(3),
    [sym_assertion] = STATE(3),
    [sym_character_class] = STATE(3),
    [aux_sym_term_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(17),
    [anon_sym_PIPE] = ACTIONS(17),
    [anon_sym_DOT] = ACTIONS(7),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(9),
    [anon_sym_CARET] = ACTIONS(11),
    [anon_sym_DOLLAR] = ACTIONS(11),
    [anon_sym_BSLASHb] = ACTIONS(11),
    [anon_sym_BSLASHB] = ACTIONS(11),
    [anon_sym_LPAREN_QMARK] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [sym_pattern_character] = ACTIONS(7),
  },
  [3] = {
    [ts_builtin_sym_end] = ACTIONS(19),
    [anon_sym_PIPE] = ACTIONS(19),
    [anon_sym_DOT] = ACTIONS(19),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(19),
    [anon_sym_RPAREN] = ACTIONS(19),
    [anon_sym_CARET] = ACTIONS(19),
    [anon_sym_DOLLAR] = ACTIONS(19),
    [anon_sym_BSLASHb] = ACTIONS(19),
    [anon_sym_BSLASHB] = ACTIONS(19),
    [anon_sym_LPAREN_QMARK] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(19),
    [sym_pattern_character] = ACTIONS(19),
    [anon_sym_QMARK] = ACTIONS(19),
    [anon_sym_STAR] = ACTIONS(19),
    [anon_sym_PLUS] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(19),
  },
  [4] = {
    [sym_pattern] = STATE(16),
    [sym_disjunction] = STATE(9),
    [sym_term] = STATE(17),
    [sym_atom] = STATE(11),
    [sym_non_capturing_group] = STATE(3),
    [sym_assertion] = STATE(3),
    [sym_character_class] = STATE(3),
    [aux_sym_disjunction_repeat1] = STATE(18),
    [aux_sym_term_repeat1] = STATE(19),
    [anon_sym_PIPE] = ACTIONS(23),
    [anon_sym_DOT] = ACTIONS(7),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(9),
    [anon_sym_CARET] = ACTIONS(11),
    [anon_sym_DOLLAR] = ACTIONS(11),
    [anon_sym_BSLASHb] = ACTIONS(11),
    [anon_sym_BSLASHB] = ACTIONS(11),
    [anon_sym_LPAREN_QMARK] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [sym_pattern_character] = ACTIONS(7),
  },
  [5] = {
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
    [sym_pattern_character] = ACTIONS(25),
    [anon_sym_QMARK] = ACTIONS(25),
    [anon_sym_STAR] = ACTIONS(25),
    [anon_sym_PLUS] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(25),
  },
  [6] = {
    [anon_sym_EQ] = ACTIONS(29),
    [anon_sym_BANG] = ACTIONS(29),
    [anon_sym_LT_EQ] = ACTIONS(29),
    [anon_sym_LT_BANG] = ACTIONS(29),
  },
  [7] = {
    [sym_class_range] = STATE(24),
    [aux_sym_character_class_repeat1] = STATE(24),
    [anon_sym_CARET] = ACTIONS(31),
    [anon_sym_RBRACK] = ACTIONS(33),
    [sym_class_atom] = ACTIONS(35),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(37),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(39),
    [anon_sym_RPAREN] = ACTIONS(39),
  },
  [10] = {
    [aux_sym_disjunction_repeat1] = STATE(25),
    [ts_builtin_sym_end] = ACTIONS(39),
    [anon_sym_PIPE] = ACTIONS(5),
  },
  [11] = {
    [sym_quantifier] = STATE(28),
    [sym_quantifier_prefix] = STATE(29),
    [sym_count_quantifier] = STATE(26),
    [ts_builtin_sym_end] = ACTIONS(41),
    [anon_sym_PIPE] = ACTIONS(41),
    [anon_sym_DOT] = ACTIONS(41),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(41),
    [anon_sym_RPAREN] = ACTIONS(41),
    [anon_sym_CARET] = ACTIONS(41),
    [anon_sym_DOLLAR] = ACTIONS(41),
    [anon_sym_BSLASHb] = ACTIONS(41),
    [anon_sym_BSLASHB] = ACTIONS(41),
    [anon_sym_LPAREN_QMARK] = ACTIONS(43),
    [anon_sym_LBRACK] = ACTIONS(41),
    [sym_pattern_character] = ACTIONS(41),
    [anon_sym_QMARK] = ACTIONS(45),
    [anon_sym_STAR] = ACTIONS(45),
    [anon_sym_PLUS] = ACTIONS(45),
    [anon_sym_LBRACE] = ACTIONS(47),
  },
  [12] = {
    [aux_sym_disjunction_repeat1] = STATE(30),
    [ts_builtin_sym_end] = ACTIONS(49),
    [anon_sym_PIPE] = ACTIONS(5),
  },
  [13] = {
    [sym_atom] = STATE(11),
    [sym_non_capturing_group] = STATE(3),
    [sym_assertion] = STATE(3),
    [sym_character_class] = STATE(3),
    [aux_sym_term_repeat1] = STATE(31),
    [ts_builtin_sym_end] = ACTIONS(51),
    [anon_sym_PIPE] = ACTIONS(51),
    [anon_sym_DOT] = ACTIONS(7),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(9),
    [anon_sym_CARET] = ACTIONS(11),
    [anon_sym_DOLLAR] = ACTIONS(11),
    [anon_sym_BSLASHb] = ACTIONS(11),
    [anon_sym_BSLASHB] = ACTIONS(11),
    [anon_sym_LPAREN_QMARK] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [sym_pattern_character] = ACTIONS(7),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(53),
    [anon_sym_PIPE] = ACTIONS(53),
    [anon_sym_RPAREN] = ACTIONS(53),
  },
  [15] = {
    [sym_term] = STATE(14),
    [sym_atom] = STATE(11),
    [sym_non_capturing_group] = STATE(3),
    [sym_assertion] = STATE(3),
    [sym_character_class] = STATE(3),
    [aux_sym_term_repeat1] = STATE(19),
    [anon_sym_PIPE] = ACTIONS(17),
    [anon_sym_DOT] = ACTIONS(7),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(9),
    [anon_sym_RPAREN] = ACTIONS(17),
    [anon_sym_CARET] = ACTIONS(11),
    [anon_sym_DOLLAR] = ACTIONS(11),
    [anon_sym_BSLASHb] = ACTIONS(11),
    [anon_sym_BSLASHB] = ACTIONS(11),
    [anon_sym_LPAREN_QMARK] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [sym_pattern_character] = ACTIONS(7),
  },
  [16] = {
    [anon_sym_RPAREN] = ACTIONS(55),
  },
  [17] = {
    [aux_sym_disjunction_repeat1] = STATE(33),
    [anon_sym_PIPE] = ACTIONS(23),
    [anon_sym_RPAREN] = ACTIONS(39),
  },
  [18] = {
    [aux_sym_disjunction_repeat1] = STATE(34),
    [anon_sym_PIPE] = ACTIONS(23),
    [anon_sym_RPAREN] = ACTIONS(49),
  },
  [19] = {
    [sym_atom] = STATE(11),
    [sym_non_capturing_group] = STATE(3),
    [sym_assertion] = STATE(3),
    [sym_character_class] = STATE(3),
    [aux_sym_term_repeat1] = STATE(35),
    [anon_sym_PIPE] = ACTIONS(51),
    [anon_sym_DOT] = ACTIONS(7),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(9),
    [anon_sym_RPAREN] = ACTIONS(51),
    [anon_sym_CARET] = ACTIONS(11),
    [anon_sym_DOLLAR] = ACTIONS(11),
    [anon_sym_BSLASHb] = ACTIONS(11),
    [anon_sym_BSLASHB] = ACTIONS(11),
    [anon_sym_LPAREN_QMARK] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [sym_pattern_character] = ACTIONS(7),
  },
  [20] = {
    [sym_pattern] = STATE(36),
    [sym_disjunction] = STATE(9),
    [sym_term] = STATE(17),
    [sym_atom] = STATE(11),
    [sym_non_capturing_group] = STATE(3),
    [sym_assertion] = STATE(3),
    [sym_character_class] = STATE(3),
    [aux_sym_disjunction_repeat1] = STATE(18),
    [aux_sym_term_repeat1] = STATE(19),
    [anon_sym_PIPE] = ACTIONS(23),
    [anon_sym_DOT] = ACTIONS(7),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(9),
    [anon_sym_CARET] = ACTIONS(11),
    [anon_sym_DOLLAR] = ACTIONS(11),
    [anon_sym_BSLASHb] = ACTIONS(11),
    [anon_sym_BSLASHB] = ACTIONS(11),
    [anon_sym_LPAREN_QMARK] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [sym_pattern_character] = ACTIONS(7),
  },
  [21] = {
    [sym_class_range] = STATE(38),
    [aux_sym_character_class_repeat1] = STATE(38),
    [anon_sym_RBRACK] = ACTIONS(57),
    [sym_class_atom] = ACTIONS(59),
  },
  [22] = {
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
    [sym_pattern_character] = ACTIONS(61),
    [anon_sym_QMARK] = ACTIONS(61),
    [anon_sym_STAR] = ACTIONS(61),
    [anon_sym_PLUS] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(61),
  },
  [23] = {
    [anon_sym_RBRACK] = ACTIONS(65),
    [anon_sym_DASH] = ACTIONS(67),
    [sym_class_atom] = ACTIONS(65),
  },
  [24] = {
    [sym_class_range] = STATE(40),
    [aux_sym_character_class_repeat1] = STATE(40),
    [anon_sym_RBRACK] = ACTIONS(57),
    [sym_class_atom] = ACTIONS(59),
  },
  [25] = {
    [aux_sym_disjunction_repeat1] = STATE(30),
    [ts_builtin_sym_end] = ACTIONS(69),
    [anon_sym_PIPE] = ACTIONS(5),
  },
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(71),
    [anon_sym_PIPE] = ACTIONS(71),
    [anon_sym_DOT] = ACTIONS(71),
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
  },
  [27] = {
    [sym_decimal_digits] = ACTIONS(75),
  },
  [28] = {
    [ts_builtin_sym_end] = ACTIONS(77),
    [anon_sym_PIPE] = ACTIONS(77),
    [anon_sym_DOT] = ACTIONS(77),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(77),
    [anon_sym_RPAREN] = ACTIONS(77),
    [anon_sym_CARET] = ACTIONS(77),
    [anon_sym_DOLLAR] = ACTIONS(77),
    [anon_sym_BSLASHb] = ACTIONS(77),
    [anon_sym_BSLASHB] = ACTIONS(77),
    [anon_sym_LPAREN_QMARK] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(77),
    [sym_pattern_character] = ACTIONS(77),
  },
  [29] = {
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
    [sym_pattern_character] = ACTIONS(81),
    [anon_sym_QMARK] = ACTIONS(85),
  },
  [30] = {
    [aux_sym_disjunction_repeat1] = STATE(30),
    [ts_builtin_sym_end] = ACTIONS(53),
    [anon_sym_PIPE] = ACTIONS(87),
  },
  [31] = {
    [sym_atom] = STATE(11),
    [sym_non_capturing_group] = STATE(3),
    [sym_assertion] = STATE(3),
    [sym_character_class] = STATE(3),
    [aux_sym_term_repeat1] = STATE(31),
    [ts_builtin_sym_end] = ACTIONS(77),
    [anon_sym_PIPE] = ACTIONS(77),
    [anon_sym_DOT] = ACTIONS(90),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(93),
    [anon_sym_CARET] = ACTIONS(96),
    [anon_sym_DOLLAR] = ACTIONS(96),
    [anon_sym_BSLASHb] = ACTIONS(96),
    [anon_sym_BSLASHB] = ACTIONS(96),
    [anon_sym_LPAREN_QMARK] = ACTIONS(99),
    [anon_sym_LBRACK] = ACTIONS(102),
    [sym_pattern_character] = ACTIONS(90),
  },
  [32] = {
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
    [sym_pattern_character] = ACTIONS(105),
    [anon_sym_QMARK] = ACTIONS(105),
    [anon_sym_STAR] = ACTIONS(105),
    [anon_sym_PLUS] = ACTIONS(105),
    [anon_sym_LBRACE] = ACTIONS(105),
  },
  [33] = {
    [aux_sym_disjunction_repeat1] = STATE(34),
    [anon_sym_PIPE] = ACTIONS(23),
    [anon_sym_RPAREN] = ACTIONS(69),
  },
  [34] = {
    [aux_sym_disjunction_repeat1] = STATE(34),
    [anon_sym_PIPE] = ACTIONS(109),
    [anon_sym_RPAREN] = ACTIONS(53),
  },
  [35] = {
    [sym_atom] = STATE(11),
    [sym_non_capturing_group] = STATE(3),
    [sym_assertion] = STATE(3),
    [sym_character_class] = STATE(3),
    [aux_sym_term_repeat1] = STATE(35),
    [anon_sym_PIPE] = ACTIONS(77),
    [anon_sym_DOT] = ACTIONS(90),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(93),
    [anon_sym_RPAREN] = ACTIONS(77),
    [anon_sym_CARET] = ACTIONS(96),
    [anon_sym_DOLLAR] = ACTIONS(96),
    [anon_sym_BSLASHb] = ACTIONS(96),
    [anon_sym_BSLASHB] = ACTIONS(96),
    [anon_sym_LPAREN_QMARK] = ACTIONS(99),
    [anon_sym_LBRACK] = ACTIONS(102),
    [sym_pattern_character] = ACTIONS(90),
  },
  [36] = {
    [anon_sym_RPAREN] = ACTIONS(112),
  },
  [37] = {
    [ts_builtin_sym_end] = ACTIONS(114),
    [anon_sym_PIPE] = ACTIONS(114),
    [anon_sym_DOT] = ACTIONS(114),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(114),
    [anon_sym_RPAREN] = ACTIONS(114),
    [anon_sym_CARET] = ACTIONS(114),
    [anon_sym_DOLLAR] = ACTIONS(114),
    [anon_sym_BSLASHb] = ACTIONS(114),
    [anon_sym_BSLASHB] = ACTIONS(114),
    [anon_sym_LPAREN_QMARK] = ACTIONS(116),
    [anon_sym_LBRACK] = ACTIONS(114),
    [sym_pattern_character] = ACTIONS(114),
    [anon_sym_QMARK] = ACTIONS(114),
    [anon_sym_STAR] = ACTIONS(114),
    [anon_sym_PLUS] = ACTIONS(114),
    [anon_sym_LBRACE] = ACTIONS(114),
  },
  [38] = {
    [sym_class_range] = STATE(40),
    [aux_sym_character_class_repeat1] = STATE(40),
    [anon_sym_RBRACK] = ACTIONS(118),
    [sym_class_atom] = ACTIONS(59),
  },
  [39] = {
    [sym_class_atom] = ACTIONS(120),
  },
  [40] = {
    [sym_class_range] = STATE(40),
    [aux_sym_character_class_repeat1] = STATE(40),
    [anon_sym_RBRACK] = ACTIONS(122),
    [sym_class_atom] = ACTIONS(124),
  },
  [41] = {
    [anon_sym_COMMA] = ACTIONS(127),
    [anon_sym_RBRACE] = ACTIONS(129),
  },
  [42] = {
    [ts_builtin_sym_end] = ACTIONS(131),
    [anon_sym_PIPE] = ACTIONS(131),
    [anon_sym_DOT] = ACTIONS(131),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(131),
    [anon_sym_RPAREN] = ACTIONS(131),
    [anon_sym_CARET] = ACTIONS(131),
    [anon_sym_DOLLAR] = ACTIONS(131),
    [anon_sym_BSLASHb] = ACTIONS(131),
    [anon_sym_BSLASHB] = ACTIONS(131),
    [anon_sym_LPAREN_QMARK] = ACTIONS(133),
    [anon_sym_LBRACK] = ACTIONS(131),
    [sym_pattern_character] = ACTIONS(131),
  },
  [43] = {
    [ts_builtin_sym_end] = ACTIONS(135),
    [anon_sym_PIPE] = ACTIONS(135),
    [anon_sym_DOT] = ACTIONS(135),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(135),
    [anon_sym_RPAREN] = ACTIONS(135),
    [anon_sym_CARET] = ACTIONS(135),
    [anon_sym_DOLLAR] = ACTIONS(135),
    [anon_sym_BSLASHb] = ACTIONS(135),
    [anon_sym_BSLASHB] = ACTIONS(135),
    [anon_sym_LPAREN_QMARK] = ACTIONS(137),
    [anon_sym_LBRACK] = ACTIONS(135),
    [sym_pattern_character] = ACTIONS(135),
    [anon_sym_QMARK] = ACTIONS(135),
    [anon_sym_STAR] = ACTIONS(135),
    [anon_sym_PLUS] = ACTIONS(135),
    [anon_sym_LBRACE] = ACTIONS(135),
  },
  [44] = {
    [ts_builtin_sym_end] = ACTIONS(139),
    [anon_sym_PIPE] = ACTIONS(139),
    [anon_sym_DOT] = ACTIONS(139),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(139),
    [anon_sym_RPAREN] = ACTIONS(139),
    [anon_sym_CARET] = ACTIONS(139),
    [anon_sym_DOLLAR] = ACTIONS(139),
    [anon_sym_BSLASHb] = ACTIONS(139),
    [anon_sym_BSLASHB] = ACTIONS(139),
    [anon_sym_LPAREN_QMARK] = ACTIONS(141),
    [anon_sym_LBRACK] = ACTIONS(139),
    [sym_pattern_character] = ACTIONS(139),
    [anon_sym_QMARK] = ACTIONS(139),
    [anon_sym_STAR] = ACTIONS(139),
    [anon_sym_PLUS] = ACTIONS(139),
    [anon_sym_LBRACE] = ACTIONS(139),
  },
  [45] = {
    [anon_sym_RBRACK] = ACTIONS(143),
    [sym_class_atom] = ACTIONS(143),
  },
  [46] = {
    [sym_decimal_digits] = ACTIONS(145),
  },
  [47] = {
    [ts_builtin_sym_end] = ACTIONS(147),
    [anon_sym_PIPE] = ACTIONS(147),
    [anon_sym_DOT] = ACTIONS(147),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(147),
    [anon_sym_RPAREN] = ACTIONS(147),
    [anon_sym_CARET] = ACTIONS(147),
    [anon_sym_DOLLAR] = ACTIONS(147),
    [anon_sym_BSLASHb] = ACTIONS(147),
    [anon_sym_BSLASHB] = ACTIONS(147),
    [anon_sym_LPAREN_QMARK] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(147),
    [sym_pattern_character] = ACTIONS(147),
    [anon_sym_QMARK] = ACTIONS(147),
  },
  [48] = {
    [anon_sym_RBRACE] = ACTIONS(151),
  },
  [49] = {
    [ts_builtin_sym_end] = ACTIONS(153),
    [anon_sym_PIPE] = ACTIONS(153),
    [anon_sym_DOT] = ACTIONS(153),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(153),
    [anon_sym_RPAREN] = ACTIONS(153),
    [anon_sym_CARET] = ACTIONS(153),
    [anon_sym_DOLLAR] = ACTIONS(153),
    [anon_sym_BSLASHb] = ACTIONS(153),
    [anon_sym_BSLASHB] = ACTIONS(153),
    [anon_sym_LPAREN_QMARK] = ACTIONS(155),
    [anon_sym_LBRACK] = ACTIONS(153),
    [sym_pattern_character] = ACTIONS(153),
    [anon_sym_QMARK] = ACTIONS(153),
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
  [17] = {.count = 1, .reusable = true}, REDUCE(aux_sym_disjunction_repeat1, 1),
  [19] = {.count = 1, .reusable = true}, REDUCE(sym_atom, 1),
  [21] = {.count = 1, .reusable = false}, REDUCE(sym_atom, 1),
  [23] = {.count = 1, .reusable = true}, SHIFT(15),
  [25] = {.count = 1, .reusable = true}, REDUCE(sym_assertion, 1),
  [27] = {.count = 1, .reusable = false}, REDUCE(sym_assertion, 1),
  [29] = {.count = 1, .reusable = true}, SHIFT(20),
  [31] = {.count = 1, .reusable = true}, SHIFT(21),
  [33] = {.count = 1, .reusable = true}, SHIFT(22),
  [35] = {.count = 1, .reusable = false}, SHIFT(23),
  [37] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [39] = {.count = 1, .reusable = true}, REDUCE(sym_pattern, 1),
  [41] = {.count = 1, .reusable = true}, REDUCE(aux_sym_term_repeat1, 1),
  [43] = {.count = 1, .reusable = false}, REDUCE(aux_sym_term_repeat1, 1),
  [45] = {.count = 1, .reusable = true}, SHIFT(26),
  [47] = {.count = 1, .reusable = true}, SHIFT(27),
  [49] = {.count = 1, .reusable = true}, REDUCE(sym_disjunction, 1),
  [51] = {.count = 1, .reusable = true}, REDUCE(sym_term, 1),
  [53] = {.count = 1, .reusable = true}, REDUCE(aux_sym_disjunction_repeat1, 2),
  [55] = {.count = 1, .reusable = true}, SHIFT(32),
  [57] = {.count = 1, .reusable = true}, SHIFT(37),
  [59] = {.count = 1, .reusable = true}, SHIFT(23),
  [61] = {.count = 1, .reusable = true}, REDUCE(sym_character_class, 2),
  [63] = {.count = 1, .reusable = false}, REDUCE(sym_character_class, 2),
  [65] = {.count = 1, .reusable = true}, REDUCE(sym_class_range, 1),
  [67] = {.count = 1, .reusable = true}, SHIFT(39),
  [69] = {.count = 1, .reusable = true}, REDUCE(sym_disjunction, 2),
  [71] = {.count = 1, .reusable = true}, REDUCE(sym_quantifier_prefix, 1),
  [73] = {.count = 1, .reusable = false}, REDUCE(sym_quantifier_prefix, 1),
  [75] = {.count = 1, .reusable = true}, SHIFT(41),
  [77] = {.count = 1, .reusable = true}, REDUCE(aux_sym_term_repeat1, 2),
  [79] = {.count = 1, .reusable = false}, REDUCE(aux_sym_term_repeat1, 2),
  [81] = {.count = 1, .reusable = true}, REDUCE(sym_quantifier, 1),
  [83] = {.count = 1, .reusable = false}, REDUCE(sym_quantifier, 1),
  [85] = {.count = 1, .reusable = true}, SHIFT(42),
  [87] = {.count = 2, .reusable = true}, REDUCE(aux_sym_disjunction_repeat1, 2), SHIFT_REPEAT(2),
  [90] = {.count = 2, .reusable = true}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(3),
  [93] = {.count = 2, .reusable = true}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(4),
  [96] = {.count = 2, .reusable = true}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(5),
  [99] = {.count = 2, .reusable = false}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(6),
  [102] = {.count = 2, .reusable = true}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(7),
  [105] = {.count = 1, .reusable = true}, REDUCE(sym_non_capturing_group, 3),
  [107] = {.count = 1, .reusable = false}, REDUCE(sym_non_capturing_group, 3),
  [109] = {.count = 2, .reusable = true}, REDUCE(aux_sym_disjunction_repeat1, 2), SHIFT_REPEAT(15),
  [112] = {.count = 1, .reusable = true}, SHIFT(43),
  [114] = {.count = 1, .reusable = true}, REDUCE(sym_character_class, 3),
  [116] = {.count = 1, .reusable = false}, REDUCE(sym_character_class, 3),
  [118] = {.count = 1, .reusable = true}, SHIFT(44),
  [120] = {.count = 1, .reusable = true}, SHIFT(45),
  [122] = {.count = 1, .reusable = true}, REDUCE(aux_sym_character_class_repeat1, 2),
  [124] = {.count = 2, .reusable = true}, REDUCE(aux_sym_character_class_repeat1, 2), SHIFT_REPEAT(23),
  [127] = {.count = 1, .reusable = true}, SHIFT(46),
  [129] = {.count = 1, .reusable = true}, SHIFT(47),
  [131] = {.count = 1, .reusable = true}, REDUCE(sym_quantifier, 2, .alias_sequence_id = 1),
  [133] = {.count = 1, .reusable = false}, REDUCE(sym_quantifier, 2, .alias_sequence_id = 1),
  [135] = {.count = 1, .reusable = true}, REDUCE(sym_assertion, 4),
  [137] = {.count = 1, .reusable = false}, REDUCE(sym_assertion, 4),
  [139] = {.count = 1, .reusable = true}, REDUCE(sym_character_class, 4),
  [141] = {.count = 1, .reusable = false}, REDUCE(sym_character_class, 4),
  [143] = {.count = 1, .reusable = true}, REDUCE(sym_class_range, 3),
  [145] = {.count = 1, .reusable = true}, SHIFT(48),
  [147] = {.count = 1, .reusable = true}, REDUCE(sym_count_quantifier, 3),
  [149] = {.count = 1, .reusable = false}, REDUCE(sym_count_quantifier, 3),
  [151] = {.count = 1, .reusable = true}, SHIFT(49),
  [153] = {.count = 1, .reusable = true}, REDUCE(sym_count_quantifier, 5),
  [155] = {.count = 1, .reusable = false}, REDUCE(sym_count_quantifier, 5),
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
