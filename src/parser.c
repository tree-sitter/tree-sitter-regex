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
  alias_sym_unicode_property_name = 60,
  alias_sym_unicode_property_value = 61,
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
  [alias_sym_unicode_property_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_unicode_property_value] = {
    .visible = true,
    .named = true,
  },
};

static TSSymbol ts_alias_sequences[9][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
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
    [0] = sym_class_character,
    [2] = sym_class_character,
  },
  [5] = {
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
  eof = lookahead == 0;
  switch (state) {
    case 0:
      if (eof) ADVANCE(12);
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
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead == ']') ADVANCE(27);
      if (lookahead == '^') ADVANCE(15);
      if (lookahead == '{') ADVANCE(40);
      if (lookahead == '|') ADVANCE(13);
      if (lookahead == '}') ADVANCE(42);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(31);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '\\') ADVANCE(8);
      if (lookahead == ']') ADVANCE(27);
      if (lookahead == '^') ADVANCE(15);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(32);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '\\') ADVANCE(8);
      if (lookahead == ']') ADVANCE(27);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '!') ADVANCE(21);
      if (lookahead == ',') ADVANCE(41);
      if (lookahead == '<') ADVANCE(6);
      if (lookahead == '=') ADVANCE(20);
      if (lookahead == '>') ADVANCE(35);
      if (lookahead == '}') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(23);
      if (lookahead == '=') ADVANCE(22);
      END_STATE();
    case 7:
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
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(10);
      if (lookahead != 0) ADVANCE(50);
      END_STATE();
    case 8:
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
    case 9:
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
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(10);
      if (lookahead != 0) ADVANCE(50);
      END_STATE();
    case 10:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      END_STATE();
    case 11:
      if (eof) ADVANCE(12);
      if (lookahead == '\n') SKIP(11)
      if (lookahead == '$') ADVANCE(16);
      if (lookahead == '(') ADVANCE(33);
      if (lookahead == ')') ADVANCE(24);
      if (lookahead == '*') ADVANCE(37);
      if (lookahead == '+') ADVANCE(39);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == '?') ADVANCE(38);
      if (lookahead == '[') ADVANCE(26);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead == '^') ADVANCE(15);
      if (lookahead == '{') ADVANCE(40);
      if (lookahead == '|') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != ']' &&
          lookahead != '}') ADVANCE(25);
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
  [1] = {.lex_state = 11},
  [2] = {.lex_state = 11},
  [3] = {.lex_state = 11},
  [4] = {.lex_state = 11},
  [5] = {.lex_state = 11},
  [6] = {.lex_state = 11},
  [7] = {.lex_state = 11},
  [8] = {.lex_state = 11},
  [9] = {.lex_state = 11},
  [10] = {.lex_state = 11},
  [11] = {.lex_state = 11},
  [12] = {.lex_state = 11},
  [13] = {.lex_state = 11},
  [14] = {.lex_state = 11},
  [15] = {.lex_state = 11},
  [16] = {.lex_state = 11},
  [17] = {.lex_state = 11},
  [18] = {.lex_state = 11},
  [19] = {.lex_state = 11},
  [20] = {.lex_state = 11},
  [21] = {.lex_state = 11},
  [22] = {.lex_state = 11},
  [23] = {.lex_state = 11},
  [24] = {.lex_state = 11},
  [25] = {.lex_state = 11},
  [26] = {.lex_state = 11},
  [27] = {.lex_state = 11},
  [28] = {.lex_state = 11},
  [29] = {.lex_state = 11},
  [30] = {.lex_state = 11},
  [31] = {.lex_state = 11},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 3},
  [55] = {.lex_state = 3},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 3},
  [58] = {.lex_state = 3},
  [59] = {.lex_state = 4},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 4},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 5},
  [66] = {.lex_state = 5},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 3},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [sym_any_character] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [sym_end_assertion] = ACTIONS(1),
    [sym_boundary_assertion] = ACTIONS(1),
    [sym_non_boundary_assertion] = ACTIONS(1),
    [anon_sym_LPAREN_QMARK] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_pattern_character] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_BSLASH_DASH] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_BSLASHk] = ACTIONS(1),
    [sym_decimal_escape] = ACTIONS(1),
    [aux_sym_character_class_escape_token1] = ACTIONS(1),
    [aux_sym_character_class_escape_token2] = ACTIONS(1),
    [sym_control_escape] = ACTIONS(1),
    [sym_control_letter_escape] = ACTIONS(1),
    [sym_identity_escape] = ACTIONS(1),
  },
  [1] = {
    [sym_pattern] = STATE(73),
    [sym_disjunction] = STATE(56),
    [sym_term] = STATE(49),
    [sym_start_assertion] = STATE(9),
    [sym_lookahead_assertion] = STATE(9),
    [sym_character_class] = STATE(9),
    [sym_anonymous_capturing_group] = STATE(9),
    [sym_named_capturing_group] = STATE(9),
    [sym_non_capturing_group] = STATE(9),
    [sym_backreference_escape] = STATE(9),
    [sym_character_class_escape] = STATE(9),
    [aux_sym_disjunction_repeat1] = STATE(47),
    [aux_sym_term_repeat1] = STATE(8),
    [anon_sym_PIPE] = ACTIONS(3),
    [sym_any_character] = ACTIONS(5),
    [anon_sym_CARET] = ACTIONS(7),
    [sym_end_assertion] = ACTIONS(5),
    [sym_boundary_assertion] = ACTIONS(5),
    [sym_non_boundary_assertion] = ACTIONS(5),
    [anon_sym_LPAREN_QMARK] = ACTIONS(9),
    [sym_pattern_character] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(15),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(17),
    [anon_sym_BSLASHk] = ACTIONS(19),
    [sym_decimal_escape] = ACTIONS(5),
    [aux_sym_character_class_escape_token1] = ACTIONS(21),
    [aux_sym_character_class_escape_token2] = ACTIONS(23),
    [sym_control_escape] = ACTIONS(25),
    [sym_control_letter_escape] = ACTIONS(5),
    [sym_identity_escape] = ACTIONS(25),
  },
  [2] = {
    [sym_pattern] = STATE(60),
    [sym_disjunction] = STATE(56),
    [sym_term] = STATE(49),
    [sym_start_assertion] = STATE(9),
    [sym_lookahead_assertion] = STATE(9),
    [sym_character_class] = STATE(9),
    [sym_anonymous_capturing_group] = STATE(9),
    [sym_named_capturing_group] = STATE(9),
    [sym_non_capturing_group] = STATE(9),
    [sym_backreference_escape] = STATE(9),
    [sym_character_class_escape] = STATE(9),
    [aux_sym_disjunction_repeat1] = STATE(47),
    [aux_sym_term_repeat1] = STATE(8),
    [anon_sym_PIPE] = ACTIONS(3),
    [sym_any_character] = ACTIONS(5),
    [anon_sym_CARET] = ACTIONS(7),
    [sym_end_assertion] = ACTIONS(5),
    [sym_boundary_assertion] = ACTIONS(5),
    [sym_non_boundary_assertion] = ACTIONS(5),
    [anon_sym_LPAREN_QMARK] = ACTIONS(9),
    [sym_pattern_character] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(15),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(17),
    [anon_sym_BSLASHk] = ACTIONS(19),
    [sym_decimal_escape] = ACTIONS(5),
    [aux_sym_character_class_escape_token1] = ACTIONS(21),
    [aux_sym_character_class_escape_token2] = ACTIONS(23),
    [sym_control_escape] = ACTIONS(25),
    [sym_control_letter_escape] = ACTIONS(5),
    [sym_identity_escape] = ACTIONS(25),
  },
  [3] = {
    [sym_pattern] = STATE(61),
    [sym_disjunction] = STATE(56),
    [sym_term] = STATE(49),
    [sym_start_assertion] = STATE(9),
    [sym_lookahead_assertion] = STATE(9),
    [sym_character_class] = STATE(9),
    [sym_anonymous_capturing_group] = STATE(9),
    [sym_named_capturing_group] = STATE(9),
    [sym_non_capturing_group] = STATE(9),
    [sym_backreference_escape] = STATE(9),
    [sym_character_class_escape] = STATE(9),
    [aux_sym_disjunction_repeat1] = STATE(47),
    [aux_sym_term_repeat1] = STATE(8),
    [anon_sym_PIPE] = ACTIONS(3),
    [sym_any_character] = ACTIONS(5),
    [anon_sym_CARET] = ACTIONS(7),
    [sym_end_assertion] = ACTIONS(5),
    [sym_boundary_assertion] = ACTIONS(5),
    [sym_non_boundary_assertion] = ACTIONS(5),
    [anon_sym_LPAREN_QMARK] = ACTIONS(9),
    [sym_pattern_character] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(15),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(17),
    [anon_sym_BSLASHk] = ACTIONS(19),
    [sym_decimal_escape] = ACTIONS(5),
    [aux_sym_character_class_escape_token1] = ACTIONS(21),
    [aux_sym_character_class_escape_token2] = ACTIONS(23),
    [sym_control_escape] = ACTIONS(25),
    [sym_control_letter_escape] = ACTIONS(5),
    [sym_identity_escape] = ACTIONS(25),
  },
  [4] = {
    [sym_pattern] = STATE(71),
    [sym_disjunction] = STATE(56),
    [sym_term] = STATE(49),
    [sym_start_assertion] = STATE(9),
    [sym_lookahead_assertion] = STATE(9),
    [sym_character_class] = STATE(9),
    [sym_anonymous_capturing_group] = STATE(9),
    [sym_named_capturing_group] = STATE(9),
    [sym_non_capturing_group] = STATE(9),
    [sym_backreference_escape] = STATE(9),
    [sym_character_class_escape] = STATE(9),
    [aux_sym_disjunction_repeat1] = STATE(47),
    [aux_sym_term_repeat1] = STATE(8),
    [anon_sym_PIPE] = ACTIONS(3),
    [sym_any_character] = ACTIONS(5),
    [anon_sym_CARET] = ACTIONS(7),
    [sym_end_assertion] = ACTIONS(5),
    [sym_boundary_assertion] = ACTIONS(5),
    [sym_non_boundary_assertion] = ACTIONS(5),
    [anon_sym_LPAREN_QMARK] = ACTIONS(9),
    [sym_pattern_character] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(15),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(17),
    [anon_sym_BSLASHk] = ACTIONS(19),
    [sym_decimal_escape] = ACTIONS(5),
    [aux_sym_character_class_escape_token1] = ACTIONS(21),
    [aux_sym_character_class_escape_token2] = ACTIONS(23),
    [sym_control_escape] = ACTIONS(25),
    [sym_control_letter_escape] = ACTIONS(5),
    [sym_identity_escape] = ACTIONS(25),
  },
  [5] = {
    [sym_pattern] = STATE(69),
    [sym_disjunction] = STATE(56),
    [sym_term] = STATE(49),
    [sym_start_assertion] = STATE(9),
    [sym_lookahead_assertion] = STATE(9),
    [sym_character_class] = STATE(9),
    [sym_anonymous_capturing_group] = STATE(9),
    [sym_named_capturing_group] = STATE(9),
    [sym_non_capturing_group] = STATE(9),
    [sym_backreference_escape] = STATE(9),
    [sym_character_class_escape] = STATE(9),
    [aux_sym_disjunction_repeat1] = STATE(47),
    [aux_sym_term_repeat1] = STATE(8),
    [anon_sym_PIPE] = ACTIONS(3),
    [sym_any_character] = ACTIONS(5),
    [anon_sym_CARET] = ACTIONS(7),
    [sym_end_assertion] = ACTIONS(5),
    [sym_boundary_assertion] = ACTIONS(5),
    [sym_non_boundary_assertion] = ACTIONS(5),
    [anon_sym_LPAREN_QMARK] = ACTIONS(9),
    [sym_pattern_character] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(15),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(17),
    [anon_sym_BSLASHk] = ACTIONS(19),
    [sym_decimal_escape] = ACTIONS(5),
    [aux_sym_character_class_escape_token1] = ACTIONS(21),
    [aux_sym_character_class_escape_token2] = ACTIONS(23),
    [sym_control_escape] = ACTIONS(25),
    [sym_control_letter_escape] = ACTIONS(5),
    [sym_identity_escape] = ACTIONS(25),
  },
  [6] = {
    [sym_term] = STATE(52),
    [sym_start_assertion] = STATE(9),
    [sym_lookahead_assertion] = STATE(9),
    [sym_character_class] = STATE(9),
    [sym_anonymous_capturing_group] = STATE(9),
    [sym_named_capturing_group] = STATE(9),
    [sym_non_capturing_group] = STATE(9),
    [sym_backreference_escape] = STATE(9),
    [sym_character_class_escape] = STATE(9),
    [aux_sym_term_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(27),
    [anon_sym_PIPE] = ACTIONS(27),
    [sym_any_character] = ACTIONS(5),
    [anon_sym_CARET] = ACTIONS(7),
    [sym_end_assertion] = ACTIONS(5),
    [sym_boundary_assertion] = ACTIONS(5),
    [sym_non_boundary_assertion] = ACTIONS(5),
    [anon_sym_LPAREN_QMARK] = ACTIONS(9),
    [anon_sym_RPAREN] = ACTIONS(27),
    [sym_pattern_character] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(15),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(17),
    [anon_sym_BSLASHk] = ACTIONS(19),
    [sym_decimal_escape] = ACTIONS(5),
    [aux_sym_character_class_escape_token1] = ACTIONS(21),
    [aux_sym_character_class_escape_token2] = ACTIONS(23),
    [sym_control_escape] = ACTIONS(25),
    [sym_control_letter_escape] = ACTIONS(5),
    [sym_identity_escape] = ACTIONS(25),
  },
  [7] = {
    [sym_start_assertion] = STATE(9),
    [sym_lookahead_assertion] = STATE(9),
    [sym_character_class] = STATE(9),
    [sym_anonymous_capturing_group] = STATE(9),
    [sym_named_capturing_group] = STATE(9),
    [sym_non_capturing_group] = STATE(9),
    [sym_backreference_escape] = STATE(9),
    [sym_character_class_escape] = STATE(9),
    [aux_sym_term_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(29),
    [anon_sym_PIPE] = ACTIONS(29),
    [sym_any_character] = ACTIONS(31),
    [anon_sym_CARET] = ACTIONS(34),
    [sym_end_assertion] = ACTIONS(31),
    [sym_boundary_assertion] = ACTIONS(31),
    [sym_non_boundary_assertion] = ACTIONS(31),
    [anon_sym_LPAREN_QMARK] = ACTIONS(37),
    [anon_sym_RPAREN] = ACTIONS(29),
    [sym_pattern_character] = ACTIONS(31),
    [anon_sym_LBRACK] = ACTIONS(40),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(46),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(49),
    [anon_sym_BSLASHk] = ACTIONS(52),
    [sym_decimal_escape] = ACTIONS(31),
    [aux_sym_character_class_escape_token1] = ACTIONS(55),
    [aux_sym_character_class_escape_token2] = ACTIONS(58),
    [sym_control_escape] = ACTIONS(61),
    [sym_control_letter_escape] = ACTIONS(31),
    [sym_identity_escape] = ACTIONS(61),
  },
  [8] = {
    [sym_start_assertion] = STATE(9),
    [sym_lookahead_assertion] = STATE(9),
    [sym_character_class] = STATE(9),
    [sym_anonymous_capturing_group] = STATE(9),
    [sym_named_capturing_group] = STATE(9),
    [sym_non_capturing_group] = STATE(9),
    [sym_backreference_escape] = STATE(9),
    [sym_character_class_escape] = STATE(9),
    [aux_sym_term_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(64),
    [anon_sym_PIPE] = ACTIONS(64),
    [sym_any_character] = ACTIONS(5),
    [anon_sym_CARET] = ACTIONS(7),
    [sym_end_assertion] = ACTIONS(5),
    [sym_boundary_assertion] = ACTIONS(5),
    [sym_non_boundary_assertion] = ACTIONS(5),
    [anon_sym_LPAREN_QMARK] = ACTIONS(9),
    [anon_sym_RPAREN] = ACTIONS(64),
    [sym_pattern_character] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(15),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(17),
    [anon_sym_BSLASHk] = ACTIONS(19),
    [sym_decimal_escape] = ACTIONS(5),
    [aux_sym_character_class_escape_token1] = ACTIONS(21),
    [aux_sym_character_class_escape_token2] = ACTIONS(23),
    [sym_control_escape] = ACTIONS(25),
    [sym_control_letter_escape] = ACTIONS(5),
    [sym_identity_escape] = ACTIONS(25),
  },
  [9] = {
    [sym_zero_or_more] = STATE(27),
    [sym_one_or_more] = STATE(27),
    [sym_optional] = STATE(27),
    [sym_count_quantifier] = STATE(27),
    [ts_builtin_sym_end] = ACTIONS(66),
    [anon_sym_PIPE] = ACTIONS(66),
    [sym_any_character] = ACTIONS(66),
    [anon_sym_CARET] = ACTIONS(66),
    [sym_end_assertion] = ACTIONS(66),
    [sym_boundary_assertion] = ACTIONS(66),
    [sym_non_boundary_assertion] = ACTIONS(66),
    [anon_sym_LPAREN_QMARK] = ACTIONS(68),
    [anon_sym_RPAREN] = ACTIONS(66),
    [sym_pattern_character] = ACTIONS(66),
    [anon_sym_LBRACK] = ACTIONS(66),
    [anon_sym_LPAREN] = ACTIONS(68),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(66),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(66),
    [anon_sym_STAR] = ACTIONS(70),
    [anon_sym_QMARK] = ACTIONS(72),
    [anon_sym_PLUS] = ACTIONS(74),
    [anon_sym_LBRACE] = ACTIONS(76),
    [anon_sym_BSLASHk] = ACTIONS(66),
    [sym_decimal_escape] = ACTIONS(66),
    [aux_sym_character_class_escape_token1] = ACTIONS(66),
    [aux_sym_character_class_escape_token2] = ACTIONS(66),
    [sym_control_escape] = ACTIONS(68),
    [sym_control_letter_escape] = ACTIONS(66),
    [sym_identity_escape] = ACTIONS(68),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(78),
    [anon_sym_PIPE] = ACTIONS(78),
    [sym_any_character] = ACTIONS(78),
    [anon_sym_CARET] = ACTIONS(78),
    [sym_end_assertion] = ACTIONS(78),
    [sym_boundary_assertion] = ACTIONS(78),
    [sym_non_boundary_assertion] = ACTIONS(78),
    [anon_sym_LPAREN_QMARK] = ACTIONS(80),
    [anon_sym_RPAREN] = ACTIONS(78),
    [sym_pattern_character] = ACTIONS(78),
    [anon_sym_LBRACK] = ACTIONS(78),
    [anon_sym_LPAREN] = ACTIONS(80),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(78),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(78),
    [anon_sym_STAR] = ACTIONS(78),
    [anon_sym_QMARK] = ACTIONS(78),
    [anon_sym_PLUS] = ACTIONS(78),
    [anon_sym_LBRACE] = ACTIONS(78),
    [anon_sym_BSLASHk] = ACTIONS(78),
    [sym_decimal_escape] = ACTIONS(78),
    [aux_sym_character_class_escape_token1] = ACTIONS(78),
    [aux_sym_character_class_escape_token2] = ACTIONS(78),
    [sym_control_escape] = ACTIONS(80),
    [sym_control_letter_escape] = ACTIONS(78),
    [sym_identity_escape] = ACTIONS(80),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(82),
    [anon_sym_PIPE] = ACTIONS(82),
    [sym_any_character] = ACTIONS(82),
    [anon_sym_CARET] = ACTIONS(82),
    [sym_end_assertion] = ACTIONS(82),
    [sym_boundary_assertion] = ACTIONS(82),
    [sym_non_boundary_assertion] = ACTIONS(82),
    [anon_sym_LPAREN_QMARK] = ACTIONS(84),
    [anon_sym_RPAREN] = ACTIONS(82),
    [sym_pattern_character] = ACTIONS(82),
    [anon_sym_LBRACK] = ACTIONS(82),
    [anon_sym_LPAREN] = ACTIONS(84),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(82),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(82),
    [anon_sym_STAR] = ACTIONS(82),
    [anon_sym_QMARK] = ACTIONS(82),
    [anon_sym_PLUS] = ACTIONS(82),
    [anon_sym_LBRACE] = ACTIONS(82),
    [anon_sym_BSLASHk] = ACTIONS(82),
    [sym_decimal_escape] = ACTIONS(82),
    [aux_sym_character_class_escape_token1] = ACTIONS(82),
    [aux_sym_character_class_escape_token2] = ACTIONS(82),
    [sym_control_escape] = ACTIONS(84),
    [sym_control_letter_escape] = ACTIONS(82),
    [sym_identity_escape] = ACTIONS(84),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(86),
    [anon_sym_PIPE] = ACTIONS(86),
    [sym_any_character] = ACTIONS(86),
    [anon_sym_CARET] = ACTIONS(86),
    [sym_end_assertion] = ACTIONS(86),
    [sym_boundary_assertion] = ACTIONS(86),
    [sym_non_boundary_assertion] = ACTIONS(86),
    [anon_sym_LPAREN_QMARK] = ACTIONS(88),
    [anon_sym_RPAREN] = ACTIONS(86),
    [sym_pattern_character] = ACTIONS(86),
    [anon_sym_LBRACK] = ACTIONS(86),
    [anon_sym_LPAREN] = ACTIONS(88),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(86),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(86),
    [anon_sym_STAR] = ACTIONS(86),
    [anon_sym_QMARK] = ACTIONS(86),
    [anon_sym_PLUS] = ACTIONS(86),
    [anon_sym_LBRACE] = ACTIONS(86),
    [anon_sym_BSLASHk] = ACTIONS(86),
    [sym_decimal_escape] = ACTIONS(86),
    [aux_sym_character_class_escape_token1] = ACTIONS(86),
    [aux_sym_character_class_escape_token2] = ACTIONS(86),
    [sym_control_escape] = ACTIONS(88),
    [sym_control_letter_escape] = ACTIONS(86),
    [sym_identity_escape] = ACTIONS(88),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(90),
    [anon_sym_PIPE] = ACTIONS(90),
    [sym_any_character] = ACTIONS(90),
    [anon_sym_CARET] = ACTIONS(90),
    [sym_end_assertion] = ACTIONS(90),
    [sym_boundary_assertion] = ACTIONS(90),
    [sym_non_boundary_assertion] = ACTIONS(90),
    [anon_sym_LPAREN_QMARK] = ACTIONS(92),
    [anon_sym_RPAREN] = ACTIONS(90),
    [sym_pattern_character] = ACTIONS(90),
    [anon_sym_LBRACK] = ACTIONS(90),
    [anon_sym_LPAREN] = ACTIONS(92),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(90),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(90),
    [anon_sym_STAR] = ACTIONS(90),
    [anon_sym_QMARK] = ACTIONS(90),
    [anon_sym_PLUS] = ACTIONS(90),
    [anon_sym_LBRACE] = ACTIONS(90),
    [anon_sym_BSLASHk] = ACTIONS(90),
    [sym_decimal_escape] = ACTIONS(90),
    [aux_sym_character_class_escape_token1] = ACTIONS(90),
    [aux_sym_character_class_escape_token2] = ACTIONS(90),
    [sym_control_escape] = ACTIONS(92),
    [sym_control_letter_escape] = ACTIONS(90),
    [sym_identity_escape] = ACTIONS(92),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(94),
    [anon_sym_PIPE] = ACTIONS(94),
    [sym_any_character] = ACTIONS(94),
    [anon_sym_CARET] = ACTIONS(94),
    [sym_end_assertion] = ACTIONS(94),
    [sym_boundary_assertion] = ACTIONS(94),
    [sym_non_boundary_assertion] = ACTIONS(94),
    [anon_sym_LPAREN_QMARK] = ACTIONS(96),
    [anon_sym_RPAREN] = ACTIONS(94),
    [sym_pattern_character] = ACTIONS(94),
    [anon_sym_LBRACK] = ACTIONS(94),
    [anon_sym_LPAREN] = ACTIONS(96),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(94),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(94),
    [anon_sym_STAR] = ACTIONS(94),
    [anon_sym_QMARK] = ACTIONS(94),
    [anon_sym_PLUS] = ACTIONS(94),
    [anon_sym_LBRACE] = ACTIONS(94),
    [anon_sym_BSLASHk] = ACTIONS(94),
    [sym_decimal_escape] = ACTIONS(94),
    [aux_sym_character_class_escape_token1] = ACTIONS(94),
    [aux_sym_character_class_escape_token2] = ACTIONS(94),
    [sym_control_escape] = ACTIONS(96),
    [sym_control_letter_escape] = ACTIONS(94),
    [sym_identity_escape] = ACTIONS(96),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(98),
    [anon_sym_PIPE] = ACTIONS(98),
    [sym_any_character] = ACTIONS(98),
    [anon_sym_CARET] = ACTIONS(98),
    [sym_end_assertion] = ACTIONS(98),
    [sym_boundary_assertion] = ACTIONS(98),
    [sym_non_boundary_assertion] = ACTIONS(98),
    [anon_sym_LPAREN_QMARK] = ACTIONS(100),
    [anon_sym_RPAREN] = ACTIONS(98),
    [sym_pattern_character] = ACTIONS(98),
    [anon_sym_LBRACK] = ACTIONS(98),
    [anon_sym_LPAREN] = ACTIONS(100),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(98),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(98),
    [anon_sym_STAR] = ACTIONS(98),
    [anon_sym_QMARK] = ACTIONS(98),
    [anon_sym_PLUS] = ACTIONS(98),
    [anon_sym_LBRACE] = ACTIONS(98),
    [anon_sym_BSLASHk] = ACTIONS(98),
    [sym_decimal_escape] = ACTIONS(98),
    [aux_sym_character_class_escape_token1] = ACTIONS(98),
    [aux_sym_character_class_escape_token2] = ACTIONS(98),
    [sym_control_escape] = ACTIONS(100),
    [sym_control_letter_escape] = ACTIONS(98),
    [sym_identity_escape] = ACTIONS(100),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(102),
    [anon_sym_PIPE] = ACTIONS(102),
    [sym_any_character] = ACTIONS(102),
    [anon_sym_CARET] = ACTIONS(102),
    [sym_end_assertion] = ACTIONS(102),
    [sym_boundary_assertion] = ACTIONS(102),
    [sym_non_boundary_assertion] = ACTIONS(102),
    [anon_sym_LPAREN_QMARK] = ACTIONS(104),
    [anon_sym_RPAREN] = ACTIONS(102),
    [sym_pattern_character] = ACTIONS(102),
    [anon_sym_LBRACK] = ACTIONS(102),
    [anon_sym_LPAREN] = ACTIONS(104),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(102),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(102),
    [anon_sym_STAR] = ACTIONS(102),
    [anon_sym_QMARK] = ACTIONS(102),
    [anon_sym_PLUS] = ACTIONS(102),
    [anon_sym_LBRACE] = ACTIONS(102),
    [anon_sym_BSLASHk] = ACTIONS(102),
    [sym_decimal_escape] = ACTIONS(102),
    [aux_sym_character_class_escape_token1] = ACTIONS(102),
    [aux_sym_character_class_escape_token2] = ACTIONS(102),
    [sym_control_escape] = ACTIONS(104),
    [sym_control_letter_escape] = ACTIONS(102),
    [sym_identity_escape] = ACTIONS(104),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(106),
    [anon_sym_PIPE] = ACTIONS(106),
    [sym_any_character] = ACTIONS(106),
    [anon_sym_CARET] = ACTIONS(106),
    [sym_end_assertion] = ACTIONS(106),
    [sym_boundary_assertion] = ACTIONS(106),
    [sym_non_boundary_assertion] = ACTIONS(106),
    [anon_sym_LPAREN_QMARK] = ACTIONS(108),
    [anon_sym_RPAREN] = ACTIONS(106),
    [sym_pattern_character] = ACTIONS(106),
    [anon_sym_LBRACK] = ACTIONS(106),
    [anon_sym_LPAREN] = ACTIONS(108),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(106),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(106),
    [anon_sym_STAR] = ACTIONS(106),
    [anon_sym_QMARK] = ACTIONS(106),
    [anon_sym_PLUS] = ACTIONS(106),
    [anon_sym_LBRACE] = ACTIONS(106),
    [anon_sym_BSLASHk] = ACTIONS(106),
    [sym_decimal_escape] = ACTIONS(106),
    [aux_sym_character_class_escape_token1] = ACTIONS(106),
    [aux_sym_character_class_escape_token2] = ACTIONS(106),
    [sym_control_escape] = ACTIONS(108),
    [sym_control_letter_escape] = ACTIONS(106),
    [sym_identity_escape] = ACTIONS(108),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(110),
    [anon_sym_PIPE] = ACTIONS(110),
    [sym_any_character] = ACTIONS(110),
    [anon_sym_CARET] = ACTIONS(110),
    [sym_end_assertion] = ACTIONS(110),
    [sym_boundary_assertion] = ACTIONS(110),
    [sym_non_boundary_assertion] = ACTIONS(110),
    [anon_sym_LPAREN_QMARK] = ACTIONS(112),
    [anon_sym_RPAREN] = ACTIONS(110),
    [sym_pattern_character] = ACTIONS(110),
    [anon_sym_LBRACK] = ACTIONS(110),
    [anon_sym_LPAREN] = ACTIONS(112),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(110),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(110),
    [anon_sym_STAR] = ACTIONS(110),
    [anon_sym_QMARK] = ACTIONS(110),
    [anon_sym_PLUS] = ACTIONS(110),
    [anon_sym_LBRACE] = ACTIONS(110),
    [anon_sym_BSLASHk] = ACTIONS(110),
    [sym_decimal_escape] = ACTIONS(110),
    [aux_sym_character_class_escape_token1] = ACTIONS(110),
    [aux_sym_character_class_escape_token2] = ACTIONS(110),
    [sym_control_escape] = ACTIONS(112),
    [sym_control_letter_escape] = ACTIONS(110),
    [sym_identity_escape] = ACTIONS(112),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(114),
    [anon_sym_PIPE] = ACTIONS(114),
    [sym_any_character] = ACTIONS(114),
    [anon_sym_CARET] = ACTIONS(114),
    [sym_end_assertion] = ACTIONS(114),
    [sym_boundary_assertion] = ACTIONS(114),
    [sym_non_boundary_assertion] = ACTIONS(114),
    [anon_sym_LPAREN_QMARK] = ACTIONS(116),
    [anon_sym_RPAREN] = ACTIONS(114),
    [sym_pattern_character] = ACTIONS(114),
    [anon_sym_LBRACK] = ACTIONS(114),
    [anon_sym_LPAREN] = ACTIONS(116),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(114),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(114),
    [anon_sym_STAR] = ACTIONS(114),
    [anon_sym_QMARK] = ACTIONS(114),
    [anon_sym_PLUS] = ACTIONS(114),
    [anon_sym_LBRACE] = ACTIONS(114),
    [anon_sym_BSLASHk] = ACTIONS(114),
    [sym_decimal_escape] = ACTIONS(114),
    [aux_sym_character_class_escape_token1] = ACTIONS(114),
    [aux_sym_character_class_escape_token2] = ACTIONS(114),
    [sym_control_escape] = ACTIONS(116),
    [sym_control_letter_escape] = ACTIONS(114),
    [sym_identity_escape] = ACTIONS(116),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(118),
    [anon_sym_PIPE] = ACTIONS(118),
    [sym_any_character] = ACTIONS(118),
    [anon_sym_CARET] = ACTIONS(118),
    [sym_end_assertion] = ACTIONS(118),
    [sym_boundary_assertion] = ACTIONS(118),
    [sym_non_boundary_assertion] = ACTIONS(118),
    [anon_sym_LPAREN_QMARK] = ACTIONS(120),
    [anon_sym_RPAREN] = ACTIONS(118),
    [sym_pattern_character] = ACTIONS(118),
    [anon_sym_LBRACK] = ACTIONS(118),
    [anon_sym_LPAREN] = ACTIONS(120),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(118),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(118),
    [anon_sym_STAR] = ACTIONS(118),
    [anon_sym_QMARK] = ACTIONS(118),
    [anon_sym_PLUS] = ACTIONS(118),
    [anon_sym_LBRACE] = ACTIONS(118),
    [anon_sym_BSLASHk] = ACTIONS(118),
    [sym_decimal_escape] = ACTIONS(118),
    [aux_sym_character_class_escape_token1] = ACTIONS(118),
    [aux_sym_character_class_escape_token2] = ACTIONS(118),
    [sym_control_escape] = ACTIONS(120),
    [sym_control_letter_escape] = ACTIONS(118),
    [sym_identity_escape] = ACTIONS(120),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(122),
    [anon_sym_PIPE] = ACTIONS(122),
    [sym_any_character] = ACTIONS(122),
    [anon_sym_CARET] = ACTIONS(122),
    [sym_end_assertion] = ACTIONS(122),
    [sym_boundary_assertion] = ACTIONS(122),
    [sym_non_boundary_assertion] = ACTIONS(122),
    [anon_sym_LPAREN_QMARK] = ACTIONS(124),
    [anon_sym_RPAREN] = ACTIONS(122),
    [sym_pattern_character] = ACTIONS(122),
    [anon_sym_LBRACK] = ACTIONS(122),
    [anon_sym_LPAREN] = ACTIONS(124),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(122),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(122),
    [anon_sym_QMARK] = ACTIONS(126),
    [anon_sym_BSLASHk] = ACTIONS(122),
    [sym_decimal_escape] = ACTIONS(122),
    [aux_sym_character_class_escape_token1] = ACTIONS(122),
    [aux_sym_character_class_escape_token2] = ACTIONS(122),
    [sym_control_escape] = ACTIONS(124),
    [sym_control_letter_escape] = ACTIONS(122),
    [sym_identity_escape] = ACTIONS(124),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(128),
    [anon_sym_PIPE] = ACTIONS(128),
    [sym_any_character] = ACTIONS(128),
    [anon_sym_CARET] = ACTIONS(128),
    [sym_end_assertion] = ACTIONS(128),
    [sym_boundary_assertion] = ACTIONS(128),
    [sym_non_boundary_assertion] = ACTIONS(128),
    [anon_sym_LPAREN_QMARK] = ACTIONS(130),
    [anon_sym_RPAREN] = ACTIONS(128),
    [sym_pattern_character] = ACTIONS(128),
    [anon_sym_LBRACK] = ACTIONS(128),
    [anon_sym_LPAREN] = ACTIONS(130),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(128),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(128),
    [anon_sym_QMARK] = ACTIONS(132),
    [anon_sym_BSLASHk] = ACTIONS(128),
    [sym_decimal_escape] = ACTIONS(128),
    [aux_sym_character_class_escape_token1] = ACTIONS(128),
    [aux_sym_character_class_escape_token2] = ACTIONS(128),
    [sym_control_escape] = ACTIONS(130),
    [sym_control_letter_escape] = ACTIONS(128),
    [sym_identity_escape] = ACTIONS(130),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(134),
    [anon_sym_PIPE] = ACTIONS(134),
    [sym_any_character] = ACTIONS(134),
    [anon_sym_CARET] = ACTIONS(134),
    [sym_end_assertion] = ACTIONS(134),
    [sym_boundary_assertion] = ACTIONS(134),
    [sym_non_boundary_assertion] = ACTIONS(134),
    [anon_sym_LPAREN_QMARK] = ACTIONS(136),
    [anon_sym_RPAREN] = ACTIONS(134),
    [sym_pattern_character] = ACTIONS(134),
    [anon_sym_LBRACK] = ACTIONS(134),
    [anon_sym_LPAREN] = ACTIONS(136),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(134),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(134),
    [anon_sym_QMARK] = ACTIONS(138),
    [anon_sym_BSLASHk] = ACTIONS(134),
    [sym_decimal_escape] = ACTIONS(134),
    [aux_sym_character_class_escape_token1] = ACTIONS(134),
    [aux_sym_character_class_escape_token2] = ACTIONS(134),
    [sym_control_escape] = ACTIONS(136),
    [sym_control_letter_escape] = ACTIONS(134),
    [sym_identity_escape] = ACTIONS(136),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(140),
    [anon_sym_PIPE] = ACTIONS(140),
    [sym_any_character] = ACTIONS(140),
    [anon_sym_CARET] = ACTIONS(140),
    [sym_end_assertion] = ACTIONS(140),
    [sym_boundary_assertion] = ACTIONS(140),
    [sym_non_boundary_assertion] = ACTIONS(140),
    [anon_sym_LPAREN_QMARK] = ACTIONS(142),
    [anon_sym_RPAREN] = ACTIONS(140),
    [sym_pattern_character] = ACTIONS(140),
    [anon_sym_LBRACK] = ACTIONS(140),
    [anon_sym_LPAREN] = ACTIONS(142),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(140),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(140),
    [anon_sym_QMARK] = ACTIONS(144),
    [anon_sym_BSLASHk] = ACTIONS(140),
    [sym_decimal_escape] = ACTIONS(140),
    [aux_sym_character_class_escape_token1] = ACTIONS(140),
    [aux_sym_character_class_escape_token2] = ACTIONS(140),
    [sym_control_escape] = ACTIONS(142),
    [sym_control_letter_escape] = ACTIONS(140),
    [sym_identity_escape] = ACTIONS(142),
  },
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(146),
    [anon_sym_PIPE] = ACTIONS(146),
    [sym_any_character] = ACTIONS(146),
    [anon_sym_CARET] = ACTIONS(146),
    [sym_end_assertion] = ACTIONS(146),
    [sym_boundary_assertion] = ACTIONS(146),
    [sym_non_boundary_assertion] = ACTIONS(146),
    [anon_sym_LPAREN_QMARK] = ACTIONS(148),
    [anon_sym_RPAREN] = ACTIONS(146),
    [sym_pattern_character] = ACTIONS(146),
    [anon_sym_LBRACK] = ACTIONS(146),
    [anon_sym_LPAREN] = ACTIONS(148),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(146),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(146),
    [anon_sym_QMARK] = ACTIONS(150),
    [anon_sym_BSLASHk] = ACTIONS(146),
    [sym_decimal_escape] = ACTIONS(146),
    [aux_sym_character_class_escape_token1] = ACTIONS(146),
    [aux_sym_character_class_escape_token2] = ACTIONS(146),
    [sym_control_escape] = ACTIONS(148),
    [sym_control_letter_escape] = ACTIONS(146),
    [sym_identity_escape] = ACTIONS(148),
  },
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(152),
    [anon_sym_PIPE] = ACTIONS(152),
    [sym_any_character] = ACTIONS(152),
    [anon_sym_CARET] = ACTIONS(152),
    [sym_end_assertion] = ACTIONS(152),
    [sym_boundary_assertion] = ACTIONS(152),
    [sym_non_boundary_assertion] = ACTIONS(152),
    [anon_sym_LPAREN_QMARK] = ACTIONS(154),
    [anon_sym_RPAREN] = ACTIONS(152),
    [sym_pattern_character] = ACTIONS(152),
    [anon_sym_LBRACK] = ACTIONS(152),
    [anon_sym_LPAREN] = ACTIONS(154),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(152),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(152),
    [anon_sym_BSLASHk] = ACTIONS(152),
    [sym_decimal_escape] = ACTIONS(152),
    [aux_sym_character_class_escape_token1] = ACTIONS(152),
    [aux_sym_character_class_escape_token2] = ACTIONS(152),
    [sym_control_escape] = ACTIONS(154),
    [sym_control_letter_escape] = ACTIONS(152),
    [sym_identity_escape] = ACTIONS(154),
  },
  [27] = {
    [ts_builtin_sym_end] = ACTIONS(29),
    [anon_sym_PIPE] = ACTIONS(29),
    [sym_any_character] = ACTIONS(29),
    [anon_sym_CARET] = ACTIONS(29),
    [sym_end_assertion] = ACTIONS(29),
    [sym_boundary_assertion] = ACTIONS(29),
    [sym_non_boundary_assertion] = ACTIONS(29),
    [anon_sym_LPAREN_QMARK] = ACTIONS(156),
    [anon_sym_RPAREN] = ACTIONS(29),
    [sym_pattern_character] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(156),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(29),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(29),
    [anon_sym_BSLASHk] = ACTIONS(29),
    [sym_decimal_escape] = ACTIONS(29),
    [aux_sym_character_class_escape_token1] = ACTIONS(29),
    [aux_sym_character_class_escape_token2] = ACTIONS(29),
    [sym_control_escape] = ACTIONS(156),
    [sym_control_letter_escape] = ACTIONS(29),
    [sym_identity_escape] = ACTIONS(156),
  },
  [28] = {
    [ts_builtin_sym_end] = ACTIONS(158),
    [anon_sym_PIPE] = ACTIONS(158),
    [sym_any_character] = ACTIONS(158),
    [anon_sym_CARET] = ACTIONS(158),
    [sym_end_assertion] = ACTIONS(158),
    [sym_boundary_assertion] = ACTIONS(158),
    [sym_non_boundary_assertion] = ACTIONS(158),
    [anon_sym_LPAREN_QMARK] = ACTIONS(160),
    [anon_sym_RPAREN] = ACTIONS(158),
    [sym_pattern_character] = ACTIONS(158),
    [anon_sym_LBRACK] = ACTIONS(158),
    [anon_sym_LPAREN] = ACTIONS(160),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(158),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(158),
    [anon_sym_BSLASHk] = ACTIONS(158),
    [sym_decimal_escape] = ACTIONS(158),
    [aux_sym_character_class_escape_token1] = ACTIONS(158),
    [aux_sym_character_class_escape_token2] = ACTIONS(158),
    [sym_control_escape] = ACTIONS(160),
    [sym_control_letter_escape] = ACTIONS(158),
    [sym_identity_escape] = ACTIONS(160),
  },
  [29] = {
    [ts_builtin_sym_end] = ACTIONS(162),
    [anon_sym_PIPE] = ACTIONS(162),
    [sym_any_character] = ACTIONS(162),
    [anon_sym_CARET] = ACTIONS(162),
    [sym_end_assertion] = ACTIONS(162),
    [sym_boundary_assertion] = ACTIONS(162),
    [sym_non_boundary_assertion] = ACTIONS(162),
    [anon_sym_LPAREN_QMARK] = ACTIONS(164),
    [anon_sym_RPAREN] = ACTIONS(162),
    [sym_pattern_character] = ACTIONS(162),
    [anon_sym_LBRACK] = ACTIONS(162),
    [anon_sym_LPAREN] = ACTIONS(164),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(162),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(162),
    [anon_sym_BSLASHk] = ACTIONS(162),
    [sym_decimal_escape] = ACTIONS(162),
    [aux_sym_character_class_escape_token1] = ACTIONS(162),
    [aux_sym_character_class_escape_token2] = ACTIONS(162),
    [sym_control_escape] = ACTIONS(164),
    [sym_control_letter_escape] = ACTIONS(162),
    [sym_identity_escape] = ACTIONS(164),
  },
  [30] = {
    [ts_builtin_sym_end] = ACTIONS(166),
    [anon_sym_PIPE] = ACTIONS(166),
    [sym_any_character] = ACTIONS(166),
    [anon_sym_CARET] = ACTIONS(166),
    [sym_end_assertion] = ACTIONS(166),
    [sym_boundary_assertion] = ACTIONS(166),
    [sym_non_boundary_assertion] = ACTIONS(166),
    [anon_sym_LPAREN_QMARK] = ACTIONS(168),
    [anon_sym_RPAREN] = ACTIONS(166),
    [sym_pattern_character] = ACTIONS(166),
    [anon_sym_LBRACK] = ACTIONS(166),
    [anon_sym_LPAREN] = ACTIONS(168),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(166),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(166),
    [anon_sym_BSLASHk] = ACTIONS(166),
    [sym_decimal_escape] = ACTIONS(166),
    [aux_sym_character_class_escape_token1] = ACTIONS(166),
    [aux_sym_character_class_escape_token2] = ACTIONS(166),
    [sym_control_escape] = ACTIONS(168),
    [sym_control_letter_escape] = ACTIONS(166),
    [sym_identity_escape] = ACTIONS(168),
  },
  [31] = {
    [ts_builtin_sym_end] = ACTIONS(170),
    [anon_sym_PIPE] = ACTIONS(170),
    [sym_any_character] = ACTIONS(170),
    [anon_sym_CARET] = ACTIONS(170),
    [sym_end_assertion] = ACTIONS(170),
    [sym_boundary_assertion] = ACTIONS(170),
    [sym_non_boundary_assertion] = ACTIONS(170),
    [anon_sym_LPAREN_QMARK] = ACTIONS(172),
    [anon_sym_RPAREN] = ACTIONS(170),
    [sym_pattern_character] = ACTIONS(170),
    [anon_sym_LBRACK] = ACTIONS(170),
    [anon_sym_LPAREN] = ACTIONS(172),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(170),
    [anon_sym_LPAREN_QMARK_COLON] = ACTIONS(170),
    [anon_sym_BSLASHk] = ACTIONS(170),
    [sym_decimal_escape] = ACTIONS(170),
    [aux_sym_character_class_escape_token1] = ACTIONS(170),
    [aux_sym_character_class_escape_token2] = ACTIONS(170),
    [sym_control_escape] = ACTIONS(172),
    [sym_control_letter_escape] = ACTIONS(170),
    [sym_identity_escape] = ACTIONS(172),
  },
  [32] = {
    [sym_class_range] = STATE(34),
    [sym_character_class_escape] = STATE(41),
    [aux_sym_character_class_repeat1] = STATE(34),
    [anon_sym_CARET] = ACTIONS(174),
    [anon_sym_RBRACK] = ACTIONS(176),
    [anon_sym_DASH] = ACTIONS(178),
    [anon_sym_BSLASH_DASH] = ACTIONS(180),
    [sym_class_character] = ACTIONS(180),
    [aux_sym_character_class_escape_token1] = ACTIONS(182),
    [aux_sym_character_class_escape_token2] = ACTIONS(184),
    [sym_control_escape] = ACTIONS(180),
    [sym_control_letter_escape] = ACTIONS(180),
    [sym_identity_escape] = ACTIONS(180),
  },
  [33] = {
    [sym_class_range] = STATE(33),
    [sym_character_class_escape] = STATE(41),
    [aux_sym_character_class_repeat1] = STATE(33),
    [anon_sym_RBRACK] = ACTIONS(186),
    [anon_sym_DASH] = ACTIONS(188),
    [anon_sym_BSLASH_DASH] = ACTIONS(191),
    [sym_class_character] = ACTIONS(194),
    [aux_sym_character_class_escape_token1] = ACTIONS(197),
    [aux_sym_character_class_escape_token2] = ACTIONS(200),
    [sym_control_escape] = ACTIONS(191),
    [sym_control_letter_escape] = ACTIONS(191),
    [sym_identity_escape] = ACTIONS(191),
  },
  [34] = {
    [sym_class_range] = STATE(33),
    [sym_character_class_escape] = STATE(41),
    [aux_sym_character_class_repeat1] = STATE(33),
    [anon_sym_RBRACK] = ACTIONS(203),
    [anon_sym_DASH] = ACTIONS(178),
    [anon_sym_BSLASH_DASH] = ACTIONS(180),
    [sym_class_character] = ACTIONS(205),
    [aux_sym_character_class_escape_token1] = ACTIONS(182),
    [aux_sym_character_class_escape_token2] = ACTIONS(184),
    [sym_control_escape] = ACTIONS(180),
    [sym_control_letter_escape] = ACTIONS(180),
    [sym_identity_escape] = ACTIONS(180),
  },
  [35] = {
    [sym_class_range] = STATE(36),
    [sym_character_class_escape] = STATE(41),
    [aux_sym_character_class_repeat1] = STATE(36),
    [anon_sym_RBRACK] = ACTIONS(203),
    [anon_sym_DASH] = ACTIONS(178),
    [anon_sym_BSLASH_DASH] = ACTIONS(180),
    [sym_class_character] = ACTIONS(205),
    [aux_sym_character_class_escape_token1] = ACTIONS(182),
    [aux_sym_character_class_escape_token2] = ACTIONS(184),
    [sym_control_escape] = ACTIONS(180),
    [sym_control_letter_escape] = ACTIONS(180),
    [sym_identity_escape] = ACTIONS(180),
  },
  [36] = {
    [sym_class_range] = STATE(33),
    [sym_character_class_escape] = STATE(41),
    [aux_sym_character_class_repeat1] = STATE(33),
    [anon_sym_RBRACK] = ACTIONS(207),
    [anon_sym_DASH] = ACTIONS(178),
    [anon_sym_BSLASH_DASH] = ACTIONS(180),
    [sym_class_character] = ACTIONS(205),
    [aux_sym_character_class_escape_token1] = ACTIONS(182),
    [aux_sym_character_class_escape_token2] = ACTIONS(184),
    [sym_control_escape] = ACTIONS(180),
    [sym_control_letter_escape] = ACTIONS(180),
    [sym_identity_escape] = ACTIONS(180),
  },
  [37] = {
    [anon_sym_RBRACK] = ACTIONS(84),
    [anon_sym_DASH] = ACTIONS(84),
    [anon_sym_BSLASH_DASH] = ACTIONS(84),
    [sym_class_character] = ACTIONS(82),
    [aux_sym_character_class_escape_token1] = ACTIONS(84),
    [aux_sym_character_class_escape_token2] = ACTIONS(84),
    [sym_control_escape] = ACTIONS(84),
    [sym_control_letter_escape] = ACTIONS(84),
    [sym_identity_escape] = ACTIONS(84),
  },
  [38] = {
    [anon_sym_RBRACK] = ACTIONS(108),
    [anon_sym_DASH] = ACTIONS(108),
    [anon_sym_BSLASH_DASH] = ACTIONS(108),
    [sym_class_character] = ACTIONS(106),
    [aux_sym_character_class_escape_token1] = ACTIONS(108),
    [aux_sym_character_class_escape_token2] = ACTIONS(108),
    [sym_control_escape] = ACTIONS(108),
    [sym_control_letter_escape] = ACTIONS(108),
    [sym_identity_escape] = ACTIONS(108),
  },
  [39] = {
    [anon_sym_RBRACK] = ACTIONS(209),
    [anon_sym_DASH] = ACTIONS(209),
    [anon_sym_BSLASH_DASH] = ACTIONS(209),
    [sym_class_character] = ACTIONS(211),
    [aux_sym_character_class_escape_token1] = ACTIONS(209),
    [aux_sym_character_class_escape_token2] = ACTIONS(209),
    [sym_control_escape] = ACTIONS(209),
    [sym_control_letter_escape] = ACTIONS(209),
    [sym_identity_escape] = ACTIONS(209),
  },
  [40] = {
    [anon_sym_RBRACK] = ACTIONS(213),
    [anon_sym_DASH] = ACTIONS(213),
    [anon_sym_BSLASH_DASH] = ACTIONS(213),
    [sym_class_character] = ACTIONS(215),
    [aux_sym_character_class_escape_token1] = ACTIONS(213),
    [aux_sym_character_class_escape_token2] = ACTIONS(213),
    [sym_control_escape] = ACTIONS(213),
    [sym_control_letter_escape] = ACTIONS(213),
    [sym_identity_escape] = ACTIONS(213),
  },
  [41] = {
    [anon_sym_RBRACK] = ACTIONS(217),
    [anon_sym_DASH] = ACTIONS(219),
    [anon_sym_BSLASH_DASH] = ACTIONS(217),
    [sym_class_character] = ACTIONS(221),
    [aux_sym_character_class_escape_token1] = ACTIONS(217),
    [aux_sym_character_class_escape_token2] = ACTIONS(217),
    [sym_control_escape] = ACTIONS(217),
    [sym_control_letter_escape] = ACTIONS(217),
    [sym_identity_escape] = ACTIONS(217),
  },
  [42] = {
    [anon_sym_RBRACK] = ACTIONS(223),
    [anon_sym_DASH] = ACTIONS(225),
    [anon_sym_BSLASH_DASH] = ACTIONS(223),
    [sym_class_character] = ACTIONS(227),
    [aux_sym_character_class_escape_token1] = ACTIONS(223),
    [aux_sym_character_class_escape_token2] = ACTIONS(223),
    [sym_control_escape] = ACTIONS(223),
    [sym_control_letter_escape] = ACTIONS(223),
    [sym_identity_escape] = ACTIONS(223),
  },
  [43] = {
    [anon_sym_RBRACK] = ACTIONS(229),
    [anon_sym_DASH] = ACTIONS(229),
    [anon_sym_BSLASH_DASH] = ACTIONS(229),
    [sym_class_character] = ACTIONS(231),
    [aux_sym_character_class_escape_token1] = ACTIONS(229),
    [aux_sym_character_class_escape_token2] = ACTIONS(229),
    [sym_control_escape] = ACTIONS(229),
    [sym_control_letter_escape] = ACTIONS(229),
    [sym_identity_escape] = ACTIONS(229),
  },
  [44] = {
    [anon_sym_RBRACK] = ACTIONS(233),
    [anon_sym_DASH] = ACTIONS(233),
    [anon_sym_BSLASH_DASH] = ACTIONS(233),
    [sym_class_character] = ACTIONS(235),
    [aux_sym_character_class_escape_token1] = ACTIONS(233),
    [aux_sym_character_class_escape_token2] = ACTIONS(233),
    [sym_control_escape] = ACTIONS(233),
    [sym_control_letter_escape] = ACTIONS(233),
    [sym_identity_escape] = ACTIONS(233),
  },
  [45] = {
    [sym_character_class_escape] = STATE(43),
    [anon_sym_DASH] = ACTIONS(237),
    [anon_sym_BSLASH_DASH] = ACTIONS(239),
    [sym_class_character] = ACTIONS(241),
    [aux_sym_character_class_escape_token1] = ACTIONS(182),
    [aux_sym_character_class_escape_token2] = ACTIONS(184),
    [sym_control_escape] = ACTIONS(239),
    [sym_control_letter_escape] = ACTIONS(239),
    [sym_identity_escape] = ACTIONS(239),
  },
  [46] = {
    [sym_character_class_escape] = STATE(39),
    [anon_sym_DASH] = ACTIONS(243),
    [anon_sym_BSLASH_DASH] = ACTIONS(245),
    [sym_class_character] = ACTIONS(247),
    [aux_sym_character_class_escape_token1] = ACTIONS(182),
    [aux_sym_character_class_escape_token2] = ACTIONS(184),
    [sym_control_escape] = ACTIONS(245),
    [sym_control_letter_escape] = ACTIONS(245),
    [sym_identity_escape] = ACTIONS(245),
  },
  [47] = {
    [aux_sym_disjunction_repeat1] = STATE(50),
    [ts_builtin_sym_end] = ACTIONS(249),
    [anon_sym_PIPE] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(249),
  },
  [48] = {
    [aux_sym_disjunction_repeat1] = STATE(50),
    [ts_builtin_sym_end] = ACTIONS(251),
    [anon_sym_PIPE] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(251),
  },
  [49] = {
    [aux_sym_disjunction_repeat1] = STATE(48),
    [ts_builtin_sym_end] = ACTIONS(253),
    [anon_sym_PIPE] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(253),
  },
  [50] = {
    [aux_sym_disjunction_repeat1] = STATE(50),
    [ts_builtin_sym_end] = ACTIONS(255),
    [anon_sym_PIPE] = ACTIONS(257),
    [anon_sym_RPAREN] = ACTIONS(255),
  },
  [51] = {
    [anon_sym_EQ] = ACTIONS(260),
    [anon_sym_BANG] = ACTIONS(260),
    [anon_sym_LT_EQ] = ACTIONS(260),
    [anon_sym_LT_BANG] = ACTIONS(260),
  },
  [52] = {
    [ts_builtin_sym_end] = ACTIONS(255),
    [anon_sym_PIPE] = ACTIONS(255),
    [anon_sym_RPAREN] = ACTIONS(255),
  },
  [53] = {
    [anon_sym_EQ] = ACTIONS(262),
    [anon_sym_RBRACE] = ACTIONS(264),
  },
  [54] = {
    [sym_unicode_property_value_expression] = STATE(72),
    [sym_unicode_property] = ACTIONS(266),
  },
  [55] = {
    [sym_unicode_property_value_expression] = STATE(62),
    [sym_unicode_property] = ACTIONS(266),
  },
  [56] = {
    [ts_builtin_sym_end] = ACTIONS(253),
    [anon_sym_RPAREN] = ACTIONS(253),
  },
  [57] = {
    [anon_sym_COMMA] = ACTIONS(268),
    [anon_sym_RBRACE] = ACTIONS(270),
  },
  [58] = {
    [sym_unicode_property] = ACTIONS(272),
  },
  [59] = {
    [sym_group_name] = ACTIONS(274),
  },
  [60] = {
    [anon_sym_RPAREN] = ACTIONS(276),
  },
  [61] = {
    [anon_sym_RPAREN] = ACTIONS(278),
  },
  [62] = {
    [anon_sym_RBRACE] = ACTIONS(280),
  },
  [63] = {
    [sym_group_name] = ACTIONS(282),
  },
  [64] = {
    [anon_sym_RBRACE] = ACTIONS(284),
  },
  [65] = {
    [sym_decimal_digits] = ACTIONS(286),
  },
  [66] = {
    [sym_decimal_digits] = ACTIONS(288),
  },
  [67] = {
    [anon_sym_RBRACE] = ACTIONS(290),
  },
  [68] = {
    [anon_sym_LBRACE] = ACTIONS(292),
  },
  [69] = {
    [anon_sym_RPAREN] = ACTIONS(294),
  },
  [70] = {
    [anon_sym_GT] = ACTIONS(296),
  },
  [71] = {
    [anon_sym_RPAREN] = ACTIONS(298),
  },
  [72] = {
    [anon_sym_RBRACE] = ACTIONS(300),
  },
  [73] = {
    [ts_builtin_sym_end] = ACTIONS(302),
  },
  [74] = {
    [anon_sym_LBRACE] = ACTIONS(304),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT(6),
  [5] = {.count = 1, .reusable = true}, SHIFT(9),
  [7] = {.count = 1, .reusable = true}, SHIFT(12),
  [9] = {.count = 1, .reusable = false}, SHIFT(51),
  [11] = {.count = 1, .reusable = true}, SHIFT(32),
  [13] = {.count = 1, .reusable = false}, SHIFT(4),
  [15] = {.count = 1, .reusable = true}, SHIFT(63),
  [17] = {.count = 1, .reusable = true}, SHIFT(5),
  [19] = {.count = 1, .reusable = true}, SHIFT(59),
  [21] = {.count = 1, .reusable = true}, SHIFT(11),
  [23] = {.count = 1, .reusable = true}, SHIFT(68),
  [25] = {.count = 1, .reusable = false}, SHIFT(9),
  [27] = {.count = 1, .reusable = true}, REDUCE(aux_sym_disjunction_repeat1, 1),
  [29] = {.count = 1, .reusable = true}, REDUCE(aux_sym_term_repeat1, 2),
  [31] = {.count = 2, .reusable = true}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(9),
  [34] = {.count = 2, .reusable = true}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(12),
  [37] = {.count = 2, .reusable = false}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(51),
  [40] = {.count = 2, .reusable = true}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(32),
  [43] = {.count = 2, .reusable = false}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(4),
  [46] = {.count = 2, .reusable = true}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(63),
  [49] = {.count = 2, .reusable = true}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(5),
  [52] = {.count = 2, .reusable = true}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(59),
  [55] = {.count = 2, .reusable = true}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(11),
  [58] = {.count = 2, .reusable = true}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(68),
  [61] = {.count = 2, .reusable = false}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(9),
  [64] = {.count = 1, .reusable = true}, REDUCE(sym_term, 1),
  [66] = {.count = 1, .reusable = true}, REDUCE(aux_sym_term_repeat1, 1),
  [68] = {.count = 1, .reusable = false}, REDUCE(aux_sym_term_repeat1, 1),
  [70] = {.count = 1, .reusable = true}, SHIFT(24),
  [72] = {.count = 1, .reusable = true}, SHIFT(22),
  [74] = {.count = 1, .reusable = true}, SHIFT(23),
  [76] = {.count = 1, .reusable = true}, SHIFT(66),
  [78] = {.count = 1, .reusable = true}, REDUCE(sym_lookahead_assertion, 4),
  [80] = {.count = 1, .reusable = false}, REDUCE(sym_lookahead_assertion, 4),
  [82] = {.count = 1, .reusable = true}, REDUCE(sym_character_class_escape, 1),
  [84] = {.count = 1, .reusable = false}, REDUCE(sym_character_class_escape, 1),
  [86] = {.count = 1, .reusable = true}, REDUCE(sym_start_assertion, 1),
  [88] = {.count = 1, .reusable = false}, REDUCE(sym_start_assertion, 1),
  [90] = {.count = 1, .reusable = true}, REDUCE(sym_non_capturing_group, 3),
  [92] = {.count = 1, .reusable = false}, REDUCE(sym_non_capturing_group, 3),
  [94] = {.count = 1, .reusable = true}, REDUCE(sym_character_class, 4),
  [96] = {.count = 1, .reusable = false}, REDUCE(sym_character_class, 4),
  [98] = {.count = 1, .reusable = true}, REDUCE(sym_anonymous_capturing_group, 3),
  [100] = {.count = 1, .reusable = false}, REDUCE(sym_anonymous_capturing_group, 3),
  [102] = {.count = 1, .reusable = true}, REDUCE(sym_character_class, 3),
  [104] = {.count = 1, .reusable = false}, REDUCE(sym_character_class, 3),
  [106] = {.count = 1, .reusable = true}, REDUCE(sym_character_class_escape, 4),
  [108] = {.count = 1, .reusable = false}, REDUCE(sym_character_class_escape, 4),
  [110] = {.count = 1, .reusable = true}, REDUCE(sym_named_capturing_group, 5),
  [112] = {.count = 1, .reusable = false}, REDUCE(sym_named_capturing_group, 5),
  [114] = {.count = 1, .reusable = true}, REDUCE(sym_backreference_escape, 2),
  [116] = {.count = 1, .reusable = false}, REDUCE(sym_backreference_escape, 2),
  [118] = {.count = 1, .reusable = true}, REDUCE(sym_character_class, 2),
  [120] = {.count = 1, .reusable = false}, REDUCE(sym_character_class, 2),
  [122] = {.count = 1, .reusable = true}, REDUCE(sym_count_quantifier, 3),
  [124] = {.count = 1, .reusable = false}, REDUCE(sym_count_quantifier, 3),
  [126] = {.count = 1, .reusable = true}, SHIFT(31),
  [128] = {.count = 1, .reusable = true}, REDUCE(sym_optional, 1),
  [130] = {.count = 1, .reusable = false}, REDUCE(sym_optional, 1),
  [132] = {.count = 1, .reusable = true}, SHIFT(29),
  [134] = {.count = 1, .reusable = true}, REDUCE(sym_one_or_more, 1),
  [136] = {.count = 1, .reusable = false}, REDUCE(sym_one_or_more, 1),
  [138] = {.count = 1, .reusable = true}, SHIFT(28),
  [140] = {.count = 1, .reusable = true}, REDUCE(sym_zero_or_more, 1),
  [142] = {.count = 1, .reusable = false}, REDUCE(sym_zero_or_more, 1),
  [144] = {.count = 1, .reusable = true}, SHIFT(30),
  [146] = {.count = 1, .reusable = true}, REDUCE(sym_count_quantifier, 5),
  [148] = {.count = 1, .reusable = false}, REDUCE(sym_count_quantifier, 5),
  [150] = {.count = 1, .reusable = true}, SHIFT(26),
  [152] = {.count = 1, .reusable = true}, REDUCE(sym_count_quantifier, 6, .production_id = 8),
  [154] = {.count = 1, .reusable = false}, REDUCE(sym_count_quantifier, 6, .production_id = 8),
  [156] = {.count = 1, .reusable = false}, REDUCE(aux_sym_term_repeat1, 2),
  [158] = {.count = 1, .reusable = true}, REDUCE(sym_one_or_more, 2, .production_id = 2),
  [160] = {.count = 1, .reusable = false}, REDUCE(sym_one_or_more, 2, .production_id = 2),
  [162] = {.count = 1, .reusable = true}, REDUCE(sym_optional, 2, .production_id = 2),
  [164] = {.count = 1, .reusable = false}, REDUCE(sym_optional, 2, .production_id = 2),
  [166] = {.count = 1, .reusable = true}, REDUCE(sym_zero_or_more, 2, .production_id = 2),
  [168] = {.count = 1, .reusable = false}, REDUCE(sym_zero_or_more, 2, .production_id = 2),
  [170] = {.count = 1, .reusable = true}, REDUCE(sym_count_quantifier, 4, .production_id = 6),
  [172] = {.count = 1, .reusable = false}, REDUCE(sym_count_quantifier, 4, .production_id = 6),
  [174] = {.count = 1, .reusable = false}, SHIFT(35),
  [176] = {.count = 1, .reusable = false}, SHIFT(20),
  [178] = {.count = 1, .reusable = false}, SHIFT(42),
  [180] = {.count = 1, .reusable = false}, SHIFT(41),
  [182] = {.count = 1, .reusable = false}, SHIFT(37),
  [184] = {.count = 1, .reusable = false}, SHIFT(74),
  [186] = {.count = 1, .reusable = false}, REDUCE(aux_sym_character_class_repeat1, 2),
  [188] = {.count = 2, .reusable = false}, REDUCE(aux_sym_character_class_repeat1, 2), SHIFT_REPEAT(42),
  [191] = {.count = 2, .reusable = false}, REDUCE(aux_sym_character_class_repeat1, 2), SHIFT_REPEAT(41),
  [194] = {.count = 2, .reusable = true}, REDUCE(aux_sym_character_class_repeat1, 2), SHIFT_REPEAT(41),
  [197] = {.count = 2, .reusable = false}, REDUCE(aux_sym_character_class_repeat1, 2), SHIFT_REPEAT(37),
  [200] = {.count = 2, .reusable = false}, REDUCE(aux_sym_character_class_repeat1, 2), SHIFT_REPEAT(74),
  [203] = {.count = 1, .reusable = false}, SHIFT(16),
  [205] = {.count = 1, .reusable = true}, SHIFT(41),
  [207] = {.count = 1, .reusable = false}, SHIFT(14),
  [209] = {.count = 1, .reusable = false}, REDUCE(sym_class_range, 3),
  [211] = {.count = 1, .reusable = true}, REDUCE(sym_class_range, 3),
  [213] = {.count = 1, .reusable = false}, REDUCE(sym_class_range, 3, .production_id = 5),
  [215] = {.count = 1, .reusable = true}, REDUCE(sym_class_range, 3, .production_id = 5),
  [217] = {.count = 1, .reusable = false}, REDUCE(aux_sym_character_class_repeat1, 1),
  [219] = {.count = 1, .reusable = false}, SHIFT(46),
  [221] = {.count = 1, .reusable = true}, REDUCE(aux_sym_character_class_repeat1, 1),
  [223] = {.count = 1, .reusable = false}, REDUCE(aux_sym_character_class_repeat1, 1, .production_id = 1),
  [225] = {.count = 1, .reusable = false}, SHIFT(45),
  [227] = {.count = 1, .reusable = true}, REDUCE(aux_sym_character_class_repeat1, 1, .production_id = 1),
  [229] = {.count = 1, .reusable = false}, REDUCE(sym_class_range, 3, .production_id = 1),
  [231] = {.count = 1, .reusable = true}, REDUCE(sym_class_range, 3, .production_id = 1),
  [233] = {.count = 1, .reusable = false}, REDUCE(sym_class_range, 3, .production_id = 4),
  [235] = {.count = 1, .reusable = true}, REDUCE(sym_class_range, 3, .production_id = 4),
  [237] = {.count = 1, .reusable = false}, SHIFT(44),
  [239] = {.count = 1, .reusable = false}, SHIFT(43),
  [241] = {.count = 1, .reusable = true}, SHIFT(43),
  [243] = {.count = 1, .reusable = false}, SHIFT(40),
  [245] = {.count = 1, .reusable = false}, SHIFT(39),
  [247] = {.count = 1, .reusable = true}, SHIFT(39),
  [249] = {.count = 1, .reusable = true}, REDUCE(sym_disjunction, 1),
  [251] = {.count = 1, .reusable = true}, REDUCE(sym_disjunction, 2),
  [253] = {.count = 1, .reusable = true}, REDUCE(sym_pattern, 1),
  [255] = {.count = 1, .reusable = true}, REDUCE(aux_sym_disjunction_repeat1, 2),
  [257] = {.count = 2, .reusable = true}, REDUCE(aux_sym_disjunction_repeat1, 2), SHIFT_REPEAT(6),
  [260] = {.count = 1, .reusable = true}, SHIFT(2),
  [262] = {.count = 1, .reusable = true}, SHIFT(58),
  [264] = {.count = 1, .reusable = true}, REDUCE(sym_unicode_property_value_expression, 1, .production_id = 3),
  [266] = {.count = 1, .reusable = true}, SHIFT(53),
  [268] = {.count = 1, .reusable = true}, SHIFT(65),
  [270] = {.count = 1, .reusable = true}, SHIFT(21),
  [272] = {.count = 1, .reusable = true}, SHIFT(67),
  [274] = {.count = 1, .reusable = true}, SHIFT(19),
  [276] = {.count = 1, .reusable = true}, SHIFT(10),
  [278] = {.count = 1, .reusable = true}, SHIFT(18),
  [280] = {.count = 1, .reusable = true}, SHIFT(17),
  [282] = {.count = 1, .reusable = true}, SHIFT(70),
  [284] = {.count = 1, .reusable = true}, SHIFT(25),
  [286] = {.count = 1, .reusable = true}, SHIFT(64),
  [288] = {.count = 1, .reusable = true}, SHIFT(57),
  [290] = {.count = 1, .reusable = true}, REDUCE(sym_unicode_property_value_expression, 3, .production_id = 7),
  [292] = {.count = 1, .reusable = true}, SHIFT(55),
  [294] = {.count = 1, .reusable = true}, SHIFT(13),
  [296] = {.count = 1, .reusable = true}, SHIFT(3),
  [298] = {.count = 1, .reusable = true}, SHIFT(15),
  [300] = {.count = 1, .reusable = true}, SHIFT(38),
  [302] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [304] = {.count = 1, .reusable = true}, SHIFT(54),
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
