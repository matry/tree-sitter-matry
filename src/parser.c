#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 167
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 70
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
  aux_sym_conditional_token_block_repeat2 = 68,
  aux_sym_switch_repeat1 = 69,
  alias_sym_a_channel = 70,
  alias_sym_b_channel = 71,
  alias_sym_blue_channel = 72,
  alias_sym_chroma_channel = 73,
  alias_sym_green_channel = 74,
  alias_sym_hue_channel = 75,
  alias_sym_lightness_channel = 76,
  alias_sym_red_channel = 77,
  alias_sym_saturation_channel = 78,
  alias_sym_value_channel = 79,
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
  [aux_sym_conditional_token_block_repeat2] = "conditional_token_block_repeat2",
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
  [aux_sym_conditional_token_block_repeat2] = aux_sym_conditional_token_block_repeat2,
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
  [aux_sym_conditional_token_block_repeat2] = {
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
  [5] = 5,
  [6] = 4,
  [7] = 7,
  [8] = 5,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 11,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 18,
  [20] = 16,
  [21] = 15,
  [22] = 17,
  [23] = 14,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 26,
  [33] = 33,
  [34] = 34,
  [35] = 30,
  [36] = 36,
  [37] = 37,
  [38] = 33,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 45,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 48,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 53,
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
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 40,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 155,
  [159] = 159,
  [160] = 154,
  [161] = 161,
  [162] = 152,
  [163] = 163,
  [164] = 163,
  [165] = 156,
  [166] = 166,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(110);
      if (lookahead == '"') ADVANCE(112);
      if (lookahead == '#') ADVANCE(130);
      if (lookahead == '$') ADVANCE(203);
      if (lookahead == '%') ADVANCE(129);
      if (lookahead == ')') ADVANCE(115);
      if (lookahead == '*') ADVANCE(117);
      if (lookahead == ',') ADVANCE(114);
      if (lookahead == '-') ADVANCE(99);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == '0') ADVANCE(124);
      if (lookahead == '1') ADVANCE(122);
      if (lookahead == ':') ADVANCE(199);
      if (lookahead == 'a') ADVANCE(25);
      if (lookahead == 'c') ADVANCE(94);
      if (lookahead == 'd') ADVANCE(53);
      if (lookahead == 'e') ADVANCE(97);
      if (lookahead == 'h') ADVANCE(78);
      if (lookahead == 'i') ADVANCE(64);
      if (lookahead == 'm') ADVANCE(61);
      if (lookahead == 'o') ADVANCE(56);
      if (lookahead == 'p') ADVANCE(22);
      if (lookahead == 'r') ADVANCE(27);
      if (lookahead == 's') ADVANCE(89);
      if (lookahead == 't') ADVANCE(37);
      if (lookahead == 'v') ADVANCE(96);
      if (lookahead == 'w') ADVANCE(47);
      if (lookahead == '{') ADVANCE(118);
      if (lookahead == '}') ADVANCE(119);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(187);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(111);
      if (lookahead == '*') ADVANCE(117);
      if (lookahead == ',') ADVANCE(114);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(112);
      if (lookahead == '#') ADVANCE(130);
      if (lookahead == '$') ADVANCE(203);
      if (lookahead == '-') ADVANCE(99);
      if (lookahead == '/') ADVANCE(108);
      if (lookahead == 'a') ADVANCE(26);
      if (lookahead == 'h') ADVANCE(81);
      if (lookahead == 'o') ADVANCE(55);
      if (lookahead == 'p') ADVANCE(23);
      if (lookahead == 'r') ADVANCE(39);
      if (lookahead == '{') ADVANCE(201);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(187);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 3:
      if (lookahead == '(') ADVANCE(191);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '(') ADVANCE(135);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '(') ADVANCE(136);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '(') ADVANCE(195);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '(') ADVANCE(189);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '(') ADVANCE(190);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '(') ADVANCE(113);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '(') ADVANCE(193);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '*') ADVANCE(14);
      if (lookahead == '/') ADVANCE(196);
      END_STATE();
    case 12:
      if (lookahead == '*') ADVANCE(14);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 13:
      if (lookahead == '*') ADVANCE(13);
      if (lookahead == '/') ADVANCE(185);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 14:
      if (lookahead == '*') ADVANCE(13);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == '0') ADVANCE(126);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(188);
      END_STATE();
    case 16:
      if (lookahead == '0') ADVANCE(123);
      if (lookahead == '1') ADVANCE(125);
      if (lookahead == 'a') ADVANCE(82);
      if (lookahead == 'c') ADVANCE(73);
      if (lookahead == 'd') ADVANCE(52);
      if (lookahead == 'r') ADVANCE(28);
      if (lookahead == 's') ADVANCE(90);
      if (lookahead == 't') ADVANCE(40);
      if (lookahead == 'w') ADVANCE(49);
      if (lookahead == '}') ADVANCE(119);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 17:
      if (lookahead == '0') ADVANCE(127);
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
          lookahead == 'x') ADVANCE(129);
      END_STATE();
    case 23:
      if (lookahead == '3') ADVANCE(137);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 24:
      if (lookahead == '8') ADVANCE(77);
      END_STATE();
    case 25:
      if (lookahead == '9') ADVANCE(24);
      if (lookahead == 's') ADVANCE(84);
      END_STATE();
    case 26:
      if (lookahead == '9') ADVANCE(149);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '8') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(65);
      if (lookahead == 'e') ADVANCE(35);
      if (lookahead == 'g') ADVANCE(32);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(172);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(91);
      if (lookahead == 'i') ADVANCE(63);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(82);
      if (lookahead == 'c') ADVANCE(73);
      if (lookahead == 'd') ADVANCE(52);
      if (lookahead == 'r') ADVANCE(28);
      if (lookahead == 's') ADVANCE(90);
      if (lookahead == 't') ADVANCE(40);
      if (lookahead == 'w') ADVANCE(49);
      if (lookahead == '}') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(30)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(106);
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
      if (lookahead == 'm') ADVANCE(129);
      END_STATE();
    case 36:
      if (lookahead == 'c') ADVANCE(48);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(92);
      if (lookahead == 'o') ADVANCE(57);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(214);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(154);
      if (lookahead == 'g') ADVANCE(151);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(183);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(87);
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
      if (lookahead == 'h') ADVANCE(210);
      END_STATE();
    case 49:
      if (lookahead == 'h') ADVANCE(157);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 50:
      if (lookahead == 'h') ADVANCE(8);
      END_STATE();
    case 51:
      if (lookahead == 'i') ADVANCE(85);
      END_STATE();
    case 52:
      if (lookahead == 'i') ADVANCE(169);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 53:
      if (lookahead == 'i') ADVANCE(62);
      if (lookahead == 'v') ADVANCE(95);
      END_STATE();
    case 54:
      if (lookahead == 'i') ADVANCE(75);
      END_STATE();
    case 55:
      if (lookahead == 'k') ADVANCE(166);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
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
      if (lookahead == 'm') ADVANCE(129);
      END_STATE();
    case 62:
      if (lookahead == 'm') ADVANCE(43);
      END_STATE();
    case 63:
      if (lookahead == 'n') ADVANCE(129);
      END_STATE();
    case 64:
      if (lookahead == 'n') ADVANCE(129);
      if (lookahead == 's') ADVANCE(192);
      END_STATE();
    case 65:
      if (lookahead == 'n') ADVANCE(45);
      END_STATE();
    case 66:
      if (lookahead == 'n') ADVANCE(120);
      END_STATE();
    case 67:
      if (lookahead == 'n') ADVANCE(212);
      END_STATE();
    case 68:
      if (lookahead == 'n') ADVANCE(74);
      END_STATE();
    case 69:
      if (lookahead == 'n') ADVANCE(83);
      END_STATE();
    case 70:
      if (lookahead == 'n') ADVANCE(80);
      END_STATE();
    case 71:
      if (lookahead == 'o') ADVANCE(57);
      END_STATE();
    case 72:
      if (lookahead == 'o') ADVANCE(76);
      END_STATE();
    case 73:
      if (lookahead == 'o') ADVANCE(167);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 74:
      if (lookahead == 'o') ADVANCE(88);
      END_STATE();
    case 75:
      if (lookahead == 'o') ADVANCE(67);
      END_STATE();
    case 76:
      if (lookahead == 'r') ADVANCE(206);
      END_STATE();
    case 77:
      if (lookahead == 'r') ADVANCE(46);
      END_STATE();
    case 78:
      if (lookahead == 's') ADVANCE(60);
      END_STATE();
    case 79:
      if (lookahead == 's') ADVANCE(192);
      END_STATE();
    case 80:
      if (lookahead == 's') ADVANCE(200);
      END_STATE();
    case 81:
      if (lookahead == 's') ADVANCE(168);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 82:
      if (lookahead == 's') ADVANCE(179);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 83:
      if (lookahead == 's') ADVANCE(54);
      END_STATE();
    case 84:
      if (lookahead == 's') ADVANCE(41);
      END_STATE();
    case 85:
      if (lookahead == 't') ADVANCE(36);
      END_STATE();
    case 86:
      if (lookahead == 't') ADVANCE(204);
      END_STATE();
    case 87:
      if (lookahead == 't') ADVANCE(208);
      END_STATE();
    case 88:
      if (lookahead == 't') ADVANCE(186);
      END_STATE();
    case 89:
      if (lookahead == 'w') ADVANCE(51);
      END_STATE();
    case 90:
      if (lookahead == 'w') ADVANCE(164);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 91:
      if (lookahead == 'x') ADVANCE(129);
      END_STATE();
    case 92:
      if (lookahead == 'x') ADVANCE(86);
      END_STATE();
    case 93:
      if (lookahead == '{') ADVANCE(201);
      if (lookahead == '}') ADVANCE(119);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(93)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 94:
      if (lookahead == 'h' ||
          lookahead == 'm') ADVANCE(129);
      if (lookahead == 'o') ADVANCE(58);
      END_STATE();
    case 95:
      if (lookahead == 'h' ||
          lookahead == 'w') ADVANCE(129);
      END_STATE();
    case 96:
      if (lookahead == 'h' ||
          lookahead == 'w') ADVANCE(129);
      if (lookahead == 'm') ADVANCE(29);
      END_STATE();
    case 97:
      if (lookahead == 'm' ||
          lookahead == 'x') ADVANCE(129);
      END_STATE();
    case 98:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(98)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 99:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(187);
      END_STATE();
    case 100:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      END_STATE();
    case 101:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(188);
      END_STATE();
    case 102:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(131);
      END_STATE();
    case 103:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(133);
      END_STATE();
    case 104:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(134);
      END_STATE();
    case 105:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(102);
      END_STATE();
    case 106:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 107:
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 108:
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 109:
      if (eof) ADVANCE(110);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == 'i') ADVANCE(79);
      if (lookahead == 't') ADVANCE(71);
      if (lookahead == '{') ADVANCE(118);
      if (lookahead == '}') ADVANCE(119);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(109)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(105);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym__newlines);
      if (lookahead == '\n') ADVANCE(111);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym__string_token1);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_a98rgb_token1);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_asset_path);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_asterisk);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_when);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_when);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_decimal_range);
      if (lookahead == '.') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(187);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_decimal_range);
      if (lookahead == '.') ADVANCE(100);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_decimal_range);
      if (lookahead == '.') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(187);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_decimal_range);
      if (lookahead == '.') ADVANCE(17);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_decimal_range);
      if (lookahead == '0') ADVANCE(126);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(188);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_decimal_range);
      if (lookahead == '0') ADVANCE(127);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_decimal_range);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_dimensional_unit);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_hex_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(132);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_hex_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(103);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_hex_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(104);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_hex_token4);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_hsl_token1);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_hsv_token1);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(191);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(135);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(4);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(136);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(5);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(195);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(6);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(189);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(7);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(190);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(8);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(113);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(9);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(193);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(10);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '0') ADVANCE(144);
      if (lookahead == '-' ||
          ('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '0') ADVANCE(148);
      if (lookahead == '-' ||
          ('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(146);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(145);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '8') ADVANCE(176);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(152);
      if (lookahead == 'c') ADVANCE(163);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(140);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(141);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(143);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(147);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(162);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(215);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(170);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(173);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(181);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(156);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(153);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(211);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(142);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(182);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(175);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(150);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(174);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(138);
      if (lookahead == 'v') ADVANCE(139);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(158);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(121);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(213);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(160);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(178);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(177);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(171);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(161);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(207);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(165);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(159);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(205);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(209);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(155);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(180);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_multi_line_comment);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_negative_assertion);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(187);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(188);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_oklab_token1);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_oklch_token1);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_p3_token1);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_positive_assertion);
      if (lookahead == ' ') ADVANCE(68);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_rec2020_token1);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_ref_identifier);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_rgb_token1);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_single_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(196);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(197);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\' &&
          lookahead != '^' &&
          lookahead != 'n') ADVANCE(198);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_string);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\' &&
          lookahead != '^' &&
          lookahead != 'n') ADVANCE(198);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_tokens);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_tokens_block_token1);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_tokens_block_token2);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_text);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_text);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_color);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_color);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_asset);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_asset);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_switch);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_switch);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_dimension);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_dimension);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_range);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_range);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 109},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 16},
  [5] = {.lex_state = 30},
  [6] = {.lex_state = 16},
  [7] = {.lex_state = 30},
  [8] = {.lex_state = 16},
  [9] = {.lex_state = 30},
  [10] = {.lex_state = 16},
  [11] = {.lex_state = 16},
  [12] = {.lex_state = 16},
  [13] = {.lex_state = 16},
  [14] = {.lex_state = 30},
  [15] = {.lex_state = 30},
  [16] = {.lex_state = 16},
  [17] = {.lex_state = 16},
  [18] = {.lex_state = 16},
  [19] = {.lex_state = 30},
  [20] = {.lex_state = 30},
  [21] = {.lex_state = 16},
  [22] = {.lex_state = 30},
  [23] = {.lex_state = 16},
  [24] = {.lex_state = 109},
  [25] = {.lex_state = 109},
  [26] = {.lex_state = 109},
  [27] = {.lex_state = 93},
  [28] = {.lex_state = 109},
  [29] = {.lex_state = 109},
  [30] = {.lex_state = 93},
  [31] = {.lex_state = 109},
  [32] = {.lex_state = 109},
  [33] = {.lex_state = 93},
  [34] = {.lex_state = 93},
  [35] = {.lex_state = 93},
  [36] = {.lex_state = 109},
  [37] = {.lex_state = 93},
  [38] = {.lex_state = 93},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 109},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 109},
  [46] = {.lex_state = 109},
  [47] = {.lex_state = 109},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 109},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 93},
  [55] = {.lex_state = 93},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 16},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 93},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 1},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 16},
  [78] = {.lex_state = 2},
  [79] = {.lex_state = 2},
  [80] = {.lex_state = 16},
  [81] = {.lex_state = 16},
  [82] = {.lex_state = 16},
  [83] = {.lex_state = 16},
  [84] = {.lex_state = 2},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 1},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 1},
  [99] = {.lex_state = 16},
  [100] = {.lex_state = 2},
  [101] = {.lex_state = 2},
  [102] = {.lex_state = 16},
  [103] = {.lex_state = 2},
  [104] = {.lex_state = 16},
  [105] = {.lex_state = 16},
  [106] = {.lex_state = 2},
  [107] = {.lex_state = 109},
  [108] = {.lex_state = 1},
  [109] = {.lex_state = 2},
  [110] = {.lex_state = 16},
  [111] = {.lex_state = 16},
  [112] = {.lex_state = 16},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 2},
  [115] = {.lex_state = 16},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 16},
  [118] = {.lex_state = 1},
  [119] = {.lex_state = 16},
  [120] = {.lex_state = 1},
  [121] = {.lex_state = 16},
  [122] = {.lex_state = 1},
  [123] = {.lex_state = 16},
  [124] = {.lex_state = 1},
  [125] = {.lex_state = 16},
  [126] = {.lex_state = 1},
  [127] = {.lex_state = 16},
  [128] = {.lex_state = 1},
  [129] = {.lex_state = 16},
  [130] = {.lex_state = 1},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 1},
  [140] = {.lex_state = 1},
  [141] = {.lex_state = 1},
  [142] = {.lex_state = 1},
  [143] = {.lex_state = 1},
  [144] = {.lex_state = 1},
  [145] = {.lex_state = 1},
  [146] = {.lex_state = 1},
  [147] = {.lex_state = 2},
  [148] = {.lex_state = 1},
  [149] = {.lex_state = 1},
  [150] = {.lex_state = 16},
  [151] = {.lex_state = 197},
  [152] = {.lex_state = 109},
  [153] = {.lex_state = 93},
  [154] = {.lex_state = 1},
  [155] = {.lex_state = 98},
  [156] = {.lex_state = 93},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 98},
  [159] = {.lex_state = 93},
  [160] = {.lex_state = 1},
  [161] = {.lex_state = 93},
  [162] = {.lex_state = 109},
  [163] = {.lex_state = 109},
  [164] = {.lex_state = 109},
  [165] = {.lex_state = 93},
  [166] = {.lex_state = 2},
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
    [sym_source_file] = STATE(85),
    [sym_tokens_block] = STATE(25),
    [aux_sym_source_file_repeat1] = STATE(25),
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
    STATE(98), 1,
      sym_token_value,
    STATE(148), 13,
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
    STATE(108), 1,
      sym_token_value,
    STATE(148), 13,
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
    STATE(154), 1,
      sym_token_declaration,
    STATE(159), 1,
      sym_token_type,
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
  [151] = 7,
    ACTIONS(45), 1,
      anon_sym_when,
    ACTIONS(48), 1,
      sym_identifier,
    ACTIONS(51), 1,
      aux_sym_tokens_block_token2,
    STATE(159), 1,
      sym_token_type,
    STATE(160), 1,
      sym_token_declaration,
    STATE(5), 3,
      aux_sym__token_body,
      sym_child_token_block,
      sym_conditional_token_block,
    ACTIONS(53), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [180] = 7,
    ACTIONS(39), 1,
      anon_sym_when,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(56), 1,
      anon_sym_RBRACE,
    STATE(154), 1,
      sym_token_declaration,
    STATE(159), 1,
      sym_token_type,
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
  [209] = 7,
    ACTIONS(58), 1,
      anon_sym_when,
    ACTIONS(60), 1,
      sym_identifier,
    ACTIONS(62), 1,
      aux_sym_tokens_block_token2,
    STATE(159), 1,
      sym_token_type,
    STATE(160), 1,
      sym_token_declaration,
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
  [238] = 7,
    ACTIONS(51), 1,
      anon_sym_RBRACE,
    ACTIONS(64), 1,
      anon_sym_when,
    ACTIONS(67), 1,
      sym_identifier,
    STATE(154), 1,
      sym_token_declaration,
    STATE(159), 1,
      sym_token_type,
    STATE(8), 3,
      aux_sym__token_body,
      sym_child_token_block,
      sym_conditional_token_block,
    ACTIONS(53), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [267] = 7,
    ACTIONS(58), 1,
      anon_sym_when,
    ACTIONS(60), 1,
      sym_identifier,
    ACTIONS(70), 1,
      aux_sym_tokens_block_token2,
    STATE(159), 1,
      sym_token_type,
    STATE(160), 1,
      sym_token_declaration,
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
  [296] = 6,
    ACTIONS(58), 1,
      anon_sym_when,
    ACTIONS(60), 1,
      sym_identifier,
    STATE(159), 1,
      sym_token_type,
    STATE(160), 1,
      sym_token_declaration,
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
  [322] = 6,
    ACTIONS(39), 1,
      anon_sym_when,
    ACTIONS(41), 1,
      sym_identifier,
    STATE(154), 1,
      sym_token_declaration,
    STATE(159), 1,
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
    STATE(159), 1,
      sym_token_type,
    STATE(160), 1,
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
    STATE(154), 1,
      sym_token_declaration,
    STATE(159), 1,
      sym_token_type,
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
    ACTIONS(78), 1,
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
  [428] = 2,
    ACTIONS(51), 1,
      anon_sym_RBRACE,
    ACTIONS(80), 8,
      anon_sym_when,
      sym_identifier,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [442] = 2,
    ACTIONS(82), 1,
      anon_sym_RBRACE,
    ACTIONS(84), 8,
      anon_sym_when,
      sym_identifier,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [456] = 2,
    ACTIONS(86), 1,
      anon_sym_RBRACE,
    ACTIONS(88), 8,
      anon_sym_when,
      sym_identifier,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [470] = 2,
    ACTIONS(86), 1,
      aux_sym_tokens_block_token2,
    ACTIONS(88), 8,
      anon_sym_when,
      sym_identifier,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [484] = 2,
    ACTIONS(51), 1,
      aux_sym_tokens_block_token2,
    ACTIONS(80), 8,
      anon_sym_when,
      sym_identifier,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [498] = 2,
    ACTIONS(78), 1,
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
  [512] = 2,
    ACTIONS(82), 1,
      aux_sym_tokens_block_token2,
    ACTIONS(84), 8,
      anon_sym_when,
      sym_identifier,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [526] = 2,
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
  [540] = 4,
    ACTIONS(90), 1,
      ts_builtin_sym_end,
    ACTIONS(95), 1,
      anon_sym_tokens,
    ACTIONS(92), 2,
      sym_multi_line_comment,
      sym_single_line_comment,
    STATE(24), 2,
      sym_tokens_block,
      aux_sym_source_file_repeat1,
  [555] = 4,
    ACTIONS(7), 1,
      anon_sym_tokens,
    ACTIONS(98), 1,
      ts_builtin_sym_end,
    ACTIONS(100), 2,
      sym_multi_line_comment,
      sym_single_line_comment,
    STATE(24), 2,
      sym_tokens_block,
      aux_sym_source_file_repeat1,
  [570] = 4,
    ACTIONS(102), 1,
      anon_sym_RBRACE,
    ACTIONS(104), 1,
      sym_negative_assertion,
    ACTIONS(106), 1,
      sym_positive_assertion,
    STATE(31), 1,
      aux_sym_conditional_token_block_repeat2,
  [583] = 4,
    ACTIONS(108), 1,
      anon_sym_RBRACE,
    ACTIONS(110), 1,
      sym_identifier,
    STATE(27), 1,
      aux_sym_conditional_token_block_repeat1,
    STATE(75), 1,
      sym_token_assignment,
  [596] = 1,
    ACTIONS(113), 4,
      ts_builtin_sym_end,
      sym_multi_line_comment,
      sym_single_line_comment,
      anon_sym_tokens,
  [603] = 1,
    ACTIONS(115), 4,
      ts_builtin_sym_end,
      sym_multi_line_comment,
      sym_single_line_comment,
      anon_sym_tokens,
  [610] = 4,
    ACTIONS(117), 1,
      anon_sym_RBRACE,
    ACTIONS(119), 1,
      sym_identifier,
    STATE(38), 1,
      aux_sym_conditional_token_block_repeat1,
    STATE(75), 1,
      sym_token_assignment,
  [623] = 4,
    ACTIONS(121), 1,
      anon_sym_RBRACE,
    ACTIONS(123), 1,
      sym_negative_assertion,
    ACTIONS(126), 1,
      sym_positive_assertion,
    STATE(31), 1,
      aux_sym_conditional_token_block_repeat2,
  [636] = 4,
    ACTIONS(104), 1,
      sym_negative_assertion,
    ACTIONS(106), 1,
      sym_positive_assertion,
    ACTIONS(129), 1,
      anon_sym_RBRACE,
    STATE(31), 1,
      aux_sym_conditional_token_block_repeat2,
  [649] = 4,
    ACTIONS(119), 1,
      sym_identifier,
    ACTIONS(131), 1,
      anon_sym_RBRACE,
    STATE(27), 1,
      aux_sym_conditional_token_block_repeat1,
    STATE(75), 1,
      sym_token_assignment,
  [662] = 4,
    ACTIONS(119), 1,
      sym_identifier,
    ACTIONS(133), 1,
      anon_sym_RBRACE,
    STATE(37), 1,
      aux_sym_conditional_token_block_repeat1,
    STATE(75), 1,
      sym_token_assignment,
  [675] = 4,
    ACTIONS(119), 1,
      sym_identifier,
    ACTIONS(135), 1,
      anon_sym_RBRACE,
    STATE(33), 1,
      aux_sym_conditional_token_block_repeat1,
    STATE(75), 1,
      sym_token_assignment,
  [688] = 2,
    ACTIONS(139), 1,
      aux_sym_hex_token4,
    ACTIONS(137), 3,
      aux_sym_hex_token1,
      aux_sym_hex_token2,
      aux_sym_hex_token3,
  [697] = 4,
    ACTIONS(119), 1,
      sym_identifier,
    ACTIONS(141), 1,
      anon_sym_RBRACE,
    STATE(27), 1,
      aux_sym_conditional_token_block_repeat1,
    STATE(75), 1,
      sym_token_assignment,
  [710] = 4,
    ACTIONS(119), 1,
      sym_identifier,
    ACTIONS(143), 1,
      anon_sym_RBRACE,
    STATE(27), 1,
      aux_sym_conditional_token_block_repeat1,
    STATE(75), 1,
      sym_token_assignment,
  [723] = 3,
    ACTIONS(145), 1,
      anon_sym_COMMA,
    ACTIONS(147), 1,
      sym_asterisk,
    STATE(43), 1,
      aux_sym_switch_repeat1,
  [733] = 2,
    ACTIONS(151), 1,
      sym_positive_assertion,
    ACTIONS(149), 2,
      anon_sym_LBRACE,
      sym_negative_assertion,
  [741] = 3,
    ACTIONS(153), 1,
      sym__newlines,
    ACTIONS(155), 1,
      anon_sym_COMMA,
    STATE(41), 1,
      aux_sym_switch_repeat1,
  [751] = 3,
    ACTIONS(158), 1,
      sym__newlines,
    ACTIONS(160), 1,
      anon_sym_COMMA,
    STATE(41), 1,
      aux_sym_switch_repeat1,
  [761] = 3,
    ACTIONS(160), 1,
      anon_sym_COMMA,
    ACTIONS(162), 1,
      sym__newlines,
    STATE(41), 1,
      aux_sym_switch_repeat1,
  [771] = 3,
    ACTIONS(153), 1,
      sym__newlines,
    ACTIONS(164), 1,
      anon_sym_COMMA,
    ACTIONS(166), 1,
      sym_asterisk,
  [781] = 3,
    ACTIONS(168), 1,
      anon_sym_LBRACE,
    ACTIONS(170), 1,
      sym_negative_assertion,
    ACTIONS(172), 1,
      sym_positive_assertion,
  [791] = 3,
    ACTIONS(174), 1,
      anon_sym_LBRACE,
    ACTIONS(176), 1,
      sym_negative_assertion,
    ACTIONS(178), 1,
      sym_positive_assertion,
  [801] = 2,
    ACTIONS(182), 1,
      sym_positive_assertion,
    ACTIONS(180), 2,
      anon_sym_RBRACE,
      sym_negative_assertion,
  [809] = 3,
    ACTIONS(104), 1,
      sym_negative_assertion,
    ACTIONS(106), 1,
      sym_positive_assertion,
    STATE(26), 1,
      aux_sym_conditional_token_block_repeat2,
  [819] = 2,
    ACTIONS(186), 1,
      sym_positive_assertion,
    ACTIONS(184), 2,
      anon_sym_RBRACE,
      sym_negative_assertion,
  [827] = 3,
    ACTIONS(104), 1,
      sym_negative_assertion,
    ACTIONS(106), 1,
      sym_positive_assertion,
    STATE(32), 1,
      aux_sym_conditional_token_block_repeat2,
  [837] = 2,
    ACTIONS(188), 1,
      anon_sym_COMMA,
    ACTIONS(190), 1,
      anon_sym_RPAREN,
  [844] = 2,
    ACTIONS(192), 1,
      sym__newlines,
    ACTIONS(194), 1,
      anon_sym_COMMA,
  [851] = 2,
    ACTIONS(196), 1,
      anon_sym_DOLLAR,
    STATE(45), 1,
      sym_token_reference,
  [858] = 1,
    ACTIONS(108), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [863] = 2,
    ACTIONS(198), 1,
      sym_identifier,
    ACTIONS(200), 1,
      aux_sym_tokens_block_token1,
  [870] = 2,
    ACTIONS(202), 1,
      anon_sym_COMMA,
    ACTIONS(204), 1,
      anon_sym_RPAREN,
  [877] = 2,
    ACTIONS(145), 1,
      anon_sym_COMMA,
    STATE(42), 1,
      aux_sym_switch_repeat1,
  [884] = 2,
    ACTIONS(206), 1,
      anon_sym_COMMA,
    ACTIONS(208), 1,
      anon_sym_RPAREN,
  [891] = 2,
    ACTIONS(210), 1,
      anon_sym_COMMA,
    ACTIONS(212), 1,
      anon_sym_RPAREN,
  [898] = 2,
    ACTIONS(214), 1,
      anon_sym_COMMA,
    ACTIONS(216), 1,
      anon_sym_RPAREN,
  [905] = 2,
    ACTIONS(218), 1,
      anon_sym_COMMA,
    ACTIONS(220), 1,
      anon_sym_RPAREN,
  [912] = 2,
    ACTIONS(222), 1,
      anon_sym_COMMA,
    ACTIONS(224), 1,
      anon_sym_RPAREN,
  [919] = 2,
    ACTIONS(196), 1,
      anon_sym_DOLLAR,
    STATE(46), 1,
      sym_token_reference,
  [926] = 2,
    ACTIONS(226), 1,
      anon_sym_COMMA,
    ACTIONS(228), 1,
      anon_sym_RPAREN,
  [933] = 1,
    ACTIONS(230), 1,
      sym_decimal_range,
  [937] = 1,
    ACTIONS(232), 1,
      sym__newlines,
  [941] = 1,
    ACTIONS(234), 1,
      sym_identifier,
  [945] = 1,
    ACTIONS(236), 1,
      sym__newlines,
  [949] = 1,
    ACTIONS(238), 1,
      anon_sym_COMMA,
  [953] = 1,
    ACTIONS(240), 1,
      anon_sym_COMMA,
  [957] = 1,
    ACTIONS(242), 1,
      anon_sym_COMMA,
  [961] = 1,
    ACTIONS(244), 1,
      anon_sym_COMMA,
  [965] = 1,
    ACTIONS(246), 1,
      anon_sym_COMMA,
  [969] = 1,
    ACTIONS(248), 1,
      anon_sym_COLON,
  [973] = 1,
    ACTIONS(250), 1,
      sym__newlines,
  [977] = 1,
    ACTIONS(252), 1,
      sym__newlines,
  [981] = 1,
    ACTIONS(254), 1,
      sym_decimal_range,
  [985] = 1,
    ACTIONS(256), 1,
      sym_number,
  [989] = 1,
    ACTIONS(258), 1,
      sym_number,
  [993] = 1,
    ACTIONS(260), 1,
      sym_decimal_range,
  [997] = 1,
    ACTIONS(262), 1,
      sym_decimal_range,
  [1001] = 1,
    ACTIONS(264), 1,
      sym_decimal_range,
  [1005] = 1,
    ACTIONS(266), 1,
      sym_decimal_range,
  [1009] = 1,
    ACTIONS(268), 1,
      sym_number,
  [1013] = 1,
    ACTIONS(270), 1,
      ts_builtin_sym_end,
  [1017] = 1,
    ACTIONS(272), 1,
      anon_sym_COMMA,
  [1021] = 1,
    ACTIONS(274), 1,
      sym__newlines,
  [1025] = 1,
    ACTIONS(276), 1,
      anon_sym_COMMA,
  [1029] = 1,
    ACTIONS(278), 1,
      anon_sym_COMMA,
  [1033] = 1,
    ACTIONS(280), 1,
      anon_sym_COMMA,
  [1037] = 1,
    ACTIONS(282), 1,
      anon_sym_COMMA,
  [1041] = 1,
    ACTIONS(284), 1,
      anon_sym_COMMA,
  [1045] = 1,
    ACTIONS(286), 1,
      anon_sym_COMMA,
  [1049] = 1,
    ACTIONS(288), 1,
      anon_sym_COMMA,
  [1053] = 1,
    ACTIONS(290), 1,
      anon_sym_COMMA,
  [1057] = 1,
    ACTIONS(292), 1,
      anon_sym_COMMA,
  [1061] = 1,
    ACTIONS(294), 1,
      aux_sym__string_token1,
  [1065] = 1,
    ACTIONS(296), 1,
      sym__newlines,
  [1069] = 1,
    ACTIONS(298), 1,
      sym_decimal_range,
  [1073] = 1,
    ACTIONS(300), 1,
      sym_number,
  [1077] = 1,
    ACTIONS(302), 1,
      sym_number,
  [1081] = 1,
    ACTIONS(304), 1,
      sym_decimal_range,
  [1085] = 1,
    ACTIONS(306), 1,
      sym_number,
  [1089] = 1,
    ACTIONS(308), 1,
      sym_decimal_range,
  [1093] = 1,
    ACTIONS(310), 1,
      sym_decimal_range,
  [1097] = 1,
    ACTIONS(312), 1,
      sym_number,
  [1101] = 1,
    ACTIONS(314), 1,
      anon_sym_LBRACE,
  [1105] = 1,
    ACTIONS(316), 1,
      sym__newlines,
  [1109] = 1,
    ACTIONS(318), 1,
      sym_number,
  [1113] = 1,
    ACTIONS(320), 1,
      sym_decimal_range,
  [1117] = 1,
    ACTIONS(322), 1,
      sym_decimal_range,
  [1121] = 1,
    ACTIONS(324), 1,
      sym_decimal_range,
  [1125] = 1,
    ACTIONS(326), 1,
      sym_dimensional_unit,
  [1129] = 1,
    ACTIONS(328), 1,
      sym_number,
  [1133] = 1,
    ACTIONS(330), 1,
      sym_decimal_range,
  [1137] = 1,
    ACTIONS(332), 1,
      anon_sym_COMMA,
  [1141] = 1,
    ACTIONS(334), 1,
      sym_decimal_range,
  [1145] = 1,
    ACTIONS(336), 1,
      sym__newlines,
  [1149] = 1,
    ACTIONS(338), 1,
      sym_decimal_range,
  [1153] = 1,
    ACTIONS(340), 1,
      sym__newlines,
  [1157] = 1,
    ACTIONS(342), 1,
      sym_decimal_range,
  [1161] = 1,
    ACTIONS(344), 1,
      sym__newlines,
  [1165] = 1,
    ACTIONS(346), 1,
      sym_decimal_range,
  [1169] = 1,
    ACTIONS(348), 1,
      sym__newlines,
  [1173] = 1,
    ACTIONS(350), 1,
      sym_decimal_range,
  [1177] = 1,
    ACTIONS(352), 1,
      sym__newlines,
  [1181] = 1,
    ACTIONS(354), 1,
      sym_decimal_range,
  [1185] = 1,
    ACTIONS(356), 1,
      sym__newlines,
  [1189] = 1,
    ACTIONS(358), 1,
      sym_decimal_range,
  [1193] = 1,
    ACTIONS(360), 1,
      sym__newlines,
  [1197] = 1,
    ACTIONS(362), 1,
      anon_sym_RPAREN,
  [1201] = 1,
    ACTIONS(364), 1,
      anon_sym_RPAREN,
  [1205] = 1,
    ACTIONS(366), 1,
      anon_sym_RPAREN,
  [1209] = 1,
    ACTIONS(368), 1,
      anon_sym_RPAREN,
  [1213] = 1,
    ACTIONS(370), 1,
      anon_sym_RPAREN,
  [1217] = 1,
    ACTIONS(372), 1,
      anon_sym_RPAREN,
  [1221] = 1,
    ACTIONS(374), 1,
      anon_sym_RPAREN,
  [1225] = 1,
    ACTIONS(376), 1,
      anon_sym_RPAREN,
  [1229] = 1,
    ACTIONS(378), 1,
      sym__newlines,
  [1233] = 1,
    ACTIONS(380), 1,
      sym__newlines,
  [1237] = 1,
    ACTIONS(382), 1,
      sym__newlines,
  [1241] = 1,
    ACTIONS(384), 1,
      sym__newlines,
  [1245] = 1,
    ACTIONS(386), 1,
      sym__newlines,
  [1249] = 1,
    ACTIONS(388), 1,
      sym__newlines,
  [1253] = 1,
    ACTIONS(390), 1,
      sym__newlines,
  [1257] = 1,
    ACTIONS(392), 1,
      sym__newlines,
  [1261] = 1,
    ACTIONS(394), 1,
      sym_number,
  [1265] = 1,
    ACTIONS(396), 1,
      sym__newlines,
  [1269] = 1,
    ACTIONS(149), 1,
      sym__newlines,
  [1273] = 1,
    ACTIONS(398), 1,
      sym_decimal_range,
  [1277] = 1,
    ACTIONS(400), 1,
      sym_string,
  [1281] = 1,
    ACTIONS(402), 1,
      anon_sym_LBRACE,
  [1285] = 1,
    ACTIONS(404), 1,
      sym_identifier,
  [1289] = 1,
    ACTIONS(406), 1,
      sym__newlines,
  [1293] = 1,
    ACTIONS(408), 1,
      sym_ref_identifier,
  [1297] = 1,
    ACTIONS(410), 1,
      sym_identifier,
  [1301] = 1,
    ACTIONS(412), 1,
      anon_sym_COLON,
  [1305] = 1,
    ACTIONS(414), 1,
      sym_ref_identifier,
  [1309] = 1,
    ACTIONS(416), 1,
      sym_identifier,
  [1313] = 1,
    ACTIONS(418), 1,
      sym__newlines,
  [1317] = 1,
    ACTIONS(420), 1,
      sym_identifier,
  [1321] = 1,
    ACTIONS(422), 1,
      anon_sym_LBRACE,
  [1325] = 1,
    ACTIONS(424), 1,
      anon_sym_LBRACE,
  [1329] = 1,
    ACTIONS(426), 1,
      anon_sym_LBRACE,
  [1333] = 1,
    ACTIONS(428), 1,
      sym_identifier,
  [1337] = 1,
    ACTIONS(430), 1,
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
  [SMALL_STATE(23)] = 526,
  [SMALL_STATE(24)] = 540,
  [SMALL_STATE(25)] = 555,
  [SMALL_STATE(26)] = 570,
  [SMALL_STATE(27)] = 583,
  [SMALL_STATE(28)] = 596,
  [SMALL_STATE(29)] = 603,
  [SMALL_STATE(30)] = 610,
  [SMALL_STATE(31)] = 623,
  [SMALL_STATE(32)] = 636,
  [SMALL_STATE(33)] = 649,
  [SMALL_STATE(34)] = 662,
  [SMALL_STATE(35)] = 675,
  [SMALL_STATE(36)] = 688,
  [SMALL_STATE(37)] = 697,
  [SMALL_STATE(38)] = 710,
  [SMALL_STATE(39)] = 723,
  [SMALL_STATE(40)] = 733,
  [SMALL_STATE(41)] = 741,
  [SMALL_STATE(42)] = 751,
  [SMALL_STATE(43)] = 761,
  [SMALL_STATE(44)] = 771,
  [SMALL_STATE(45)] = 781,
  [SMALL_STATE(46)] = 791,
  [SMALL_STATE(47)] = 801,
  [SMALL_STATE(48)] = 809,
  [SMALL_STATE(49)] = 819,
  [SMALL_STATE(50)] = 827,
  [SMALL_STATE(51)] = 837,
  [SMALL_STATE(52)] = 844,
  [SMALL_STATE(53)] = 851,
  [SMALL_STATE(54)] = 858,
  [SMALL_STATE(55)] = 863,
  [SMALL_STATE(56)] = 870,
  [SMALL_STATE(57)] = 877,
  [SMALL_STATE(58)] = 884,
  [SMALL_STATE(59)] = 891,
  [SMALL_STATE(60)] = 898,
  [SMALL_STATE(61)] = 905,
  [SMALL_STATE(62)] = 912,
  [SMALL_STATE(63)] = 919,
  [SMALL_STATE(64)] = 926,
  [SMALL_STATE(65)] = 933,
  [SMALL_STATE(66)] = 937,
  [SMALL_STATE(67)] = 941,
  [SMALL_STATE(68)] = 945,
  [SMALL_STATE(69)] = 949,
  [SMALL_STATE(70)] = 953,
  [SMALL_STATE(71)] = 957,
  [SMALL_STATE(72)] = 961,
  [SMALL_STATE(73)] = 965,
  [SMALL_STATE(74)] = 969,
  [SMALL_STATE(75)] = 973,
  [SMALL_STATE(76)] = 977,
  [SMALL_STATE(77)] = 981,
  [SMALL_STATE(78)] = 985,
  [SMALL_STATE(79)] = 989,
  [SMALL_STATE(80)] = 993,
  [SMALL_STATE(81)] = 997,
  [SMALL_STATE(82)] = 1001,
  [SMALL_STATE(83)] = 1005,
  [SMALL_STATE(84)] = 1009,
  [SMALL_STATE(85)] = 1013,
  [SMALL_STATE(86)] = 1017,
  [SMALL_STATE(87)] = 1021,
  [SMALL_STATE(88)] = 1025,
  [SMALL_STATE(89)] = 1029,
  [SMALL_STATE(90)] = 1033,
  [SMALL_STATE(91)] = 1037,
  [SMALL_STATE(92)] = 1041,
  [SMALL_STATE(93)] = 1045,
  [SMALL_STATE(94)] = 1049,
  [SMALL_STATE(95)] = 1053,
  [SMALL_STATE(96)] = 1057,
  [SMALL_STATE(97)] = 1061,
  [SMALL_STATE(98)] = 1065,
  [SMALL_STATE(99)] = 1069,
  [SMALL_STATE(100)] = 1073,
  [SMALL_STATE(101)] = 1077,
  [SMALL_STATE(102)] = 1081,
  [SMALL_STATE(103)] = 1085,
  [SMALL_STATE(104)] = 1089,
  [SMALL_STATE(105)] = 1093,
  [SMALL_STATE(106)] = 1097,
  [SMALL_STATE(107)] = 1101,
  [SMALL_STATE(108)] = 1105,
  [SMALL_STATE(109)] = 1109,
  [SMALL_STATE(110)] = 1113,
  [SMALL_STATE(111)] = 1117,
  [SMALL_STATE(112)] = 1121,
  [SMALL_STATE(113)] = 1125,
  [SMALL_STATE(114)] = 1129,
  [SMALL_STATE(115)] = 1133,
  [SMALL_STATE(116)] = 1137,
  [SMALL_STATE(117)] = 1141,
  [SMALL_STATE(118)] = 1145,
  [SMALL_STATE(119)] = 1149,
  [SMALL_STATE(120)] = 1153,
  [SMALL_STATE(121)] = 1157,
  [SMALL_STATE(122)] = 1161,
  [SMALL_STATE(123)] = 1165,
  [SMALL_STATE(124)] = 1169,
  [SMALL_STATE(125)] = 1173,
  [SMALL_STATE(126)] = 1177,
  [SMALL_STATE(127)] = 1181,
  [SMALL_STATE(128)] = 1185,
  [SMALL_STATE(129)] = 1189,
  [SMALL_STATE(130)] = 1193,
  [SMALL_STATE(131)] = 1197,
  [SMALL_STATE(132)] = 1201,
  [SMALL_STATE(133)] = 1205,
  [SMALL_STATE(134)] = 1209,
  [SMALL_STATE(135)] = 1213,
  [SMALL_STATE(136)] = 1217,
  [SMALL_STATE(137)] = 1221,
  [SMALL_STATE(138)] = 1225,
  [SMALL_STATE(139)] = 1229,
  [SMALL_STATE(140)] = 1233,
  [SMALL_STATE(141)] = 1237,
  [SMALL_STATE(142)] = 1241,
  [SMALL_STATE(143)] = 1245,
  [SMALL_STATE(144)] = 1249,
  [SMALL_STATE(145)] = 1253,
  [SMALL_STATE(146)] = 1257,
  [SMALL_STATE(147)] = 1261,
  [SMALL_STATE(148)] = 1265,
  [SMALL_STATE(149)] = 1269,
  [SMALL_STATE(150)] = 1273,
  [SMALL_STATE(151)] = 1277,
  [SMALL_STATE(152)] = 1281,
  [SMALL_STATE(153)] = 1285,
  [SMALL_STATE(154)] = 1289,
  [SMALL_STATE(155)] = 1293,
  [SMALL_STATE(156)] = 1297,
  [SMALL_STATE(157)] = 1301,
  [SMALL_STATE(158)] = 1305,
  [SMALL_STATE(159)] = 1309,
  [SMALL_STATE(160)] = 1313,
  [SMALL_STATE(161)] = 1317,
  [SMALL_STATE(162)] = 1321,
  [SMALL_STATE(163)] = 1325,
  [SMALL_STATE(164)] = 1329,
  [SMALL_STATE(165)] = 1333,
  [SMALL_STATE(166)] = 1337,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__token_body, 2), SHIFT_REPEAT(53),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__token_body, 2), SHIFT_REPEAT(164),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__token_body, 2),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__token_body, 2), SHIFT_REPEAT(161),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__token_body, 2), SHIFT_REPEAT(63),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__token_body, 2), SHIFT_REPEAT(163),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional_token_block, 5),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_token_block, 5),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional_token_block, 6),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_token_block, 6),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__token_body, 2),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child_token_block, 4),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_child_token_block, 4),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_token_block, 7),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional_token_block, 7),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(24),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(55),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conditional_token_block_repeat1, 2),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conditional_token_block_repeat1, 2), SHIFT_REPEAT(74),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tokens_block, 4),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tokens_block, 5),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conditional_token_block_repeat2, 2),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conditional_token_block_repeat2, 2), SHIFT_REPEAT(153),
  [126] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_conditional_token_block_repeat2, 2), SHIFT_REPEAT(153),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_token_reference, 2),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_token_reference, 2),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_switch_repeat1, 2),
  [155] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_switch_repeat1, 2), SHIFT_REPEAT(67),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch, 3),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch, 2),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_switch_repeat1, 2),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conditional_token_block_repeat2, 5),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_conditional_token_block_repeat2, 5),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conditional_token_block_repeat2, 4),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_conditional_token_block_repeat2, 4),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_switch_repeat1, 3),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_switch_repeat1, 3),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_a98rgb, 7, .production_id = 1),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dimension, 2),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string, 3),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [270] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hex, 2),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_token_assignment, 3),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_token_declaration, 4),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hsl, 7, .production_id = 2),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hsv, 7, .production_id = 3),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oklab, 7, .production_id = 4),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oklch, 7, .production_id = 5),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_p3, 7, .production_id = 1),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rec2020, 7, .production_id = 1),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rgb, 7, .production_id = 1),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_a98rgb, 9, .production_id = 1),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hsl, 9, .production_id = 2),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hsv, 9, .production_id = 3),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oklab, 9, .production_id = 4),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oklch, 9, .production_id = 5),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_p3, 9, .production_id = 1),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rec2020, 9, .production_id = 1),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rgb, 9, .production_id = 1),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_token_value, 1),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_token_type, 1),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
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
