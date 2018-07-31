#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 28
#define SYMBOL_COUNT 30
#define ALIAS_COUNT 0
#define TOKEN_COUNT 22
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  anon_sym_PIPE = 1,
  anon_sym_CARET = 2,
  anon_sym_DOLLAR = 3,
  anon_sym_BSLASHb = 4,
  anon_sym_BSLASHB = 5,
  anon_sym_LPAREN_QMARK = 6,
  anon_sym_EQ = 7,
  anon_sym_BANG = 8,
  anon_sym_LT_EQ = 9,
  anon_sym_LT_BANG = 10,
  anon_sym_RPAREN = 11,
  anon_sym_DOT = 12,
  anon_sym_LPAREN_QMARK_COLON = 13,
  sym_pattern_character = 14,
  anon_sym_QMARK = 15,
  anon_sym_STAR = 16,
  anon_sym_PLUS = 17,
  sym_character_class_escape = 18,
  anon_sym_c = 19,
  sym_control_escape = 20,
  sym_control_letter = 21,
  sym_pattern = 22,
  sym_disjunction = 23,
  sym_term = 24,
  sym_assertion = 25,
  sym_atom = 26,
  sym_non_capturing_group = 27,
  aux_sym_disjunction_repeat1 = 28,
  aux_sym_term_repeat1 = 29,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [anon_sym_PIPE] = "|",
  [anon_sym_CARET] = "^",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_BSLASHb] = "\\b",
  [anon_sym_BSLASHB] = "\\B",
  [anon_sym_LPAREN_QMARK] = "(?",
  [anon_sym_EQ] = "=",
  [anon_sym_BANG] = "!",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_LT_BANG] = "<!",
  [anon_sym_RPAREN] = ")",
  [anon_sym_DOT] = ".",
  [anon_sym_LPAREN_QMARK_COLON] = "(?:",
  [sym_pattern_character] = "pattern_character",
  [anon_sym_QMARK] = "?",
  [anon_sym_STAR] = "*",
  [anon_sym_PLUS] = "+",
  [sym_character_class_escape] = "character_class_escape",
  [anon_sym_c] = "c",
  [sym_control_escape] = "control_escape",
  [sym_control_letter] = "control_letter",
  [sym_pattern] = "pattern",
  [sym_disjunction] = "disjunction",
  [sym_term] = "term",
  [sym_assertion] = "assertion",
  [sym_atom] = "atom",
  [sym_non_capturing_group] = "non_capturing_group",
  [aux_sym_disjunction_repeat1] = "disjunction_repeat1",
  [aux_sym_term_repeat1] = "term_repeat1",
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
  [anon_sym_RPAREN] = {
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
  [sym_assertion] = {
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
  [aux_sym_disjunction_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_term_repeat1] = {
    .visible = false,
    .named = false,
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
        ADVANCE(7);
      if (lookahead == '*')
        ADVANCE(8);
      if (lookahead == '+')
        ADVANCE(9);
      if (lookahead == '.')
        ADVANCE(10);
      if (lookahead == '=')
        ADVANCE(11);
      if (lookahead == '?')
        ADVANCE(12);
      if (lookahead == '\\')
        ADVANCE(13);
      if (lookahead == '^')
        ADVANCE(16);
      if (lookahead == 'c')
        ADVANCE(17);
      if (lookahead == '|')
        ADVANCE(18);
      if (lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'v')
        ADVANCE(19);
      if (lookahead == 'D' ||
          lookahead == 'S' ||
          lookahead == 'W' ||
          lookahead == 'd' ||
          lookahead == 's' ||
          lookahead == 'w')
        ADVANCE(19);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(19);
      if ((lookahead < 'A' || lookahead > '^') &&
          (lookahead < 'a' || lookahead > '}'))
        ADVANCE(19);
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
      if (lookahead == '?')
        ADVANCE(5);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_LPAREN_QMARK);
      if (lookahead == ':')
        ADVANCE(6);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_LPAREN_QMARK_COLON);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_PLUS);
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
      if (lookahead == 'B')
        ADVANCE(14);
      if (lookahead == 'b')
        ADVANCE(15);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_BSLASHB);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_BSLASHb);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_c);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_pattern_character);
      END_STATE();
    case 20:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '$')
        ADVANCE(3);
      if (lookahead == '(')
        ADVANCE(4);
      if (lookahead == '.')
        ADVANCE(10);
      if (lookahead == '\\')
        ADVANCE(13);
      if (lookahead == '^')
        ADVANCE(16);
      if (lookahead == '|')
        ADVANCE(18);
      if ((lookahead < '(' || lookahead > '+') &&
          lookahead != '?' &&
          (lookahead < '[' || lookahead > '^') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(19);
      END_STATE();
    case 21:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '$')
        ADVANCE(3);
      if (lookahead == '(')
        ADVANCE(4);
      if (lookahead == ')')
        ADVANCE(7);
      if (lookahead == '.')
        ADVANCE(10);
      if (lookahead == '\\')
        ADVANCE(13);
      if (lookahead == '^')
        ADVANCE(16);
      if (lookahead == '|')
        ADVANCE(18);
      if ((lookahead < '(' || lookahead > '+') &&
          lookahead != '?' &&
          (lookahead < '[' || lookahead > '^') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(19);
      END_STATE();
    case 22:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '<')
        ADVANCE(23);
      if (lookahead == '=')
        ADVANCE(11);
      END_STATE();
    case 23:
      if (lookahead == '!')
        ADVANCE(24);
      if (lookahead == '=')
        ADVANCE(25);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_LT_BANG);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 26:
      if (lookahead == 0)
        ADVANCE(1);
      END_STATE();
    case 27:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == ')')
        ADVANCE(7);
      END_STATE();
    case 28:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '|')
        ADVANCE(18);
      END_STATE();
    case 29:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == ')')
        ADVANCE(7);
      if (lookahead == '|')
        ADVANCE(18);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 20},
  [2] = {.lex_state = 20},
  [3] = {.lex_state = 21},
  [4] = {.lex_state = 22},
  [5] = {.lex_state = 21},
  [6] = {.lex_state = 20},
  [7] = {.lex_state = 26},
  [8] = {.lex_state = 27},
  [9] = {.lex_state = 28},
  [10] = {.lex_state = 28},
  [11] = {.lex_state = 20},
  [12] = {.lex_state = 29},
  [13] = {.lex_state = 20},
  [14] = {.lex_state = 21},
  [15] = {.lex_state = 21},
  [16] = {.lex_state = 21},
  [17] = {.lex_state = 21},
  [18] = {.lex_state = 21},
  [19] = {.lex_state = 28},
  [20] = {.lex_state = 28},
  [21] = {.lex_state = 20},
  [22] = {.lex_state = 21},
  [23] = {.lex_state = 21},
  [24] = {.lex_state = 21},
  [25] = {.lex_state = 21},
  [26] = {.lex_state = 21},
  [27] = {.lex_state = 21},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_BSLASHb] = ACTIONS(1),
    [anon_sym_BSLASHB] = ACTIONS(1),
    [anon_sym_LPAREN_QMARK] = ACTIONS(3),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(1),
    [sym_pattern_character] = ACTIONS(3),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [sym_character_class_escape] = ACTIONS(3),
    [anon_sym_c] = ACTIONS(1),
    [sym_control_escape] = ACTIONS(3),
    [sym_control_letter] = ACTIONS(3),
  },
  [1] = {
    [sym_pattern] = STATE(7),
    [sym_disjunction] = STATE(8),
    [sym_term] = STATE(9),
    [sym_assertion] = STATE(5),
    [sym_atom] = STATE(11),
    [sym_non_capturing_group] = STATE(5),
    [aux_sym_disjunction_repeat1] = STATE(10),
    [aux_sym_term_repeat1] = STATE(11),
    [anon_sym_PIPE] = ACTIONS(5),
    [anon_sym_CARET] = ACTIONS(7),
    [anon_sym_DOLLAR] = ACTIONS(7),
    [anon_sym_BSLASHb] = ACTIONS(7),
    [anon_sym_BSLASHB] = ACTIONS(7),
    [anon_sym_LPAREN_QMARK] = ACTIONS(9),
    [anon_sym_DOT] = ACTIONS(11),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(13),
    [sym_pattern_character] = ACTIONS(11),
  },
  [2] = {
    [sym_term] = STATE(12),
    [sym_assertion] = STATE(5),
    [sym_atom] = STATE(11),
    [sym_non_capturing_group] = STATE(5),
    [aux_sym_term_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(15),
    [anon_sym_PIPE] = ACTIONS(15),
    [anon_sym_CARET] = ACTIONS(7),
    [anon_sym_DOLLAR] = ACTIONS(7),
    [anon_sym_BSLASHb] = ACTIONS(7),
    [anon_sym_BSLASHB] = ACTIONS(7),
    [anon_sym_LPAREN_QMARK] = ACTIONS(9),
    [anon_sym_DOT] = ACTIONS(11),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(13),
    [sym_pattern_character] = ACTIONS(11),
  },
  [3] = {
    [ts_builtin_sym_end] = ACTIONS(17),
    [anon_sym_PIPE] = ACTIONS(17),
    [anon_sym_CARET] = ACTIONS(17),
    [anon_sym_DOLLAR] = ACTIONS(17),
    [anon_sym_BSLASHb] = ACTIONS(17),
    [anon_sym_BSLASHB] = ACTIONS(17),
    [anon_sym_LPAREN_QMARK] = ACTIONS(19),
    [anon_sym_RPAREN] = ACTIONS(17),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(17),
    [sym_pattern_character] = ACTIONS(17),
  },
  [4] = {
    [anon_sym_EQ] = ACTIONS(21),
    [anon_sym_BANG] = ACTIONS(21),
    [anon_sym_LT_EQ] = ACTIONS(21),
    [anon_sym_LT_BANG] = ACTIONS(21),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(23),
    [anon_sym_PIPE] = ACTIONS(23),
    [anon_sym_CARET] = ACTIONS(23),
    [anon_sym_DOLLAR] = ACTIONS(23),
    [anon_sym_BSLASHb] = ACTIONS(23),
    [anon_sym_BSLASHB] = ACTIONS(23),
    [anon_sym_LPAREN_QMARK] = ACTIONS(25),
    [anon_sym_RPAREN] = ACTIONS(23),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(23),
    [sym_pattern_character] = ACTIONS(23),
  },
  [6] = {
    [sym_pattern] = STATE(15),
    [sym_disjunction] = STATE(8),
    [sym_term] = STATE(16),
    [sym_assertion] = STATE(5),
    [sym_atom] = STATE(18),
    [sym_non_capturing_group] = STATE(5),
    [aux_sym_disjunction_repeat1] = STATE(17),
    [aux_sym_term_repeat1] = STATE(18),
    [anon_sym_PIPE] = ACTIONS(27),
    [anon_sym_CARET] = ACTIONS(7),
    [anon_sym_DOLLAR] = ACTIONS(7),
    [anon_sym_BSLASHb] = ACTIONS(7),
    [anon_sym_BSLASHB] = ACTIONS(7),
    [anon_sym_LPAREN_QMARK] = ACTIONS(9),
    [anon_sym_DOT] = ACTIONS(11),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(13),
    [sym_pattern_character] = ACTIONS(11),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(29),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(31),
    [anon_sym_RPAREN] = ACTIONS(31),
  },
  [9] = {
    [aux_sym_disjunction_repeat1] = STATE(19),
    [ts_builtin_sym_end] = ACTIONS(31),
    [anon_sym_PIPE] = ACTIONS(5),
  },
  [10] = {
    [aux_sym_disjunction_repeat1] = STATE(20),
    [ts_builtin_sym_end] = ACTIONS(33),
    [anon_sym_PIPE] = ACTIONS(5),
  },
  [11] = {
    [sym_assertion] = STATE(5),
    [sym_atom] = STATE(21),
    [sym_non_capturing_group] = STATE(5),
    [aux_sym_term_repeat1] = STATE(21),
    [ts_builtin_sym_end] = ACTIONS(35),
    [anon_sym_PIPE] = ACTIONS(35),
    [anon_sym_CARET] = ACTIONS(7),
    [anon_sym_DOLLAR] = ACTIONS(7),
    [anon_sym_BSLASHb] = ACTIONS(7),
    [anon_sym_BSLASHB] = ACTIONS(7),
    [anon_sym_LPAREN_QMARK] = ACTIONS(9),
    [anon_sym_DOT] = ACTIONS(11),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(13),
    [sym_pattern_character] = ACTIONS(11),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(37),
    [anon_sym_PIPE] = ACTIONS(37),
    [anon_sym_RPAREN] = ACTIONS(37),
  },
  [13] = {
    [sym_pattern] = STATE(22),
    [sym_disjunction] = STATE(8),
    [sym_term] = STATE(16),
    [sym_assertion] = STATE(5),
    [sym_atom] = STATE(18),
    [sym_non_capturing_group] = STATE(5),
    [aux_sym_disjunction_repeat1] = STATE(17),
    [aux_sym_term_repeat1] = STATE(18),
    [anon_sym_PIPE] = ACTIONS(27),
    [anon_sym_CARET] = ACTIONS(7),
    [anon_sym_DOLLAR] = ACTIONS(7),
    [anon_sym_BSLASHb] = ACTIONS(7),
    [anon_sym_BSLASHB] = ACTIONS(7),
    [anon_sym_LPAREN_QMARK] = ACTIONS(9),
    [anon_sym_DOT] = ACTIONS(11),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(13),
    [sym_pattern_character] = ACTIONS(11),
  },
  [14] = {
    [sym_term] = STATE(12),
    [sym_assertion] = STATE(5),
    [sym_atom] = STATE(18),
    [sym_non_capturing_group] = STATE(5),
    [aux_sym_term_repeat1] = STATE(18),
    [anon_sym_PIPE] = ACTIONS(15),
    [anon_sym_CARET] = ACTIONS(7),
    [anon_sym_DOLLAR] = ACTIONS(7),
    [anon_sym_BSLASHb] = ACTIONS(7),
    [anon_sym_BSLASHB] = ACTIONS(7),
    [anon_sym_LPAREN_QMARK] = ACTIONS(9),
    [anon_sym_RPAREN] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(11),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(13),
    [sym_pattern_character] = ACTIONS(11),
  },
  [15] = {
    [anon_sym_RPAREN] = ACTIONS(39),
  },
  [16] = {
    [aux_sym_disjunction_repeat1] = STATE(24),
    [anon_sym_PIPE] = ACTIONS(27),
    [anon_sym_RPAREN] = ACTIONS(31),
  },
  [17] = {
    [aux_sym_disjunction_repeat1] = STATE(25),
    [anon_sym_PIPE] = ACTIONS(27),
    [anon_sym_RPAREN] = ACTIONS(33),
  },
  [18] = {
    [sym_assertion] = STATE(5),
    [sym_atom] = STATE(26),
    [sym_non_capturing_group] = STATE(5),
    [aux_sym_term_repeat1] = STATE(26),
    [anon_sym_PIPE] = ACTIONS(35),
    [anon_sym_CARET] = ACTIONS(7),
    [anon_sym_DOLLAR] = ACTIONS(7),
    [anon_sym_BSLASHb] = ACTIONS(7),
    [anon_sym_BSLASHB] = ACTIONS(7),
    [anon_sym_LPAREN_QMARK] = ACTIONS(9),
    [anon_sym_RPAREN] = ACTIONS(35),
    [anon_sym_DOT] = ACTIONS(11),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(13),
    [sym_pattern_character] = ACTIONS(11),
  },
  [19] = {
    [aux_sym_disjunction_repeat1] = STATE(20),
    [ts_builtin_sym_end] = ACTIONS(41),
    [anon_sym_PIPE] = ACTIONS(5),
  },
  [20] = {
    [aux_sym_disjunction_repeat1] = STATE(20),
    [ts_builtin_sym_end] = ACTIONS(37),
    [anon_sym_PIPE] = ACTIONS(43),
  },
  [21] = {
    [sym_assertion] = STATE(5),
    [sym_atom] = STATE(21),
    [sym_non_capturing_group] = STATE(5),
    [aux_sym_term_repeat1] = STATE(21),
    [ts_builtin_sym_end] = ACTIONS(46),
    [anon_sym_PIPE] = ACTIONS(46),
    [anon_sym_CARET] = ACTIONS(48),
    [anon_sym_DOLLAR] = ACTIONS(48),
    [anon_sym_BSLASHb] = ACTIONS(48),
    [anon_sym_BSLASHB] = ACTIONS(48),
    [anon_sym_LPAREN_QMARK] = ACTIONS(51),
    [anon_sym_DOT] = ACTIONS(54),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(57),
    [sym_pattern_character] = ACTIONS(54),
  },
  [22] = {
    [anon_sym_RPAREN] = ACTIONS(60),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(62),
    [anon_sym_PIPE] = ACTIONS(62),
    [anon_sym_CARET] = ACTIONS(62),
    [anon_sym_DOLLAR] = ACTIONS(62),
    [anon_sym_BSLASHb] = ACTIONS(62),
    [anon_sym_BSLASHB] = ACTIONS(62),
    [anon_sym_LPAREN_QMARK] = ACTIONS(64),
    [anon_sym_RPAREN] = ACTIONS(62),
    [anon_sym_DOT] = ACTIONS(62),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(62),
    [sym_pattern_character] = ACTIONS(62),
  },
  [24] = {
    [aux_sym_disjunction_repeat1] = STATE(25),
    [anon_sym_PIPE] = ACTIONS(27),
    [anon_sym_RPAREN] = ACTIONS(41),
  },
  [25] = {
    [aux_sym_disjunction_repeat1] = STATE(25),
    [anon_sym_PIPE] = ACTIONS(66),
    [anon_sym_RPAREN] = ACTIONS(37),
  },
  [26] = {
    [sym_assertion] = STATE(5),
    [sym_atom] = STATE(26),
    [sym_non_capturing_group] = STATE(5),
    [aux_sym_term_repeat1] = STATE(26),
    [anon_sym_PIPE] = ACTIONS(46),
    [anon_sym_CARET] = ACTIONS(48),
    [anon_sym_DOLLAR] = ACTIONS(48),
    [anon_sym_BSLASHb] = ACTIONS(48),
    [anon_sym_BSLASHB] = ACTIONS(48),
    [anon_sym_LPAREN_QMARK] = ACTIONS(51),
    [anon_sym_RPAREN] = ACTIONS(46),
    [anon_sym_DOT] = ACTIONS(54),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(57),
    [sym_pattern_character] = ACTIONS(54),
  },
  [27] = {
    [ts_builtin_sym_end] = ACTIONS(69),
    [anon_sym_PIPE] = ACTIONS(69),
    [anon_sym_CARET] = ACTIONS(69),
    [anon_sym_DOLLAR] = ACTIONS(69),
    [anon_sym_BSLASHb] = ACTIONS(69),
    [anon_sym_BSLASHB] = ACTIONS(69),
    [anon_sym_LPAREN_QMARK] = ACTIONS(71),
    [anon_sym_RPAREN] = ACTIONS(69),
    [anon_sym_DOT] = ACTIONS(69),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(69),
    [sym_pattern_character] = ACTIONS(69),
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
  [15] = {.count = 1, .reusable = true}, REDUCE(aux_sym_disjunction_repeat1, 1),
  [17] = {.count = 1, .reusable = true}, REDUCE(sym_assertion, 1),
  [19] = {.count = 1, .reusable = false}, REDUCE(sym_assertion, 1),
  [21] = {.count = 1, .reusable = true}, SHIFT(13),
  [23] = {.count = 1, .reusable = true}, REDUCE(sym_atom, 1),
  [25] = {.count = 1, .reusable = false}, REDUCE(sym_atom, 1),
  [27] = {.count = 1, .reusable = true}, SHIFT(14),
  [29] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [31] = {.count = 1, .reusable = true}, REDUCE(sym_pattern, 1),
  [33] = {.count = 1, .reusable = true}, REDUCE(sym_disjunction, 1),
  [35] = {.count = 1, .reusable = true}, REDUCE(sym_term, 1),
  [37] = {.count = 1, .reusable = true}, REDUCE(aux_sym_disjunction_repeat1, 2),
  [39] = {.count = 1, .reusable = true}, SHIFT(23),
  [41] = {.count = 1, .reusable = true}, REDUCE(sym_disjunction, 2),
  [43] = {.count = 2, .reusable = true}, REDUCE(aux_sym_disjunction_repeat1, 2), SHIFT_REPEAT(2),
  [46] = {.count = 1, .reusable = true}, REDUCE(aux_sym_term_repeat1, 2),
  [48] = {.count = 2, .reusable = true}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(3),
  [51] = {.count = 2, .reusable = false}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(4),
  [54] = {.count = 2, .reusable = true}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(5),
  [57] = {.count = 2, .reusable = true}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(6),
  [60] = {.count = 1, .reusable = true}, SHIFT(27),
  [62] = {.count = 1, .reusable = true}, REDUCE(sym_non_capturing_group, 3),
  [64] = {.count = 1, .reusable = false}, REDUCE(sym_non_capturing_group, 3),
  [66] = {.count = 2, .reusable = true}, REDUCE(aux_sym_disjunction_repeat1, 2), SHIFT_REPEAT(14),
  [69] = {.count = 1, .reusable = true}, REDUCE(sym_assertion, 4),
  [71] = {.count = 1, .reusable = false}, REDUCE(sym_assertion, 4),
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
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
