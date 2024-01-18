#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 154
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 73
#define ALIAS_COUNT 2
#define TOKEN_COUNT 42
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 4

enum {
  anon_sym_tokens = 1,
  anon_sym_variants = 2,
  anon_sym_LBRACE = 3,
  anon_sym_RBRACE = 4,
  anon_sym_COLON = 5,
  sym_id = 6,
  anon_sym_text = 7,
  anon_sym_color = 8,
  anon_sym_asset = 9,
  anon_sym_switch = 10,
  anon_sym_dimension = 11,
  anon_sym_range = 12,
  sym__newlines = 13,
  aux_sym__str_token1 = 14,
  sym_asset = 15,
  anon_sym_STAR = 16,
  anon_sym_when = 17,
  sym_decimal_range = 18,
  sym_unit = 19,
  anon_sym_POUND = 20,
  aux_sym_hex_token1 = 21,
  aux_sym_hex_token2 = 22,
  aux_sym_hex_token3 = 23,
  aux_sym_hex_token4 = 24,
  sym_multi_line_comment = 25,
  sym_neg = 26,
  sym_num = 27,
  anon_sym_DOT = 28,
  sym_func_id = 29,
  anon_sym_LPAREN = 30,
  anon_sym_COMMA = 31,
  anon_sym_RPAREN = 32,
  anon_sym_PLUS = 33,
  anon_sym_DASH = 34,
  anon_sym_SLASH = 35,
  anon_sym_PERCENT = 36,
  sym_pos = 37,
  sym_ref = 38,
  sym_single_line_comment = 39,
  sym_str = 40,
  anon_sym_DOLLAR = 41,
  sym_file = 42,
  sym__tokens = 43,
  sym_variants = 44,
  sym_var = 45,
  sym_base = 46,
  sym_block = 47,
  sym_def = 48,
  sym_type = 49,
  sym__exp = 50,
  sym__str = 51,
  sym_asterisk = 52,
  sym_cond = 53,
  sym_dimension = 54,
  sym_hex = 55,
  sym_arithmetic = 56,
  sym_func = 57,
  sym__func = 58,
  sym_params = 59,
  sym_op = 60,
  sym_switch = 61,
  sym_set = 62,
  sym__ref = 63,
  aux_sym_file_repeat1 = 64,
  aux_sym_variants_repeat1 = 65,
  aux_sym_block_repeat1 = 66,
  aux_sym_cond_repeat1 = 67,
  aux_sym_cond_repeat2 = 68,
  aux_sym_arithmetic_repeat1 = 69,
  aux_sym__func_repeat1 = 70,
  aux_sym_params_repeat1 = 71,
  aux_sym_switch_repeat1 = 72,
  alias_sym_exp = 73,
  alias_sym_tokens = 74,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_tokens] = "tokens",
  [anon_sym_variants] = "variants",
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
  [sym_variants] = "variants",
  [sym_var] = "var",
  [sym_base] = "base",
  [sym_block] = "block",
  [sym_def] = "def",
  [sym_type] = "type",
  [sym__exp] = "_exp",
  [sym__str] = "_str",
  [sym_asterisk] = "asterisk",
  [sym_cond] = "cond",
  [sym_dimension] = "dimension",
  [sym_hex] = "hex",
  [sym_arithmetic] = "arithmetic",
  [sym_func] = "func",
  [sym__func] = "_func",
  [sym_params] = "params",
  [sym_op] = "op",
  [sym_switch] = "switch",
  [sym_set] = "set",
  [sym__ref] = "_ref",
  [aux_sym_file_repeat1] = "file_repeat1",
  [aux_sym_variants_repeat1] = "variants_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_cond_repeat1] = "cond_repeat1",
  [aux_sym_cond_repeat2] = "cond_repeat2",
  [aux_sym_arithmetic_repeat1] = "arithmetic_repeat1",
  [aux_sym__func_repeat1] = "_func_repeat1",
  [aux_sym_params_repeat1] = "params_repeat1",
  [aux_sym_switch_repeat1] = "switch_repeat1",
  [alias_sym_exp] = "exp",
  [alias_sym_tokens] = "tokens",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_tokens] = anon_sym_tokens,
  [anon_sym_variants] = anon_sym_variants,
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
  [sym_variants] = sym_variants,
  [sym_var] = sym_var,
  [sym_base] = sym_base,
  [sym_block] = sym_block,
  [sym_def] = sym_def,
  [sym_type] = sym_type,
  [sym__exp] = sym__exp,
  [sym__str] = sym__str,
  [sym_asterisk] = sym_asterisk,
  [sym_cond] = sym_cond,
  [sym_dimension] = sym_dimension,
  [sym_hex] = sym_hex,
  [sym_arithmetic] = sym_arithmetic,
  [sym_func] = sym_func,
  [sym__func] = sym__func,
  [sym_params] = sym_params,
  [sym_op] = sym_op,
  [sym_switch] = sym_switch,
  [sym_set] = sym_set,
  [sym__ref] = sym__ref,
  [aux_sym_file_repeat1] = aux_sym_file_repeat1,
  [aux_sym_variants_repeat1] = aux_sym_variants_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_cond_repeat1] = aux_sym_cond_repeat1,
  [aux_sym_cond_repeat2] = aux_sym_cond_repeat2,
  [aux_sym_arithmetic_repeat1] = aux_sym_arithmetic_repeat1,
  [aux_sym__func_repeat1] = aux_sym__func_repeat1,
  [aux_sym_params_repeat1] = aux_sym_params_repeat1,
  [aux_sym_switch_repeat1] = aux_sym_switch_repeat1,
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
  [anon_sym_variants] = {
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
  [sym_variants] = {
    .visible = true,
    .named = true,
  },
  [sym_var] = {
    .visible = true,
    .named = true,
  },
  [sym_base] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
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
  [sym_asterisk] = {
    .visible = true,
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
  [sym_switch] = {
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
  [aux_sym_variants_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
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
  [aux_sym_switch_repeat1] = {
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
  sym_block, 2,
    sym_block,
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
  [20] = 18,
  [21] = 21,
  [22] = 21,
  [23] = 23,
  [24] = 23,
  [25] = 23,
  [26] = 10,
  [27] = 27,
  [28] = 27,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 29,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 37,
  [39] = 37,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 15,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 17,
  [55] = 11,
  [56] = 56,
  [57] = 11,
  [58] = 4,
  [59] = 59,
  [60] = 2,
  [61] = 15,
  [62] = 62,
  [63] = 3,
  [64] = 17,
  [65] = 65,
  [66] = 66,
  [67] = 6,
  [68] = 13,
  [69] = 69,
  [70] = 12,
  [71] = 5,
  [72] = 6,
  [73] = 7,
  [74] = 7,
  [75] = 14,
  [76] = 8,
  [77] = 5,
  [78] = 9,
  [79] = 79,
  [80] = 8,
  [81] = 14,
  [82] = 12,
  [83] = 16,
  [84] = 13,
  [85] = 10,
  [86] = 46,
  [87] = 87,
  [88] = 48,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 96,
  [98] = 98,
  [99] = 96,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 36,
  [105] = 102,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 103,
  [112] = 112,
  [113] = 103,
  [114] = 102,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 117,
  [119] = 36,
  [120] = 120,
  [121] = 121,
  [122] = 120,
  [123] = 123,
  [124] = 117,
  [125] = 125,
  [126] = 126,
  [127] = 126,
  [128] = 126,
  [129] = 129,
  [130] = 130,
  [131] = 129,
  [132] = 132,
  [133] = 133,
  [134] = 35,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 132,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 132,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 144,
  [151] = 151,
  [152] = 144,
  [153] = 133,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(117);
      if (lookahead == '"') ADVANCE(168);
      if (lookahead == '#') ADVANCE(181);
      if (lookahead == '$') ADVANCE(205);
      if (lookahead == '%') ADVANCE(199);
      if (lookahead == '(') ADVANCE(192);
      if (lookahead == ')') ADVANCE(194);
      if (lookahead == '*') ADVANCE(170);
      if (lookahead == '+') ADVANCE(195);
      if (lookahead == ',') ADVANCE(193);
      if (lookahead == '-') ADVANCE(196);
      if (lookahead == '.') ADVANCE(190);
      if (lookahead == '/') ADVANCE(198);
      if (lookahead == '0') ADVANCE(173);
      if (lookahead == '1') ADVANCE(174);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'a') ADVANCE(71);
      if (lookahead == 'c') ADVANCE(90);
      if (lookahead == 'd') ADVANCE(24);
      if (lookahead == 'e') ADVANCE(98);
      if (lookahead == 'i') ADVANCE(53);
      if (lookahead == 'm') ADVANCE(95);
      if (lookahead == 'p') ADVANCE(100);
      if (lookahead == 'r') ADVANCE(15);
      if (lookahead == 's') ADVANCE(178);
      if (lookahead == 't') ADVANCE(26);
      if (lookahead == 'v') ADVANCE(17);
      if (lookahead == 'w') ADVANCE(39);
      if (lookahead == '{') ADVANCE(120);
      if (lookahead == '}') ADVANCE(121);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(114)
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(109);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(167);
      if (lookahead == '%') ADVANCE(199);
      if (lookahead == '*') ADVANCE(170);
      if (lookahead == '+') ADVANCE(195);
      if (lookahead == '-') ADVANCE(196);
      if (lookahead == '.') ADVANCE(190);
      if (lookahead == '/') ADVANCE(197);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(167);
      if (lookahead == '%' ||
          lookahead == 's') ADVANCE(177);
      if (lookahead == 'c') ADVANCE(89);
      if (lookahead == 'd') ADVANCE(30);
      if (lookahead == 'e') ADVANCE(97);
      if (lookahead == 'i') ADVANCE(52);
      if (lookahead == 'm') ADVANCE(95);
      if (lookahead == 'p') ADVANCE(100);
      if (lookahead == 'r') ADVANCE(29);
      if (lookahead == 'v') ADVANCE(93);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(168);
      if (lookahead == '#') ADVANCE(181);
      if (lookahead == '$') ADVANCE(205);
      if (lookahead == ')') ADVANCE(194);
      if (lookahead == '-') ADVANCE(104);
      if (lookahead == '/') ADVANCE(113);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(188);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(168);
      if (lookahead == '#') ADVANCE(181);
      if (lookahead == '$') ADVANCE(205);
      if (lookahead == '-') ADVANCE(104);
      if (lookahead == '/') ADVANCE(113);
      if (lookahead == '{') ADVANCE(120);
      if (lookahead == '}') ADVANCE(121);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(188);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 6:
      if (lookahead == '%') ADVANCE(199);
      if (lookahead == ')') ADVANCE(194);
      if (lookahead == '*') ADVANCE(170);
      if (lookahead == '+') ADVANCE(195);
      if (lookahead == ',') ADVANCE(193);
      if (lookahead == '-') ADVANCE(196);
      if (lookahead == '.') ADVANCE(190);
      if (lookahead == '/') ADVANCE(197);
      if (lookahead == 'a') ADVANCE(75);
      if (lookahead == 'c') ADVANCE(64);
      if (lookahead == 'd') ADVANCE(45);
      if (lookahead == 'r') ADVANCE(20);
      if (lookahead == 's') ADVANCE(84);
      if (lookahead == 't') ADVANCE(28);
      if (lookahead == 'w') ADVANCE(41);
      if (lookahead == '{') ADVANCE(120);
      if (lookahead == '}') ADVANCE(121);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 7:
      if (lookahead == '%') ADVANCE(199);
      if (lookahead == ')') ADVANCE(194);
      if (lookahead == '*') ADVANCE(170);
      if (lookahead == '+') ADVANCE(195);
      if (lookahead == ',') ADVANCE(193);
      if (lookahead == '-') ADVANCE(196);
      if (lookahead == '/') ADVANCE(197);
      if (lookahead == 'a') ADVANCE(70);
      if (lookahead == 'c') ADVANCE(62);
      if (lookahead == 'd') ADVANCE(42);
      if (lookahead == 'i') ADVANCE(72);
      if (lookahead == 'r') ADVANCE(14);
      if (lookahead == 's') ADVANCE(83);
      if (lookahead == 't') ADVANCE(25);
      if (lookahead == '{') ADVANCE(120);
      if (lookahead == '}') ADVANCE(121);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      END_STATE();
    case 8:
      if (lookahead == '%') ADVANCE(177);
      if (lookahead == 'a') ADVANCE(75);
      if (lookahead == 'c') ADVANCE(91);
      if (lookahead == 'd') ADVANCE(31);
      if (lookahead == 'e') ADVANCE(99);
      if (lookahead == 'i') ADVANCE(57);
      if (lookahead == 'm') ADVANCE(96);
      if (lookahead == 'p') ADVANCE(101);
      if (lookahead == 'r') ADVANCE(19);
      if (lookahead == 's') ADVANCE(179);
      if (lookahead == 't') ADVANCE(28);
      if (lookahead == 'v') ADVANCE(94);
      if (lookahead == 'w') ADVANCE(41);
      if (lookahead == '{') ADVANCE(120);
      if (lookahead == '}') ADVANCE(121);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 9:
      if (lookahead == ')') ADVANCE(194);
      if (lookahead == ',') ADVANCE(193);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '/') ADVANCE(202);
      END_STATE();
    case 11:
      if (lookahead == '*') ADVANCE(11);
      if (lookahead == '/') ADVANCE(186);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 12:
      if (lookahead == '*') ADVANCE(11);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '0') ADVANCE(175);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(54);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(54);
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(69);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(69);
      if (lookahead == 'h' ||
          lookahead == 'w') ADVANCE(177);
      if (lookahead == 'm') ADVANCE(21);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(75);
      if (lookahead == 'c') ADVANCE(64);
      if (lookahead == 'd') ADVANCE(45);
      if (lookahead == 'r') ADVANCE(20);
      if (lookahead == 's') ADVANCE(84);
      if (lookahead == 't') ADVANCE(28);
      if (lookahead == 'w') ADVANCE(41);
      if (lookahead == '{') ADVANCE(120);
      if (lookahead == '}') ADVANCE(121);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(137);
      if (lookahead == 'e') ADVANCE(135);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(137);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(85);
      if (lookahead == 'i') ADVANCE(52);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(61);
      END_STATE();
    case 23:
      if (lookahead == 'c') ADVANCE(40);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(37);
      if (lookahead == 'i') ADVANCE(51);
      if (lookahead == 'v') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(106);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(86);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(86);
      if (lookahead == 'o') ADVANCE(48);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(165);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(151);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(36);
      if (lookahead == 'v') ADVANCE(92);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(129);
      if (lookahead == 'i') ADVANCE(136);
      if (lookahead == 'v') ADVANCE(153);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(80);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 36:
      if (lookahead == 'g') ADVANCE(177);
      END_STATE();
    case 37:
      if (lookahead == 'g') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(182);
      END_STATE();
    case 38:
      if (lookahead == 'g') ADVANCE(27);
      END_STATE();
    case 39:
      if (lookahead == 'h') ADVANCE(33);
      END_STATE();
    case 40:
      if (lookahead == 'h') ADVANCE(161);
      END_STATE();
    case 41:
      if (lookahead == 'h') ADVANCE(126);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 42:
      if (lookahead == 'i') ADVANCE(51);
      END_STATE();
    case 43:
      if (lookahead == 'i') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(106);
      END_STATE();
    case 44:
      if (lookahead == 'i') ADVANCE(78);
      END_STATE();
    case 45:
      if (lookahead == 'i') ADVANCE(136);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 46:
      if (lookahead == 'i') ADVANCE(22);
      END_STATE();
    case 47:
      if (lookahead == 'i') ADVANCE(67);
      END_STATE();
    case 48:
      if (lookahead == 'k') ADVANCE(35);
      END_STATE();
    case 49:
      if (lookahead == 'l') ADVANCE(65);
      END_STATE();
    case 50:
      if (lookahead == 'm') ADVANCE(177);
      END_STATE();
    case 51:
      if (lookahead == 'm') ADVANCE(34);
      END_STATE();
    case 52:
      if (lookahead == 'n') ADVANCE(177);
      END_STATE();
    case 53:
      if (lookahead == 'n') ADVANCE(177);
      if (lookahead == 's') ADVANCE(200);
      END_STATE();
    case 54:
      if (lookahead == 'n') ADVANCE(38);
      END_STATE();
    case 55:
      if (lookahead == 'n') ADVANCE(171);
      END_STATE();
    case 56:
      if (lookahead == 'n') ADVANCE(163);
      END_STATE();
    case 57:
      if (lookahead == 'n') ADVANCE(180);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 58:
      if (lookahead == 'n') ADVANCE(66);
      END_STATE();
    case 59:
      if (lookahead == 'n') ADVANCE(77);
      END_STATE();
    case 60:
      if (lookahead == 'n') ADVANCE(73);
      END_STATE();
    case 61:
      if (lookahead == 'n') ADVANCE(82);
      END_STATE();
    case 62:
      if (lookahead == 'o') ADVANCE(49);
      END_STATE();
    case 63:
      if (lookahead == 'o') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(106);
      END_STATE();
    case 64:
      if (lookahead == 'o') ADVANCE(134);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 65:
      if (lookahead == 'o') ADVANCE(68);
      END_STATE();
    case 66:
      if (lookahead == 'o') ADVANCE(81);
      END_STATE();
    case 67:
      if (lookahead == 'o') ADVANCE(56);
      END_STATE();
    case 68:
      if (lookahead == 'r') ADVANCE(157);
      END_STATE();
    case 69:
      if (lookahead == 'r') ADVANCE(46);
      END_STATE();
    case 70:
      if (lookahead == 's') ADVANCE(76);
      END_STATE();
    case 71:
      if (lookahead == 's') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(106);
      END_STATE();
    case 72:
      if (lookahead == 's') ADVANCE(200);
      END_STATE();
    case 73:
      if (lookahead == 's') ADVANCE(118);
      END_STATE();
    case 74:
      if (lookahead == 's') ADVANCE(119);
      END_STATE();
    case 75:
      if (lookahead == 's') ADVANCE(146);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 76:
      if (lookahead == 's') ADVANCE(32);
      END_STATE();
    case 77:
      if (lookahead == 's') ADVANCE(47);
      END_STATE();
    case 78:
      if (lookahead == 't') ADVANCE(23);
      END_STATE();
    case 79:
      if (lookahead == 't') ADVANCE(155);
      END_STATE();
    case 80:
      if (lookahead == 't') ADVANCE(159);
      END_STATE();
    case 81:
      if (lookahead == 't') ADVANCE(187);
      END_STATE();
    case 82:
      if (lookahead == 't') ADVANCE(74);
      END_STATE();
    case 83:
      if (lookahead == 'w') ADVANCE(44);
      END_STATE();
    case 84:
      if (lookahead == 'w') ADVANCE(132);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 85:
      if (lookahead == 'x') ADVANCE(177);
      END_STATE();
    case 86:
      if (lookahead == 'x') ADVANCE(79);
      END_STATE();
    case 87:
      if (lookahead == '%' ||
          lookahead == 's') ADVANCE(177);
      if (lookahead == ')') ADVANCE(194);
      if (lookahead == ',') ADVANCE(193);
      if (lookahead == 'c') ADVANCE(89);
      if (lookahead == 'd') ADVANCE(30);
      if (lookahead == 'e') ADVANCE(97);
      if (lookahead == 'i') ADVANCE(52);
      if (lookahead == 'm') ADVANCE(95);
      if (lookahead == 'p') ADVANCE(100);
      if (lookahead == 'r') ADVANCE(29);
      if (lookahead == 'v') ADVANCE(93);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      END_STATE();
    case 88:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 89:
      if (lookahead == 'h' ||
          lookahead == 'm') ADVANCE(177);
      END_STATE();
    case 90:
      if (lookahead == 'h' ||
          lookahead == 'm') ADVANCE(177);
      if (lookahead == 'o') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(106);
      END_STATE();
    case 91:
      if (lookahead == 'h' ||
          lookahead == 'm') ADVANCE(180);
      if (lookahead == 'o') ADVANCE(134);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 92:
      if (lookahead == 'h' ||
          lookahead == 'w') ADVANCE(177);
      END_STATE();
    case 93:
      if (lookahead == 'h' ||
          lookahead == 'w') ADVANCE(177);
      if (lookahead == 'm') ADVANCE(21);
      END_STATE();
    case 94:
      if (lookahead == 'h' ||
          lookahead == 'w') ADVANCE(180);
      if (lookahead == 'm') ADVANCE(123);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 95:
      if (lookahead == 'm' ||
          lookahead == 's') ADVANCE(177);
      END_STATE();
    case 96:
      if (lookahead == 'm' ||
          lookahead == 's') ADVANCE(180);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 97:
      if (lookahead == 'm' ||
          lookahead == 'x') ADVANCE(177);
      END_STATE();
    case 98:
      if (lookahead == 'm' ||
          lookahead == 'x') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(106);
      END_STATE();
    case 99:
      if (lookahead == 'm' ||
          lookahead == 'x') ADVANCE(180);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 100:
      if (lookahead == 'c' ||
          lookahead == 't' ||
          lookahead == 'x') ADVANCE(177);
      END_STATE();
    case 101:
      if (lookahead == 'c' ||
          lookahead == 't' ||
          lookahead == 'x') ADVANCE(180);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 102:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(102)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 103:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(176);
      END_STATE();
    case 104:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(188);
      END_STATE();
    case 105:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(189);
      END_STATE();
    case 106:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(182);
      END_STATE();
    case 107:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(184);
      END_STATE();
    case 108:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(185);
      END_STATE();
    case 109:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(106);
      END_STATE();
    case 110:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 111:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 112:
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 113:
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      END_STATE();
    case 114:
      if (eof) ADVANCE(117);
      if (lookahead == '"') ADVANCE(168);
      if (lookahead == '#') ADVANCE(181);
      if (lookahead == '$') ADVANCE(205);
      if (lookahead == '%') ADVANCE(199);
      if (lookahead == '(') ADVANCE(192);
      if (lookahead == ')') ADVANCE(194);
      if (lookahead == '*') ADVANCE(170);
      if (lookahead == '+') ADVANCE(195);
      if (lookahead == ',') ADVANCE(193);
      if (lookahead == '-') ADVANCE(196);
      if (lookahead == '.') ADVANCE(190);
      if (lookahead == '/') ADVANCE(198);
      if (lookahead == '0') ADVANCE(173);
      if (lookahead == '1') ADVANCE(174);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'a') ADVANCE(71);
      if (lookahead == 'c') ADVANCE(63);
      if (lookahead == 'd') ADVANCE(43);
      if (lookahead == 'i') ADVANCE(72);
      if (lookahead == 'r') ADVANCE(14);
      if (lookahead == 's') ADVANCE(83);
      if (lookahead == 't') ADVANCE(26);
      if (lookahead == 'v') ADVANCE(16);
      if (lookahead == 'w') ADVANCE(39);
      if (lookahead == '{') ADVANCE(120);
      if (lookahead == '}') ADVANCE(121);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(114)
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(109);
      END_STATE();
    case 115:
      if (eof) ADVANCE(117);
      if (lookahead == '%') ADVANCE(177);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == 'a') ADVANCE(71);
      if (lookahead == 'c') ADVANCE(90);
      if (lookahead == 'd') ADVANCE(24);
      if (lookahead == 'e') ADVANCE(98);
      if (lookahead == 'i') ADVANCE(52);
      if (lookahead == 'm') ADVANCE(95);
      if (lookahead == 'p') ADVANCE(100);
      if (lookahead == 'r') ADVANCE(15);
      if (lookahead == 's') ADVANCE(178);
      if (lookahead == 't') ADVANCE(26);
      if (lookahead == 'v') ADVANCE(17);
      if (lookahead == '}') ADVANCE(121);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(116)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(109);
      END_STATE();
    case 116:
      if (eof) ADVANCE(117);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == 'a') ADVANCE(71);
      if (lookahead == 'c') ADVANCE(63);
      if (lookahead == 'd') ADVANCE(43);
      if (lookahead == 'r') ADVANCE(14);
      if (lookahead == 's') ADVANCE(83);
      if (lookahead == 't') ADVANCE(26);
      if (lookahead == 'v') ADVANCE(16);
      if (lookahead == '}') ADVANCE(121);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(116)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(109);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_tokens);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_variants);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'a') ADVANCE(150);
      if (lookahead == 'i') ADVANCE(140);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'c') ADVANCE(131);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'e') ADVANCE(166);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'e') ADVANCE(138);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'e') ADVANCE(141);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'e') ADVANCE(149);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'g') ADVANCE(180);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'g') ADVANCE(125);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'h') ADVANCE(162);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'i') ADVANCE(147);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'i') ADVANCE(143);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'l') ADVANCE(142);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'm') ADVANCE(180);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'm') ADVANCE(127);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'n') ADVANCE(130);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'n') ADVANCE(172);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'n') ADVANCE(164);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'n') ADVANCE(180);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'n') ADVANCE(145);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'o') ADVANCE(144);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'o') ADVANCE(139);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'r') ADVANCE(158);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 's') ADVANCE(133);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 's') ADVANCE(128);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 't') ADVANCE(124);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 't') ADVANCE(156);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 't') ADVANCE(160);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'x') ADVANCE(180);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'x') ADVANCE(148);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'h' ||
          lookahead == 'w') ADVANCE(180);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_text);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_text);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_color);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_color);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_asset);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_asset);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_switch);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_switch);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_dimension);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_dimension);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_range);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_range);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym__newlines);
      if (lookahead == '\n') ADVANCE(167);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym__str_token1);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_asset);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_when);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_when);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_decimal_range);
      if (lookahead == '.') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(106);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_decimal_range);
      if (lookahead == '.') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(106);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_decimal_range);
      if (lookahead == '0') ADVANCE(175);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_decimal_range);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(176);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_unit);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == 'w') ADVANCE(44);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == 'w') ADVANCE(132);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_hex_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(183);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_hex_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(107);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_hex_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(108);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_hex_token4);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_multi_line_comment);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_neg);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == '.') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(188);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_num);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(189);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_func_id);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '/') ADVANCE(202);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_pos);
      if (lookahead == ' ') ADVANCE(58);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_ref);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_single_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(202);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_str);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(203);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\' &&
          lookahead != '^' &&
          lookahead != 'n') ADVANCE(204);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_str);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\' &&
          lookahead != '^' &&
          lookahead != 'n') ADVANCE(204);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 115},
  [2] = {.lex_state = 6},
  [3] = {.lex_state = 6},
  [4] = {.lex_state = 6},
  [5] = {.lex_state = 6},
  [6] = {.lex_state = 6},
  [7] = {.lex_state = 6},
  [8] = {.lex_state = 6},
  [9] = {.lex_state = 6},
  [10] = {.lex_state = 7},
  [11] = {.lex_state = 6},
  [12] = {.lex_state = 6},
  [13] = {.lex_state = 6},
  [14] = {.lex_state = 6},
  [15] = {.lex_state = 6},
  [16] = {.lex_state = 6},
  [17] = {.lex_state = 6},
  [18] = {.lex_state = 6},
  [19] = {.lex_state = 6},
  [20] = {.lex_state = 6},
  [21] = {.lex_state = 6},
  [22] = {.lex_state = 6},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 6},
  [27] = {.lex_state = 6},
  [28] = {.lex_state = 6},
  [29] = {.lex_state = 6},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 5},
  [34] = {.lex_state = 6},
  [35] = {.lex_state = 6},
  [36] = {.lex_state = 8},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 6},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 6},
  [45] = {.lex_state = 6},
  [46] = {.lex_state = 6},
  [47] = {.lex_state = 6},
  [48] = {.lex_state = 6},
  [49] = {.lex_state = 6},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 6},
  [55] = {.lex_state = 6},
  [56] = {.lex_state = 115},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 115},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 115},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 1},
  [86] = {.lex_state = 115},
  [87] = {.lex_state = 115},
  [88] = {.lex_state = 115},
  [89] = {.lex_state = 115},
  [90] = {.lex_state = 4},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 5},
  [93] = {.lex_state = 5},
  [94] = {.lex_state = 5},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 115},
  [97] = {.lex_state = 115},
  [98] = {.lex_state = 5},
  [99] = {.lex_state = 115},
  [100] = {.lex_state = 5},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 87},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 5},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 5},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 2},
  [120] = {.lex_state = 4},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 4},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 102},
  [127] = {.lex_state = 102},
  [128] = {.lex_state = 102},
  [129] = {.lex_state = 87},
  [130] = {.lex_state = 1},
  [131] = {.lex_state = 87},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 1},
  [135] = {.lex_state = 5},
  [136] = {.lex_state = 5},
  [137] = {.lex_state = 1},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 5},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 5},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 203},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 5},
  [147] = {.lex_state = 5},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 203},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 203},
  [153] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_tokens] = ACTIONS(1),
    [anon_sym_variants] = ACTIONS(1),
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
    [sym_file] = STATE(148),
    [sym__tokens] = STATE(56),
    [sym_variants] = STATE(56),
    [aux_sym_file_repeat1] = STATE(56),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_tokens] = ACTIONS(5),
    [anon_sym_variants] = ACTIONS(7),
    [sym_multi_line_comment] = ACTIONS(9),
    [sym_single_line_comment] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(15), 1,
      anon_sym_DOT,
    STATE(3), 1,
      aux_sym__func_repeat1,
    ACTIONS(13), 8,
      sym_id,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
      anon_sym_when,
    ACTIONS(11), 9,
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
    ACTIONS(15), 1,
      anon_sym_DOT,
    STATE(4), 1,
      aux_sym__func_repeat1,
    ACTIONS(19), 8,
      sym_id,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
      anon_sym_when,
    ACTIONS(17), 9,
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
    ACTIONS(25), 1,
      anon_sym_DOT,
    STATE(4), 1,
      aux_sym__func_repeat1,
    ACTIONS(23), 8,
      sym_id,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
      anon_sym_when,
    ACTIONS(21), 9,
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
    ACTIONS(30), 8,
      sym_id,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
      anon_sym_when,
    ACTIONS(28), 10,
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
    ACTIONS(34), 8,
      sym_id,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
      anon_sym_when,
    ACTIONS(32), 10,
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
    ACTIONS(38), 8,
      sym_id,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
      anon_sym_when,
    ACTIONS(36), 10,
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
    ACTIONS(42), 8,
      sym_id,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
      anon_sym_when,
    ACTIONS(40), 10,
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
    ACTIONS(23), 8,
      sym_id,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
      anon_sym_when,
    ACTIONS(21), 10,
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
  [199] = 2,
    ACTIONS(46), 1,
      sym_pos,
    ACTIONS(44), 16,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
      anon_sym_STAR,
      sym_neg,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [221] = 5,
    STATE(11), 1,
      aux_sym_arithmetic_repeat1,
    STATE(39), 1,
      sym_op,
    ACTIONS(48), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(52), 5,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(50), 8,
      sym_id,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
      anon_sym_when,
  [249] = 2,
    ACTIONS(57), 8,
      sym_id,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
      anon_sym_when,
    ACTIONS(55), 9,
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
    ACTIONS(61), 8,
      sym_id,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
      anon_sym_when,
    ACTIONS(59), 9,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [293] = 2,
    ACTIONS(65), 8,
      sym_id,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
      anon_sym_when,
    ACTIONS(63), 9,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [315] = 5,
    STATE(17), 1,
      aux_sym_arithmetic_repeat1,
    STATE(39), 1,
      sym_op,
    ACTIONS(67), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(71), 5,
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
  [343] = 2,
    ACTIONS(50), 8,
      sym_id,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
      anon_sym_when,
    ACTIONS(48), 9,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [365] = 5,
    STATE(11), 1,
      aux_sym_arithmetic_repeat1,
    STATE(39), 1,
      sym_op,
    ACTIONS(73), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(71), 5,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(75), 8,
      sym_id,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
      anon_sym_when,
  [393] = 7,
    ACTIONS(77), 1,
      anon_sym_LBRACE,
    ACTIONS(79), 1,
      anon_sym_RBRACE,
    ACTIONS(81), 1,
      sym_id,
    ACTIONS(85), 1,
      anon_sym_when,
    STATE(136), 1,
      sym_type,
    STATE(19), 4,
      sym_block,
      sym_def,
      sym_cond,
      aux_sym_block_repeat1,
    ACTIONS(83), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [423] = 7,
    ACTIONS(87), 1,
      anon_sym_LBRACE,
    ACTIONS(90), 1,
      anon_sym_RBRACE,
    ACTIONS(92), 1,
      sym_id,
    ACTIONS(98), 1,
      anon_sym_when,
    STATE(136), 1,
      sym_type,
    STATE(19), 4,
      sym_block,
      sym_def,
      sym_cond,
      aux_sym_block_repeat1,
    ACTIONS(95), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [453] = 7,
    ACTIONS(77), 1,
      anon_sym_LBRACE,
    ACTIONS(81), 1,
      sym_id,
    ACTIONS(85), 1,
      anon_sym_when,
    ACTIONS(101), 1,
      anon_sym_RBRACE,
    STATE(136), 1,
      sym_type,
    STATE(19), 4,
      sym_block,
      sym_def,
      sym_cond,
      aux_sym_block_repeat1,
    ACTIONS(83), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [483] = 7,
    ACTIONS(77), 1,
      anon_sym_LBRACE,
    ACTIONS(81), 1,
      sym_id,
    ACTIONS(85), 1,
      anon_sym_when,
    ACTIONS(103), 1,
      anon_sym_RBRACE,
    STATE(136), 1,
      sym_type,
    STATE(19), 4,
      sym_block,
      sym_def,
      sym_cond,
      aux_sym_block_repeat1,
    ACTIONS(83), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [513] = 7,
    ACTIONS(77), 1,
      anon_sym_LBRACE,
    ACTIONS(81), 1,
      sym_id,
    ACTIONS(85), 1,
      anon_sym_when,
    ACTIONS(105), 1,
      anon_sym_RBRACE,
    STATE(136), 1,
      sym_type,
    STATE(19), 4,
      sym_block,
      sym_def,
      sym_cond,
      aux_sym_block_repeat1,
    ACTIONS(83), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [543] = 11,
    ACTIONS(107), 1,
      aux_sym__str_token1,
    ACTIONS(109), 1,
      sym_asset,
    ACTIONS(111), 1,
      anon_sym_POUND,
    ACTIONS(113), 1,
      sym_num,
    ACTIONS(115), 1,
      sym_func_id,
    ACTIONS(117), 1,
      anon_sym_RPAREN,
    ACTIONS(119), 1,
      anon_sym_DOLLAR,
    STATE(2), 1,
      sym_func,
    STATE(35), 1,
      sym_arithmetic,
    STATE(103), 1,
      sym__exp,
    STATE(49), 5,
      sym__str,
      sym_dimension,
      sym_hex,
      sym__func,
      sym__ref,
  [581] = 11,
    ACTIONS(107), 1,
      aux_sym__str_token1,
    ACTIONS(109), 1,
      sym_asset,
    ACTIONS(111), 1,
      anon_sym_POUND,
    ACTIONS(113), 1,
      sym_num,
    ACTIONS(115), 1,
      sym_func_id,
    ACTIONS(119), 1,
      anon_sym_DOLLAR,
    ACTIONS(121), 1,
      anon_sym_RPAREN,
    STATE(2), 1,
      sym_func,
    STATE(35), 1,
      sym_arithmetic,
    STATE(111), 1,
      sym__exp,
    STATE(49), 5,
      sym__str,
      sym_dimension,
      sym_hex,
      sym__func,
      sym__ref,
  [619] = 11,
    ACTIONS(107), 1,
      aux_sym__str_token1,
    ACTIONS(109), 1,
      sym_asset,
    ACTIONS(111), 1,
      anon_sym_POUND,
    ACTIONS(113), 1,
      sym_num,
    ACTIONS(115), 1,
      sym_func_id,
    ACTIONS(119), 1,
      anon_sym_DOLLAR,
    ACTIONS(123), 1,
      anon_sym_RPAREN,
    STATE(2), 1,
      sym_func,
    STATE(35), 1,
      sym_arithmetic,
    STATE(113), 1,
      sym__exp,
    STATE(49), 5,
      sym__str,
      sym_dimension,
      sym_hex,
      sym__func,
      sym__ref,
  [657] = 2,
    ACTIONS(44), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(46), 8,
      sym_id,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
      anon_sym_when,
  [677] = 6,
    ACTIONS(77), 1,
      anon_sym_LBRACE,
    ACTIONS(81), 1,
      sym_id,
    ACTIONS(85), 1,
      anon_sym_when,
    STATE(136), 1,
      sym_type,
    STATE(18), 4,
      sym_block,
      sym_def,
      sym_cond,
      aux_sym_block_repeat1,
    ACTIONS(83), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [704] = 6,
    ACTIONS(77), 1,
      anon_sym_LBRACE,
    ACTIONS(81), 1,
      sym_id,
    ACTIONS(85), 1,
      anon_sym_when,
    STATE(136), 1,
      sym_type,
    STATE(20), 4,
      sym_block,
      sym_def,
      sym_cond,
      aux_sym_block_repeat1,
    ACTIONS(83), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [731] = 6,
    ACTIONS(77), 1,
      anon_sym_LBRACE,
    ACTIONS(81), 1,
      sym_id,
    ACTIONS(85), 1,
      anon_sym_when,
    STATE(136), 1,
      sym_type,
    STATE(22), 4,
      sym_block,
      sym_def,
      sym_cond,
      aux_sym_block_repeat1,
    ACTIONS(83), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [758] = 10,
    ACTIONS(125), 1,
      aux_sym__str_token1,
    ACTIONS(127), 1,
      sym_asset,
    ACTIONS(129), 1,
      anon_sym_POUND,
    ACTIONS(131), 1,
      sym_num,
    ACTIONS(133), 1,
      sym_func_id,
    ACTIONS(135), 1,
      anon_sym_DOLLAR,
    STATE(60), 1,
      sym_func,
    STATE(134), 1,
      sym_arithmetic,
    STATE(137), 1,
      sym__exp,
    STATE(61), 5,
      sym__str,
      sym_dimension,
      sym_hex,
      sym__func,
      sym__ref,
  [793] = 10,
    ACTIONS(107), 1,
      aux_sym__str_token1,
    ACTIONS(109), 1,
      sym_asset,
    ACTIONS(111), 1,
      anon_sym_POUND,
    ACTIONS(115), 1,
      sym_func_id,
    ACTIONS(137), 1,
      sym_num,
    ACTIONS(139), 1,
      anon_sym_DOLLAR,
    STATE(2), 1,
      sym_func,
    STATE(35), 1,
      sym_arithmetic,
    STATE(47), 1,
      sym__exp,
    STATE(15), 5,
      sym__str,
      sym_dimension,
      sym_hex,
      sym__func,
      sym__ref,
  [828] = 10,
    ACTIONS(107), 1,
      aux_sym__str_token1,
    ACTIONS(109), 1,
      sym_asset,
    ACTIONS(111), 1,
      anon_sym_POUND,
    ACTIONS(113), 1,
      sym_num,
    ACTIONS(115), 1,
      sym_func_id,
    ACTIONS(119), 1,
      anon_sym_DOLLAR,
    STATE(2), 1,
      sym_func,
    STATE(35), 1,
      sym_arithmetic,
    STATE(121), 1,
      sym__exp,
    STATE(49), 5,
      sym__str,
      sym_dimension,
      sym_hex,
      sym__func,
      sym__ref,
  [863] = 9,
    ACTIONS(119), 1,
      anon_sym_DOLLAR,
    ACTIONS(141), 1,
      sym_id,
    ACTIONS(143), 1,
      aux_sym__str_token1,
    ACTIONS(145), 1,
      sym_asset,
    ACTIONS(147), 1,
      anon_sym_POUND,
    ACTIONS(149), 1,
      sym_num,
    ACTIONS(151), 1,
      sym_func_id,
    STATE(79), 1,
      sym_base,
    STATE(69), 6,
      sym__str,
      sym_dimension,
      sym_hex,
      sym_func,
      sym_switch,
      sym__ref,
  [896] = 6,
    ACTIONS(77), 1,
      anon_sym_LBRACE,
    ACTIONS(81), 1,
      sym_id,
    ACTIONS(85), 1,
      anon_sym_when,
    STATE(136), 1,
      sym_type,
    STATE(21), 4,
      sym_block,
      sym_def,
      sym_cond,
      aux_sym_block_repeat1,
    ACTIONS(83), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [923] = 2,
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
  [940] = 3,
    ACTIONS(153), 1,
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
  [958] = 7,
    ACTIONS(125), 1,
      aux_sym__str_token1,
    ACTIONS(129), 1,
      anon_sym_POUND,
    ACTIONS(133), 1,
      sym_func_id,
    ACTIONS(135), 1,
      anon_sym_DOLLAR,
    ACTIONS(155), 1,
      sym_num,
    STATE(60), 1,
      sym_func,
    STATE(83), 5,
      sym__str,
      sym_dimension,
      sym_hex,
      sym__func,
      sym__ref,
  [984] = 7,
    ACTIONS(107), 1,
      aux_sym__str_token1,
    ACTIONS(111), 1,
      anon_sym_POUND,
    ACTIONS(115), 1,
      sym_func_id,
    ACTIONS(119), 1,
      anon_sym_DOLLAR,
    ACTIONS(157), 1,
      sym_num,
    STATE(2), 1,
      sym_func,
    STATE(16), 5,
      sym__str,
      sym_dimension,
      sym_hex,
      sym__func,
      sym__ref,
  [1010] = 7,
    ACTIONS(107), 1,
      aux_sym__str_token1,
    ACTIONS(111), 1,
      anon_sym_POUND,
    ACTIONS(115), 1,
      sym_func_id,
    ACTIONS(139), 1,
      anon_sym_DOLLAR,
    ACTIONS(157), 1,
      sym_num,
    STATE(2), 1,
      sym_func,
    STATE(16), 5,
      sym__str,
      sym_dimension,
      sym_hex,
      sym__func,
      sym__ref,
  [1036] = 2,
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
  [1051] = 3,
    ACTIONS(165), 1,
      anon_sym_STAR,
    STATE(62), 1,
      sym_asterisk,
    ACTIONS(163), 8,
      anon_sym_RBRACE,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
      anon_sym_COMMA,
  [1068] = 4,
    ACTIONS(167), 1,
      anon_sym_RBRACE,
    STATE(140), 1,
      sym_type,
    STATE(43), 2,
      sym_var,
      aux_sym_variants_repeat1,
    ACTIONS(169), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [1087] = 4,
    ACTIONS(171), 1,
      anon_sym_RBRACE,
    STATE(140), 1,
      sym_type,
    STATE(43), 2,
      sym_var,
      aux_sym_variants_repeat1,
    ACTIONS(173), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [1106] = 2,
    ACTIONS(176), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(178), 8,
      sym_id,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
      anon_sym_when,
  [1121] = 2,
    ACTIONS(180), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(182), 8,
      sym_id,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
      anon_sym_when,
  [1136] = 2,
    ACTIONS(184), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(186), 8,
      sym_id,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
      anon_sym_when,
  [1151] = 2,
    ACTIONS(188), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(190), 8,
      sym_id,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
      anon_sym_when,
  [1166] = 2,
    ACTIONS(192), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(194), 8,
      sym_id,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
      anon_sym_when,
  [1181] = 4,
    STATE(38), 1,
      sym_op,
    STATE(54), 1,
      aux_sym_arithmetic_repeat1,
    ACTIONS(67), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(71), 5,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [1199] = 3,
    ACTIONS(198), 1,
      anon_sym_COMMA,
    STATE(52), 1,
      aux_sym_switch_repeat1,
    ACTIONS(196), 7,
      anon_sym_RBRACE,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [1215] = 3,
    STATE(140), 1,
      sym_type,
    STATE(42), 2,
      sym_var,
      aux_sym_variants_repeat1,
    ACTIONS(169), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [1231] = 3,
    ACTIONS(200), 1,
      anon_sym_COMMA,
    STATE(52), 1,
      aux_sym_switch_repeat1,
    ACTIONS(163), 7,
      anon_sym_RBRACE,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [1247] = 3,
    ACTIONS(198), 1,
      anon_sym_COMMA,
    STATE(52), 1,
      aux_sym_switch_repeat1,
    ACTIONS(203), 7,
      anon_sym_RBRACE,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [1263] = 4,
    STATE(38), 1,
      sym_op,
    STATE(55), 1,
      aux_sym_arithmetic_repeat1,
    ACTIONS(73), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(71), 5,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [1281] = 4,
    STATE(38), 1,
      sym_op,
    STATE(55), 1,
      aux_sym_arithmetic_repeat1,
    ACTIONS(48), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(52), 5,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [1299] = 5,
    ACTIONS(5), 1,
      anon_sym_tokens,
    ACTIONS(7), 1,
      anon_sym_variants,
    ACTIONS(205), 1,
      ts_builtin_sym_end,
    ACTIONS(207), 2,
      sym_multi_line_comment,
      sym_single_line_comment,
    STATE(66), 3,
      sym__tokens,
      sym_variants,
      aux_sym_file_repeat1,
  [1318] = 4,
    ACTIONS(48), 1,
      sym__newlines,
    STATE(37), 1,
      sym_op,
    STATE(57), 1,
      aux_sym_arithmetic_repeat1,
    ACTIONS(209), 5,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [1335] = 4,
    ACTIONS(21), 1,
      sym__newlines,
    ACTIONS(212), 1,
      anon_sym_DOT,
    STATE(58), 1,
      aux_sym__func_repeat1,
    ACTIONS(23), 5,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [1352] = 2,
    ACTIONS(217), 1,
      sym_unit,
    ACTIONS(215), 7,
      anon_sym_RBRACE,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [1365] = 4,
    ACTIONS(11), 1,
      sym__newlines,
    ACTIONS(219), 1,
      anon_sym_DOT,
    STATE(63), 1,
      aux_sym__func_repeat1,
    ACTIONS(13), 5,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [1382] = 4,
    ACTIONS(67), 1,
      sym__newlines,
    STATE(37), 1,
      sym_op,
    STATE(64), 1,
      aux_sym_arithmetic_repeat1,
    ACTIONS(221), 5,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [1399] = 1,
    ACTIONS(223), 8,
      anon_sym_RBRACE,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
      anon_sym_COMMA,
  [1410] = 4,
    ACTIONS(17), 1,
      sym__newlines,
    ACTIONS(219), 1,
      anon_sym_DOT,
    STATE(58), 1,
      aux_sym__func_repeat1,
    ACTIONS(19), 5,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [1427] = 4,
    ACTIONS(73), 1,
      sym__newlines,
    STATE(37), 1,
      sym_op,
    STATE(57), 1,
      aux_sym_arithmetic_repeat1,
    ACTIONS(221), 5,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [1444] = 1,
    ACTIONS(225), 8,
      anon_sym_RBRACE,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
      anon_sym_COMMA,
  [1455] = 5,
    ACTIONS(227), 1,
      ts_builtin_sym_end,
    ACTIONS(229), 1,
      anon_sym_tokens,
    ACTIONS(232), 1,
      anon_sym_variants,
    ACTIONS(235), 2,
      sym_multi_line_comment,
      sym_single_line_comment,
    STATE(66), 3,
      sym__tokens,
      sym_variants,
      aux_sym_file_repeat1,
  [1474] = 1,
    ACTIONS(32), 7,
      anon_sym_RBRACE,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [1484] = 1,
    ACTIONS(59), 7,
      anon_sym_RBRACE,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [1494] = 1,
    ACTIONS(215), 7,
      anon_sym_RBRACE,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [1504] = 1,
    ACTIONS(55), 7,
      anon_sym_RBRACE,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [1514] = 1,
    ACTIONS(28), 7,
      anon_sym_RBRACE,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [1524] = 2,
    ACTIONS(32), 1,
      sym__newlines,
    ACTIONS(34), 6,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [1536] = 1,
    ACTIONS(36), 7,
      anon_sym_RBRACE,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [1546] = 2,
    ACTIONS(36), 1,
      sym__newlines,
    ACTIONS(38), 6,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [1558] = 1,
    ACTIONS(63), 7,
      anon_sym_RBRACE,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [1568] = 2,
    ACTIONS(40), 1,
      sym__newlines,
    ACTIONS(42), 6,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [1580] = 2,
    ACTIONS(28), 1,
      sym__newlines,
    ACTIONS(30), 6,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [1592] = 2,
    ACTIONS(21), 1,
      sym__newlines,
    ACTIONS(23), 6,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [1604] = 1,
    ACTIONS(238), 7,
      anon_sym_RBRACE,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [1614] = 1,
    ACTIONS(40), 7,
      anon_sym_RBRACE,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [1624] = 2,
    ACTIONS(63), 1,
      sym__newlines,
    ACTIONS(65), 5,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [1635] = 2,
    ACTIONS(55), 1,
      sym__newlines,
    ACTIONS(57), 5,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [1646] = 2,
    ACTIONS(48), 1,
      sym__newlines,
    ACTIONS(50), 5,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [1657] = 2,
    ACTIONS(59), 1,
      sym__newlines,
    ACTIONS(61), 5,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [1668] = 2,
    ACTIONS(44), 1,
      sym__newlines,
    ACTIONS(46), 5,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [1679] = 1,
    ACTIONS(184), 5,
      ts_builtin_sym_end,
      anon_sym_tokens,
      anon_sym_variants,
      sym_multi_line_comment,
      sym_single_line_comment,
  [1687] = 1,
    ACTIONS(240), 5,
      ts_builtin_sym_end,
      anon_sym_tokens,
      anon_sym_variants,
      sym_multi_line_comment,
      sym_single_line_comment,
  [1695] = 1,
    ACTIONS(192), 5,
      ts_builtin_sym_end,
      anon_sym_tokens,
      anon_sym_variants,
      sym_multi_line_comment,
      sym_single_line_comment,
  [1703] = 1,
    ACTIONS(242), 5,
      ts_builtin_sym_end,
      anon_sym_tokens,
      anon_sym_variants,
      sym_multi_line_comment,
      sym_single_line_comment,
  [1711] = 1,
    ACTIONS(244), 5,
      aux_sym__str_token1,
      anon_sym_POUND,
      sym_num,
      sym_func_id,
      anon_sym_DOLLAR,
  [1719] = 4,
    ACTIONS(165), 1,
      anon_sym_STAR,
    ACTIONS(198), 1,
      anon_sym_COMMA,
    STATE(53), 1,
      aux_sym_switch_repeat1,
    STATE(115), 1,
      sym_asterisk,
  [1732] = 4,
    ACTIONS(246), 1,
      anon_sym_RBRACE,
    ACTIONS(248), 1,
      sym_id,
    STATE(93), 1,
      aux_sym_cond_repeat1,
    STATE(130), 1,
      sym_set,
  [1745] = 4,
    ACTIONS(250), 1,
      anon_sym_RBRACE,
    ACTIONS(252), 1,
      sym_id,
    STATE(93), 1,
      aux_sym_cond_repeat1,
    STATE(130), 1,
      sym_set,
  [1758] = 4,
    ACTIONS(248), 1,
      sym_id,
    ACTIONS(255), 1,
      anon_sym_RBRACE,
    STATE(93), 1,
      aux_sym_cond_repeat1,
    STATE(130), 1,
      sym_set,
  [1771] = 4,
    ACTIONS(257), 1,
      anon_sym_RBRACE,
    ACTIONS(259), 1,
      sym_neg,
    ACTIONS(261), 1,
      sym_pos,
    STATE(101), 1,
      aux_sym_cond_repeat2,
  [1784] = 2,
    ACTIONS(265), 1,
      aux_sym_hex_token4,
    ACTIONS(263), 3,
      aux_sym_hex_token1,
      aux_sym_hex_token2,
      aux_sym_hex_token3,
  [1793] = 2,
    ACTIONS(269), 1,
      aux_sym_hex_token4,
    ACTIONS(267), 3,
      aux_sym_hex_token1,
      aux_sym_hex_token2,
      aux_sym_hex_token3,
  [1802] = 4,
    ACTIONS(248), 1,
      sym_id,
    ACTIONS(271), 1,
      anon_sym_RBRACE,
    STATE(92), 1,
      aux_sym_cond_repeat1,
    STATE(130), 1,
      sym_set,
  [1815] = 2,
    ACTIONS(275), 1,
      aux_sym_hex_token4,
    ACTIONS(273), 3,
      aux_sym_hex_token1,
      aux_sym_hex_token2,
      aux_sym_hex_token3,
  [1824] = 4,
    ACTIONS(248), 1,
      sym_id,
    ACTIONS(277), 1,
      anon_sym_RBRACE,
    STATE(94), 1,
      aux_sym_cond_repeat1,
    STATE(130), 1,
      sym_set,
  [1837] = 4,
    ACTIONS(279), 1,
      anon_sym_RBRACE,
    ACTIONS(281), 1,
      sym_neg,
    ACTIONS(284), 1,
      sym_pos,
    STATE(101), 1,
      aux_sym_cond_repeat2,
  [1850] = 3,
    ACTIONS(287), 1,
      anon_sym_COMMA,
    ACTIONS(289), 1,
      anon_sym_RPAREN,
    STATE(108), 1,
      aux_sym_params_repeat1,
  [1860] = 3,
    ACTIONS(287), 1,
      anon_sym_COMMA,
    ACTIONS(291), 1,
      anon_sym_RPAREN,
    STATE(105), 1,
      aux_sym_params_repeat1,
  [1870] = 2,
    ACTIONS(293), 1,
      sym_unit,
    ACTIONS(67), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1878] = 3,
    ACTIONS(287), 1,
      anon_sym_COMMA,
    ACTIONS(295), 1,
      anon_sym_RPAREN,
    STATE(108), 1,
      aux_sym_params_repeat1,
  [1888] = 3,
    ACTIONS(297), 1,
      anon_sym_LBRACE,
    ACTIONS(299), 1,
      sym_id,
    STATE(89), 1,
      sym_block,
  [1898] = 3,
    ACTIONS(301), 1,
      anon_sym_LBRACE,
    ACTIONS(303), 1,
      sym_neg,
    ACTIONS(305), 1,
      sym_pos,
  [1908] = 3,
    ACTIONS(307), 1,
      anon_sym_COMMA,
    ACTIONS(310), 1,
      anon_sym_RPAREN,
    STATE(108), 1,
      aux_sym_params_repeat1,
  [1918] = 2,
    ACTIONS(314), 1,
      sym_pos,
    ACTIONS(312), 2,
      anon_sym_RBRACE,
      sym_neg,
  [1926] = 2,
    ACTIONS(318), 1,
      sym_pos,
    ACTIONS(316), 2,
      anon_sym_RBRACE,
      sym_neg,
  [1934] = 3,
    ACTIONS(287), 1,
      anon_sym_COMMA,
    ACTIONS(320), 1,
      anon_sym_RPAREN,
    STATE(114), 1,
      aux_sym_params_repeat1,
  [1944] = 3,
    ACTIONS(259), 1,
      sym_neg,
    ACTIONS(261), 1,
      sym_pos,
    STATE(95), 1,
      aux_sym_cond_repeat2,
  [1954] = 3,
    ACTIONS(287), 1,
      anon_sym_COMMA,
    ACTIONS(322), 1,
      anon_sym_RPAREN,
    STATE(102), 1,
      aux_sym_params_repeat1,
  [1964] = 3,
    ACTIONS(287), 1,
      anon_sym_COMMA,
    ACTIONS(324), 1,
      anon_sym_RPAREN,
    STATE(108), 1,
      aux_sym_params_repeat1,
  [1974] = 2,
    ACTIONS(198), 1,
      anon_sym_COMMA,
    STATE(50), 1,
      aux_sym_switch_repeat1,
  [1981] = 1,
    ACTIONS(250), 2,
      anon_sym_RBRACE,
      sym_id,
  [1986] = 2,
    ACTIONS(326), 1,
      anon_sym_LPAREN,
    STATE(72), 1,
      sym_params,
  [1993] = 2,
    ACTIONS(328), 1,
      anon_sym_LPAREN,
    STATE(6), 1,
      sym_params,
  [2000] = 2,
    ACTIONS(67), 1,
      sym__newlines,
    ACTIONS(330), 1,
      sym_unit,
  [2007] = 2,
    ACTIONS(115), 1,
      sym_func_id,
    STATE(9), 1,
      sym_func,
  [2014] = 1,
    ACTIONS(310), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2019] = 2,
    ACTIONS(133), 1,
      sym_func_id,
    STATE(78), 1,
      sym_func,
  [2026] = 2,
    ACTIONS(119), 1,
      anon_sym_DOLLAR,
    STATE(107), 1,
      sym__ref,
  [2033] = 2,
    ACTIONS(332), 1,
      anon_sym_LPAREN,
    STATE(67), 1,
      sym_params,
  [2040] = 1,
    ACTIONS(334), 1,
      anon_sym_COLON,
  [2044] = 1,
    ACTIONS(336), 1,
      sym_ref,
  [2048] = 1,
    ACTIONS(338), 1,
      sym_ref,
  [2052] = 1,
    ACTIONS(340), 1,
      sym_ref,
  [2056] = 1,
    ACTIONS(293), 1,
      sym_unit,
  [2060] = 1,
    ACTIONS(342), 1,
      sym__newlines,
  [2064] = 1,
    ACTIONS(330), 1,
      sym_unit,
  [2068] = 1,
    ACTIONS(344), 1,
      aux_sym__str_token1,
  [2072] = 1,
    ACTIONS(346), 1,
      anon_sym_LBRACE,
  [2076] = 1,
    ACTIONS(67), 1,
      sym__newlines,
  [2080] = 1,
    ACTIONS(348), 1,
      sym_id,
  [2084] = 1,
    ACTIONS(350), 1,
      sym_id,
  [2088] = 1,
    ACTIONS(352), 1,
      sym__newlines,
  [2092] = 1,
    ACTIONS(354), 1,
      aux_sym__str_token1,
  [2096] = 1,
    ACTIONS(356), 1,
      anon_sym_LBRACE,
  [2100] = 1,
    ACTIONS(358), 1,
      sym_id,
  [2104] = 1,
    ACTIONS(360), 1,
      anon_sym_COLON,
  [2108] = 1,
    ACTIONS(362), 1,
      sym_id,
  [2112] = 1,
    ACTIONS(364), 1,
      aux_sym__str_token1,
  [2116] = 1,
    ACTIONS(366), 1,
      sym_str,
  [2120] = 1,
    ACTIONS(368), 1,
      anon_sym_LBRACE,
  [2124] = 1,
    ACTIONS(370), 1,
      sym_id,
  [2128] = 1,
    ACTIONS(372), 1,
      sym_id,
  [2132] = 1,
    ACTIONS(374), 1,
      ts_builtin_sym_end,
  [2136] = 1,
    ACTIONS(376), 1,
      anon_sym_LBRACE,
  [2140] = 1,
    ACTIONS(378), 1,
      sym_str,
  [2144] = 1,
    ACTIONS(380), 1,
      anon_sym_COLON,
  [2148] = 1,
    ACTIONS(382), 1,
      sym_str,
  [2152] = 1,
    ACTIONS(384), 1,
      anon_sym_LBRACE,
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
  [SMALL_STATE(11)] = 221,
  [SMALL_STATE(12)] = 249,
  [SMALL_STATE(13)] = 271,
  [SMALL_STATE(14)] = 293,
  [SMALL_STATE(15)] = 315,
  [SMALL_STATE(16)] = 343,
  [SMALL_STATE(17)] = 365,
  [SMALL_STATE(18)] = 393,
  [SMALL_STATE(19)] = 423,
  [SMALL_STATE(20)] = 453,
  [SMALL_STATE(21)] = 483,
  [SMALL_STATE(22)] = 513,
  [SMALL_STATE(23)] = 543,
  [SMALL_STATE(24)] = 581,
  [SMALL_STATE(25)] = 619,
  [SMALL_STATE(26)] = 657,
  [SMALL_STATE(27)] = 677,
  [SMALL_STATE(28)] = 704,
  [SMALL_STATE(29)] = 731,
  [SMALL_STATE(30)] = 758,
  [SMALL_STATE(31)] = 793,
  [SMALL_STATE(32)] = 828,
  [SMALL_STATE(33)] = 863,
  [SMALL_STATE(34)] = 896,
  [SMALL_STATE(35)] = 923,
  [SMALL_STATE(36)] = 940,
  [SMALL_STATE(37)] = 958,
  [SMALL_STATE(38)] = 984,
  [SMALL_STATE(39)] = 1010,
  [SMALL_STATE(40)] = 1036,
  [SMALL_STATE(41)] = 1051,
  [SMALL_STATE(42)] = 1068,
  [SMALL_STATE(43)] = 1087,
  [SMALL_STATE(44)] = 1106,
  [SMALL_STATE(45)] = 1121,
  [SMALL_STATE(46)] = 1136,
  [SMALL_STATE(47)] = 1151,
  [SMALL_STATE(48)] = 1166,
  [SMALL_STATE(49)] = 1181,
  [SMALL_STATE(50)] = 1199,
  [SMALL_STATE(51)] = 1215,
  [SMALL_STATE(52)] = 1231,
  [SMALL_STATE(53)] = 1247,
  [SMALL_STATE(54)] = 1263,
  [SMALL_STATE(55)] = 1281,
  [SMALL_STATE(56)] = 1299,
  [SMALL_STATE(57)] = 1318,
  [SMALL_STATE(58)] = 1335,
  [SMALL_STATE(59)] = 1352,
  [SMALL_STATE(60)] = 1365,
  [SMALL_STATE(61)] = 1382,
  [SMALL_STATE(62)] = 1399,
  [SMALL_STATE(63)] = 1410,
  [SMALL_STATE(64)] = 1427,
  [SMALL_STATE(65)] = 1444,
  [SMALL_STATE(66)] = 1455,
  [SMALL_STATE(67)] = 1474,
  [SMALL_STATE(68)] = 1484,
  [SMALL_STATE(69)] = 1494,
  [SMALL_STATE(70)] = 1504,
  [SMALL_STATE(71)] = 1514,
  [SMALL_STATE(72)] = 1524,
  [SMALL_STATE(73)] = 1536,
  [SMALL_STATE(74)] = 1546,
  [SMALL_STATE(75)] = 1558,
  [SMALL_STATE(76)] = 1568,
  [SMALL_STATE(77)] = 1580,
  [SMALL_STATE(78)] = 1592,
  [SMALL_STATE(79)] = 1604,
  [SMALL_STATE(80)] = 1614,
  [SMALL_STATE(81)] = 1624,
  [SMALL_STATE(82)] = 1635,
  [SMALL_STATE(83)] = 1646,
  [SMALL_STATE(84)] = 1657,
  [SMALL_STATE(85)] = 1668,
  [SMALL_STATE(86)] = 1679,
  [SMALL_STATE(87)] = 1687,
  [SMALL_STATE(88)] = 1695,
  [SMALL_STATE(89)] = 1703,
  [SMALL_STATE(90)] = 1711,
  [SMALL_STATE(91)] = 1719,
  [SMALL_STATE(92)] = 1732,
  [SMALL_STATE(93)] = 1745,
  [SMALL_STATE(94)] = 1758,
  [SMALL_STATE(95)] = 1771,
  [SMALL_STATE(96)] = 1784,
  [SMALL_STATE(97)] = 1793,
  [SMALL_STATE(98)] = 1802,
  [SMALL_STATE(99)] = 1815,
  [SMALL_STATE(100)] = 1824,
  [SMALL_STATE(101)] = 1837,
  [SMALL_STATE(102)] = 1850,
  [SMALL_STATE(103)] = 1860,
  [SMALL_STATE(104)] = 1870,
  [SMALL_STATE(105)] = 1878,
  [SMALL_STATE(106)] = 1888,
  [SMALL_STATE(107)] = 1898,
  [SMALL_STATE(108)] = 1908,
  [SMALL_STATE(109)] = 1918,
  [SMALL_STATE(110)] = 1926,
  [SMALL_STATE(111)] = 1934,
  [SMALL_STATE(112)] = 1944,
  [SMALL_STATE(113)] = 1954,
  [SMALL_STATE(114)] = 1964,
  [SMALL_STATE(115)] = 1974,
  [SMALL_STATE(116)] = 1981,
  [SMALL_STATE(117)] = 1986,
  [SMALL_STATE(118)] = 1993,
  [SMALL_STATE(119)] = 2000,
  [SMALL_STATE(120)] = 2007,
  [SMALL_STATE(121)] = 2014,
  [SMALL_STATE(122)] = 2019,
  [SMALL_STATE(123)] = 2026,
  [SMALL_STATE(124)] = 2033,
  [SMALL_STATE(125)] = 2040,
  [SMALL_STATE(126)] = 2044,
  [SMALL_STATE(127)] = 2048,
  [SMALL_STATE(128)] = 2052,
  [SMALL_STATE(129)] = 2056,
  [SMALL_STATE(130)] = 2060,
  [SMALL_STATE(131)] = 2064,
  [SMALL_STATE(132)] = 2068,
  [SMALL_STATE(133)] = 2072,
  [SMALL_STATE(134)] = 2076,
  [SMALL_STATE(135)] = 2080,
  [SMALL_STATE(136)] = 2084,
  [SMALL_STATE(137)] = 2088,
  [SMALL_STATE(138)] = 2092,
  [SMALL_STATE(139)] = 2096,
  [SMALL_STATE(140)] = 2100,
  [SMALL_STATE(141)] = 2104,
  [SMALL_STATE(142)] = 2108,
  [SMALL_STATE(143)] = 2112,
  [SMALL_STATE(144)] = 2116,
  [SMALL_STATE(145)] = 2120,
  [SMALL_STATE(146)] = 2124,
  [SMALL_STATE(147)] = 2128,
  [SMALL_STATE(148)] = 2132,
  [SMALL_STATE(149)] = 2136,
  [SMALL_STATE(150)] = 2140,
  [SMALL_STATE(151)] = 2144,
  [SMALL_STATE(152)] = 2148,
  [SMALL_STATE(153)] = 2152,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__func, 1),
  [13] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__func, 1),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__func, 2),
  [19] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__func, 2),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__func_repeat1, 2),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__func_repeat1, 2),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__func_repeat1, 2), SHIFT_REPEAT(120),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 4),
  [30] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_params, 4),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 2),
  [34] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func, 2),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 2),
  [38] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_params, 2),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 3),
  [42] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_params, 3),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ref, 2),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ref, 2),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arithmetic_repeat1, 2),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arithmetic_repeat1, 2),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arithmetic_repeat1, 2), SHIFT_REPEAT(90),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__str, 3),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__str, 3),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dimension, 2),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dimension, 2),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hex, 2),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hex, 2),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exp, 1),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__exp, 1),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arithmetic, 2),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arithmetic, 2),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(34),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(153),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(142),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(123),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cond, 5),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cond, 5),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_switch_repeat1, 2),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variants_repeat1, 2),
  [173] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variants_repeat1, 2), SHIFT_REPEAT(142),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cond, 7),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cond, 7),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cond, 6),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cond, 6),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def, 4, .production_id = 2),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_def, 4, .production_id = 2),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 4),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch, 3),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [200] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_switch_repeat1, 2), SHIFT_REPEAT(135),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch, 2),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 1),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [209] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arithmetic_repeat1, 2), SHIFT_REPEAT(90),
  [212] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__func_repeat1, 2), SHIFT_REPEAT(122),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base, 1),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_switch_repeat1, 3),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_asterisk, 1),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2),
  [229] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(106),
  [232] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(149),
  [235] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(66),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var, 4),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variants, 4),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tokens, 2, .production_id = 1),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op, 1),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_cond_repeat1, 2),
  [252] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cond_repeat1, 2), SHIFT_REPEAT(125),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_cond_repeat2, 2),
  [281] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cond_repeat2, 2), SHIFT_REPEAT(146),
  [284] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cond_repeat2, 2), SHIFT_REPEAT(146),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [307] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2), SHIFT_REPEAT(32),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_cond_repeat2, 5),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_cond_repeat2, 5),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_cond_repeat2, 4),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_cond_repeat2, 4),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 3, .production_id = 3),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [374] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
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
