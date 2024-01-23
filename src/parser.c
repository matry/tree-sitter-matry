#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 153
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 75
#define ALIAS_COUNT 5
#define TOKEN_COUNT 42
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 5

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
  sym_bool = 53,
  sym_assertion = 54,
  sym_cond = 55,
  sym_dimension = 56,
  sym_hex = 57,
  sym_arithmetic = 58,
  sym_func = 59,
  sym__func = 60,
  sym_params = 61,
  sym_op = 62,
  sym_switch = 63,
  sym_set = 64,
  sym__ref = 65,
  aux_sym_file_repeat1 = 66,
  aux_sym_variants_repeat1 = 67,
  aux_sym_block_repeat1 = 68,
  aux_sym_assertion_repeat1 = 69,
  aux_sym_cond_repeat1 = 70,
  aux_sym_arithmetic_repeat1 = 71,
  aux_sym__func_repeat1 = 72,
  aux_sym_params_repeat1 = 73,
  aux_sym_switch_repeat1 = 74,
  alias_sym_block_id = 75,
  alias_sym_def_id = 76,
  alias_sym_exp = 77,
  alias_sym_set_id = 78,
  alias_sym_tokens = 79,
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
  [19] = 18,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 21,
  [24] = 18,
  [25] = 14,
  [26] = 20,
  [27] = 27,
  [28] = 27,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 32,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 36,
  [38] = 36,
  [39] = 39,
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
  [50] = 12,
  [51] = 13,
  [52] = 15,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 4,
  [57] = 57,
  [58] = 58,
  [59] = 12,
  [60] = 2,
  [61] = 13,
  [62] = 3,
  [63] = 63,
  [64] = 64,
  [65] = 15,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 9,
  [70] = 7,
  [71] = 5,
  [72] = 11,
  [73] = 8,
  [74] = 10,
  [75] = 6,
  [76] = 8,
  [77] = 16,
  [78] = 7,
  [79] = 5,
  [80] = 6,
  [81] = 14,
  [82] = 82,
  [83] = 10,
  [84] = 84,
  [85] = 11,
  [86] = 16,
  [87] = 17,
  [88] = 41,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 46,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 96,
  [98] = 98,
  [99] = 98,
  [100] = 100,
  [101] = 96,
  [102] = 102,
  [103] = 103,
  [104] = 42,
  [105] = 102,
  [106] = 106,
  [107] = 107,
  [108] = 107,
  [109] = 103,
  [110] = 103,
  [111] = 107,
  [112] = 112,
  [113] = 39,
  [114] = 114,
  [115] = 39,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 118,
  [122] = 117,
  [123] = 117,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 125,
  [130] = 130,
  [131] = 131,
  [132] = 127,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 127,
  [138] = 138,
  [139] = 139,
  [140] = 125,
  [141] = 141,
  [142] = 142,
  [143] = 35,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 144,
  [148] = 133,
  [149] = 149,
  [150] = 133,
  [151] = 145,
  [152] = 124,
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
  [10] = {.lex_state = 6},
  [11] = {.lex_state = 6},
  [12] = {.lex_state = 6},
  [13] = {.lex_state = 6},
  [14] = {.lex_state = 7},
  [15] = {.lex_state = 6},
  [16] = {.lex_state = 6},
  [17] = {.lex_state = 6},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 6},
  [21] = {.lex_state = 6},
  [22] = {.lex_state = 6},
  [23] = {.lex_state = 6},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 6},
  [26] = {.lex_state = 6},
  [27] = {.lex_state = 6},
  [28] = {.lex_state = 6},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 5},
  [32] = {.lex_state = 6},
  [33] = {.lex_state = 6},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 6},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 8},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 6},
  [42] = {.lex_state = 6},
  [43] = {.lex_state = 6},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 6},
  [46] = {.lex_state = 6},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 6},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 6},
  [51] = {.lex_state = 6},
  [52] = {.lex_state = 6},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 115},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 115},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 1},
  [66] = {.lex_state = 115},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 1},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 1},
  [86] = {.lex_state = 1},
  [87] = {.lex_state = 1},
  [88] = {.lex_state = 115},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 115},
  [91] = {.lex_state = 115},
  [92] = {.lex_state = 115},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 4},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 115},
  [97] = {.lex_state = 115},
  [98] = {.lex_state = 5},
  [99] = {.lex_state = 5},
  [100] = {.lex_state = 5},
  [101] = {.lex_state = 115},
  [102] = {.lex_state = 5},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 5},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 5},
  [113] = {.lex_state = 87},
  [114] = {.lex_state = 5},
  [115] = {.lex_state = 2},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 4},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 4},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 1},
  [127] = {.lex_state = 102},
  [128] = {.lex_state = 5},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 102},
  [133] = {.lex_state = 203},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 5},
  [136] = {.lex_state = 1},
  [137] = {.lex_state = 102},
  [138] = {.lex_state = 5},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 5},
  [142] = {.lex_state = 5},
  [143] = {.lex_state = 1},
  [144] = {.lex_state = 87},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 87},
  [148] = {.lex_state = 203},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 203},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
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
    [sym_file] = STATE(146),
    [sym__tokens] = STATE(66),
    [sym_variants] = STATE(66),
    [aux_sym_file_repeat1] = STATE(66),
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
    ACTIONS(46), 8,
      sym_id,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
      anon_sym_when,
    ACTIONS(44), 9,
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
  [243] = 5,
    STATE(13), 1,
      aux_sym_arithmetic_repeat1,
    STATE(36), 1,
      sym_op,
    ACTIONS(52), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(56), 5,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(54), 8,
      sym_id,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
      anon_sym_when,
  [271] = 5,
    STATE(15), 1,
      aux_sym_arithmetic_repeat1,
    STATE(36), 1,
      sym_op,
    ACTIONS(58), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(56), 5,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(60), 8,
      sym_id,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
      anon_sym_when,
  [299] = 2,
    ACTIONS(64), 1,
      sym_pos,
    ACTIONS(62), 16,
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
  [321] = 5,
    STATE(15), 1,
      aux_sym_arithmetic_repeat1,
    STATE(36), 1,
      sym_op,
    ACTIONS(66), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(70), 5,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(68), 8,
      sym_id,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
      anon_sym_when,
  [349] = 2,
    ACTIONS(75), 8,
      sym_id,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
      anon_sym_when,
    ACTIONS(73), 9,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [371] = 2,
    ACTIONS(68), 8,
      sym_id,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
      anon_sym_when,
    ACTIONS(66), 9,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [393] = 11,
    ACTIONS(77), 1,
      aux_sym__str_token1,
    ACTIONS(79), 1,
      sym_asset,
    ACTIONS(81), 1,
      anon_sym_POUND,
    ACTIONS(83), 1,
      sym_num,
    ACTIONS(85), 1,
      sym_func_id,
    ACTIONS(87), 1,
      anon_sym_RPAREN,
    ACTIONS(89), 1,
      anon_sym_DOLLAR,
    STATE(2), 1,
      sym_func,
    STATE(35), 1,
      sym_arithmetic,
    STATE(110), 1,
      sym__exp,
    STATE(50), 5,
      sym__str,
      sym_dimension,
      sym_hex,
      sym__func,
      sym__ref,
  [431] = 11,
    ACTIONS(77), 1,
      aux_sym__str_token1,
    ACTIONS(79), 1,
      sym_asset,
    ACTIONS(81), 1,
      anon_sym_POUND,
    ACTIONS(83), 1,
      sym_num,
    ACTIONS(85), 1,
      sym_func_id,
    ACTIONS(89), 1,
      anon_sym_DOLLAR,
    ACTIONS(91), 1,
      anon_sym_RPAREN,
    STATE(2), 1,
      sym_func,
    STATE(35), 1,
      sym_arithmetic,
    STATE(109), 1,
      sym__exp,
    STATE(50), 5,
      sym__str,
      sym_dimension,
      sym_hex,
      sym__func,
      sym__ref,
  [469] = 7,
    ACTIONS(93), 1,
      anon_sym_LBRACE,
    ACTIONS(95), 1,
      anon_sym_RBRACE,
    ACTIONS(97), 1,
      sym_id,
    ACTIONS(101), 1,
      anon_sym_when,
    STATE(138), 1,
      sym_type,
    STATE(22), 4,
      sym_block,
      sym_def,
      sym_cond,
      aux_sym_block_repeat1,
    ACTIONS(99), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [499] = 7,
    ACTIONS(93), 1,
      anon_sym_LBRACE,
    ACTIONS(97), 1,
      sym_id,
    ACTIONS(101), 1,
      anon_sym_when,
    ACTIONS(103), 1,
      anon_sym_RBRACE,
    STATE(138), 1,
      sym_type,
    STATE(22), 4,
      sym_block,
      sym_def,
      sym_cond,
      aux_sym_block_repeat1,
    ACTIONS(99), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [529] = 7,
    ACTIONS(105), 1,
      anon_sym_LBRACE,
    ACTIONS(108), 1,
      anon_sym_RBRACE,
    ACTIONS(110), 1,
      sym_id,
    ACTIONS(116), 1,
      anon_sym_when,
    STATE(138), 1,
      sym_type,
    STATE(22), 4,
      sym_block,
      sym_def,
      sym_cond,
      aux_sym_block_repeat1,
    ACTIONS(113), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [559] = 7,
    ACTIONS(93), 1,
      anon_sym_LBRACE,
    ACTIONS(97), 1,
      sym_id,
    ACTIONS(101), 1,
      anon_sym_when,
    ACTIONS(119), 1,
      anon_sym_RBRACE,
    STATE(138), 1,
      sym_type,
    STATE(22), 4,
      sym_block,
      sym_def,
      sym_cond,
      aux_sym_block_repeat1,
    ACTIONS(99), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [589] = 11,
    ACTIONS(77), 1,
      aux_sym__str_token1,
    ACTIONS(79), 1,
      sym_asset,
    ACTIONS(81), 1,
      anon_sym_POUND,
    ACTIONS(83), 1,
      sym_num,
    ACTIONS(85), 1,
      sym_func_id,
    ACTIONS(89), 1,
      anon_sym_DOLLAR,
    ACTIONS(121), 1,
      anon_sym_RPAREN,
    STATE(2), 1,
      sym_func,
    STATE(35), 1,
      sym_arithmetic,
    STATE(103), 1,
      sym__exp,
    STATE(50), 5,
      sym__str,
      sym_dimension,
      sym_hex,
      sym__func,
      sym__ref,
  [627] = 2,
    ACTIONS(62), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(64), 8,
      sym_id,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
      anon_sym_when,
  [647] = 7,
    ACTIONS(93), 1,
      anon_sym_LBRACE,
    ACTIONS(97), 1,
      sym_id,
    ACTIONS(101), 1,
      anon_sym_when,
    ACTIONS(123), 1,
      anon_sym_RBRACE,
    STATE(138), 1,
      sym_type,
    STATE(22), 4,
      sym_block,
      sym_def,
      sym_cond,
      aux_sym_block_repeat1,
    ACTIONS(99), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [677] = 6,
    ACTIONS(93), 1,
      anon_sym_LBRACE,
    ACTIONS(97), 1,
      sym_id,
    ACTIONS(101), 1,
      anon_sym_when,
    STATE(138), 1,
      sym_type,
    STATE(23), 4,
      sym_block,
      sym_def,
      sym_cond,
      aux_sym_block_repeat1,
    ACTIONS(99), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [704] = 6,
    ACTIONS(93), 1,
      anon_sym_LBRACE,
    ACTIONS(97), 1,
      sym_id,
    ACTIONS(101), 1,
      anon_sym_when,
    STATE(138), 1,
      sym_type,
    STATE(21), 4,
      sym_block,
      sym_def,
      sym_cond,
      aux_sym_block_repeat1,
    ACTIONS(99), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [731] = 10,
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
    STATE(126), 1,
      sym__exp,
    STATE(143), 1,
      sym_arithmetic,
    STATE(59), 5,
      sym__str,
      sym_dimension,
      sym_hex,
      sym__func,
      sym__ref,
  [766] = 10,
    ACTIONS(77), 1,
      aux_sym__str_token1,
    ACTIONS(79), 1,
      sym_asset,
    ACTIONS(81), 1,
      anon_sym_POUND,
    ACTIONS(85), 1,
      sym_func_id,
    ACTIONS(137), 1,
      sym_num,
    ACTIONS(139), 1,
      anon_sym_DOLLAR,
    STATE(2), 1,
      sym_func,
    STATE(35), 1,
      sym_arithmetic,
    STATE(43), 1,
      sym__exp,
    STATE(12), 5,
      sym__str,
      sym_dimension,
      sym_hex,
      sym__func,
      sym__ref,
  [801] = 9,
    ACTIONS(89), 1,
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
    STATE(67), 1,
      sym_base,
    STATE(68), 6,
      sym__str,
      sym_dimension,
      sym_hex,
      sym_func,
      sym_switch,
      sym__ref,
  [834] = 6,
    ACTIONS(93), 1,
      anon_sym_LBRACE,
    ACTIONS(97), 1,
      sym_id,
    ACTIONS(101), 1,
      anon_sym_when,
    STATE(138), 1,
      sym_type,
    STATE(26), 4,
      sym_block,
      sym_def,
      sym_cond,
      aux_sym_block_repeat1,
    ACTIONS(99), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [861] = 6,
    ACTIONS(93), 1,
      anon_sym_LBRACE,
    ACTIONS(97), 1,
      sym_id,
    ACTIONS(101), 1,
      anon_sym_when,
    STATE(138), 1,
      sym_type,
    STATE(20), 4,
      sym_block,
      sym_def,
      sym_cond,
      aux_sym_block_repeat1,
    ACTIONS(99), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [888] = 10,
    ACTIONS(77), 1,
      aux_sym__str_token1,
    ACTIONS(79), 1,
      sym_asset,
    ACTIONS(81), 1,
      anon_sym_POUND,
    ACTIONS(83), 1,
      sym_num,
    ACTIONS(85), 1,
      sym_func_id,
    ACTIONS(89), 1,
      anon_sym_DOLLAR,
    STATE(2), 1,
      sym_func,
    STATE(35), 1,
      sym_arithmetic,
    STATE(120), 1,
      sym__exp,
    STATE(50), 5,
      sym__str,
      sym_dimension,
      sym_hex,
      sym__func,
      sym__ref,
  [923] = 2,
    ACTIONS(52), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(54), 8,
      sym_id,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
      anon_sym_when,
  [940] = 7,
    ACTIONS(77), 1,
      aux_sym__str_token1,
    ACTIONS(81), 1,
      anon_sym_POUND,
    ACTIONS(85), 1,
      sym_func_id,
    ACTIONS(139), 1,
      anon_sym_DOLLAR,
    ACTIONS(153), 1,
      sym_num,
    STATE(2), 1,
      sym_func,
    STATE(17), 5,
      sym__str,
      sym_dimension,
      sym_hex,
      sym__func,
      sym__ref,
  [966] = 7,
    ACTIONS(77), 1,
      aux_sym__str_token1,
    ACTIONS(81), 1,
      anon_sym_POUND,
    ACTIONS(85), 1,
      sym_func_id,
    ACTIONS(89), 1,
      anon_sym_DOLLAR,
    ACTIONS(153), 1,
      sym_num,
    STATE(2), 1,
      sym_func,
    STATE(17), 5,
      sym__str,
      sym_dimension,
      sym_hex,
      sym__func,
      sym__ref,
  [992] = 7,
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
    STATE(87), 5,
      sym__str,
      sym_dimension,
      sym_hex,
      sym__func,
      sym__ref,
  [1018] = 3,
    ACTIONS(157), 1,
      sym_unit,
    ACTIONS(52), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(54), 8,
      sym_id,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
      anon_sym_when,
  [1036] = 4,
    ACTIONS(159), 1,
      anon_sym_RBRACE,
    STATE(135), 1,
      sym_type,
    STATE(44), 2,
      sym_var,
      aux_sym_variants_repeat1,
    ACTIONS(161), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [1055] = 2,
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
  [1070] = 2,
    ACTIONS(167), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(169), 8,
      sym_id,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
      anon_sym_when,
  [1085] = 2,
    ACTIONS(171), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(173), 8,
      sym_id,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
      anon_sym_when,
  [1100] = 4,
    ACTIONS(175), 1,
      anon_sym_RBRACE,
    STATE(135), 1,
      sym_type,
    STATE(44), 2,
      sym_var,
      aux_sym_variants_repeat1,
    ACTIONS(177), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [1119] = 2,
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
  [1134] = 2,
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
  [1149] = 3,
    ACTIONS(190), 1,
      anon_sym_STAR,
    STATE(58), 1,
      sym_asterisk,
    ACTIONS(188), 8,
      anon_sym_RBRACE,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
      anon_sym_COMMA,
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
  [1181] = 3,
    ACTIONS(198), 1,
      anon_sym_COMMA,
    STATE(55), 1,
      aux_sym_switch_repeat1,
    ACTIONS(196), 7,
      anon_sym_RBRACE,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [1197] = 4,
    STATE(37), 1,
      sym_op,
    STATE(51), 1,
      aux_sym_arithmetic_repeat1,
    ACTIONS(52), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(56), 5,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [1215] = 4,
    STATE(37), 1,
      sym_op,
    STATE(52), 1,
      aux_sym_arithmetic_repeat1,
    ACTIONS(58), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(56), 5,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [1233] = 4,
    STATE(37), 1,
      sym_op,
    STATE(52), 1,
      aux_sym_arithmetic_repeat1,
    ACTIONS(66), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(70), 5,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [1251] = 3,
    ACTIONS(198), 1,
      anon_sym_COMMA,
    STATE(55), 1,
      aux_sym_switch_repeat1,
    ACTIONS(200), 7,
      anon_sym_RBRACE,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [1267] = 3,
    STATE(135), 1,
      sym_type,
    STATE(40), 2,
      sym_var,
      aux_sym_variants_repeat1,
    ACTIONS(161), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [1283] = 3,
    ACTIONS(202), 1,
      anon_sym_COMMA,
    STATE(55), 1,
      aux_sym_switch_repeat1,
    ACTIONS(188), 7,
      anon_sym_RBRACE,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [1299] = 4,
    ACTIONS(21), 1,
      sym__newlines,
    ACTIONS(205), 1,
      anon_sym_DOT,
    STATE(56), 1,
      aux_sym__func_repeat1,
    ACTIONS(23), 5,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [1316] = 2,
    ACTIONS(210), 1,
      sym_unit,
    ACTIONS(208), 7,
      anon_sym_RBRACE,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [1329] = 1,
    ACTIONS(212), 8,
      anon_sym_RBRACE,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
      anon_sym_COMMA,
  [1340] = 4,
    ACTIONS(52), 1,
      sym__newlines,
    STATE(38), 1,
      sym_op,
    STATE(61), 1,
      aux_sym_arithmetic_repeat1,
    ACTIONS(214), 5,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [1357] = 4,
    ACTIONS(11), 1,
      sym__newlines,
    ACTIONS(216), 1,
      anon_sym_DOT,
    STATE(62), 1,
      aux_sym__func_repeat1,
    ACTIONS(13), 5,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [1374] = 4,
    ACTIONS(58), 1,
      sym__newlines,
    STATE(38), 1,
      sym_op,
    STATE(65), 1,
      aux_sym_arithmetic_repeat1,
    ACTIONS(214), 5,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [1391] = 4,
    ACTIONS(17), 1,
      sym__newlines,
    ACTIONS(216), 1,
      anon_sym_DOT,
    STATE(56), 1,
      aux_sym__func_repeat1,
    ACTIONS(19), 5,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [1408] = 5,
    ACTIONS(218), 1,
      ts_builtin_sym_end,
    ACTIONS(220), 1,
      anon_sym_tokens,
    ACTIONS(223), 1,
      anon_sym_variants,
    ACTIONS(226), 2,
      sym_multi_line_comment,
      sym_single_line_comment,
    STATE(63), 3,
      sym__tokens,
      sym_variants,
      aux_sym_file_repeat1,
  [1427] = 1,
    ACTIONS(229), 8,
      anon_sym_RBRACE,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
      anon_sym_COMMA,
  [1438] = 4,
    ACTIONS(66), 1,
      sym__newlines,
    STATE(38), 1,
      sym_op,
    STATE(65), 1,
      aux_sym_arithmetic_repeat1,
    ACTIONS(231), 5,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [1455] = 5,
    ACTIONS(5), 1,
      anon_sym_tokens,
    ACTIONS(7), 1,
      anon_sym_variants,
    ACTIONS(234), 1,
      ts_builtin_sym_end,
    ACTIONS(236), 2,
      sym_multi_line_comment,
      sym_single_line_comment,
    STATE(63), 3,
      sym__tokens,
      sym_variants,
      aux_sym_file_repeat1,
  [1474] = 1,
    ACTIONS(238), 7,
      anon_sym_RBRACE,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [1484] = 1,
    ACTIONS(208), 7,
      anon_sym_RBRACE,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [1494] = 2,
    ACTIONS(21), 1,
      sym__newlines,
    ACTIONS(23), 6,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [1506] = 1,
    ACTIONS(36), 7,
      anon_sym_RBRACE,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [1516] = 1,
    ACTIONS(28), 7,
      anon_sym_RBRACE,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [1526] = 1,
    ACTIONS(48), 7,
      anon_sym_RBRACE,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [1536] = 1,
    ACTIONS(40), 7,
      anon_sym_RBRACE,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [1546] = 1,
    ACTIONS(44), 7,
      anon_sym_RBRACE,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [1556] = 1,
    ACTIONS(32), 7,
      anon_sym_RBRACE,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [1566] = 2,
    ACTIONS(40), 1,
      sym__newlines,
    ACTIONS(42), 6,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [1578] = 1,
    ACTIONS(73), 7,
      anon_sym_RBRACE,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [1588] = 2,
    ACTIONS(36), 1,
      sym__newlines,
    ACTIONS(38), 6,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [1600] = 2,
    ACTIONS(28), 1,
      sym__newlines,
    ACTIONS(30), 6,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [1612] = 2,
    ACTIONS(32), 1,
      sym__newlines,
    ACTIONS(34), 6,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [1624] = 2,
    ACTIONS(62), 1,
      sym__newlines,
    ACTIONS(64), 5,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [1635] = 5,
    ACTIONS(240), 1,
      anon_sym_RBRACE,
    ACTIONS(242), 1,
      sym_neg,
    ACTIONS(245), 1,
      sym_pos,
    STATE(152), 1,
      sym_bool,
    STATE(82), 2,
      sym_assertion,
      aux_sym_cond_repeat1,
  [1652] = 2,
    ACTIONS(44), 1,
      sym__newlines,
    ACTIONS(46), 5,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [1663] = 5,
    ACTIONS(248), 1,
      anon_sym_RBRACE,
    ACTIONS(250), 1,
      sym_neg,
    ACTIONS(252), 1,
      sym_pos,
    STATE(152), 1,
      sym_bool,
    STATE(82), 2,
      sym_assertion,
      aux_sym_cond_repeat1,
  [1680] = 2,
    ACTIONS(48), 1,
      sym__newlines,
    ACTIONS(50), 5,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [1691] = 2,
    ACTIONS(73), 1,
      sym__newlines,
    ACTIONS(75), 5,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [1702] = 2,
    ACTIONS(66), 1,
      sym__newlines,
    ACTIONS(68), 5,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [1713] = 1,
    ACTIONS(163), 5,
      ts_builtin_sym_end,
      anon_sym_tokens,
      anon_sym_variants,
      sym_multi_line_comment,
      sym_single_line_comment,
  [1721] = 4,
    ACTIONS(250), 1,
      sym_neg,
    ACTIONS(252), 1,
      sym_pos,
    STATE(152), 1,
      sym_bool,
    STATE(84), 2,
      sym_assertion,
      aux_sym_cond_repeat1,
  [1735] = 1,
    ACTIONS(254), 5,
      ts_builtin_sym_end,
      anon_sym_tokens,
      anon_sym_variants,
      sym_multi_line_comment,
      sym_single_line_comment,
  [1743] = 1,
    ACTIONS(256), 5,
      ts_builtin_sym_end,
      anon_sym_tokens,
      anon_sym_variants,
      sym_multi_line_comment,
      sym_single_line_comment,
  [1751] = 1,
    ACTIONS(184), 5,
      ts_builtin_sym_end,
      anon_sym_tokens,
      anon_sym_variants,
      sym_multi_line_comment,
      sym_single_line_comment,
  [1759] = 5,
    ACTIONS(250), 1,
      sym_neg,
    ACTIONS(252), 1,
      sym_pos,
    ACTIONS(258), 1,
      anon_sym_LBRACE,
    STATE(45), 1,
      sym_assertion,
    STATE(124), 1,
      sym_bool,
  [1775] = 1,
    ACTIONS(260), 5,
      aux_sym__str_token1,
      anon_sym_POUND,
      sym_num,
      sym_func_id,
      anon_sym_DOLLAR,
  [1783] = 4,
    ACTIONS(190), 1,
      anon_sym_STAR,
    ACTIONS(198), 1,
      anon_sym_COMMA,
    STATE(53), 1,
      aux_sym_switch_repeat1,
    STATE(116), 1,
      sym_asterisk,
  [1796] = 2,
    ACTIONS(264), 1,
      aux_sym_hex_token4,
    ACTIONS(262), 3,
      aux_sym_hex_token1,
      aux_sym_hex_token2,
      aux_sym_hex_token3,
  [1805] = 2,
    ACTIONS(268), 1,
      aux_sym_hex_token4,
    ACTIONS(266), 3,
      aux_sym_hex_token1,
      aux_sym_hex_token2,
      aux_sym_hex_token3,
  [1814] = 4,
    ACTIONS(270), 1,
      anon_sym_RBRACE,
    ACTIONS(272), 1,
      sym_id,
    STATE(100), 1,
      aux_sym_assertion_repeat1,
    STATE(136), 1,
      sym_set,
  [1827] = 4,
    ACTIONS(272), 1,
      sym_id,
    ACTIONS(274), 1,
      anon_sym_RBRACE,
    STATE(100), 1,
      aux_sym_assertion_repeat1,
    STATE(136), 1,
      sym_set,
  [1840] = 4,
    ACTIONS(276), 1,
      anon_sym_RBRACE,
    ACTIONS(278), 1,
      sym_id,
    STATE(100), 1,
      aux_sym_assertion_repeat1,
    STATE(136), 1,
      sym_set,
  [1853] = 2,
    ACTIONS(283), 1,
      aux_sym_hex_token4,
    ACTIONS(281), 3,
      aux_sym_hex_token1,
      aux_sym_hex_token2,
      aux_sym_hex_token3,
  [1862] = 3,
    ACTIONS(272), 1,
      sym_id,
    STATE(99), 1,
      aux_sym_assertion_repeat1,
    STATE(136), 1,
      sym_set,
  [1872] = 3,
    ACTIONS(285), 1,
      anon_sym_COMMA,
    ACTIONS(287), 1,
      anon_sym_RPAREN,
    STATE(108), 1,
      aux_sym_params_repeat1,
  [1882] = 2,
    ACTIONS(169), 1,
      sym_pos,
    ACTIONS(167), 2,
      anon_sym_RBRACE,
      sym_neg,
  [1890] = 3,
    ACTIONS(272), 1,
      sym_id,
    STATE(98), 1,
      aux_sym_assertion_repeat1,
    STATE(136), 1,
      sym_set,
  [1900] = 3,
    ACTIONS(289), 1,
      anon_sym_COMMA,
    ACTIONS(292), 1,
      anon_sym_RPAREN,
    STATE(106), 1,
      aux_sym_params_repeat1,
  [1910] = 3,
    ACTIONS(285), 1,
      anon_sym_COMMA,
    ACTIONS(294), 1,
      anon_sym_RPAREN,
    STATE(106), 1,
      aux_sym_params_repeat1,
  [1920] = 3,
    ACTIONS(285), 1,
      anon_sym_COMMA,
    ACTIONS(296), 1,
      anon_sym_RPAREN,
    STATE(106), 1,
      aux_sym_params_repeat1,
  [1930] = 3,
    ACTIONS(285), 1,
      anon_sym_COMMA,
    ACTIONS(298), 1,
      anon_sym_RPAREN,
    STATE(107), 1,
      aux_sym_params_repeat1,
  [1940] = 3,
    ACTIONS(285), 1,
      anon_sym_COMMA,
    ACTIONS(300), 1,
      anon_sym_RPAREN,
    STATE(111), 1,
      aux_sym_params_repeat1,
  [1950] = 3,
    ACTIONS(285), 1,
      anon_sym_COMMA,
    ACTIONS(302), 1,
      anon_sym_RPAREN,
    STATE(106), 1,
      aux_sym_params_repeat1,
  [1960] = 3,
    ACTIONS(304), 1,
      anon_sym_LBRACE,
    ACTIONS(306), 1,
      sym_id,
    STATE(91), 1,
      sym_block,
  [1970] = 2,
    ACTIONS(308), 1,
      sym_unit,
    ACTIONS(52), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1978] = 1,
    ACTIONS(276), 2,
      anon_sym_RBRACE,
      sym_id,
  [1983] = 2,
    ACTIONS(52), 1,
      sym__newlines,
    ACTIONS(310), 1,
      sym_unit,
  [1990] = 2,
    ACTIONS(198), 1,
      anon_sym_COMMA,
    STATE(49), 1,
      aux_sym_switch_repeat1,
  [1997] = 2,
    ACTIONS(312), 1,
      anon_sym_LPAREN,
    STATE(76), 1,
      sym_params,
  [2004] = 2,
    ACTIONS(85), 1,
      sym_func_id,
    STATE(9), 1,
      sym_func,
  [2011] = 2,
    ACTIONS(89), 1,
      anon_sym_DOLLAR,
    STATE(93), 1,
      sym__ref,
  [2018] = 1,
    ACTIONS(292), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2023] = 2,
    ACTIONS(133), 1,
      sym_func_id,
    STATE(69), 1,
      sym_func,
  [2030] = 2,
    ACTIONS(314), 1,
      anon_sym_LPAREN,
    STATE(8), 1,
      sym_params,
  [2037] = 2,
    ACTIONS(316), 1,
      anon_sym_LPAREN,
    STATE(73), 1,
      sym_params,
  [2044] = 1,
    ACTIONS(318), 1,
      anon_sym_LBRACE,
  [2048] = 1,
    ACTIONS(320), 1,
      aux_sym__str_token1,
  [2052] = 1,
    ACTIONS(322), 1,
      sym__newlines,
  [2056] = 1,
    ACTIONS(324), 1,
      sym_ref,
  [2060] = 1,
    ACTIONS(326), 1,
      sym_id,
  [2064] = 1,
    ACTIONS(328), 1,
      aux_sym__str_token1,
  [2068] = 1,
    ACTIONS(330), 1,
      anon_sym_COLON,
  [2072] = 1,
    ACTIONS(332), 1,
      anon_sym_COLON,
  [2076] = 1,
    ACTIONS(334), 1,
      sym_ref,
  [2080] = 1,
    ACTIONS(336), 1,
      sym_str,
  [2084] = 1,
    ACTIONS(338), 1,
      anon_sym_COLON,
  [2088] = 1,
    ACTIONS(340), 1,
      sym_id,
  [2092] = 1,
    ACTIONS(342), 1,
      sym__newlines,
  [2096] = 1,
    ACTIONS(344), 1,
      sym_ref,
  [2100] = 1,
    ACTIONS(346), 1,
      sym_id,
  [2104] = 1,
    ACTIONS(348), 1,
      anon_sym_LBRACE,
  [2108] = 1,
    ACTIONS(350), 1,
      aux_sym__str_token1,
  [2112] = 1,
    ACTIONS(352), 1,
      sym_id,
  [2116] = 1,
    ACTIONS(354), 1,
      sym_id,
  [2120] = 1,
    ACTIONS(52), 1,
      sym__newlines,
  [2124] = 1,
    ACTIONS(308), 1,
      sym_unit,
  [2128] = 1,
    ACTIONS(356), 1,
      anon_sym_LBRACE,
  [2132] = 1,
    ACTIONS(358), 1,
      ts_builtin_sym_end,
  [2136] = 1,
    ACTIONS(310), 1,
      sym_unit,
  [2140] = 1,
    ACTIONS(360), 1,
      sym_str,
  [2144] = 1,
    ACTIONS(362), 1,
      anon_sym_LBRACE,
  [2148] = 1,
    ACTIONS(364), 1,
      sym_str,
  [2152] = 1,
    ACTIONS(366), 1,
      anon_sym_LBRACE,
  [2156] = 1,
    ACTIONS(368), 1,
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
  [SMALL_STATE(14)] = 299,
  [SMALL_STATE(15)] = 321,
  [SMALL_STATE(16)] = 349,
  [SMALL_STATE(17)] = 371,
  [SMALL_STATE(18)] = 393,
  [SMALL_STATE(19)] = 431,
  [SMALL_STATE(20)] = 469,
  [SMALL_STATE(21)] = 499,
  [SMALL_STATE(22)] = 529,
  [SMALL_STATE(23)] = 559,
  [SMALL_STATE(24)] = 589,
  [SMALL_STATE(25)] = 627,
  [SMALL_STATE(26)] = 647,
  [SMALL_STATE(27)] = 677,
  [SMALL_STATE(28)] = 704,
  [SMALL_STATE(29)] = 731,
  [SMALL_STATE(30)] = 766,
  [SMALL_STATE(31)] = 801,
  [SMALL_STATE(32)] = 834,
  [SMALL_STATE(33)] = 861,
  [SMALL_STATE(34)] = 888,
  [SMALL_STATE(35)] = 923,
  [SMALL_STATE(36)] = 940,
  [SMALL_STATE(37)] = 966,
  [SMALL_STATE(38)] = 992,
  [SMALL_STATE(39)] = 1018,
  [SMALL_STATE(40)] = 1036,
  [SMALL_STATE(41)] = 1055,
  [SMALL_STATE(42)] = 1070,
  [SMALL_STATE(43)] = 1085,
  [SMALL_STATE(44)] = 1100,
  [SMALL_STATE(45)] = 1119,
  [SMALL_STATE(46)] = 1134,
  [SMALL_STATE(47)] = 1149,
  [SMALL_STATE(48)] = 1166,
  [SMALL_STATE(49)] = 1181,
  [SMALL_STATE(50)] = 1197,
  [SMALL_STATE(51)] = 1215,
  [SMALL_STATE(52)] = 1233,
  [SMALL_STATE(53)] = 1251,
  [SMALL_STATE(54)] = 1267,
  [SMALL_STATE(55)] = 1283,
  [SMALL_STATE(56)] = 1299,
  [SMALL_STATE(57)] = 1316,
  [SMALL_STATE(58)] = 1329,
  [SMALL_STATE(59)] = 1340,
  [SMALL_STATE(60)] = 1357,
  [SMALL_STATE(61)] = 1374,
  [SMALL_STATE(62)] = 1391,
  [SMALL_STATE(63)] = 1408,
  [SMALL_STATE(64)] = 1427,
  [SMALL_STATE(65)] = 1438,
  [SMALL_STATE(66)] = 1455,
  [SMALL_STATE(67)] = 1474,
  [SMALL_STATE(68)] = 1484,
  [SMALL_STATE(69)] = 1494,
  [SMALL_STATE(70)] = 1506,
  [SMALL_STATE(71)] = 1516,
  [SMALL_STATE(72)] = 1526,
  [SMALL_STATE(73)] = 1536,
  [SMALL_STATE(74)] = 1546,
  [SMALL_STATE(75)] = 1556,
  [SMALL_STATE(76)] = 1566,
  [SMALL_STATE(77)] = 1578,
  [SMALL_STATE(78)] = 1588,
  [SMALL_STATE(79)] = 1600,
  [SMALL_STATE(80)] = 1612,
  [SMALL_STATE(81)] = 1624,
  [SMALL_STATE(82)] = 1635,
  [SMALL_STATE(83)] = 1652,
  [SMALL_STATE(84)] = 1663,
  [SMALL_STATE(85)] = 1680,
  [SMALL_STATE(86)] = 1691,
  [SMALL_STATE(87)] = 1702,
  [SMALL_STATE(88)] = 1713,
  [SMALL_STATE(89)] = 1721,
  [SMALL_STATE(90)] = 1735,
  [SMALL_STATE(91)] = 1743,
  [SMALL_STATE(92)] = 1751,
  [SMALL_STATE(93)] = 1759,
  [SMALL_STATE(94)] = 1775,
  [SMALL_STATE(95)] = 1783,
  [SMALL_STATE(96)] = 1796,
  [SMALL_STATE(97)] = 1805,
  [SMALL_STATE(98)] = 1814,
  [SMALL_STATE(99)] = 1827,
  [SMALL_STATE(100)] = 1840,
  [SMALL_STATE(101)] = 1853,
  [SMALL_STATE(102)] = 1862,
  [SMALL_STATE(103)] = 1872,
  [SMALL_STATE(104)] = 1882,
  [SMALL_STATE(105)] = 1890,
  [SMALL_STATE(106)] = 1900,
  [SMALL_STATE(107)] = 1910,
  [SMALL_STATE(108)] = 1920,
  [SMALL_STATE(109)] = 1930,
  [SMALL_STATE(110)] = 1940,
  [SMALL_STATE(111)] = 1950,
  [SMALL_STATE(112)] = 1960,
  [SMALL_STATE(113)] = 1970,
  [SMALL_STATE(114)] = 1978,
  [SMALL_STATE(115)] = 1983,
  [SMALL_STATE(116)] = 1990,
  [SMALL_STATE(117)] = 1997,
  [SMALL_STATE(118)] = 2004,
  [SMALL_STATE(119)] = 2011,
  [SMALL_STATE(120)] = 2018,
  [SMALL_STATE(121)] = 2023,
  [SMALL_STATE(122)] = 2030,
  [SMALL_STATE(123)] = 2037,
  [SMALL_STATE(124)] = 2044,
  [SMALL_STATE(125)] = 2048,
  [SMALL_STATE(126)] = 2052,
  [SMALL_STATE(127)] = 2056,
  [SMALL_STATE(128)] = 2060,
  [SMALL_STATE(129)] = 2064,
  [SMALL_STATE(130)] = 2068,
  [SMALL_STATE(131)] = 2072,
  [SMALL_STATE(132)] = 2076,
  [SMALL_STATE(133)] = 2080,
  [SMALL_STATE(134)] = 2084,
  [SMALL_STATE(135)] = 2088,
  [SMALL_STATE(136)] = 2092,
  [SMALL_STATE(137)] = 2096,
  [SMALL_STATE(138)] = 2100,
  [SMALL_STATE(139)] = 2104,
  [SMALL_STATE(140)] = 2108,
  [SMALL_STATE(141)] = 2112,
  [SMALL_STATE(142)] = 2116,
  [SMALL_STATE(143)] = 2120,
  [SMALL_STATE(144)] = 2124,
  [SMALL_STATE(145)] = 2128,
  [SMALL_STATE(146)] = 2132,
  [SMALL_STATE(147)] = 2136,
  [SMALL_STATE(148)] = 2140,
  [SMALL_STATE(149)] = 2144,
  [SMALL_STATE(150)] = 2148,
  [SMALL_STATE(151)] = 2152,
  [SMALL_STATE(152)] = 2156,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__func, 1),
  [13] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__func, 1),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__func, 2),
  [19] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__func, 2),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__func_repeat1, 2),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__func_repeat1, 2),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__func_repeat1, 2), SHIFT_REPEAT(118),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 2),
  [30] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_params, 2),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 3),
  [34] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_params, 3),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 4),
  [38] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_params, 4),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 2),
  [42] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func, 2),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dimension, 2),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dimension, 2),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__str, 3),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__str, 3),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exp, 1),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__exp, 1),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arithmetic, 2),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arithmetic, 2),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ref, 2),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ref, 2),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arithmetic_repeat1, 2),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arithmetic_repeat1, 2),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arithmetic_repeat1, 2), SHIFT_REPEAT(94),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hex, 2),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hex, 2),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(33),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(151),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(142),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(119),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4, .production_id = 2),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 4, .production_id = 2),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assertion, 4),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assertion, 4),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def, 4, .production_id = 3),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_def, 4, .production_id = 3),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variants_repeat1, 2),
  [177] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variants_repeat1, 2), SHIFT_REPEAT(142),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cond, 3),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cond, 3),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_switch_repeat1, 2),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cond, 5),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cond, 5),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch, 3),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch, 2),
  [202] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_switch_repeat1, 2), SHIFT_REPEAT(141),
  [205] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__func_repeat1, 2), SHIFT_REPEAT(121),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base, 1),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_switch_repeat1, 3),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2),
  [220] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(112),
  [223] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(149),
  [226] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(63),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_asterisk, 1),
  [231] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arithmetic_repeat1, 2), SHIFT_REPEAT(94),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 1),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var, 4),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_cond_repeat1, 2),
  [242] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cond_repeat1, 2), SHIFT_REPEAT(128),
  [245] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cond_repeat1, 2), SHIFT_REPEAT(128),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variants, 4),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tokens, 2, .production_id = 1),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op, 1),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assertion_repeat1, 2),
  [278] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assertion_repeat1, 2), SHIFT_REPEAT(134),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [289] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2), SHIFT_REPEAT(34),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 3, .production_id = 4),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 2),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [358] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
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
