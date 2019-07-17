#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 75
#define SYMBOL_COUNT 59
#define ALIAS_COUNT 3
#define TOKEN_COUNT 39
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
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
  aux_sym_character_class_escape_token1 = 31,
  aux_sym_character_class_escape_token2 = 32,
  sym_unicode_property = 33,
  sym_control_escape = 34,
  sym_control_letter_escape = 35,
  sym_identity_escape = 36,
  sym_group_name = 37,
  sym_decimal_digits = 38,
  sym_pattern = 39,
  sym_disjunction = 40,
  sym_term = 41,
  sym_start_assertion = 42,
  sym_lookahead_assertion = 43,
  sym_character_class = 44,
  sym_class_range = 45,
  sym_anonymous_capturing_group = 46,
  sym_named_capturing_group = 47,
  sym_non_capturing_group = 48,
  sym_zero_or_more = 49,
  sym_one_or_more = 50,
  sym_optional = 51,
  sym_count_quantifier = 52,
  sym_backreference_escape = 53,
  sym_character_class_escape = 54,
  sym_unicode_property_value_expression = 55,
  aux_sym_disjunction_repeat1 = 56,
  aux_sym_term_repeat1 = 57,
  aux_sym_character_class_repeat1 = 58,
  alias_sym_lazy = 59,
  alias_sym_unicode_property_value = 60,
  alias_sym_unicode_property_name = 61,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
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
  [anon_sym_BSLASH_DASH] = "identity_escape",
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
  [aux_sym_character_class_escape_token1] = "character_class_escape_token1",
  [aux_sym_character_class_escape_token2] = "character_class_escape_token2",
  [sym_unicode_property] = "unicode_property",
  [sym_control_escape] = "control_escape",
  [sym_control_letter_escape] = "control_letter_escape",
  [sym_identity_escape] = "identity_escape",
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
  [alias_sym_lazy] = "lazy",
  [alias_sym_unicode_property_value] = "unicode_property_value",
  [alias_sym_unicode_property_name] = "unicode_property_name",
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
    .named = true,
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
  [aux_sym_character_class_escape_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_character_class_escape_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_unicode_property] = {
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
  [sym_identity_escape] = {
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
  [alias_sym_lazy] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_unicode_property_value] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_unicode_property_name] = {
    .visible = true,
    .named = true,
  },
};

static TSSymbol ts_alias_sequences[9][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [1] = {
    [0] = sym_class_character,
  },
  [2] = {
    [1] = alias_sym_lazy,
  },
  [3] = {
    [0] = alias_sym_unicode_property_value,
  },
  [4] = {
    [2] = sym_class_character,
  },
  [5] = {
    [0] = sym_class_character,
    [2] = sym_class_character,
  },
  [6] = {
    [3] = alias_sym_lazy,
  },
  [7] = {
    [0] = alias_sym_unicode_property_name,
    [2] = alias_sym_unicode_property_value,
  },
  [8] = {
    [5] = alias_sym_lazy,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0) ADVANCE(12);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '!') ADVANCE(21);
      if (lookahead == '$') ADVANCE(16);
      if (lookahead == '(') ADVANCE(33);
      if (lookahead == ')') ADVANCE(24);
      if (lookahead == '*') ADVANCE(37);
      if (lookahead == '+') ADVANCE(39);
      if (lookahead == ',') ADVANCE(41);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == '=') ADVANCE(20);
      if (lookahead == '>') ADVANCE(35);
      if (lookahead == '?') ADVANCE(38);
      if (lookahead == '[') ADVANCE(26);
      if (lookahead == '\\') ADVANCE(8);
      if (lookahead == ']') ADVANCE(27);
      if (lookahead == '^') ADVANCE(15);
      if (lookahead == '{') ADVANCE(40);
      if (lookahead == '|') ADVANCE(13);
      if (lookahead == '}') ADVANCE(42);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(12);
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '$') ADVANCE(16);
      if (lookahead == '(') ADVANCE(33);
      if (lookahead == ')') ADVANCE(24);
      if (lookahead == '*') ADVANCE(37);
      if (lookahead == '+') ADVANCE(39);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == '?') ADVANCE(38);
      if (lookahead == '[') ADVANCE(26);
      if (lookahead == '\\') ADVANCE(10);
      if (lookahead == '^') ADVANCE(15);
      if (lookahead == '{') ADVANCE(40);
      if (lookahead == '|') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != ']' &&
          lookahead != '}') ADVANCE(25);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '!') ADVANCE(21);
      if (lookahead == ',') ADVANCE(41);
      if (lookahead == '<') ADVANCE(7);
      if (lookahead == '=') ADVANCE(20);
      if (lookahead == '>') ADVANCE(35);
      if (lookahead == '}') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(31);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead == ']') ADVANCE(27);
      if (lookahead == '^') ADVANCE(15);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(32);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead == ']') ADVANCE(27);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(23);
      if (lookahead == '=') ADVANCE(22);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == 'B') ADVANCE(18);
      if (lookahead == 'b') ADVANCE(17);
      if (lookahead == 'c') ADVANCE(51);
      if (lookahead == 'k') ADVANCE(43);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(46);
      if (lookahead == '0' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'v') ADVANCE(48);
      if (lookahead == 'D' ||
          lookahead == 'S' ||
          lookahead == 'W' ||
          lookahead == 'd' ||
          lookahead == 's' ||
          lookahead == 'w') ADVANCE(45);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(11);
      if (lookahead != 0) ADVANCE(50);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == 'c') ADVANCE(51);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(46);
      if (lookahead == 'D' ||
          lookahead == 'S' ||
          lookahead == 'W' ||
          lookahead == 'd' ||
          lookahead == 's' ||
          lookahead == 'w') ADVANCE(45);
      if (lookahead == '0' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          ('r' <= lookahead && lookahead <= 't') ||
          lookahead == 'v') ADVANCE(48);
      if (lookahead != 0 &&
          (lookahead < '1' || '9' < lookahead) &&
          lookahead != 'k') ADVANCE(50);
      END_STATE();
    case 10:
      if (lookahead == 'B') ADVANCE(18);
      if (lookahead == 'b') ADVANCE(17);
      if (lookahead == 'c') ADVANCE(51);
      if (lookahead == 'k') ADVANCE(43);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(46);
      if (lookahead == '0' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'v') ADVANCE(48);
      if (lookahead == 'D' ||
          lookahead == 'S' ||
          lookahead == 'W' ||
          lookahead == 'd' ||
          lookahead == 's' ||
          lookahead == 'w') ADVANCE(45);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(11);
      if (lookahead != 0) ADVANCE(50);
      END_STATE();
    case 11:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_any_character);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_end_assertion);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_boundary_assertion);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_non_boundary_assertion);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_LPAREN_QMARK);
      if (lookahead == ':') ADVANCE(36);
      if (lookahead == '<') ADVANCE(34);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_LT_BANG);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_pattern_character);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_BSLASH_DASH);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_class_character);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_class_character);
      if (lookahead == '\n') ADVANCE(31);
      if (lookahead == '^') ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != '\\' &&
          lookahead != ']') ADVANCE(30);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_class_character);
      if (lookahead == '\n') ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != '\\' &&
          lookahead != ']') ADVANCE(30);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '?') ADVANCE(19);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_LPAREN_QMARK_LT);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_LPAREN_QMARK_COLON);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_BSLASHk);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_decimal_escape);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_character_class_escape_token1);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_character_class_escape_token2);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_unicode_property);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_control_escape);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_control_letter_escape);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_identity_escape);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_identity_escape);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_group_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_decimal_digits);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 1},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 5},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 6},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 6},
  [29] = {.lex_state = 6},
  [30] = {.lex_state = 6},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 6},
  [45] = {.lex_state = 6},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 6},
  [48] = {.lex_state = 6},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 4},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 5},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 6},
  [58] = {.lex_state = 6},
  [59] = {.lex_state = 6},
  [60] = {.lex_state = 6},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 1},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 1},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 1},
  [70] = {.lex_state = 6},
  [71] = {.lex_state = 6},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 5},
  [74] = {.lex_state = 0},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [anon_sym_GT] = ACTIONS(1),
    [sym_identity_escape] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_boundary_assertion] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [aux_sym_character_class_escape_token1] = ACTIONS(1),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(1),
    [anon_sym_BSLASH_DASH] = ACTIONS(1),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(1),
    [sym_control_escape] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_end_assertion] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [sym_non_boundary_assertion] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [aux_sym_character_class_escape_token2] = ACTIONS(1),
    [anon_sym_BSLASHk] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [sym_control_letter_escape] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [sym_pattern_character] = ACTIONS(1),
    [sym_any_character] = ACTIONS(1),
    [anon_sym_LPAREN_QMARK] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [sym_decimal_escape] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
  },
  [1] = {
    [aux_sym_disjunction_repeat1] = STATE(13),
    [aux_sym_term_repeat1] = STATE(14),
    [sym_start_assertion] = STATE(2),
    [sym_lookahead_assertion] = STATE(2),
    [sym_named_capturing_group] = STATE(2),
    [sym_non_capturing_group] = STATE(2),
    [sym_character_class] = STATE(2),
    [sym_backreference_escape] = STATE(2),
    [sym_character_class_escape] = STATE(2),
    [sym_pattern] = STATE(15),
    [sym_disjunction] = STATE(16),
    [sym_term] = STATE(17),
    [sym_anonymous_capturing_group] = STATE(2),
    [sym_end_assertion] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(5),
    [sym_non_boundary_assertion] = ACTIONS(3),
    [sym_identity_escape] = ACTIONS(7),
    [aux_sym_character_class_escape_token2] = ACTIONS(9),
    [anon_sym_BSLASHk] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_CARET] = ACTIONS(15),
    [sym_control_letter_escape] = ACTIONS(3),
    [sym_boundary_assertion] = ACTIONS(3),
    [aux_sym_character_class_escape_token1] = ACTIONS(17),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(19),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(21),
    [sym_pattern_character] = ACTIONS(3),
    [sym_any_character] = ACTIONS(3),
    [anon_sym_LPAREN_QMARK] = ACTIONS(23),
    [sym_control_escape] = ACTIONS(7),
    [sym_decimal_escape] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(25),
  },
  [2] = {
    [sym_count_quantifier] = STATE(22),
    [sym_zero_or_more] = STATE(22),
    [sym_one_or_more] = STATE(22),
    [sym_optional] = STATE(22),
    [sym_identity_escape] = ACTIONS(27),
    [anon_sym_RPAREN] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_CARET] = ACTIONS(29),
    [sym_boundary_assertion] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [aux_sym_character_class_escape_token1] = ACTIONS(29),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(29),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(29),
    [sym_control_escape] = ACTIONS(27),
    [sym_end_assertion] = ACTIONS(29),
    [anon_sym_PIPE] = ACTIONS(29),
    [sym_non_boundary_assertion] = ACTIONS(29),
    [aux_sym_character_class_escape_token2] = ACTIONS(29),
    [anon_sym_BSLASHk] = ACTIONS(29),
    [anon_sym_STAR] = ACTIONS(33),
    [sym_control_letter_escape] = ACTIONS(29),
    [ts_builtin_sym_end] = ACTIONS(29),
    [sym_pattern_character] = ACTIONS(29),
    [sym_any_character] = ACTIONS(29),
    [anon_sym_LPAREN_QMARK] = ACTIONS(27),
    [anon_sym_PLUS] = ACTIONS(35),
    [sym_decimal_escape] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_QMARK] = ACTIONS(37),
  },
  [3] = {
    [sym_start_assertion] = STATE(2),
    [sym_lookahead_assertion] = STATE(2),
    [sym_named_capturing_group] = STATE(2),
    [sym_non_capturing_group] = STATE(2),
    [sym_backreference_escape] = STATE(2),
    [sym_character_class_escape] = STATE(2),
    [sym_term] = STATE(23),
    [sym_anonymous_capturing_group] = STATE(2),
    [aux_sym_term_repeat1] = STATE(14),
    [sym_character_class] = STATE(2),
    [sym_identity_escape] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_CARET] = ACTIONS(15),
    [sym_boundary_assertion] = ACTIONS(3),
    [aux_sym_character_class_escape_token1] = ACTIONS(17),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(19),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(21),
    [sym_control_escape] = ACTIONS(7),
    [sym_end_assertion] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(39),
    [sym_non_boundary_assertion] = ACTIONS(3),
    [aux_sym_character_class_escape_token2] = ACTIONS(9),
    [anon_sym_BSLASHk] = ACTIONS(11),
    [sym_control_letter_escape] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(39),
    [sym_pattern_character] = ACTIONS(3),
    [sym_any_character] = ACTIONS(3),
    [anon_sym_LPAREN_QMARK] = ACTIONS(23),
    [sym_decimal_escape] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(25),
  },
  [4] = {
    [anon_sym_LBRACE] = ACTIONS(41),
  },
  [5] = {
    [sym_group_name] = ACTIONS(43),
  },
  [6] = {
    [sym_class_range] = STATE(30),
    [sym_character_class_escape] = STATE(26),
    [aux_sym_character_class_repeat1] = STATE(30),
    [anon_sym_RBRACK] = ACTIONS(45),
    [sym_identity_escape] = ACTIONS(47),
    [aux_sym_character_class_escape_token2] = ACTIONS(49),
    [sym_class_character] = ACTIONS(47),
    [sym_control_letter_escape] = ACTIONS(47),
    [anon_sym_CARET] = ACTIONS(51),
    [aux_sym_character_class_escape_token1] = ACTIONS(53),
    [anon_sym_BSLASH_DASH] = ACTIONS(47),
    [anon_sym_DASH] = ACTIONS(55),
    [sym_control_escape] = ACTIONS(47),
  },
  [7] = {
    [sym_identity_escape] = ACTIONS(57),
    [anon_sym_RPAREN] = ACTIONS(59),
    [anon_sym_LBRACK] = ACTIONS(59),
    [anon_sym_CARET] = ACTIONS(59),
    [sym_boundary_assertion] = ACTIONS(59),
    [anon_sym_LBRACE] = ACTIONS(59),
    [aux_sym_character_class_escape_token1] = ACTIONS(59),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(59),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(59),
    [sym_control_escape] = ACTIONS(57),
    [sym_end_assertion] = ACTIONS(59),
    [anon_sym_PIPE] = ACTIONS(59),
    [sym_non_boundary_assertion] = ACTIONS(59),
    [aux_sym_character_class_escape_token2] = ACTIONS(59),
    [anon_sym_BSLASHk] = ACTIONS(59),
    [anon_sym_STAR] = ACTIONS(59),
    [sym_control_letter_escape] = ACTIONS(59),
    [ts_builtin_sym_end] = ACTIONS(59),
    [sym_pattern_character] = ACTIONS(59),
    [sym_any_character] = ACTIONS(59),
    [anon_sym_LPAREN_QMARK] = ACTIONS(57),
    [anon_sym_PLUS] = ACTIONS(59),
    [sym_decimal_escape] = ACTIONS(59),
    [anon_sym_LPAREN] = ACTIONS(57),
    [anon_sym_QMARK] = ACTIONS(59),
  },
  [8] = {
    [sym_identity_escape] = ACTIONS(61),
    [anon_sym_RPAREN] = ACTIONS(63),
    [anon_sym_LBRACK] = ACTIONS(63),
    [anon_sym_CARET] = ACTIONS(63),
    [sym_boundary_assertion] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(63),
    [aux_sym_character_class_escape_token1] = ACTIONS(63),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(63),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(63),
    [sym_control_escape] = ACTIONS(61),
    [sym_end_assertion] = ACTIONS(63),
    [anon_sym_PIPE] = ACTIONS(63),
    [sym_non_boundary_assertion] = ACTIONS(63),
    [aux_sym_character_class_escape_token2] = ACTIONS(63),
    [anon_sym_BSLASHk] = ACTIONS(63),
    [anon_sym_STAR] = ACTIONS(63),
    [sym_control_letter_escape] = ACTIONS(63),
    [ts_builtin_sym_end] = ACTIONS(63),
    [sym_pattern_character] = ACTIONS(63),
    [sym_any_character] = ACTIONS(63),
    [anon_sym_LPAREN_QMARK] = ACTIONS(61),
    [anon_sym_PLUS] = ACTIONS(63),
    [sym_decimal_escape] = ACTIONS(63),
    [anon_sym_LPAREN] = ACTIONS(61),
    [anon_sym_QMARK] = ACTIONS(63),
  },
  [9] = {
    [sym_group_name] = ACTIONS(65),
  },
  [10] = {
    [sym_start_assertion] = STATE(2),
    [sym_lookahead_assertion] = STATE(2),
    [sym_named_capturing_group] = STATE(2),
    [sym_non_capturing_group] = STATE(2),
    [sym_backreference_escape] = STATE(2),
    [sym_character_class_escape] = STATE(2),
    [sym_disjunction] = STATE(16),
    [sym_term] = STATE(17),
    [sym_anonymous_capturing_group] = STATE(2),
    [aux_sym_disjunction_repeat1] = STATE(13),
    [aux_sym_term_repeat1] = STATE(14),
    [sym_pattern] = STATE(32),
    [sym_character_class] = STATE(2),
    [sym_identity_escape] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_CARET] = ACTIONS(15),
    [sym_boundary_assertion] = ACTIONS(3),
    [aux_sym_character_class_escape_token1] = ACTIONS(17),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(19),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(21),
    [sym_control_escape] = ACTIONS(7),
    [sym_end_assertion] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(5),
    [sym_non_boundary_assertion] = ACTIONS(3),
    [aux_sym_character_class_escape_token2] = ACTIONS(9),
    [anon_sym_BSLASHk] = ACTIONS(11),
    [sym_control_letter_escape] = ACTIONS(3),
    [sym_pattern_character] = ACTIONS(3),
    [sym_any_character] = ACTIONS(3),
    [anon_sym_LPAREN_QMARK] = ACTIONS(23),
    [sym_decimal_escape] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(25),
  },
  [11] = {
    [anon_sym_LT_EQ] = ACTIONS(67),
    [anon_sym_BANG] = ACTIONS(67),
    [anon_sym_LT_BANG] = ACTIONS(67),
    [anon_sym_EQ] = ACTIONS(67),
  },
  [12] = {
    [sym_start_assertion] = STATE(2),
    [sym_lookahead_assertion] = STATE(2),
    [sym_named_capturing_group] = STATE(2),
    [sym_non_capturing_group] = STATE(2),
    [sym_backreference_escape] = STATE(2),
    [sym_character_class_escape] = STATE(2),
    [sym_disjunction] = STATE(16),
    [sym_term] = STATE(17),
    [sym_anonymous_capturing_group] = STATE(2),
    [aux_sym_disjunction_repeat1] = STATE(13),
    [aux_sym_term_repeat1] = STATE(14),
    [sym_pattern] = STATE(34),
    [sym_character_class] = STATE(2),
    [sym_identity_escape] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_CARET] = ACTIONS(15),
    [sym_boundary_assertion] = ACTIONS(3),
    [aux_sym_character_class_escape_token1] = ACTIONS(17),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(19),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(21),
    [sym_control_escape] = ACTIONS(7),
    [sym_end_assertion] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(5),
    [sym_non_boundary_assertion] = ACTIONS(3),
    [aux_sym_character_class_escape_token2] = ACTIONS(9),
    [anon_sym_BSLASHk] = ACTIONS(11),
    [sym_control_letter_escape] = ACTIONS(3),
    [sym_pattern_character] = ACTIONS(3),
    [sym_any_character] = ACTIONS(3),
    [anon_sym_LPAREN_QMARK] = ACTIONS(23),
    [sym_decimal_escape] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(25),
  },
  [13] = {
    [aux_sym_disjunction_repeat1] = STATE(35),
    [anon_sym_PIPE] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(69),
    [anon_sym_RPAREN] = ACTIONS(69),
  },
  [14] = {
    [sym_start_assertion] = STATE(2),
    [sym_lookahead_assertion] = STATE(2),
    [sym_named_capturing_group] = STATE(2),
    [sym_non_capturing_group] = STATE(2),
    [sym_backreference_escape] = STATE(2),
    [sym_character_class_escape] = STATE(2),
    [sym_character_class] = STATE(2),
    [aux_sym_term_repeat1] = STATE(36),
    [sym_anonymous_capturing_group] = STATE(2),
    [sym_identity_escape] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(71),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_CARET] = ACTIONS(15),
    [sym_boundary_assertion] = ACTIONS(3),
    [aux_sym_character_class_escape_token1] = ACTIONS(17),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(19),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(21),
    [sym_control_escape] = ACTIONS(7),
    [sym_end_assertion] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(71),
    [sym_non_boundary_assertion] = ACTIONS(3),
    [aux_sym_character_class_escape_token2] = ACTIONS(9),
    [anon_sym_BSLASHk] = ACTIONS(11),
    [sym_control_letter_escape] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(71),
    [sym_pattern_character] = ACTIONS(3),
    [sym_any_character] = ACTIONS(3),
    [anon_sym_LPAREN_QMARK] = ACTIONS(23),
    [sym_decimal_escape] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(25),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(73),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(75),
    [anon_sym_RPAREN] = ACTIONS(75),
  },
  [17] = {
    [aux_sym_disjunction_repeat1] = STATE(37),
    [anon_sym_PIPE] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(75),
    [anon_sym_RPAREN] = ACTIONS(75),
  },
  [18] = {
    [sym_decimal_digits] = ACTIONS(77),
  },
  [19] = {
    [sym_identity_escape] = ACTIONS(79),
    [anon_sym_RPAREN] = ACTIONS(81),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_CARET] = ACTIONS(81),
    [sym_boundary_assertion] = ACTIONS(81),
    [aux_sym_character_class_escape_token1] = ACTIONS(81),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(81),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(81),
    [sym_control_escape] = ACTIONS(79),
    [sym_end_assertion] = ACTIONS(81),
    [anon_sym_PIPE] = ACTIONS(81),
    [sym_non_boundary_assertion] = ACTIONS(81),
    [aux_sym_character_class_escape_token2] = ACTIONS(81),
    [anon_sym_BSLASHk] = ACTIONS(81),
    [sym_control_letter_escape] = ACTIONS(81),
    [ts_builtin_sym_end] = ACTIONS(81),
    [sym_pattern_character] = ACTIONS(81),
    [sym_any_character] = ACTIONS(81),
    [anon_sym_LPAREN_QMARK] = ACTIONS(79),
    [sym_decimal_escape] = ACTIONS(81),
    [anon_sym_LPAREN] = ACTIONS(79),
    [anon_sym_QMARK] = ACTIONS(83),
  },
  [20] = {
    [sym_identity_escape] = ACTIONS(85),
    [anon_sym_RPAREN] = ACTIONS(87),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_CARET] = ACTIONS(87),
    [sym_boundary_assertion] = ACTIONS(87),
    [aux_sym_character_class_escape_token1] = ACTIONS(87),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(87),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(87),
    [sym_control_escape] = ACTIONS(85),
    [sym_end_assertion] = ACTIONS(87),
    [anon_sym_PIPE] = ACTIONS(87),
    [sym_non_boundary_assertion] = ACTIONS(87),
    [aux_sym_character_class_escape_token2] = ACTIONS(87),
    [anon_sym_BSLASHk] = ACTIONS(87),
    [sym_control_letter_escape] = ACTIONS(87),
    [ts_builtin_sym_end] = ACTIONS(87),
    [sym_pattern_character] = ACTIONS(87),
    [sym_any_character] = ACTIONS(87),
    [anon_sym_LPAREN_QMARK] = ACTIONS(85),
    [sym_decimal_escape] = ACTIONS(87),
    [anon_sym_LPAREN] = ACTIONS(85),
    [anon_sym_QMARK] = ACTIONS(89),
  },
  [21] = {
    [sym_identity_escape] = ACTIONS(91),
    [anon_sym_RPAREN] = ACTIONS(93),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_CARET] = ACTIONS(93),
    [sym_boundary_assertion] = ACTIONS(93),
    [aux_sym_character_class_escape_token1] = ACTIONS(93),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(93),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(93),
    [sym_control_escape] = ACTIONS(91),
    [sym_end_assertion] = ACTIONS(93),
    [anon_sym_PIPE] = ACTIONS(93),
    [sym_non_boundary_assertion] = ACTIONS(93),
    [aux_sym_character_class_escape_token2] = ACTIONS(93),
    [anon_sym_BSLASHk] = ACTIONS(93),
    [sym_control_letter_escape] = ACTIONS(93),
    [ts_builtin_sym_end] = ACTIONS(93),
    [sym_pattern_character] = ACTIONS(93),
    [sym_any_character] = ACTIONS(93),
    [anon_sym_LPAREN_QMARK] = ACTIONS(91),
    [sym_decimal_escape] = ACTIONS(93),
    [anon_sym_LPAREN] = ACTIONS(91),
    [anon_sym_QMARK] = ACTIONS(95),
  },
  [22] = {
    [sym_identity_escape] = ACTIONS(97),
    [anon_sym_RPAREN] = ACTIONS(99),
    [anon_sym_LBRACK] = ACTIONS(99),
    [anon_sym_CARET] = ACTIONS(99),
    [sym_boundary_assertion] = ACTIONS(99),
    [aux_sym_character_class_escape_token1] = ACTIONS(99),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(99),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(99),
    [sym_control_escape] = ACTIONS(97),
    [sym_end_assertion] = ACTIONS(99),
    [anon_sym_PIPE] = ACTIONS(99),
    [sym_non_boundary_assertion] = ACTIONS(99),
    [aux_sym_character_class_escape_token2] = ACTIONS(99),
    [anon_sym_BSLASHk] = ACTIONS(99),
    [sym_control_letter_escape] = ACTIONS(99),
    [ts_builtin_sym_end] = ACTIONS(99),
    [sym_pattern_character] = ACTIONS(99),
    [sym_any_character] = ACTIONS(99),
    [anon_sym_LPAREN_QMARK] = ACTIONS(97),
    [sym_decimal_escape] = ACTIONS(99),
    [anon_sym_LPAREN] = ACTIONS(97),
  },
  [23] = {
    [anon_sym_PIPE] = ACTIONS(101),
    [ts_builtin_sym_end] = ACTIONS(101),
    [anon_sym_RPAREN] = ACTIONS(101),
  },
  [24] = {
    [sym_unicode_property_value_expression] = STATE(43),
    [sym_unicode_property] = ACTIONS(103),
  },
  [25] = {
    [sym_identity_escape] = ACTIONS(105),
    [anon_sym_RPAREN] = ACTIONS(107),
    [anon_sym_LBRACK] = ACTIONS(107),
    [anon_sym_CARET] = ACTIONS(107),
    [sym_boundary_assertion] = ACTIONS(107),
    [anon_sym_LBRACE] = ACTIONS(107),
    [aux_sym_character_class_escape_token1] = ACTIONS(107),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(107),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(107),
    [sym_control_escape] = ACTIONS(105),
    [sym_end_assertion] = ACTIONS(107),
    [anon_sym_PIPE] = ACTIONS(107),
    [sym_non_boundary_assertion] = ACTIONS(107),
    [aux_sym_character_class_escape_token2] = ACTIONS(107),
    [anon_sym_BSLASHk] = ACTIONS(107),
    [anon_sym_STAR] = ACTIONS(107),
    [sym_control_letter_escape] = ACTIONS(107),
    [ts_builtin_sym_end] = ACTIONS(107),
    [sym_pattern_character] = ACTIONS(107),
    [sym_any_character] = ACTIONS(107),
    [anon_sym_LPAREN_QMARK] = ACTIONS(105),
    [anon_sym_PLUS] = ACTIONS(107),
    [sym_decimal_escape] = ACTIONS(107),
    [anon_sym_LPAREN] = ACTIONS(105),
    [anon_sym_QMARK] = ACTIONS(107),
  },
  [26] = {
    [anon_sym_RBRACK] = ACTIONS(109),
    [aux_sym_character_class_escape_token1] = ACTIONS(109),
    [anon_sym_BSLASH_DASH] = ACTIONS(109),
    [sym_identity_escape] = ACTIONS(109),
    [aux_sym_character_class_escape_token2] = ACTIONS(109),
    [anon_sym_DASH] = ACTIONS(111),
    [sym_class_character] = ACTIONS(113),
    [sym_control_escape] = ACTIONS(109),
    [sym_control_letter_escape] = ACTIONS(109),
  },
  [27] = {
    [sym_identity_escape] = ACTIONS(115),
    [anon_sym_RPAREN] = ACTIONS(117),
    [anon_sym_LBRACK] = ACTIONS(117),
    [anon_sym_CARET] = ACTIONS(117),
    [sym_boundary_assertion] = ACTIONS(117),
    [anon_sym_LBRACE] = ACTIONS(117),
    [aux_sym_character_class_escape_token1] = ACTIONS(117),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(117),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(117),
    [sym_control_escape] = ACTIONS(115),
    [sym_end_assertion] = ACTIONS(117),
    [anon_sym_PIPE] = ACTIONS(117),
    [sym_non_boundary_assertion] = ACTIONS(117),
    [aux_sym_character_class_escape_token2] = ACTIONS(117),
    [anon_sym_BSLASHk] = ACTIONS(117),
    [anon_sym_STAR] = ACTIONS(117),
    [sym_control_letter_escape] = ACTIONS(117),
    [ts_builtin_sym_end] = ACTIONS(117),
    [sym_pattern_character] = ACTIONS(117),
    [sym_any_character] = ACTIONS(117),
    [anon_sym_LPAREN_QMARK] = ACTIONS(115),
    [anon_sym_PLUS] = ACTIONS(117),
    [sym_decimal_escape] = ACTIONS(117),
    [anon_sym_LPAREN] = ACTIONS(115),
    [anon_sym_QMARK] = ACTIONS(117),
  },
  [28] = {
    [anon_sym_RBRACK] = ACTIONS(119),
    [aux_sym_character_class_escape_token1] = ACTIONS(119),
    [anon_sym_BSLASH_DASH] = ACTIONS(119),
    [sym_identity_escape] = ACTIONS(119),
    [aux_sym_character_class_escape_token2] = ACTIONS(119),
    [anon_sym_DASH] = ACTIONS(121),
    [sym_class_character] = ACTIONS(123),
    [sym_control_escape] = ACTIONS(119),
    [sym_control_letter_escape] = ACTIONS(119),
  },
  [29] = {
    [sym_class_range] = STATE(47),
    [sym_character_class_escape] = STATE(26),
    [aux_sym_character_class_repeat1] = STATE(47),
    [aux_sym_character_class_escape_token1] = ACTIONS(53),
    [sym_identity_escape] = ACTIONS(47),
    [anon_sym_BSLASH_DASH] = ACTIONS(47),
    [anon_sym_RBRACK] = ACTIONS(125),
    [aux_sym_character_class_escape_token2] = ACTIONS(49),
    [anon_sym_DASH] = ACTIONS(55),
    [sym_class_character] = ACTIONS(127),
    [sym_control_escape] = ACTIONS(47),
    [sym_control_letter_escape] = ACTIONS(47),
  },
  [30] = {
    [sym_class_range] = STATE(48),
    [sym_character_class_escape] = STATE(26),
    [aux_sym_character_class_repeat1] = STATE(48),
    [aux_sym_character_class_escape_token1] = ACTIONS(53),
    [sym_identity_escape] = ACTIONS(47),
    [anon_sym_BSLASH_DASH] = ACTIONS(47),
    [anon_sym_RBRACK] = ACTIONS(125),
    [aux_sym_character_class_escape_token2] = ACTIONS(49),
    [anon_sym_DASH] = ACTIONS(55),
    [sym_class_character] = ACTIONS(127),
    [sym_control_escape] = ACTIONS(47),
    [sym_control_letter_escape] = ACTIONS(47),
  },
  [31] = {
    [anon_sym_GT] = ACTIONS(129),
  },
  [32] = {
    [anon_sym_RPAREN] = ACTIONS(131),
  },
  [33] = {
    [sym_start_assertion] = STATE(2),
    [sym_lookahead_assertion] = STATE(2),
    [sym_named_capturing_group] = STATE(2),
    [sym_non_capturing_group] = STATE(2),
    [sym_backreference_escape] = STATE(2),
    [sym_character_class_escape] = STATE(2),
    [sym_disjunction] = STATE(16),
    [sym_term] = STATE(17),
    [sym_anonymous_capturing_group] = STATE(2),
    [aux_sym_disjunction_repeat1] = STATE(13),
    [aux_sym_term_repeat1] = STATE(14),
    [sym_pattern] = STATE(51),
    [sym_character_class] = STATE(2),
    [sym_identity_escape] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_CARET] = ACTIONS(15),
    [sym_boundary_assertion] = ACTIONS(3),
    [aux_sym_character_class_escape_token1] = ACTIONS(17),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(19),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(21),
    [sym_control_escape] = ACTIONS(7),
    [sym_end_assertion] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(5),
    [sym_non_boundary_assertion] = ACTIONS(3),
    [aux_sym_character_class_escape_token2] = ACTIONS(9),
    [anon_sym_BSLASHk] = ACTIONS(11),
    [sym_control_letter_escape] = ACTIONS(3),
    [sym_pattern_character] = ACTIONS(3),
    [sym_any_character] = ACTIONS(3),
    [anon_sym_LPAREN_QMARK] = ACTIONS(23),
    [sym_decimal_escape] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(25),
  },
  [34] = {
    [anon_sym_RPAREN] = ACTIONS(133),
  },
  [35] = {
    [aux_sym_disjunction_repeat1] = STATE(35),
    [anon_sym_PIPE] = ACTIONS(135),
    [ts_builtin_sym_end] = ACTIONS(101),
    [anon_sym_RPAREN] = ACTIONS(101),
  },
  [36] = {
    [sym_start_assertion] = STATE(2),
    [sym_lookahead_assertion] = STATE(2),
    [sym_named_capturing_group] = STATE(2),
    [sym_non_capturing_group] = STATE(2),
    [sym_backreference_escape] = STATE(2),
    [sym_character_class_escape] = STATE(2),
    [sym_character_class] = STATE(2),
    [aux_sym_term_repeat1] = STATE(36),
    [sym_anonymous_capturing_group] = STATE(2),
    [sym_identity_escape] = ACTIONS(138),
    [anon_sym_RPAREN] = ACTIONS(99),
    [anon_sym_LBRACK] = ACTIONS(141),
    [anon_sym_CARET] = ACTIONS(144),
    [sym_boundary_assertion] = ACTIONS(147),
    [aux_sym_character_class_escape_token1] = ACTIONS(150),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(153),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(156),
    [sym_control_escape] = ACTIONS(138),
    [sym_end_assertion] = ACTIONS(147),
    [anon_sym_PIPE] = ACTIONS(99),
    [sym_non_boundary_assertion] = ACTIONS(147),
    [aux_sym_character_class_escape_token2] = ACTIONS(159),
    [anon_sym_BSLASHk] = ACTIONS(162),
    [sym_control_letter_escape] = ACTIONS(147),
    [ts_builtin_sym_end] = ACTIONS(99),
    [sym_pattern_character] = ACTIONS(147),
    [sym_any_character] = ACTIONS(147),
    [anon_sym_LPAREN_QMARK] = ACTIONS(165),
    [sym_decimal_escape] = ACTIONS(147),
    [anon_sym_LPAREN] = ACTIONS(168),
  },
  [37] = {
    [aux_sym_disjunction_repeat1] = STATE(35),
    [anon_sym_PIPE] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(171),
    [anon_sym_RPAREN] = ACTIONS(171),
  },
  [38] = {
    [anon_sym_COMMA] = ACTIONS(173),
    [anon_sym_RBRACE] = ACTIONS(175),
  },
  [39] = {
    [sym_identity_escape] = ACTIONS(177),
    [anon_sym_RPAREN] = ACTIONS(179),
    [anon_sym_LBRACK] = ACTIONS(179),
    [anon_sym_CARET] = ACTIONS(179),
    [sym_boundary_assertion] = ACTIONS(179),
    [aux_sym_character_class_escape_token1] = ACTIONS(179),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(179),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(179),
    [sym_control_escape] = ACTIONS(177),
    [sym_end_assertion] = ACTIONS(179),
    [anon_sym_PIPE] = ACTIONS(179),
    [sym_non_boundary_assertion] = ACTIONS(179),
    [aux_sym_character_class_escape_token2] = ACTIONS(179),
    [anon_sym_BSLASHk] = ACTIONS(179),
    [sym_control_letter_escape] = ACTIONS(179),
    [ts_builtin_sym_end] = ACTIONS(179),
    [sym_pattern_character] = ACTIONS(179),
    [sym_any_character] = ACTIONS(179),
    [anon_sym_LPAREN_QMARK] = ACTIONS(177),
    [sym_decimal_escape] = ACTIONS(179),
    [anon_sym_LPAREN] = ACTIONS(177),
  },
  [40] = {
    [sym_identity_escape] = ACTIONS(181),
    [anon_sym_RPAREN] = ACTIONS(183),
    [anon_sym_LBRACK] = ACTIONS(183),
    [anon_sym_CARET] = ACTIONS(183),
    [sym_boundary_assertion] = ACTIONS(183),
    [aux_sym_character_class_escape_token1] = ACTIONS(183),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(183),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(183),
    [sym_control_escape] = ACTIONS(181),
    [sym_end_assertion] = ACTIONS(183),
    [anon_sym_PIPE] = ACTIONS(183),
    [sym_non_boundary_assertion] = ACTIONS(183),
    [aux_sym_character_class_escape_token2] = ACTIONS(183),
    [anon_sym_BSLASHk] = ACTIONS(183),
    [sym_control_letter_escape] = ACTIONS(183),
    [ts_builtin_sym_end] = ACTIONS(183),
    [sym_pattern_character] = ACTIONS(183),
    [sym_any_character] = ACTIONS(183),
    [anon_sym_LPAREN_QMARK] = ACTIONS(181),
    [sym_decimal_escape] = ACTIONS(183),
    [anon_sym_LPAREN] = ACTIONS(181),
  },
  [41] = {
    [sym_identity_escape] = ACTIONS(185),
    [anon_sym_RPAREN] = ACTIONS(187),
    [anon_sym_LBRACK] = ACTIONS(187),
    [anon_sym_CARET] = ACTIONS(187),
    [sym_boundary_assertion] = ACTIONS(187),
    [aux_sym_character_class_escape_token1] = ACTIONS(187),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(187),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(187),
    [sym_control_escape] = ACTIONS(185),
    [sym_end_assertion] = ACTIONS(187),
    [anon_sym_PIPE] = ACTIONS(187),
    [sym_non_boundary_assertion] = ACTIONS(187),
    [aux_sym_character_class_escape_token2] = ACTIONS(187),
    [anon_sym_BSLASHk] = ACTIONS(187),
    [sym_control_letter_escape] = ACTIONS(187),
    [ts_builtin_sym_end] = ACTIONS(187),
    [sym_pattern_character] = ACTIONS(187),
    [sym_any_character] = ACTIONS(187),
    [anon_sym_LPAREN_QMARK] = ACTIONS(185),
    [sym_decimal_escape] = ACTIONS(187),
    [anon_sym_LPAREN] = ACTIONS(185),
  },
  [42] = {
    [anon_sym_EQ] = ACTIONS(189),
    [anon_sym_RBRACE] = ACTIONS(191),
  },
  [43] = {
    [anon_sym_RBRACE] = ACTIONS(193),
  },
  [44] = {
    [sym_character_class_escape] = STATE(57),
    [aux_sym_character_class_escape_token1] = ACTIONS(53),
    [sym_identity_escape] = ACTIONS(195),
    [anon_sym_BSLASH_DASH] = ACTIONS(195),
    [anon_sym_DASH] = ACTIONS(197),
    [aux_sym_character_class_escape_token2] = ACTIONS(49),
    [sym_class_character] = ACTIONS(199),
    [sym_control_escape] = ACTIONS(195),
    [sym_control_letter_escape] = ACTIONS(195),
  },
  [45] = {
    [sym_character_class_escape] = STATE(59),
    [aux_sym_character_class_escape_token1] = ACTIONS(53),
    [sym_identity_escape] = ACTIONS(201),
    [anon_sym_BSLASH_DASH] = ACTIONS(201),
    [anon_sym_DASH] = ACTIONS(203),
    [aux_sym_character_class_escape_token2] = ACTIONS(49),
    [sym_class_character] = ACTIONS(205),
    [sym_control_escape] = ACTIONS(201),
    [sym_control_letter_escape] = ACTIONS(201),
  },
  [46] = {
    [sym_identity_escape] = ACTIONS(207),
    [anon_sym_RPAREN] = ACTIONS(209),
    [anon_sym_LBRACK] = ACTIONS(209),
    [anon_sym_CARET] = ACTIONS(209),
    [sym_boundary_assertion] = ACTIONS(209),
    [anon_sym_LBRACE] = ACTIONS(209),
    [aux_sym_character_class_escape_token1] = ACTIONS(209),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(209),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(209),
    [sym_control_escape] = ACTIONS(207),
    [sym_end_assertion] = ACTIONS(209),
    [anon_sym_PIPE] = ACTIONS(209),
    [sym_non_boundary_assertion] = ACTIONS(209),
    [aux_sym_character_class_escape_token2] = ACTIONS(209),
    [anon_sym_BSLASHk] = ACTIONS(209),
    [anon_sym_STAR] = ACTIONS(209),
    [sym_control_letter_escape] = ACTIONS(209),
    [ts_builtin_sym_end] = ACTIONS(209),
    [sym_pattern_character] = ACTIONS(209),
    [sym_any_character] = ACTIONS(209),
    [anon_sym_LPAREN_QMARK] = ACTIONS(207),
    [anon_sym_PLUS] = ACTIONS(209),
    [sym_decimal_escape] = ACTIONS(209),
    [anon_sym_LPAREN] = ACTIONS(207),
    [anon_sym_QMARK] = ACTIONS(209),
  },
  [47] = {
    [sym_class_range] = STATE(48),
    [sym_character_class_escape] = STATE(26),
    [aux_sym_character_class_repeat1] = STATE(48),
    [aux_sym_character_class_escape_token1] = ACTIONS(53),
    [sym_identity_escape] = ACTIONS(47),
    [anon_sym_BSLASH_DASH] = ACTIONS(47),
    [anon_sym_RBRACK] = ACTIONS(211),
    [aux_sym_character_class_escape_token2] = ACTIONS(49),
    [anon_sym_DASH] = ACTIONS(55),
    [sym_class_character] = ACTIONS(127),
    [sym_control_escape] = ACTIONS(47),
    [sym_control_letter_escape] = ACTIONS(47),
  },
  [48] = {
    [sym_class_range] = STATE(48),
    [sym_character_class_escape] = STATE(26),
    [aux_sym_character_class_repeat1] = STATE(48),
    [anon_sym_RBRACK] = ACTIONS(213),
    [aux_sym_character_class_escape_token1] = ACTIONS(215),
    [anon_sym_BSLASH_DASH] = ACTIONS(218),
    [sym_identity_escape] = ACTIONS(218),
    [aux_sym_character_class_escape_token2] = ACTIONS(221),
    [anon_sym_DASH] = ACTIONS(224),
    [sym_class_character] = ACTIONS(227),
    [sym_control_escape] = ACTIONS(218),
    [sym_control_letter_escape] = ACTIONS(218),
  },
  [49] = {
    [sym_start_assertion] = STATE(2),
    [sym_lookahead_assertion] = STATE(2),
    [sym_named_capturing_group] = STATE(2),
    [sym_non_capturing_group] = STATE(2),
    [sym_backreference_escape] = STATE(2),
    [sym_character_class_escape] = STATE(2),
    [sym_disjunction] = STATE(16),
    [sym_term] = STATE(17),
    [sym_anonymous_capturing_group] = STATE(2),
    [aux_sym_disjunction_repeat1] = STATE(13),
    [aux_sym_term_repeat1] = STATE(14),
    [sym_pattern] = STATE(62),
    [sym_character_class] = STATE(2),
    [sym_identity_escape] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_CARET] = ACTIONS(15),
    [sym_boundary_assertion] = ACTIONS(3),
    [aux_sym_character_class_escape_token1] = ACTIONS(17),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(19),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(21),
    [sym_control_escape] = ACTIONS(7),
    [sym_end_assertion] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(5),
    [sym_non_boundary_assertion] = ACTIONS(3),
    [aux_sym_character_class_escape_token2] = ACTIONS(9),
    [anon_sym_BSLASHk] = ACTIONS(11),
    [sym_control_letter_escape] = ACTIONS(3),
    [sym_pattern_character] = ACTIONS(3),
    [sym_any_character] = ACTIONS(3),
    [anon_sym_LPAREN_QMARK] = ACTIONS(23),
    [sym_decimal_escape] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(25),
  },
  [50] = {
    [sym_identity_escape] = ACTIONS(230),
    [anon_sym_RPAREN] = ACTIONS(232),
    [anon_sym_LBRACK] = ACTIONS(232),
    [anon_sym_CARET] = ACTIONS(232),
    [sym_boundary_assertion] = ACTIONS(232),
    [anon_sym_LBRACE] = ACTIONS(232),
    [aux_sym_character_class_escape_token1] = ACTIONS(232),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(232),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(232),
    [sym_control_escape] = ACTIONS(230),
    [sym_end_assertion] = ACTIONS(232),
    [anon_sym_PIPE] = ACTIONS(232),
    [sym_non_boundary_assertion] = ACTIONS(232),
    [aux_sym_character_class_escape_token2] = ACTIONS(232),
    [anon_sym_BSLASHk] = ACTIONS(232),
    [anon_sym_STAR] = ACTIONS(232),
    [sym_control_letter_escape] = ACTIONS(232),
    [ts_builtin_sym_end] = ACTIONS(232),
    [sym_pattern_character] = ACTIONS(232),
    [sym_any_character] = ACTIONS(232),
    [anon_sym_LPAREN_QMARK] = ACTIONS(230),
    [anon_sym_PLUS] = ACTIONS(232),
    [sym_decimal_escape] = ACTIONS(232),
    [anon_sym_LPAREN] = ACTIONS(230),
    [anon_sym_QMARK] = ACTIONS(232),
  },
  [51] = {
    [anon_sym_RPAREN] = ACTIONS(234),
  },
  [52] = {
    [sym_identity_escape] = ACTIONS(236),
    [anon_sym_RPAREN] = ACTIONS(238),
    [anon_sym_LBRACK] = ACTIONS(238),
    [anon_sym_CARET] = ACTIONS(238),
    [sym_boundary_assertion] = ACTIONS(238),
    [anon_sym_LBRACE] = ACTIONS(238),
    [aux_sym_character_class_escape_token1] = ACTIONS(238),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(238),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(238),
    [sym_control_escape] = ACTIONS(236),
    [sym_end_assertion] = ACTIONS(238),
    [anon_sym_PIPE] = ACTIONS(238),
    [sym_non_boundary_assertion] = ACTIONS(238),
    [aux_sym_character_class_escape_token2] = ACTIONS(238),
    [anon_sym_BSLASHk] = ACTIONS(238),
    [anon_sym_STAR] = ACTIONS(238),
    [sym_control_letter_escape] = ACTIONS(238),
    [ts_builtin_sym_end] = ACTIONS(238),
    [sym_pattern_character] = ACTIONS(238),
    [sym_any_character] = ACTIONS(238),
    [anon_sym_LPAREN_QMARK] = ACTIONS(236),
    [anon_sym_PLUS] = ACTIONS(238),
    [sym_decimal_escape] = ACTIONS(238),
    [anon_sym_LPAREN] = ACTIONS(236),
    [anon_sym_QMARK] = ACTIONS(238),
  },
  [53] = {
    [sym_decimal_digits] = ACTIONS(240),
  },
  [54] = {
    [sym_identity_escape] = ACTIONS(242),
    [anon_sym_RPAREN] = ACTIONS(244),
    [anon_sym_LBRACK] = ACTIONS(244),
    [anon_sym_CARET] = ACTIONS(244),
    [sym_boundary_assertion] = ACTIONS(244),
    [aux_sym_character_class_escape_token1] = ACTIONS(244),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(244),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(244),
    [sym_control_escape] = ACTIONS(242),
    [sym_end_assertion] = ACTIONS(244),
    [anon_sym_PIPE] = ACTIONS(244),
    [sym_non_boundary_assertion] = ACTIONS(244),
    [aux_sym_character_class_escape_token2] = ACTIONS(244),
    [anon_sym_BSLASHk] = ACTIONS(244),
    [sym_control_letter_escape] = ACTIONS(244),
    [ts_builtin_sym_end] = ACTIONS(244),
    [sym_pattern_character] = ACTIONS(244),
    [sym_any_character] = ACTIONS(244),
    [anon_sym_LPAREN_QMARK] = ACTIONS(242),
    [sym_decimal_escape] = ACTIONS(244),
    [anon_sym_LPAREN] = ACTIONS(242),
    [anon_sym_QMARK] = ACTIONS(246),
  },
  [55] = {
    [sym_unicode_property] = ACTIONS(248),
  },
  [56] = {
    [sym_identity_escape] = ACTIONS(250),
    [anon_sym_RPAREN] = ACTIONS(252),
    [anon_sym_LBRACK] = ACTIONS(252),
    [anon_sym_CARET] = ACTIONS(252),
    [sym_boundary_assertion] = ACTIONS(252),
    [anon_sym_LBRACE] = ACTIONS(252),
    [aux_sym_character_class_escape_token1] = ACTIONS(252),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(252),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(252),
    [sym_control_escape] = ACTIONS(250),
    [sym_end_assertion] = ACTIONS(252),
    [anon_sym_PIPE] = ACTIONS(252),
    [sym_non_boundary_assertion] = ACTIONS(252),
    [aux_sym_character_class_escape_token2] = ACTIONS(252),
    [anon_sym_BSLASHk] = ACTIONS(252),
    [anon_sym_STAR] = ACTIONS(252),
    [sym_control_letter_escape] = ACTIONS(252),
    [ts_builtin_sym_end] = ACTIONS(252),
    [sym_pattern_character] = ACTIONS(252),
    [sym_any_character] = ACTIONS(252),
    [anon_sym_LPAREN_QMARK] = ACTIONS(250),
    [anon_sym_PLUS] = ACTIONS(252),
    [sym_decimal_escape] = ACTIONS(252),
    [anon_sym_LPAREN] = ACTIONS(250),
    [anon_sym_QMARK] = ACTIONS(252),
  },
  [57] = {
    [anon_sym_RBRACK] = ACTIONS(254),
    [aux_sym_character_class_escape_token1] = ACTIONS(254),
    [anon_sym_BSLASH_DASH] = ACTIONS(254),
    [sym_identity_escape] = ACTIONS(254),
    [aux_sym_character_class_escape_token2] = ACTIONS(254),
    [anon_sym_DASH] = ACTIONS(254),
    [sym_class_character] = ACTIONS(256),
    [sym_control_escape] = ACTIONS(254),
    [sym_control_letter_escape] = ACTIONS(254),
  },
  [58] = {
    [anon_sym_RBRACK] = ACTIONS(258),
    [aux_sym_character_class_escape_token1] = ACTIONS(258),
    [anon_sym_BSLASH_DASH] = ACTIONS(258),
    [sym_identity_escape] = ACTIONS(258),
    [aux_sym_character_class_escape_token2] = ACTIONS(258),
    [anon_sym_DASH] = ACTIONS(258),
    [sym_class_character] = ACTIONS(260),
    [sym_control_escape] = ACTIONS(258),
    [sym_control_letter_escape] = ACTIONS(258),
  },
  [59] = {
    [anon_sym_RBRACK] = ACTIONS(262),
    [aux_sym_character_class_escape_token1] = ACTIONS(262),
    [anon_sym_BSLASH_DASH] = ACTIONS(262),
    [sym_identity_escape] = ACTIONS(262),
    [aux_sym_character_class_escape_token2] = ACTIONS(262),
    [anon_sym_DASH] = ACTIONS(262),
    [sym_class_character] = ACTIONS(264),
    [sym_control_escape] = ACTIONS(262),
    [sym_control_letter_escape] = ACTIONS(262),
  },
  [60] = {
    [anon_sym_RBRACK] = ACTIONS(266),
    [aux_sym_character_class_escape_token1] = ACTIONS(266),
    [anon_sym_BSLASH_DASH] = ACTIONS(266),
    [sym_identity_escape] = ACTIONS(266),
    [aux_sym_character_class_escape_token2] = ACTIONS(266),
    [anon_sym_DASH] = ACTIONS(266),
    [sym_class_character] = ACTIONS(268),
    [sym_control_escape] = ACTIONS(266),
    [sym_control_letter_escape] = ACTIONS(266),
  },
  [61] = {
    [sym_identity_escape] = ACTIONS(270),
    [anon_sym_RPAREN] = ACTIONS(272),
    [anon_sym_LBRACK] = ACTIONS(272),
    [anon_sym_CARET] = ACTIONS(272),
    [sym_boundary_assertion] = ACTIONS(272),
    [anon_sym_LBRACE] = ACTIONS(272),
    [aux_sym_character_class_escape_token1] = ACTIONS(272),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(272),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(272),
    [sym_control_escape] = ACTIONS(270),
    [sym_end_assertion] = ACTIONS(272),
    [anon_sym_PIPE] = ACTIONS(272),
    [sym_non_boundary_assertion] = ACTIONS(272),
    [aux_sym_character_class_escape_token2] = ACTIONS(272),
    [anon_sym_BSLASHk] = ACTIONS(272),
    [anon_sym_STAR] = ACTIONS(272),
    [sym_control_letter_escape] = ACTIONS(272),
    [ts_builtin_sym_end] = ACTIONS(272),
    [sym_pattern_character] = ACTIONS(272),
    [sym_any_character] = ACTIONS(272),
    [anon_sym_LPAREN_QMARK] = ACTIONS(270),
    [anon_sym_PLUS] = ACTIONS(272),
    [sym_decimal_escape] = ACTIONS(272),
    [anon_sym_LPAREN] = ACTIONS(270),
    [anon_sym_QMARK] = ACTIONS(272),
  },
  [62] = {
    [anon_sym_RPAREN] = ACTIONS(274),
  },
  [63] = {
    [sym_identity_escape] = ACTIONS(276),
    [anon_sym_RPAREN] = ACTIONS(278),
    [anon_sym_LBRACK] = ACTIONS(278),
    [anon_sym_CARET] = ACTIONS(278),
    [sym_boundary_assertion] = ACTIONS(278),
    [anon_sym_LBRACE] = ACTIONS(278),
    [aux_sym_character_class_escape_token1] = ACTIONS(278),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(278),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(278),
    [sym_control_escape] = ACTIONS(276),
    [sym_end_assertion] = ACTIONS(278),
    [anon_sym_PIPE] = ACTIONS(278),
    [sym_non_boundary_assertion] = ACTIONS(278),
    [aux_sym_character_class_escape_token2] = ACTIONS(278),
    [anon_sym_BSLASHk] = ACTIONS(278),
    [anon_sym_STAR] = ACTIONS(278),
    [sym_control_letter_escape] = ACTIONS(278),
    [ts_builtin_sym_end] = ACTIONS(278),
    [sym_pattern_character] = ACTIONS(278),
    [sym_any_character] = ACTIONS(278),
    [anon_sym_LPAREN_QMARK] = ACTIONS(276),
    [anon_sym_PLUS] = ACTIONS(278),
    [sym_decimal_escape] = ACTIONS(278),
    [anon_sym_LPAREN] = ACTIONS(276),
    [anon_sym_QMARK] = ACTIONS(278),
  },
  [64] = {
    [anon_sym_RBRACE] = ACTIONS(280),
  },
  [65] = {
    [sym_identity_escape] = ACTIONS(282),
    [anon_sym_RPAREN] = ACTIONS(284),
    [anon_sym_LBRACK] = ACTIONS(284),
    [anon_sym_CARET] = ACTIONS(284),
    [sym_boundary_assertion] = ACTIONS(284),
    [aux_sym_character_class_escape_token1] = ACTIONS(284),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(284),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(284),
    [sym_control_escape] = ACTIONS(282),
    [sym_end_assertion] = ACTIONS(284),
    [anon_sym_PIPE] = ACTIONS(284),
    [sym_non_boundary_assertion] = ACTIONS(284),
    [aux_sym_character_class_escape_token2] = ACTIONS(284),
    [anon_sym_BSLASHk] = ACTIONS(284),
    [sym_control_letter_escape] = ACTIONS(284),
    [ts_builtin_sym_end] = ACTIONS(284),
    [sym_pattern_character] = ACTIONS(284),
    [sym_any_character] = ACTIONS(284),
    [anon_sym_LPAREN_QMARK] = ACTIONS(282),
    [sym_decimal_escape] = ACTIONS(284),
    [anon_sym_LPAREN] = ACTIONS(282),
  },
  [66] = {
    [anon_sym_RBRACE] = ACTIONS(286),
  },
  [67] = {
    [sym_identity_escape] = ACTIONS(288),
    [anon_sym_RPAREN] = ACTIONS(290),
    [anon_sym_LBRACK] = ACTIONS(290),
    [anon_sym_CARET] = ACTIONS(290),
    [sym_boundary_assertion] = ACTIONS(290),
    [anon_sym_LBRACE] = ACTIONS(290),
    [aux_sym_character_class_escape_token1] = ACTIONS(290),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(290),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(290),
    [sym_control_escape] = ACTIONS(288),
    [sym_end_assertion] = ACTIONS(290),
    [anon_sym_PIPE] = ACTIONS(290),
    [sym_non_boundary_assertion] = ACTIONS(290),
    [aux_sym_character_class_escape_token2] = ACTIONS(290),
    [anon_sym_BSLASHk] = ACTIONS(290),
    [anon_sym_STAR] = ACTIONS(290),
    [sym_control_letter_escape] = ACTIONS(290),
    [ts_builtin_sym_end] = ACTIONS(290),
    [sym_pattern_character] = ACTIONS(290),
    [sym_any_character] = ACTIONS(290),
    [anon_sym_LPAREN_QMARK] = ACTIONS(288),
    [anon_sym_PLUS] = ACTIONS(290),
    [sym_decimal_escape] = ACTIONS(290),
    [anon_sym_LPAREN] = ACTIONS(288),
    [anon_sym_QMARK] = ACTIONS(290),
  },
  [68] = {
    [sym_identity_escape] = ACTIONS(292),
    [anon_sym_RPAREN] = ACTIONS(294),
    [anon_sym_LBRACK] = ACTIONS(294),
    [anon_sym_CARET] = ACTIONS(294),
    [sym_boundary_assertion] = ACTIONS(294),
    [aux_sym_character_class_escape_token1] = ACTIONS(294),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(294),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(294),
    [sym_control_escape] = ACTIONS(292),
    [sym_end_assertion] = ACTIONS(294),
    [anon_sym_PIPE] = ACTIONS(294),
    [sym_non_boundary_assertion] = ACTIONS(294),
    [aux_sym_character_class_escape_token2] = ACTIONS(294),
    [anon_sym_BSLASHk] = ACTIONS(294),
    [sym_control_letter_escape] = ACTIONS(294),
    [ts_builtin_sym_end] = ACTIONS(294),
    [sym_pattern_character] = ACTIONS(294),
    [sym_any_character] = ACTIONS(294),
    [anon_sym_LPAREN_QMARK] = ACTIONS(292),
    [sym_decimal_escape] = ACTIONS(294),
    [anon_sym_LPAREN] = ACTIONS(292),
    [anon_sym_QMARK] = ACTIONS(296),
  },
  [69] = {
    [sym_identity_escape] = ACTIONS(298),
    [anon_sym_RPAREN] = ACTIONS(300),
    [anon_sym_LBRACK] = ACTIONS(300),
    [anon_sym_CARET] = ACTIONS(300),
    [sym_boundary_assertion] = ACTIONS(300),
    [aux_sym_character_class_escape_token1] = ACTIONS(300),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(300),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(300),
    [sym_control_escape] = ACTIONS(298),
    [sym_end_assertion] = ACTIONS(300),
    [anon_sym_PIPE] = ACTIONS(300),
    [sym_non_boundary_assertion] = ACTIONS(300),
    [aux_sym_character_class_escape_token2] = ACTIONS(300),
    [anon_sym_BSLASHk] = ACTIONS(300),
    [sym_control_letter_escape] = ACTIONS(300),
    [ts_builtin_sym_end] = ACTIONS(300),
    [sym_pattern_character] = ACTIONS(300),
    [sym_any_character] = ACTIONS(300),
    [anon_sym_LPAREN_QMARK] = ACTIONS(298),
    [sym_decimal_escape] = ACTIONS(300),
    [anon_sym_LPAREN] = ACTIONS(298),
  },
  [70] = {
    [anon_sym_RBRACK] = ACTIONS(61),
    [aux_sym_character_class_escape_token1] = ACTIONS(61),
    [anon_sym_BSLASH_DASH] = ACTIONS(61),
    [sym_identity_escape] = ACTIONS(61),
    [aux_sym_character_class_escape_token2] = ACTIONS(61),
    [anon_sym_DASH] = ACTIONS(61),
    [sym_class_character] = ACTIONS(63),
    [sym_control_escape] = ACTIONS(61),
    [sym_control_letter_escape] = ACTIONS(61),
  },
  [71] = {
    [anon_sym_RBRACK] = ACTIONS(250),
    [aux_sym_character_class_escape_token1] = ACTIONS(250),
    [anon_sym_BSLASH_DASH] = ACTIONS(250),
    [sym_identity_escape] = ACTIONS(250),
    [aux_sym_character_class_escape_token2] = ACTIONS(250),
    [anon_sym_DASH] = ACTIONS(250),
    [sym_class_character] = ACTIONS(252),
    [sym_control_escape] = ACTIONS(250),
    [sym_control_letter_escape] = ACTIONS(250),
  },
  [72] = {
    [anon_sym_RBRACE] = ACTIONS(302),
  },
  [73] = {
    [sym_unicode_property_value_expression] = STATE(72),
    [sym_unicode_property] = ACTIONS(103),
  },
  [74] = {
    [anon_sym_LBRACE] = ACTIONS(304),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT(2),
  [5] = {.count = 1, .reusable = true}, SHIFT(3),
  [7] = {.count = 1, .reusable = false}, SHIFT(2),
  [9] = {.count = 1, .reusable = true}, SHIFT(4),
  [11] = {.count = 1, .reusable = true}, SHIFT(5),
  [13] = {.count = 1, .reusable = true}, SHIFT(6),
  [15] = {.count = 1, .reusable = true}, SHIFT(7),
  [17] = {.count = 1, .reusable = true}, SHIFT(8),
  [19] = {.count = 1, .reusable = true}, SHIFT(9),
  [21] = {.count = 1, .reusable = true}, SHIFT(10),
  [23] = {.count = 1, .reusable = false}, SHIFT(11),
  [25] = {.count = 1, .reusable = false}, SHIFT(12),
  [27] = {.count = 1, .reusable = false}, REDUCE(aux_sym_term_repeat1, 1),
  [29] = {.count = 1, .reusable = true}, REDUCE(aux_sym_term_repeat1, 1),
  [31] = {.count = 1, .reusable = true}, SHIFT(18),
  [33] = {.count = 1, .reusable = true}, SHIFT(19),
  [35] = {.count = 1, .reusable = true}, SHIFT(20),
  [37] = {.count = 1, .reusable = true}, SHIFT(21),
  [39] = {.count = 1, .reusable = true}, REDUCE(aux_sym_disjunction_repeat1, 1),
  [41] = {.count = 1, .reusable = true}, SHIFT(24),
  [43] = {.count = 1, .reusable = true}, SHIFT(25),
  [45] = {.count = 1, .reusable = false}, SHIFT(27),
  [47] = {.count = 1, .reusable = false}, SHIFT(26),
  [49] = {.count = 1, .reusable = false}, SHIFT(74),
  [51] = {.count = 1, .reusable = false}, SHIFT(29),
  [53] = {.count = 1, .reusable = false}, SHIFT(70),
  [55] = {.count = 1, .reusable = false}, SHIFT(28),
  [57] = {.count = 1, .reusable = false}, REDUCE(sym_start_assertion, 1),
  [59] = {.count = 1, .reusable = true}, REDUCE(sym_start_assertion, 1),
  [61] = {.count = 1, .reusable = false}, REDUCE(sym_character_class_escape, 1),
  [63] = {.count = 1, .reusable = true}, REDUCE(sym_character_class_escape, 1),
  [65] = {.count = 1, .reusable = true}, SHIFT(31),
  [67] = {.count = 1, .reusable = true}, SHIFT(33),
  [69] = {.count = 1, .reusable = true}, REDUCE(sym_disjunction, 1),
  [71] = {.count = 1, .reusable = true}, REDUCE(sym_term, 1),
  [73] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [75] = {.count = 1, .reusable = true}, REDUCE(sym_pattern, 1),
  [77] = {.count = 1, .reusable = true}, SHIFT(38),
  [79] = {.count = 1, .reusable = false}, REDUCE(sym_zero_or_more, 1),
  [81] = {.count = 1, .reusable = true}, REDUCE(sym_zero_or_more, 1),
  [83] = {.count = 1, .reusable = true}, SHIFT(39),
  [85] = {.count = 1, .reusable = false}, REDUCE(sym_one_or_more, 1),
  [87] = {.count = 1, .reusable = true}, REDUCE(sym_one_or_more, 1),
  [89] = {.count = 1, .reusable = true}, SHIFT(40),
  [91] = {.count = 1, .reusable = false}, REDUCE(sym_optional, 1),
  [93] = {.count = 1, .reusable = true}, REDUCE(sym_optional, 1),
  [95] = {.count = 1, .reusable = true}, SHIFT(41),
  [97] = {.count = 1, .reusable = false}, REDUCE(aux_sym_term_repeat1, 2),
  [99] = {.count = 1, .reusable = true}, REDUCE(aux_sym_term_repeat1, 2),
  [101] = {.count = 1, .reusable = true}, REDUCE(aux_sym_disjunction_repeat1, 2),
  [103] = {.count = 1, .reusable = true}, SHIFT(42),
  [105] = {.count = 1, .reusable = false}, REDUCE(sym_backreference_escape, 2),
  [107] = {.count = 1, .reusable = true}, REDUCE(sym_backreference_escape, 2),
  [109] = {.count = 1, .reusable = false}, REDUCE(aux_sym_character_class_repeat1, 1),
  [111] = {.count = 1, .reusable = false}, SHIFT(44),
  [113] = {.count = 1, .reusable = true}, REDUCE(aux_sym_character_class_repeat1, 1),
  [115] = {.count = 1, .reusable = false}, REDUCE(sym_character_class, 2),
  [117] = {.count = 1, .reusable = true}, REDUCE(sym_character_class, 2),
  [119] = {.count = 1, .reusable = false}, REDUCE(aux_sym_character_class_repeat1, 1, .production_id = 1),
  [121] = {.count = 1, .reusable = false}, SHIFT(45),
  [123] = {.count = 1, .reusable = true}, REDUCE(aux_sym_character_class_repeat1, 1, .production_id = 1),
  [125] = {.count = 1, .reusable = false}, SHIFT(46),
  [127] = {.count = 1, .reusable = true}, SHIFT(26),
  [129] = {.count = 1, .reusable = true}, SHIFT(49),
  [131] = {.count = 1, .reusable = true}, SHIFT(50),
  [133] = {.count = 1, .reusable = true}, SHIFT(52),
  [135] = {.count = 2, .reusable = true}, REDUCE(aux_sym_disjunction_repeat1, 2), SHIFT_REPEAT(3),
  [138] = {.count = 2, .reusable = false}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(2),
  [141] = {.count = 2, .reusable = true}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(6),
  [144] = {.count = 2, .reusable = true}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(7),
  [147] = {.count = 2, .reusable = true}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(2),
  [150] = {.count = 2, .reusable = true}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(8),
  [153] = {.count = 2, .reusable = true}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(9),
  [156] = {.count = 2, .reusable = true}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(10),
  [159] = {.count = 2, .reusable = true}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(4),
  [162] = {.count = 2, .reusable = true}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(5),
  [165] = {.count = 2, .reusable = false}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(11),
  [168] = {.count = 2, .reusable = false}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(12),
  [171] = {.count = 1, .reusable = true}, REDUCE(sym_disjunction, 2),
  [173] = {.count = 1, .reusable = true}, SHIFT(53),
  [175] = {.count = 1, .reusable = true}, SHIFT(54),
  [177] = {.count = 1, .reusable = false}, REDUCE(sym_zero_or_more, 2, .production_id = 2),
  [179] = {.count = 1, .reusable = true}, REDUCE(sym_zero_or_more, 2, .production_id = 2),
  [181] = {.count = 1, .reusable = false}, REDUCE(sym_one_or_more, 2, .production_id = 2),
  [183] = {.count = 1, .reusable = true}, REDUCE(sym_one_or_more, 2, .production_id = 2),
  [185] = {.count = 1, .reusable = false}, REDUCE(sym_optional, 2, .production_id = 2),
  [187] = {.count = 1, .reusable = true}, REDUCE(sym_optional, 2, .production_id = 2),
  [189] = {.count = 1, .reusable = true}, SHIFT(55),
  [191] = {.count = 1, .reusable = true}, REDUCE(sym_unicode_property_value_expression, 1, .production_id = 3),
  [193] = {.count = 1, .reusable = true}, SHIFT(56),
  [195] = {.count = 1, .reusable = false}, SHIFT(57),
  [197] = {.count = 1, .reusable = false}, SHIFT(58),
  [199] = {.count = 1, .reusable = true}, SHIFT(57),
  [201] = {.count = 1, .reusable = false}, SHIFT(59),
  [203] = {.count = 1, .reusable = false}, SHIFT(60),
  [205] = {.count = 1, .reusable = true}, SHIFT(59),
  [207] = {.count = 1, .reusable = false}, REDUCE(sym_character_class, 3),
  [209] = {.count = 1, .reusable = true}, REDUCE(sym_character_class, 3),
  [211] = {.count = 1, .reusable = false}, SHIFT(61),
  [213] = {.count = 1, .reusable = false}, REDUCE(aux_sym_character_class_repeat1, 2),
  [215] = {.count = 2, .reusable = false}, REDUCE(aux_sym_character_class_repeat1, 2), SHIFT_REPEAT(70),
  [218] = {.count = 2, .reusable = false}, REDUCE(aux_sym_character_class_repeat1, 2), SHIFT_REPEAT(26),
  [221] = {.count = 2, .reusable = false}, REDUCE(aux_sym_character_class_repeat1, 2), SHIFT_REPEAT(74),
  [224] = {.count = 2, .reusable = false}, REDUCE(aux_sym_character_class_repeat1, 2), SHIFT_REPEAT(28),
  [227] = {.count = 2, .reusable = true}, REDUCE(aux_sym_character_class_repeat1, 2), SHIFT_REPEAT(26),
  [230] = {.count = 1, .reusable = false}, REDUCE(sym_non_capturing_group, 3),
  [232] = {.count = 1, .reusable = true}, REDUCE(sym_non_capturing_group, 3),
  [234] = {.count = 1, .reusable = true}, SHIFT(63),
  [236] = {.count = 1, .reusable = false}, REDUCE(sym_anonymous_capturing_group, 3),
  [238] = {.count = 1, .reusable = true}, REDUCE(sym_anonymous_capturing_group, 3),
  [240] = {.count = 1, .reusable = true}, SHIFT(64),
  [242] = {.count = 1, .reusable = false}, REDUCE(sym_count_quantifier, 3),
  [244] = {.count = 1, .reusable = true}, REDUCE(sym_count_quantifier, 3),
  [246] = {.count = 1, .reusable = true}, SHIFT(65),
  [248] = {.count = 1, .reusable = true}, SHIFT(66),
  [250] = {.count = 1, .reusable = false}, REDUCE(sym_character_class_escape, 4),
  [252] = {.count = 1, .reusable = true}, REDUCE(sym_character_class_escape, 4),
  [254] = {.count = 1, .reusable = false}, REDUCE(sym_class_range, 3),
  [256] = {.count = 1, .reusable = true}, REDUCE(sym_class_range, 3),
  [258] = {.count = 1, .reusable = false}, REDUCE(sym_class_range, 3, .production_id = 4),
  [260] = {.count = 1, .reusable = true}, REDUCE(sym_class_range, 3, .production_id = 4),
  [262] = {.count = 1, .reusable = false}, REDUCE(sym_class_range, 3, .production_id = 1),
  [264] = {.count = 1, .reusable = true}, REDUCE(sym_class_range, 3, .production_id = 1),
  [266] = {.count = 1, .reusable = false}, REDUCE(sym_class_range, 3, .production_id = 5),
  [268] = {.count = 1, .reusable = true}, REDUCE(sym_class_range, 3, .production_id = 5),
  [270] = {.count = 1, .reusable = false}, REDUCE(sym_character_class, 4),
  [272] = {.count = 1, .reusable = true}, REDUCE(sym_character_class, 4),
  [274] = {.count = 1, .reusable = true}, SHIFT(67),
  [276] = {.count = 1, .reusable = false}, REDUCE(sym_lookahead_assertion, 4),
  [278] = {.count = 1, .reusable = true}, REDUCE(sym_lookahead_assertion, 4),
  [280] = {.count = 1, .reusable = true}, SHIFT(68),
  [282] = {.count = 1, .reusable = false}, REDUCE(sym_count_quantifier, 4, .production_id = 6),
  [284] = {.count = 1, .reusable = true}, REDUCE(sym_count_quantifier, 4, .production_id = 6),
  [286] = {.count = 1, .reusable = true}, REDUCE(sym_unicode_property_value_expression, 3, .production_id = 7),
  [288] = {.count = 1, .reusable = false}, REDUCE(sym_named_capturing_group, 5),
  [290] = {.count = 1, .reusable = true}, REDUCE(sym_named_capturing_group, 5),
  [292] = {.count = 1, .reusable = false}, REDUCE(sym_count_quantifier, 5),
  [294] = {.count = 1, .reusable = true}, REDUCE(sym_count_quantifier, 5),
  [296] = {.count = 1, .reusable = true}, SHIFT(69),
  [298] = {.count = 1, .reusable = false}, REDUCE(sym_count_quantifier, 6, .production_id = 8),
  [300] = {.count = 1, .reusable = true}, REDUCE(sym_count_quantifier, 6, .production_id = 8),
  [302] = {.count = 1, .reusable = true}, SHIFT(71),
  [304] = {.count = 1, .reusable = true}, SHIFT(73),
};

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_regex(void) {
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
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
