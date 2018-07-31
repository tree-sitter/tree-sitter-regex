#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 39
#define SYMBOL_COUNT 37
#define ALIAS_COUNT 0
#define TOKEN_COUNT 26
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 0

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
  sym_character_class_escape = 22,
  anon_sym_c = 23,
  sym_control_escape = 24,
  sym_control_letter = 25,
  sym_pattern = 26,
  sym_disjunction = 27,
  sym_term = 28,
  sym_atom = 29,
  sym_non_capturing_group = 30,
  sym_assertion = 31,
  sym_character_class = 32,
  sym_class_range = 33,
  aux_sym_disjunction_repeat1 = 34,
  aux_sym_term_repeat1 = 35,
  aux_sym_character_class_repeat1 = 36,
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
  [sym_character_class_escape] = "character_class_escape",
  [anon_sym_c] = "c",
  [sym_control_escape] = "control_escape",
  [sym_control_letter] = "control_letter",
  [sym_pattern] = "pattern",
  [sym_disjunction] = "disjunction",
  [sym_term] = "term",
  [sym_atom] = "atom",
  [sym_non_capturing_group] = "non_capturing_group",
  [sym_assertion] = "assertion",
  [sym_character_class] = "character_class",
  [sym_class_range] = "class_range",
  [aux_sym_disjunction_repeat1] = "disjunction_repeat1",
  [aux_sym_term_repeat1] = "term_repeat1",
  [aux_sym_character_class_repeat1] = "character_class_repeat1",
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
      if (lookahead == ')')
        ADVANCE(4);
      if (lookahead == '*')
        ADVANCE(5);
      if (lookahead == '+')
        ADVANCE(6);
      if (lookahead == '-')
        ADVANCE(7);
      if (lookahead == '.')
        ADVANCE(8);
      if (lookahead == '=')
        ADVANCE(9);
      if (lookahead == '?')
        ADVANCE(10);
      if (lookahead == '[')
        ADVANCE(11);
      if (lookahead == '\\')
        ADVANCE(12);
      if (lookahead == ']')
        ADVANCE(15);
      if (lookahead == '^')
        ADVANCE(16);
      if (lookahead == 'c')
        ADVANCE(17);
      if (lookahead == '|')
        ADVANCE(18);
      if (lookahead == '(' ||
          ('{' <= lookahead && lookahead <= '}'))
        ADVANCE(19);
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
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 12:
      if (lookahead == 'B')
        ADVANCE(13);
      if (lookahead == 'b')
        ADVANCE(14);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_BSLASHB);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_BSLASHb);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_RBRACK);
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
      ACCEPT_TOKEN(sym_class_atom);
      END_STATE();
    case 20:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '$')
        ADVANCE(3);
      if (lookahead == '(')
        ADVANCE(21);
      if (lookahead == '.')
        ADVANCE(8);
      if (lookahead == '[')
        ADVANCE(11);
      if (lookahead == '\\')
        ADVANCE(12);
      if (lookahead == '^')
        ADVANCE(16);
      if (lookahead == '|')
        ADVANCE(18);
      if ((lookahead < '(' || lookahead > '+') &&
          lookahead != '?' &&
          (lookahead < '[' || lookahead > '^') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(24);
      END_STATE();
    case 21:
      if (lookahead == '?')
        ADVANCE(22);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_LPAREN_QMARK);
      if (lookahead == ':')
        ADVANCE(23);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_LPAREN_QMARK_COLON);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_pattern_character);
      END_STATE();
    case 25:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '$')
        ADVANCE(3);
      if (lookahead == '(')
        ADVANCE(21);
      if (lookahead == ')')
        ADVANCE(4);
      if (lookahead == '.')
        ADVANCE(8);
      if (lookahead == '[')
        ADVANCE(11);
      if (lookahead == '\\')
        ADVANCE(12);
      if (lookahead == '^')
        ADVANCE(16);
      if (lookahead == '|')
        ADVANCE(18);
      if ((lookahead < '(' || lookahead > '+') &&
          lookahead != '?' &&
          (lookahead < '[' || lookahead > '^') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(24);
      END_STATE();
    case 26:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '<')
        ADVANCE(27);
      if (lookahead == '=')
        ADVANCE(9);
      END_STATE();
    case 27:
      if (lookahead == '!')
        ADVANCE(28);
      if (lookahead == '=')
        ADVANCE(29);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_LT_BANG);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 30:
      if (lookahead == ']')
        ADVANCE(15);
      if (lookahead == '^')
        ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '-' &&
          (lookahead < '\\' || lookahead > '^'))
        ADVANCE(19);
      END_STATE();
    case 31:
      if (lookahead == 0)
        ADVANCE(1);
      END_STATE();
    case 32:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == ')')
        ADVANCE(4);
      END_STATE();
    case 33:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '|')
        ADVANCE(18);
      END_STATE();
    case 34:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == ')')
        ADVANCE(4);
      if (lookahead == '|')
        ADVANCE(18);
      END_STATE();
    case 35:
      if (lookahead == '-')
        ADVANCE(7);
      if (lookahead == ']')
        ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '\\' &&
          lookahead != ']')
        ADVANCE(19);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 20},
  [2] = {.lex_state = 20},
  [3] = {.lex_state = 25},
  [4] = {.lex_state = 20},
  [5] = {.lex_state = 25},
  [6] = {.lex_state = 26},
  [7] = {.lex_state = 30},
  [8] = {.lex_state = 31},
  [9] = {.lex_state = 32},
  [10] = {.lex_state = 33},
  [11] = {.lex_state = 33},
  [12] = {.lex_state = 20},
  [13] = {.lex_state = 34},
  [14] = {.lex_state = 25},
  [15] = {.lex_state = 25},
  [16] = {.lex_state = 25},
  [17] = {.lex_state = 25},
  [18] = {.lex_state = 25},
  [19] = {.lex_state = 20},
  [20] = {.lex_state = 35},
  [21] = {.lex_state = 25},
  [22] = {.lex_state = 35},
  [23] = {.lex_state = 35},
  [24] = {.lex_state = 33},
  [25] = {.lex_state = 33},
  [26] = {.lex_state = 20},
  [27] = {.lex_state = 25},
  [28] = {.lex_state = 25},
  [29] = {.lex_state = 25},
  [30] = {.lex_state = 25},
  [31] = {.lex_state = 25},
  [32] = {.lex_state = 25},
  [33] = {.lex_state = 35},
  [34] = {.lex_state = 35},
  [35] = {.lex_state = 35},
  [36] = {.lex_state = 25},
  [37] = {.lex_state = 25},
  [38] = {.lex_state = 35},
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
    [sym_character_class_escape] = ACTIONS(3),
    [anon_sym_c] = ACTIONS(1),
    [sym_control_escape] = ACTIONS(3),
    [sym_control_letter] = ACTIONS(3),
  },
  [1] = {
    [sym_pattern] = STATE(8),
    [sym_disjunction] = STATE(9),
    [sym_term] = STATE(10),
    [sym_atom] = STATE(12),
    [sym_non_capturing_group] = STATE(3),
    [sym_assertion] = STATE(3),
    [sym_character_class] = STATE(3),
    [aux_sym_disjunction_repeat1] = STATE(11),
    [aux_sym_term_repeat1] = STATE(12),
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
    [sym_term] = STATE(13),
    [sym_atom] = STATE(12),
    [sym_non_capturing_group] = STATE(3),
    [sym_assertion] = STATE(3),
    [sym_character_class] = STATE(3),
    [aux_sym_term_repeat1] = STATE(12),
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
  },
  [4] = {
    [sym_pattern] = STATE(15),
    [sym_disjunction] = STATE(9),
    [sym_term] = STATE(16),
    [sym_atom] = STATE(18),
    [sym_non_capturing_group] = STATE(3),
    [sym_assertion] = STATE(3),
    [sym_character_class] = STATE(3),
    [aux_sym_disjunction_repeat1] = STATE(17),
    [aux_sym_term_repeat1] = STATE(18),
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
  },
  [6] = {
    [anon_sym_EQ] = ACTIONS(29),
    [anon_sym_BANG] = ACTIONS(29),
    [anon_sym_LT_EQ] = ACTIONS(29),
    [anon_sym_LT_BANG] = ACTIONS(29),
  },
  [7] = {
    [sym_class_range] = STATE(23),
    [aux_sym_character_class_repeat1] = STATE(23),
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
    [aux_sym_disjunction_repeat1] = STATE(24),
    [ts_builtin_sym_end] = ACTIONS(39),
    [anon_sym_PIPE] = ACTIONS(5),
  },
  [11] = {
    [aux_sym_disjunction_repeat1] = STATE(25),
    [ts_builtin_sym_end] = ACTIONS(41),
    [anon_sym_PIPE] = ACTIONS(5),
  },
  [12] = {
    [sym_atom] = STATE(26),
    [sym_non_capturing_group] = STATE(3),
    [sym_assertion] = STATE(3),
    [sym_character_class] = STATE(3),
    [aux_sym_term_repeat1] = STATE(26),
    [ts_builtin_sym_end] = ACTIONS(43),
    [anon_sym_PIPE] = ACTIONS(43),
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
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(45),
    [anon_sym_PIPE] = ACTIONS(45),
    [anon_sym_RPAREN] = ACTIONS(45),
  },
  [14] = {
    [sym_term] = STATE(13),
    [sym_atom] = STATE(18),
    [sym_non_capturing_group] = STATE(3),
    [sym_assertion] = STATE(3),
    [sym_character_class] = STATE(3),
    [aux_sym_term_repeat1] = STATE(18),
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
  [15] = {
    [anon_sym_RPAREN] = ACTIONS(47),
  },
  [16] = {
    [aux_sym_disjunction_repeat1] = STATE(28),
    [anon_sym_PIPE] = ACTIONS(23),
    [anon_sym_RPAREN] = ACTIONS(39),
  },
  [17] = {
    [aux_sym_disjunction_repeat1] = STATE(29),
    [anon_sym_PIPE] = ACTIONS(23),
    [anon_sym_RPAREN] = ACTIONS(41),
  },
  [18] = {
    [sym_atom] = STATE(30),
    [sym_non_capturing_group] = STATE(3),
    [sym_assertion] = STATE(3),
    [sym_character_class] = STATE(3),
    [aux_sym_term_repeat1] = STATE(30),
    [anon_sym_PIPE] = ACTIONS(43),
    [anon_sym_DOT] = ACTIONS(7),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(9),
    [anon_sym_RPAREN] = ACTIONS(43),
    [anon_sym_CARET] = ACTIONS(11),
    [anon_sym_DOLLAR] = ACTIONS(11),
    [anon_sym_BSLASHb] = ACTIONS(11),
    [anon_sym_BSLASHB] = ACTIONS(11),
    [anon_sym_LPAREN_QMARK] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [sym_pattern_character] = ACTIONS(7),
  },
  [19] = {
    [sym_pattern] = STATE(31),
    [sym_disjunction] = STATE(9),
    [sym_term] = STATE(16),
    [sym_atom] = STATE(18),
    [sym_non_capturing_group] = STATE(3),
    [sym_assertion] = STATE(3),
    [sym_character_class] = STATE(3),
    [aux_sym_disjunction_repeat1] = STATE(17),
    [aux_sym_term_repeat1] = STATE(18),
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
  [20] = {
    [sym_class_range] = STATE(33),
    [aux_sym_character_class_repeat1] = STATE(33),
    [anon_sym_RBRACK] = ACTIONS(49),
    [sym_class_atom] = ACTIONS(51),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(53),
    [anon_sym_PIPE] = ACTIONS(53),
    [anon_sym_DOT] = ACTIONS(53),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(53),
    [anon_sym_RPAREN] = ACTIONS(53),
    [anon_sym_CARET] = ACTIONS(53),
    [anon_sym_DOLLAR] = ACTIONS(53),
    [anon_sym_BSLASHb] = ACTIONS(53),
    [anon_sym_BSLASHB] = ACTIONS(53),
    [anon_sym_LPAREN_QMARK] = ACTIONS(55),
    [anon_sym_LBRACK] = ACTIONS(53),
    [sym_pattern_character] = ACTIONS(53),
  },
  [22] = {
    [anon_sym_RBRACK] = ACTIONS(57),
    [anon_sym_DASH] = ACTIONS(59),
    [sym_class_atom] = ACTIONS(57),
  },
  [23] = {
    [sym_class_range] = STATE(35),
    [aux_sym_character_class_repeat1] = STATE(35),
    [anon_sym_RBRACK] = ACTIONS(49),
    [sym_class_atom] = ACTIONS(51),
  },
  [24] = {
    [aux_sym_disjunction_repeat1] = STATE(25),
    [ts_builtin_sym_end] = ACTIONS(61),
    [anon_sym_PIPE] = ACTIONS(5),
  },
  [25] = {
    [aux_sym_disjunction_repeat1] = STATE(25),
    [ts_builtin_sym_end] = ACTIONS(45),
    [anon_sym_PIPE] = ACTIONS(63),
  },
  [26] = {
    [sym_atom] = STATE(26),
    [sym_non_capturing_group] = STATE(3),
    [sym_assertion] = STATE(3),
    [sym_character_class] = STATE(3),
    [aux_sym_term_repeat1] = STATE(26),
    [ts_builtin_sym_end] = ACTIONS(66),
    [anon_sym_PIPE] = ACTIONS(66),
    [anon_sym_DOT] = ACTIONS(68),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(71),
    [anon_sym_CARET] = ACTIONS(74),
    [anon_sym_DOLLAR] = ACTIONS(74),
    [anon_sym_BSLASHb] = ACTIONS(74),
    [anon_sym_BSLASHB] = ACTIONS(74),
    [anon_sym_LPAREN_QMARK] = ACTIONS(77),
    [anon_sym_LBRACK] = ACTIONS(80),
    [sym_pattern_character] = ACTIONS(68),
  },
  [27] = {
    [ts_builtin_sym_end] = ACTIONS(83),
    [anon_sym_PIPE] = ACTIONS(83),
    [anon_sym_DOT] = ACTIONS(83),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(83),
    [anon_sym_RPAREN] = ACTIONS(83),
    [anon_sym_CARET] = ACTIONS(83),
    [anon_sym_DOLLAR] = ACTIONS(83),
    [anon_sym_BSLASHb] = ACTIONS(83),
    [anon_sym_BSLASHB] = ACTIONS(83),
    [anon_sym_LPAREN_QMARK] = ACTIONS(85),
    [anon_sym_LBRACK] = ACTIONS(83),
    [sym_pattern_character] = ACTIONS(83),
  },
  [28] = {
    [aux_sym_disjunction_repeat1] = STATE(29),
    [anon_sym_PIPE] = ACTIONS(23),
    [anon_sym_RPAREN] = ACTIONS(61),
  },
  [29] = {
    [aux_sym_disjunction_repeat1] = STATE(29),
    [anon_sym_PIPE] = ACTIONS(87),
    [anon_sym_RPAREN] = ACTIONS(45),
  },
  [30] = {
    [sym_atom] = STATE(30),
    [sym_non_capturing_group] = STATE(3),
    [sym_assertion] = STATE(3),
    [sym_character_class] = STATE(3),
    [aux_sym_term_repeat1] = STATE(30),
    [anon_sym_PIPE] = ACTIONS(66),
    [anon_sym_DOT] = ACTIONS(68),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(71),
    [anon_sym_RPAREN] = ACTIONS(66),
    [anon_sym_CARET] = ACTIONS(74),
    [anon_sym_DOLLAR] = ACTIONS(74),
    [anon_sym_BSLASHb] = ACTIONS(74),
    [anon_sym_BSLASHB] = ACTIONS(74),
    [anon_sym_LPAREN_QMARK] = ACTIONS(77),
    [anon_sym_LBRACK] = ACTIONS(80),
    [sym_pattern_character] = ACTIONS(68),
  },
  [31] = {
    [anon_sym_RPAREN] = ACTIONS(90),
  },
  [32] = {
    [ts_builtin_sym_end] = ACTIONS(92),
    [anon_sym_PIPE] = ACTIONS(92),
    [anon_sym_DOT] = ACTIONS(92),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(92),
    [anon_sym_RPAREN] = ACTIONS(92),
    [anon_sym_CARET] = ACTIONS(92),
    [anon_sym_DOLLAR] = ACTIONS(92),
    [anon_sym_BSLASHb] = ACTIONS(92),
    [anon_sym_BSLASHB] = ACTIONS(92),
    [anon_sym_LPAREN_QMARK] = ACTIONS(94),
    [anon_sym_LBRACK] = ACTIONS(92),
    [sym_pattern_character] = ACTIONS(92),
  },
  [33] = {
    [sym_class_range] = STATE(35),
    [aux_sym_character_class_repeat1] = STATE(35),
    [anon_sym_RBRACK] = ACTIONS(96),
    [sym_class_atom] = ACTIONS(51),
  },
  [34] = {
    [sym_class_atom] = ACTIONS(98),
  },
  [35] = {
    [sym_class_range] = STATE(35),
    [aux_sym_character_class_repeat1] = STATE(35),
    [anon_sym_RBRACK] = ACTIONS(100),
    [sym_class_atom] = ACTIONS(102),
  },
  [36] = {
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
  },
  [37] = {
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
    [sym_pattern_character] = ACTIONS(109),
  },
  [38] = {
    [anon_sym_RBRACK] = ACTIONS(113),
    [sym_class_atom] = ACTIONS(113),
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
  [23] = {.count = 1, .reusable = true}, SHIFT(14),
  [25] = {.count = 1, .reusable = true}, REDUCE(sym_assertion, 1),
  [27] = {.count = 1, .reusable = false}, REDUCE(sym_assertion, 1),
  [29] = {.count = 1, .reusable = true}, SHIFT(19),
  [31] = {.count = 1, .reusable = true}, SHIFT(20),
  [33] = {.count = 1, .reusable = true}, SHIFT(21),
  [35] = {.count = 1, .reusable = false}, SHIFT(22),
  [37] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [39] = {.count = 1, .reusable = true}, REDUCE(sym_pattern, 1),
  [41] = {.count = 1, .reusable = true}, REDUCE(sym_disjunction, 1),
  [43] = {.count = 1, .reusable = true}, REDUCE(sym_term, 1),
  [45] = {.count = 1, .reusable = true}, REDUCE(aux_sym_disjunction_repeat1, 2),
  [47] = {.count = 1, .reusable = true}, SHIFT(27),
  [49] = {.count = 1, .reusable = true}, SHIFT(32),
  [51] = {.count = 1, .reusable = true}, SHIFT(22),
  [53] = {.count = 1, .reusable = true}, REDUCE(sym_character_class, 2),
  [55] = {.count = 1, .reusable = false}, REDUCE(sym_character_class, 2),
  [57] = {.count = 1, .reusable = true}, REDUCE(sym_class_range, 1),
  [59] = {.count = 1, .reusable = true}, SHIFT(34),
  [61] = {.count = 1, .reusable = true}, REDUCE(sym_disjunction, 2),
  [63] = {.count = 2, .reusable = true}, REDUCE(aux_sym_disjunction_repeat1, 2), SHIFT_REPEAT(2),
  [66] = {.count = 1, .reusable = true}, REDUCE(aux_sym_term_repeat1, 2),
  [68] = {.count = 2, .reusable = true}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(3),
  [71] = {.count = 2, .reusable = true}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(4),
  [74] = {.count = 2, .reusable = true}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(5),
  [77] = {.count = 2, .reusable = false}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(6),
  [80] = {.count = 2, .reusable = true}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(7),
  [83] = {.count = 1, .reusable = true}, REDUCE(sym_non_capturing_group, 3),
  [85] = {.count = 1, .reusable = false}, REDUCE(sym_non_capturing_group, 3),
  [87] = {.count = 2, .reusable = true}, REDUCE(aux_sym_disjunction_repeat1, 2), SHIFT_REPEAT(14),
  [90] = {.count = 1, .reusable = true}, SHIFT(36),
  [92] = {.count = 1, .reusable = true}, REDUCE(sym_character_class, 3),
  [94] = {.count = 1, .reusable = false}, REDUCE(sym_character_class, 3),
  [96] = {.count = 1, .reusable = true}, SHIFT(37),
  [98] = {.count = 1, .reusable = true}, SHIFT(38),
  [100] = {.count = 1, .reusable = true}, REDUCE(aux_sym_character_class_repeat1, 2),
  [102] = {.count = 2, .reusable = true}, REDUCE(aux_sym_character_class_repeat1, 2), SHIFT_REPEAT(22),
  [105] = {.count = 1, .reusable = true}, REDUCE(sym_assertion, 4),
  [107] = {.count = 1, .reusable = false}, REDUCE(sym_assertion, 4),
  [109] = {.count = 1, .reusable = true}, REDUCE(sym_character_class, 4),
  [111] = {.count = 1, .reusable = false}, REDUCE(sym_character_class, 4),
  [113] = {.count = 1, .reusable = true}, REDUCE(sym_class_range, 3),
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
