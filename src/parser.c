#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 171
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 81
#define ALIAS_COUNT 5
#define TOKEN_COUNT 43
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 5

enum {
  anon_sym_config = 1,
  anon_sym_LBRACE = 2,
  anon_sym_RBRACE = 3,
  anon_sym_COLON = 4,
  anon_sym_tokens = 5,
  anon_sym_variants = 6,
  sym_id = 7,
  anon_sym_text = 8,
  anon_sym_color = 9,
  anon_sym_asset = 10,
  anon_sym_switch = 11,
  anon_sym_dimension = 12,
  anon_sym_range = 13,
  sym__newlines = 14,
  aux_sym__str_token1 = 15,
  sym_asset = 16,
  anon_sym_STAR = 17,
  anon_sym_when = 18,
  sym_decimal_range = 19,
  sym_unit = 20,
  anon_sym_POUND = 21,
  aux_sym_hex_token1 = 22,
  aux_sym_hex_token2 = 23,
  aux_sym_hex_token3 = 24,
  aux_sym_hex_token4 = 25,
  sym_multi_line_comment = 26,
  sym_neg = 27,
  sym_num = 28,
  anon_sym_DOT = 29,
  sym_func_id = 30,
  anon_sym_LPAREN = 31,
  anon_sym_COMMA = 32,
  anon_sym_RPAREN = 33,
  anon_sym_PLUS = 34,
  anon_sym_DASH = 35,
  anon_sym_SLASH = 36,
  anon_sym_PERCENT = 37,
  sym_pos = 38,
  sym_ref = 39,
  sym_single_line_comment = 40,
  sym_str = 41,
  anon_sym_DOLLAR = 42,
  sym_file = 43,
  sym_config = 44,
  sym_config_def = 45,
  sym_config_block = 46,
  sym__tokens = 47,
  sym_variants = 48,
  sym_var = 49,
  sym_base = 50,
  sym_block = 51,
  sym_def = 52,
  sym_type = 53,
  sym__exp = 54,
  sym__str = 55,
  sym_asterisk = 56,
  sym_bool = 57,
  sym_assertion = 58,
  sym_cond = 59,
  sym_dimension = 60,
  sym_hex = 61,
  sym_arithmetic = 62,
  sym_func = 63,
  sym__func = 64,
  sym_params = 65,
  sym_op = 66,
  sym_switch = 67,
  sym_set = 68,
  sym__ref = 69,
  aux_sym_file_repeat1 = 70,
  aux_sym_config_repeat1 = 71,
  aux_sym_config_block_repeat1 = 72,
  aux_sym_variants_repeat1 = 73,
  aux_sym_block_repeat1 = 74,
  aux_sym_assertion_repeat1 = 75,
  aux_sym_cond_repeat1 = 76,
  aux_sym_arithmetic_repeat1 = 77,
  aux_sym__func_repeat1 = 78,
  aux_sym_params_repeat1 = 79,
  aux_sym_switch_repeat1 = 80,
  alias_sym_block_id = 81,
  alias_sym_def_id = 82,
  alias_sym_exp = 83,
  alias_sym_set_id = 84,
  alias_sym_tokens = 85,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_config] = "config",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COLON] = ":",
  [anon_sym_tokens] = "tokens",
  [anon_sym_variants] = "variants",
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
  [sym_config] = "config",
  [sym_config_def] = "config_def",
  [sym_config_block] = "config_block",
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
  [sym_bool] = "bool",
  [sym_assertion] = "assertion",
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
  [aux_sym_config_repeat1] = "config_repeat1",
  [aux_sym_config_block_repeat1] = "config_block_repeat1",
  [aux_sym_variants_repeat1] = "variants_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_assertion_repeat1] = "assertion_repeat1",
  [aux_sym_cond_repeat1] = "cond_repeat1",
  [aux_sym_arithmetic_repeat1] = "arithmetic_repeat1",
  [aux_sym__func_repeat1] = "_func_repeat1",
  [aux_sym_params_repeat1] = "params_repeat1",
  [aux_sym_switch_repeat1] = "switch_repeat1",
  [alias_sym_block_id] = "block_id",
  [alias_sym_def_id] = "def_id",
  [alias_sym_exp] = "exp",
  [alias_sym_set_id] = "set_id",
  [alias_sym_tokens] = "tokens",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_config] = anon_sym_config,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_tokens] = anon_sym_tokens,
  [anon_sym_variants] = anon_sym_variants,
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
  [sym_config] = sym_config,
  [sym_config_def] = sym_config_def,
  [sym_config_block] = sym_config_block,
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
  [sym_bool] = sym_bool,
  [sym_assertion] = sym_assertion,
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
  [aux_sym_config_repeat1] = aux_sym_config_repeat1,
  [aux_sym_config_block_repeat1] = aux_sym_config_block_repeat1,
  [aux_sym_variants_repeat1] = aux_sym_variants_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_assertion_repeat1] = aux_sym_assertion_repeat1,
  [aux_sym_cond_repeat1] = aux_sym_cond_repeat1,
  [aux_sym_arithmetic_repeat1] = aux_sym_arithmetic_repeat1,
  [aux_sym__func_repeat1] = aux_sym__func_repeat1,
  [aux_sym_params_repeat1] = aux_sym_params_repeat1,
  [aux_sym_switch_repeat1] = aux_sym_switch_repeat1,
  [alias_sym_block_id] = alias_sym_block_id,
  [alias_sym_def_id] = alias_sym_def_id,
  [alias_sym_exp] = alias_sym_exp,
  [alias_sym_set_id] = alias_sym_set_id,
  [alias_sym_tokens] = alias_sym_tokens,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_config] = {
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
  [anon_sym_tokens] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_variants] = {
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
  [sym_config] = {
    .visible = true,
    .named = true,
  },
  [sym_config_def] = {
    .visible = true,
    .named = true,
  },
  [sym_config_block] = {
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
  [sym_bool] = {
    .visible = true,
    .named = true,
  },
  [sym_assertion] = {
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
  [aux_sym_config_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_config_block_repeat1] = {
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
  [aux_sym_assertion_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_cond_repeat1] = {
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
  [alias_sym_block_id] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_def_id] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_exp] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_set_id] = {
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
    [0] = alias_sym_block_id,
  },
  [3] = {
    [1] = alias_sym_def_id,
    [3] = alias_sym_exp,
  },
  [4] = {
    [0] = alias_sym_set_id,
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
  [19] = 17,
  [20] = 20,
  [21] = 18,
  [22] = 20,
  [23] = 23,
  [24] = 18,
  [25] = 13,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 27,
  [32] = 32,
  [33] = 33,
  [34] = 33,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 36,
  [39] = 36,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 12,
  [53] = 53,
  [54] = 15,
  [55] = 14,
  [56] = 56,
  [57] = 23,
  [58] = 58,
  [59] = 2,
  [60] = 15,
  [61] = 4,
  [62] = 12,
  [63] = 63,
  [64] = 14,
  [65] = 3,
  [66] = 66,
  [67] = 67,
  [68] = 6,
  [69] = 11,
  [70] = 9,
  [71] = 8,
  [72] = 10,
  [73] = 23,
  [74] = 74,
  [75] = 75,
  [76] = 5,
  [77] = 7,
  [78] = 9,
  [79] = 8,
  [80] = 7,
  [81] = 5,
  [82] = 82,
  [83] = 23,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 11,
  [89] = 48,
  [90] = 10,
  [91] = 91,
  [92] = 13,
  [93] = 47,
  [94] = 16,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 104,
  [108] = 101,
  [109] = 109,
  [110] = 104,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 114,
  [116] = 112,
  [117] = 117,
  [118] = 118,
  [119] = 117,
  [120] = 50,
  [121] = 37,
  [122] = 117,
  [123] = 112,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 127,
  [129] = 129,
  [130] = 37,
  [131] = 131,
  [132] = 132,
  [133] = 126,
  [134] = 134,
  [135] = 135,
  [136] = 126,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 138,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 138,
  [154] = 142,
  [155] = 142,
  [156] = 156,
  [157] = 157,
  [158] = 144,
  [159] = 159,
  [160] = 160,
  [161] = 142,
  [162] = 162,
  [163] = 163,
  [164] = 148,
  [165] = 165,
  [166] = 35,
  [167] = 148,
  [168] = 148,
  [169] = 157,
  [170] = 145,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(122);
      if (lookahead == '"') ADVANCE(174);
      if (lookahead == '#') ADVANCE(187);
      if (lookahead == '$') ADVANCE(211);
      if (lookahead == '%') ADVANCE(205);
      if (lookahead == '(') ADVANCE(198);
      if (lookahead == ')') ADVANCE(200);
      if (lookahead == '*') ADVANCE(176);
      if (lookahead == '+') ADVANCE(201);
      if (lookahead == ',') ADVANCE(199);
      if (lookahead == '-') ADVANCE(202);
      if (lookahead == '.') ADVANCE(196);
      if (lookahead == '/') ADVANCE(204);
      if (lookahead == '0') ADVANCE(179);
      if (lookahead == '1') ADVANCE(180);
      if (lookahead == ':') ADVANCE(126);
      if (lookahead == 'a') ADVANCE(76);
      if (lookahead == 'c') ADVANCE(95);
      if (lookahead == 'd') ADVANCE(25);
      if (lookahead == 'e') ADVANCE(103);
      if (lookahead == 'i') ADVANCE(58);
      if (lookahead == 'm') ADVANCE(100);
      if (lookahead == 'p') ADVANCE(105);
      if (lookahead == 'r') ADVANCE(16);
      if (lookahead == 's') ADVANCE(184);
      if (lookahead == 't') ADVANCE(27);
      if (lookahead == 'v') ADVANCE(18);
      if (lookahead == 'w') ADVANCE(42);
      if (lookahead == '{') ADVANCE(124);
      if (lookahead == '}') ADVANCE(125);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(119)
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(114);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(173);
      if (lookahead == '%') ADVANCE(205);
      if (lookahead == '*') ADVANCE(176);
      if (lookahead == '+') ADVANCE(201);
      if (lookahead == '-') ADVANCE(202);
      if (lookahead == '.') ADVANCE(196);
      if (lookahead == '/') ADVANCE(203);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(173);
      if (lookahead == '%' ||
          lookahead == 's') ADVANCE(183);
      if (lookahead == 'c') ADVANCE(94);
      if (lookahead == 'd') ADVANCE(32);
      if (lookahead == 'e') ADVANCE(102);
      if (lookahead == 'i') ADVANCE(57);
      if (lookahead == 'm') ADVANCE(100);
      if (lookahead == 'p') ADVANCE(105);
      if (lookahead == 'r') ADVANCE(30);
      if (lookahead == 'v') ADVANCE(98);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(173);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(174);
      if (lookahead == '#') ADVANCE(187);
      if (lookahead == '$') ADVANCE(211);
      if (lookahead == ')') ADVANCE(200);
      if (lookahead == '-') ADVANCE(109);
      if (lookahead == '/') ADVANCE(118);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(194);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(174);
      if (lookahead == '#') ADVANCE(187);
      if (lookahead == '$') ADVANCE(211);
      if (lookahead == '-') ADVANCE(109);
      if (lookahead == '/') ADVANCE(118);
      if (lookahead == '{') ADVANCE(124);
      if (lookahead == '}') ADVANCE(125);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(194);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 6:
      if (lookahead == '%') ADVANCE(205);
      if (lookahead == ')') ADVANCE(200);
      if (lookahead == '*') ADVANCE(176);
      if (lookahead == '+') ADVANCE(201);
      if (lookahead == ',') ADVANCE(199);
      if (lookahead == '-') ADVANCE(202);
      if (lookahead == '.') ADVANCE(196);
      if (lookahead == '/') ADVANCE(203);
      if (lookahead == 'a') ADVANCE(80);
      if (lookahead == 'c') ADVANCE(68);
      if (lookahead == 'd') ADVANCE(48);
      if (lookahead == 'r') ADVANCE(21);
      if (lookahead == 's') ADVANCE(89);
      if (lookahead == 't') ADVANCE(29);
      if (lookahead == 'w') ADVANCE(44);
      if (lookahead == '{') ADVANCE(124);
      if (lookahead == '}') ADVANCE(125);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 7:
      if (lookahead == '%') ADVANCE(205);
      if (lookahead == ')') ADVANCE(200);
      if (lookahead == '*') ADVANCE(176);
      if (lookahead == '+') ADVANCE(201);
      if (lookahead == ',') ADVANCE(199);
      if (lookahead == '-') ADVANCE(202);
      if (lookahead == '/') ADVANCE(203);
      if (lookahead == 'a') ADVANCE(75);
      if (lookahead == 'c') ADVANCE(69);
      if (lookahead == 'd') ADVANCE(45);
      if (lookahead == 'i') ADVANCE(77);
      if (lookahead == 'r') ADVANCE(15);
      if (lookahead == 's') ADVANCE(88);
      if (lookahead == 't') ADVANCE(26);
      if (lookahead == '{') ADVANCE(124);
      if (lookahead == '}') ADVANCE(125);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      END_STATE();
    case 8:
      if (lookahead == '%') ADVANCE(205);
      if (lookahead == ')') ADVANCE(200);
      if (lookahead == '*') ADVANCE(176);
      if (lookahead == '+') ADVANCE(201);
      if (lookahead == ',') ADVANCE(199);
      if (lookahead == '-') ADVANCE(202);
      if (lookahead == '/') ADVANCE(203);
      if (lookahead == '}') ADVANCE(125);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 9:
      if (lookahead == '%') ADVANCE(183);
      if (lookahead == 'a') ADVANCE(80);
      if (lookahead == 'c') ADVANCE(96);
      if (lookahead == 'd') ADVANCE(31);
      if (lookahead == 'e') ADVANCE(104);
      if (lookahead == 'i') ADVANCE(62);
      if (lookahead == 'm') ADVANCE(101);
      if (lookahead == 'p') ADVANCE(106);
      if (lookahead == 'r') ADVANCE(20);
      if (lookahead == 's') ADVANCE(185);
      if (lookahead == 't') ADVANCE(29);
      if (lookahead == 'v') ADVANCE(99);
      if (lookahead == 'w') ADVANCE(44);
      if (lookahead == '{') ADVANCE(124);
      if (lookahead == '}') ADVANCE(125);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 10:
      if (lookahead == ')') ADVANCE(200);
      if (lookahead == ',') ADVANCE(199);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      END_STATE();
    case 11:
      if (lookahead == '*') ADVANCE(13);
      if (lookahead == '/') ADVANCE(208);
      END_STATE();
    case 12:
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '/') ADVANCE(192);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 13:
      if (lookahead == '*') ADVANCE(12);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '0') ADVANCE(181);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(59);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(59);
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(74);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(74);
      if (lookahead == 'h' ||
          lookahead == 'w') ADVANCE(183);
      if (lookahead == 'm') ADVANCE(22);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(80);
      if (lookahead == 'c') ADVANCE(68);
      if (lookahead == 'd') ADVANCE(48);
      if (lookahead == 'r') ADVANCE(21);
      if (lookahead == 's') ADVANCE(89);
      if (lookahead == 't') ADVANCE(29);
      if (lookahead == 'w') ADVANCE(44);
      if (lookahead == '{') ADVANCE(124);
      if (lookahead == '}') ADVANCE(125);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(143);
      if (lookahead == 'e') ADVANCE(141);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(143);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(90);
      if (lookahead == 'i') ADVANCE(57);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(66);
      END_STATE();
    case 24:
      if (lookahead == 'c') ADVANCE(43);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(39);
      if (lookahead == 'i') ADVANCE(56);
      if (lookahead == 'v') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(111);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(91);
      if (lookahead == 'o') ADVANCE(52);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(171);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(157);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(135);
      if (lookahead == 'i') ADVANCE(142);
      if (lookahead == 'v') ADVANCE(159);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(38);
      if (lookahead == 'v') ADVANCE(97);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 37:
      if (lookahead == 'f') ADVANCE(49);
      END_STATE();
    case 38:
      if (lookahead == 'g') ADVANCE(183);
      END_STATE();
    case 39:
      if (lookahead == 'g') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(188);
      END_STATE();
    case 40:
      if (lookahead == 'g') ADVANCE(123);
      END_STATE();
    case 41:
      if (lookahead == 'g') ADVANCE(28);
      END_STATE();
    case 42:
      if (lookahead == 'h') ADVANCE(34);
      END_STATE();
    case 43:
      if (lookahead == 'h') ADVANCE(167);
      END_STATE();
    case 44:
      if (lookahead == 'h') ADVANCE(132);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 45:
      if (lookahead == 'i') ADVANCE(56);
      END_STATE();
    case 46:
      if (lookahead == 'i') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(111);
      END_STATE();
    case 47:
      if (lookahead == 'i') ADVANCE(83);
      END_STATE();
    case 48:
      if (lookahead == 'i') ADVANCE(142);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 49:
      if (lookahead == 'i') ADVANCE(40);
      END_STATE();
    case 50:
      if (lookahead == 'i') ADVANCE(23);
      END_STATE();
    case 51:
      if (lookahead == 'i') ADVANCE(72);
      END_STATE();
    case 52:
      if (lookahead == 'k') ADVANCE(36);
      END_STATE();
    case 53:
      if (lookahead == 'l') ADVANCE(70);
      END_STATE();
    case 54:
      if (lookahead == 'l') ADVANCE(70);
      if (lookahead == 'n') ADVANCE(37);
      END_STATE();
    case 55:
      if (lookahead == 'm') ADVANCE(183);
      END_STATE();
    case 56:
      if (lookahead == 'm') ADVANCE(35);
      END_STATE();
    case 57:
      if (lookahead == 'n') ADVANCE(183);
      END_STATE();
    case 58:
      if (lookahead == 'n') ADVANCE(183);
      if (lookahead == 's') ADVANCE(206);
      END_STATE();
    case 59:
      if (lookahead == 'n') ADVANCE(41);
      END_STATE();
    case 60:
      if (lookahead == 'n') ADVANCE(177);
      END_STATE();
    case 61:
      if (lookahead == 'n') ADVANCE(169);
      END_STATE();
    case 62:
      if (lookahead == 'n') ADVANCE(186);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 63:
      if (lookahead == 'n') ADVANCE(71);
      END_STATE();
    case 64:
      if (lookahead == 'n') ADVANCE(82);
      END_STATE();
    case 65:
      if (lookahead == 'n') ADVANCE(78);
      END_STATE();
    case 66:
      if (lookahead == 'n') ADVANCE(87);
      END_STATE();
    case 67:
      if (lookahead == 'o') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(111);
      END_STATE();
    case 68:
      if (lookahead == 'o') ADVANCE(140);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 69:
      if (lookahead == 'o') ADVANCE(53);
      END_STATE();
    case 70:
      if (lookahead == 'o') ADVANCE(73);
      END_STATE();
    case 71:
      if (lookahead == 'o') ADVANCE(86);
      END_STATE();
    case 72:
      if (lookahead == 'o') ADVANCE(61);
      END_STATE();
    case 73:
      if (lookahead == 'r') ADVANCE(163);
      END_STATE();
    case 74:
      if (lookahead == 'r') ADVANCE(50);
      END_STATE();
    case 75:
      if (lookahead == 's') ADVANCE(81);
      END_STATE();
    case 76:
      if (lookahead == 's') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(111);
      END_STATE();
    case 77:
      if (lookahead == 's') ADVANCE(206);
      END_STATE();
    case 78:
      if (lookahead == 's') ADVANCE(127);
      END_STATE();
    case 79:
      if (lookahead == 's') ADVANCE(128);
      END_STATE();
    case 80:
      if (lookahead == 's') ADVANCE(152);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 81:
      if (lookahead == 's') ADVANCE(33);
      END_STATE();
    case 82:
      if (lookahead == 's') ADVANCE(51);
      END_STATE();
    case 83:
      if (lookahead == 't') ADVANCE(24);
      END_STATE();
    case 84:
      if (lookahead == 't') ADVANCE(161);
      END_STATE();
    case 85:
      if (lookahead == 't') ADVANCE(165);
      END_STATE();
    case 86:
      if (lookahead == 't') ADVANCE(193);
      END_STATE();
    case 87:
      if (lookahead == 't') ADVANCE(79);
      END_STATE();
    case 88:
      if (lookahead == 'w') ADVANCE(47);
      END_STATE();
    case 89:
      if (lookahead == 'w') ADVANCE(138);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 90:
      if (lookahead == 'x') ADVANCE(183);
      END_STATE();
    case 91:
      if (lookahead == 'x') ADVANCE(84);
      END_STATE();
    case 92:
      if (lookahead == '%' ||
          lookahead == 's') ADVANCE(183);
      if (lookahead == ')') ADVANCE(200);
      if (lookahead == ',') ADVANCE(199);
      if (lookahead == 'c') ADVANCE(94);
      if (lookahead == 'd') ADVANCE(32);
      if (lookahead == 'e') ADVANCE(102);
      if (lookahead == 'i') ADVANCE(57);
      if (lookahead == 'm') ADVANCE(100);
      if (lookahead == 'p') ADVANCE(105);
      if (lookahead == 'r') ADVANCE(30);
      if (lookahead == 'v') ADVANCE(98);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      END_STATE();
    case 93:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 94:
      if (lookahead == 'h' ||
          lookahead == 'm') ADVANCE(183);
      END_STATE();
    case 95:
      if (lookahead == 'h' ||
          lookahead == 'm') ADVANCE(183);
      if (lookahead == 'o') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(111);
      END_STATE();
    case 96:
      if (lookahead == 'h' ||
          lookahead == 'm') ADVANCE(186);
      if (lookahead == 'o') ADVANCE(140);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 97:
      if (lookahead == 'h' ||
          lookahead == 'w') ADVANCE(183);
      END_STATE();
    case 98:
      if (lookahead == 'h' ||
          lookahead == 'w') ADVANCE(183);
      if (lookahead == 'm') ADVANCE(22);
      END_STATE();
    case 99:
      if (lookahead == 'h' ||
          lookahead == 'w') ADVANCE(186);
      if (lookahead == 'm') ADVANCE(129);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 100:
      if (lookahead == 'm' ||
          lookahead == 's') ADVANCE(183);
      END_STATE();
    case 101:
      if (lookahead == 'm' ||
          lookahead == 's') ADVANCE(186);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 102:
      if (lookahead == 'm' ||
          lookahead == 'x') ADVANCE(183);
      END_STATE();
    case 103:
      if (lookahead == 'm' ||
          lookahead == 'x') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(111);
      END_STATE();
    case 104:
      if (lookahead == 'm' ||
          lookahead == 'x') ADVANCE(186);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 105:
      if (lookahead == 'c' ||
          lookahead == 't' ||
          lookahead == 'x') ADVANCE(183);
      END_STATE();
    case 106:
      if (lookahead == 'c' ||
          lookahead == 't' ||
          lookahead == 'x') ADVANCE(186);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 107:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(107)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 108:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(182);
      END_STATE();
    case 109:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(194);
      END_STATE();
    case 110:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(195);
      END_STATE();
    case 111:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(188);
      END_STATE();
    case 112:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(190);
      END_STATE();
    case 113:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(191);
      END_STATE();
    case 114:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(111);
      END_STATE();
    case 115:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 116:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 117:
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 118:
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 119:
      if (eof) ADVANCE(122);
      if (lookahead == '"') ADVANCE(174);
      if (lookahead == '#') ADVANCE(187);
      if (lookahead == '$') ADVANCE(211);
      if (lookahead == '%') ADVANCE(205);
      if (lookahead == '(') ADVANCE(198);
      if (lookahead == ')') ADVANCE(200);
      if (lookahead == '*') ADVANCE(176);
      if (lookahead == '+') ADVANCE(201);
      if (lookahead == ',') ADVANCE(199);
      if (lookahead == '-') ADVANCE(202);
      if (lookahead == '.') ADVANCE(196);
      if (lookahead == '/') ADVANCE(204);
      if (lookahead == '0') ADVANCE(179);
      if (lookahead == '1') ADVANCE(180);
      if (lookahead == ':') ADVANCE(126);
      if (lookahead == 'a') ADVANCE(76);
      if (lookahead == 'c') ADVANCE(67);
      if (lookahead == 'd') ADVANCE(46);
      if (lookahead == 'i') ADVANCE(77);
      if (lookahead == 'r') ADVANCE(15);
      if (lookahead == 's') ADVANCE(88);
      if (lookahead == 't') ADVANCE(27);
      if (lookahead == 'v') ADVANCE(17);
      if (lookahead == 'w') ADVANCE(42);
      if (lookahead == '{') ADVANCE(124);
      if (lookahead == '}') ADVANCE(125);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(119)
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(114);
      END_STATE();
    case 120:
      if (eof) ADVANCE(122);
      if (lookahead == '%') ADVANCE(183);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == 'a') ADVANCE(76);
      if (lookahead == 'c') ADVANCE(95);
      if (lookahead == 'd') ADVANCE(25);
      if (lookahead == 'e') ADVANCE(103);
      if (lookahead == 'i') ADVANCE(57);
      if (lookahead == 'm') ADVANCE(100);
      if (lookahead == 'p') ADVANCE(105);
      if (lookahead == 'r') ADVANCE(16);
      if (lookahead == 's') ADVANCE(184);
      if (lookahead == 't') ADVANCE(27);
      if (lookahead == 'v') ADVANCE(18);
      if (lookahead == '}') ADVANCE(125);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(121)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(114);
      END_STATE();
    case 121:
      if (eof) ADVANCE(122);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == 'a') ADVANCE(76);
      if (lookahead == 'c') ADVANCE(67);
      if (lookahead == 'd') ADVANCE(46);
      if (lookahead == 'r') ADVANCE(15);
      if (lookahead == 's') ADVANCE(88);
      if (lookahead == 't') ADVANCE(27);
      if (lookahead == 'v') ADVANCE(17);
      if (lookahead == '}') ADVANCE(125);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(121)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(114);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_config);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_tokens);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_variants);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'a') ADVANCE(156);
      if (lookahead == 'i') ADVANCE(146);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'c') ADVANCE(137);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'e') ADVANCE(172);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'e') ADVANCE(144);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'e') ADVANCE(147);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'e') ADVANCE(155);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'g') ADVANCE(186);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'g') ADVANCE(131);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'h') ADVANCE(168);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'i') ADVANCE(153);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'i') ADVANCE(149);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'l') ADVANCE(148);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'm') ADVANCE(186);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'm') ADVANCE(133);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'n') ADVANCE(136);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'n') ADVANCE(178);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'n') ADVANCE(170);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'n') ADVANCE(186);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'n') ADVANCE(151);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'o') ADVANCE(150);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'o') ADVANCE(145);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'r') ADVANCE(164);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 's') ADVANCE(139);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 's') ADVANCE(134);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 't') ADVANCE(130);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 't') ADVANCE(162);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 't') ADVANCE(166);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'x') ADVANCE(186);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'x') ADVANCE(154);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'h' ||
          lookahead == 'w') ADVANCE(186);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_text);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_text);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_color);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_color);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_asset);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_asset);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_switch);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_switch);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_dimension);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_dimension);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_range);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_range);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym__newlines);
      if (lookahead == '\n') ADVANCE(173);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym__str_token1);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_asset);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_when);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_when);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_decimal_range);
      if (lookahead == '.') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(111);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_decimal_range);
      if (lookahead == '.') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(111);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_decimal_range);
      if (lookahead == '0') ADVANCE(181);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_decimal_range);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(182);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_unit);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == 'w') ADVANCE(47);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == 'w') ADVANCE(138);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_hex_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(189);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_hex_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(112);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_hex_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(113);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_hex_token4);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_multi_line_comment);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_neg);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == '.') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(194);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_num);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(195);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_func_id);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(13);
      if (lookahead == '/') ADVANCE(208);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_pos);
      if (lookahead == ' ') ADVANCE(63);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_ref);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_single_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_str);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(209);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\' &&
          lookahead != '^' &&
          lookahead != 'n') ADVANCE(210);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_str);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\' &&
          lookahead != '^' &&
          lookahead != 'n') ADVANCE(210);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 120},
  [2] = {.lex_state = 6},
  [3] = {.lex_state = 6},
  [4] = {.lex_state = 6},
  [5] = {.lex_state = 6},
  [6] = {.lex_state = 6},
  [7] = {.lex_state = 6},
  [8] = {.lex_state = 6},
  [9] = {.lex_state = 6},
  [10] = {.lex_state = 6},
  [11] = {.lex_state = 6},
  [12] = {.lex_state = 6},
  [13] = {.lex_state = 7},
  [14] = {.lex_state = 6},
  [15] = {.lex_state = 6},
  [16] = {.lex_state = 6},
  [17] = {.lex_state = 6},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 6},
  [20] = {.lex_state = 6},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 6},
  [23] = {.lex_state = 6},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 6},
  [26] = {.lex_state = 6},
  [27] = {.lex_state = 6},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 5},
  [31] = {.lex_state = 6},
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 6},
  [34] = {.lex_state = 6},
  [35] = {.lex_state = 6},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 9},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 6},
  [42] = {.lex_state = 6},
  [43] = {.lex_state = 120},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 6},
  [46] = {.lex_state = 120},
  [47] = {.lex_state = 6},
  [48] = {.lex_state = 6},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 6},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 6},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 6},
  [55] = {.lex_state = 6},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 8},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 1},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 120},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 120},
  [85] = {.lex_state = 120},
  [86] = {.lex_state = 120},
  [87] = {.lex_state = 120},
  [88] = {.lex_state = 1},
  [89] = {.lex_state = 120},
  [90] = {.lex_state = 1},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 1},
  [93] = {.lex_state = 120},
  [94] = {.lex_state = 1},
  [95] = {.lex_state = 5},
  [96] = {.lex_state = 5},
  [97] = {.lex_state = 4},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 5},
  [101] = {.lex_state = 5},
  [102] = {.lex_state = 5},
  [103] = {.lex_state = 5},
  [104] = {.lex_state = 120},
  [105] = {.lex_state = 5},
  [106] = {.lex_state = 5},
  [107] = {.lex_state = 120},
  [108] = {.lex_state = 5},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 120},
  [111] = {.lex_state = 4},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 5},
  [114] = {.lex_state = 5},
  [115] = {.lex_state = 5},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 92},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 5},
  [125] = {.lex_state = 5},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 4},
  [128] = {.lex_state = 4},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 2},
  [131] = {.lex_state = 5},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 5},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 107},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 107},
  [141] = {.lex_state = 5},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 92},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 5},
  [147] = {.lex_state = 5},
  [148] = {.lex_state = 209},
  [149] = {.lex_state = 1},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 1},
  [152] = {.lex_state = 5},
  [153] = {.lex_state = 107},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 5},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 92},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 209},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 1},
  [167] = {.lex_state = 209},
  [168] = {.lex_state = 209},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_config] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_tokens] = ACTIONS(1),
    [anon_sym_variants] = ACTIONS(1),
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
    [sym_file] = STATE(162),
    [sym_config] = STATE(43),
    [sym__tokens] = STATE(43),
    [sym_variants] = STATE(43),
    [aux_sym_file_repeat1] = STATE(43),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_config] = ACTIONS(5),
    [anon_sym_tokens] = ACTIONS(7),
    [anon_sym_variants] = ACTIONS(9),
    [sym_multi_line_comment] = ACTIONS(11),
    [sym_single_line_comment] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(17), 1,
      anon_sym_DOT,
    STATE(4), 1,
      aux_sym__func_repeat1,
    ACTIONS(15), 8,
      sym_id,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
      anon_sym_when,
    ACTIONS(13), 9,
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
    ACTIONS(23), 1,
      anon_sym_DOT,
    STATE(3), 1,
      aux_sym__func_repeat1,
    ACTIONS(21), 8,
      sym_id,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
      anon_sym_when,
    ACTIONS(19), 9,
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
    ACTIONS(17), 1,
      anon_sym_DOT,
    STATE(3), 1,
      aux_sym__func_repeat1,
    ACTIONS(28), 8,
      sym_id,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
      anon_sym_when,
    ACTIONS(26), 9,
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
  [107] = 2,
    ACTIONS(21), 8,
      sym_id,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
      anon_sym_when,
    ACTIONS(19), 10,
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
    ACTIONS(44), 8,
      sym_id,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
      anon_sym_when,
    ACTIONS(42), 10,
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
    ACTIONS(48), 8,
      sym_id,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
      anon_sym_when,
    ACTIONS(46), 9,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [221] = 2,
    ACTIONS(52), 8,
      sym_id,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
      anon_sym_when,
    ACTIONS(50), 9,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [243] = 5,
    STATE(15), 1,
      aux_sym_arithmetic_repeat1,
    STATE(36), 1,
      sym_op,
    ACTIONS(54), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(58), 5,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(56), 8,
      sym_id,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
      anon_sym_when,
  [271] = 2,
    ACTIONS(62), 1,
      sym_pos,
    ACTIONS(60), 16,
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
  [293] = 5,
    STATE(14), 1,
      aux_sym_arithmetic_repeat1,
    STATE(36), 1,
      sym_op,
    ACTIONS(64), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(68), 5,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(66), 8,
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
    STATE(36), 1,
      sym_op,
    ACTIONS(71), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(58), 5,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(73), 8,
      sym_id,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
      anon_sym_when,
  [349] = 2,
    ACTIONS(66), 8,
      sym_id,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
      anon_sym_when,
    ACTIONS(64), 9,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [371] = 7,
    ACTIONS(75), 1,
      anon_sym_LBRACE,
    ACTIONS(77), 1,
      anon_sym_RBRACE,
    ACTIONS(79), 1,
      sym_id,
    ACTIONS(83), 1,
      anon_sym_when,
    STATE(152), 1,
      sym_type,
    STATE(26), 4,
      sym_block,
      sym_def,
      sym_cond,
      aux_sym_block_repeat1,
    ACTIONS(81), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [401] = 11,
    ACTIONS(85), 1,
      aux_sym__str_token1,
    ACTIONS(87), 1,
      sym_asset,
    ACTIONS(89), 1,
      anon_sym_POUND,
    ACTIONS(91), 1,
      sym_num,
    ACTIONS(93), 1,
      sym_func_id,
    ACTIONS(95), 1,
      anon_sym_RPAREN,
    ACTIONS(97), 1,
      anon_sym_DOLLAR,
    STATE(2), 1,
      sym_func,
    STATE(35), 1,
      sym_arithmetic,
    STATE(122), 1,
      sym__exp,
    STATE(52), 5,
      sym__str,
      sym_dimension,
      sym_hex,
      sym__func,
      sym__ref,
  [439] = 7,
    ACTIONS(75), 1,
      anon_sym_LBRACE,
    ACTIONS(79), 1,
      sym_id,
    ACTIONS(83), 1,
      anon_sym_when,
    ACTIONS(99), 1,
      anon_sym_RBRACE,
    STATE(152), 1,
      sym_type,
    STATE(26), 4,
      sym_block,
      sym_def,
      sym_cond,
      aux_sym_block_repeat1,
    ACTIONS(81), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [469] = 7,
    ACTIONS(75), 1,
      anon_sym_LBRACE,
    ACTIONS(79), 1,
      sym_id,
    ACTIONS(83), 1,
      anon_sym_when,
    ACTIONS(101), 1,
      anon_sym_RBRACE,
    STATE(152), 1,
      sym_type,
    STATE(26), 4,
      sym_block,
      sym_def,
      sym_cond,
      aux_sym_block_repeat1,
    ACTIONS(81), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [499] = 11,
    ACTIONS(85), 1,
      aux_sym__str_token1,
    ACTIONS(87), 1,
      sym_asset,
    ACTIONS(89), 1,
      anon_sym_POUND,
    ACTIONS(91), 1,
      sym_num,
    ACTIONS(93), 1,
      sym_func_id,
    ACTIONS(97), 1,
      anon_sym_DOLLAR,
    ACTIONS(103), 1,
      anon_sym_RPAREN,
    STATE(2), 1,
      sym_func,
    STATE(35), 1,
      sym_arithmetic,
    STATE(117), 1,
      sym__exp,
    STATE(52), 5,
      sym__str,
      sym_dimension,
      sym_hex,
      sym__func,
      sym__ref,
  [537] = 7,
    ACTIONS(75), 1,
      anon_sym_LBRACE,
    ACTIONS(79), 1,
      sym_id,
    ACTIONS(83), 1,
      anon_sym_when,
    ACTIONS(105), 1,
      anon_sym_RBRACE,
    STATE(152), 1,
      sym_type,
    STATE(26), 4,
      sym_block,
      sym_def,
      sym_cond,
      aux_sym_block_repeat1,
    ACTIONS(81), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [567] = 2,
    ACTIONS(107), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(109), 8,
      sym_id,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
      anon_sym_when,
  [587] = 11,
    ACTIONS(85), 1,
      aux_sym__str_token1,
    ACTIONS(87), 1,
      sym_asset,
    ACTIONS(89), 1,
      anon_sym_POUND,
    ACTIONS(91), 1,
      sym_num,
    ACTIONS(93), 1,
      sym_func_id,
    ACTIONS(97), 1,
      anon_sym_DOLLAR,
    ACTIONS(111), 1,
      anon_sym_RPAREN,
    STATE(2), 1,
      sym_func,
    STATE(35), 1,
      sym_arithmetic,
    STATE(119), 1,
      sym__exp,
    STATE(52), 5,
      sym__str,
      sym_dimension,
      sym_hex,
      sym__func,
      sym__ref,
  [625] = 2,
    ACTIONS(60), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(62), 8,
      sym_id,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
      anon_sym_when,
  [645] = 7,
    ACTIONS(113), 1,
      anon_sym_LBRACE,
    ACTIONS(116), 1,
      anon_sym_RBRACE,
    ACTIONS(118), 1,
      sym_id,
    ACTIONS(124), 1,
      anon_sym_when,
    STATE(152), 1,
      sym_type,
    STATE(26), 4,
      sym_block,
      sym_def,
      sym_cond,
      aux_sym_block_repeat1,
    ACTIONS(121), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [675] = 6,
    ACTIONS(75), 1,
      anon_sym_LBRACE,
    ACTIONS(79), 1,
      sym_id,
    ACTIONS(83), 1,
      anon_sym_when,
    STATE(152), 1,
      sym_type,
    STATE(17), 4,
      sym_block,
      sym_def,
      sym_cond,
      aux_sym_block_repeat1,
    ACTIONS(81), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [702] = 10,
    ACTIONS(127), 1,
      aux_sym__str_token1,
    ACTIONS(129), 1,
      sym_asset,
    ACTIONS(131), 1,
      anon_sym_POUND,
    ACTIONS(133), 1,
      sym_num,
    ACTIONS(135), 1,
      sym_func_id,
    ACTIONS(137), 1,
      anon_sym_DOLLAR,
    STATE(59), 1,
      sym_func,
    STATE(149), 1,
      sym__exp,
    STATE(166), 1,
      sym_arithmetic,
    STATE(62), 5,
      sym__str,
      sym_dimension,
      sym_hex,
      sym__func,
      sym__ref,
  [737] = 10,
    ACTIONS(87), 1,
      sym_asset,
    ACTIONS(89), 1,
      anon_sym_POUND,
    ACTIONS(93), 1,
      sym_func_id,
    ACTIONS(139), 1,
      aux_sym__str_token1,
    ACTIONS(141), 1,
      sym_num,
    ACTIONS(143), 1,
      anon_sym_DOLLAR,
    STATE(2), 1,
      sym_func,
    STATE(35), 1,
      sym_arithmetic,
    STATE(41), 1,
      sym__exp,
    STATE(12), 5,
      sym__str,
      sym_dimension,
      sym_hex,
      sym__func,
      sym__ref,
  [772] = 9,
    ACTIONS(97), 1,
      anon_sym_DOLLAR,
    ACTIONS(145), 1,
      sym_id,
    ACTIONS(147), 1,
      aux_sym__str_token1,
    ACTIONS(149), 1,
      sym_asset,
    ACTIONS(151), 1,
      anon_sym_POUND,
    ACTIONS(153), 1,
      sym_num,
    ACTIONS(155), 1,
      sym_func_id,
    STATE(75), 1,
      sym_base,
    STATE(74), 6,
      sym__str,
      sym_dimension,
      sym_hex,
      sym_func,
      sym_switch,
      sym__ref,
  [805] = 6,
    ACTIONS(75), 1,
      anon_sym_LBRACE,
    ACTIONS(79), 1,
      sym_id,
    ACTIONS(83), 1,
      anon_sym_when,
    STATE(152), 1,
      sym_type,
    STATE(19), 4,
      sym_block,
      sym_def,
      sym_cond,
      aux_sym_block_repeat1,
    ACTIONS(81), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [832] = 10,
    ACTIONS(85), 1,
      aux_sym__str_token1,
    ACTIONS(87), 1,
      sym_asset,
    ACTIONS(89), 1,
      anon_sym_POUND,
    ACTIONS(91), 1,
      sym_num,
    ACTIONS(93), 1,
      sym_func_id,
    ACTIONS(97), 1,
      anon_sym_DOLLAR,
    STATE(2), 1,
      sym_func,
    STATE(35), 1,
      sym_arithmetic,
    STATE(135), 1,
      sym__exp,
    STATE(52), 5,
      sym__str,
      sym_dimension,
      sym_hex,
      sym__func,
      sym__ref,
  [867] = 6,
    ACTIONS(75), 1,
      anon_sym_LBRACE,
    ACTIONS(79), 1,
      sym_id,
    ACTIONS(83), 1,
      anon_sym_when,
    STATE(152), 1,
      sym_type,
    STATE(22), 4,
      sym_block,
      sym_def,
      sym_cond,
      aux_sym_block_repeat1,
    ACTIONS(81), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [894] = 6,
    ACTIONS(75), 1,
      anon_sym_LBRACE,
    ACTIONS(79), 1,
      sym_id,
    ACTIONS(83), 1,
      anon_sym_when,
    STATE(152), 1,
      sym_type,
    STATE(20), 4,
      sym_block,
      sym_def,
      sym_cond,
      aux_sym_block_repeat1,
    ACTIONS(81), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [921] = 2,
    ACTIONS(54), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(56), 8,
      sym_id,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
      anon_sym_when,
  [938] = 7,
    ACTIONS(89), 1,
      anon_sym_POUND,
    ACTIONS(93), 1,
      sym_func_id,
    ACTIONS(139), 1,
      aux_sym__str_token1,
    ACTIONS(143), 1,
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
  [964] = 3,
    ACTIONS(159), 1,
      sym_unit,
    ACTIONS(54), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(56), 8,
      sym_id,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
      anon_sym_when,
  [982] = 7,
    ACTIONS(85), 1,
      aux_sym__str_token1,
    ACTIONS(89), 1,
      anon_sym_POUND,
    ACTIONS(93), 1,
      sym_func_id,
    ACTIONS(97), 1,
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
  [1008] = 7,
    ACTIONS(127), 1,
      aux_sym__str_token1,
    ACTIONS(131), 1,
      anon_sym_POUND,
    ACTIONS(135), 1,
      sym_func_id,
    ACTIONS(137), 1,
      anon_sym_DOLLAR,
    ACTIONS(161), 1,
      sym_num,
    STATE(59), 1,
      sym_func,
    STATE(94), 5,
      sym__str,
      sym_dimension,
      sym_hex,
      sym__func,
      sym__ref,
  [1034] = 4,
    ACTIONS(163), 1,
      anon_sym_RBRACE,
    STATE(156), 1,
      sym_type,
    STATE(40), 2,
      sym_var,
      aux_sym_variants_repeat1,
    ACTIONS(165), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [1053] = 2,
    ACTIONS(168), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(170), 8,
      sym_id,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
      anon_sym_when,
  [1068] = 2,
    ACTIONS(172), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(174), 8,
      sym_id,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
      anon_sym_when,
  [1083] = 6,
    ACTIONS(5), 1,
      anon_sym_config,
    ACTIONS(7), 1,
      anon_sym_tokens,
    ACTIONS(9), 1,
      anon_sym_variants,
    ACTIONS(176), 1,
      ts_builtin_sym_end,
    ACTIONS(178), 2,
      sym_multi_line_comment,
      sym_single_line_comment,
    STATE(46), 4,
      sym_config,
      sym__tokens,
      sym_variants,
      aux_sym_file_repeat1,
  [1106] = 3,
    ACTIONS(182), 1,
      anon_sym_STAR,
    STATE(66), 1,
      sym_asterisk,
    ACTIONS(180), 8,
      anon_sym_RBRACE,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
      anon_sym_COMMA,
  [1123] = 2,
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
  [1138] = 6,
    ACTIONS(188), 1,
      ts_builtin_sym_end,
    ACTIONS(190), 1,
      anon_sym_config,
    ACTIONS(193), 1,
      anon_sym_tokens,
    ACTIONS(196), 1,
      anon_sym_variants,
    ACTIONS(199), 2,
      sym_multi_line_comment,
      sym_single_line_comment,
    STATE(46), 4,
      sym_config,
      sym__tokens,
      sym_variants,
      aux_sym_file_repeat1,
  [1161] = 2,
    ACTIONS(202), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(204), 8,
      sym_id,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
      anon_sym_when,
  [1176] = 2,
    ACTIONS(206), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(208), 8,
      sym_id,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
      anon_sym_when,
  [1191] = 4,
    ACTIONS(210), 1,
      anon_sym_RBRACE,
    STATE(156), 1,
      sym_type,
    STATE(40), 2,
      sym_var,
      aux_sym_variants_repeat1,
    ACTIONS(212), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [1210] = 2,
    ACTIONS(214), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(216), 8,
      sym_id,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
      anon_sym_when,
  [1225] = 3,
    ACTIONS(220), 1,
      anon_sym_COMMA,
    STATE(58), 1,
      aux_sym_switch_repeat1,
    ACTIONS(218), 7,
      anon_sym_RBRACE,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [1241] = 4,
    STATE(38), 1,
      sym_op,
    STATE(54), 1,
      aux_sym_arithmetic_repeat1,
    ACTIONS(54), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(58), 5,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [1259] = 3,
    STATE(156), 1,
      sym_type,
    STATE(49), 2,
      sym_var,
      aux_sym_variants_repeat1,
    ACTIONS(212), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [1275] = 4,
    STATE(38), 1,
      sym_op,
    STATE(55), 1,
      aux_sym_arithmetic_repeat1,
    ACTIONS(71), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(58), 5,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [1293] = 4,
    STATE(38), 1,
      sym_op,
    STATE(55), 1,
      aux_sym_arithmetic_repeat1,
    ACTIONS(64), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(68), 5,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [1311] = 3,
    ACTIONS(220), 1,
      anon_sym_COMMA,
    STATE(58), 1,
      aux_sym_switch_repeat1,
    ACTIONS(222), 7,
      anon_sym_RBRACE,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [1327] = 1,
    ACTIONS(107), 9,
      anon_sym_RBRACE,
      sym_id,
      anon_sym_STAR,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [1339] = 3,
    ACTIONS(224), 1,
      anon_sym_COMMA,
    STATE(58), 1,
      aux_sym_switch_repeat1,
    ACTIONS(180), 7,
      anon_sym_RBRACE,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [1355] = 4,
    ACTIONS(13), 1,
      sym__newlines,
    ACTIONS(227), 1,
      anon_sym_DOT,
    STATE(61), 1,
      aux_sym__func_repeat1,
    ACTIONS(15), 5,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [1372] = 4,
    ACTIONS(71), 1,
      sym__newlines,
    STATE(39), 1,
      sym_op,
    STATE(64), 1,
      aux_sym_arithmetic_repeat1,
    ACTIONS(229), 5,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [1389] = 4,
    ACTIONS(26), 1,
      sym__newlines,
    ACTIONS(227), 1,
      anon_sym_DOT,
    STATE(65), 1,
      aux_sym__func_repeat1,
    ACTIONS(28), 5,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [1406] = 4,
    ACTIONS(54), 1,
      sym__newlines,
    STATE(39), 1,
      sym_op,
    STATE(60), 1,
      aux_sym_arithmetic_repeat1,
    ACTIONS(229), 5,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [1423] = 1,
    ACTIONS(231), 8,
      anon_sym_RBRACE,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
      anon_sym_COMMA,
  [1434] = 4,
    ACTIONS(64), 1,
      sym__newlines,
    STATE(39), 1,
      sym_op,
    STATE(64), 1,
      aux_sym_arithmetic_repeat1,
    ACTIONS(233), 5,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [1451] = 4,
    ACTIONS(19), 1,
      sym__newlines,
    ACTIONS(236), 1,
      anon_sym_DOT,
    STATE(65), 1,
      aux_sym__func_repeat1,
    ACTIONS(21), 5,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [1468] = 1,
    ACTIONS(239), 8,
      anon_sym_RBRACE,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
      anon_sym_COMMA,
  [1479] = 2,
    ACTIONS(243), 1,
      sym_unit,
    ACTIONS(241), 7,
      anon_sym_RBRACE,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [1492] = 2,
    ACTIONS(19), 1,
      sym__newlines,
    ACTIONS(21), 6,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [1504] = 1,
    ACTIONS(50), 7,
      anon_sym_RBRACE,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [1514] = 1,
    ACTIONS(42), 7,
      anon_sym_RBRACE,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [1524] = 1,
    ACTIONS(38), 7,
      anon_sym_RBRACE,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [1534] = 1,
    ACTIONS(46), 7,
      anon_sym_RBRACE,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [1544] = 1,
    ACTIONS(107), 7,
      anon_sym_RBRACE,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [1554] = 1,
    ACTIONS(241), 7,
      anon_sym_RBRACE,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [1564] = 1,
    ACTIONS(245), 7,
      anon_sym_RBRACE,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [1574] = 2,
    ACTIONS(30), 1,
      sym__newlines,
    ACTIONS(32), 6,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [1586] = 2,
    ACTIONS(34), 1,
      sym__newlines,
    ACTIONS(36), 6,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [1598] = 2,
    ACTIONS(42), 1,
      sym__newlines,
    ACTIONS(44), 6,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [1610] = 2,
    ACTIONS(38), 1,
      sym__newlines,
    ACTIONS(40), 6,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [1622] = 1,
    ACTIONS(34), 7,
      anon_sym_RBRACE,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [1632] = 1,
    ACTIONS(30), 7,
      anon_sym_RBRACE,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [1642] = 5,
    ACTIONS(247), 1,
      anon_sym_RBRACE,
    ACTIONS(249), 1,
      sym_neg,
    ACTIONS(251), 1,
      sym_pos,
    STATE(170), 1,
      sym_bool,
    STATE(91), 2,
      sym_assertion,
      aux_sym_cond_repeat1,
  [1659] = 2,
    ACTIONS(107), 1,
      sym__newlines,
    ACTIONS(109), 5,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [1670] = 1,
    ACTIONS(253), 6,
      ts_builtin_sym_end,
      anon_sym_config,
      anon_sym_tokens,
      anon_sym_variants,
      sym_multi_line_comment,
      sym_single_line_comment,
  [1679] = 1,
    ACTIONS(255), 6,
      ts_builtin_sym_end,
      anon_sym_config,
      anon_sym_tokens,
      anon_sym_variants,
      sym_multi_line_comment,
      sym_single_line_comment,
  [1688] = 1,
    ACTIONS(257), 6,
      ts_builtin_sym_end,
      anon_sym_config,
      anon_sym_tokens,
      anon_sym_variants,
      sym_multi_line_comment,
      sym_single_line_comment,
  [1697] = 1,
    ACTIONS(259), 6,
      ts_builtin_sym_end,
      anon_sym_config,
      anon_sym_tokens,
      anon_sym_variants,
      sym_multi_line_comment,
      sym_single_line_comment,
  [1706] = 2,
    ACTIONS(50), 1,
      sym__newlines,
    ACTIONS(52), 5,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [1717] = 1,
    ACTIONS(206), 6,
      ts_builtin_sym_end,
      anon_sym_config,
      anon_sym_tokens,
      anon_sym_variants,
      sym_multi_line_comment,
      sym_single_line_comment,
  [1726] = 2,
    ACTIONS(46), 1,
      sym__newlines,
    ACTIONS(48), 5,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [1737] = 5,
    ACTIONS(261), 1,
      anon_sym_RBRACE,
    ACTIONS(263), 1,
      sym_neg,
    ACTIONS(266), 1,
      sym_pos,
    STATE(170), 1,
      sym_bool,
    STATE(91), 2,
      sym_assertion,
      aux_sym_cond_repeat1,
  [1754] = 2,
    ACTIONS(60), 1,
      sym__newlines,
    ACTIONS(62), 5,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [1765] = 1,
    ACTIONS(202), 6,
      ts_builtin_sym_end,
      anon_sym_config,
      anon_sym_tokens,
      anon_sym_variants,
      sym_multi_line_comment,
      sym_single_line_comment,
  [1774] = 2,
    ACTIONS(64), 1,
      sym__newlines,
    ACTIONS(66), 5,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [1785] = 3,
    ACTIONS(269), 1,
      anon_sym_RBRACE,
    ACTIONS(271), 1,
      sym_id,
    STATE(100), 3,
      sym_config_def,
      sym_config_block,
      aux_sym_config_repeat1,
  [1797] = 3,
    ACTIONS(271), 1,
      sym_id,
    ACTIONS(273), 1,
      anon_sym_RBRACE,
    STATE(95), 3,
      sym_config_def,
      sym_config_block,
      aux_sym_config_repeat1,
  [1809] = 1,
    ACTIONS(275), 5,
      aux_sym__str_token1,
      anon_sym_POUND,
      sym_num,
      sym_func_id,
      anon_sym_DOLLAR,
  [1817] = 5,
    ACTIONS(249), 1,
      sym_neg,
    ACTIONS(251), 1,
      sym_pos,
    ACTIONS(277), 1,
      anon_sym_LBRACE,
    STATE(45), 1,
      sym_assertion,
    STATE(145), 1,
      sym_bool,
  [1833] = 4,
    ACTIONS(249), 1,
      sym_neg,
    ACTIONS(251), 1,
      sym_pos,
    STATE(170), 1,
      sym_bool,
    STATE(82), 2,
      sym_assertion,
      aux_sym_cond_repeat1,
  [1847] = 3,
    ACTIONS(279), 1,
      anon_sym_RBRACE,
    ACTIONS(281), 1,
      sym_id,
    STATE(100), 3,
      sym_config_def,
      sym_config_block,
      aux_sym_config_repeat1,
  [1859] = 4,
    ACTIONS(284), 1,
      anon_sym_RBRACE,
    ACTIONS(286), 1,
      sym_id,
    STATE(106), 1,
      aux_sym_assertion_repeat1,
    STATE(151), 1,
      sym_set,
  [1872] = 3,
    ACTIONS(288), 1,
      anon_sym_RBRACE,
    ACTIONS(290), 1,
      sym_id,
    STATE(105), 2,
      sym_config_def,
      aux_sym_config_block_repeat1,
  [1883] = 3,
    ACTIONS(290), 1,
      sym_id,
    ACTIONS(292), 1,
      anon_sym_RBRACE,
    STATE(102), 2,
      sym_config_def,
      aux_sym_config_block_repeat1,
  [1894] = 2,
    ACTIONS(296), 1,
      aux_sym_hex_token4,
    ACTIONS(294), 3,
      aux_sym_hex_token1,
      aux_sym_hex_token2,
      aux_sym_hex_token3,
  [1903] = 3,
    ACTIONS(298), 1,
      anon_sym_RBRACE,
    ACTIONS(300), 1,
      sym_id,
    STATE(105), 2,
      sym_config_def,
      aux_sym_config_block_repeat1,
  [1914] = 4,
    ACTIONS(303), 1,
      anon_sym_RBRACE,
    ACTIONS(305), 1,
      sym_id,
    STATE(106), 1,
      aux_sym_assertion_repeat1,
    STATE(151), 1,
      sym_set,
  [1927] = 2,
    ACTIONS(310), 1,
      aux_sym_hex_token4,
    ACTIONS(308), 3,
      aux_sym_hex_token1,
      aux_sym_hex_token2,
      aux_sym_hex_token3,
  [1936] = 4,
    ACTIONS(286), 1,
      sym_id,
    ACTIONS(312), 1,
      anon_sym_RBRACE,
    STATE(106), 1,
      aux_sym_assertion_repeat1,
    STATE(151), 1,
      sym_set,
  [1949] = 4,
    ACTIONS(182), 1,
      anon_sym_STAR,
    ACTIONS(220), 1,
      anon_sym_COMMA,
    STATE(51), 1,
      aux_sym_switch_repeat1,
    STATE(132), 1,
      sym_asterisk,
  [1962] = 2,
    ACTIONS(316), 1,
      aux_sym_hex_token4,
    ACTIONS(314), 3,
      aux_sym_hex_token1,
      aux_sym_hex_token2,
      aux_sym_hex_token3,
  [1971] = 3,
    ACTIONS(85), 1,
      aux_sym__str_token1,
    ACTIONS(318), 1,
      sym_num,
    STATE(131), 1,
      sym__str,
  [1981] = 3,
    ACTIONS(320), 1,
      anon_sym_COMMA,
    ACTIONS(322), 1,
      anon_sym_RPAREN,
    STATE(118), 1,
      aux_sym_params_repeat1,
  [1991] = 3,
    ACTIONS(324), 1,
      anon_sym_LBRACE,
    ACTIONS(326), 1,
      sym_id,
    STATE(87), 1,
      sym_block,
  [2001] = 3,
    ACTIONS(286), 1,
      sym_id,
    STATE(101), 1,
      aux_sym_assertion_repeat1,
    STATE(151), 1,
      sym_set,
  [2011] = 3,
    ACTIONS(286), 1,
      sym_id,
    STATE(108), 1,
      aux_sym_assertion_repeat1,
    STATE(151), 1,
      sym_set,
  [2021] = 3,
    ACTIONS(320), 1,
      anon_sym_COMMA,
    ACTIONS(328), 1,
      anon_sym_RPAREN,
    STATE(118), 1,
      aux_sym_params_repeat1,
  [2031] = 3,
    ACTIONS(320), 1,
      anon_sym_COMMA,
    ACTIONS(330), 1,
      anon_sym_RPAREN,
    STATE(116), 1,
      aux_sym_params_repeat1,
  [2041] = 3,
    ACTIONS(332), 1,
      anon_sym_COMMA,
    ACTIONS(335), 1,
      anon_sym_RPAREN,
    STATE(118), 1,
      aux_sym_params_repeat1,
  [2051] = 3,
    ACTIONS(320), 1,
      anon_sym_COMMA,
    ACTIONS(337), 1,
      anon_sym_RPAREN,
    STATE(112), 1,
      aux_sym_params_repeat1,
  [2061] = 2,
    ACTIONS(216), 1,
      sym_pos,
    ACTIONS(214), 2,
      anon_sym_RBRACE,
      sym_neg,
  [2069] = 2,
    ACTIONS(339), 1,
      sym_unit,
    ACTIONS(54), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2077] = 3,
    ACTIONS(320), 1,
      anon_sym_COMMA,
    ACTIONS(341), 1,
      anon_sym_RPAREN,
    STATE(123), 1,
      aux_sym_params_repeat1,
  [2087] = 3,
    ACTIONS(320), 1,
      anon_sym_COMMA,
    ACTIONS(343), 1,
      anon_sym_RPAREN,
    STATE(118), 1,
      aux_sym_params_repeat1,
  [2097] = 1,
    ACTIONS(303), 2,
      anon_sym_RBRACE,
      sym_id,
  [2102] = 1,
    ACTIONS(345), 2,
      anon_sym_RBRACE,
      sym_id,
  [2107] = 2,
    ACTIONS(347), 1,
      anon_sym_LPAREN,
    STATE(76), 1,
      sym_params,
  [2114] = 2,
    ACTIONS(135), 1,
      sym_func_id,
    STATE(68), 1,
      sym_func,
  [2121] = 2,
    ACTIONS(93), 1,
      sym_func_id,
    STATE(6), 1,
      sym_func,
  [2128] = 2,
    ACTIONS(349), 1,
      anon_sym_LBRACE,
    ACTIONS(351), 1,
      anon_sym_COLON,
  [2135] = 2,
    ACTIONS(54), 1,
      sym__newlines,
    ACTIONS(353), 1,
      sym_unit,
  [2142] = 1,
    ACTIONS(355), 2,
      anon_sym_RBRACE,
      sym_id,
  [2147] = 2,
    ACTIONS(220), 1,
      anon_sym_COMMA,
    STATE(56), 1,
      aux_sym_switch_repeat1,
  [2154] = 2,
    ACTIONS(357), 1,
      anon_sym_LPAREN,
    STATE(81), 1,
      sym_params,
  [2161] = 1,
    ACTIONS(359), 2,
      anon_sym_RBRACE,
      sym_id,
  [2166] = 1,
    ACTIONS(335), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2171] = 2,
    ACTIONS(361), 1,
      anon_sym_LPAREN,
    STATE(5), 1,
      sym_params,
  [2178] = 2,
    ACTIONS(97), 1,
      anon_sym_DOLLAR,
    STATE(98), 1,
      sym__ref,
  [2185] = 1,
    ACTIONS(363), 1,
      sym_ref,
  [2189] = 1,
    ACTIONS(365), 1,
      anon_sym_COLON,
  [2193] = 1,
    ACTIONS(367), 1,
      sym_ref,
  [2197] = 1,
    ACTIONS(369), 1,
      sym_id,
  [2201] = 1,
    ACTIONS(371), 1,
      aux_sym__str_token1,
  [2205] = 1,
    ACTIONS(373), 1,
      anon_sym_LBRACE,
  [2209] = 1,
    ACTIONS(339), 1,
      sym_unit,
  [2213] = 1,
    ACTIONS(375), 1,
      anon_sym_LBRACE,
  [2217] = 1,
    ACTIONS(377), 1,
      sym_id,
  [2221] = 1,
    ACTIONS(379), 1,
      sym_id,
  [2225] = 1,
    ACTIONS(381), 1,
      sym_str,
  [2229] = 1,
    ACTIONS(383), 1,
      sym__newlines,
  [2233] = 1,
    ACTIONS(351), 1,
      anon_sym_COLON,
  [2237] = 1,
    ACTIONS(385), 1,
      sym__newlines,
  [2241] = 1,
    ACTIONS(387), 1,
      sym_id,
  [2245] = 1,
    ACTIONS(389), 1,
      sym_ref,
  [2249] = 1,
    ACTIONS(391), 1,
      aux_sym__str_token1,
  [2253] = 1,
    ACTIONS(393), 1,
      aux_sym__str_token1,
  [2257] = 1,
    ACTIONS(395), 1,
      sym_id,
  [2261] = 1,
    ACTIONS(397), 1,
      anon_sym_LBRACE,
  [2265] = 1,
    ACTIONS(353), 1,
      sym_unit,
  [2269] = 1,
    ACTIONS(399), 1,
      anon_sym_LBRACE,
  [2273] = 1,
    ACTIONS(401), 1,
      anon_sym_COLON,
  [2277] = 1,
    ACTIONS(403), 1,
      aux_sym__str_token1,
  [2281] = 1,
    ACTIONS(405), 1,
      ts_builtin_sym_end,
  [2285] = 1,
    ACTIONS(407), 1,
      anon_sym_LBRACE,
  [2289] = 1,
    ACTIONS(409), 1,
      sym_str,
  [2293] = 1,
    ACTIONS(411), 1,
      anon_sym_COLON,
  [2297] = 1,
    ACTIONS(54), 1,
      sym__newlines,
  [2301] = 1,
    ACTIONS(413), 1,
      sym_str,
  [2305] = 1,
    ACTIONS(415), 1,
      sym_str,
  [2309] = 1,
    ACTIONS(417), 1,
      anon_sym_LBRACE,
  [2313] = 1,
    ACTIONS(419), 1,
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
  [SMALL_STATE(12)] = 243,
  [SMALL_STATE(13)] = 271,
  [SMALL_STATE(14)] = 293,
  [SMALL_STATE(15)] = 321,
  [SMALL_STATE(16)] = 349,
  [SMALL_STATE(17)] = 371,
  [SMALL_STATE(18)] = 401,
  [SMALL_STATE(19)] = 439,
  [SMALL_STATE(20)] = 469,
  [SMALL_STATE(21)] = 499,
  [SMALL_STATE(22)] = 537,
  [SMALL_STATE(23)] = 567,
  [SMALL_STATE(24)] = 587,
  [SMALL_STATE(25)] = 625,
  [SMALL_STATE(26)] = 645,
  [SMALL_STATE(27)] = 675,
  [SMALL_STATE(28)] = 702,
  [SMALL_STATE(29)] = 737,
  [SMALL_STATE(30)] = 772,
  [SMALL_STATE(31)] = 805,
  [SMALL_STATE(32)] = 832,
  [SMALL_STATE(33)] = 867,
  [SMALL_STATE(34)] = 894,
  [SMALL_STATE(35)] = 921,
  [SMALL_STATE(36)] = 938,
  [SMALL_STATE(37)] = 964,
  [SMALL_STATE(38)] = 982,
  [SMALL_STATE(39)] = 1008,
  [SMALL_STATE(40)] = 1034,
  [SMALL_STATE(41)] = 1053,
  [SMALL_STATE(42)] = 1068,
  [SMALL_STATE(43)] = 1083,
  [SMALL_STATE(44)] = 1106,
  [SMALL_STATE(45)] = 1123,
  [SMALL_STATE(46)] = 1138,
  [SMALL_STATE(47)] = 1161,
  [SMALL_STATE(48)] = 1176,
  [SMALL_STATE(49)] = 1191,
  [SMALL_STATE(50)] = 1210,
  [SMALL_STATE(51)] = 1225,
  [SMALL_STATE(52)] = 1241,
  [SMALL_STATE(53)] = 1259,
  [SMALL_STATE(54)] = 1275,
  [SMALL_STATE(55)] = 1293,
  [SMALL_STATE(56)] = 1311,
  [SMALL_STATE(57)] = 1327,
  [SMALL_STATE(58)] = 1339,
  [SMALL_STATE(59)] = 1355,
  [SMALL_STATE(60)] = 1372,
  [SMALL_STATE(61)] = 1389,
  [SMALL_STATE(62)] = 1406,
  [SMALL_STATE(63)] = 1423,
  [SMALL_STATE(64)] = 1434,
  [SMALL_STATE(65)] = 1451,
  [SMALL_STATE(66)] = 1468,
  [SMALL_STATE(67)] = 1479,
  [SMALL_STATE(68)] = 1492,
  [SMALL_STATE(69)] = 1504,
  [SMALL_STATE(70)] = 1514,
  [SMALL_STATE(71)] = 1524,
  [SMALL_STATE(72)] = 1534,
  [SMALL_STATE(73)] = 1544,
  [SMALL_STATE(74)] = 1554,
  [SMALL_STATE(75)] = 1564,
  [SMALL_STATE(76)] = 1574,
  [SMALL_STATE(77)] = 1586,
  [SMALL_STATE(78)] = 1598,
  [SMALL_STATE(79)] = 1610,
  [SMALL_STATE(80)] = 1622,
  [SMALL_STATE(81)] = 1632,
  [SMALL_STATE(82)] = 1642,
  [SMALL_STATE(83)] = 1659,
  [SMALL_STATE(84)] = 1670,
  [SMALL_STATE(85)] = 1679,
  [SMALL_STATE(86)] = 1688,
  [SMALL_STATE(87)] = 1697,
  [SMALL_STATE(88)] = 1706,
  [SMALL_STATE(89)] = 1717,
  [SMALL_STATE(90)] = 1726,
  [SMALL_STATE(91)] = 1737,
  [SMALL_STATE(92)] = 1754,
  [SMALL_STATE(93)] = 1765,
  [SMALL_STATE(94)] = 1774,
  [SMALL_STATE(95)] = 1785,
  [SMALL_STATE(96)] = 1797,
  [SMALL_STATE(97)] = 1809,
  [SMALL_STATE(98)] = 1817,
  [SMALL_STATE(99)] = 1833,
  [SMALL_STATE(100)] = 1847,
  [SMALL_STATE(101)] = 1859,
  [SMALL_STATE(102)] = 1872,
  [SMALL_STATE(103)] = 1883,
  [SMALL_STATE(104)] = 1894,
  [SMALL_STATE(105)] = 1903,
  [SMALL_STATE(106)] = 1914,
  [SMALL_STATE(107)] = 1927,
  [SMALL_STATE(108)] = 1936,
  [SMALL_STATE(109)] = 1949,
  [SMALL_STATE(110)] = 1962,
  [SMALL_STATE(111)] = 1971,
  [SMALL_STATE(112)] = 1981,
  [SMALL_STATE(113)] = 1991,
  [SMALL_STATE(114)] = 2001,
  [SMALL_STATE(115)] = 2011,
  [SMALL_STATE(116)] = 2021,
  [SMALL_STATE(117)] = 2031,
  [SMALL_STATE(118)] = 2041,
  [SMALL_STATE(119)] = 2051,
  [SMALL_STATE(120)] = 2061,
  [SMALL_STATE(121)] = 2069,
  [SMALL_STATE(122)] = 2077,
  [SMALL_STATE(123)] = 2087,
  [SMALL_STATE(124)] = 2097,
  [SMALL_STATE(125)] = 2102,
  [SMALL_STATE(126)] = 2107,
  [SMALL_STATE(127)] = 2114,
  [SMALL_STATE(128)] = 2121,
  [SMALL_STATE(129)] = 2128,
  [SMALL_STATE(130)] = 2135,
  [SMALL_STATE(131)] = 2142,
  [SMALL_STATE(132)] = 2147,
  [SMALL_STATE(133)] = 2154,
  [SMALL_STATE(134)] = 2161,
  [SMALL_STATE(135)] = 2166,
  [SMALL_STATE(136)] = 2171,
  [SMALL_STATE(137)] = 2178,
  [SMALL_STATE(138)] = 2185,
  [SMALL_STATE(139)] = 2189,
  [SMALL_STATE(140)] = 2193,
  [SMALL_STATE(141)] = 2197,
  [SMALL_STATE(142)] = 2201,
  [SMALL_STATE(143)] = 2205,
  [SMALL_STATE(144)] = 2209,
  [SMALL_STATE(145)] = 2213,
  [SMALL_STATE(146)] = 2217,
  [SMALL_STATE(147)] = 2221,
  [SMALL_STATE(148)] = 2225,
  [SMALL_STATE(149)] = 2229,
  [SMALL_STATE(150)] = 2233,
  [SMALL_STATE(151)] = 2237,
  [SMALL_STATE(152)] = 2241,
  [SMALL_STATE(153)] = 2245,
  [SMALL_STATE(154)] = 2249,
  [SMALL_STATE(155)] = 2253,
  [SMALL_STATE(156)] = 2257,
  [SMALL_STATE(157)] = 2261,
  [SMALL_STATE(158)] = 2265,
  [SMALL_STATE(159)] = 2269,
  [SMALL_STATE(160)] = 2273,
  [SMALL_STATE(161)] = 2277,
  [SMALL_STATE(162)] = 2281,
  [SMALL_STATE(163)] = 2285,
  [SMALL_STATE(164)] = 2289,
  [SMALL_STATE(165)] = 2293,
  [SMALL_STATE(166)] = 2297,
  [SMALL_STATE(167)] = 2301,
  [SMALL_STATE(168)] = 2305,
  [SMALL_STATE(169)] = 2309,
  [SMALL_STATE(170)] = 2313,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__func, 1),
  [15] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__func, 1),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__func_repeat1, 2),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__func_repeat1, 2),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__func_repeat1, 2), SHIFT_REPEAT(128),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__func, 2),
  [28] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__func, 2),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 2),
  [32] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func, 2),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 2),
  [36] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_params, 2),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 4),
  [40] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_params, 4),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 3),
  [44] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_params, 3),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hex, 2),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hex, 2),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dimension, 2),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dimension, 2),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exp, 1),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__exp, 1),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ref, 2),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ref, 2),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arithmetic_repeat1, 2),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arithmetic_repeat1, 2),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arithmetic_repeat1, 2), SHIFT_REPEAT(97),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arithmetic, 2),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arithmetic, 2),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__str, 3),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__str, 3),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(34),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(169),
  [121] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(141),
  [124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(137),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variants_repeat1, 2),
  [165] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variants_repeat1, 2), SHIFT_REPEAT(141),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def, 4, .production_id = 3),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_def, 4, .production_id = 3),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cond, 5),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cond, 5),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 1),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_switch_repeat1, 2),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cond, 3),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cond, 3),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2),
  [190] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(143),
  [193] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(113),
  [196] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(163),
  [199] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(46),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4, .production_id = 2),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 4, .production_id = 2),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assertion, 4),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assertion, 4),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch, 2),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch, 3),
  [224] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_switch_repeat1, 2), SHIFT_REPEAT(146),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_asterisk, 1),
  [233] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arithmetic_repeat1, 2), SHIFT_REPEAT(97),
  [236] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__func_repeat1, 2), SHIFT_REPEAT(127),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_switch_repeat1, 3),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base, 1),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var, 4),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variants, 4),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config, 4),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config, 3),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tokens, 2, .production_id = 1),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_cond_repeat1, 2),
  [263] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cond_repeat1, 2), SHIFT_REPEAT(147),
  [266] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cond_repeat1, 2), SHIFT_REPEAT(147),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op, 1),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2),
  [281] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(129),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_config_block_repeat1, 2),
  [300] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_block_repeat1, 2), SHIFT_REPEAT(150),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assertion_repeat1, 2),
  [305] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assertion_repeat1, 2), SHIFT_REPEAT(139),
  [308] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [314] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [332] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2), SHIFT_REPEAT(32),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config_block, 3),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config_def, 3),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config_block, 4),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 3, .production_id = 4),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 2),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [405] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
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
