#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 120
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 65
#define ALIAS_COUNT 2
#define TOKEN_COUNT 41
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 4

enum {
  anon_sym_tokens = 1,
  anon_sym_LBRACE = 2,
  anon_sym_RBRACE = 3,
  anon_sym_COLON = 4,
  sym_id = 5,
  anon_sym_text = 6,
  anon_sym_color = 7,
  anon_sym_asset = 8,
  anon_sym_switch = 9,
  anon_sym_dimension = 10,
  anon_sym_range = 11,
  sym__newlines = 12,
  aux_sym__str_token1 = 13,
  sym_asset = 14,
  anon_sym_STAR = 15,
  anon_sym_when = 16,
  sym_decimal_range = 17,
  sym_unit = 18,
  anon_sym_POUND = 19,
  aux_sym_hex_token1 = 20,
  aux_sym_hex_token2 = 21,
  aux_sym_hex_token3 = 22,
  aux_sym_hex_token4 = 23,
  sym_multi_line_comment = 24,
  sym_neg = 25,
  sym_num = 26,
  anon_sym_DOT = 27,
  sym_func_id = 28,
  anon_sym_LPAREN = 29,
  anon_sym_COMMA = 30,
  anon_sym_RPAREN = 31,
  anon_sym_PLUS = 32,
  anon_sym_DASH = 33,
  anon_sym_SLASH = 34,
  anon_sym_PERCENT = 35,
  sym_pos = 36,
  sym_ref = 37,
  sym_single_line_comment = 38,
  sym_str = 39,
  anon_sym_DOLLAR = 40,
  sym_file = 41,
  sym__tokens = 42,
  sym_group = 43,
  sym_def = 44,
  sym_type = 45,
  sym__exp = 46,
  sym__str = 47,
  sym_cond = 48,
  sym_dimension = 49,
  sym_hex = 50,
  sym_arithmetic = 51,
  sym_func = 52,
  sym__func = 53,
  sym_params = 54,
  sym_op = 55,
  sym_set = 56,
  sym__ref = 57,
  aux_sym_file_repeat1 = 58,
  aux_sym_group_repeat1 = 59,
  aux_sym_cond_repeat1 = 60,
  aux_sym_cond_repeat2 = 61,
  aux_sym_arithmetic_repeat1 = 62,
  aux_sym__func_repeat1 = 63,
  aux_sym_params_repeat1 = 64,
  alias_sym_exp = 65,
  alias_sym_tokens = 66,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_tokens] = "tokens",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COLON] = ":",
  [sym_id] = "id",
  [anon_sym_text] = "text",
  [anon_sym_color] = "color",
  [anon_sym_asset] = "asset",
  [anon_sym_switch] = "switch",
  [anon_sym_dimension] = "dimension",
  [anon_sym_range] = "range",
  [sym__newlines] = "_newlines",
  [aux_sym__str_token1] = "_str_token1",
  [sym_asset] = "asset",
  [anon_sym_STAR] = "*",
  [anon_sym_when] = "when",
  [sym_decimal_range] = "decimal_range",
  [sym_unit] = "unit",
  [anon_sym_POUND] = "#",
  [aux_sym_hex_token1] = "hex_token1",
  [aux_sym_hex_token2] = "hex_token2",
  [aux_sym_hex_token3] = "hex_token3",
  [aux_sym_hex_token4] = "hex_token4",
  [sym_multi_line_comment] = "multi_line_comment",
  [sym_neg] = "neg",
  [sym_num] = "num",
  [anon_sym_DOT] = ".",
  [sym_func_id] = "func_id",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_SLASH] = "/",
  [anon_sym_PERCENT] = "%",
  [sym_pos] = "pos",
  [sym_ref] = "ref",
  [sym_single_line_comment] = "single_line_comment",
  [sym_str] = "str",
  [anon_sym_DOLLAR] = "$",
  [sym_file] = "file",
  [sym__tokens] = "_tokens",
  [sym_group] = "group",
  [sym_def] = "def",
  [sym_type] = "type",
  [sym__exp] = "_exp",
  [sym__str] = "_str",
  [sym_cond] = "cond",
  [sym_dimension] = "dimension",
  [sym_hex] = "hex",
  [sym_arithmetic] = "arithmetic",
  [sym_func] = "func",
  [sym__func] = "_func",
  [sym_params] = "params",
  [sym_op] = "op",
  [sym_set] = "set",
  [sym__ref] = "_ref",
  [aux_sym_file_repeat1] = "file_repeat1",
  [aux_sym_group_repeat1] = "group_repeat1",
  [aux_sym_cond_repeat1] = "cond_repeat1",
  [aux_sym_cond_repeat2] = "cond_repeat2",
  [aux_sym_arithmetic_repeat1] = "arithmetic_repeat1",
  [aux_sym__func_repeat1] = "_func_repeat1",
  [aux_sym_params_repeat1] = "params_repeat1",
  [alias_sym_exp] = "exp",
  [alias_sym_tokens] = "tokens",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_tokens] = anon_sym_tokens,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_id] = sym_id,
  [anon_sym_text] = anon_sym_text,
  [anon_sym_color] = anon_sym_color,
  [anon_sym_asset] = anon_sym_asset,
  [anon_sym_switch] = anon_sym_switch,
  [anon_sym_dimension] = anon_sym_dimension,
  [anon_sym_range] = anon_sym_range,
  [sym__newlines] = sym__newlines,
  [aux_sym__str_token1] = aux_sym__str_token1,
  [sym_asset] = sym_asset,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_when] = anon_sym_when,
  [sym_decimal_range] = sym_decimal_range,
  [sym_unit] = sym_unit,
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym_hex_token1] = aux_sym_hex_token1,
  [aux_sym_hex_token2] = aux_sym_hex_token2,
  [aux_sym_hex_token3] = aux_sym_hex_token3,
  [aux_sym_hex_token4] = aux_sym_hex_token4,
  [sym_multi_line_comment] = sym_multi_line_comment,
  [sym_neg] = sym_neg,
  [sym_num] = sym_num,
  [anon_sym_DOT] = anon_sym_DOT,
  [sym_func_id] = sym_func_id,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [sym_pos] = sym_pos,
  [sym_ref] = sym_ref,
  [sym_single_line_comment] = sym_single_line_comment,
  [sym_str] = sym_str,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [sym_file] = sym_file,
  [sym__tokens] = sym__tokens,
  [sym_group] = sym_group,
  [sym_def] = sym_def,
  [sym_type] = sym_type,
  [sym__exp] = sym__exp,
  [sym__str] = sym__str,
  [sym_cond] = sym_cond,
  [sym_dimension] = sym_dimension,
  [sym_hex] = sym_hex,
  [sym_arithmetic] = sym_arithmetic,
  [sym_func] = sym_func,
  [sym__func] = sym__func,
  [sym_params] = sym_params,
  [sym_op] = sym_op,
  [sym_set] = sym_set,
  [sym__ref] = sym__ref,
  [aux_sym_file_repeat1] = aux_sym_file_repeat1,
  [aux_sym_group_repeat1] = aux_sym_group_repeat1,
  [aux_sym_cond_repeat1] = aux_sym_cond_repeat1,
  [aux_sym_cond_repeat2] = aux_sym_cond_repeat2,
  [aux_sym_arithmetic_repeat1] = aux_sym_arithmetic_repeat1,
  [aux_sym__func_repeat1] = aux_sym__func_repeat1,
  [aux_sym_params_repeat1] = aux_sym_params_repeat1,
  [alias_sym_exp] = alias_sym_exp,
  [alias_sym_tokens] = alias_sym_tokens,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_tokens] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_id] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_text] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_color] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_asset] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_switch] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dimension] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_range] = {
    .visible = true,
    .named = false,
  },
  [sym__newlines] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__str_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_asset] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_when] = {
    .visible = true,
    .named = false,
  },
  [sym_decimal_range] = {
    .visible = true,
    .named = true,
  },
  [sym_unit] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_hex_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_hex_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_hex_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_hex_token4] = {
    .visible = false,
    .named = false,
  },
  [sym_multi_line_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_neg] = {
    .visible = true,
    .named = true,
  },
  [sym_num] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym_func_id] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [sym_pos] = {
    .visible = true,
    .named = true,
  },
  [sym_ref] = {
    .visible = true,
    .named = true,
  },
  [sym_single_line_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_str] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [sym_file] = {
    .visible = true,
    .named = true,
  },
  [sym__tokens] = {
    .visible = false,
    .named = true,
  },
  [sym_group] = {
    .visible = true,
    .named = true,
  },
  [sym_def] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym__exp] = {
    .visible = false,
    .named = true,
  },
  [sym__str] = {
    .visible = false,
    .named = true,
  },
  [sym_cond] = {
    .visible = true,
    .named = true,
  },
  [sym_dimension] = {
    .visible = true,
    .named = true,
  },
  [sym_hex] = {
    .visible = true,
    .named = true,
  },
  [sym_arithmetic] = {
    .visible = true,
    .named = true,
  },
  [sym_func] = {
    .visible = true,
    .named = true,
  },
  [sym__func] = {
    .visible = false,
    .named = true,
  },
  [sym_params] = {
    .visible = true,
    .named = true,
  },
  [sym_op] = {
    .visible = true,
    .named = true,
  },
  [sym_set] = {
    .visible = true,
    .named = true,
  },
  [sym__ref] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_group_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_cond_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_cond_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_arithmetic_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__func_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_params_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_exp] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_tokens] = {
    .visible = true,
    .named = true,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [1] = alias_sym_tokens,
  },
  [2] = {
    [3] = alias_sym_exp,
  },
  [3] = {
    [2] = alias_sym_exp,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_group, 2,
    sym_group,
    alias_sym_tokens,
  sym__exp, 2,
    sym__exp,
    alias_sym_exp,
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 19,
  [21] = 17,
  [22] = 22,
  [23] = 23,
  [24] = 22,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 26,
  [30] = 30,
  [31] = 28,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 34,
  [36] = 34,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 23,
  [43] = 43,
  [44] = 10,
  [45] = 14,
  [46] = 15,
  [47] = 14,
  [48] = 15,
  [49] = 3,
  [50] = 2,
  [51] = 4,
  [52] = 10,
  [53] = 5,
  [54] = 6,
  [55] = 9,
  [56] = 8,
  [57] = 7,
  [58] = 58,
  [59] = 11,
  [60] = 13,
  [61] = 61,
  [62] = 23,
  [63] = 12,
  [64] = 16,
  [65] = 65,
  [66] = 66,
  [67] = 39,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 40,
  [75] = 75,
  [76] = 76,
  [77] = 66,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 33,
  [82] = 82,
  [83] = 83,
  [84] = 82,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 80,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 90,
  [93] = 89,
  [94] = 94,
  [95] = 33,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 101,
  [105] = 97,
  [106] = 106,
  [107] = 106,
  [108] = 108,
  [109] = 32,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 101,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 98,
  [118] = 118,
  [119] = 103,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(105);
      if (lookahead == '"') ADVANCE(154);
      if (lookahead == '#') ADVANCE(167);
      if (lookahead == '$') ADVANCE(191);
      if (lookahead == '%') ADVANCE(185);
      if (lookahead == '(') ADVANCE(178);
      if (lookahead == ')') ADVANCE(180);
      if (lookahead == '*') ADVANCE(156);
      if (lookahead == '+') ADVANCE(181);
      if (lookahead == ',') ADVANCE(179);
      if (lookahead == '-') ADVANCE(182);
      if (lookahead == '.') ADVANCE(176);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == '0') ADVANCE(159);
      if (lookahead == '1') ADVANCE(160);
      if (lookahead == ':') ADVANCE(109);
      if (lookahead == 'a') ADVANCE(61);
      if (lookahead == 'c') ADVANCE(77);
      if (lookahead == 'd') ADVANCE(19);
      if (lookahead == 'e') ADVANCE(86);
      if (lookahead == 'i') ADVANCE(46);
      if (lookahead == 'm') ADVANCE(83);
      if (lookahead == 'p') ADVANCE(88);
      if (lookahead == 'r') ADVANCE(13);
      if (lookahead == 's') ADVANCE(164);
      if (lookahead == 't') ADVANCE(21);
      if (lookahead == 'v') ADVANCE(81);
      if (lookahead == 'w') ADVANCE(34);
      if (lookahead == '{') ADVANCE(107);
      if (lookahead == '}') ADVANCE(108);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(102)
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(97);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(153);
      if (lookahead == '%') ADVANCE(185);
      if (lookahead == '*') ADVANCE(156);
      if (lookahead == '+') ADVANCE(181);
      if (lookahead == '-') ADVANCE(182);
      if (lookahead == '.') ADVANCE(176);
      if (lookahead == '/') ADVANCE(183);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(153);
      if (lookahead == '%' ||
          lookahead == 's') ADVANCE(163);
      if (lookahead == 'c') ADVANCE(76);
      if (lookahead == 'd') ADVANCE(25);
      if (lookahead == 'e') ADVANCE(85);
      if (lookahead == 'i') ADVANCE(45);
      if (lookahead == 'm') ADVANCE(83);
      if (lookahead == 'p') ADVANCE(88);
      if (lookahead == 'r') ADVANCE(24);
      if (lookahead == 'v') ADVANCE(81);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(153);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(154);
      if (lookahead == '#') ADVANCE(167);
      if (lookahead == '$') ADVANCE(191);
      if (lookahead == ')') ADVANCE(180);
      if (lookahead == '-') ADVANCE(92);
      if (lookahead == '/') ADVANCE(101);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(174);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 5:
      if (lookahead == '%') ADVANCE(185);
      if (lookahead == ')') ADVANCE(180);
      if (lookahead == '*') ADVANCE(156);
      if (lookahead == '+') ADVANCE(181);
      if (lookahead == ',') ADVANCE(179);
      if (lookahead == '-') ADVANCE(182);
      if (lookahead == '.') ADVANCE(176);
      if (lookahead == '/') ADVANCE(183);
      if (lookahead == 'a') ADVANCE(64);
      if (lookahead == 'c') ADVANCE(57);
      if (lookahead == 'd') ADVANCE(39);
      if (lookahead == 'r') ADVANCE(16);
      if (lookahead == 's') ADVANCE(72);
      if (lookahead == 't') ADVANCE(23);
      if (lookahead == 'w') ADVANCE(36);
      if (lookahead == '{') ADVANCE(107);
      if (lookahead == '}') ADVANCE(108);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 6:
      if (lookahead == '%') ADVANCE(185);
      if (lookahead == ')') ADVANCE(180);
      if (lookahead == '*') ADVANCE(156);
      if (lookahead == '+') ADVANCE(181);
      if (lookahead == ',') ADVANCE(179);
      if (lookahead == '-') ADVANCE(182);
      if (lookahead == '/') ADVANCE(183);
      if (lookahead == 'i') ADVANCE(62);
      if (lookahead == '{') ADVANCE(107);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      END_STATE();
    case 7:
      if (lookahead == '%') ADVANCE(163);
      if (lookahead == 'a') ADVANCE(64);
      if (lookahead == 'c') ADVANCE(79);
      if (lookahead == 'd') ADVANCE(26);
      if (lookahead == 'e') ADVANCE(87);
      if (lookahead == 'i') ADVANCE(50);
      if (lookahead == 'm') ADVANCE(84);
      if (lookahead == 'p') ADVANCE(89);
      if (lookahead == 'r') ADVANCE(15);
      if (lookahead == 's') ADVANCE(165);
      if (lookahead == 't') ADVANCE(23);
      if (lookahead == 'v') ADVANCE(82);
      if (lookahead == 'w') ADVANCE(36);
      if (lookahead == '{') ADVANCE(107);
      if (lookahead == '}') ADVANCE(108);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == '/') ADVANCE(188);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '/') ADVANCE(172);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(9);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '0') ADVANCE(161);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(47);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(47);
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(64);
      if (lookahead == 'c') ADVANCE(57);
      if (lookahead == 'd') ADVANCE(39);
      if (lookahead == 'r') ADVANCE(16);
      if (lookahead == 's') ADVANCE(72);
      if (lookahead == 't') ADVANCE(23);
      if (lookahead == 'w') ADVANCE(36);
      if (lookahead == '{') ADVANCE(107);
      if (lookahead == '}') ADVANCE(108);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(124);
      if (lookahead == 'e') ADVANCE(122);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(124);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(73);
      if (lookahead == 'i') ADVANCE(45);
      END_STATE();
    case 18:
      if (lookahead == 'c') ADVANCE(35);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(32);
      if (lookahead == 'i') ADVANCE(44);
      if (lookahead == 'v') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(94);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(32);
      if (lookahead == 'v') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(94);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(74);
      if (lookahead == 'o') ADVANCE(41);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(151);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(138);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(31);
      if (lookahead == 'v') ADVANCE(80);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(116);
      if (lookahead == 'i') ADVANCE(123);
      if (lookahead == 'v') ADVANCE(139);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 31:
      if (lookahead == 'g') ADVANCE(163);
      END_STATE();
    case 32:
      if (lookahead == 'g') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(168);
      END_STATE();
    case 33:
      if (lookahead == 'g') ADVANCE(22);
      END_STATE();
    case 34:
      if (lookahead == 'h') ADVANCE(28);
      END_STATE();
    case 35:
      if (lookahead == 'h') ADVANCE(147);
      END_STATE();
    case 36:
      if (lookahead == 'h') ADVANCE(113);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 37:
      if (lookahead == 'i') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(94);
      END_STATE();
    case 38:
      if (lookahead == 'i') ADVANCE(67);
      END_STATE();
    case 39:
      if (lookahead == 'i') ADVANCE(123);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 40:
      if (lookahead == 'i') ADVANCE(59);
      END_STATE();
    case 41:
      if (lookahead == 'k') ADVANCE(30);
      END_STATE();
    case 42:
      if (lookahead == 'l') ADVANCE(56);
      END_STATE();
    case 43:
      if (lookahead == 'm') ADVANCE(163);
      END_STATE();
    case 44:
      if (lookahead == 'm') ADVANCE(29);
      END_STATE();
    case 45:
      if (lookahead == 'n') ADVANCE(163);
      END_STATE();
    case 46:
      if (lookahead == 'n') ADVANCE(163);
      if (lookahead == 's') ADVANCE(186);
      END_STATE();
    case 47:
      if (lookahead == 'n') ADVANCE(33);
      END_STATE();
    case 48:
      if (lookahead == 'n') ADVANCE(157);
      END_STATE();
    case 49:
      if (lookahead == 'n') ADVANCE(149);
      END_STATE();
    case 50:
      if (lookahead == 'n') ADVANCE(166);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 51:
      if (lookahead == 'n') ADVANCE(58);
      END_STATE();
    case 52:
      if (lookahead == 'n') ADVANCE(65);
      END_STATE();
    case 53:
      if (lookahead == 'n') ADVANCE(63);
      END_STATE();
    case 54:
      if (lookahead == 'o') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(94);
      END_STATE();
    case 55:
      if (lookahead == 'o') ADVANCE(41);
      END_STATE();
    case 56:
      if (lookahead == 'o') ADVANCE(60);
      END_STATE();
    case 57:
      if (lookahead == 'o') ADVANCE(121);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 58:
      if (lookahead == 'o') ADVANCE(70);
      END_STATE();
    case 59:
      if (lookahead == 'o') ADVANCE(49);
      END_STATE();
    case 60:
      if (lookahead == 'r') ADVANCE(143);
      END_STATE();
    case 61:
      if (lookahead == 's') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(94);
      END_STATE();
    case 62:
      if (lookahead == 's') ADVANCE(186);
      END_STATE();
    case 63:
      if (lookahead == 's') ADVANCE(106);
      END_STATE();
    case 64:
      if (lookahead == 's') ADVANCE(133);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 65:
      if (lookahead == 's') ADVANCE(40);
      END_STATE();
    case 66:
      if (lookahead == 's') ADVANCE(27);
      END_STATE();
    case 67:
      if (lookahead == 't') ADVANCE(18);
      END_STATE();
    case 68:
      if (lookahead == 't') ADVANCE(141);
      END_STATE();
    case 69:
      if (lookahead == 't') ADVANCE(145);
      END_STATE();
    case 70:
      if (lookahead == 't') ADVANCE(173);
      END_STATE();
    case 71:
      if (lookahead == 'w') ADVANCE(38);
      END_STATE();
    case 72:
      if (lookahead == 'w') ADVANCE(119);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 73:
      if (lookahead == 'x') ADVANCE(163);
      END_STATE();
    case 74:
      if (lookahead == 'x') ADVANCE(68);
      END_STATE();
    case 75:
      if (lookahead == '{') ADVANCE(107);
      if (lookahead == '}') ADVANCE(108);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(75)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 76:
      if (lookahead == 'h' ||
          lookahead == 'm') ADVANCE(163);
      END_STATE();
    case 77:
      if (lookahead == 'h' ||
          lookahead == 'm') ADVANCE(163);
      if (lookahead == 'o') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(94);
      END_STATE();
    case 78:
      if (lookahead == 'h' ||
          lookahead == 'm') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(94);
      END_STATE();
    case 79:
      if (lookahead == 'h' ||
          lookahead == 'm') ADVANCE(166);
      if (lookahead == 'o') ADVANCE(121);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 80:
      if (lookahead == 'h' ||
          lookahead == 'w') ADVANCE(163);
      END_STATE();
    case 81:
      if (lookahead == 'h' ||
          lookahead == 'w') ADVANCE(163);
      if (lookahead == 'm') ADVANCE(17);
      END_STATE();
    case 82:
      if (lookahead == 'h' ||
          lookahead == 'w') ADVANCE(166);
      if (lookahead == 'm') ADVANCE(110);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 83:
      if (lookahead == 'm' ||
          lookahead == 's') ADVANCE(163);
      END_STATE();
    case 84:
      if (lookahead == 'm' ||
          lookahead == 's') ADVANCE(166);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 85:
      if (lookahead == 'm' ||
          lookahead == 'x') ADVANCE(163);
      END_STATE();
    case 86:
      if (lookahead == 'm' ||
          lookahead == 'x') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(94);
      END_STATE();
    case 87:
      if (lookahead == 'm' ||
          lookahead == 'x') ADVANCE(166);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 88:
      if (lookahead == 'c' ||
          lookahead == 't' ||
          lookahead == 'x') ADVANCE(163);
      END_STATE();
    case 89:
      if (lookahead == 'c' ||
          lookahead == 't' ||
          lookahead == 'x') ADVANCE(166);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 90:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(90)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 91:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(162);
      END_STATE();
    case 92:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(174);
      END_STATE();
    case 93:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(175);
      END_STATE();
    case 94:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(168);
      END_STATE();
    case 95:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(170);
      END_STATE();
    case 96:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(171);
      END_STATE();
    case 97:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(94);
      END_STATE();
    case 98:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 99:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 100:
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 101:
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 102:
      if (eof) ADVANCE(105);
      if (lookahead == '"') ADVANCE(154);
      if (lookahead == '#') ADVANCE(167);
      if (lookahead == '$') ADVANCE(191);
      if (lookahead == '%') ADVANCE(185);
      if (lookahead == '(') ADVANCE(178);
      if (lookahead == ')') ADVANCE(180);
      if (lookahead == '*') ADVANCE(156);
      if (lookahead == '+') ADVANCE(181);
      if (lookahead == ',') ADVANCE(179);
      if (lookahead == '-') ADVANCE(182);
      if (lookahead == '.') ADVANCE(176);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == '0') ADVANCE(159);
      if (lookahead == '1') ADVANCE(160);
      if (lookahead == ':') ADVANCE(109);
      if (lookahead == 'a') ADVANCE(61);
      if (lookahead == 'c') ADVANCE(54);
      if (lookahead == 'd') ADVANCE(37);
      if (lookahead == 'i') ADVANCE(62);
      if (lookahead == 'r') ADVANCE(12);
      if (lookahead == 's') ADVANCE(71);
      if (lookahead == 't') ADVANCE(21);
      if (lookahead == 'w') ADVANCE(34);
      if (lookahead == '{') ADVANCE(107);
      if (lookahead == '}') ADVANCE(108);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(102)
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(97);
      END_STATE();
    case 103:
      if (eof) ADVANCE(105);
      if (lookahead == ')') ADVANCE(180);
      if (lookahead == ',') ADVANCE(179);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == 't') ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(103)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(97);
      END_STATE();
    case 104:
      if (eof) ADVANCE(105);
      if (lookahead == '%' ||
          lookahead == 's') ADVANCE(163);
      if (lookahead == ')') ADVANCE(180);
      if (lookahead == ',') ADVANCE(179);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == 'c') ADVANCE(78);
      if (lookahead == 'd') ADVANCE(20);
      if (lookahead == 'e') ADVANCE(86);
      if (lookahead == 'i') ADVANCE(45);
      if (lookahead == 'm') ADVANCE(83);
      if (lookahead == 'p') ADVANCE(88);
      if (lookahead == 'r') ADVANCE(24);
      if (lookahead == 't') ADVANCE(55);
      if (lookahead == 'v') ADVANCE(81);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(103)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(97);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_tokens);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'a') ADVANCE(137);
      if (lookahead == 'i') ADVANCE(127);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'c') ADVANCE(118);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'e') ADVANCE(152);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'e') ADVANCE(125);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'e') ADVANCE(128);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'e') ADVANCE(136);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'g') ADVANCE(166);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'g') ADVANCE(112);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'h') ADVANCE(148);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'i') ADVANCE(134);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'i') ADVANCE(130);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'l') ADVANCE(129);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'm') ADVANCE(166);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'm') ADVANCE(114);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'n') ADVANCE(117);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'n') ADVANCE(158);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'n') ADVANCE(150);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'n') ADVANCE(166);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'n') ADVANCE(132);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'o') ADVANCE(131);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'o') ADVANCE(126);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'r') ADVANCE(144);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 's') ADVANCE(120);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 's') ADVANCE(115);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 't') ADVANCE(111);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 't') ADVANCE(142);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 't') ADVANCE(146);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'x') ADVANCE(166);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'x') ADVANCE(135);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'h' ||
          lookahead == 'w') ADVANCE(166);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_text);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_text);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_color);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_color);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_asset);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_asset);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_switch);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_switch);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_dimension);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_dimension);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_range);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_range);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__newlines);
      if (lookahead == '\n') ADVANCE(153);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym__str_token1);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_asset);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_when);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_when);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_decimal_range);
      if (lookahead == '.') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(94);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_decimal_range);
      if (lookahead == '.') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(94);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_decimal_range);
      if (lookahead == '0') ADVANCE(161);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_decimal_range);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(162);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_unit);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == 'w') ADVANCE(38);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == 'w') ADVANCE(119);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_hex_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(169);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_hex_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(95);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_hex_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(96);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_hex_token4);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_multi_line_comment);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_neg);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == '.') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(174);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_num);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(175);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_func_id);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == '/') ADVANCE(188);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_pos);
      if (lookahead == ' ') ADVANCE(51);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_ref);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_single_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(188);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_str);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\' &&
          lookahead != '^' &&
          lookahead != 'n') ADVANCE(190);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_str);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\' &&
          lookahead != '^' &&
          lookahead != 'n') ADVANCE(190);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 104},
  [2] = {.lex_state = 5},
  [3] = {.lex_state = 5},
  [4] = {.lex_state = 5},
  [5] = {.lex_state = 5},
  [6] = {.lex_state = 5},
  [7] = {.lex_state = 5},
  [8] = {.lex_state = 5},
  [9] = {.lex_state = 5},
  [10] = {.lex_state = 5},
  [11] = {.lex_state = 5},
  [12] = {.lex_state = 5},
  [13] = {.lex_state = 5},
  [14] = {.lex_state = 5},
  [15] = {.lex_state = 5},
  [16] = {.lex_state = 5},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 5},
  [19] = {.lex_state = 5},
  [20] = {.lex_state = 5},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 5},
  [23] = {.lex_state = 5},
  [24] = {.lex_state = 5},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 5},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 5},
  [29] = {.lex_state = 5},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 5},
  [32] = {.lex_state = 5},
  [33] = {.lex_state = 7},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 5},
  [38] = {.lex_state = 5},
  [39] = {.lex_state = 5},
  [40] = {.lex_state = 5},
  [41] = {.lex_state = 5},
  [42] = {.lex_state = 6},
  [43] = {.lex_state = 5},
  [44] = {.lex_state = 5},
  [45] = {.lex_state = 5},
  [46] = {.lex_state = 5},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 104},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 104},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 4},
  [66] = {.lex_state = 104},
  [67] = {.lex_state = 104},
  [68] = {.lex_state = 75},
  [69] = {.lex_state = 75},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 75},
  [72] = {.lex_state = 75},
  [73] = {.lex_state = 104},
  [74] = {.lex_state = 104},
  [75] = {.lex_state = 75},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 104},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 104},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 75},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 4},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 4},
  [94] = {.lex_state = 75},
  [95] = {.lex_state = 2},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 189},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 1},
  [101] = {.lex_state = 90},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 104},
  [104] = {.lex_state = 90},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 75},
  [109] = {.lex_state = 1},
  [110] = {.lex_state = 75},
  [111] = {.lex_state = 1},
  [112] = {.lex_state = 75},
  [113] = {.lex_state = 90},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 189},
  [118] = {.lex_state = 75},
  [119] = {.lex_state = 104},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_tokens] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_text] = ACTIONS(1),
    [anon_sym_color] = ACTIONS(1),
    [anon_sym_asset] = ACTIONS(1),
    [anon_sym_switch] = ACTIONS(1),
    [anon_sym_dimension] = ACTIONS(1),
    [anon_sym_range] = ACTIONS(1),
    [aux_sym__str_token1] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_when] = ACTIONS(1),
    [sym_decimal_range] = ACTIONS(1),
    [sym_unit] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [aux_sym_hex_token1] = ACTIONS(1),
    [aux_sym_hex_token2] = ACTIONS(1),
    [aux_sym_hex_token3] = ACTIONS(1),
    [aux_sym_hex_token4] = ACTIONS(1),
    [sym_multi_line_comment] = ACTIONS(1),
    [sym_neg] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [sym_pos] = ACTIONS(1),
    [sym_single_line_comment] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
  },
  [1] = {
    [sym_file] = STATE(116),
    [sym__tokens] = STATE(58),
    [aux_sym_file_repeat1] = STATE(58),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_tokens] = ACTIONS(5),
    [sym_multi_line_comment] = ACTIONS(7),
    [sym_single_line_comment] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(13), 1,
      anon_sym_DOT,
    STATE(2), 1,
      aux_sym__func_repeat1,
    ACTIONS(11), 8,
      sym_id,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
      anon_sym_when,
    ACTIONS(9), 9,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [28] = 4,
    ACTIONS(20), 1,
      anon_sym_DOT,
    STATE(2), 1,
      aux_sym__func_repeat1,
    ACTIONS(18), 8,
      sym_id,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
      anon_sym_when,
    ACTIONS(16), 9,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [56] = 4,
    ACTIONS(20), 1,
      anon_sym_DOT,
    STATE(3), 1,
      aux_sym__func_repeat1,
    ACTIONS(24), 8,
      sym_id,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
      anon_sym_when,
    ACTIONS(22), 9,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [84] = 2,
    ACTIONS(28), 8,
      sym_id,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
      anon_sym_when,
    ACTIONS(26), 10,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [107] = 2,
    ACTIONS(32), 8,
      sym_id,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
      anon_sym_when,
    ACTIONS(30), 10,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [130] = 2,
    ACTIONS(36), 8,
      sym_id,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
      anon_sym_when,
    ACTIONS(34), 10,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [153] = 2,
    ACTIONS(40), 8,
      sym_id,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
      anon_sym_when,
    ACTIONS(38), 10,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [176] = 2,
    ACTIONS(11), 8,
      sym_id,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
      anon_sym_when,
    ACTIONS(9), 10,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [199] = 5,
    STATE(10), 1,
      aux_sym_arithmetic_repeat1,
    STATE(35), 1,
      sym_op,
    ACTIONS(42), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(46), 5,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(44), 8,
      sym_id,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
      anon_sym_when,
  [227] = 2,
    ACTIONS(51), 8,
      sym_id,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
      anon_sym_when,
    ACTIONS(49), 9,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [249] = 2,
    ACTIONS(55), 8,
      sym_id,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
      anon_sym_when,
    ACTIONS(53), 9,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [271] = 2,
    ACTIONS(59), 8,
      sym_id,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
      anon_sym_when,
    ACTIONS(57), 9,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [293] = 5,
    STATE(10), 1,
      aux_sym_arithmetic_repeat1,
    STATE(35), 1,
      sym_op,
    ACTIONS(61), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(65), 5,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(63), 8,
      sym_id,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
      anon_sym_when,
  [321] = 5,
    STATE(14), 1,
      aux_sym_arithmetic_repeat1,
    STATE(35), 1,
      sym_op,
    ACTIONS(67), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(65), 5,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(69), 8,
      sym_id,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
      anon_sym_when,
  [349] = 2,
    ACTIONS(44), 8,
      sym_id,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
      anon_sym_when,
    ACTIONS(42), 9,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [371] = 11,
    ACTIONS(71), 1,
      aux_sym__str_token1,
    ACTIONS(73), 1,
      sym_asset,
    ACTIONS(75), 1,
      anon_sym_POUND,
    ACTIONS(77), 1,
      sym_num,
    ACTIONS(79), 1,
      sym_func_id,
    ACTIONS(81), 1,
      anon_sym_RPAREN,
    ACTIONS(83), 1,
      anon_sym_DOLLAR,
    STATE(4), 1,
      sym_func,
    STATE(32), 1,
      sym_arithmetic,
    STATE(84), 1,
      sym__exp,
    STATE(46), 5,
      sym__str,
      sym_dimension,
      sym_hex,
      sym__func,
      sym__ref,
  [409] = 7,
    ACTIONS(85), 1,
      anon_sym_LBRACE,
    ACTIONS(88), 1,
      anon_sym_RBRACE,
    ACTIONS(90), 1,
      sym_id,
    ACTIONS(96), 1,
      anon_sym_when,
    STATE(110), 1,
      sym_type,
    STATE(18), 4,
      sym_group,
      sym_def,
      sym_cond,
      aux_sym_group_repeat1,
    ACTIONS(93), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [439] = 7,
    ACTIONS(99), 1,
      anon_sym_LBRACE,
    ACTIONS(101), 1,
      anon_sym_RBRACE,
    ACTIONS(103), 1,
      sym_id,
    ACTIONS(107), 1,
      anon_sym_when,
    STATE(110), 1,
      sym_type,
    STATE(18), 4,
      sym_group,
      sym_def,
      sym_cond,
      aux_sym_group_repeat1,
    ACTIONS(105), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [469] = 7,
    ACTIONS(99), 1,
      anon_sym_LBRACE,
    ACTIONS(103), 1,
      sym_id,
    ACTIONS(107), 1,
      anon_sym_when,
    ACTIONS(109), 1,
      anon_sym_RBRACE,
    STATE(110), 1,
      sym_type,
    STATE(18), 4,
      sym_group,
      sym_def,
      sym_cond,
      aux_sym_group_repeat1,
    ACTIONS(105), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [499] = 11,
    ACTIONS(71), 1,
      aux_sym__str_token1,
    ACTIONS(73), 1,
      sym_asset,
    ACTIONS(75), 1,
      anon_sym_POUND,
    ACTIONS(77), 1,
      sym_num,
    ACTIONS(79), 1,
      sym_func_id,
    ACTIONS(83), 1,
      anon_sym_DOLLAR,
    ACTIONS(111), 1,
      anon_sym_RPAREN,
    STATE(4), 1,
      sym_func,
    STATE(32), 1,
      sym_arithmetic,
    STATE(82), 1,
      sym__exp,
    STATE(46), 5,
      sym__str,
      sym_dimension,
      sym_hex,
      sym__func,
      sym__ref,
  [537] = 7,
    ACTIONS(99), 1,
      anon_sym_LBRACE,
    ACTIONS(103), 1,
      sym_id,
    ACTIONS(107), 1,
      anon_sym_when,
    ACTIONS(113), 1,
      anon_sym_RBRACE,
    STATE(110), 1,
      sym_type,
    STATE(18), 4,
      sym_group,
      sym_def,
      sym_cond,
      aux_sym_group_repeat1,
    ACTIONS(105), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [567] = 2,
    ACTIONS(115), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(117), 8,
      sym_id,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
      anon_sym_when,
  [587] = 7,
    ACTIONS(99), 1,
      anon_sym_LBRACE,
    ACTIONS(103), 1,
      sym_id,
    ACTIONS(107), 1,
      anon_sym_when,
    ACTIONS(119), 1,
      anon_sym_RBRACE,
    STATE(110), 1,
      sym_type,
    STATE(18), 4,
      sym_group,
      sym_def,
      sym_cond,
      aux_sym_group_repeat1,
    ACTIONS(105), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [617] = 10,
    ACTIONS(121), 1,
      aux_sym__str_token1,
    ACTIONS(123), 1,
      sym_asset,
    ACTIONS(125), 1,
      anon_sym_POUND,
    ACTIONS(127), 1,
      sym_num,
    ACTIONS(129), 1,
      sym_func_id,
    ACTIONS(131), 1,
      anon_sym_DOLLAR,
    STATE(51), 1,
      sym_func,
    STATE(109), 1,
      sym_arithmetic,
    STATE(111), 1,
      sym__exp,
    STATE(48), 5,
      sym__str,
      sym_dimension,
      sym_hex,
      sym__func,
      sym__ref,
  [652] = 6,
    ACTIONS(99), 1,
      anon_sym_LBRACE,
    ACTIONS(103), 1,
      sym_id,
    ACTIONS(107), 1,
      anon_sym_when,
    STATE(110), 1,
      sym_type,
    STATE(20), 4,
      sym_group,
      sym_def,
      sym_cond,
      aux_sym_group_repeat1,
    ACTIONS(105), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [679] = 10,
    ACTIONS(71), 1,
      aux_sym__str_token1,
    ACTIONS(73), 1,
      sym_asset,
    ACTIONS(75), 1,
      anon_sym_POUND,
    ACTIONS(79), 1,
      sym_func_id,
    ACTIONS(133), 1,
      sym_num,
    ACTIONS(135), 1,
      anon_sym_DOLLAR,
    STATE(4), 1,
      sym_func,
    STATE(32), 1,
      sym_arithmetic,
    STATE(41), 1,
      sym__exp,
    STATE(15), 5,
      sym__str,
      sym_dimension,
      sym_hex,
      sym__func,
      sym__ref,
  [714] = 6,
    ACTIONS(99), 1,
      anon_sym_LBRACE,
    ACTIONS(103), 1,
      sym_id,
    ACTIONS(107), 1,
      anon_sym_when,
    STATE(110), 1,
      sym_type,
    STATE(22), 4,
      sym_group,
      sym_def,
      sym_cond,
      aux_sym_group_repeat1,
    ACTIONS(105), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [741] = 6,
    ACTIONS(99), 1,
      anon_sym_LBRACE,
    ACTIONS(103), 1,
      sym_id,
    ACTIONS(107), 1,
      anon_sym_when,
    STATE(110), 1,
      sym_type,
    STATE(19), 4,
      sym_group,
      sym_def,
      sym_cond,
      aux_sym_group_repeat1,
    ACTIONS(105), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [768] = 10,
    ACTIONS(71), 1,
      aux_sym__str_token1,
    ACTIONS(73), 1,
      sym_asset,
    ACTIONS(75), 1,
      anon_sym_POUND,
    ACTIONS(77), 1,
      sym_num,
    ACTIONS(79), 1,
      sym_func_id,
    ACTIONS(83), 1,
      anon_sym_DOLLAR,
    STATE(4), 1,
      sym_func,
    STATE(32), 1,
      sym_arithmetic,
    STATE(96), 1,
      sym__exp,
    STATE(46), 5,
      sym__str,
      sym_dimension,
      sym_hex,
      sym__func,
      sym__ref,
  [803] = 6,
    ACTIONS(99), 1,
      anon_sym_LBRACE,
    ACTIONS(103), 1,
      sym_id,
    ACTIONS(107), 1,
      anon_sym_when,
    STATE(110), 1,
      sym_type,
    STATE(24), 4,
      sym_group,
      sym_def,
      sym_cond,
      aux_sym_group_repeat1,
    ACTIONS(105), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [830] = 2,
    ACTIONS(67), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(69), 8,
      sym_id,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
      anon_sym_when,
  [847] = 3,
    ACTIONS(137), 1,
      sym_unit,
    ACTIONS(67), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(69), 8,
      sym_id,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
      anon_sym_when,
  [865] = 7,
    ACTIONS(121), 1,
      aux_sym__str_token1,
    ACTIONS(125), 1,
      anon_sym_POUND,
    ACTIONS(129), 1,
      sym_func_id,
    ACTIONS(131), 1,
      anon_sym_DOLLAR,
    ACTIONS(139), 1,
      sym_num,
    STATE(51), 1,
      sym_func,
    STATE(64), 5,
      sym__str,
      sym_dimension,
      sym_hex,
      sym__func,
      sym__ref,
  [891] = 7,
    ACTIONS(71), 1,
      aux_sym__str_token1,
    ACTIONS(75), 1,
      anon_sym_POUND,
    ACTIONS(79), 1,
      sym_func_id,
    ACTIONS(135), 1,
      anon_sym_DOLLAR,
    ACTIONS(141), 1,
      sym_num,
    STATE(4), 1,
      sym_func,
    STATE(16), 5,
      sym__str,
      sym_dimension,
      sym_hex,
      sym__func,
      sym__ref,
  [917] = 7,
    ACTIONS(71), 1,
      aux_sym__str_token1,
    ACTIONS(75), 1,
      anon_sym_POUND,
    ACTIONS(79), 1,
      sym_func_id,
    ACTIONS(83), 1,
      anon_sym_DOLLAR,
    ACTIONS(141), 1,
      sym_num,
    STATE(4), 1,
      sym_func,
    STATE(16), 5,
      sym__str,
      sym_dimension,
      sym_hex,
      sym__func,
      sym__ref,
  [943] = 2,
    ACTIONS(143), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(145), 8,
      sym_id,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
      anon_sym_when,
  [958] = 2,
    ACTIONS(147), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(149), 8,
      sym_id,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
      anon_sym_when,
  [973] = 2,
    ACTIONS(151), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(153), 8,
      sym_id,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
      anon_sym_when,
  [988] = 2,
    ACTIONS(155), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(157), 8,
      sym_id,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
      anon_sym_when,
  [1003] = 2,
    ACTIONS(159), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(161), 8,
      sym_id,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
      anon_sym_when,
  [1018] = 2,
    ACTIONS(117), 1,
      sym_pos,
    ACTIONS(115), 9,
      anon_sym_LBRACE,
      anon_sym_STAR,
      sym_neg,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [1033] = 2,
    ACTIONS(163), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(165), 8,
      sym_id,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
      anon_sym_when,
  [1048] = 4,
    STATE(36), 1,
      sym_op,
    STATE(44), 1,
      aux_sym_arithmetic_repeat1,
    ACTIONS(42), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(46), 5,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [1066] = 4,
    STATE(36), 1,
      sym_op,
    STATE(44), 1,
      aux_sym_arithmetic_repeat1,
    ACTIONS(61), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(65), 5,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [1084] = 4,
    STATE(36), 1,
      sym_op,
    STATE(45), 1,
      aux_sym_arithmetic_repeat1,
    ACTIONS(67), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(65), 5,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [1102] = 4,
    ACTIONS(61), 1,
      sym__newlines,
    STATE(34), 1,
      sym_op,
    STATE(52), 1,
      aux_sym_arithmetic_repeat1,
    ACTIONS(167), 5,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [1119] = 4,
    ACTIONS(67), 1,
      sym__newlines,
    STATE(34), 1,
      sym_op,
    STATE(47), 1,
      aux_sym_arithmetic_repeat1,
    ACTIONS(167), 5,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [1136] = 4,
    ACTIONS(16), 1,
      sym__newlines,
    ACTIONS(169), 1,
      anon_sym_DOT,
    STATE(50), 1,
      aux_sym__func_repeat1,
    ACTIONS(18), 5,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [1153] = 4,
    ACTIONS(9), 1,
      sym__newlines,
    ACTIONS(171), 1,
      anon_sym_DOT,
    STATE(50), 1,
      aux_sym__func_repeat1,
    ACTIONS(11), 5,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [1170] = 4,
    ACTIONS(22), 1,
      sym__newlines,
    ACTIONS(169), 1,
      anon_sym_DOT,
    STATE(49), 1,
      aux_sym__func_repeat1,
    ACTIONS(24), 5,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [1187] = 4,
    ACTIONS(42), 1,
      sym__newlines,
    STATE(34), 1,
      sym_op,
    STATE(52), 1,
      aux_sym_arithmetic_repeat1,
    ACTIONS(174), 5,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [1204] = 2,
    ACTIONS(26), 1,
      sym__newlines,
    ACTIONS(28), 6,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [1216] = 2,
    ACTIONS(30), 1,
      sym__newlines,
    ACTIONS(32), 6,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [1228] = 2,
    ACTIONS(9), 1,
      sym__newlines,
    ACTIONS(11), 6,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [1240] = 2,
    ACTIONS(38), 1,
      sym__newlines,
    ACTIONS(40), 6,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [1252] = 2,
    ACTIONS(34), 1,
      sym__newlines,
    ACTIONS(36), 6,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [1264] = 4,
    ACTIONS(5), 1,
      anon_sym_tokens,
    ACTIONS(177), 1,
      ts_builtin_sym_end,
    ACTIONS(179), 2,
      sym_multi_line_comment,
      sym_single_line_comment,
    STATE(61), 2,
      sym__tokens,
      aux_sym_file_repeat1,
  [1279] = 2,
    ACTIONS(49), 1,
      sym__newlines,
    ACTIONS(51), 5,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [1290] = 2,
    ACTIONS(57), 1,
      sym__newlines,
    ACTIONS(59), 5,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [1301] = 4,
    ACTIONS(181), 1,
      ts_builtin_sym_end,
    ACTIONS(183), 1,
      anon_sym_tokens,
    ACTIONS(186), 2,
      sym_multi_line_comment,
      sym_single_line_comment,
    STATE(61), 2,
      sym__tokens,
      aux_sym_file_repeat1,
  [1316] = 2,
    ACTIONS(115), 1,
      sym__newlines,
    ACTIONS(117), 5,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [1327] = 2,
    ACTIONS(53), 1,
      sym__newlines,
    ACTIONS(55), 5,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [1338] = 2,
    ACTIONS(42), 1,
      sym__newlines,
    ACTIONS(44), 5,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [1349] = 1,
    ACTIONS(189), 5,
      aux_sym__str_token1,
      anon_sym_POUND,
      sym_num,
      sym_func_id,
      anon_sym_DOLLAR,
  [1357] = 2,
    ACTIONS(193), 1,
      aux_sym_hex_token4,
    ACTIONS(191), 3,
      aux_sym_hex_token1,
      aux_sym_hex_token2,
      aux_sym_hex_token3,
  [1366] = 1,
    ACTIONS(151), 4,
      ts_builtin_sym_end,
      anon_sym_tokens,
      sym_multi_line_comment,
      sym_single_line_comment,
  [1373] = 4,
    ACTIONS(195), 1,
      anon_sym_RBRACE,
    ACTIONS(197), 1,
      sym_id,
    STATE(68), 1,
      aux_sym_cond_repeat1,
    STATE(100), 1,
      sym_set,
  [1386] = 4,
    ACTIONS(200), 1,
      anon_sym_RBRACE,
    ACTIONS(202), 1,
      sym_id,
    STATE(68), 1,
      aux_sym_cond_repeat1,
    STATE(100), 1,
      sym_set,
  [1399] = 4,
    ACTIONS(204), 1,
      anon_sym_RBRACE,
    ACTIONS(206), 1,
      sym_neg,
    ACTIONS(208), 1,
      sym_pos,
    STATE(76), 1,
      aux_sym_cond_repeat2,
  [1412] = 4,
    ACTIONS(202), 1,
      sym_id,
    ACTIONS(210), 1,
      anon_sym_RBRACE,
    STATE(68), 1,
      aux_sym_cond_repeat1,
    STATE(100), 1,
      sym_set,
  [1425] = 4,
    ACTIONS(202), 1,
      sym_id,
    ACTIONS(212), 1,
      anon_sym_RBRACE,
    STATE(69), 1,
      aux_sym_cond_repeat1,
    STATE(100), 1,
      sym_set,
  [1438] = 1,
    ACTIONS(214), 4,
      ts_builtin_sym_end,
      anon_sym_tokens,
      sym_multi_line_comment,
      sym_single_line_comment,
  [1445] = 1,
    ACTIONS(155), 4,
      ts_builtin_sym_end,
      anon_sym_tokens,
      sym_multi_line_comment,
      sym_single_line_comment,
  [1452] = 4,
    ACTIONS(202), 1,
      sym_id,
    ACTIONS(216), 1,
      anon_sym_RBRACE,
    STATE(71), 1,
      aux_sym_cond_repeat1,
    STATE(100), 1,
      sym_set,
  [1465] = 4,
    ACTIONS(218), 1,
      anon_sym_RBRACE,
    ACTIONS(220), 1,
      sym_neg,
    ACTIONS(223), 1,
      sym_pos,
    STATE(76), 1,
      aux_sym_cond_repeat2,
  [1478] = 2,
    ACTIONS(228), 1,
      aux_sym_hex_token4,
    ACTIONS(226), 3,
      aux_sym_hex_token1,
      aux_sym_hex_token2,
      aux_sym_hex_token3,
  [1487] = 3,
    ACTIONS(230), 1,
      anon_sym_COMMA,
    ACTIONS(233), 1,
      anon_sym_RPAREN,
    STATE(78), 1,
      aux_sym_params_repeat1,
  [1497] = 3,
    ACTIONS(235), 1,
      anon_sym_LBRACE,
    ACTIONS(237), 1,
      sym_neg,
    ACTIONS(239), 1,
      sym_pos,
  [1507] = 3,
    ACTIONS(241), 1,
      anon_sym_COMMA,
    ACTIONS(243), 1,
      anon_sym_RPAREN,
    STATE(78), 1,
      aux_sym_params_repeat1,
  [1517] = 2,
    ACTIONS(245), 1,
      sym_unit,
    ACTIONS(67), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1525] = 3,
    ACTIONS(241), 1,
      anon_sym_COMMA,
    ACTIONS(247), 1,
      anon_sym_RPAREN,
    STATE(80), 1,
      aux_sym_params_repeat1,
  [1535] = 3,
    ACTIONS(206), 1,
      sym_neg,
    ACTIONS(208), 1,
      sym_pos,
    STATE(70), 1,
      aux_sym_cond_repeat2,
  [1545] = 3,
    ACTIONS(241), 1,
      anon_sym_COMMA,
    ACTIONS(249), 1,
      anon_sym_RPAREN,
    STATE(88), 1,
      aux_sym_params_repeat1,
  [1555] = 3,
    ACTIONS(251), 1,
      anon_sym_LBRACE,
    ACTIONS(253), 1,
      sym_id,
    STATE(73), 1,
      sym_group,
  [1565] = 2,
    ACTIONS(257), 1,
      sym_pos,
    ACTIONS(255), 2,
      anon_sym_RBRACE,
      sym_neg,
  [1573] = 2,
    ACTIONS(261), 1,
      sym_pos,
    ACTIONS(259), 2,
      anon_sym_RBRACE,
      sym_neg,
  [1581] = 3,
    ACTIONS(241), 1,
      anon_sym_COMMA,
    ACTIONS(263), 1,
      anon_sym_RPAREN,
    STATE(78), 1,
      aux_sym_params_repeat1,
  [1591] = 2,
    ACTIONS(129), 1,
      sym_func_id,
    STATE(55), 1,
      sym_func,
  [1598] = 2,
    ACTIONS(265), 1,
      anon_sym_LPAREN,
    STATE(5), 1,
      sym_params,
  [1605] = 2,
    ACTIONS(83), 1,
      anon_sym_DOLLAR,
    STATE(79), 1,
      sym__ref,
  [1612] = 2,
    ACTIONS(267), 1,
      anon_sym_LPAREN,
    STATE(53), 1,
      sym_params,
  [1619] = 2,
    ACTIONS(79), 1,
      sym_func_id,
    STATE(9), 1,
      sym_func,
  [1626] = 1,
    ACTIONS(195), 2,
      anon_sym_RBRACE,
      sym_id,
  [1631] = 2,
    ACTIONS(67), 1,
      sym__newlines,
    ACTIONS(269), 1,
      sym_unit,
  [1638] = 1,
    ACTIONS(233), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1643] = 1,
    ACTIONS(271), 1,
      aux_sym__str_token1,
  [1647] = 1,
    ACTIONS(273), 1,
      sym_str,
  [1651] = 1,
    ACTIONS(275), 1,
      anon_sym_COLON,
  [1655] = 1,
    ACTIONS(277), 1,
      sym__newlines,
  [1659] = 1,
    ACTIONS(279), 1,
      sym_ref,
  [1663] = 1,
    ACTIONS(281), 1,
      anon_sym_COLON,
  [1667] = 1,
    ACTIONS(269), 1,
      sym_unit,
  [1671] = 1,
    ACTIONS(283), 1,
      sym_ref,
  [1675] = 1,
    ACTIONS(285), 1,
      aux_sym__str_token1,
  [1679] = 1,
    ACTIONS(287), 1,
      anon_sym_LBRACE,
  [1683] = 1,
    ACTIONS(289), 1,
      anon_sym_LBRACE,
  [1687] = 1,
    ACTIONS(291), 1,
      sym_id,
  [1691] = 1,
    ACTIONS(67), 1,
      sym__newlines,
  [1695] = 1,
    ACTIONS(293), 1,
      sym_id,
  [1699] = 1,
    ACTIONS(295), 1,
      sym__newlines,
  [1703] = 1,
    ACTIONS(297), 1,
      sym_id,
  [1707] = 1,
    ACTIONS(299), 1,
      sym_ref,
  [1711] = 1,
    ACTIONS(301), 1,
      anon_sym_LBRACE,
  [1715] = 1,
    ACTIONS(303), 1,
      anon_sym_LBRACE,
  [1719] = 1,
    ACTIONS(305), 1,
      ts_builtin_sym_end,
  [1723] = 1,
    ACTIONS(307), 1,
      sym_str,
  [1727] = 1,
    ACTIONS(309), 1,
      sym_id,
  [1731] = 1,
    ACTIONS(245), 1,
      sym_unit,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 28,
  [SMALL_STATE(4)] = 56,
  [SMALL_STATE(5)] = 84,
  [SMALL_STATE(6)] = 107,
  [SMALL_STATE(7)] = 130,
  [SMALL_STATE(8)] = 153,
  [SMALL_STATE(9)] = 176,
  [SMALL_STATE(10)] = 199,
  [SMALL_STATE(11)] = 227,
  [SMALL_STATE(12)] = 249,
  [SMALL_STATE(13)] = 271,
  [SMALL_STATE(14)] = 293,
  [SMALL_STATE(15)] = 321,
  [SMALL_STATE(16)] = 349,
  [SMALL_STATE(17)] = 371,
  [SMALL_STATE(18)] = 409,
  [SMALL_STATE(19)] = 439,
  [SMALL_STATE(20)] = 469,
  [SMALL_STATE(21)] = 499,
  [SMALL_STATE(22)] = 537,
  [SMALL_STATE(23)] = 567,
  [SMALL_STATE(24)] = 587,
  [SMALL_STATE(25)] = 617,
  [SMALL_STATE(26)] = 652,
  [SMALL_STATE(27)] = 679,
  [SMALL_STATE(28)] = 714,
  [SMALL_STATE(29)] = 741,
  [SMALL_STATE(30)] = 768,
  [SMALL_STATE(31)] = 803,
  [SMALL_STATE(32)] = 830,
  [SMALL_STATE(33)] = 847,
  [SMALL_STATE(34)] = 865,
  [SMALL_STATE(35)] = 891,
  [SMALL_STATE(36)] = 917,
  [SMALL_STATE(37)] = 943,
  [SMALL_STATE(38)] = 958,
  [SMALL_STATE(39)] = 973,
  [SMALL_STATE(40)] = 988,
  [SMALL_STATE(41)] = 1003,
  [SMALL_STATE(42)] = 1018,
  [SMALL_STATE(43)] = 1033,
  [SMALL_STATE(44)] = 1048,
  [SMALL_STATE(45)] = 1066,
  [SMALL_STATE(46)] = 1084,
  [SMALL_STATE(47)] = 1102,
  [SMALL_STATE(48)] = 1119,
  [SMALL_STATE(49)] = 1136,
  [SMALL_STATE(50)] = 1153,
  [SMALL_STATE(51)] = 1170,
  [SMALL_STATE(52)] = 1187,
  [SMALL_STATE(53)] = 1204,
  [SMALL_STATE(54)] = 1216,
  [SMALL_STATE(55)] = 1228,
  [SMALL_STATE(56)] = 1240,
  [SMALL_STATE(57)] = 1252,
  [SMALL_STATE(58)] = 1264,
  [SMALL_STATE(59)] = 1279,
  [SMALL_STATE(60)] = 1290,
  [SMALL_STATE(61)] = 1301,
  [SMALL_STATE(62)] = 1316,
  [SMALL_STATE(63)] = 1327,
  [SMALL_STATE(64)] = 1338,
  [SMALL_STATE(65)] = 1349,
  [SMALL_STATE(66)] = 1357,
  [SMALL_STATE(67)] = 1366,
  [SMALL_STATE(68)] = 1373,
  [SMALL_STATE(69)] = 1386,
  [SMALL_STATE(70)] = 1399,
  [SMALL_STATE(71)] = 1412,
  [SMALL_STATE(72)] = 1425,
  [SMALL_STATE(73)] = 1438,
  [SMALL_STATE(74)] = 1445,
  [SMALL_STATE(75)] = 1452,
  [SMALL_STATE(76)] = 1465,
  [SMALL_STATE(77)] = 1478,
  [SMALL_STATE(78)] = 1487,
  [SMALL_STATE(79)] = 1497,
  [SMALL_STATE(80)] = 1507,
  [SMALL_STATE(81)] = 1517,
  [SMALL_STATE(82)] = 1525,
  [SMALL_STATE(83)] = 1535,
  [SMALL_STATE(84)] = 1545,
  [SMALL_STATE(85)] = 1555,
  [SMALL_STATE(86)] = 1565,
  [SMALL_STATE(87)] = 1573,
  [SMALL_STATE(88)] = 1581,
  [SMALL_STATE(89)] = 1591,
  [SMALL_STATE(90)] = 1598,
  [SMALL_STATE(91)] = 1605,
  [SMALL_STATE(92)] = 1612,
  [SMALL_STATE(93)] = 1619,
  [SMALL_STATE(94)] = 1626,
  [SMALL_STATE(95)] = 1631,
  [SMALL_STATE(96)] = 1638,
  [SMALL_STATE(97)] = 1643,
  [SMALL_STATE(98)] = 1647,
  [SMALL_STATE(99)] = 1651,
  [SMALL_STATE(100)] = 1655,
  [SMALL_STATE(101)] = 1659,
  [SMALL_STATE(102)] = 1663,
  [SMALL_STATE(103)] = 1667,
  [SMALL_STATE(104)] = 1671,
  [SMALL_STATE(105)] = 1675,
  [SMALL_STATE(106)] = 1679,
  [SMALL_STATE(107)] = 1683,
  [SMALL_STATE(108)] = 1687,
  [SMALL_STATE(109)] = 1691,
  [SMALL_STATE(110)] = 1695,
  [SMALL_STATE(111)] = 1699,
  [SMALL_STATE(112)] = 1703,
  [SMALL_STATE(113)] = 1707,
  [SMALL_STATE(114)] = 1711,
  [SMALL_STATE(115)] = 1715,
  [SMALL_STATE(116)] = 1719,
  [SMALL_STATE(117)] = 1723,
  [SMALL_STATE(118)] = 1727,
  [SMALL_STATE(119)] = 1731,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__func_repeat1, 2),
  [11] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__func_repeat1, 2),
  [13] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__func_repeat1, 2), SHIFT_REPEAT(93),
  [16] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__func, 2),
  [18] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__func, 2),
  [20] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [22] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__func, 1),
  [24] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__func, 1),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 2),
  [28] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func, 2),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 4),
  [32] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_params, 4),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 3),
  [36] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_params, 3),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 2),
  [40] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_params, 2),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arithmetic_repeat1, 2),
  [44] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arithmetic_repeat1, 2),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arithmetic_repeat1, 2), SHIFT_REPEAT(65),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dimension, 2),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dimension, 2),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hex, 2),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hex, 2),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__str, 3),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__str, 3),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arithmetic, 2),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arithmetic, 2),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exp, 1),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__exp, 1),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(31),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_group_repeat1, 2),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(107),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(108),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(91),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ref, 2),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ref, 2),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cond, 7),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cond, 7),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cond, 6),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cond, 6),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 3),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group, 3),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 4),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group, 4),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def, 4, .production_id = 2),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_def, 4, .production_id = 2),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cond, 5),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cond, 5),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [171] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__func_repeat1, 2), SHIFT_REPEAT(89),
  [174] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arithmetic_repeat1, 2), SHIFT_REPEAT(65),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 1),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2),
  [183] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(85),
  [186] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(61),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op, 1),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_cond_repeat1, 2),
  [197] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cond_repeat1, 2), SHIFT_REPEAT(102),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tokens, 2, .production_id = 1),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_cond_repeat2, 2),
  [220] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cond_repeat2, 2), SHIFT_REPEAT(118),
  [223] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cond_repeat2, 2), SHIFT_REPEAT(118),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [230] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2), SHIFT_REPEAT(30),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_cond_repeat2, 4),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_cond_repeat2, 4),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_cond_repeat2, 5),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_cond_repeat2, 5),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 3, .production_id = 3),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [305] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_matry(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
