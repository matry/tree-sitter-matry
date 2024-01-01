#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 154
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 69
#define ALIAS_COUNT 10
#define TOKEN_COUNT 44
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 6

enum {
  sym__newlines = 1,
  aux_sym__string_token1 = 2,
  aux_sym_a98rgb_token1 = 3,
  anon_sym_COMMA = 4,
  anon_sym_RPAREN = 5,
  sym_asset_path = 6,
  sym_asterisk = 7,
  anon_sym_LBRACE = 8,
  anon_sym_RBRACE = 9,
  anon_sym_when = 10,
  sym_decimal_range = 11,
  sym_dimensional_unit = 12,
  anon_sym_POUND = 13,
  aux_sym_hex_token1 = 14,
  aux_sym_hex_token2 = 15,
  aux_sym_hex_token3 = 16,
  aux_sym_hex_token4 = 17,
  aux_sym_hsl_token1 = 18,
  aux_sym_hsv_token1 = 19,
  sym_identifier = 20,
  sym_multi_line_comment = 21,
  sym_negative_assertion = 22,
  sym_number = 23,
  aux_sym_oklab_token1 = 24,
  aux_sym_oklch_token1 = 25,
  aux_sym_p3_token1 = 26,
  sym_positive_assertion = 27,
  aux_sym_rec2020_token1 = 28,
  sym_ref_identifier = 29,
  aux_sym_rgb_token1 = 30,
  sym_single_line_comment = 31,
  sym_string = 32,
  anon_sym_COLON = 33,
  anon_sym_tokens = 34,
  aux_sym_tokens_block_token1 = 35,
  aux_sym_tokens_block_token2 = 36,
  anon_sym_DOLLAR = 37,
  anon_sym_text = 38,
  anon_sym_color = 39,
  anon_sym_asset = 40,
  anon_sym_switch = 41,
  anon_sym_dimension = 42,
  anon_sym_range = 43,
  sym_source_file = 44,
  sym__string = 45,
  aux_sym__token_body = 46,
  sym_a98rgb = 47,
  sym_child_token_block = 48,
  sym_conditional_token_block = 49,
  sym_dimension = 50,
  sym_hex = 51,
  sym_hsl = 52,
  sym_hsv = 53,
  sym_oklab = 54,
  sym_oklch = 55,
  sym_p3 = 56,
  sym_rec2020 = 57,
  sym_rgb = 58,
  sym_switch = 59,
  sym_token_assignment = 60,
  sym_tokens_block = 61,
  sym_token_declaration = 62,
  sym_token_reference = 63,
  sym_token_type = 64,
  sym_token_value = 65,
  aux_sym_source_file_repeat1 = 66,
  aux_sym_conditional_token_block_repeat1 = 67,
  aux_sym_switch_repeat1 = 68,
  alias_sym_a_channel = 69,
  alias_sym_b_channel = 70,
  alias_sym_blue_channel = 71,
  alias_sym_chroma_channel = 72,
  alias_sym_green_channel = 73,
  alias_sym_hue_channel = 74,
  alias_sym_lightness_channel = 75,
  alias_sym_red_channel = 76,
  alias_sym_saturation_channel = 77,
  alias_sym_value_channel = 78,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__newlines] = "_newlines",
  [aux_sym__string_token1] = "_string_token1",
  [aux_sym_a98rgb_token1] = "a98rgb_token1",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [sym_asset_path] = "asset_path",
  [sym_asterisk] = "asterisk",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_when] = "when",
  [sym_decimal_range] = "alpha_channel",
  [sym_dimensional_unit] = "dimensional_unit",
  [anon_sym_POUND] = "#",
  [aux_sym_hex_token1] = "hex_token1",
  [aux_sym_hex_token2] = "hex_token2",
  [aux_sym_hex_token3] = "hex_token3",
  [aux_sym_hex_token4] = "hex_token4",
  [aux_sym_hsl_token1] = "hsl_token1",
  [aux_sym_hsv_token1] = "hsv_token1",
  [sym_identifier] = "identifier",
  [sym_multi_line_comment] = "multi_line_comment",
  [sym_negative_assertion] = "negative_assertion",
  [sym_number] = "number",
  [aux_sym_oklab_token1] = "oklab_token1",
  [aux_sym_oklch_token1] = "oklch_token1",
  [aux_sym_p3_token1] = "p3_token1",
  [sym_positive_assertion] = "positive_assertion",
  [aux_sym_rec2020_token1] = "rec2020_token1",
  [sym_ref_identifier] = "ref_identifier",
  [aux_sym_rgb_token1] = "rgb_token1",
  [sym_single_line_comment] = "single_line_comment",
  [sym_string] = "string",
  [anon_sym_COLON] = ":",
  [anon_sym_tokens] = "tokens",
  [aux_sym_tokens_block_token1] = "tokens_block_token1",
  [aux_sym_tokens_block_token2] = "tokens_block_token2",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_text] = "text",
  [anon_sym_color] = "color",
  [anon_sym_asset] = "asset",
  [anon_sym_switch] = "switch",
  [anon_sym_dimension] = "dimension",
  [anon_sym_range] = "range",
  [sym_source_file] = "source_file",
  [sym__string] = "_string",
  [aux_sym__token_body] = "_token_body",
  [sym_a98rgb] = "a98rgb",
  [sym_child_token_block] = "child_token_block",
  [sym_conditional_token_block] = "conditional_token_block",
  [sym_dimension] = "dimension",
  [sym_hex] = "hex",
  [sym_hsl] = "hsl",
  [sym_hsv] = "hsv",
  [sym_oklab] = "oklab",
  [sym_oklch] = "oklch",
  [sym_p3] = "p3",
  [sym_rec2020] = "rec2020",
  [sym_rgb] = "rgb",
  [sym_switch] = "switch",
  [sym_token_assignment] = "token_assignment",
  [sym_tokens_block] = "tokens_block",
  [sym_token_declaration] = "token_declaration",
  [sym_token_reference] = "token_reference",
  [sym_token_type] = "token_type",
  [sym_token_value] = "token_value",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_conditional_token_block_repeat1] = "conditional_token_block_repeat1",
  [aux_sym_switch_repeat1] = "switch_repeat1",
  [alias_sym_a_channel] = "a_channel",
  [alias_sym_b_channel] = "b_channel",
  [alias_sym_blue_channel] = "blue_channel",
  [alias_sym_chroma_channel] = "chroma_channel",
  [alias_sym_green_channel] = "green_channel",
  [alias_sym_hue_channel] = "hue_channel",
  [alias_sym_lightness_channel] = "lightness_channel",
  [alias_sym_red_channel] = "red_channel",
  [alias_sym_saturation_channel] = "saturation_channel",
  [alias_sym_value_channel] = "value_channel",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__newlines] = sym__newlines,
  [aux_sym__string_token1] = aux_sym__string_token1,
  [aux_sym_a98rgb_token1] = aux_sym_a98rgb_token1,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_asset_path] = sym_asset_path,
  [sym_asterisk] = sym_asterisk,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_when] = anon_sym_when,
  [sym_decimal_range] = sym_decimal_range,
  [sym_dimensional_unit] = sym_dimensional_unit,
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym_hex_token1] = aux_sym_hex_token1,
  [aux_sym_hex_token2] = aux_sym_hex_token2,
  [aux_sym_hex_token3] = aux_sym_hex_token3,
  [aux_sym_hex_token4] = aux_sym_hex_token4,
  [aux_sym_hsl_token1] = aux_sym_hsl_token1,
  [aux_sym_hsv_token1] = aux_sym_hsv_token1,
  [sym_identifier] = sym_identifier,
  [sym_multi_line_comment] = sym_multi_line_comment,
  [sym_negative_assertion] = sym_negative_assertion,
  [sym_number] = sym_number,
  [aux_sym_oklab_token1] = aux_sym_oklab_token1,
  [aux_sym_oklch_token1] = aux_sym_oklch_token1,
  [aux_sym_p3_token1] = aux_sym_p3_token1,
  [sym_positive_assertion] = sym_positive_assertion,
  [aux_sym_rec2020_token1] = aux_sym_rec2020_token1,
  [sym_ref_identifier] = sym_ref_identifier,
  [aux_sym_rgb_token1] = aux_sym_rgb_token1,
  [sym_single_line_comment] = sym_single_line_comment,
  [sym_string] = sym_string,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_tokens] = anon_sym_tokens,
  [aux_sym_tokens_block_token1] = aux_sym_tokens_block_token1,
  [aux_sym_tokens_block_token2] = aux_sym_tokens_block_token2,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_text] = anon_sym_text,
  [anon_sym_color] = anon_sym_color,
  [anon_sym_asset] = anon_sym_asset,
  [anon_sym_switch] = anon_sym_switch,
  [anon_sym_dimension] = anon_sym_dimension,
  [anon_sym_range] = anon_sym_range,
  [sym_source_file] = sym_source_file,
  [sym__string] = sym__string,
  [aux_sym__token_body] = aux_sym__token_body,
  [sym_a98rgb] = sym_a98rgb,
  [sym_child_token_block] = sym_child_token_block,
  [sym_conditional_token_block] = sym_conditional_token_block,
  [sym_dimension] = sym_dimension,
  [sym_hex] = sym_hex,
  [sym_hsl] = sym_hsl,
  [sym_hsv] = sym_hsv,
  [sym_oklab] = sym_oklab,
  [sym_oklch] = sym_oklch,
  [sym_p3] = sym_p3,
  [sym_rec2020] = sym_rec2020,
  [sym_rgb] = sym_rgb,
  [sym_switch] = sym_switch,
  [sym_token_assignment] = sym_token_assignment,
  [sym_tokens_block] = sym_tokens_block,
  [sym_token_declaration] = sym_token_declaration,
  [sym_token_reference] = sym_token_reference,
  [sym_token_type] = sym_token_type,
  [sym_token_value] = sym_token_value,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_conditional_token_block_repeat1] = aux_sym_conditional_token_block_repeat1,
  [aux_sym_switch_repeat1] = aux_sym_switch_repeat1,
  [alias_sym_a_channel] = alias_sym_a_channel,
  [alias_sym_b_channel] = alias_sym_b_channel,
  [alias_sym_blue_channel] = alias_sym_blue_channel,
  [alias_sym_chroma_channel] = alias_sym_chroma_channel,
  [alias_sym_green_channel] = alias_sym_green_channel,
  [alias_sym_hue_channel] = alias_sym_hue_channel,
  [alias_sym_lightness_channel] = alias_sym_lightness_channel,
  [alias_sym_red_channel] = alias_sym_red_channel,
  [alias_sym_saturation_channel] = alias_sym_saturation_channel,
  [alias_sym_value_channel] = alias_sym_value_channel,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym__newlines] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__string_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_a98rgb_token1] = {
    .visible = false,
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
  [sym_asset_path] = {
    .visible = true,
    .named = true,
  },
  [sym_asterisk] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
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
  [sym_dimensional_unit] = {
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
  [aux_sym_hsl_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_hsv_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_multi_line_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_negative_assertion] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_oklab_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_oklch_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_p3_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_positive_assertion] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_rec2020_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_ref_identifier] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_rgb_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_single_line_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tokens] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_tokens_block_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_tokens_block_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
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
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__string] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__token_body] = {
    .visible = false,
    .named = false,
  },
  [sym_a98rgb] = {
    .visible = true,
    .named = true,
  },
  [sym_child_token_block] = {
    .visible = true,
    .named = true,
  },
  [sym_conditional_token_block] = {
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
  [sym_hsl] = {
    .visible = true,
    .named = true,
  },
  [sym_hsv] = {
    .visible = true,
    .named = true,
  },
  [sym_oklab] = {
    .visible = true,
    .named = true,
  },
  [sym_oklch] = {
    .visible = true,
    .named = true,
  },
  [sym_p3] = {
    .visible = true,
    .named = true,
  },
  [sym_rec2020] = {
    .visible = true,
    .named = true,
  },
  [sym_rgb] = {
    .visible = true,
    .named = true,
  },
  [sym_switch] = {
    .visible = true,
    .named = true,
  },
  [sym_token_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym_tokens_block] = {
    .visible = true,
    .named = true,
  },
  [sym_token_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_token_reference] = {
    .visible = true,
    .named = true,
  },
  [sym_token_type] = {
    .visible = true,
    .named = true,
  },
  [sym_token_value] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_conditional_token_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_switch_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_a_channel] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_b_channel] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_blue_channel] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_chroma_channel] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_green_channel] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_hue_channel] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_lightness_channel] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_red_channel] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_saturation_channel] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_value_channel] = {
    .visible = true,
    .named = true,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [1] = alias_sym_red_channel,
    [3] = alias_sym_green_channel,
    [5] = alias_sym_blue_channel,
  },
  [2] = {
    [1] = alias_sym_hue_channel,
    [3] = alias_sym_saturation_channel,
    [5] = alias_sym_lightness_channel,
  },
  [3] = {
    [1] = alias_sym_hue_channel,
    [3] = alias_sym_saturation_channel,
    [5] = alias_sym_value_channel,
  },
  [4] = {
    [1] = alias_sym_lightness_channel,
    [3] = alias_sym_a_channel,
    [5] = alias_sym_b_channel,
  },
  [5] = {
    [1] = alias_sym_lightness_channel,
    [3] = alias_sym_chroma_channel,
    [5] = alias_sym_hue_channel,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 4,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 6,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 11,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 14,
  [18] = 18,
  [19] = 16,
  [20] = 18,
  [21] = 15,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 26,
  [29] = 29,
  [30] = 30,
  [31] = 27,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 47,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 49,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
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
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 52,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 144,
  [146] = 146,
  [147] = 143,
  [148] = 148,
  [149] = 140,
  [150] = 150,
  [151] = 141,
  [152] = 150,
  [153] = 153,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(109);
      if (lookahead == '"') ADVANCE(111);
      if (lookahead == '#') ADVANCE(129);
      if (lookahead == '$') ADVANCE(202);
      if (lookahead == '%') ADVANCE(128);
      if (lookahead == ')') ADVANCE(114);
      if (lookahead == '*') ADVANCE(116);
      if (lookahead == ',') ADVANCE(113);
      if (lookahead == '-') ADVANCE(98);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == '0') ADVANCE(123);
      if (lookahead == '1') ADVANCE(121);
      if (lookahead == ':') ADVANCE(198);
      if (lookahead == 'a') ADVANCE(25);
      if (lookahead == 'c') ADVANCE(93);
      if (lookahead == 'd') ADVANCE(53);
      if (lookahead == 'e') ADVANCE(96);
      if (lookahead == 'h') ADVANCE(78);
      if (lookahead == 'i') ADVANCE(64);
      if (lookahead == 'm') ADVANCE(61);
      if (lookahead == 'o') ADVANCE(56);
      if (lookahead == 'p') ADVANCE(22);
      if (lookahead == 'r') ADVANCE(27);
      if (lookahead == 's') ADVANCE(88);
      if (lookahead == 't') ADVANCE(37);
      if (lookahead == 'v') ADVANCE(95);
      if (lookahead == 'w') ADVANCE(47);
      if (lookahead == '{') ADVANCE(117);
      if (lookahead == '}') ADVANCE(118);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(186);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(110);
      if (lookahead == '*') ADVANCE(116);
      if (lookahead == ',') ADVANCE(113);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(111);
      if (lookahead == '#') ADVANCE(129);
      if (lookahead == '$') ADVANCE(202);
      if (lookahead == '-') ADVANCE(98);
      if (lookahead == '/') ADVANCE(107);
      if (lookahead == 'a') ADVANCE(26);
      if (lookahead == 'h') ADVANCE(80);
      if (lookahead == 'o') ADVANCE(55);
      if (lookahead == 'p') ADVANCE(23);
      if (lookahead == 'r') ADVANCE(39);
      if (lookahead == '{') ADVANCE(200);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(186);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 3:
      if (lookahead == '(') ADVANCE(190);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '(') ADVANCE(134);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '(') ADVANCE(135);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '(') ADVANCE(194);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '(') ADVANCE(188);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '(') ADVANCE(189);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '(') ADVANCE(112);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '(') ADVANCE(192);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '*') ADVANCE(14);
      if (lookahead == '/') ADVANCE(195);
      END_STATE();
    case 12:
      if (lookahead == '*') ADVANCE(14);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 13:
      if (lookahead == '*') ADVANCE(13);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 14:
      if (lookahead == '*') ADVANCE(13);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == '0') ADVANCE(125);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(187);
      END_STATE();
    case 16:
      if (lookahead == '0') ADVANCE(122);
      if (lookahead == '1') ADVANCE(124);
      if (lookahead == 'a') ADVANCE(81);
      if (lookahead == 'c') ADVANCE(73);
      if (lookahead == 'd') ADVANCE(52);
      if (lookahead == 'r') ADVANCE(28);
      if (lookahead == 's') ADVANCE(89);
      if (lookahead == 't') ADVANCE(40);
      if (lookahead == 'w') ADVANCE(49);
      if (lookahead == '}') ADVANCE(118);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 17:
      if (lookahead == '0') ADVANCE(126);
      END_STATE();
    case 18:
      if (lookahead == '0') ADVANCE(10);
      END_STATE();
    case 19:
      if (lookahead == '0') ADVANCE(21);
      END_STATE();
    case 20:
      if (lookahead == '2') ADVANCE(19);
      END_STATE();
    case 21:
      if (lookahead == '2') ADVANCE(18);
      END_STATE();
    case 22:
      if (lookahead == '3') ADVANCE(3);
      if (lookahead == 'c' ||
          lookahead == 't' ||
          lookahead == 'x') ADVANCE(128);
      END_STATE();
    case 23:
      if (lookahead == '3') ADVANCE(136);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 24:
      if (lookahead == '8') ADVANCE(77);
      END_STATE();
    case 25:
      if (lookahead == '9') ADVANCE(24);
      if (lookahead == 's') ADVANCE(83);
      END_STATE();
    case 26:
      if (lookahead == '9') ADVANCE(148);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '8') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(65);
      if (lookahead == 'e') ADVANCE(35);
      if (lookahead == 'g') ADVANCE(32);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(171);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(90);
      if (lookahead == 'i') ADVANCE(63);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(81);
      if (lookahead == 'c') ADVANCE(73);
      if (lookahead == 'd') ADVANCE(52);
      if (lookahead == 'r') ADVANCE(28);
      if (lookahead == 's') ADVANCE(89);
      if (lookahead == 't') ADVANCE(40);
      if (lookahead == 'w') ADVANCE(49);
      if (lookahead == '}') ADVANCE(201);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(30)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(33);
      if (lookahead == 'c') ADVANCE(50);
      END_STATE();
    case 32:
      if (lookahead == 'b') ADVANCE(6);
      END_STATE();
    case 33:
      if (lookahead == 'b') ADVANCE(7);
      END_STATE();
    case 34:
      if (lookahead == 'b') ADVANCE(9);
      END_STATE();
    case 35:
      if (lookahead == 'c') ADVANCE(20);
      if (lookahead == 'm') ADVANCE(128);
      END_STATE();
    case 36:
      if (lookahead == 'c') ADVANCE(48);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(91);
      if (lookahead == 'o') ADVANCE(57);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(213);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(153);
      if (lookahead == 'g') ADVANCE(150);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(182);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(86);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 45:
      if (lookahead == 'g') ADVANCE(38);
      END_STATE();
    case 46:
      if (lookahead == 'g') ADVANCE(34);
      END_STATE();
    case 47:
      if (lookahead == 'h') ADVANCE(42);
      END_STATE();
    case 48:
      if (lookahead == 'h') ADVANCE(209);
      END_STATE();
    case 49:
      if (lookahead == 'h') ADVANCE(156);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 50:
      if (lookahead == 'h') ADVANCE(8);
      END_STATE();
    case 51:
      if (lookahead == 'i') ADVANCE(84);
      END_STATE();
    case 52:
      if (lookahead == 'i') ADVANCE(168);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 53:
      if (lookahead == 'i') ADVANCE(62);
      if (lookahead == 'v') ADVANCE(94);
      END_STATE();
    case 54:
      if (lookahead == 'i') ADVANCE(75);
      END_STATE();
    case 55:
      if (lookahead == 'k') ADVANCE(165);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 56:
      if (lookahead == 'k') ADVANCE(59);
      END_STATE();
    case 57:
      if (lookahead == 'k') ADVANCE(44);
      END_STATE();
    case 58:
      if (lookahead == 'l') ADVANCE(72);
      END_STATE();
    case 59:
      if (lookahead == 'l') ADVANCE(31);
      END_STATE();
    case 60:
      if (lookahead == 'l') ADVANCE(4);
      if (lookahead == 'v') ADVANCE(5);
      END_STATE();
    case 61:
      if (lookahead == 'm') ADVANCE(128);
      END_STATE();
    case 62:
      if (lookahead == 'm') ADVANCE(43);
      END_STATE();
    case 63:
      if (lookahead == 'n') ADVANCE(128);
      END_STATE();
    case 64:
      if (lookahead == 'n') ADVANCE(128);
      if (lookahead == 's') ADVANCE(191);
      END_STATE();
    case 65:
      if (lookahead == 'n') ADVANCE(45);
      END_STATE();
    case 66:
      if (lookahead == 'n') ADVANCE(119);
      END_STATE();
    case 67:
      if (lookahead == 'n') ADVANCE(211);
      END_STATE();
    case 68:
      if (lookahead == 'n') ADVANCE(74);
      END_STATE();
    case 69:
      if (lookahead == 'n') ADVANCE(82);
      END_STATE();
    case 70:
      if (lookahead == 'n') ADVANCE(79);
      END_STATE();
    case 71:
      if (lookahead == 'o') ADVANCE(57);
      END_STATE();
    case 72:
      if (lookahead == 'o') ADVANCE(76);
      END_STATE();
    case 73:
      if (lookahead == 'o') ADVANCE(166);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 74:
      if (lookahead == 'o') ADVANCE(87);
      END_STATE();
    case 75:
      if (lookahead == 'o') ADVANCE(67);
      END_STATE();
    case 76:
      if (lookahead == 'r') ADVANCE(205);
      END_STATE();
    case 77:
      if (lookahead == 'r') ADVANCE(46);
      END_STATE();
    case 78:
      if (lookahead == 's') ADVANCE(60);
      END_STATE();
    case 79:
      if (lookahead == 's') ADVANCE(199);
      END_STATE();
    case 80:
      if (lookahead == 's') ADVANCE(167);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 81:
      if (lookahead == 's') ADVANCE(178);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 82:
      if (lookahead == 's') ADVANCE(54);
      END_STATE();
    case 83:
      if (lookahead == 's') ADVANCE(41);
      END_STATE();
    case 84:
      if (lookahead == 't') ADVANCE(36);
      END_STATE();
    case 85:
      if (lookahead == 't') ADVANCE(203);
      END_STATE();
    case 86:
      if (lookahead == 't') ADVANCE(207);
      END_STATE();
    case 87:
      if (lookahead == 't') ADVANCE(185);
      END_STATE();
    case 88:
      if (lookahead == 'w') ADVANCE(51);
      END_STATE();
    case 89:
      if (lookahead == 'w') ADVANCE(163);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 90:
      if (lookahead == 'x') ADVANCE(128);
      END_STATE();
    case 91:
      if (lookahead == 'x') ADVANCE(85);
      END_STATE();
    case 92:
      if (lookahead == '{') ADVANCE(200);
      if (lookahead == '}') ADVANCE(118);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(92)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 93:
      if (lookahead == 'h' ||
          lookahead == 'm') ADVANCE(128);
      if (lookahead == 'o') ADVANCE(58);
      END_STATE();
    case 94:
      if (lookahead == 'h' ||
          lookahead == 'w') ADVANCE(128);
      END_STATE();
    case 95:
      if (lookahead == 'h' ||
          lookahead == 'w') ADVANCE(128);
      if (lookahead == 'm') ADVANCE(29);
      END_STATE();
    case 96:
      if (lookahead == 'm' ||
          lookahead == 'x') ADVANCE(128);
      END_STATE();
    case 97:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(97)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 98:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(186);
      END_STATE();
    case 99:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      END_STATE();
    case 100:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(187);
      END_STATE();
    case 101:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(130);
      END_STATE();
    case 102:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(132);
      END_STATE();
    case 103:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(133);
      END_STATE();
    case 104:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(101);
      END_STATE();
    case 105:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 106:
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 107:
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 108:
      if (eof) ADVANCE(109);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == 't') ADVANCE(71);
      if (lookahead == '{') ADVANCE(117);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(108)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(104);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym__newlines);
      if (lookahead == '\n') ADVANCE(110);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym__string_token1);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_a98rgb_token1);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_asset_path);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_asterisk);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_when);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_when);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_decimal_range);
      if (lookahead == '.') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(186);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_decimal_range);
      if (lookahead == '.') ADVANCE(99);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_decimal_range);
      if (lookahead == '.') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(186);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_decimal_range);
      if (lookahead == '.') ADVANCE(17);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_decimal_range);
      if (lookahead == '0') ADVANCE(125);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(187);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_decimal_range);
      if (lookahead == '0') ADVANCE(126);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_decimal_range);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_dimensional_unit);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_hex_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(131);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_hex_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(102);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_hex_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(103);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_hex_token4);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_hsl_token1);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_hsv_token1);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(190);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(134);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(4);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(135);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(5);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(194);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(6);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(188);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(7);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(189);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(8);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(112);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(9);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(192);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(10);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '0') ADVANCE(143);
      if (lookahead == '-' ||
          ('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '0') ADVANCE(147);
      if (lookahead == '-' ||
          ('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(145);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(144);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '8') ADVANCE(175);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(151);
      if (lookahead == 'c') ADVANCE(162);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(139);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(140);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(142);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(146);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(161);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(214);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(169);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(172);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(180);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(155);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(152);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(210);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(141);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(181);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(174);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(149);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(173);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(137);
      if (lookahead == 'v') ADVANCE(138);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(157);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(120);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(212);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(159);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(177);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(176);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(170);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(160);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(206);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(164);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(158);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(204);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(208);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(154);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(179);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_multi_line_comment);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_negative_assertion);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(186);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(187);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_oklab_token1);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_oklch_token1);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_p3_token1);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_positive_assertion);
      if (lookahead == ' ') ADVANCE(68);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_rec2020_token1);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_ref_identifier);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_rgb_token1);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_single_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(195);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(196);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\' &&
          lookahead != '^' &&
          lookahead != 'n') ADVANCE(197);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_string);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\' &&
          lookahead != '^' &&
          lookahead != 'n') ADVANCE(197);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_tokens);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_tokens_block_token1);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_tokens_block_token2);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_text);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_text);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_color);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_color);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_asset);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_asset);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_switch);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_switch);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_dimension);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_dimension);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_range);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_range);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 108},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 16},
  [5] = {.lex_state = 16},
  [6] = {.lex_state = 30},
  [7] = {.lex_state = 30},
  [8] = {.lex_state = 30},
  [9] = {.lex_state = 16},
  [10] = {.lex_state = 16},
  [11] = {.lex_state = 16},
  [12] = {.lex_state = 16},
  [13] = {.lex_state = 16},
  [14] = {.lex_state = 30},
  [15] = {.lex_state = 16},
  [16] = {.lex_state = 30},
  [17] = {.lex_state = 16},
  [18] = {.lex_state = 30},
  [19] = {.lex_state = 16},
  [20] = {.lex_state = 16},
  [21] = {.lex_state = 30},
  [22] = {.lex_state = 108},
  [23] = {.lex_state = 108},
  [24] = {.lex_state = 108},
  [25] = {.lex_state = 108},
  [26] = {.lex_state = 92},
  [27] = {.lex_state = 92},
  [28] = {.lex_state = 92},
  [29] = {.lex_state = 108},
  [30] = {.lex_state = 92},
  [31] = {.lex_state = 92},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 92},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 92},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 16},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 92},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 1},
  [70] = {.lex_state = 16},
  [71] = {.lex_state = 2},
  [72] = {.lex_state = 2},
  [73] = {.lex_state = 16},
  [74] = {.lex_state = 16},
  [75] = {.lex_state = 16},
  [76] = {.lex_state = 16},
  [77] = {.lex_state = 2},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 1},
  [89] = {.lex_state = 16},
  [90] = {.lex_state = 2},
  [91] = {.lex_state = 2},
  [92] = {.lex_state = 16},
  [93] = {.lex_state = 2},
  [94] = {.lex_state = 16},
  [95] = {.lex_state = 16},
  [96] = {.lex_state = 2},
  [97] = {.lex_state = 2},
  [98] = {.lex_state = 16},
  [99] = {.lex_state = 16},
  [100] = {.lex_state = 16},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 2},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 1},
  [105] = {.lex_state = 16},
  [106] = {.lex_state = 1},
  [107] = {.lex_state = 16},
  [108] = {.lex_state = 1},
  [109] = {.lex_state = 16},
  [110] = {.lex_state = 1},
  [111] = {.lex_state = 16},
  [112] = {.lex_state = 1},
  [113] = {.lex_state = 16},
  [114] = {.lex_state = 1},
  [115] = {.lex_state = 16},
  [116] = {.lex_state = 1},
  [117] = {.lex_state = 16},
  [118] = {.lex_state = 1},
  [119] = {.lex_state = 16},
  [120] = {.lex_state = 1},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 1},
  [130] = {.lex_state = 1},
  [131] = {.lex_state = 1},
  [132] = {.lex_state = 1},
  [133] = {.lex_state = 1},
  [134] = {.lex_state = 1},
  [135] = {.lex_state = 1},
  [136] = {.lex_state = 1},
  [137] = {.lex_state = 16},
  [138] = {.lex_state = 196},
  [139] = {.lex_state = 1},
  [140] = {.lex_state = 108},
  [141] = {.lex_state = 92},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 1},
  [144] = {.lex_state = 97},
  [145] = {.lex_state = 97},
  [146] = {.lex_state = 92},
  [147] = {.lex_state = 1},
  [148] = {.lex_state = 92},
  [149] = {.lex_state = 108},
  [150] = {.lex_state = 108},
  [151] = {.lex_state = 92},
  [152] = {.lex_state = 108},
  [153] = {.lex_state = 2},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym__string_token1] = ACTIONS(1),
    [aux_sym_a98rgb_token1] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_asset_path] = ACTIONS(1),
    [sym_asterisk] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_when] = ACTIONS(1),
    [sym_decimal_range] = ACTIONS(1),
    [sym_dimensional_unit] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [aux_sym_hsl_token1] = ACTIONS(1),
    [aux_sym_hsv_token1] = ACTIONS(1),
    [sym_multi_line_comment] = ACTIONS(1),
    [sym_negative_assertion] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [aux_sym_oklab_token1] = ACTIONS(1),
    [aux_sym_oklch_token1] = ACTIONS(1),
    [aux_sym_p3_token1] = ACTIONS(1),
    [sym_positive_assertion] = ACTIONS(1),
    [aux_sym_rec2020_token1] = ACTIONS(1),
    [aux_sym_rgb_token1] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_tokens] = ACTIONS(1),
    [aux_sym_tokens_block_token1] = ACTIONS(1),
    [aux_sym_tokens_block_token2] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_text] = ACTIONS(1),
    [anon_sym_color] = ACTIONS(1),
    [anon_sym_asset] = ACTIONS(1),
    [anon_sym_switch] = ACTIONS(1),
    [anon_sym_dimension] = ACTIONS(1),
    [anon_sym_range] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(78),
    [sym_tokens_block] = STATE(23),
    [aux_sym_source_file_repeat1] = STATE(23),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_multi_line_comment] = ACTIONS(5),
    [sym_single_line_comment] = ACTIONS(5),
    [anon_sym_tokens] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 16,
    ACTIONS(9), 1,
      aux_sym__string_token1,
    ACTIONS(11), 1,
      aux_sym_a98rgb_token1,
    ACTIONS(13), 1,
      sym_asset_path,
    ACTIONS(15), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      aux_sym_hsl_token1,
    ACTIONS(19), 1,
      aux_sym_hsv_token1,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(23), 1,
      sym_number,
    ACTIONS(25), 1,
      aux_sym_oklab_token1,
    ACTIONS(27), 1,
      aux_sym_oklch_token1,
    ACTIONS(29), 1,
      aux_sym_p3_token1,
    ACTIONS(31), 1,
      aux_sym_rec2020_token1,
    ACTIONS(33), 1,
      aux_sym_rgb_token1,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    STATE(82), 1,
      sym_token_value,
    STATE(104), 13,
      sym__string,
      sym_a98rgb,
      sym_dimension,
      sym_hex,
      sym_hsl,
      sym_hsv,
      sym_oklab,
      sym_oklch,
      sym_p3,
      sym_rec2020,
      sym_rgb,
      sym_switch,
      sym_token_reference,
  [61] = 16,
    ACTIONS(9), 1,
      aux_sym__string_token1,
    ACTIONS(11), 1,
      aux_sym_a98rgb_token1,
    ACTIONS(13), 1,
      sym_asset_path,
    ACTIONS(15), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      aux_sym_hsl_token1,
    ACTIONS(19), 1,
      aux_sym_hsv_token1,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(23), 1,
      sym_number,
    ACTIONS(25), 1,
      aux_sym_oklab_token1,
    ACTIONS(27), 1,
      aux_sym_oklch_token1,
    ACTIONS(29), 1,
      aux_sym_p3_token1,
    ACTIONS(31), 1,
      aux_sym_rec2020_token1,
    ACTIONS(33), 1,
      aux_sym_rgb_token1,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    STATE(88), 1,
      sym_token_value,
    STATE(104), 13,
      sym__string,
      sym_a98rgb,
      sym_dimension,
      sym_hex,
      sym_hsl,
      sym_hsv,
      sym_oklab,
      sym_oklch,
      sym_p3,
      sym_rec2020,
      sym_rgb,
      sym_switch,
      sym_token_reference,
  [122] = 7,
    ACTIONS(37), 1,
      anon_sym_RBRACE,
    ACTIONS(39), 1,
      anon_sym_when,
    ACTIONS(41), 1,
      sym_identifier,
    STATE(143), 1,
      sym_token_declaration,
    STATE(146), 1,
      sym_token_type,
    STATE(9), 3,
      aux_sym__token_body,
      sym_child_token_block,
      sym_conditional_token_block,
    ACTIONS(43), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [151] = 7,
    ACTIONS(39), 1,
      anon_sym_when,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(45), 1,
      anon_sym_RBRACE,
    STATE(143), 1,
      sym_token_declaration,
    STATE(146), 1,
      sym_token_type,
    STATE(9), 3,
      aux_sym__token_body,
      sym_child_token_block,
      sym_conditional_token_block,
    ACTIONS(43), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [180] = 7,
    ACTIONS(47), 1,
      anon_sym_when,
    ACTIONS(50), 1,
      sym_identifier,
    ACTIONS(53), 1,
      aux_sym_tokens_block_token2,
    STATE(146), 1,
      sym_token_type,
    STATE(147), 1,
      sym_token_declaration,
    STATE(6), 3,
      aux_sym__token_body,
      sym_child_token_block,
      sym_conditional_token_block,
    ACTIONS(55), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [209] = 7,
    ACTIONS(58), 1,
      anon_sym_when,
    ACTIONS(60), 1,
      sym_identifier,
    ACTIONS(62), 1,
      aux_sym_tokens_block_token2,
    STATE(146), 1,
      sym_token_type,
    STATE(147), 1,
      sym_token_declaration,
    STATE(6), 3,
      aux_sym__token_body,
      sym_child_token_block,
      sym_conditional_token_block,
    ACTIONS(43), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [238] = 7,
    ACTIONS(58), 1,
      anon_sym_when,
    ACTIONS(60), 1,
      sym_identifier,
    ACTIONS(64), 1,
      aux_sym_tokens_block_token2,
    STATE(146), 1,
      sym_token_type,
    STATE(147), 1,
      sym_token_declaration,
    STATE(6), 3,
      aux_sym__token_body,
      sym_child_token_block,
      sym_conditional_token_block,
    ACTIONS(43), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [267] = 7,
    ACTIONS(53), 1,
      anon_sym_RBRACE,
    ACTIONS(66), 1,
      anon_sym_when,
    ACTIONS(69), 1,
      sym_identifier,
    STATE(143), 1,
      sym_token_declaration,
    STATE(146), 1,
      sym_token_type,
    STATE(9), 3,
      aux_sym__token_body,
      sym_child_token_block,
      sym_conditional_token_block,
    ACTIONS(55), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [296] = 6,
    ACTIONS(58), 1,
      anon_sym_when,
    ACTIONS(60), 1,
      sym_identifier,
    STATE(146), 1,
      sym_token_type,
    STATE(147), 1,
      sym_token_declaration,
    STATE(8), 3,
      aux_sym__token_body,
      sym_child_token_block,
      sym_conditional_token_block,
    ACTIONS(43), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [322] = 6,
    ACTIONS(39), 1,
      anon_sym_when,
    ACTIONS(41), 1,
      sym_identifier,
    STATE(143), 1,
      sym_token_declaration,
    STATE(146), 1,
      sym_token_type,
    STATE(4), 3,
      aux_sym__token_body,
      sym_child_token_block,
      sym_conditional_token_block,
    ACTIONS(43), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [348] = 6,
    ACTIONS(58), 1,
      anon_sym_when,
    ACTIONS(60), 1,
      sym_identifier,
    STATE(146), 1,
      sym_token_type,
    STATE(147), 1,
      sym_token_declaration,
    STATE(7), 3,
      aux_sym__token_body,
      sym_child_token_block,
      sym_conditional_token_block,
    ACTIONS(43), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [374] = 6,
    ACTIONS(39), 1,
      anon_sym_when,
    ACTIONS(41), 1,
      sym_identifier,
    STATE(143), 1,
      sym_token_declaration,
    STATE(146), 1,
      sym_token_type,
    STATE(5), 3,
      aux_sym__token_body,
      sym_child_token_block,
      sym_conditional_token_block,
    ACTIONS(43), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [400] = 2,
    ACTIONS(74), 1,
      aux_sym_tokens_block_token2,
    ACTIONS(72), 8,
      anon_sym_when,
      sym_identifier,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [414] = 2,
    ACTIONS(53), 1,
      anon_sym_RBRACE,
    ACTIONS(76), 8,
      anon_sym_when,
      sym_identifier,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [428] = 2,
    ACTIONS(80), 1,
      aux_sym_tokens_block_token2,
    ACTIONS(78), 8,
      anon_sym_when,
      sym_identifier,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [442] = 2,
    ACTIONS(74), 1,
      anon_sym_RBRACE,
    ACTIONS(72), 8,
      anon_sym_when,
      sym_identifier,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [456] = 2,
    ACTIONS(84), 1,
      aux_sym_tokens_block_token2,
    ACTIONS(82), 8,
      anon_sym_when,
      sym_identifier,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [470] = 2,
    ACTIONS(80), 1,
      anon_sym_RBRACE,
    ACTIONS(78), 8,
      anon_sym_when,
      sym_identifier,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [484] = 2,
    ACTIONS(84), 1,
      anon_sym_RBRACE,
    ACTIONS(82), 8,
      anon_sym_when,
      sym_identifier,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [498] = 2,
    ACTIONS(53), 1,
      aux_sym_tokens_block_token2,
    ACTIONS(76), 8,
      anon_sym_when,
      sym_identifier,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [512] = 4,
    ACTIONS(86), 1,
      ts_builtin_sym_end,
    ACTIONS(91), 1,
      anon_sym_tokens,
    ACTIONS(88), 2,
      sym_multi_line_comment,
      sym_single_line_comment,
    STATE(22), 2,
      sym_tokens_block,
      aux_sym_source_file_repeat1,
  [527] = 4,
    ACTIONS(7), 1,
      anon_sym_tokens,
    ACTIONS(94), 1,
      ts_builtin_sym_end,
    ACTIONS(96), 2,
      sym_multi_line_comment,
      sym_single_line_comment,
    STATE(22), 2,
      sym_tokens_block,
      aux_sym_source_file_repeat1,
  [542] = 1,
    ACTIONS(98), 4,
      ts_builtin_sym_end,
      sym_multi_line_comment,
      sym_single_line_comment,
      anon_sym_tokens,
  [549] = 1,
    ACTIONS(100), 4,
      ts_builtin_sym_end,
      sym_multi_line_comment,
      sym_single_line_comment,
      anon_sym_tokens,
  [556] = 4,
    ACTIONS(102), 1,
      anon_sym_RBRACE,
    ACTIONS(104), 1,
      sym_identifier,
    STATE(30), 1,
      aux_sym_conditional_token_block_repeat1,
    STATE(68), 1,
      sym_token_assignment,
  [569] = 4,
    ACTIONS(104), 1,
      sym_identifier,
    ACTIONS(106), 1,
      anon_sym_RBRACE,
    STATE(28), 1,
      aux_sym_conditional_token_block_repeat1,
    STATE(68), 1,
      sym_token_assignment,
  [582] = 4,
    ACTIONS(104), 1,
      sym_identifier,
    ACTIONS(108), 1,
      anon_sym_RBRACE,
    STATE(30), 1,
      aux_sym_conditional_token_block_repeat1,
    STATE(68), 1,
      sym_token_assignment,
  [595] = 2,
    ACTIONS(112), 1,
      aux_sym_hex_token4,
    ACTIONS(110), 3,
      aux_sym_hex_token1,
      aux_sym_hex_token2,
      aux_sym_hex_token3,
  [604] = 4,
    ACTIONS(114), 1,
      anon_sym_RBRACE,
    ACTIONS(116), 1,
      sym_identifier,
    STATE(30), 1,
      aux_sym_conditional_token_block_repeat1,
    STATE(68), 1,
      sym_token_assignment,
  [617] = 4,
    ACTIONS(104), 1,
      sym_identifier,
    ACTIONS(119), 1,
      anon_sym_RBRACE,
    STATE(26), 1,
      aux_sym_conditional_token_block_repeat1,
    STATE(68), 1,
      sym_token_assignment,
  [630] = 3,
    ACTIONS(121), 1,
      sym__newlines,
    ACTIONS(123), 1,
      anon_sym_COMMA,
    ACTIONS(125), 1,
      sym_asterisk,
  [640] = 3,
    ACTIONS(127), 1,
      sym__newlines,
    ACTIONS(129), 1,
      anon_sym_COMMA,
    STATE(36), 1,
      aux_sym_switch_repeat1,
  [650] = 3,
    ACTIONS(129), 1,
      anon_sym_COMMA,
    ACTIONS(131), 1,
      sym__newlines,
    STATE(36), 1,
      aux_sym_switch_repeat1,
  [660] = 3,
    ACTIONS(133), 1,
      anon_sym_COMMA,
    ACTIONS(135), 1,
      sym_asterisk,
    STATE(33), 1,
      aux_sym_switch_repeat1,
  [670] = 3,
    ACTIONS(121), 1,
      sym__newlines,
    ACTIONS(137), 1,
      anon_sym_COMMA,
    STATE(36), 1,
      aux_sym_switch_repeat1,
  [680] = 1,
    ACTIONS(114), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [685] = 2,
    ACTIONS(140), 1,
      anon_sym_COMMA,
    ACTIONS(142), 1,
      anon_sym_RPAREN,
  [692] = 2,
    ACTIONS(144), 1,
      anon_sym_COMMA,
    ACTIONS(146), 1,
      anon_sym_RPAREN,
  [699] = 2,
    ACTIONS(148), 1,
      anon_sym_COMMA,
    ACTIONS(150), 1,
      anon_sym_RPAREN,
  [706] = 2,
    ACTIONS(152), 1,
      anon_sym_COMMA,
    ACTIONS(154), 1,
      anon_sym_RPAREN,
  [713] = 2,
    ACTIONS(156), 1,
      sym__newlines,
    ACTIONS(158), 1,
      anon_sym_COMMA,
  [720] = 2,
    ACTIONS(160), 1,
      anon_sym_COMMA,
    ACTIONS(162), 1,
      anon_sym_RPAREN,
  [727] = 2,
    ACTIONS(164), 1,
      anon_sym_COMMA,
    ACTIONS(166), 1,
      anon_sym_RPAREN,
  [734] = 2,
    ACTIONS(168), 1,
      anon_sym_COMMA,
    ACTIONS(170), 1,
      anon_sym_RPAREN,
  [741] = 2,
    ACTIONS(172), 1,
      anon_sym_COMMA,
    ACTIONS(174), 1,
      anon_sym_RPAREN,
  [748] = 2,
    ACTIONS(176), 1,
      anon_sym_DOLLAR,
    STATE(53), 1,
      sym_token_reference,
  [755] = 2,
    ACTIONS(176), 1,
      anon_sym_DOLLAR,
    STATE(49), 1,
      sym_token_reference,
  [762] = 2,
    ACTIONS(178), 1,
      sym_negative_assertion,
    ACTIONS(180), 1,
      sym_positive_assertion,
  [769] = 2,
    ACTIONS(182), 1,
      sym_identifier,
    ACTIONS(184), 1,
      aux_sym_tokens_block_token1,
  [776] = 2,
    ACTIONS(133), 1,
      anon_sym_COMMA,
    STATE(34), 1,
      aux_sym_switch_repeat1,
  [783] = 2,
    ACTIONS(186), 1,
      sym_negative_assertion,
    ACTIONS(188), 1,
      sym_positive_assertion,
  [790] = 2,
    ACTIONS(190), 1,
      sym_negative_assertion,
    ACTIONS(192), 1,
      sym_positive_assertion,
  [797] = 1,
    ACTIONS(194), 1,
      sym_decimal_range,
  [801] = 1,
    ACTIONS(196), 1,
      sym_number,
  [805] = 1,
    ACTIONS(198), 1,
      anon_sym_COMMA,
  [809] = 1,
    ACTIONS(200), 1,
      sym__newlines,
  [813] = 1,
    ACTIONS(202), 1,
      anon_sym_COMMA,
  [817] = 1,
    ACTIONS(204), 1,
      anon_sym_COMMA,
  [821] = 1,
    ACTIONS(206), 1,
      sym_identifier,
  [825] = 1,
    ACTIONS(208), 1,
      sym__newlines,
  [829] = 1,
    ACTIONS(210), 1,
      anon_sym_COMMA,
  [833] = 1,
    ACTIONS(212), 1,
      anon_sym_COMMA,
  [837] = 1,
    ACTIONS(214), 1,
      anon_sym_COMMA,
  [841] = 1,
    ACTIONS(216), 1,
      anon_sym_COMMA,
  [845] = 1,
    ACTIONS(218), 1,
      anon_sym_COMMA,
  [849] = 1,
    ACTIONS(220), 1,
      anon_sym_COLON,
  [853] = 1,
    ACTIONS(222), 1,
      sym__newlines,
  [857] = 1,
    ACTIONS(224), 1,
      sym__newlines,
  [861] = 1,
    ACTIONS(226), 1,
      sym_decimal_range,
  [865] = 1,
    ACTIONS(228), 1,
      sym_number,
  [869] = 1,
    ACTIONS(230), 1,
      sym_number,
  [873] = 1,
    ACTIONS(232), 1,
      sym_decimal_range,
  [877] = 1,
    ACTIONS(234), 1,
      sym_decimal_range,
  [881] = 1,
    ACTIONS(236), 1,
      sym_decimal_range,
  [885] = 1,
    ACTIONS(238), 1,
      sym_decimal_range,
  [889] = 1,
    ACTIONS(240), 1,
      sym_number,
  [893] = 1,
    ACTIONS(242), 1,
      ts_builtin_sym_end,
  [897] = 1,
    ACTIONS(244), 1,
      anon_sym_COMMA,
  [901] = 1,
    ACTIONS(246), 1,
      anon_sym_COMMA,
  [905] = 1,
    ACTIONS(248), 1,
      anon_sym_COMMA,
  [909] = 1,
    ACTIONS(250), 1,
      sym__newlines,
  [913] = 1,
    ACTIONS(252), 1,
      anon_sym_COMMA,
  [917] = 1,
    ACTIONS(254), 1,
      anon_sym_COMMA,
  [921] = 1,
    ACTIONS(256), 1,
      anon_sym_COMMA,
  [925] = 1,
    ACTIONS(258), 1,
      anon_sym_COMMA,
  [929] = 1,
    ACTIONS(260), 1,
      anon_sym_COMMA,
  [933] = 1,
    ACTIONS(262), 1,
      sym__newlines,
  [937] = 1,
    ACTIONS(264), 1,
      sym_decimal_range,
  [941] = 1,
    ACTIONS(266), 1,
      sym_number,
  [945] = 1,
    ACTIONS(268), 1,
      sym_number,
  [949] = 1,
    ACTIONS(270), 1,
      sym_decimal_range,
  [953] = 1,
    ACTIONS(272), 1,
      sym_number,
  [957] = 1,
    ACTIONS(274), 1,
      sym_decimal_range,
  [961] = 1,
    ACTIONS(276), 1,
      sym_decimal_range,
  [965] = 1,
    ACTIONS(278), 1,
      sym_number,
  [969] = 1,
    ACTIONS(280), 1,
      sym_number,
  [973] = 1,
    ACTIONS(282), 1,
      sym_decimal_range,
  [977] = 1,
    ACTIONS(284), 1,
      sym_decimal_range,
  [981] = 1,
    ACTIONS(286), 1,
      sym_decimal_range,
  [985] = 1,
    ACTIONS(288), 1,
      sym_dimensional_unit,
  [989] = 1,
    ACTIONS(290), 1,
      sym_number,
  [993] = 1,
    ACTIONS(292), 1,
      aux_sym__string_token1,
  [997] = 1,
    ACTIONS(294), 1,
      sym__newlines,
  [1001] = 1,
    ACTIONS(296), 1,
      sym_decimal_range,
  [1005] = 1,
    ACTIONS(298), 1,
      sym__newlines,
  [1009] = 1,
    ACTIONS(300), 1,
      sym_decimal_range,
  [1013] = 1,
    ACTIONS(302), 1,
      sym__newlines,
  [1017] = 1,
    ACTIONS(304), 1,
      sym_decimal_range,
  [1021] = 1,
    ACTIONS(306), 1,
      sym__newlines,
  [1025] = 1,
    ACTIONS(308), 1,
      sym_decimal_range,
  [1029] = 1,
    ACTIONS(310), 1,
      sym__newlines,
  [1033] = 1,
    ACTIONS(312), 1,
      sym_decimal_range,
  [1037] = 1,
    ACTIONS(314), 1,
      sym__newlines,
  [1041] = 1,
    ACTIONS(316), 1,
      sym_decimal_range,
  [1045] = 1,
    ACTIONS(318), 1,
      sym__newlines,
  [1049] = 1,
    ACTIONS(320), 1,
      sym_decimal_range,
  [1053] = 1,
    ACTIONS(322), 1,
      sym__newlines,
  [1057] = 1,
    ACTIONS(324), 1,
      sym_decimal_range,
  [1061] = 1,
    ACTIONS(326), 1,
      sym__newlines,
  [1065] = 1,
    ACTIONS(328), 1,
      anon_sym_RPAREN,
  [1069] = 1,
    ACTIONS(330), 1,
      anon_sym_RPAREN,
  [1073] = 1,
    ACTIONS(332), 1,
      anon_sym_RPAREN,
  [1077] = 1,
    ACTIONS(334), 1,
      anon_sym_RPAREN,
  [1081] = 1,
    ACTIONS(336), 1,
      anon_sym_RPAREN,
  [1085] = 1,
    ACTIONS(338), 1,
      anon_sym_RPAREN,
  [1089] = 1,
    ACTIONS(340), 1,
      anon_sym_RPAREN,
  [1093] = 1,
    ACTIONS(342), 1,
      anon_sym_RPAREN,
  [1097] = 1,
    ACTIONS(344), 1,
      sym__newlines,
  [1101] = 1,
    ACTIONS(346), 1,
      sym__newlines,
  [1105] = 1,
    ACTIONS(348), 1,
      sym__newlines,
  [1109] = 1,
    ACTIONS(350), 1,
      sym__newlines,
  [1113] = 1,
    ACTIONS(352), 1,
      sym__newlines,
  [1117] = 1,
    ACTIONS(354), 1,
      sym__newlines,
  [1121] = 1,
    ACTIONS(356), 1,
      sym__newlines,
  [1125] = 1,
    ACTIONS(358), 1,
      sym__newlines,
  [1129] = 1,
    ACTIONS(360), 1,
      sym_decimal_range,
  [1133] = 1,
    ACTIONS(362), 1,
      sym_string,
  [1137] = 1,
    ACTIONS(186), 1,
      sym__newlines,
  [1141] = 1,
    ACTIONS(364), 1,
      anon_sym_LBRACE,
  [1145] = 1,
    ACTIONS(366), 1,
      sym_identifier,
  [1149] = 1,
    ACTIONS(368), 1,
      anon_sym_COLON,
  [1153] = 1,
    ACTIONS(370), 1,
      sym__newlines,
  [1157] = 1,
    ACTIONS(372), 1,
      sym_ref_identifier,
  [1161] = 1,
    ACTIONS(374), 1,
      sym_ref_identifier,
  [1165] = 1,
    ACTIONS(376), 1,
      sym_identifier,
  [1169] = 1,
    ACTIONS(378), 1,
      sym__newlines,
  [1173] = 1,
    ACTIONS(380), 1,
      sym_identifier,
  [1177] = 1,
    ACTIONS(382), 1,
      anon_sym_LBRACE,
  [1181] = 1,
    ACTIONS(384), 1,
      anon_sym_LBRACE,
  [1185] = 1,
    ACTIONS(386), 1,
      sym_identifier,
  [1189] = 1,
    ACTIONS(388), 1,
      anon_sym_LBRACE,
  [1193] = 1,
    ACTIONS(390), 1,
      aux_sym_tokens_block_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 61,
  [SMALL_STATE(4)] = 122,
  [SMALL_STATE(5)] = 151,
  [SMALL_STATE(6)] = 180,
  [SMALL_STATE(7)] = 209,
  [SMALL_STATE(8)] = 238,
  [SMALL_STATE(9)] = 267,
  [SMALL_STATE(10)] = 296,
  [SMALL_STATE(11)] = 322,
  [SMALL_STATE(12)] = 348,
  [SMALL_STATE(13)] = 374,
  [SMALL_STATE(14)] = 400,
  [SMALL_STATE(15)] = 414,
  [SMALL_STATE(16)] = 428,
  [SMALL_STATE(17)] = 442,
  [SMALL_STATE(18)] = 456,
  [SMALL_STATE(19)] = 470,
  [SMALL_STATE(20)] = 484,
  [SMALL_STATE(21)] = 498,
  [SMALL_STATE(22)] = 512,
  [SMALL_STATE(23)] = 527,
  [SMALL_STATE(24)] = 542,
  [SMALL_STATE(25)] = 549,
  [SMALL_STATE(26)] = 556,
  [SMALL_STATE(27)] = 569,
  [SMALL_STATE(28)] = 582,
  [SMALL_STATE(29)] = 595,
  [SMALL_STATE(30)] = 604,
  [SMALL_STATE(31)] = 617,
  [SMALL_STATE(32)] = 630,
  [SMALL_STATE(33)] = 640,
  [SMALL_STATE(34)] = 650,
  [SMALL_STATE(35)] = 660,
  [SMALL_STATE(36)] = 670,
  [SMALL_STATE(37)] = 680,
  [SMALL_STATE(38)] = 685,
  [SMALL_STATE(39)] = 692,
  [SMALL_STATE(40)] = 699,
  [SMALL_STATE(41)] = 706,
  [SMALL_STATE(42)] = 713,
  [SMALL_STATE(43)] = 720,
  [SMALL_STATE(44)] = 727,
  [SMALL_STATE(45)] = 734,
  [SMALL_STATE(46)] = 741,
  [SMALL_STATE(47)] = 748,
  [SMALL_STATE(48)] = 755,
  [SMALL_STATE(49)] = 762,
  [SMALL_STATE(50)] = 769,
  [SMALL_STATE(51)] = 776,
  [SMALL_STATE(52)] = 783,
  [SMALL_STATE(53)] = 790,
  [SMALL_STATE(54)] = 797,
  [SMALL_STATE(55)] = 801,
  [SMALL_STATE(56)] = 805,
  [SMALL_STATE(57)] = 809,
  [SMALL_STATE(58)] = 813,
  [SMALL_STATE(59)] = 817,
  [SMALL_STATE(60)] = 821,
  [SMALL_STATE(61)] = 825,
  [SMALL_STATE(62)] = 829,
  [SMALL_STATE(63)] = 833,
  [SMALL_STATE(64)] = 837,
  [SMALL_STATE(65)] = 841,
  [SMALL_STATE(66)] = 845,
  [SMALL_STATE(67)] = 849,
  [SMALL_STATE(68)] = 853,
  [SMALL_STATE(69)] = 857,
  [SMALL_STATE(70)] = 861,
  [SMALL_STATE(71)] = 865,
  [SMALL_STATE(72)] = 869,
  [SMALL_STATE(73)] = 873,
  [SMALL_STATE(74)] = 877,
  [SMALL_STATE(75)] = 881,
  [SMALL_STATE(76)] = 885,
  [SMALL_STATE(77)] = 889,
  [SMALL_STATE(78)] = 893,
  [SMALL_STATE(79)] = 897,
  [SMALL_STATE(80)] = 901,
  [SMALL_STATE(81)] = 905,
  [SMALL_STATE(82)] = 909,
  [SMALL_STATE(83)] = 913,
  [SMALL_STATE(84)] = 917,
  [SMALL_STATE(85)] = 921,
  [SMALL_STATE(86)] = 925,
  [SMALL_STATE(87)] = 929,
  [SMALL_STATE(88)] = 933,
  [SMALL_STATE(89)] = 937,
  [SMALL_STATE(90)] = 941,
  [SMALL_STATE(91)] = 945,
  [SMALL_STATE(92)] = 949,
  [SMALL_STATE(93)] = 953,
  [SMALL_STATE(94)] = 957,
  [SMALL_STATE(95)] = 961,
  [SMALL_STATE(96)] = 965,
  [SMALL_STATE(97)] = 969,
  [SMALL_STATE(98)] = 973,
  [SMALL_STATE(99)] = 977,
  [SMALL_STATE(100)] = 981,
  [SMALL_STATE(101)] = 985,
  [SMALL_STATE(102)] = 989,
  [SMALL_STATE(103)] = 993,
  [SMALL_STATE(104)] = 997,
  [SMALL_STATE(105)] = 1001,
  [SMALL_STATE(106)] = 1005,
  [SMALL_STATE(107)] = 1009,
  [SMALL_STATE(108)] = 1013,
  [SMALL_STATE(109)] = 1017,
  [SMALL_STATE(110)] = 1021,
  [SMALL_STATE(111)] = 1025,
  [SMALL_STATE(112)] = 1029,
  [SMALL_STATE(113)] = 1033,
  [SMALL_STATE(114)] = 1037,
  [SMALL_STATE(115)] = 1041,
  [SMALL_STATE(116)] = 1045,
  [SMALL_STATE(117)] = 1049,
  [SMALL_STATE(118)] = 1053,
  [SMALL_STATE(119)] = 1057,
  [SMALL_STATE(120)] = 1061,
  [SMALL_STATE(121)] = 1065,
  [SMALL_STATE(122)] = 1069,
  [SMALL_STATE(123)] = 1073,
  [SMALL_STATE(124)] = 1077,
  [SMALL_STATE(125)] = 1081,
  [SMALL_STATE(126)] = 1085,
  [SMALL_STATE(127)] = 1089,
  [SMALL_STATE(128)] = 1093,
  [SMALL_STATE(129)] = 1097,
  [SMALL_STATE(130)] = 1101,
  [SMALL_STATE(131)] = 1105,
  [SMALL_STATE(132)] = 1109,
  [SMALL_STATE(133)] = 1113,
  [SMALL_STATE(134)] = 1117,
  [SMALL_STATE(135)] = 1121,
  [SMALL_STATE(136)] = 1125,
  [SMALL_STATE(137)] = 1129,
  [SMALL_STATE(138)] = 1133,
  [SMALL_STATE(139)] = 1137,
  [SMALL_STATE(140)] = 1141,
  [SMALL_STATE(141)] = 1145,
  [SMALL_STATE(142)] = 1149,
  [SMALL_STATE(143)] = 1153,
  [SMALL_STATE(144)] = 1157,
  [SMALL_STATE(145)] = 1161,
  [SMALL_STATE(146)] = 1165,
  [SMALL_STATE(147)] = 1169,
  [SMALL_STATE(148)] = 1173,
  [SMALL_STATE(149)] = 1177,
  [SMALL_STATE(150)] = 1181,
  [SMALL_STATE(151)] = 1185,
  [SMALL_STATE(152)] = 1189,
  [SMALL_STATE(153)] = 1193,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__token_body, 2), SHIFT_REPEAT(47),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__token_body, 2), SHIFT_REPEAT(152),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__token_body, 2),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__token_body, 2), SHIFT_REPEAT(148),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__token_body, 2), SHIFT_REPEAT(48),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__token_body, 2), SHIFT_REPEAT(150),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional_token_block, 7),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_token_block, 7),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__token_body, 2),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_child_token_block, 4),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child_token_block, 4),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional_token_block, 6),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_token_block, 6),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(22),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(50),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tokens_block, 5),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tokens_block, 4),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conditional_token_block_repeat1, 2),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conditional_token_block_repeat1, 2), SHIFT_REPEAT(67),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_switch_repeat1, 2),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_switch_repeat1, 2),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch, 2),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch, 3),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [137] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_switch_repeat1, 2), SHIFT_REPEAT(60),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_switch_repeat1, 3),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_switch_repeat1, 3),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_token_reference, 2),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_token_reference, 2),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hex, 2),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dimension, 2),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string, 3),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [242] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_token_declaration, 4),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_token_assignment, 3),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_token_value, 1),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_a98rgb, 7, .production_id = 1),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hsl, 7, .production_id = 2),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hsv, 7, .production_id = 3),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oklab, 7, .production_id = 4),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oklch, 7, .production_id = 5),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_p3, 7, .production_id = 1),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rec2020, 7, .production_id = 1),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rgb, 7, .production_id = 1),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_a98rgb, 9, .production_id = 1),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hsl, 9, .production_id = 2),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hsv, 9, .production_id = 3),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oklab, 9, .production_id = 4),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oklch, 9, .production_id = 5),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_p3, 9, .production_id = 1),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rec2020, 9, .production_id = 1),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rgb, 9, .production_id = 1),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_token_type, 1),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
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
