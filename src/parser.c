#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 275
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 80
#define ALIAS_COUNT 10
#define TOKEN_COUNT 48
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
  anon_sym_DOT = 10,
  anon_sym_LPAREN = 11,
  sym_color_function_name = 12,
  anon_sym_when = 13,
  sym_decimal_range = 14,
  sym_dimensional_unit = 15,
  anon_sym_POUND = 16,
  aux_sym_hex_token1 = 17,
  aux_sym_hex_token2 = 18,
  aux_sym_hex_token3 = 19,
  aux_sym_hex_token4 = 20,
  aux_sym_hsl_token1 = 21,
  aux_sym_hsv_token1 = 22,
  sym_identifier = 23,
  sym_multi_line_comment = 24,
  sym_negative_assertion = 25,
  sym_number = 26,
  aux_sym_oklab_token1 = 27,
  aux_sym_oklch_token1 = 28,
  aux_sym_p3_token1 = 29,
  aux_sym_percent_number_token1 = 30,
  sym_positive_assertion = 31,
  aux_sym_rec2020_token1 = 32,
  sym_ref_identifier = 33,
  aux_sym_rgb_token1 = 34,
  sym_single_line_comment = 35,
  sym_string = 36,
  anon_sym_COLON = 37,
  anon_sym_tokens = 38,
  aux_sym_tokens_block_token1 = 39,
  aux_sym_tokens_block_token2 = 40,
  anon_sym_DOLLAR = 41,
  anon_sym_text = 42,
  anon_sym_color = 43,
  anon_sym_asset = 44,
  anon_sym_switch = 45,
  anon_sym_dimension = 46,
  anon_sym_range = 47,
  sym_source_file = 48,
  sym__color_value = 49,
  sym__string = 50,
  aux_sym__token_body = 51,
  sym_a98rgb = 52,
  sym_child_token_block = 53,
  sym_color_function_call = 54,
  sym_conditional_token_block = 55,
  sym_dimension = 56,
  sym_hex = 57,
  sym_hsl = 58,
  sym_hsv = 59,
  sym_oklab = 60,
  sym_oklch = 61,
  sym_p3 = 62,
  sym_percent_number = 63,
  sym_rec2020 = 64,
  sym_rgb = 65,
  sym_switch = 66,
  sym_token_assignment = 67,
  sym_tokens_block = 68,
  sym_token_declaration = 69,
  sym_token_reference = 70,
  sym_token_type = 71,
  sym_token_value = 72,
  aux_sym_source_file_repeat1 = 73,
  aux_sym__color_value_repeat1 = 74,
  aux_sym_color_function_call_repeat1 = 75,
  aux_sym_color_function_call_repeat2 = 76,
  aux_sym_conditional_token_block_repeat1 = 77,
  aux_sym_conditional_token_block_repeat2 = 78,
  aux_sym_switch_repeat1 = 79,
  alias_sym_a_channel = 80,
  alias_sym_b_channel = 81,
  alias_sym_blue_channel = 82,
  alias_sym_chroma_channel = 83,
  alias_sym_green_channel = 84,
  alias_sym_hue_channel = 85,
  alias_sym_lightness_channel = 86,
  alias_sym_red_channel = 87,
  alias_sym_saturation_channel = 88,
  alias_sym_value_channel = 89,
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
  [anon_sym_DOT] = ".",
  [anon_sym_LPAREN] = "(",
  [sym_color_function_name] = "color_function_name",
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
  [aux_sym_percent_number_token1] = "percent_number_token1",
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
  [sym__color_value] = "_color_value",
  [sym__string] = "_string",
  [aux_sym__token_body] = "_token_body",
  [sym_a98rgb] = "a98rgb",
  [sym_child_token_block] = "child_token_block",
  [sym_color_function_call] = "color_function_call",
  [sym_conditional_token_block] = "conditional_token_block",
  [sym_dimension] = "dimension",
  [sym_hex] = "hex",
  [sym_hsl] = "hsl",
  [sym_hsv] = "hsv",
  [sym_oklab] = "oklab",
  [sym_oklch] = "oklch",
  [sym_p3] = "p3",
  [sym_percent_number] = "percent_number",
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
  [aux_sym__color_value_repeat1] = "_color_value_repeat1",
  [aux_sym_color_function_call_repeat1] = "color_function_call_repeat1",
  [aux_sym_color_function_call_repeat2] = "color_function_call_repeat2",
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
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [sym_color_function_name] = sym_color_function_name,
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
  [aux_sym_percent_number_token1] = aux_sym_percent_number_token1,
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
  [sym__color_value] = sym__color_value,
  [sym__string] = sym__string,
  [aux_sym__token_body] = aux_sym__token_body,
  [sym_a98rgb] = sym_a98rgb,
  [sym_child_token_block] = sym_child_token_block,
  [sym_color_function_call] = sym_color_function_call,
  [sym_conditional_token_block] = sym_conditional_token_block,
  [sym_dimension] = sym_dimension,
  [sym_hex] = sym_hex,
  [sym_hsl] = sym_hsl,
  [sym_hsv] = sym_hsv,
  [sym_oklab] = sym_oklab,
  [sym_oklch] = sym_oklch,
  [sym_p3] = sym_p3,
  [sym_percent_number] = sym_percent_number,
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
  [aux_sym__color_value_repeat1] = aux_sym__color_value_repeat1,
  [aux_sym_color_function_call_repeat1] = aux_sym_color_function_call_repeat1,
  [aux_sym_color_function_call_repeat2] = aux_sym_color_function_call_repeat2,
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
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_color_function_name] = {
    .visible = true,
    .named = true,
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
  [aux_sym_percent_number_token1] = {
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
  [sym__color_value] = {
    .visible = false,
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
  [sym_color_function_call] = {
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
  [sym_percent_number] = {
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
  [aux_sym__color_value_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_color_function_call_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_color_function_call_repeat2] = {
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
  [6] = 6,
  [7] = 4,
  [8] = 5,
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
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 22,
  [28] = 15,
  [29] = 29,
  [30] = 30,
  [31] = 31,
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
  [45] = 44,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 49,
  [53] = 53,
  [54] = 53,
  [55] = 55,
  [56] = 50,
  [57] = 55,
  [58] = 51,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 12,
  [65] = 65,
  [66] = 10,
  [67] = 13,
  [68] = 68,
  [69] = 61,
  [70] = 70,
  [71] = 71,
  [72] = 71,
  [73] = 73,
  [74] = 74,
  [75] = 65,
  [76] = 70,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 81,
  [86] = 84,
  [87] = 87,
  [88] = 88,
  [89] = 39,
  [90] = 40,
  [91] = 91,
  [92] = 91,
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
  [103] = 18,
  [104] = 104,
  [105] = 30,
  [106] = 29,
  [107] = 32,
  [108] = 26,
  [109] = 36,
  [110] = 38,
  [111] = 37,
  [112] = 35,
  [113] = 20,
  [114] = 34,
  [115] = 42,
  [116] = 23,
  [117] = 102,
  [118] = 100,
  [119] = 99,
  [120] = 98,
  [121] = 96,
  [122] = 95,
  [123] = 94,
  [124] = 93,
  [125] = 125,
  [126] = 33,
  [127] = 41,
  [128] = 25,
  [129] = 31,
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
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 11,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 194,
  [198] = 198,
  [199] = 193,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 156,
  [211] = 157,
  [212] = 158,
  [213] = 159,
  [214] = 160,
  [215] = 161,
  [216] = 162,
  [217] = 163,
  [218] = 218,
  [219] = 219,
  [220] = 191,
  [221] = 207,
  [222] = 134,
  [223] = 135,
  [224] = 136,
  [225] = 137,
  [226] = 138,
  [227] = 139,
  [228] = 140,
  [229] = 141,
  [230] = 145,
  [231] = 146,
  [232] = 147,
  [233] = 148,
  [234] = 150,
  [235] = 151,
  [236] = 152,
  [237] = 153,
  [238] = 201,
  [239] = 239,
  [240] = 195,
  [241] = 155,
  [242] = 206,
  [243] = 205,
  [244] = 204,
  [245] = 131,
  [246] = 202,
  [247] = 175,
  [248] = 203,
  [249] = 132,
  [250] = 250,
  [251] = 143,
  [252] = 142,
  [253] = 182,
  [254] = 171,
  [255] = 250,
  [256] = 218,
  [257] = 209,
  [258] = 208,
  [259] = 176,
  [260] = 174,
  [261] = 173,
  [262] = 169,
  [263] = 168,
  [264] = 167,
  [265] = 165,
  [266] = 164,
  [267] = 189,
  [268] = 187,
  [269] = 186,
  [270] = 184,
  [271] = 183,
  [272] = 130,
  [273] = 181,
  [274] = 180,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(121);
      if (lookahead == '"') ADVANCE(123);
      if (lookahead == '#') ADVANCE(144);
      if (lookahead == '$') ADVANCE(227);
      if (lookahead == '%') ADVANCE(143);
      if (lookahead == '(') ADVANCE(132);
      if (lookahead == ')') ADVANCE(126);
      if (lookahead == '*') ADVANCE(128);
      if (lookahead == ',') ADVANCE(125);
      if (lookahead == '-') ADVANCE(110);
      if (lookahead == '.') ADVANCE(131);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '0') ADVANCE(138);
      if (lookahead == '1') ADVANCE(136);
      if (lookahead == ':') ADVANCE(223);
      if (lookahead == 'a') ADVANCE(28);
      if (lookahead == 'c') ADVANCE(102);
      if (lookahead == 'd') ADVANCE(60);
      if (lookahead == 'e') ADVANCE(106);
      if (lookahead == 'h') ADVANCE(85);
      if (lookahead == 'i') ADVANCE(71);
      if (lookahead == 'm') ADVANCE(68);
      if (lookahead == 'o') ADVANCE(63);
      if (lookahead == 'p') ADVANCE(24);
      if (lookahead == 'r') ADVANCE(31);
      if (lookahead == 's') ADVANCE(97);
      if (lookahead == 't') ADVANCE(43);
      if (lookahead == 'v') ADVANCE(105);
      if (lookahead == 'w') ADVANCE(54);
      if (lookahead == '{') ADVANCE(129);
      if (lookahead == '}') ADVANCE(130);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(116);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(210);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(122);
      if (lookahead == '*') ADVANCE(128);
      if (lookahead == ',') ADVANCE(125);
      if (lookahead == '.') ADVANCE(131);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(123);
      if (lookahead == '#') ADVANCE(144);
      if (lookahead == '$') ADVANCE(227);
      if (lookahead == '-') ADVANCE(110);
      if (lookahead == '/') ADVANCE(119);
      if (lookahead == 'a') ADVANCE(30);
      if (lookahead == 'h') ADVANCE(88);
      if (lookahead == 'o') ADVANCE(62);
      if (lookahead == 'p') ADVANCE(25);
      if (lookahead == 'r') ADVANCE(45);
      if (lookahead == '{') ADVANCE(225);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 3:
      if (lookahead == '%') ADVANCE(143);
      if (lookahead == 'c') ADVANCE(103);
      if (lookahead == 'd') ADVANCE(96);
      if (lookahead == 'e') ADVANCE(106);
      if (lookahead == 'i') ADVANCE(70);
      if (lookahead == 'm') ADVANCE(68);
      if (lookahead == 'p') ADVANCE(107);
      if (lookahead == 'r') ADVANCE(42);
      if (lookahead == 'v') ADVANCE(105);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(116);
      END_STATE();
    case 4:
      if (lookahead == '(') ADVANCE(214);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '(') ADVANCE(154);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '(') ADVANCE(155);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '(') ADVANCE(219);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '(') ADVANCE(212);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '(') ADVANCE(213);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '(') ADVANCE(124);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '(') ADVANCE(217);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '*') ADVANCE(15);
      if (lookahead == '/') ADVANCE(220);
      END_STATE();
    case 13:
      if (lookahead == '*') ADVANCE(15);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 14:
      if (lookahead == '*') ADVANCE(14);
      if (lookahead == '/') ADVANCE(204);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 15:
      if (lookahead == '*') ADVANCE(14);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '0') ADVANCE(140);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(211);
      END_STATE();
    case 17:
      if (lookahead == '0') ADVANCE(137);
      if (lookahead == '1') ADVANCE(139);
      if (lookahead == 'a') ADVANCE(89);
      if (lookahead == 'c') ADVANCE(80);
      if (lookahead == 'd') ADVANCE(59);
      if (lookahead == 'r') ADVANCE(32);
      if (lookahead == 's') ADVANCE(98);
      if (lookahead == 't') ADVANCE(46);
      if (lookahead == 'w') ADVANCE(56);
      if (lookahead == '}') ADVANCE(226);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 18:
      if (lookahead == '0') ADVANCE(141);
      END_STATE();
    case 19:
      if (lookahead == '0') ADVANCE(11);
      END_STATE();
    case 20:
      if (lookahead == '0') ADVANCE(22);
      END_STATE();
    case 21:
      if (lookahead == '2') ADVANCE(20);
      END_STATE();
    case 22:
      if (lookahead == '2') ADVANCE(19);
      END_STATE();
    case 23:
      if (lookahead == '3') ADVANCE(4);
      END_STATE();
    case 24:
      if (lookahead == '3') ADVANCE(4);
      if (lookahead == 'c' ||
          lookahead == 't' ||
          lookahead == 'x') ADVANCE(143);
      END_STATE();
    case 25:
      if (lookahead == '3') ADVANCE(156);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 26:
      if (lookahead == '8') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(147);
      END_STATE();
    case 27:
      if (lookahead == '8') ADVANCE(84);
      END_STATE();
    case 28:
      if (lookahead == '9') ADVANCE(26);
      if (lookahead == 's') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '8') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(113);
      END_STATE();
    case 29:
      if (lookahead == '9') ADVANCE(27);
      END_STATE();
    case 30:
      if (lookahead == '9') ADVANCE(168);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '8') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(72);
      if (lookahead == 'e') ADVANCE(40);
      if (lookahead == 'g') ADVANCE(36);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(191);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(99);
      if (lookahead == 'i') ADVANCE(70);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(89);
      if (lookahead == 'c') ADVANCE(80);
      if (lookahead == 'd') ADVANCE(59);
      if (lookahead == 'r') ADVANCE(32);
      if (lookahead == 's') ADVANCE(98);
      if (lookahead == 't') ADVANCE(46);
      if (lookahead == 'w') ADVANCE(56);
      if (lookahead == '}') ADVANCE(130);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(34)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(37);
      if (lookahead == 'c') ADVANCE(57);
      END_STATE();
    case 36:
      if (lookahead == 'b') ADVANCE(7);
      END_STATE();
    case 37:
      if (lookahead == 'b') ADVANCE(8);
      END_STATE();
    case 38:
      if (lookahead == 'b') ADVANCE(10);
      END_STATE();
    case 39:
      if (lookahead == 'c') ADVANCE(21);
      END_STATE();
    case 40:
      if (lookahead == 'c') ADVANCE(21);
      if (lookahead == 'm') ADVANCE(143);
      END_STATE();
    case 41:
      if (lookahead == 'c') ADVANCE(55);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(100);
      if (lookahead == 'o') ADVANCE(64);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(238);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(173);
      if (lookahead == 'g') ADVANCE(170);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(202);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(39);
      if (lookahead == 'g') ADVANCE(36);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 52:
      if (lookahead == 'g') ADVANCE(44);
      END_STATE();
    case 53:
      if (lookahead == 'g') ADVANCE(38);
      END_STATE();
    case 54:
      if (lookahead == 'h') ADVANCE(49);
      END_STATE();
    case 55:
      if (lookahead == 'h') ADVANCE(234);
      END_STATE();
    case 56:
      if (lookahead == 'h') ADVANCE(176);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 57:
      if (lookahead == 'h') ADVANCE(9);
      END_STATE();
    case 58:
      if (lookahead == 'i') ADVANCE(92);
      END_STATE();
    case 59:
      if (lookahead == 'i') ADVANCE(188);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 60:
      if (lookahead == 'i') ADVANCE(69);
      if (lookahead == 'v') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(113);
      END_STATE();
    case 61:
      if (lookahead == 'i') ADVANCE(82);
      END_STATE();
    case 62:
      if (lookahead == 'k') ADVANCE(185);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 63:
      if (lookahead == 'k') ADVANCE(66);
      END_STATE();
    case 64:
      if (lookahead == 'k') ADVANCE(51);
      END_STATE();
    case 65:
      if (lookahead == 'l') ADVANCE(78);
      END_STATE();
    case 66:
      if (lookahead == 'l') ADVANCE(35);
      END_STATE();
    case 67:
      if (lookahead == 'l') ADVANCE(5);
      if (lookahead == 'v') ADVANCE(6);
      END_STATE();
    case 68:
      if (lookahead == 'm') ADVANCE(143);
      END_STATE();
    case 69:
      if (lookahead == 'm') ADVANCE(50);
      END_STATE();
    case 70:
      if (lookahead == 'n') ADVANCE(143);
      END_STATE();
    case 71:
      if (lookahead == 'n') ADVANCE(143);
      if (lookahead == 's') ADVANCE(216);
      END_STATE();
    case 72:
      if (lookahead == 'n') ADVANCE(52);
      END_STATE();
    case 73:
      if (lookahead == 'n') ADVANCE(134);
      END_STATE();
    case 74:
      if (lookahead == 'n') ADVANCE(236);
      END_STATE();
    case 75:
      if (lookahead == 'n') ADVANCE(81);
      END_STATE();
    case 76:
      if (lookahead == 'n') ADVANCE(90);
      END_STATE();
    case 77:
      if (lookahead == 'n') ADVANCE(87);
      END_STATE();
    case 78:
      if (lookahead == 'o') ADVANCE(83);
      END_STATE();
    case 79:
      if (lookahead == 'o') ADVANCE(64);
      END_STATE();
    case 80:
      if (lookahead == 'o') ADVANCE(186);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 81:
      if (lookahead == 'o') ADVANCE(95);
      END_STATE();
    case 82:
      if (lookahead == 'o') ADVANCE(74);
      END_STATE();
    case 83:
      if (lookahead == 'r') ADVANCE(230);
      END_STATE();
    case 84:
      if (lookahead == 'r') ADVANCE(53);
      END_STATE();
    case 85:
      if (lookahead == 's') ADVANCE(67);
      END_STATE();
    case 86:
      if (lookahead == 's') ADVANCE(216);
      END_STATE();
    case 87:
      if (lookahead == 's') ADVANCE(224);
      END_STATE();
    case 88:
      if (lookahead == 's') ADVANCE(187);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 89:
      if (lookahead == 's') ADVANCE(198);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 90:
      if (lookahead == 's') ADVANCE(61);
      END_STATE();
    case 91:
      if (lookahead == 's') ADVANCE(48);
      END_STATE();
    case 92:
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 93:
      if (lookahead == 't') ADVANCE(228);
      END_STATE();
    case 94:
      if (lookahead == 't') ADVANCE(232);
      END_STATE();
    case 95:
      if (lookahead == 't') ADVANCE(205);
      END_STATE();
    case 96:
      if (lookahead == 'v') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(113);
      END_STATE();
    case 97:
      if (lookahead == 'w') ADVANCE(58);
      END_STATE();
    case 98:
      if (lookahead == 'w') ADVANCE(183);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 99:
      if (lookahead == 'x') ADVANCE(143);
      END_STATE();
    case 100:
      if (lookahead == 'x') ADVANCE(93);
      END_STATE();
    case 101:
      if (lookahead == '{') ADVANCE(225);
      if (lookahead == '}') ADVANCE(130);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(101)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 102:
      if (lookahead == 'h' ||
          lookahead == 'm') ADVANCE(143);
      if (lookahead == 'o') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(113);
      END_STATE();
    case 103:
      if (lookahead == 'h' ||
          lookahead == 'm') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(113);
      END_STATE();
    case 104:
      if (lookahead == 'h' ||
          lookahead == 'w') ADVANCE(143);
      END_STATE();
    case 105:
      if (lookahead == 'h' ||
          lookahead == 'w') ADVANCE(143);
      if (lookahead == 'm') ADVANCE(33);
      END_STATE();
    case 106:
      if (lookahead == 'm' ||
          lookahead == 'x') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(113);
      END_STATE();
    case 107:
      if (lookahead == 'c' ||
          lookahead == 't' ||
          lookahead == 'x') ADVANCE(143);
      END_STATE();
    case 108:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(108)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 109:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(109)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 110:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      END_STATE();
    case 111:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      END_STATE();
    case 112:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(211);
      END_STATE();
    case 113:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(147);
      END_STATE();
    case 114:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(151);
      END_STATE();
    case 115:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(152);
      END_STATE();
    case 116:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(113);
      END_STATE();
    case 117:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 118:
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 119:
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 120:
      if (eof) ADVANCE(121);
      if (lookahead == '#') ADVANCE(144);
      if (lookahead == '$') ADVANCE(227);
      if (lookahead == '%') ADVANCE(215);
      if (lookahead == ')') ADVANCE(126);
      if (lookahead == ',') ADVANCE(125);
      if (lookahead == '-') ADVANCE(110);
      if (lookahead == '.') ADVANCE(131);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == 'a') ADVANCE(29);
      if (lookahead == 'h') ADVANCE(85);
      if (lookahead == 'i') ADVANCE(86);
      if (lookahead == 'o') ADVANCE(63);
      if (lookahead == 'p') ADVANCE(23);
      if (lookahead == 'r') ADVANCE(47);
      if (lookahead == 't') ADVANCE(79);
      if (lookahead == '{') ADVANCE(129);
      if (lookahead == '}') ADVANCE(130);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(120)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym__newlines);
      if (lookahead == '\n') ADVANCE(122);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym__string_token1);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_a98rgb_token1);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_asset_path);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_asterisk);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_color_function_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_when);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_when);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_decimal_range);
      if (lookahead == '.') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(207);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(113);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_decimal_range);
      if (lookahead == '.') ADVANCE(111);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_decimal_range);
      if (lookahead == '.') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(207);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(113);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_decimal_range);
      if (lookahead == '.') ADVANCE(18);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_decimal_range);
      if (lookahead == '0') ADVANCE(140);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(211);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_decimal_range);
      if (lookahead == '0') ADVANCE(141);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_decimal_range);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_dimensional_unit);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_hex_token1);
      if (lookahead == '.') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(149);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_hex_token1);
      if (lookahead == 'r') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(149);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_hex_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(149);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_hex_token2);
      if (lookahead == '.') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(208);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(114);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_hex_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(114);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_hex_token3);
      if (lookahead == '.') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(209);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(115);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_hex_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(115);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_hex_token4);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_hex_token4);
      if (lookahead == '.') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_hsl_token1);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_hsv_token1);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(214);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(4);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(154);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(5);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(155);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(6);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(219);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(7);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(212);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(8);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(213);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(9);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(124);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(10);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(217);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '0') ADVANCE(163);
      if (lookahead == '-' ||
          ('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '0') ADVANCE(167);
      if (lookahead == '-' ||
          ('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(165);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(164);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '8') ADVANCE(195);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(171);
      if (lookahead == 'c') ADVANCE(182);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(159);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(160);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(162);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(166);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(181);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(239);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(189);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(192);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(200);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(175);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(172);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(235);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(161);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(201);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(194);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(169);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(193);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(157);
      if (lookahead == 'v') ADVANCE(158);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(177);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(135);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(237);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(179);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(197);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(196);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(190);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(180);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(231);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(184);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(178);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(229);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(233);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(174);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(199);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_multi_line_comment);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_negative_assertion);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(145);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(147);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(150);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(151);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(152);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(207);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(113);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(211);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_oklab_token1);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_oklch_token1);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_p3_token1);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_percent_number_token1);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_positive_assertion);
      if (lookahead == ' ') ADVANCE(75);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_rec2020_token1);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_ref_identifier);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_rgb_token1);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_single_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(220);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(221);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\' &&
          lookahead != '^' &&
          lookahead != 'n') ADVANCE(222);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_string);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\' &&
          lookahead != '^' &&
          lookahead != 'n') ADVANCE(222);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_tokens);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_tokens_block_token1);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_tokens_block_token2);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_text);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_text);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_color);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_color);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_asset);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_asset);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_switch);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_switch);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_dimension);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_dimension);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_range);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_range);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 120},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 120},
  [5] = {.lex_state = 120},
  [6] = {.lex_state = 120},
  [7] = {.lex_state = 120},
  [8] = {.lex_state = 120},
  [9] = {.lex_state = 120},
  [10] = {.lex_state = 120},
  [11] = {.lex_state = 120},
  [12] = {.lex_state = 120},
  [13] = {.lex_state = 120},
  [14] = {.lex_state = 120},
  [15] = {.lex_state = 17},
  [16] = {.lex_state = 120},
  [17] = {.lex_state = 17},
  [18] = {.lex_state = 120},
  [19] = {.lex_state = 120},
  [20] = {.lex_state = 120},
  [21] = {.lex_state = 120},
  [22] = {.lex_state = 34},
  [23] = {.lex_state = 120},
  [24] = {.lex_state = 17},
  [25] = {.lex_state = 120},
  [26] = {.lex_state = 120},
  [27] = {.lex_state = 34},
  [28] = {.lex_state = 34},
  [29] = {.lex_state = 120},
  [30] = {.lex_state = 120},
  [31] = {.lex_state = 120},
  [32] = {.lex_state = 120},
  [33] = {.lex_state = 120},
  [34] = {.lex_state = 120},
  [35] = {.lex_state = 120},
  [36] = {.lex_state = 120},
  [37] = {.lex_state = 120},
  [38] = {.lex_state = 120},
  [39] = {.lex_state = 120},
  [40] = {.lex_state = 120},
  [41] = {.lex_state = 120},
  [42] = {.lex_state = 120},
  [43] = {.lex_state = 120},
  [44] = {.lex_state = 17},
  [45] = {.lex_state = 17},
  [46] = {.lex_state = 17},
  [47] = {.lex_state = 120},
  [48] = {.lex_state = 17},
  [49] = {.lex_state = 17},
  [50] = {.lex_state = 17},
  [51] = {.lex_state = 17},
  [52] = {.lex_state = 34},
  [53] = {.lex_state = 17},
  [54] = {.lex_state = 34},
  [55] = {.lex_state = 17},
  [56] = {.lex_state = 34},
  [57] = {.lex_state = 34},
  [58] = {.lex_state = 34},
  [59] = {.lex_state = 120},
  [60] = {.lex_state = 120},
  [61] = {.lex_state = 3},
  [62] = {.lex_state = 120},
  [63] = {.lex_state = 101},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 120},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 1},
  [68] = {.lex_state = 101},
  [69] = {.lex_state = 3},
  [70] = {.lex_state = 101},
  [71] = {.lex_state = 101},
  [72] = {.lex_state = 101},
  [73] = {.lex_state = 120},
  [74] = {.lex_state = 101},
  [75] = {.lex_state = 120},
  [76] = {.lex_state = 101},
  [77] = {.lex_state = 120},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 120},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 120},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 120},
  [87] = {.lex_state = 120},
  [88] = {.lex_state = 1},
  [89] = {.lex_state = 1},
  [90] = {.lex_state = 1},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 101},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 1},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 1},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 1},
  [106] = {.lex_state = 1},
  [107] = {.lex_state = 1},
  [108] = {.lex_state = 1},
  [109] = {.lex_state = 1},
  [110] = {.lex_state = 1},
  [111] = {.lex_state = 1},
  [112] = {.lex_state = 1},
  [113] = {.lex_state = 1},
  [114] = {.lex_state = 1},
  [115] = {.lex_state = 1},
  [116] = {.lex_state = 1},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 101},
  [126] = {.lex_state = 1},
  [127] = {.lex_state = 1},
  [128] = {.lex_state = 1},
  [129] = {.lex_state = 1},
  [130] = {.lex_state = 17},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 1},
  [134] = {.lex_state = 17},
  [135] = {.lex_state = 120},
  [136] = {.lex_state = 120},
  [137] = {.lex_state = 17},
  [138] = {.lex_state = 120},
  [139] = {.lex_state = 17},
  [140] = {.lex_state = 17},
  [141] = {.lex_state = 120},
  [142] = {.lex_state = 120},
  [143] = {.lex_state = 17},
  [144] = {.lex_state = 1},
  [145] = {.lex_state = 17},
  [146] = {.lex_state = 17},
  [147] = {.lex_state = 17},
  [148] = {.lex_state = 17},
  [149] = {.lex_state = 1},
  [150] = {.lex_state = 17},
  [151] = {.lex_state = 17},
  [152] = {.lex_state = 17},
  [153] = {.lex_state = 17},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 108},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 1},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 1},
  [171] = {.lex_state = 17},
  [172] = {.lex_state = 101},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 120},
  [179] = {.lex_state = 1},
  [180] = {.lex_state = 120},
  [181] = {.lex_state = 17},
  [182] = {.lex_state = 120},
  [183] = {.lex_state = 17},
  [184] = {.lex_state = 17},
  [185] = {.lex_state = 3},
  [186] = {.lex_state = 120},
  [187] = {.lex_state = 120},
  [188] = {.lex_state = 1},
  [189] = {.lex_state = 17},
  [190] = {.lex_state = 221},
  [191] = {.lex_state = 120},
  [192] = {.lex_state = 101},
  [193] = {.lex_state = 1},
  [194] = {.lex_state = 109},
  [195] = {.lex_state = 101},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 109},
  [198] = {.lex_state = 101},
  [199] = {.lex_state = 1},
  [200] = {.lex_state = 101},
  [201] = {.lex_state = 120},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 120},
  [209] = {.lex_state = 17},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 17},
  [219] = {.lex_state = 2},
  [220] = {.lex_state = 120},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 17},
  [223] = {.lex_state = 120},
  [224] = {.lex_state = 120},
  [225] = {.lex_state = 17},
  [226] = {.lex_state = 120},
  [227] = {.lex_state = 17},
  [228] = {.lex_state = 17},
  [229] = {.lex_state = 120},
  [230] = {.lex_state = 17},
  [231] = {.lex_state = 17},
  [232] = {.lex_state = 17},
  [233] = {.lex_state = 17},
  [234] = {.lex_state = 17},
  [235] = {.lex_state = 17},
  [236] = {.lex_state = 17},
  [237] = {.lex_state = 17},
  [238] = {.lex_state = 120},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 101},
  [241] = {.lex_state = 108},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 17},
  [251] = {.lex_state = 17},
  [252] = {.lex_state = 120},
  [253] = {.lex_state = 120},
  [254] = {.lex_state = 17},
  [255] = {.lex_state = 17},
  [256] = {.lex_state = 17},
  [257] = {.lex_state = 17},
  [258] = {.lex_state = 120},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 17},
  [268] = {.lex_state = 120},
  [269] = {.lex_state = 120},
  [270] = {.lex_state = 17},
  [271] = {.lex_state = 17},
  [272] = {.lex_state = 17},
  [273] = {.lex_state = 17},
  [274] = {.lex_state = 120},
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
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_when] = ACTIONS(1),
    [sym_decimal_range] = ACTIONS(1),
    [sym_dimensional_unit] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [aux_sym_hex_token1] = ACTIONS(1),
    [aux_sym_hex_token2] = ACTIONS(1),
    [aux_sym_hex_token3] = ACTIONS(1),
    [aux_sym_hex_token4] = ACTIONS(1),
    [aux_sym_hsl_token1] = ACTIONS(1),
    [aux_sym_hsv_token1] = ACTIONS(1),
    [sym_multi_line_comment] = ACTIONS(1),
    [sym_negative_assertion] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [aux_sym_oklab_token1] = ACTIONS(1),
    [aux_sym_oklch_token1] = ACTIONS(1),
    [aux_sym_p3_token1] = ACTIONS(1),
    [aux_sym_percent_number_token1] = ACTIONS(1),
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
    [sym_source_file] = STATE(239),
    [sym_tokens_block] = STATE(59),
    [aux_sym_source_file_repeat1] = STATE(59),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_multi_line_comment] = ACTIONS(5),
    [sym_single_line_comment] = ACTIONS(5),
    [anon_sym_tokens] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 17,
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
    STATE(179), 1,
      sym_token_value,
    STATE(188), 5,
      sym__color_value,
      sym__string,
      sym_dimension,
      sym_switch,
      sym_token_reference,
    STATE(66), 9,
      sym_a98rgb,
      sym_hex,
      sym_hsl,
      sym_hsv,
      sym_oklab,
      sym_oklch,
      sym_p3,
      sym_rec2020,
      sym_rgb,
  [64] = 17,
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
    STATE(133), 1,
      sym_token_value,
    STATE(188), 5,
      sym__color_value,
      sym__string,
      sym_dimension,
      sym_switch,
      sym_token_reference,
    STATE(66), 9,
      sym_a98rgb,
      sym_hex,
      sym_hsl,
      sym_hsv,
      sym_oklab,
      sym_oklch,
      sym_p3,
      sym_rec2020,
      sym_rgb,
  [128] = 15,
    ACTIONS(37), 1,
      aux_sym_a98rgb_token1,
    ACTIONS(39), 1,
      anon_sym_RPAREN,
    ACTIONS(41), 1,
      anon_sym_POUND,
    ACTIONS(43), 1,
      aux_sym_hsl_token1,
    ACTIONS(45), 1,
      aux_sym_hsv_token1,
    ACTIONS(47), 1,
      sym_number,
    ACTIONS(49), 1,
      aux_sym_oklab_token1,
    ACTIONS(51), 1,
      aux_sym_oklch_token1,
    ACTIONS(53), 1,
      aux_sym_p3_token1,
    ACTIONS(55), 1,
      aux_sym_rec2020_token1,
    ACTIONS(57), 1,
      aux_sym_rgb_token1,
    ACTIONS(59), 1,
      anon_sym_DOLLAR,
    STATE(6), 1,
      aux_sym_color_function_call_repeat2,
    STATE(19), 3,
      sym__color_value,
      sym_percent_number,
      sym_token_reference,
    STATE(10), 9,
      sym_a98rgb,
      sym_hex,
      sym_hsl,
      sym_hsv,
      sym_oklab,
      sym_oklch,
      sym_p3,
      sym_rec2020,
      sym_rgb,
  [184] = 15,
    ACTIONS(37), 1,
      aux_sym_a98rgb_token1,
    ACTIONS(41), 1,
      anon_sym_POUND,
    ACTIONS(43), 1,
      aux_sym_hsl_token1,
    ACTIONS(45), 1,
      aux_sym_hsv_token1,
    ACTIONS(47), 1,
      sym_number,
    ACTIONS(49), 1,
      aux_sym_oklab_token1,
    ACTIONS(51), 1,
      aux_sym_oklch_token1,
    ACTIONS(53), 1,
      aux_sym_p3_token1,
    ACTIONS(55), 1,
      aux_sym_rec2020_token1,
    ACTIONS(57), 1,
      aux_sym_rgb_token1,
    ACTIONS(59), 1,
      anon_sym_DOLLAR,
    ACTIONS(61), 1,
      anon_sym_RPAREN,
    STATE(4), 1,
      aux_sym_color_function_call_repeat2,
    STATE(19), 3,
      sym__color_value,
      sym_percent_number,
      sym_token_reference,
    STATE(10), 9,
      sym_a98rgb,
      sym_hex,
      sym_hsl,
      sym_hsv,
      sym_oklab,
      sym_oklch,
      sym_p3,
      sym_rec2020,
      sym_rgb,
  [240] = 15,
    ACTIONS(63), 1,
      aux_sym_a98rgb_token1,
    ACTIONS(66), 1,
      anon_sym_RPAREN,
    ACTIONS(68), 1,
      anon_sym_POUND,
    ACTIONS(71), 1,
      aux_sym_hsl_token1,
    ACTIONS(74), 1,
      aux_sym_hsv_token1,
    ACTIONS(77), 1,
      sym_number,
    ACTIONS(80), 1,
      aux_sym_oklab_token1,
    ACTIONS(83), 1,
      aux_sym_oklch_token1,
    ACTIONS(86), 1,
      aux_sym_p3_token1,
    ACTIONS(89), 1,
      aux_sym_rec2020_token1,
    ACTIONS(92), 1,
      aux_sym_rgb_token1,
    ACTIONS(95), 1,
      anon_sym_DOLLAR,
    STATE(6), 1,
      aux_sym_color_function_call_repeat2,
    STATE(19), 3,
      sym__color_value,
      sym_percent_number,
      sym_token_reference,
    STATE(10), 9,
      sym_a98rgb,
      sym_hex,
      sym_hsl,
      sym_hsv,
      sym_oklab,
      sym_oklch,
      sym_p3,
      sym_rec2020,
      sym_rgb,
  [296] = 15,
    ACTIONS(37), 1,
      aux_sym_a98rgb_token1,
    ACTIONS(41), 1,
      anon_sym_POUND,
    ACTIONS(43), 1,
      aux_sym_hsl_token1,
    ACTIONS(45), 1,
      aux_sym_hsv_token1,
    ACTIONS(47), 1,
      sym_number,
    ACTIONS(49), 1,
      aux_sym_oklab_token1,
    ACTIONS(51), 1,
      aux_sym_oklch_token1,
    ACTIONS(53), 1,
      aux_sym_p3_token1,
    ACTIONS(55), 1,
      aux_sym_rec2020_token1,
    ACTIONS(57), 1,
      aux_sym_rgb_token1,
    ACTIONS(59), 1,
      anon_sym_DOLLAR,
    ACTIONS(98), 1,
      anon_sym_RPAREN,
    STATE(6), 1,
      aux_sym_color_function_call_repeat2,
    STATE(19), 3,
      sym__color_value,
      sym_percent_number,
      sym_token_reference,
    STATE(10), 9,
      sym_a98rgb,
      sym_hex,
      sym_hsl,
      sym_hsv,
      sym_oklab,
      sym_oklch,
      sym_p3,
      sym_rec2020,
      sym_rgb,
  [352] = 15,
    ACTIONS(37), 1,
      aux_sym_a98rgb_token1,
    ACTIONS(41), 1,
      anon_sym_POUND,
    ACTIONS(43), 1,
      aux_sym_hsl_token1,
    ACTIONS(45), 1,
      aux_sym_hsv_token1,
    ACTIONS(47), 1,
      sym_number,
    ACTIONS(49), 1,
      aux_sym_oklab_token1,
    ACTIONS(51), 1,
      aux_sym_oklch_token1,
    ACTIONS(53), 1,
      aux_sym_p3_token1,
    ACTIONS(55), 1,
      aux_sym_rec2020_token1,
    ACTIONS(57), 1,
      aux_sym_rgb_token1,
    ACTIONS(59), 1,
      anon_sym_DOLLAR,
    ACTIONS(100), 1,
      anon_sym_RPAREN,
    STATE(7), 1,
      aux_sym_color_function_call_repeat2,
    STATE(19), 3,
      sym__color_value,
      sym_percent_number,
      sym_token_reference,
    STATE(10), 9,
      sym_a98rgb,
      sym_hex,
      sym_hsl,
      sym_hsv,
      sym_oklab,
      sym_oklch,
      sym_p3,
      sym_rec2020,
      sym_rgb,
  [408] = 11,
    ACTIONS(37), 1,
      aux_sym_a98rgb_token1,
    ACTIONS(41), 1,
      anon_sym_POUND,
    ACTIONS(43), 1,
      aux_sym_hsl_token1,
    ACTIONS(45), 1,
      aux_sym_hsv_token1,
    ACTIONS(49), 1,
      aux_sym_oklab_token1,
    ACTIONS(51), 1,
      aux_sym_oklch_token1,
    ACTIONS(53), 1,
      aux_sym_p3_token1,
    ACTIONS(55), 1,
      aux_sym_rec2020_token1,
    ACTIONS(57), 1,
      aux_sym_rgb_token1,
    STATE(43), 1,
      sym__color_value,
    STATE(10), 9,
      sym_a98rgb,
      sym_hex,
      sym_hsl,
      sym_hsv,
      sym_oklab,
      sym_oklch,
      sym_p3,
      sym_rec2020,
      sym_rgb,
  [450] = 3,
    ACTIONS(104), 1,
      anon_sym_DOT,
    STATE(13), 2,
      sym_color_function_call,
      aux_sym__color_value_repeat1,
    ACTIONS(102), 13,
      aux_sym_a98rgb_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_POUND,
      aux_sym_hsl_token1,
      aux_sym_hsv_token1,
      sym_number,
      aux_sym_oklab_token1,
      aux_sym_oklch_token1,
      aux_sym_p3_token1,
      aux_sym_rec2020_token1,
      aux_sym_rgb_token1,
      anon_sym_DOLLAR,
  [473] = 2,
    ACTIONS(108), 1,
      sym_positive_assertion,
    ACTIONS(106), 15,
      aux_sym_a98rgb_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_POUND,
      aux_sym_hsl_token1,
      aux_sym_hsv_token1,
      sym_negative_assertion,
      sym_number,
      aux_sym_oklab_token1,
      aux_sym_oklch_token1,
      aux_sym_p3_token1,
      aux_sym_rec2020_token1,
      aux_sym_rgb_token1,
      anon_sym_DOLLAR,
  [494] = 3,
    ACTIONS(112), 1,
      anon_sym_DOT,
    STATE(12), 2,
      sym_color_function_call,
      aux_sym__color_value_repeat1,
    ACTIONS(110), 13,
      aux_sym_a98rgb_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_POUND,
      aux_sym_hsl_token1,
      aux_sym_hsv_token1,
      sym_number,
      aux_sym_oklab_token1,
      aux_sym_oklch_token1,
      aux_sym_p3_token1,
      aux_sym_rec2020_token1,
      aux_sym_rgb_token1,
      anon_sym_DOLLAR,
  [517] = 3,
    ACTIONS(104), 1,
      anon_sym_DOT,
    STATE(12), 2,
      sym_color_function_call,
      aux_sym__color_value_repeat1,
    ACTIONS(115), 13,
      aux_sym_a98rgb_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_POUND,
      aux_sym_hsl_token1,
      aux_sym_hsv_token1,
      sym_number,
      aux_sym_oklab_token1,
      aux_sym_oklch_token1,
      aux_sym_p3_token1,
      aux_sym_rec2020_token1,
      aux_sym_rgb_token1,
      anon_sym_DOLLAR,
  [540] = 4,
    ACTIONS(119), 1,
      anon_sym_COMMA,
    ACTIONS(121), 1,
      aux_sym_percent_number_token1,
    STATE(16), 1,
      aux_sym_color_function_call_repeat1,
    ACTIONS(117), 12,
      aux_sym_a98rgb_token1,
      anon_sym_RPAREN,
      anon_sym_POUND,
      aux_sym_hsl_token1,
      aux_sym_hsv_token1,
      sym_number,
      aux_sym_oklab_token1,
      aux_sym_oklch_token1,
      aux_sym_p3_token1,
      aux_sym_rec2020_token1,
      aux_sym_rgb_token1,
      anon_sym_DOLLAR,
  [564] = 7,
    ACTIONS(123), 1,
      anon_sym_when,
    ACTIONS(126), 1,
      sym_identifier,
    ACTIONS(129), 1,
      aux_sym_tokens_block_token2,
    STATE(198), 1,
      sym_token_type,
    STATE(199), 1,
      sym_token_declaration,
    STATE(15), 3,
      aux_sym__token_body,
      sym_child_token_block,
      sym_conditional_token_block,
    ACTIONS(131), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [593] = 3,
    ACTIONS(119), 1,
      anon_sym_COMMA,
    STATE(21), 1,
      aux_sym_color_function_call_repeat1,
    ACTIONS(66), 12,
      aux_sym_a98rgb_token1,
      anon_sym_RPAREN,
      anon_sym_POUND,
      aux_sym_hsl_token1,
      aux_sym_hsv_token1,
      sym_number,
      aux_sym_oklab_token1,
      aux_sym_oklch_token1,
      aux_sym_p3_token1,
      aux_sym_rec2020_token1,
      aux_sym_rgb_token1,
      anon_sym_DOLLAR,
  [614] = 7,
    ACTIONS(134), 1,
      anon_sym_when,
    ACTIONS(136), 1,
      sym_identifier,
    ACTIONS(138), 1,
      aux_sym_tokens_block_token2,
    STATE(198), 1,
      sym_token_type,
    STATE(199), 1,
      sym_token_declaration,
    STATE(15), 3,
      aux_sym__token_body,
      sym_child_token_block,
      sym_conditional_token_block,
    ACTIONS(140), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [643] = 1,
    ACTIONS(142), 14,
      aux_sym_a98rgb_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_POUND,
      aux_sym_hsl_token1,
      aux_sym_hsv_token1,
      sym_number,
      aux_sym_oklab_token1,
      aux_sym_oklch_token1,
      aux_sym_p3_token1,
      aux_sym_rec2020_token1,
      aux_sym_rgb_token1,
      anon_sym_DOLLAR,
  [660] = 3,
    ACTIONS(119), 1,
      anon_sym_COMMA,
    STATE(16), 1,
      aux_sym_color_function_call_repeat1,
    ACTIONS(117), 12,
      aux_sym_a98rgb_token1,
      anon_sym_RPAREN,
      anon_sym_POUND,
      aux_sym_hsl_token1,
      aux_sym_hsv_token1,
      sym_number,
      aux_sym_oklab_token1,
      aux_sym_oklch_token1,
      aux_sym_p3_token1,
      aux_sym_rec2020_token1,
      aux_sym_rgb_token1,
      anon_sym_DOLLAR,
  [681] = 1,
    ACTIONS(144), 14,
      aux_sym_a98rgb_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_POUND,
      aux_sym_hsl_token1,
      aux_sym_hsv_token1,
      sym_number,
      aux_sym_oklab_token1,
      aux_sym_oklch_token1,
      aux_sym_p3_token1,
      aux_sym_rec2020_token1,
      aux_sym_rgb_token1,
      anon_sym_DOLLAR,
  [698] = 3,
    ACTIONS(148), 1,
      anon_sym_COMMA,
    STATE(21), 1,
      aux_sym_color_function_call_repeat1,
    ACTIONS(146), 12,
      aux_sym_a98rgb_token1,
      anon_sym_RPAREN,
      anon_sym_POUND,
      aux_sym_hsl_token1,
      aux_sym_hsv_token1,
      sym_number,
      aux_sym_oklab_token1,
      aux_sym_oklch_token1,
      aux_sym_p3_token1,
      aux_sym_rec2020_token1,
      aux_sym_rgb_token1,
      anon_sym_DOLLAR,
  [719] = 7,
    ACTIONS(151), 1,
      anon_sym_RBRACE,
    ACTIONS(153), 1,
      anon_sym_when,
    ACTIONS(155), 1,
      sym_identifier,
    STATE(193), 1,
      sym_token_declaration,
    STATE(198), 1,
      sym_token_type,
    STATE(28), 3,
      aux_sym__token_body,
      sym_child_token_block,
      sym_conditional_token_block,
    ACTIONS(140), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [748] = 1,
    ACTIONS(157), 14,
      aux_sym_a98rgb_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_POUND,
      aux_sym_hsl_token1,
      aux_sym_hsv_token1,
      sym_number,
      aux_sym_oklab_token1,
      aux_sym_oklch_token1,
      aux_sym_p3_token1,
      aux_sym_rec2020_token1,
      aux_sym_rgb_token1,
      anon_sym_DOLLAR,
  [765] = 7,
    ACTIONS(134), 1,
      anon_sym_when,
    ACTIONS(136), 1,
      sym_identifier,
    ACTIONS(159), 1,
      aux_sym_tokens_block_token2,
    STATE(198), 1,
      sym_token_type,
    STATE(199), 1,
      sym_token_declaration,
    STATE(15), 3,
      aux_sym__token_body,
      sym_child_token_block,
      sym_conditional_token_block,
    ACTIONS(140), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [794] = 1,
    ACTIONS(161), 14,
      aux_sym_a98rgb_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_POUND,
      aux_sym_hsl_token1,
      aux_sym_hsv_token1,
      sym_number,
      aux_sym_oklab_token1,
      aux_sym_oklch_token1,
      aux_sym_p3_token1,
      aux_sym_rec2020_token1,
      aux_sym_rgb_token1,
      anon_sym_DOLLAR,
  [811] = 1,
    ACTIONS(163), 14,
      aux_sym_a98rgb_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_POUND,
      aux_sym_hsl_token1,
      aux_sym_hsv_token1,
      sym_number,
      aux_sym_oklab_token1,
      aux_sym_oklch_token1,
      aux_sym_p3_token1,
      aux_sym_rec2020_token1,
      aux_sym_rgb_token1,
      anon_sym_DOLLAR,
  [828] = 7,
    ACTIONS(153), 1,
      anon_sym_when,
    ACTIONS(155), 1,
      sym_identifier,
    ACTIONS(165), 1,
      anon_sym_RBRACE,
    STATE(193), 1,
      sym_token_declaration,
    STATE(198), 1,
      sym_token_type,
    STATE(28), 3,
      aux_sym__token_body,
      sym_child_token_block,
      sym_conditional_token_block,
    ACTIONS(140), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [857] = 7,
    ACTIONS(129), 1,
      anon_sym_RBRACE,
    ACTIONS(167), 1,
      anon_sym_when,
    ACTIONS(170), 1,
      sym_identifier,
    STATE(193), 1,
      sym_token_declaration,
    STATE(198), 1,
      sym_token_type,
    STATE(28), 3,
      aux_sym__token_body,
      sym_child_token_block,
      sym_conditional_token_block,
    ACTIONS(131), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [886] = 1,
    ACTIONS(173), 14,
      aux_sym_a98rgb_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_POUND,
      aux_sym_hsl_token1,
      aux_sym_hsv_token1,
      sym_number,
      aux_sym_oklab_token1,
      aux_sym_oklch_token1,
      aux_sym_p3_token1,
      aux_sym_rec2020_token1,
      aux_sym_rgb_token1,
      anon_sym_DOLLAR,
  [903] = 1,
    ACTIONS(175), 14,
      aux_sym_a98rgb_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_POUND,
      aux_sym_hsl_token1,
      aux_sym_hsv_token1,
      sym_number,
      aux_sym_oklab_token1,
      aux_sym_oklch_token1,
      aux_sym_p3_token1,
      aux_sym_rec2020_token1,
      aux_sym_rgb_token1,
      anon_sym_DOLLAR,
  [920] = 1,
    ACTIONS(177), 14,
      aux_sym_a98rgb_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_POUND,
      aux_sym_hsl_token1,
      aux_sym_hsv_token1,
      sym_number,
      aux_sym_oklab_token1,
      aux_sym_oklch_token1,
      aux_sym_p3_token1,
      aux_sym_rec2020_token1,
      aux_sym_rgb_token1,
      anon_sym_DOLLAR,
  [937] = 1,
    ACTIONS(179), 14,
      aux_sym_a98rgb_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_POUND,
      aux_sym_hsl_token1,
      aux_sym_hsv_token1,
      sym_number,
      aux_sym_oklab_token1,
      aux_sym_oklch_token1,
      aux_sym_p3_token1,
      aux_sym_rec2020_token1,
      aux_sym_rgb_token1,
      anon_sym_DOLLAR,
  [954] = 1,
    ACTIONS(181), 14,
      aux_sym_a98rgb_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_POUND,
      aux_sym_hsl_token1,
      aux_sym_hsv_token1,
      sym_number,
      aux_sym_oklab_token1,
      aux_sym_oklch_token1,
      aux_sym_p3_token1,
      aux_sym_rec2020_token1,
      aux_sym_rgb_token1,
      anon_sym_DOLLAR,
  [971] = 1,
    ACTIONS(183), 14,
      aux_sym_a98rgb_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_POUND,
      aux_sym_hsl_token1,
      aux_sym_hsv_token1,
      sym_number,
      aux_sym_oklab_token1,
      aux_sym_oklch_token1,
      aux_sym_p3_token1,
      aux_sym_rec2020_token1,
      aux_sym_rgb_token1,
      anon_sym_DOLLAR,
  [988] = 1,
    ACTIONS(185), 14,
      aux_sym_a98rgb_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_POUND,
      aux_sym_hsl_token1,
      aux_sym_hsv_token1,
      sym_number,
      aux_sym_oklab_token1,
      aux_sym_oklch_token1,
      aux_sym_p3_token1,
      aux_sym_rec2020_token1,
      aux_sym_rgb_token1,
      anon_sym_DOLLAR,
  [1005] = 1,
    ACTIONS(187), 14,
      aux_sym_a98rgb_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_POUND,
      aux_sym_hsl_token1,
      aux_sym_hsv_token1,
      sym_number,
      aux_sym_oklab_token1,
      aux_sym_oklch_token1,
      aux_sym_p3_token1,
      aux_sym_rec2020_token1,
      aux_sym_rgb_token1,
      anon_sym_DOLLAR,
  [1022] = 1,
    ACTIONS(189), 14,
      aux_sym_a98rgb_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_POUND,
      aux_sym_hsl_token1,
      aux_sym_hsv_token1,
      sym_number,
      aux_sym_oklab_token1,
      aux_sym_oklch_token1,
      aux_sym_p3_token1,
      aux_sym_rec2020_token1,
      aux_sym_rgb_token1,
      anon_sym_DOLLAR,
  [1039] = 1,
    ACTIONS(191), 14,
      aux_sym_a98rgb_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_POUND,
      aux_sym_hsl_token1,
      aux_sym_hsv_token1,
      sym_number,
      aux_sym_oklab_token1,
      aux_sym_oklch_token1,
      aux_sym_p3_token1,
      aux_sym_rec2020_token1,
      aux_sym_rgb_token1,
      anon_sym_DOLLAR,
  [1056] = 1,
    ACTIONS(193), 14,
      aux_sym_a98rgb_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_POUND,
      aux_sym_hsl_token1,
      aux_sym_hsv_token1,
      sym_number,
      aux_sym_oklab_token1,
      aux_sym_oklch_token1,
      aux_sym_p3_token1,
      aux_sym_rec2020_token1,
      aux_sym_rgb_token1,
      anon_sym_DOLLAR,
  [1073] = 1,
    ACTIONS(195), 14,
      aux_sym_a98rgb_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_POUND,
      aux_sym_hsl_token1,
      aux_sym_hsv_token1,
      sym_number,
      aux_sym_oklab_token1,
      aux_sym_oklch_token1,
      aux_sym_p3_token1,
      aux_sym_rec2020_token1,
      aux_sym_rgb_token1,
      anon_sym_DOLLAR,
  [1090] = 1,
    ACTIONS(197), 14,
      aux_sym_a98rgb_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_POUND,
      aux_sym_hsl_token1,
      aux_sym_hsv_token1,
      sym_number,
      aux_sym_oklab_token1,
      aux_sym_oklch_token1,
      aux_sym_p3_token1,
      aux_sym_rec2020_token1,
      aux_sym_rgb_token1,
      anon_sym_DOLLAR,
  [1107] = 1,
    ACTIONS(199), 14,
      aux_sym_a98rgb_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_POUND,
      aux_sym_hsl_token1,
      aux_sym_hsv_token1,
      sym_number,
      aux_sym_oklab_token1,
      aux_sym_oklch_token1,
      aux_sym_p3_token1,
      aux_sym_rec2020_token1,
      aux_sym_rgb_token1,
      anon_sym_DOLLAR,
  [1124] = 1,
    ACTIONS(146), 13,
      aux_sym_a98rgb_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_POUND,
      aux_sym_hsl_token1,
      aux_sym_hsv_token1,
      sym_number,
      aux_sym_oklab_token1,
      aux_sym_oklch_token1,
      aux_sym_p3_token1,
      aux_sym_rec2020_token1,
      aux_sym_rgb_token1,
      anon_sym_DOLLAR,
  [1140] = 6,
    ACTIONS(153), 1,
      anon_sym_when,
    ACTIONS(155), 1,
      sym_identifier,
    STATE(193), 1,
      sym_token_declaration,
    STATE(198), 1,
      sym_token_type,
    STATE(27), 3,
      aux_sym__token_body,
      sym_child_token_block,
      sym_conditional_token_block,
    ACTIONS(140), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [1166] = 6,
    ACTIONS(153), 1,
      anon_sym_when,
    ACTIONS(155), 1,
      sym_identifier,
    STATE(193), 1,
      sym_token_declaration,
    STATE(198), 1,
      sym_token_type,
    STATE(22), 3,
      aux_sym__token_body,
      sym_child_token_block,
      sym_conditional_token_block,
    ACTIONS(140), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [1192] = 6,
    ACTIONS(134), 1,
      anon_sym_when,
    ACTIONS(136), 1,
      sym_identifier,
    STATE(198), 1,
      sym_token_type,
    STATE(199), 1,
      sym_token_declaration,
    STATE(24), 3,
      aux_sym__token_body,
      sym_child_token_block,
      sym_conditional_token_block,
    ACTIONS(140), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [1218] = 1,
    ACTIONS(201), 13,
      aux_sym_a98rgb_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_POUND,
      aux_sym_hsl_token1,
      aux_sym_hsv_token1,
      sym_number,
      aux_sym_oklab_token1,
      aux_sym_oklch_token1,
      aux_sym_p3_token1,
      aux_sym_rec2020_token1,
      aux_sym_rgb_token1,
      anon_sym_DOLLAR,
  [1234] = 6,
    ACTIONS(134), 1,
      anon_sym_when,
    ACTIONS(136), 1,
      sym_identifier,
    STATE(198), 1,
      sym_token_type,
    STATE(199), 1,
      sym_token_declaration,
    STATE(17), 3,
      aux_sym__token_body,
      sym_child_token_block,
      sym_conditional_token_block,
    ACTIONS(140), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [1260] = 2,
    ACTIONS(205), 1,
      aux_sym_tokens_block_token2,
    ACTIONS(203), 8,
      anon_sym_when,
      sym_identifier,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [1274] = 2,
    ACTIONS(209), 1,
      aux_sym_tokens_block_token2,
    ACTIONS(207), 8,
      anon_sym_when,
      sym_identifier,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [1288] = 2,
    ACTIONS(213), 1,
      aux_sym_tokens_block_token2,
    ACTIONS(211), 8,
      anon_sym_when,
      sym_identifier,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [1302] = 2,
    ACTIONS(205), 1,
      anon_sym_RBRACE,
    ACTIONS(203), 8,
      anon_sym_when,
      sym_identifier,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [1316] = 2,
    ACTIONS(217), 1,
      aux_sym_tokens_block_token2,
    ACTIONS(215), 8,
      anon_sym_when,
      sym_identifier,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [1330] = 2,
    ACTIONS(217), 1,
      anon_sym_RBRACE,
    ACTIONS(215), 8,
      anon_sym_when,
      sym_identifier,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [1344] = 2,
    ACTIONS(129), 1,
      aux_sym_tokens_block_token2,
    ACTIONS(219), 8,
      anon_sym_when,
      sym_identifier,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [1358] = 2,
    ACTIONS(209), 1,
      anon_sym_RBRACE,
    ACTIONS(207), 8,
      anon_sym_when,
      sym_identifier,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [1372] = 2,
    ACTIONS(129), 1,
      anon_sym_RBRACE,
    ACTIONS(219), 8,
      anon_sym_when,
      sym_identifier,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [1386] = 2,
    ACTIONS(213), 1,
      anon_sym_RBRACE,
    ACTIONS(211), 8,
      anon_sym_when,
      sym_identifier,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [1400] = 4,
    ACTIONS(7), 1,
      anon_sym_tokens,
    ACTIONS(221), 1,
      ts_builtin_sym_end,
    ACTIONS(223), 2,
      sym_multi_line_comment,
      sym_single_line_comment,
    STATE(60), 2,
      sym_tokens_block,
      aux_sym_source_file_repeat1,
  [1415] = 4,
    ACTIONS(225), 1,
      ts_builtin_sym_end,
    ACTIONS(230), 1,
      anon_sym_tokens,
    ACTIONS(227), 2,
      sym_multi_line_comment,
      sym_single_line_comment,
    STATE(60), 2,
      sym_tokens_block,
      aux_sym_source_file_repeat1,
  [1430] = 2,
    ACTIONS(235), 1,
      aux_sym_hex_token4,
    ACTIONS(233), 3,
      aux_sym_hex_token1,
      aux_sym_hex_token2,
      aux_sym_hex_token3,
  [1439] = 4,
    ACTIONS(237), 1,
      anon_sym_RBRACE,
    ACTIONS(239), 1,
      sym_negative_assertion,
    ACTIONS(242), 1,
      sym_positive_assertion,
    STATE(62), 1,
      aux_sym_conditional_token_block_repeat2,
  [1452] = 4,
    ACTIONS(245), 1,
      anon_sym_RBRACE,
    ACTIONS(247), 1,
      sym_identifier,
    STATE(74), 1,
      aux_sym_conditional_token_block_repeat1,
    STATE(149), 1,
      sym_token_assignment,
  [1465] = 3,
    ACTIONS(110), 1,
      sym__newlines,
    ACTIONS(249), 1,
      anon_sym_DOT,
    STATE(64), 2,
      sym_color_function_call,
      aux_sym__color_value_repeat1,
  [1476] = 4,
    ACTIONS(252), 1,
      anon_sym_RBRACE,
    ACTIONS(254), 1,
      sym_negative_assertion,
    ACTIONS(256), 1,
      sym_positive_assertion,
    STATE(62), 1,
      aux_sym_conditional_token_block_repeat2,
  [1489] = 3,
    ACTIONS(102), 1,
      sym__newlines,
    ACTIONS(258), 1,
      anon_sym_DOT,
    STATE(67), 2,
      sym_color_function_call,
      aux_sym__color_value_repeat1,
  [1500] = 3,
    ACTIONS(115), 1,
      sym__newlines,
    ACTIONS(258), 1,
      anon_sym_DOT,
    STATE(64), 2,
      sym_color_function_call,
      aux_sym__color_value_repeat1,
  [1511] = 4,
    ACTIONS(247), 1,
      sym_identifier,
    ACTIONS(260), 1,
      anon_sym_RBRACE,
    STATE(63), 1,
      aux_sym_conditional_token_block_repeat1,
    STATE(149), 1,
      sym_token_assignment,
  [1524] = 2,
    ACTIONS(264), 1,
      aux_sym_hex_token4,
    ACTIONS(262), 3,
      aux_sym_hex_token1,
      aux_sym_hex_token2,
      aux_sym_hex_token3,
  [1533] = 4,
    ACTIONS(247), 1,
      sym_identifier,
    ACTIONS(266), 1,
      anon_sym_RBRACE,
    STATE(71), 1,
      aux_sym_conditional_token_block_repeat1,
    STATE(149), 1,
      sym_token_assignment,
  [1546] = 4,
    ACTIONS(247), 1,
      sym_identifier,
    ACTIONS(268), 1,
      anon_sym_RBRACE,
    STATE(74), 1,
      aux_sym_conditional_token_block_repeat1,
    STATE(149), 1,
      sym_token_assignment,
  [1559] = 4,
    ACTIONS(247), 1,
      sym_identifier,
    ACTIONS(270), 1,
      anon_sym_RBRACE,
    STATE(74), 1,
      aux_sym_conditional_token_block_repeat1,
    STATE(149), 1,
      sym_token_assignment,
  [1572] = 1,
    ACTIONS(272), 4,
      ts_builtin_sym_end,
      sym_multi_line_comment,
      sym_single_line_comment,
      anon_sym_tokens,
  [1579] = 4,
    ACTIONS(274), 1,
      anon_sym_RBRACE,
    ACTIONS(276), 1,
      sym_identifier,
    STATE(74), 1,
      aux_sym_conditional_token_block_repeat1,
    STATE(149), 1,
      sym_token_assignment,
  [1592] = 4,
    ACTIONS(254), 1,
      sym_negative_assertion,
    ACTIONS(256), 1,
      sym_positive_assertion,
    ACTIONS(279), 1,
      anon_sym_RBRACE,
    STATE(62), 1,
      aux_sym_conditional_token_block_repeat2,
  [1605] = 4,
    ACTIONS(247), 1,
      sym_identifier,
    ACTIONS(281), 1,
      anon_sym_RBRACE,
    STATE(72), 1,
      aux_sym_conditional_token_block_repeat1,
    STATE(149), 1,
      sym_token_assignment,
  [1618] = 1,
    ACTIONS(283), 4,
      ts_builtin_sym_end,
      sym_multi_line_comment,
      sym_single_line_comment,
      anon_sym_tokens,
  [1625] = 3,
    ACTIONS(285), 1,
      sym__newlines,
    ACTIONS(287), 1,
      anon_sym_COMMA,
    STATE(79), 1,
      aux_sym_switch_repeat1,
  [1635] = 3,
    ACTIONS(289), 1,
      sym__newlines,
    ACTIONS(291), 1,
      anon_sym_COMMA,
    STATE(79), 1,
      aux_sym_switch_repeat1,
  [1645] = 3,
    ACTIONS(289), 1,
      sym__newlines,
    ACTIONS(294), 1,
      anon_sym_COMMA,
    ACTIONS(296), 1,
      sym_asterisk,
  [1655] = 3,
    ACTIONS(254), 1,
      sym_negative_assertion,
    ACTIONS(256), 1,
      sym_positive_assertion,
    STATE(75), 1,
      aux_sym_conditional_token_block_repeat2,
  [1665] = 2,
    ACTIONS(300), 1,
      sym_positive_assertion,
    ACTIONS(298), 2,
      anon_sym_RBRACE,
      sym_negative_assertion,
  [1673] = 3,
    ACTIONS(302), 1,
      anon_sym_COMMA,
    ACTIONS(304), 1,
      sym_asterisk,
    STATE(88), 1,
      aux_sym_switch_repeat1,
  [1683] = 3,
    ACTIONS(306), 1,
      anon_sym_LBRACE,
    ACTIONS(308), 1,
      sym_negative_assertion,
    ACTIONS(310), 1,
      sym_positive_assertion,
  [1693] = 3,
    ACTIONS(254), 1,
      sym_negative_assertion,
    ACTIONS(256), 1,
      sym_positive_assertion,
    STATE(65), 1,
      aux_sym_conditional_token_block_repeat2,
  [1703] = 3,
    ACTIONS(312), 1,
      anon_sym_LBRACE,
    ACTIONS(314), 1,
      sym_negative_assertion,
    ACTIONS(316), 1,
      sym_positive_assertion,
  [1713] = 2,
    ACTIONS(320), 1,
      sym_positive_assertion,
    ACTIONS(318), 2,
      anon_sym_RBRACE,
      sym_negative_assertion,
  [1721] = 3,
    ACTIONS(287), 1,
      anon_sym_COMMA,
    ACTIONS(322), 1,
      sym__newlines,
    STATE(79), 1,
      aux_sym_switch_repeat1,
  [1731] = 2,
    ACTIONS(193), 1,
      sym__newlines,
    ACTIONS(324), 1,
      anon_sym_DOT,
  [1738] = 2,
    ACTIONS(195), 1,
      sym__newlines,
    ACTIONS(326), 1,
      anon_sym_DOT,
  [1745] = 2,
    ACTIONS(59), 1,
      anon_sym_DOLLAR,
    STATE(84), 1,
      sym_token_reference,
  [1752] = 2,
    ACTIONS(59), 1,
      anon_sym_DOLLAR,
    STATE(86), 1,
      sym_token_reference,
  [1759] = 2,
    ACTIONS(328), 1,
      anon_sym_COMMA,
    ACTIONS(330), 1,
      anon_sym_RPAREN,
  [1766] = 2,
    ACTIONS(332), 1,
      anon_sym_COMMA,
    ACTIONS(334), 1,
      anon_sym_RPAREN,
  [1773] = 2,
    ACTIONS(336), 1,
      anon_sym_COMMA,
    ACTIONS(338), 1,
      anon_sym_RPAREN,
  [1780] = 2,
    ACTIONS(340), 1,
      anon_sym_COMMA,
    ACTIONS(342), 1,
      anon_sym_RPAREN,
  [1787] = 1,
    ACTIONS(274), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [1792] = 2,
    ACTIONS(344), 1,
      anon_sym_COMMA,
    ACTIONS(346), 1,
      anon_sym_RPAREN,
  [1799] = 2,
    ACTIONS(348), 1,
      anon_sym_COMMA,
    ACTIONS(350), 1,
      anon_sym_RPAREN,
  [1806] = 2,
    ACTIONS(352), 1,
      anon_sym_COMMA,
    ACTIONS(354), 1,
      anon_sym_RPAREN,
  [1813] = 2,
    ACTIONS(356), 1,
      sym__newlines,
    ACTIONS(358), 1,
      anon_sym_COMMA,
  [1820] = 2,
    ACTIONS(360), 1,
      anon_sym_COMMA,
    ACTIONS(362), 1,
      anon_sym_RPAREN,
  [1827] = 2,
    ACTIONS(142), 1,
      sym__newlines,
    ACTIONS(364), 1,
      anon_sym_DOT,
  [1834] = 2,
    ACTIONS(302), 1,
      anon_sym_COMMA,
    STATE(78), 1,
      aux_sym_switch_repeat1,
  [1841] = 2,
    ACTIONS(175), 1,
      sym__newlines,
    ACTIONS(366), 1,
      anon_sym_DOT,
  [1848] = 2,
    ACTIONS(173), 1,
      sym__newlines,
    ACTIONS(368), 1,
      anon_sym_DOT,
  [1855] = 2,
    ACTIONS(179), 1,
      sym__newlines,
    ACTIONS(370), 1,
      anon_sym_DOT,
  [1862] = 2,
    ACTIONS(163), 1,
      sym__newlines,
    ACTIONS(372), 1,
      anon_sym_DOT,
  [1869] = 2,
    ACTIONS(187), 1,
      sym__newlines,
    ACTIONS(374), 1,
      anon_sym_DOT,
  [1876] = 2,
    ACTIONS(191), 1,
      sym__newlines,
    ACTIONS(376), 1,
      anon_sym_DOT,
  [1883] = 2,
    ACTIONS(189), 1,
      sym__newlines,
    ACTIONS(378), 1,
      anon_sym_DOT,
  [1890] = 2,
    ACTIONS(185), 1,
      sym__newlines,
    ACTIONS(380), 1,
      anon_sym_DOT,
  [1897] = 2,
    ACTIONS(144), 1,
      sym__newlines,
    ACTIONS(382), 1,
      anon_sym_DOT,
  [1904] = 2,
    ACTIONS(183), 1,
      sym__newlines,
    ACTIONS(384), 1,
      anon_sym_DOT,
  [1911] = 2,
    ACTIONS(199), 1,
      sym__newlines,
    ACTIONS(386), 1,
      anon_sym_DOT,
  [1918] = 2,
    ACTIONS(157), 1,
      sym__newlines,
    ACTIONS(388), 1,
      anon_sym_DOT,
  [1925] = 2,
    ACTIONS(390), 1,
      anon_sym_COMMA,
    ACTIONS(392), 1,
      anon_sym_RPAREN,
  [1932] = 2,
    ACTIONS(394), 1,
      anon_sym_COMMA,
    ACTIONS(396), 1,
      anon_sym_RPAREN,
  [1939] = 2,
    ACTIONS(398), 1,
      anon_sym_COMMA,
    ACTIONS(400), 1,
      anon_sym_RPAREN,
  [1946] = 2,
    ACTIONS(402), 1,
      anon_sym_COMMA,
    ACTIONS(404), 1,
      anon_sym_RPAREN,
  [1953] = 2,
    ACTIONS(406), 1,
      anon_sym_COMMA,
    ACTIONS(408), 1,
      anon_sym_RPAREN,
  [1960] = 2,
    ACTIONS(410), 1,
      anon_sym_COMMA,
    ACTIONS(412), 1,
      anon_sym_RPAREN,
  [1967] = 2,
    ACTIONS(414), 1,
      anon_sym_COMMA,
    ACTIONS(416), 1,
      anon_sym_RPAREN,
  [1974] = 2,
    ACTIONS(418), 1,
      anon_sym_COMMA,
    ACTIONS(420), 1,
      anon_sym_RPAREN,
  [1981] = 2,
    ACTIONS(422), 1,
      sym_identifier,
    ACTIONS(424), 1,
      aux_sym_tokens_block_token1,
  [1988] = 2,
    ACTIONS(181), 1,
      sym__newlines,
    ACTIONS(426), 1,
      anon_sym_DOT,
  [1995] = 2,
    ACTIONS(197), 1,
      sym__newlines,
    ACTIONS(428), 1,
      anon_sym_DOT,
  [2002] = 2,
    ACTIONS(161), 1,
      sym__newlines,
    ACTIONS(430), 1,
      anon_sym_DOT,
  [2009] = 2,
    ACTIONS(177), 1,
      sym__newlines,
    ACTIONS(432), 1,
      anon_sym_DOT,
  [2016] = 1,
    ACTIONS(434), 1,
      sym_decimal_range,
  [2020] = 1,
    ACTIONS(436), 1,
      anon_sym_COMMA,
  [2024] = 1,
    ACTIONS(438), 1,
      anon_sym_COMMA,
  [2028] = 1,
    ACTIONS(440), 1,
      sym__newlines,
  [2032] = 1,
    ACTIONS(442), 1,
      sym_decimal_range,
  [2036] = 1,
    ACTIONS(444), 1,
      sym_number,
  [2040] = 1,
    ACTIONS(446), 1,
      sym_number,
  [2044] = 1,
    ACTIONS(448), 1,
      sym_decimal_range,
  [2048] = 1,
    ACTIONS(450), 1,
      sym_number,
  [2052] = 1,
    ACTIONS(452), 1,
      sym_decimal_range,
  [2056] = 1,
    ACTIONS(454), 1,
      sym_decimal_range,
  [2060] = 1,
    ACTIONS(456), 1,
      sym_number,
  [2064] = 1,
    ACTIONS(458), 1,
      sym_number,
  [2068] = 1,
    ACTIONS(460), 1,
      sym_decimal_range,
  [2072] = 1,
    ACTIONS(462), 1,
      sym__newlines,
  [2076] = 1,
    ACTIONS(464), 1,
      sym_decimal_range,
  [2080] = 1,
    ACTIONS(466), 1,
      sym_decimal_range,
  [2084] = 1,
    ACTIONS(468), 1,
      sym_decimal_range,
  [2088] = 1,
    ACTIONS(470), 1,
      sym_decimal_range,
  [2092] = 1,
    ACTIONS(472), 1,
      sym__newlines,
  [2096] = 1,
    ACTIONS(474), 1,
      sym_decimal_range,
  [2100] = 1,
    ACTIONS(476), 1,
      sym_decimal_range,
  [2104] = 1,
    ACTIONS(478), 1,
      sym_decimal_range,
  [2108] = 1,
    ACTIONS(480), 1,
      sym_decimal_range,
  [2112] = 1,
    ACTIONS(482), 1,
      anon_sym_COLON,
  [2116] = 1,
    ACTIONS(484), 1,
      sym_color_function_name,
  [2120] = 1,
    ACTIONS(486), 1,
      anon_sym_RPAREN,
  [2124] = 1,
    ACTIONS(488), 1,
      anon_sym_RPAREN,
  [2128] = 1,
    ACTIONS(490), 1,
      anon_sym_RPAREN,
  [2132] = 1,
    ACTIONS(492), 1,
      anon_sym_RPAREN,
  [2136] = 1,
    ACTIONS(494), 1,
      anon_sym_RPAREN,
  [2140] = 1,
    ACTIONS(496), 1,
      anon_sym_RPAREN,
  [2144] = 1,
    ACTIONS(498), 1,
      anon_sym_RPAREN,
  [2148] = 1,
    ACTIONS(500), 1,
      anon_sym_RPAREN,
  [2152] = 1,
    ACTIONS(502), 1,
      anon_sym_COMMA,
  [2156] = 1,
    ACTIONS(504), 1,
      anon_sym_COMMA,
  [2160] = 1,
    ACTIONS(106), 1,
      sym__newlines,
  [2164] = 1,
    ACTIONS(506), 1,
      anon_sym_COMMA,
  [2168] = 1,
    ACTIONS(508), 1,
      anon_sym_COMMA,
  [2172] = 1,
    ACTIONS(510), 1,
      anon_sym_COMMA,
  [2176] = 1,
    ACTIONS(512), 1,
      sym__newlines,
  [2180] = 1,
    ACTIONS(514), 1,
      sym_decimal_range,
  [2184] = 1,
    ACTIONS(516), 1,
      sym_identifier,
  [2188] = 1,
    ACTIONS(518), 1,
      anon_sym_COMMA,
  [2192] = 1,
    ACTIONS(520), 1,
      anon_sym_COMMA,
  [2196] = 1,
    ACTIONS(522), 1,
      anon_sym_COMMA,
  [2200] = 1,
    ACTIONS(524), 1,
      anon_sym_COMMA,
  [2204] = 1,
    ACTIONS(526), 1,
      aux_sym__string_token1,
  [2208] = 1,
    ACTIONS(528), 1,
      anon_sym_LBRACE,
  [2212] = 1,
    ACTIONS(530), 1,
      sym__newlines,
  [2216] = 1,
    ACTIONS(532), 1,
      sym_number,
  [2220] = 1,
    ACTIONS(534), 1,
      sym_decimal_range,
  [2224] = 1,
    ACTIONS(536), 1,
      sym_number,
  [2228] = 1,
    ACTIONS(538), 1,
      sym_decimal_range,
  [2232] = 1,
    ACTIONS(540), 1,
      sym_decimal_range,
  [2236] = 1,
    ACTIONS(542), 1,
      sym_dimensional_unit,
  [2240] = 1,
    ACTIONS(544), 1,
      sym_number,
  [2244] = 1,
    ACTIONS(546), 1,
      sym_number,
  [2248] = 1,
    ACTIONS(548), 1,
      sym__newlines,
  [2252] = 1,
    ACTIONS(550), 1,
      sym_decimal_range,
  [2256] = 1,
    ACTIONS(552), 1,
      sym_string,
  [2260] = 1,
    ACTIONS(554), 1,
      anon_sym_LBRACE,
  [2264] = 1,
    ACTIONS(556), 1,
      sym_identifier,
  [2268] = 1,
    ACTIONS(558), 1,
      sym__newlines,
  [2272] = 1,
    ACTIONS(560), 1,
      sym_ref_identifier,
  [2276] = 1,
    ACTIONS(562), 1,
      sym_identifier,
  [2280] = 1,
    ACTIONS(564), 1,
      anon_sym_COLON,
  [2284] = 1,
    ACTIONS(566), 1,
      sym_ref_identifier,
  [2288] = 1,
    ACTIONS(568), 1,
      sym_identifier,
  [2292] = 1,
    ACTIONS(570), 1,
      sym__newlines,
  [2296] = 1,
    ACTIONS(572), 1,
      sym_identifier,
  [2300] = 1,
    ACTIONS(574), 1,
      anon_sym_LBRACE,
  [2304] = 1,
    ACTIONS(576), 1,
      anon_sym_COMMA,
  [2308] = 1,
    ACTIONS(578), 1,
      anon_sym_COMMA,
  [2312] = 1,
    ACTIONS(580), 1,
      anon_sym_COMMA,
  [2316] = 1,
    ACTIONS(582), 1,
      anon_sym_COMMA,
  [2320] = 1,
    ACTIONS(584), 1,
      anon_sym_COMMA,
  [2324] = 1,
    ACTIONS(586), 1,
      anon_sym_LPAREN,
  [2328] = 1,
    ACTIONS(588), 1,
      sym_number,
  [2332] = 1,
    ACTIONS(590), 1,
      sym_decimal_range,
  [2336] = 1,
    ACTIONS(592), 1,
      anon_sym_RPAREN,
  [2340] = 1,
    ACTIONS(594), 1,
      anon_sym_RPAREN,
  [2344] = 1,
    ACTIONS(596), 1,
      anon_sym_RPAREN,
  [2348] = 1,
    ACTIONS(598), 1,
      anon_sym_RPAREN,
  [2352] = 1,
    ACTIONS(600), 1,
      anon_sym_RPAREN,
  [2356] = 1,
    ACTIONS(602), 1,
      anon_sym_RPAREN,
  [2360] = 1,
    ACTIONS(604), 1,
      anon_sym_RPAREN,
  [2364] = 1,
    ACTIONS(606), 1,
      anon_sym_RPAREN,
  [2368] = 1,
    ACTIONS(608), 1,
      sym_decimal_range,
  [2372] = 1,
    ACTIONS(610), 1,
      aux_sym_tokens_block_token1,
  [2376] = 1,
    ACTIONS(612), 1,
      anon_sym_LBRACE,
  [2380] = 1,
    ACTIONS(614), 1,
      anon_sym_LPAREN,
  [2384] = 1,
    ACTIONS(616), 1,
      sym_decimal_range,
  [2388] = 1,
    ACTIONS(618), 1,
      sym_number,
  [2392] = 1,
    ACTIONS(620), 1,
      sym_number,
  [2396] = 1,
    ACTIONS(622), 1,
      sym_decimal_range,
  [2400] = 1,
    ACTIONS(624), 1,
      sym_number,
  [2404] = 1,
    ACTIONS(626), 1,
      sym_decimal_range,
  [2408] = 1,
    ACTIONS(628), 1,
      sym_decimal_range,
  [2412] = 1,
    ACTIONS(630), 1,
      sym_number,
  [2416] = 1,
    ACTIONS(632), 1,
      sym_decimal_range,
  [2420] = 1,
    ACTIONS(634), 1,
      sym_decimal_range,
  [2424] = 1,
    ACTIONS(636), 1,
      sym_decimal_range,
  [2428] = 1,
    ACTIONS(638), 1,
      sym_decimal_range,
  [2432] = 1,
    ACTIONS(640), 1,
      sym_decimal_range,
  [2436] = 1,
    ACTIONS(642), 1,
      sym_decimal_range,
  [2440] = 1,
    ACTIONS(644), 1,
      sym_decimal_range,
  [2444] = 1,
    ACTIONS(646), 1,
      sym_decimal_range,
  [2448] = 1,
    ACTIONS(648), 1,
      anon_sym_LBRACE,
  [2452] = 1,
    ACTIONS(650), 1,
      ts_builtin_sym_end,
  [2456] = 1,
    ACTIONS(652), 1,
      sym_identifier,
  [2460] = 1,
    ACTIONS(654), 1,
      sym_color_function_name,
  [2464] = 1,
    ACTIONS(656), 1,
      anon_sym_COMMA,
  [2468] = 1,
    ACTIONS(658), 1,
      anon_sym_COMMA,
  [2472] = 1,
    ACTIONS(660), 1,
      anon_sym_COMMA,
  [2476] = 1,
    ACTIONS(662), 1,
      anon_sym_COMMA,
  [2480] = 1,
    ACTIONS(664), 1,
      anon_sym_COMMA,
  [2484] = 1,
    ACTIONS(666), 1,
      anon_sym_COMMA,
  [2488] = 1,
    ACTIONS(668), 1,
      anon_sym_COMMA,
  [2492] = 1,
    ACTIONS(670), 1,
      anon_sym_COMMA,
  [2496] = 1,
    ACTIONS(672), 1,
      sym_decimal_range,
  [2500] = 1,
    ACTIONS(674), 1,
      sym_decimal_range,
  [2504] = 1,
    ACTIONS(676), 1,
      sym_number,
  [2508] = 1,
    ACTIONS(678), 1,
      sym_number,
  [2512] = 1,
    ACTIONS(680), 1,
      sym_decimal_range,
  [2516] = 1,
    ACTIONS(682), 1,
      sym_decimal_range,
  [2520] = 1,
    ACTIONS(684), 1,
      sym_decimal_range,
  [2524] = 1,
    ACTIONS(686), 1,
      sym_decimal_range,
  [2528] = 1,
    ACTIONS(688), 1,
      sym_number,
  [2532] = 1,
    ACTIONS(690), 1,
      anon_sym_COMMA,
  [2536] = 1,
    ACTIONS(692), 1,
      anon_sym_COMMA,
  [2540] = 1,
    ACTIONS(694), 1,
      anon_sym_COMMA,
  [2544] = 1,
    ACTIONS(696), 1,
      anon_sym_COMMA,
  [2548] = 1,
    ACTIONS(698), 1,
      anon_sym_COMMA,
  [2552] = 1,
    ACTIONS(700), 1,
      anon_sym_COMMA,
  [2556] = 1,
    ACTIONS(702), 1,
      anon_sym_COMMA,
  [2560] = 1,
    ACTIONS(704), 1,
      anon_sym_COMMA,
  [2564] = 1,
    ACTIONS(706), 1,
      sym_decimal_range,
  [2568] = 1,
    ACTIONS(708), 1,
      sym_number,
  [2572] = 1,
    ACTIONS(710), 1,
      sym_number,
  [2576] = 1,
    ACTIONS(712), 1,
      sym_decimal_range,
  [2580] = 1,
    ACTIONS(714), 1,
      sym_decimal_range,
  [2584] = 1,
    ACTIONS(716), 1,
      sym_decimal_range,
  [2588] = 1,
    ACTIONS(718), 1,
      sym_decimal_range,
  [2592] = 1,
    ACTIONS(720), 1,
      sym_number,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 64,
  [SMALL_STATE(4)] = 128,
  [SMALL_STATE(5)] = 184,
  [SMALL_STATE(6)] = 240,
  [SMALL_STATE(7)] = 296,
  [SMALL_STATE(8)] = 352,
  [SMALL_STATE(9)] = 408,
  [SMALL_STATE(10)] = 450,
  [SMALL_STATE(11)] = 473,
  [SMALL_STATE(12)] = 494,
  [SMALL_STATE(13)] = 517,
  [SMALL_STATE(14)] = 540,
  [SMALL_STATE(15)] = 564,
  [SMALL_STATE(16)] = 593,
  [SMALL_STATE(17)] = 614,
  [SMALL_STATE(18)] = 643,
  [SMALL_STATE(19)] = 660,
  [SMALL_STATE(20)] = 681,
  [SMALL_STATE(21)] = 698,
  [SMALL_STATE(22)] = 719,
  [SMALL_STATE(23)] = 748,
  [SMALL_STATE(24)] = 765,
  [SMALL_STATE(25)] = 794,
  [SMALL_STATE(26)] = 811,
  [SMALL_STATE(27)] = 828,
  [SMALL_STATE(28)] = 857,
  [SMALL_STATE(29)] = 886,
  [SMALL_STATE(30)] = 903,
  [SMALL_STATE(31)] = 920,
  [SMALL_STATE(32)] = 937,
  [SMALL_STATE(33)] = 954,
  [SMALL_STATE(34)] = 971,
  [SMALL_STATE(35)] = 988,
  [SMALL_STATE(36)] = 1005,
  [SMALL_STATE(37)] = 1022,
  [SMALL_STATE(38)] = 1039,
  [SMALL_STATE(39)] = 1056,
  [SMALL_STATE(40)] = 1073,
  [SMALL_STATE(41)] = 1090,
  [SMALL_STATE(42)] = 1107,
  [SMALL_STATE(43)] = 1124,
  [SMALL_STATE(44)] = 1140,
  [SMALL_STATE(45)] = 1166,
  [SMALL_STATE(46)] = 1192,
  [SMALL_STATE(47)] = 1218,
  [SMALL_STATE(48)] = 1234,
  [SMALL_STATE(49)] = 1260,
  [SMALL_STATE(50)] = 1274,
  [SMALL_STATE(51)] = 1288,
  [SMALL_STATE(52)] = 1302,
  [SMALL_STATE(53)] = 1316,
  [SMALL_STATE(54)] = 1330,
  [SMALL_STATE(55)] = 1344,
  [SMALL_STATE(56)] = 1358,
  [SMALL_STATE(57)] = 1372,
  [SMALL_STATE(58)] = 1386,
  [SMALL_STATE(59)] = 1400,
  [SMALL_STATE(60)] = 1415,
  [SMALL_STATE(61)] = 1430,
  [SMALL_STATE(62)] = 1439,
  [SMALL_STATE(63)] = 1452,
  [SMALL_STATE(64)] = 1465,
  [SMALL_STATE(65)] = 1476,
  [SMALL_STATE(66)] = 1489,
  [SMALL_STATE(67)] = 1500,
  [SMALL_STATE(68)] = 1511,
  [SMALL_STATE(69)] = 1524,
  [SMALL_STATE(70)] = 1533,
  [SMALL_STATE(71)] = 1546,
  [SMALL_STATE(72)] = 1559,
  [SMALL_STATE(73)] = 1572,
  [SMALL_STATE(74)] = 1579,
  [SMALL_STATE(75)] = 1592,
  [SMALL_STATE(76)] = 1605,
  [SMALL_STATE(77)] = 1618,
  [SMALL_STATE(78)] = 1625,
  [SMALL_STATE(79)] = 1635,
  [SMALL_STATE(80)] = 1645,
  [SMALL_STATE(81)] = 1655,
  [SMALL_STATE(82)] = 1665,
  [SMALL_STATE(83)] = 1673,
  [SMALL_STATE(84)] = 1683,
  [SMALL_STATE(85)] = 1693,
  [SMALL_STATE(86)] = 1703,
  [SMALL_STATE(87)] = 1713,
  [SMALL_STATE(88)] = 1721,
  [SMALL_STATE(89)] = 1731,
  [SMALL_STATE(90)] = 1738,
  [SMALL_STATE(91)] = 1745,
  [SMALL_STATE(92)] = 1752,
  [SMALL_STATE(93)] = 1759,
  [SMALL_STATE(94)] = 1766,
  [SMALL_STATE(95)] = 1773,
  [SMALL_STATE(96)] = 1780,
  [SMALL_STATE(97)] = 1787,
  [SMALL_STATE(98)] = 1792,
  [SMALL_STATE(99)] = 1799,
  [SMALL_STATE(100)] = 1806,
  [SMALL_STATE(101)] = 1813,
  [SMALL_STATE(102)] = 1820,
  [SMALL_STATE(103)] = 1827,
  [SMALL_STATE(104)] = 1834,
  [SMALL_STATE(105)] = 1841,
  [SMALL_STATE(106)] = 1848,
  [SMALL_STATE(107)] = 1855,
  [SMALL_STATE(108)] = 1862,
  [SMALL_STATE(109)] = 1869,
  [SMALL_STATE(110)] = 1876,
  [SMALL_STATE(111)] = 1883,
  [SMALL_STATE(112)] = 1890,
  [SMALL_STATE(113)] = 1897,
  [SMALL_STATE(114)] = 1904,
  [SMALL_STATE(115)] = 1911,
  [SMALL_STATE(116)] = 1918,
  [SMALL_STATE(117)] = 1925,
  [SMALL_STATE(118)] = 1932,
  [SMALL_STATE(119)] = 1939,
  [SMALL_STATE(120)] = 1946,
  [SMALL_STATE(121)] = 1953,
  [SMALL_STATE(122)] = 1960,
  [SMALL_STATE(123)] = 1967,
  [SMALL_STATE(124)] = 1974,
  [SMALL_STATE(125)] = 1981,
  [SMALL_STATE(126)] = 1988,
  [SMALL_STATE(127)] = 1995,
  [SMALL_STATE(128)] = 2002,
  [SMALL_STATE(129)] = 2009,
  [SMALL_STATE(130)] = 2016,
  [SMALL_STATE(131)] = 2020,
  [SMALL_STATE(132)] = 2024,
  [SMALL_STATE(133)] = 2028,
  [SMALL_STATE(134)] = 2032,
  [SMALL_STATE(135)] = 2036,
  [SMALL_STATE(136)] = 2040,
  [SMALL_STATE(137)] = 2044,
  [SMALL_STATE(138)] = 2048,
  [SMALL_STATE(139)] = 2052,
  [SMALL_STATE(140)] = 2056,
  [SMALL_STATE(141)] = 2060,
  [SMALL_STATE(142)] = 2064,
  [SMALL_STATE(143)] = 2068,
  [SMALL_STATE(144)] = 2072,
  [SMALL_STATE(145)] = 2076,
  [SMALL_STATE(146)] = 2080,
  [SMALL_STATE(147)] = 2084,
  [SMALL_STATE(148)] = 2088,
  [SMALL_STATE(149)] = 2092,
  [SMALL_STATE(150)] = 2096,
  [SMALL_STATE(151)] = 2100,
  [SMALL_STATE(152)] = 2104,
  [SMALL_STATE(153)] = 2108,
  [SMALL_STATE(154)] = 2112,
  [SMALL_STATE(155)] = 2116,
  [SMALL_STATE(156)] = 2120,
  [SMALL_STATE(157)] = 2124,
  [SMALL_STATE(158)] = 2128,
  [SMALL_STATE(159)] = 2132,
  [SMALL_STATE(160)] = 2136,
  [SMALL_STATE(161)] = 2140,
  [SMALL_STATE(162)] = 2144,
  [SMALL_STATE(163)] = 2148,
  [SMALL_STATE(164)] = 2152,
  [SMALL_STATE(165)] = 2156,
  [SMALL_STATE(166)] = 2160,
  [SMALL_STATE(167)] = 2164,
  [SMALL_STATE(168)] = 2168,
  [SMALL_STATE(169)] = 2172,
  [SMALL_STATE(170)] = 2176,
  [SMALL_STATE(171)] = 2180,
  [SMALL_STATE(172)] = 2184,
  [SMALL_STATE(173)] = 2188,
  [SMALL_STATE(174)] = 2192,
  [SMALL_STATE(175)] = 2196,
  [SMALL_STATE(176)] = 2200,
  [SMALL_STATE(177)] = 2204,
  [SMALL_STATE(178)] = 2208,
  [SMALL_STATE(179)] = 2212,
  [SMALL_STATE(180)] = 2216,
  [SMALL_STATE(181)] = 2220,
  [SMALL_STATE(182)] = 2224,
  [SMALL_STATE(183)] = 2228,
  [SMALL_STATE(184)] = 2232,
  [SMALL_STATE(185)] = 2236,
  [SMALL_STATE(186)] = 2240,
  [SMALL_STATE(187)] = 2244,
  [SMALL_STATE(188)] = 2248,
  [SMALL_STATE(189)] = 2252,
  [SMALL_STATE(190)] = 2256,
  [SMALL_STATE(191)] = 2260,
  [SMALL_STATE(192)] = 2264,
  [SMALL_STATE(193)] = 2268,
  [SMALL_STATE(194)] = 2272,
  [SMALL_STATE(195)] = 2276,
  [SMALL_STATE(196)] = 2280,
  [SMALL_STATE(197)] = 2284,
  [SMALL_STATE(198)] = 2288,
  [SMALL_STATE(199)] = 2292,
  [SMALL_STATE(200)] = 2296,
  [SMALL_STATE(201)] = 2300,
  [SMALL_STATE(202)] = 2304,
  [SMALL_STATE(203)] = 2308,
  [SMALL_STATE(204)] = 2312,
  [SMALL_STATE(205)] = 2316,
  [SMALL_STATE(206)] = 2320,
  [SMALL_STATE(207)] = 2324,
  [SMALL_STATE(208)] = 2328,
  [SMALL_STATE(209)] = 2332,
  [SMALL_STATE(210)] = 2336,
  [SMALL_STATE(211)] = 2340,
  [SMALL_STATE(212)] = 2344,
  [SMALL_STATE(213)] = 2348,
  [SMALL_STATE(214)] = 2352,
  [SMALL_STATE(215)] = 2356,
  [SMALL_STATE(216)] = 2360,
  [SMALL_STATE(217)] = 2364,
  [SMALL_STATE(218)] = 2368,
  [SMALL_STATE(219)] = 2372,
  [SMALL_STATE(220)] = 2376,
  [SMALL_STATE(221)] = 2380,
  [SMALL_STATE(222)] = 2384,
  [SMALL_STATE(223)] = 2388,
  [SMALL_STATE(224)] = 2392,
  [SMALL_STATE(225)] = 2396,
  [SMALL_STATE(226)] = 2400,
  [SMALL_STATE(227)] = 2404,
  [SMALL_STATE(228)] = 2408,
  [SMALL_STATE(229)] = 2412,
  [SMALL_STATE(230)] = 2416,
  [SMALL_STATE(231)] = 2420,
  [SMALL_STATE(232)] = 2424,
  [SMALL_STATE(233)] = 2428,
  [SMALL_STATE(234)] = 2432,
  [SMALL_STATE(235)] = 2436,
  [SMALL_STATE(236)] = 2440,
  [SMALL_STATE(237)] = 2444,
  [SMALL_STATE(238)] = 2448,
  [SMALL_STATE(239)] = 2452,
  [SMALL_STATE(240)] = 2456,
  [SMALL_STATE(241)] = 2460,
  [SMALL_STATE(242)] = 2464,
  [SMALL_STATE(243)] = 2468,
  [SMALL_STATE(244)] = 2472,
  [SMALL_STATE(245)] = 2476,
  [SMALL_STATE(246)] = 2480,
  [SMALL_STATE(247)] = 2484,
  [SMALL_STATE(248)] = 2488,
  [SMALL_STATE(249)] = 2492,
  [SMALL_STATE(250)] = 2496,
  [SMALL_STATE(251)] = 2500,
  [SMALL_STATE(252)] = 2504,
  [SMALL_STATE(253)] = 2508,
  [SMALL_STATE(254)] = 2512,
  [SMALL_STATE(255)] = 2516,
  [SMALL_STATE(256)] = 2520,
  [SMALL_STATE(257)] = 2524,
  [SMALL_STATE(258)] = 2528,
  [SMALL_STATE(259)] = 2532,
  [SMALL_STATE(260)] = 2536,
  [SMALL_STATE(261)] = 2540,
  [SMALL_STATE(262)] = 2544,
  [SMALL_STATE(263)] = 2548,
  [SMALL_STATE(264)] = 2552,
  [SMALL_STATE(265)] = 2556,
  [SMALL_STATE(266)] = 2560,
  [SMALL_STATE(267)] = 2564,
  [SMALL_STATE(268)] = 2568,
  [SMALL_STATE(269)] = 2572,
  [SMALL_STATE(270)] = 2576,
  [SMALL_STATE(271)] = 2580,
  [SMALL_STATE(272)] = 2584,
  [SMALL_STATE(273)] = 2588,
  [SMALL_STATE(274)] = 2592,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_color_function_call_repeat2, 2), SHIFT_REPEAT(267),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_color_function_call_repeat2, 2),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_color_function_call_repeat2, 2), SHIFT_REPEAT(61),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_color_function_call_repeat2, 2), SHIFT_REPEAT(268),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_color_function_call_repeat2, 2), SHIFT_REPEAT(269),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_color_function_call_repeat2, 2), SHIFT_REPEAT(14),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_color_function_call_repeat2, 2), SHIFT_REPEAT(270),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_color_function_call_repeat2, 2), SHIFT_REPEAT(271),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_color_function_call_repeat2, 2), SHIFT_REPEAT(272),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_color_function_call_repeat2, 2), SHIFT_REPEAT(273),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_color_function_call_repeat2, 2), SHIFT_REPEAT(274),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_color_function_call_repeat2, 2), SHIFT_REPEAT(197),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__color_value, 1),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_token_reference, 2),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_token_reference, 2),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__color_value_repeat1, 2),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__color_value_repeat1, 2), SHIFT_REPEAT(241),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__color_value, 2),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_color_function_call_repeat2, 1),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [123] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__token_body, 2), SHIFT_REPEAT(92),
  [126] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__token_body, 2), SHIFT_REPEAT(201),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__token_body, 2),
  [131] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__token_body, 2), SHIFT_REPEAT(200),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hex, 2),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oklch, 7, .production_id = 5),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_color_function_call_repeat1, 2),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_color_function_call_repeat1, 2), SHIFT_REPEAT(9),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color_function_call, 4),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color_function_call, 5),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rgb, 9, .production_id = 1),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [167] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__token_body, 2), SHIFT_REPEAT(91),
  [170] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__token_body, 2), SHIFT_REPEAT(238),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rec2020, 9, .production_id = 1),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_a98rgb, 7, .production_id = 1),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_p3, 9, .production_id = 1),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hsl, 7, .production_id = 2),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oklch, 9, .production_id = 5),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oklab, 9, .production_id = 4),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hsv, 9, .production_id = 3),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hsv, 7, .production_id = 3),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hsl, 9, .production_id = 2),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_a98rgb, 9, .production_id = 1),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oklab, 7, .production_id = 4),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rgb, 7, .production_id = 1),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rec2020, 7, .production_id = 1),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_p3, 7, .production_id = 1),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_percent_number, 2),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional_token_block, 7),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_token_block, 7),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_child_token_block, 4),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child_token_block, 4),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional_token_block, 5),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_token_block, 5),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional_token_block, 6),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_token_block, 6),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__token_body, 2),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [227] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(60),
  [230] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(125),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conditional_token_block_repeat2, 2),
  [239] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conditional_token_block_repeat2, 2), SHIFT_REPEAT(192),
  [242] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_conditional_token_block_repeat2, 2), SHIFT_REPEAT(192),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [249] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__color_value_repeat1, 2), SHIFT_REPEAT(155),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tokens_block, 5),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conditional_token_block_repeat1, 2),
  [276] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conditional_token_block_repeat1, 2), SHIFT_REPEAT(154),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tokens_block, 4),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch, 3),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_switch_repeat1, 2),
  [291] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_switch_repeat1, 2), SHIFT_REPEAT(172),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_switch_repeat1, 2),
  [296] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conditional_token_block_repeat2, 5),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_conditional_token_block_repeat2, 5),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [310] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [316] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conditional_token_block_repeat2, 4),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_conditional_token_block_repeat2, 4),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch, 2),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oklab, 7, .production_id = 4),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rgb, 7, .production_id = 1),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_switch_repeat1, 3),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_switch_repeat1, 3),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hex, 2),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_a98rgb, 7, .production_id = 1),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rec2020, 9, .production_id = 1),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hsl, 7, .production_id = 2),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rgb, 9, .production_id = 1),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hsv, 7, .production_id = 3),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_a98rgb, 9, .production_id = 1),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hsl, 9, .production_id = 2),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hsv, 9, .production_id = 3),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oklch, 7, .production_id = 5),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oklab, 9, .production_id = 4),
  [386] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_p3, 7, .production_id = 1),
  [388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_color_function_call, 4),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [426] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oklch, 9, .production_id = 5),
  [428] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rec2020, 7, .production_id = 1),
  [430] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_color_function_call, 5),
  [432] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_p3, 9, .production_id = 1),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_token_assignment, 3),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string, 3),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dimension, 2),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_token_declaration, 4),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_token_value, 1),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_token_type, 1),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [650] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
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
