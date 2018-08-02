#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 56
#define SYMBOL_COUNT 47
#define ALIAS_COUNT 1
#define TOKEN_COUNT 31
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 2

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
  sym_character_class_escape = 26,
  anon_sym_c = 27,
  sym_control_escape = 28,
  sym_control_letter = 29,
  sym_decimal_digits = 30,
  sym_pattern = 31,
  sym_disjunction = 32,
  sym_term = 33,
  sym_atom = 34,
  sym_non_capturing_group = 35,
  sym_assertion = 36,
  sym_character_class = 37,
  sym_class_range = 38,
  sym_quantifier = 39,
  sym_quantifier_prefix = 40,
  sym_count_quantifier = 41,
  sym_atom_escape = 42,
  sym_character_escape = 43,
  aux_sym_disjunction_repeat1 = 44,
  aux_sym_term_repeat1 = 45,
  aux_sym_character_class_repeat1 = 46,
  alias_sym_non_greedy = 47,
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
  [sym_atom_escape] = "atom_escape",
  [sym_character_escape] = "character_escape",
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
  [sym_atom_escape] = {
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
      if (lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'v')
        ADVANCE(30);
      if (lookahead == 'D' ||
          lookahead == 'S' ||
          lookahead == 'W' ||
          lookahead == 'd' ||
          lookahead == 's' ||
          lookahead == 'w')
        ADVANCE(31);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_control_escape);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_character_class_escape);
      END_STATE();
    case 32:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(11);
      END_STATE();
    case 33:
      if (lookahead == '!')
        ADVANCE(34);
      if (lookahead == '=')
        ADVANCE(35);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_LT_BANG);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 36:
      if (lookahead == ']')
        ADVANCE(17);
      if (lookahead == '^')
        ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '-' &&
          (lookahead < '\\' || lookahead > '^'))
        ADVANCE(4);
      END_STATE();
    case 37:
      if (lookahead == 0)
        ADVANCE(1);
      END_STATE();
    case 38:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == ')')
        ADVANCE(5);
      END_STATE();
    case 39:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '|')
        ADVANCE(21);
      END_STATE();
    case 40:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == ')')
        ADVANCE(5);
      if (lookahead == '|')
        ADVANCE(21);
      END_STATE();
    case 41:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(42);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_control_letter);
      END_STATE();
    case 43:
      if (lookahead == '-')
        ADVANCE(9);
      if (lookahead == ']')
        ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '\\' &&
          lookahead != ']')
        ADVANCE(4);
      END_STATE();
    case 44:
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
    case 45:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(46);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_decimal_digits);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(46);
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
    case 48:
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
  [4] = {.lex_state = 29},
  [5] = {.lex_state = 23},
  [6] = {.lex_state = 28},
  [7] = {.lex_state = 32},
  [8] = {.lex_state = 36},
  [9] = {.lex_state = 37},
  [10] = {.lex_state = 38},
  [11] = {.lex_state = 39},
  [12] = {.lex_state = 28},
  [13] = {.lex_state = 39},
  [14] = {.lex_state = 23},
  [15] = {.lex_state = 40},
  [16] = {.lex_state = 28},
  [17] = {.lex_state = 41},
  [18] = {.lex_state = 28},
  [19] = {.lex_state = 28},
  [20] = {.lex_state = 28},
  [21] = {.lex_state = 28},
  [22] = {.lex_state = 28},
  [23] = {.lex_state = 28},
  [24] = {.lex_state = 28},
  [25] = {.lex_state = 23},
  [26] = {.lex_state = 43},
  [27] = {.lex_state = 28},
  [28] = {.lex_state = 43},
  [29] = {.lex_state = 43},
  [30] = {.lex_state = 39},
  [31] = {.lex_state = 44},
  [32] = {.lex_state = 45},
  [33] = {.lex_state = 47},
  [34] = {.lex_state = 44},
  [35] = {.lex_state = 39},
  [36] = {.lex_state = 23},
  [37] = {.lex_state = 28},
  [38] = {.lex_state = 28},
  [39] = {.lex_state = 28},
  [40] = {.lex_state = 28},
  [41] = {.lex_state = 28},
  [42] = {.lex_state = 28},
  [43] = {.lex_state = 28},
  [44] = {.lex_state = 43},
  [45] = {.lex_state = 43},
  [46] = {.lex_state = 43},
  [47] = {.lex_state = 48},
  [48] = {.lex_state = 47},
  [49] = {.lex_state = 28},
  [50] = {.lex_state = 28},
  [51] = {.lex_state = 43},
  [52] = {.lex_state = 45},
  [53] = {.lex_state = 44},
  [54] = {.lex_state = 48},
  [55] = {.lex_state = 44},
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
    [sym_character_class_escape] = ACTIONS(3),
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
    [sym_atom_escape] = STATE(19),
    [sym_character_escape] = STATE(16),
    [sym_character_class_escape] = ACTIONS(25),
    [anon_sym_c] = ACTIONS(27),
    [sym_control_escape] = ACTIONS(29),
  },
  [5] = {
    [sym_pattern] = STATE(21),
    [sym_disjunction] = STATE(10),
    [sym_term] = STATE(22),
    [sym_atom] = STATE(12),
    [sym_non_capturing_group] = STATE(3),
    [sym_assertion] = STATE(3),
    [sym_character_class] = STATE(3),
    [aux_sym_disjunction_repeat1] = STATE(23),
    [aux_sym_term_repeat1] = STATE(24),
    [anon_sym_PIPE] = ACTIONS(31),
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
    [ts_builtin_sym_end] = ACTIONS(33),
    [anon_sym_PIPE] = ACTIONS(33),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_BSLASH] = ACTIONS(35),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(33),
    [anon_sym_RPAREN] = ACTIONS(33),
    [anon_sym_CARET] = ACTIONS(33),
    [anon_sym_DOLLAR] = ACTIONS(33),
    [anon_sym_BSLASHb] = ACTIONS(33),
    [anon_sym_BSLASHB] = ACTIONS(33),
    [anon_sym_LPAREN_QMARK] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(33),
    [sym_pattern_character] = ACTIONS(33),
    [anon_sym_QMARK] = ACTIONS(33),
    [anon_sym_STAR] = ACTIONS(33),
    [anon_sym_PLUS] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(33),
  },
  [7] = {
    [anon_sym_EQ] = ACTIONS(37),
    [anon_sym_BANG] = ACTIONS(37),
    [anon_sym_LT_EQ] = ACTIONS(37),
    [anon_sym_LT_BANG] = ACTIONS(37),
  },
  [8] = {
    [sym_class_range] = STATE(29),
    [aux_sym_character_class_repeat1] = STATE(29),
    [anon_sym_CARET] = ACTIONS(39),
    [anon_sym_RBRACK] = ACTIONS(41),
    [sym_class_atom] = ACTIONS(43),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(45),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(47),
    [anon_sym_RPAREN] = ACTIONS(47),
  },
  [11] = {
    [aux_sym_disjunction_repeat1] = STATE(30),
    [ts_builtin_sym_end] = ACTIONS(47),
    [anon_sym_PIPE] = ACTIONS(5),
  },
  [12] = {
    [sym_quantifier] = STATE(33),
    [sym_quantifier_prefix] = STATE(34),
    [sym_count_quantifier] = STATE(31),
    [ts_builtin_sym_end] = ACTIONS(49),
    [anon_sym_PIPE] = ACTIONS(49),
    [anon_sym_DOT] = ACTIONS(49),
    [anon_sym_BSLASH] = ACTIONS(51),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(49),
    [anon_sym_RPAREN] = ACTIONS(49),
    [anon_sym_CARET] = ACTIONS(49),
    [anon_sym_DOLLAR] = ACTIONS(49),
    [anon_sym_BSLASHb] = ACTIONS(49),
    [anon_sym_BSLASHB] = ACTIONS(49),
    [anon_sym_LPAREN_QMARK] = ACTIONS(51),
    [anon_sym_LBRACK] = ACTIONS(49),
    [sym_pattern_character] = ACTIONS(49),
    [anon_sym_QMARK] = ACTIONS(53),
    [anon_sym_STAR] = ACTIONS(53),
    [anon_sym_PLUS] = ACTIONS(53),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [13] = {
    [aux_sym_disjunction_repeat1] = STATE(35),
    [ts_builtin_sym_end] = ACTIONS(57),
    [anon_sym_PIPE] = ACTIONS(5),
  },
  [14] = {
    [sym_atom] = STATE(12),
    [sym_non_capturing_group] = STATE(3),
    [sym_assertion] = STATE(3),
    [sym_character_class] = STATE(3),
    [aux_sym_term_repeat1] = STATE(36),
    [ts_builtin_sym_end] = ACTIONS(59),
    [anon_sym_PIPE] = ACTIONS(59),
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
    [ts_builtin_sym_end] = ACTIONS(61),
    [anon_sym_PIPE] = ACTIONS(61),
    [anon_sym_RPAREN] = ACTIONS(61),
  },
  [16] = {
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
    [anon_sym_QMARK] = ACTIONS(63),
    [anon_sym_STAR] = ACTIONS(63),
    [anon_sym_PLUS] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(63),
  },
  [17] = {
    [sym_control_letter] = ACTIONS(67),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(69),
    [anon_sym_PIPE] = ACTIONS(69),
    [anon_sym_DOT] = ACTIONS(69),
    [anon_sym_BSLASH] = ACTIONS(71),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(69),
    [anon_sym_RPAREN] = ACTIONS(69),
    [anon_sym_CARET] = ACTIONS(69),
    [anon_sym_DOLLAR] = ACTIONS(69),
    [anon_sym_BSLASHb] = ACTIONS(69),
    [anon_sym_BSLASHB] = ACTIONS(69),
    [anon_sym_LPAREN_QMARK] = ACTIONS(71),
    [anon_sym_LBRACK] = ACTIONS(69),
    [sym_pattern_character] = ACTIONS(69),
    [anon_sym_QMARK] = ACTIONS(69),
    [anon_sym_STAR] = ACTIONS(69),
    [anon_sym_PLUS] = ACTIONS(69),
    [anon_sym_LBRACE] = ACTIONS(69),
  },
  [19] = {
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
  },
  [20] = {
    [sym_term] = STATE(15),
    [sym_atom] = STATE(12),
    [sym_non_capturing_group] = STATE(3),
    [sym_assertion] = STATE(3),
    [sym_character_class] = STATE(3),
    [aux_sym_term_repeat1] = STATE(24),
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
  [21] = {
    [anon_sym_RPAREN] = ACTIONS(77),
  },
  [22] = {
    [aux_sym_disjunction_repeat1] = STATE(39),
    [anon_sym_PIPE] = ACTIONS(31),
    [anon_sym_RPAREN] = ACTIONS(47),
  },
  [23] = {
    [aux_sym_disjunction_repeat1] = STATE(40),
    [anon_sym_PIPE] = ACTIONS(31),
    [anon_sym_RPAREN] = ACTIONS(57),
  },
  [24] = {
    [sym_atom] = STATE(12),
    [sym_non_capturing_group] = STATE(3),
    [sym_assertion] = STATE(3),
    [sym_character_class] = STATE(3),
    [aux_sym_term_repeat1] = STATE(41),
    [anon_sym_PIPE] = ACTIONS(59),
    [anon_sym_DOT] = ACTIONS(7),
    [anon_sym_BSLASH] = ACTIONS(9),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(11),
    [anon_sym_RPAREN] = ACTIONS(59),
    [anon_sym_CARET] = ACTIONS(13),
    [anon_sym_DOLLAR] = ACTIONS(13),
    [anon_sym_BSLASHb] = ACTIONS(13),
    [anon_sym_BSLASHB] = ACTIONS(13),
    [anon_sym_LPAREN_QMARK] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_pattern_character] = ACTIONS(7),
  },
  [25] = {
    [sym_pattern] = STATE(42),
    [sym_disjunction] = STATE(10),
    [sym_term] = STATE(22),
    [sym_atom] = STATE(12),
    [sym_non_capturing_group] = STATE(3),
    [sym_assertion] = STATE(3),
    [sym_character_class] = STATE(3),
    [aux_sym_disjunction_repeat1] = STATE(23),
    [aux_sym_term_repeat1] = STATE(24),
    [anon_sym_PIPE] = ACTIONS(31),
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
  [26] = {
    [sym_class_range] = STATE(44),
    [aux_sym_character_class_repeat1] = STATE(44),
    [anon_sym_RBRACK] = ACTIONS(79),
    [sym_class_atom] = ACTIONS(81),
  },
  [27] = {
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
  [28] = {
    [anon_sym_RBRACK] = ACTIONS(87),
    [anon_sym_DASH] = ACTIONS(89),
    [sym_class_atom] = ACTIONS(87),
  },
  [29] = {
    [sym_class_range] = STATE(46),
    [aux_sym_character_class_repeat1] = STATE(46),
    [anon_sym_RBRACK] = ACTIONS(79),
    [sym_class_atom] = ACTIONS(81),
  },
  [30] = {
    [aux_sym_disjunction_repeat1] = STATE(35),
    [ts_builtin_sym_end] = ACTIONS(91),
    [anon_sym_PIPE] = ACTIONS(5),
  },
  [31] = {
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
  },
  [32] = {
    [sym_decimal_digits] = ACTIONS(97),
  },
  [33] = {
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
  },
  [34] = {
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
    [anon_sym_QMARK] = ACTIONS(107),
  },
  [35] = {
    [aux_sym_disjunction_repeat1] = STATE(35),
    [ts_builtin_sym_end] = ACTIONS(61),
    [anon_sym_PIPE] = ACTIONS(109),
  },
  [36] = {
    [sym_atom] = STATE(12),
    [sym_non_capturing_group] = STATE(3),
    [sym_assertion] = STATE(3),
    [sym_character_class] = STATE(3),
    [aux_sym_term_repeat1] = STATE(36),
    [ts_builtin_sym_end] = ACTIONS(99),
    [anon_sym_PIPE] = ACTIONS(99),
    [anon_sym_DOT] = ACTIONS(112),
    [anon_sym_BSLASH] = ACTIONS(115),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(118),
    [anon_sym_CARET] = ACTIONS(121),
    [anon_sym_DOLLAR] = ACTIONS(121),
    [anon_sym_BSLASHb] = ACTIONS(121),
    [anon_sym_BSLASHB] = ACTIONS(121),
    [anon_sym_LPAREN_QMARK] = ACTIONS(124),
    [anon_sym_LBRACK] = ACTIONS(127),
    [sym_pattern_character] = ACTIONS(112),
  },
  [37] = {
    [ts_builtin_sym_end] = ACTIONS(130),
    [anon_sym_PIPE] = ACTIONS(130),
    [anon_sym_DOT] = ACTIONS(130),
    [anon_sym_BSLASH] = ACTIONS(132),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(130),
    [anon_sym_RPAREN] = ACTIONS(130),
    [anon_sym_CARET] = ACTIONS(130),
    [anon_sym_DOLLAR] = ACTIONS(130),
    [anon_sym_BSLASHb] = ACTIONS(130),
    [anon_sym_BSLASHB] = ACTIONS(130),
    [anon_sym_LPAREN_QMARK] = ACTIONS(132),
    [anon_sym_LBRACK] = ACTIONS(130),
    [sym_pattern_character] = ACTIONS(130),
    [anon_sym_QMARK] = ACTIONS(130),
    [anon_sym_STAR] = ACTIONS(130),
    [anon_sym_PLUS] = ACTIONS(130),
    [anon_sym_LBRACE] = ACTIONS(130),
  },
  [38] = {
    [ts_builtin_sym_end] = ACTIONS(134),
    [anon_sym_PIPE] = ACTIONS(134),
    [anon_sym_DOT] = ACTIONS(134),
    [anon_sym_BSLASH] = ACTIONS(136),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(134),
    [anon_sym_RPAREN] = ACTIONS(134),
    [anon_sym_CARET] = ACTIONS(134),
    [anon_sym_DOLLAR] = ACTIONS(134),
    [anon_sym_BSLASHb] = ACTIONS(134),
    [anon_sym_BSLASHB] = ACTIONS(134),
    [anon_sym_LPAREN_QMARK] = ACTIONS(136),
    [anon_sym_LBRACK] = ACTIONS(134),
    [sym_pattern_character] = ACTIONS(134),
    [anon_sym_QMARK] = ACTIONS(134),
    [anon_sym_STAR] = ACTIONS(134),
    [anon_sym_PLUS] = ACTIONS(134),
    [anon_sym_LBRACE] = ACTIONS(134),
  },
  [39] = {
    [aux_sym_disjunction_repeat1] = STATE(40),
    [anon_sym_PIPE] = ACTIONS(31),
    [anon_sym_RPAREN] = ACTIONS(91),
  },
  [40] = {
    [aux_sym_disjunction_repeat1] = STATE(40),
    [anon_sym_PIPE] = ACTIONS(138),
    [anon_sym_RPAREN] = ACTIONS(61),
  },
  [41] = {
    [sym_atom] = STATE(12),
    [sym_non_capturing_group] = STATE(3),
    [sym_assertion] = STATE(3),
    [sym_character_class] = STATE(3),
    [aux_sym_term_repeat1] = STATE(41),
    [anon_sym_PIPE] = ACTIONS(99),
    [anon_sym_DOT] = ACTIONS(112),
    [anon_sym_BSLASH] = ACTIONS(115),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(118),
    [anon_sym_RPAREN] = ACTIONS(99),
    [anon_sym_CARET] = ACTIONS(121),
    [anon_sym_DOLLAR] = ACTIONS(121),
    [anon_sym_BSLASHb] = ACTIONS(121),
    [anon_sym_BSLASHB] = ACTIONS(121),
    [anon_sym_LPAREN_QMARK] = ACTIONS(124),
    [anon_sym_LBRACK] = ACTIONS(127),
    [sym_pattern_character] = ACTIONS(112),
  },
  [42] = {
    [anon_sym_RPAREN] = ACTIONS(141),
  },
  [43] = {
    [ts_builtin_sym_end] = ACTIONS(143),
    [anon_sym_PIPE] = ACTIONS(143),
    [anon_sym_DOT] = ACTIONS(143),
    [anon_sym_BSLASH] = ACTIONS(145),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(143),
    [anon_sym_RPAREN] = ACTIONS(143),
    [anon_sym_CARET] = ACTIONS(143),
    [anon_sym_DOLLAR] = ACTIONS(143),
    [anon_sym_BSLASHb] = ACTIONS(143),
    [anon_sym_BSLASHB] = ACTIONS(143),
    [anon_sym_LPAREN_QMARK] = ACTIONS(145),
    [anon_sym_LBRACK] = ACTIONS(143),
    [sym_pattern_character] = ACTIONS(143),
    [anon_sym_QMARK] = ACTIONS(143),
    [anon_sym_STAR] = ACTIONS(143),
    [anon_sym_PLUS] = ACTIONS(143),
    [anon_sym_LBRACE] = ACTIONS(143),
  },
  [44] = {
    [sym_class_range] = STATE(46),
    [aux_sym_character_class_repeat1] = STATE(46),
    [anon_sym_RBRACK] = ACTIONS(147),
    [sym_class_atom] = ACTIONS(81),
  },
  [45] = {
    [sym_class_atom] = ACTIONS(149),
  },
  [46] = {
    [sym_class_range] = STATE(46),
    [aux_sym_character_class_repeat1] = STATE(46),
    [anon_sym_RBRACK] = ACTIONS(151),
    [sym_class_atom] = ACTIONS(153),
  },
  [47] = {
    [anon_sym_COMMA] = ACTIONS(156),
    [anon_sym_RBRACE] = ACTIONS(158),
  },
  [48] = {
    [ts_builtin_sym_end] = ACTIONS(160),
    [anon_sym_PIPE] = ACTIONS(160),
    [anon_sym_DOT] = ACTIONS(160),
    [anon_sym_BSLASH] = ACTIONS(162),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(160),
    [anon_sym_RPAREN] = ACTIONS(160),
    [anon_sym_CARET] = ACTIONS(160),
    [anon_sym_DOLLAR] = ACTIONS(160),
    [anon_sym_BSLASHb] = ACTIONS(160),
    [anon_sym_BSLASHB] = ACTIONS(160),
    [anon_sym_LPAREN_QMARK] = ACTIONS(162),
    [anon_sym_LBRACK] = ACTIONS(160),
    [sym_pattern_character] = ACTIONS(160),
  },
  [49] = {
    [ts_builtin_sym_end] = ACTIONS(164),
    [anon_sym_PIPE] = ACTIONS(164),
    [anon_sym_DOT] = ACTIONS(164),
    [anon_sym_BSLASH] = ACTIONS(166),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(164),
    [anon_sym_RPAREN] = ACTIONS(164),
    [anon_sym_CARET] = ACTIONS(164),
    [anon_sym_DOLLAR] = ACTIONS(164),
    [anon_sym_BSLASHb] = ACTIONS(164),
    [anon_sym_BSLASHB] = ACTIONS(164),
    [anon_sym_LPAREN_QMARK] = ACTIONS(166),
    [anon_sym_LBRACK] = ACTIONS(164),
    [sym_pattern_character] = ACTIONS(164),
    [anon_sym_QMARK] = ACTIONS(164),
    [anon_sym_STAR] = ACTIONS(164),
    [anon_sym_PLUS] = ACTIONS(164),
    [anon_sym_LBRACE] = ACTIONS(164),
  },
  [50] = {
    [ts_builtin_sym_end] = ACTIONS(168),
    [anon_sym_PIPE] = ACTIONS(168),
    [anon_sym_DOT] = ACTIONS(168),
    [anon_sym_BSLASH] = ACTIONS(170),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(168),
    [anon_sym_RPAREN] = ACTIONS(168),
    [anon_sym_CARET] = ACTIONS(168),
    [anon_sym_DOLLAR] = ACTIONS(168),
    [anon_sym_BSLASHb] = ACTIONS(168),
    [anon_sym_BSLASHB] = ACTIONS(168),
    [anon_sym_LPAREN_QMARK] = ACTIONS(170),
    [anon_sym_LBRACK] = ACTIONS(168),
    [sym_pattern_character] = ACTIONS(168),
    [anon_sym_QMARK] = ACTIONS(168),
    [anon_sym_STAR] = ACTIONS(168),
    [anon_sym_PLUS] = ACTIONS(168),
    [anon_sym_LBRACE] = ACTIONS(168),
  },
  [51] = {
    [anon_sym_RBRACK] = ACTIONS(172),
    [sym_class_atom] = ACTIONS(172),
  },
  [52] = {
    [sym_decimal_digits] = ACTIONS(174),
  },
  [53] = {
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
  },
  [54] = {
    [anon_sym_RBRACE] = ACTIONS(180),
  },
  [55] = {
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
  [31] = {.count = 1, .reusable = true}, SHIFT(20),
  [33] = {.count = 1, .reusable = true}, REDUCE(sym_assertion, 1),
  [35] = {.count = 1, .reusable = false}, REDUCE(sym_assertion, 1),
  [37] = {.count = 1, .reusable = true}, SHIFT(25),
  [39] = {.count = 1, .reusable = true}, SHIFT(26),
  [41] = {.count = 1, .reusable = true}, SHIFT(27),
  [43] = {.count = 1, .reusable = false}, SHIFT(28),
  [45] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [47] = {.count = 1, .reusable = true}, REDUCE(sym_pattern, 1),
  [49] = {.count = 1, .reusable = true}, REDUCE(aux_sym_term_repeat1, 1),
  [51] = {.count = 1, .reusable = false}, REDUCE(aux_sym_term_repeat1, 1),
  [53] = {.count = 1, .reusable = true}, SHIFT(31),
  [55] = {.count = 1, .reusable = true}, SHIFT(32),
  [57] = {.count = 1, .reusable = true}, REDUCE(sym_disjunction, 1),
  [59] = {.count = 1, .reusable = true}, REDUCE(sym_term, 1),
  [61] = {.count = 1, .reusable = true}, REDUCE(aux_sym_disjunction_repeat1, 2),
  [63] = {.count = 1, .reusable = true}, REDUCE(sym_atom_escape, 1),
  [65] = {.count = 1, .reusable = false}, REDUCE(sym_atom_escape, 1),
  [67] = {.count = 1, .reusable = true}, SHIFT(37),
  [69] = {.count = 1, .reusable = true}, REDUCE(sym_character_escape, 1),
  [71] = {.count = 1, .reusable = false}, REDUCE(sym_character_escape, 1),
  [73] = {.count = 1, .reusable = true}, REDUCE(sym_atom, 2),
  [75] = {.count = 1, .reusable = false}, REDUCE(sym_atom, 2),
  [77] = {.count = 1, .reusable = true}, SHIFT(38),
  [79] = {.count = 1, .reusable = true}, SHIFT(43),
  [81] = {.count = 1, .reusable = true}, SHIFT(28),
  [83] = {.count = 1, .reusable = true}, REDUCE(sym_character_class, 2),
  [85] = {.count = 1, .reusable = false}, REDUCE(sym_character_class, 2),
  [87] = {.count = 1, .reusable = true}, REDUCE(sym_class_range, 1),
  [89] = {.count = 1, .reusable = true}, SHIFT(45),
  [91] = {.count = 1, .reusable = true}, REDUCE(sym_disjunction, 2),
  [93] = {.count = 1, .reusable = true}, REDUCE(sym_quantifier_prefix, 1),
  [95] = {.count = 1, .reusable = false}, REDUCE(sym_quantifier_prefix, 1),
  [97] = {.count = 1, .reusable = true}, SHIFT(47),
  [99] = {.count = 1, .reusable = true}, REDUCE(aux_sym_term_repeat1, 2),
  [101] = {.count = 1, .reusable = false}, REDUCE(aux_sym_term_repeat1, 2),
  [103] = {.count = 1, .reusable = true}, REDUCE(sym_quantifier, 1),
  [105] = {.count = 1, .reusable = false}, REDUCE(sym_quantifier, 1),
  [107] = {.count = 1, .reusable = true}, SHIFT(48),
  [109] = {.count = 2, .reusable = true}, REDUCE(aux_sym_disjunction_repeat1, 2), SHIFT_REPEAT(2),
  [112] = {.count = 2, .reusable = true}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(3),
  [115] = {.count = 2, .reusable = false}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(4),
  [118] = {.count = 2, .reusable = true}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(5),
  [121] = {.count = 2, .reusable = true}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(6),
  [124] = {.count = 2, .reusable = false}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(7),
  [127] = {.count = 2, .reusable = true}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(8),
  [130] = {.count = 1, .reusable = true}, REDUCE(sym_character_escape, 2),
  [132] = {.count = 1, .reusable = false}, REDUCE(sym_character_escape, 2),
  [134] = {.count = 1, .reusable = true}, REDUCE(sym_non_capturing_group, 3),
  [136] = {.count = 1, .reusable = false}, REDUCE(sym_non_capturing_group, 3),
  [138] = {.count = 2, .reusable = true}, REDUCE(aux_sym_disjunction_repeat1, 2), SHIFT_REPEAT(20),
  [141] = {.count = 1, .reusable = true}, SHIFT(49),
  [143] = {.count = 1, .reusable = true}, REDUCE(sym_character_class, 3),
  [145] = {.count = 1, .reusable = false}, REDUCE(sym_character_class, 3),
  [147] = {.count = 1, .reusable = true}, SHIFT(50),
  [149] = {.count = 1, .reusable = true}, SHIFT(51),
  [151] = {.count = 1, .reusable = true}, REDUCE(aux_sym_character_class_repeat1, 2),
  [153] = {.count = 2, .reusable = true}, REDUCE(aux_sym_character_class_repeat1, 2), SHIFT_REPEAT(28),
  [156] = {.count = 1, .reusable = true}, SHIFT(52),
  [158] = {.count = 1, .reusable = true}, SHIFT(53),
  [160] = {.count = 1, .reusable = true}, REDUCE(sym_quantifier, 2, .alias_sequence_id = 1),
  [162] = {.count = 1, .reusable = false}, REDUCE(sym_quantifier, 2, .alias_sequence_id = 1),
  [164] = {.count = 1, .reusable = true}, REDUCE(sym_assertion, 4),
  [166] = {.count = 1, .reusable = false}, REDUCE(sym_assertion, 4),
  [168] = {.count = 1, .reusable = true}, REDUCE(sym_character_class, 4),
  [170] = {.count = 1, .reusable = false}, REDUCE(sym_character_class, 4),
  [172] = {.count = 1, .reusable = true}, REDUCE(sym_class_range, 3),
  [174] = {.count = 1, .reusable = true}, SHIFT(54),
  [176] = {.count = 1, .reusable = true}, REDUCE(sym_count_quantifier, 3),
  [178] = {.count = 1, .reusable = false}, REDUCE(sym_count_quantifier, 3),
  [180] = {.count = 1, .reusable = true}, SHIFT(55),
  [182] = {.count = 1, .reusable = true}, REDUCE(sym_count_quantifier, 5),
  [184] = {.count = 1, .reusable = false}, REDUCE(sym_count_quantifier, 5),
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
