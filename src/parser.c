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
  [7] = 5,
  [8] = 6,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 13,
  [19] = 14,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 28,
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
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 48,
  [50] = 50,
  [51] = 51,
  [52] = 50,
  [53] = 53,
  [54] = 51,
  [55] = 55,
  [56] = 53,
  [57] = 55,
  [58] = 58,
  [59] = 59,
  [60] = 11,
  [61] = 61,
  [62] = 62,
  [63] = 10,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 12,
  [68] = 68,
  [69] = 61,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 73,
  [75] = 71,
  [76] = 72,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 81,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 85,
  [89] = 44,
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
  [103] = 24,
  [104] = 104,
  [105] = 39,
  [106] = 29,
  [107] = 20,
  [108] = 26,
  [109] = 45,
  [110] = 38,
  [111] = 37,
  [112] = 35,
  [113] = 43,
  [114] = 34,
  [115] = 42,
  [116] = 32,
  [117] = 102,
  [118] = 100,
  [119] = 99,
  [120] = 98,
  [121] = 96,
  [122] = 95,
  [123] = 94,
  [124] = 93,
  [125] = 125,
  [126] = 21,
  [127] = 41,
  [128] = 36,
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
  [166] = 84,
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
      if (lookahead == '}') ADVANCE(130);
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
      if (lookahead == '}') ADVANCE(226);
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
  [13] = {.lex_state = 17},
  [14] = {.lex_state = 34},
  [15] = {.lex_state = 34},
  [16] = {.lex_state = 120},
  [17] = {.lex_state = 34},
  [18] = {.lex_state = 17},
  [19] = {.lex_state = 17},
  [20] = {.lex_state = 120},
  [21] = {.lex_state = 120},
  [22] = {.lex_state = 120},
  [23] = {.lex_state = 17},
  [24] = {.lex_state = 120},
  [25] = {.lex_state = 17},
  [26] = {.lex_state = 120},
  [27] = {.lex_state = 120},
  [28] = {.lex_state = 17},
  [29] = {.lex_state = 120},
  [30] = {.lex_state = 17},
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
  [44] = {.lex_state = 120},
  [45] = {.lex_state = 120},
  [46] = {.lex_state = 120},
  [47] = {.lex_state = 120},
  [48] = {.lex_state = 17},
  [49] = {.lex_state = 34},
  [50] = {.lex_state = 34},
  [51] = {.lex_state = 34},
  [52] = {.lex_state = 17},
  [53] = {.lex_state = 34},
  [54] = {.lex_state = 17},
  [55] = {.lex_state = 34},
  [56] = {.lex_state = 17},
  [57] = {.lex_state = 17},
  [58] = {.lex_state = 120},
  [59] = {.lex_state = 120},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 101},
  [62] = {.lex_state = 101},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 120},
  [65] = {.lex_state = 120},
  [66] = {.lex_state = 120},
  [67] = {.lex_state = 1},
  [68] = {.lex_state = 101},
  [69] = {.lex_state = 101},
  [70] = {.lex_state = 101},
  [71] = {.lex_state = 120},
  [72] = {.lex_state = 101},
  [73] = {.lex_state = 3},
  [74] = {.lex_state = 3},
  [75] = {.lex_state = 120},
  [76] = {.lex_state = 101},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 120},
  [82] = {.lex_state = 120},
  [83] = {.lex_state = 120},
  [84] = {.lex_state = 120},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 1},
  [87] = {.lex_state = 120},
  [88] = {.lex_state = 0},
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
    [sym_tokens_block] = STATE(58),
    [aux_sym_source_file_repeat1] = STATE(58),
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
    STATE(67), 9,
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
    STATE(67), 9,
      sym_a98rgb,
      sym_hex,
      sym_hsl,
      sym_hsv,
      sym_oklab,
      sym_oklch,
      sym_p3,
      sym_rec2020,
      sym_rgb,
  [128] = 14,
    ACTIONS(37), 1,
      aux_sym_a98rgb_token1,
    ACTIONS(40), 1,
      anon_sym_RPAREN,
    ACTIONS(42), 1,
      anon_sym_POUND,
    ACTIONS(45), 1,
      aux_sym_hsl_token1,
    ACTIONS(48), 1,
      aux_sym_hsv_token1,
    ACTIONS(51), 1,
      sym_number,
    ACTIONS(54), 1,
      aux_sym_oklab_token1,
    ACTIONS(57), 1,
      aux_sym_oklch_token1,
    ACTIONS(60), 1,
      aux_sym_p3_token1,
    ACTIONS(63), 1,
      aux_sym_rec2020_token1,
    ACTIONS(66), 1,
      aux_sym_rgb_token1,
    STATE(4), 1,
      aux_sym_color_function_call_repeat2,
    STATE(27), 2,
      sym__color_value,
      sym_percent_number,
    STATE(12), 9,
      sym_a98rgb,
      sym_hex,
      sym_hsl,
      sym_hsv,
      sym_oklab,
      sym_oklch,
      sym_p3,
      sym_rec2020,
      sym_rgb,
  [180] = 14,
    ACTIONS(69), 1,
      aux_sym_a98rgb_token1,
    ACTIONS(71), 1,
      anon_sym_RPAREN,
    ACTIONS(73), 1,
      anon_sym_POUND,
    ACTIONS(75), 1,
      aux_sym_hsl_token1,
    ACTIONS(77), 1,
      aux_sym_hsv_token1,
    ACTIONS(79), 1,
      sym_number,
    ACTIONS(81), 1,
      aux_sym_oklab_token1,
    ACTIONS(83), 1,
      aux_sym_oklch_token1,
    ACTIONS(85), 1,
      aux_sym_p3_token1,
    ACTIONS(87), 1,
      aux_sym_rec2020_token1,
    ACTIONS(89), 1,
      aux_sym_rgb_token1,
    STATE(4), 1,
      aux_sym_color_function_call_repeat2,
    STATE(27), 2,
      sym__color_value,
      sym_percent_number,
    STATE(12), 9,
      sym_a98rgb,
      sym_hex,
      sym_hsl,
      sym_hsv,
      sym_oklab,
      sym_oklch,
      sym_p3,
      sym_rec2020,
      sym_rgb,
  [232] = 14,
    ACTIONS(69), 1,
      aux_sym_a98rgb_token1,
    ACTIONS(73), 1,
      anon_sym_POUND,
    ACTIONS(75), 1,
      aux_sym_hsl_token1,
    ACTIONS(77), 1,
      aux_sym_hsv_token1,
    ACTIONS(79), 1,
      sym_number,
    ACTIONS(81), 1,
      aux_sym_oklab_token1,
    ACTIONS(83), 1,
      aux_sym_oklch_token1,
    ACTIONS(85), 1,
      aux_sym_p3_token1,
    ACTIONS(87), 1,
      aux_sym_rec2020_token1,
    ACTIONS(89), 1,
      aux_sym_rgb_token1,
    ACTIONS(91), 1,
      anon_sym_RPAREN,
    STATE(5), 1,
      aux_sym_color_function_call_repeat2,
    STATE(27), 2,
      sym__color_value,
      sym_percent_number,
    STATE(12), 9,
      sym_a98rgb,
      sym_hex,
      sym_hsl,
      sym_hsv,
      sym_oklab,
      sym_oklch,
      sym_p3,
      sym_rec2020,
      sym_rgb,
  [284] = 14,
    ACTIONS(69), 1,
      aux_sym_a98rgb_token1,
    ACTIONS(73), 1,
      anon_sym_POUND,
    ACTIONS(75), 1,
      aux_sym_hsl_token1,
    ACTIONS(77), 1,
      aux_sym_hsv_token1,
    ACTIONS(79), 1,
      sym_number,
    ACTIONS(81), 1,
      aux_sym_oklab_token1,
    ACTIONS(83), 1,
      aux_sym_oklch_token1,
    ACTIONS(85), 1,
      aux_sym_p3_token1,
    ACTIONS(87), 1,
      aux_sym_rec2020_token1,
    ACTIONS(89), 1,
      aux_sym_rgb_token1,
    ACTIONS(93), 1,
      anon_sym_RPAREN,
    STATE(4), 1,
      aux_sym_color_function_call_repeat2,
    STATE(27), 2,
      sym__color_value,
      sym_percent_number,
    STATE(12), 9,
      sym_a98rgb,
      sym_hex,
      sym_hsl,
      sym_hsv,
      sym_oklab,
      sym_oklch,
      sym_p3,
      sym_rec2020,
      sym_rgb,
  [336] = 14,
    ACTIONS(69), 1,
      aux_sym_a98rgb_token1,
    ACTIONS(73), 1,
      anon_sym_POUND,
    ACTIONS(75), 1,
      aux_sym_hsl_token1,
    ACTIONS(77), 1,
      aux_sym_hsv_token1,
    ACTIONS(79), 1,
      sym_number,
    ACTIONS(81), 1,
      aux_sym_oklab_token1,
    ACTIONS(83), 1,
      aux_sym_oklch_token1,
    ACTIONS(85), 1,
      aux_sym_p3_token1,
    ACTIONS(87), 1,
      aux_sym_rec2020_token1,
    ACTIONS(89), 1,
      aux_sym_rgb_token1,
    ACTIONS(95), 1,
      anon_sym_RPAREN,
    STATE(7), 1,
      aux_sym_color_function_call_repeat2,
    STATE(27), 2,
      sym__color_value,
      sym_percent_number,
    STATE(12), 9,
      sym_a98rgb,
      sym_hex,
      sym_hsl,
      sym_hsv,
      sym_oklab,
      sym_oklch,
      sym_p3,
      sym_rec2020,
      sym_rgb,
  [388] = 11,
    ACTIONS(69), 1,
      aux_sym_a98rgb_token1,
    ACTIONS(73), 1,
      anon_sym_POUND,
    ACTIONS(75), 1,
      aux_sym_hsl_token1,
    ACTIONS(77), 1,
      aux_sym_hsv_token1,
    ACTIONS(81), 1,
      aux_sym_oklab_token1,
    ACTIONS(83), 1,
      aux_sym_oklch_token1,
    ACTIONS(85), 1,
      aux_sym_p3_token1,
    ACTIONS(87), 1,
      aux_sym_rec2020_token1,
    ACTIONS(89), 1,
      aux_sym_rgb_token1,
    STATE(46), 1,
      sym__color_value,
    STATE(12), 9,
      sym_a98rgb,
      sym_hex,
      sym_hsl,
      sym_hsv,
      sym_oklab,
      sym_oklch,
      sym_p3,
      sym_rec2020,
      sym_rgb,
  [430] = 3,
    ACTIONS(99), 1,
      anon_sym_DOT,
    STATE(10), 2,
      sym_color_function_call,
      aux_sym__color_value_repeat1,
    ACTIONS(97), 12,
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
  [452] = 3,
    ACTIONS(104), 1,
      anon_sym_DOT,
    STATE(10), 2,
      sym_color_function_call,
      aux_sym__color_value_repeat1,
    ACTIONS(102), 12,
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
  [474] = 3,
    ACTIONS(104), 1,
      anon_sym_DOT,
    STATE(11), 2,
      sym_color_function_call,
      aux_sym__color_value_repeat1,
    ACTIONS(106), 12,
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
  [496] = 7,
    ACTIONS(108), 1,
      anon_sym_RBRACE,
    ACTIONS(110), 1,
      anon_sym_when,
    ACTIONS(112), 1,
      sym_identifier,
    STATE(193), 1,
      sym_token_declaration,
    STATE(198), 1,
      sym_token_type,
    STATE(19), 3,
      aux_sym__token_body,
      sym_child_token_block,
      sym_conditional_token_block,
    ACTIONS(114), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [525] = 7,
    ACTIONS(116), 1,
      anon_sym_when,
    ACTIONS(119), 1,
      sym_identifier,
    ACTIONS(122), 1,
      aux_sym_tokens_block_token2,
    STATE(198), 1,
      sym_token_type,
    STATE(199), 1,
      sym_token_declaration,
    STATE(14), 3,
      aux_sym__token_body,
      sym_child_token_block,
      sym_conditional_token_block,
    ACTIONS(124), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [554] = 7,
    ACTIONS(127), 1,
      anon_sym_when,
    ACTIONS(129), 1,
      sym_identifier,
    ACTIONS(131), 1,
      aux_sym_tokens_block_token2,
    STATE(198), 1,
      sym_token_type,
    STATE(199), 1,
      sym_token_declaration,
    STATE(14), 3,
      aux_sym__token_body,
      sym_child_token_block,
      sym_conditional_token_block,
    ACTIONS(114), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [583] = 4,
    ACTIONS(135), 1,
      anon_sym_COMMA,
    ACTIONS(137), 1,
      aux_sym_percent_number_token1,
    STATE(22), 1,
      aux_sym_color_function_call_repeat1,
    ACTIONS(133), 11,
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
  [606] = 7,
    ACTIONS(127), 1,
      anon_sym_when,
    ACTIONS(129), 1,
      sym_identifier,
    ACTIONS(139), 1,
      aux_sym_tokens_block_token2,
    STATE(198), 1,
      sym_token_type,
    STATE(199), 1,
      sym_token_declaration,
    STATE(14), 3,
      aux_sym__token_body,
      sym_child_token_block,
      sym_conditional_token_block,
    ACTIONS(114), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [635] = 7,
    ACTIONS(110), 1,
      anon_sym_when,
    ACTIONS(112), 1,
      sym_identifier,
    ACTIONS(141), 1,
      anon_sym_RBRACE,
    STATE(193), 1,
      sym_token_declaration,
    STATE(198), 1,
      sym_token_type,
    STATE(19), 3,
      aux_sym__token_body,
      sym_child_token_block,
      sym_conditional_token_block,
    ACTIONS(114), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [664] = 7,
    ACTIONS(122), 1,
      anon_sym_RBRACE,
    ACTIONS(143), 1,
      anon_sym_when,
    ACTIONS(146), 1,
      sym_identifier,
    STATE(193), 1,
      sym_token_declaration,
    STATE(198), 1,
      sym_token_type,
    STATE(19), 3,
      aux_sym__token_body,
      sym_child_token_block,
      sym_conditional_token_block,
    ACTIONS(124), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [693] = 1,
    ACTIONS(149), 13,
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
  [709] = 1,
    ACTIONS(151), 13,
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
  [725] = 3,
    ACTIONS(135), 1,
      anon_sym_COMMA,
    STATE(33), 1,
      aux_sym_color_function_call_repeat1,
    ACTIONS(40), 11,
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
  [745] = 6,
    ACTIONS(127), 1,
      anon_sym_when,
    ACTIONS(129), 1,
      sym_identifier,
    STATE(198), 1,
      sym_token_type,
    STATE(199), 1,
      sym_token_declaration,
    STATE(15), 3,
      aux_sym__token_body,
      sym_child_token_block,
      sym_conditional_token_block,
    ACTIONS(114), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [771] = 1,
    ACTIONS(153), 13,
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
  [787] = 6,
    ACTIONS(127), 1,
      anon_sym_when,
    ACTIONS(129), 1,
      sym_identifier,
    STATE(198), 1,
      sym_token_type,
    STATE(199), 1,
      sym_token_declaration,
    STATE(17), 3,
      aux_sym__token_body,
      sym_child_token_block,
      sym_conditional_token_block,
    ACTIONS(114), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [813] = 1,
    ACTIONS(155), 13,
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
  [829] = 3,
    ACTIONS(135), 1,
      anon_sym_COMMA,
    STATE(22), 1,
      aux_sym_color_function_call_repeat1,
    ACTIONS(133), 11,
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
  [849] = 6,
    ACTIONS(110), 1,
      anon_sym_when,
    ACTIONS(112), 1,
      sym_identifier,
    STATE(193), 1,
      sym_token_declaration,
    STATE(198), 1,
      sym_token_type,
    STATE(13), 3,
      aux_sym__token_body,
      sym_child_token_block,
      sym_conditional_token_block,
    ACTIONS(114), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [875] = 1,
    ACTIONS(157), 13,
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
  [891] = 6,
    ACTIONS(110), 1,
      anon_sym_when,
    ACTIONS(112), 1,
      sym_identifier,
    STATE(193), 1,
      sym_token_declaration,
    STATE(198), 1,
      sym_token_type,
    STATE(18), 3,
      aux_sym__token_body,
      sym_child_token_block,
      sym_conditional_token_block,
    ACTIONS(114), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [917] = 1,
    ACTIONS(159), 13,
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
  [933] = 1,
    ACTIONS(161), 13,
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
  [949] = 3,
    ACTIONS(165), 1,
      anon_sym_COMMA,
    STATE(33), 1,
      aux_sym_color_function_call_repeat1,
    ACTIONS(163), 11,
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
  [969] = 1,
    ACTIONS(168), 13,
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
  [985] = 1,
    ACTIONS(170), 13,
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
  [1001] = 1,
    ACTIONS(172), 13,
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
  [1017] = 1,
    ACTIONS(174), 13,
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
  [1033] = 1,
    ACTIONS(176), 13,
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
  [1049] = 1,
    ACTIONS(178), 13,
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
  [1065] = 1,
    ACTIONS(180), 13,
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
  [1081] = 1,
    ACTIONS(182), 13,
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
  [1097] = 1,
    ACTIONS(184), 13,
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
  [1113] = 1,
    ACTIONS(186), 13,
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
  [1129] = 1,
    ACTIONS(188), 13,
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
  [1145] = 1,
    ACTIONS(190), 13,
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
  [1161] = 1,
    ACTIONS(163), 12,
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
  [1176] = 1,
    ACTIONS(192), 12,
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
  [1191] = 2,
    ACTIONS(194), 1,
      anon_sym_RBRACE,
    ACTIONS(196), 8,
      anon_sym_when,
      sym_identifier,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [1205] = 2,
    ACTIONS(194), 1,
      aux_sym_tokens_block_token2,
    ACTIONS(196), 8,
      anon_sym_when,
      sym_identifier,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [1219] = 2,
    ACTIONS(200), 1,
      aux_sym_tokens_block_token2,
    ACTIONS(198), 8,
      anon_sym_when,
      sym_identifier,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [1233] = 2,
    ACTIONS(204), 1,
      aux_sym_tokens_block_token2,
    ACTIONS(202), 8,
      anon_sym_when,
      sym_identifier,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [1247] = 2,
    ACTIONS(200), 1,
      anon_sym_RBRACE,
    ACTIONS(198), 8,
      anon_sym_when,
      sym_identifier,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [1261] = 2,
    ACTIONS(208), 1,
      aux_sym_tokens_block_token2,
    ACTIONS(206), 8,
      anon_sym_when,
      sym_identifier,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [1275] = 2,
    ACTIONS(204), 1,
      anon_sym_RBRACE,
    ACTIONS(202), 8,
      anon_sym_when,
      sym_identifier,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [1289] = 2,
    ACTIONS(122), 1,
      aux_sym_tokens_block_token2,
    ACTIONS(210), 8,
      anon_sym_when,
      sym_identifier,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [1303] = 2,
    ACTIONS(208), 1,
      anon_sym_RBRACE,
    ACTIONS(206), 8,
      anon_sym_when,
      sym_identifier,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [1317] = 2,
    ACTIONS(122), 1,
      anon_sym_RBRACE,
    ACTIONS(210), 8,
      anon_sym_when,
      sym_identifier,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [1331] = 4,
    ACTIONS(7), 1,
      anon_sym_tokens,
    ACTIONS(212), 1,
      ts_builtin_sym_end,
    ACTIONS(214), 2,
      sym_multi_line_comment,
      sym_single_line_comment,
    STATE(59), 2,
      sym_tokens_block,
      aux_sym_source_file_repeat1,
  [1346] = 4,
    ACTIONS(216), 1,
      ts_builtin_sym_end,
    ACTIONS(221), 1,
      anon_sym_tokens,
    ACTIONS(218), 2,
      sym_multi_line_comment,
      sym_single_line_comment,
    STATE(59), 2,
      sym_tokens_block,
      aux_sym_source_file_repeat1,
  [1361] = 3,
    ACTIONS(102), 1,
      sym__newlines,
    ACTIONS(224), 1,
      anon_sym_DOT,
    STATE(63), 2,
      sym_color_function_call,
      aux_sym__color_value_repeat1,
  [1372] = 4,
    ACTIONS(226), 1,
      anon_sym_RBRACE,
    ACTIONS(228), 1,
      sym_identifier,
    STATE(76), 1,
      aux_sym_conditional_token_block_repeat1,
    STATE(149), 1,
      sym_token_assignment,
  [1385] = 4,
    ACTIONS(228), 1,
      sym_identifier,
    ACTIONS(230), 1,
      anon_sym_RBRACE,
    STATE(70), 1,
      aux_sym_conditional_token_block_repeat1,
    STATE(149), 1,
      sym_token_assignment,
  [1398] = 3,
    ACTIONS(97), 1,
      sym__newlines,
    ACTIONS(232), 1,
      anon_sym_DOT,
    STATE(63), 2,
      sym_color_function_call,
      aux_sym__color_value_repeat1,
  [1409] = 4,
    ACTIONS(235), 1,
      anon_sym_RBRACE,
    ACTIONS(237), 1,
      sym_negative_assertion,
    ACTIONS(240), 1,
      sym_positive_assertion,
    STATE(64), 1,
      aux_sym_conditional_token_block_repeat2,
  [1422] = 1,
    ACTIONS(243), 4,
      ts_builtin_sym_end,
      sym_multi_line_comment,
      sym_single_line_comment,
      anon_sym_tokens,
  [1429] = 1,
    ACTIONS(245), 4,
      ts_builtin_sym_end,
      sym_multi_line_comment,
      sym_single_line_comment,
      anon_sym_tokens,
  [1436] = 3,
    ACTIONS(106), 1,
      sym__newlines,
    ACTIONS(224), 1,
      anon_sym_DOT,
    STATE(60), 2,
      sym_color_function_call,
      aux_sym__color_value_repeat1,
  [1447] = 4,
    ACTIONS(228), 1,
      sym_identifier,
    ACTIONS(247), 1,
      anon_sym_RBRACE,
    STATE(62), 1,
      aux_sym_conditional_token_block_repeat1,
    STATE(149), 1,
      sym_token_assignment,
  [1460] = 4,
    ACTIONS(228), 1,
      sym_identifier,
    ACTIONS(249), 1,
      anon_sym_RBRACE,
    STATE(72), 1,
      aux_sym_conditional_token_block_repeat1,
    STATE(149), 1,
      sym_token_assignment,
  [1473] = 4,
    ACTIONS(251), 1,
      anon_sym_RBRACE,
    ACTIONS(253), 1,
      sym_identifier,
    STATE(70), 1,
      aux_sym_conditional_token_block_repeat1,
    STATE(149), 1,
      sym_token_assignment,
  [1486] = 4,
    ACTIONS(256), 1,
      anon_sym_RBRACE,
    ACTIONS(258), 1,
      sym_negative_assertion,
    ACTIONS(260), 1,
      sym_positive_assertion,
    STATE(64), 1,
      aux_sym_conditional_token_block_repeat2,
  [1499] = 4,
    ACTIONS(228), 1,
      sym_identifier,
    ACTIONS(262), 1,
      anon_sym_RBRACE,
    STATE(70), 1,
      aux_sym_conditional_token_block_repeat1,
    STATE(149), 1,
      sym_token_assignment,
  [1512] = 2,
    ACTIONS(266), 1,
      aux_sym_hex_token4,
    ACTIONS(264), 3,
      aux_sym_hex_token1,
      aux_sym_hex_token2,
      aux_sym_hex_token3,
  [1521] = 2,
    ACTIONS(270), 1,
      aux_sym_hex_token4,
    ACTIONS(268), 3,
      aux_sym_hex_token1,
      aux_sym_hex_token2,
      aux_sym_hex_token3,
  [1530] = 4,
    ACTIONS(258), 1,
      sym_negative_assertion,
    ACTIONS(260), 1,
      sym_positive_assertion,
    ACTIONS(272), 1,
      anon_sym_RBRACE,
    STATE(64), 1,
      aux_sym_conditional_token_block_repeat2,
  [1543] = 4,
    ACTIONS(228), 1,
      sym_identifier,
    ACTIONS(274), 1,
      anon_sym_RBRACE,
    STATE(70), 1,
      aux_sym_conditional_token_block_repeat1,
    STATE(149), 1,
      sym_token_assignment,
  [1556] = 3,
    ACTIONS(276), 1,
      sym__newlines,
    ACTIONS(278), 1,
      anon_sym_COMMA,
    ACTIONS(280), 1,
      sym_asterisk,
  [1566] = 3,
    ACTIONS(282), 1,
      sym__newlines,
    ACTIONS(284), 1,
      anon_sym_COMMA,
    STATE(79), 1,
      aux_sym_switch_repeat1,
  [1576] = 3,
    ACTIONS(276), 1,
      sym__newlines,
    ACTIONS(286), 1,
      anon_sym_COMMA,
    STATE(79), 1,
      aux_sym_switch_repeat1,
  [1586] = 3,
    ACTIONS(289), 1,
      anon_sym_COMMA,
    ACTIONS(291), 1,
      sym_asterisk,
    STATE(86), 1,
      aux_sym_switch_repeat1,
  [1596] = 3,
    ACTIONS(293), 1,
      anon_sym_LBRACE,
    ACTIONS(295), 1,
      sym_negative_assertion,
    ACTIONS(297), 1,
      sym_positive_assertion,
  [1606] = 2,
    ACTIONS(301), 1,
      sym_positive_assertion,
    ACTIONS(299), 2,
      anon_sym_RBRACE,
      sym_negative_assertion,
  [1614] = 3,
    ACTIONS(303), 1,
      anon_sym_LBRACE,
    ACTIONS(305), 1,
      sym_negative_assertion,
    ACTIONS(307), 1,
      sym_positive_assertion,
  [1624] = 2,
    ACTIONS(311), 1,
      sym_positive_assertion,
    ACTIONS(309), 2,
      anon_sym_LBRACE,
      sym_negative_assertion,
  [1632] = 3,
    ACTIONS(258), 1,
      sym_negative_assertion,
    ACTIONS(260), 1,
      sym_positive_assertion,
    STATE(71), 1,
      aux_sym_conditional_token_block_repeat2,
  [1642] = 3,
    ACTIONS(284), 1,
      anon_sym_COMMA,
    ACTIONS(313), 1,
      sym__newlines,
    STATE(79), 1,
      aux_sym_switch_repeat1,
  [1652] = 2,
    ACTIONS(317), 1,
      sym_positive_assertion,
    ACTIONS(315), 2,
      anon_sym_RBRACE,
      sym_negative_assertion,
  [1660] = 3,
    ACTIONS(258), 1,
      sym_negative_assertion,
    ACTIONS(260), 1,
      sym_positive_assertion,
    STATE(75), 1,
      aux_sym_conditional_token_block_repeat2,
  [1670] = 2,
    ACTIONS(188), 1,
      sym__newlines,
    ACTIONS(319), 1,
      anon_sym_DOT,
  [1677] = 2,
    ACTIONS(180), 1,
      sym__newlines,
    ACTIONS(321), 1,
      anon_sym_DOT,
  [1684] = 2,
    ACTIONS(323), 1,
      anon_sym_DOLLAR,
    STATE(83), 1,
      sym_token_reference,
  [1691] = 2,
    ACTIONS(323), 1,
      anon_sym_DOLLAR,
    STATE(81), 1,
      sym_token_reference,
  [1698] = 2,
    ACTIONS(325), 1,
      anon_sym_COMMA,
    ACTIONS(327), 1,
      anon_sym_RPAREN,
  [1705] = 2,
    ACTIONS(329), 1,
      anon_sym_COMMA,
    ACTIONS(331), 1,
      anon_sym_RPAREN,
  [1712] = 2,
    ACTIONS(333), 1,
      anon_sym_COMMA,
    ACTIONS(335), 1,
      anon_sym_RPAREN,
  [1719] = 2,
    ACTIONS(337), 1,
      anon_sym_COMMA,
    ACTIONS(339), 1,
      anon_sym_RPAREN,
  [1726] = 1,
    ACTIONS(251), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [1731] = 2,
    ACTIONS(341), 1,
      anon_sym_COMMA,
    ACTIONS(343), 1,
      anon_sym_RPAREN,
  [1738] = 2,
    ACTIONS(345), 1,
      anon_sym_COMMA,
    ACTIONS(347), 1,
      anon_sym_RPAREN,
  [1745] = 2,
    ACTIONS(349), 1,
      anon_sym_COMMA,
    ACTIONS(351), 1,
      anon_sym_RPAREN,
  [1752] = 2,
    ACTIONS(353), 1,
      sym__newlines,
    ACTIONS(355), 1,
      anon_sym_COMMA,
  [1759] = 2,
    ACTIONS(357), 1,
      anon_sym_COMMA,
    ACTIONS(359), 1,
      anon_sym_RPAREN,
  [1766] = 2,
    ACTIONS(153), 1,
      sym__newlines,
    ACTIONS(361), 1,
      anon_sym_DOT,
  [1773] = 2,
    ACTIONS(289), 1,
      anon_sym_COMMA,
    STATE(78), 1,
      aux_sym_switch_repeat1,
  [1780] = 2,
    ACTIONS(178), 1,
      sym__newlines,
    ACTIONS(363), 1,
      anon_sym_DOT,
  [1787] = 2,
    ACTIONS(157), 1,
      sym__newlines,
    ACTIONS(365), 1,
      anon_sym_DOT,
  [1794] = 2,
    ACTIONS(149), 1,
      sym__newlines,
    ACTIONS(367), 1,
      anon_sym_DOT,
  [1801] = 2,
    ACTIONS(155), 1,
      sym__newlines,
    ACTIONS(369), 1,
      anon_sym_DOT,
  [1808] = 2,
    ACTIONS(190), 1,
      sym__newlines,
    ACTIONS(371), 1,
      anon_sym_DOT,
  [1815] = 2,
    ACTIONS(176), 1,
      sym__newlines,
    ACTIONS(373), 1,
      anon_sym_DOT,
  [1822] = 2,
    ACTIONS(174), 1,
      sym__newlines,
    ACTIONS(375), 1,
      anon_sym_DOT,
  [1829] = 2,
    ACTIONS(170), 1,
      sym__newlines,
    ACTIONS(377), 1,
      anon_sym_DOT,
  [1836] = 2,
    ACTIONS(186), 1,
      sym__newlines,
    ACTIONS(379), 1,
      anon_sym_DOT,
  [1843] = 2,
    ACTIONS(168), 1,
      sym__newlines,
    ACTIONS(381), 1,
      anon_sym_DOT,
  [1850] = 2,
    ACTIONS(184), 1,
      sym__newlines,
    ACTIONS(383), 1,
      anon_sym_DOT,
  [1857] = 2,
    ACTIONS(161), 1,
      sym__newlines,
    ACTIONS(385), 1,
      anon_sym_DOT,
  [1864] = 2,
    ACTIONS(387), 1,
      anon_sym_COMMA,
    ACTIONS(389), 1,
      anon_sym_RPAREN,
  [1871] = 2,
    ACTIONS(391), 1,
      anon_sym_COMMA,
    ACTIONS(393), 1,
      anon_sym_RPAREN,
  [1878] = 2,
    ACTIONS(395), 1,
      anon_sym_COMMA,
    ACTIONS(397), 1,
      anon_sym_RPAREN,
  [1885] = 2,
    ACTIONS(399), 1,
      anon_sym_COMMA,
    ACTIONS(401), 1,
      anon_sym_RPAREN,
  [1892] = 2,
    ACTIONS(403), 1,
      anon_sym_COMMA,
    ACTIONS(405), 1,
      anon_sym_RPAREN,
  [1899] = 2,
    ACTIONS(407), 1,
      anon_sym_COMMA,
    ACTIONS(409), 1,
      anon_sym_RPAREN,
  [1906] = 2,
    ACTIONS(411), 1,
      anon_sym_COMMA,
    ACTIONS(413), 1,
      anon_sym_RPAREN,
  [1913] = 2,
    ACTIONS(415), 1,
      anon_sym_COMMA,
    ACTIONS(417), 1,
      anon_sym_RPAREN,
  [1920] = 2,
    ACTIONS(419), 1,
      sym_identifier,
    ACTIONS(421), 1,
      aux_sym_tokens_block_token1,
  [1927] = 2,
    ACTIONS(151), 1,
      sym__newlines,
    ACTIONS(423), 1,
      anon_sym_DOT,
  [1934] = 2,
    ACTIONS(182), 1,
      sym__newlines,
    ACTIONS(425), 1,
      anon_sym_DOT,
  [1941] = 2,
    ACTIONS(172), 1,
      sym__newlines,
    ACTIONS(427), 1,
      anon_sym_DOT,
  [1948] = 2,
    ACTIONS(159), 1,
      sym__newlines,
    ACTIONS(429), 1,
      anon_sym_DOT,
  [1955] = 1,
    ACTIONS(431), 1,
      sym_decimal_range,
  [1959] = 1,
    ACTIONS(433), 1,
      anon_sym_COMMA,
  [1963] = 1,
    ACTIONS(435), 1,
      anon_sym_COMMA,
  [1967] = 1,
    ACTIONS(437), 1,
      sym__newlines,
  [1971] = 1,
    ACTIONS(439), 1,
      sym_decimal_range,
  [1975] = 1,
    ACTIONS(441), 1,
      sym_number,
  [1979] = 1,
    ACTIONS(443), 1,
      sym_number,
  [1983] = 1,
    ACTIONS(445), 1,
      sym_decimal_range,
  [1987] = 1,
    ACTIONS(447), 1,
      sym_number,
  [1991] = 1,
    ACTIONS(449), 1,
      sym_decimal_range,
  [1995] = 1,
    ACTIONS(451), 1,
      sym_decimal_range,
  [1999] = 1,
    ACTIONS(453), 1,
      sym_number,
  [2003] = 1,
    ACTIONS(455), 1,
      sym_number,
  [2007] = 1,
    ACTIONS(457), 1,
      sym_decimal_range,
  [2011] = 1,
    ACTIONS(459), 1,
      sym__newlines,
  [2015] = 1,
    ACTIONS(461), 1,
      sym_decimal_range,
  [2019] = 1,
    ACTIONS(463), 1,
      sym_decimal_range,
  [2023] = 1,
    ACTIONS(465), 1,
      sym_decimal_range,
  [2027] = 1,
    ACTIONS(467), 1,
      sym_decimal_range,
  [2031] = 1,
    ACTIONS(469), 1,
      sym__newlines,
  [2035] = 1,
    ACTIONS(471), 1,
      sym_decimal_range,
  [2039] = 1,
    ACTIONS(473), 1,
      sym_decimal_range,
  [2043] = 1,
    ACTIONS(475), 1,
      sym_decimal_range,
  [2047] = 1,
    ACTIONS(477), 1,
      sym_decimal_range,
  [2051] = 1,
    ACTIONS(479), 1,
      anon_sym_COLON,
  [2055] = 1,
    ACTIONS(481), 1,
      sym_color_function_name,
  [2059] = 1,
    ACTIONS(483), 1,
      anon_sym_RPAREN,
  [2063] = 1,
    ACTIONS(485), 1,
      anon_sym_RPAREN,
  [2067] = 1,
    ACTIONS(487), 1,
      anon_sym_RPAREN,
  [2071] = 1,
    ACTIONS(489), 1,
      anon_sym_RPAREN,
  [2075] = 1,
    ACTIONS(491), 1,
      anon_sym_RPAREN,
  [2079] = 1,
    ACTIONS(493), 1,
      anon_sym_RPAREN,
  [2083] = 1,
    ACTIONS(495), 1,
      anon_sym_RPAREN,
  [2087] = 1,
    ACTIONS(497), 1,
      anon_sym_RPAREN,
  [2091] = 1,
    ACTIONS(499), 1,
      anon_sym_COMMA,
  [2095] = 1,
    ACTIONS(501), 1,
      anon_sym_COMMA,
  [2099] = 1,
    ACTIONS(309), 1,
      sym__newlines,
  [2103] = 1,
    ACTIONS(503), 1,
      anon_sym_COMMA,
  [2107] = 1,
    ACTIONS(505), 1,
      anon_sym_COMMA,
  [2111] = 1,
    ACTIONS(507), 1,
      anon_sym_COMMA,
  [2115] = 1,
    ACTIONS(509), 1,
      sym__newlines,
  [2119] = 1,
    ACTIONS(511), 1,
      sym_decimal_range,
  [2123] = 1,
    ACTIONS(513), 1,
      sym_identifier,
  [2127] = 1,
    ACTIONS(515), 1,
      anon_sym_COMMA,
  [2131] = 1,
    ACTIONS(517), 1,
      anon_sym_COMMA,
  [2135] = 1,
    ACTIONS(519), 1,
      anon_sym_COMMA,
  [2139] = 1,
    ACTIONS(521), 1,
      anon_sym_COMMA,
  [2143] = 1,
    ACTIONS(523), 1,
      aux_sym__string_token1,
  [2147] = 1,
    ACTIONS(525), 1,
      anon_sym_LBRACE,
  [2151] = 1,
    ACTIONS(527), 1,
      sym__newlines,
  [2155] = 1,
    ACTIONS(529), 1,
      sym_number,
  [2159] = 1,
    ACTIONS(531), 1,
      sym_decimal_range,
  [2163] = 1,
    ACTIONS(533), 1,
      sym_number,
  [2167] = 1,
    ACTIONS(535), 1,
      sym_decimal_range,
  [2171] = 1,
    ACTIONS(537), 1,
      sym_decimal_range,
  [2175] = 1,
    ACTIONS(539), 1,
      sym_dimensional_unit,
  [2179] = 1,
    ACTIONS(541), 1,
      sym_number,
  [2183] = 1,
    ACTIONS(543), 1,
      sym_number,
  [2187] = 1,
    ACTIONS(545), 1,
      sym__newlines,
  [2191] = 1,
    ACTIONS(547), 1,
      sym_decimal_range,
  [2195] = 1,
    ACTIONS(549), 1,
      sym_string,
  [2199] = 1,
    ACTIONS(551), 1,
      anon_sym_LBRACE,
  [2203] = 1,
    ACTIONS(553), 1,
      sym_identifier,
  [2207] = 1,
    ACTIONS(555), 1,
      sym__newlines,
  [2211] = 1,
    ACTIONS(557), 1,
      sym_ref_identifier,
  [2215] = 1,
    ACTIONS(559), 1,
      sym_identifier,
  [2219] = 1,
    ACTIONS(561), 1,
      anon_sym_COLON,
  [2223] = 1,
    ACTIONS(563), 1,
      sym_ref_identifier,
  [2227] = 1,
    ACTIONS(565), 1,
      sym_identifier,
  [2231] = 1,
    ACTIONS(567), 1,
      sym__newlines,
  [2235] = 1,
    ACTIONS(569), 1,
      sym_identifier,
  [2239] = 1,
    ACTIONS(571), 1,
      anon_sym_LBRACE,
  [2243] = 1,
    ACTIONS(573), 1,
      anon_sym_COMMA,
  [2247] = 1,
    ACTIONS(575), 1,
      anon_sym_COMMA,
  [2251] = 1,
    ACTIONS(577), 1,
      anon_sym_COMMA,
  [2255] = 1,
    ACTIONS(579), 1,
      anon_sym_COMMA,
  [2259] = 1,
    ACTIONS(581), 1,
      anon_sym_COMMA,
  [2263] = 1,
    ACTIONS(583), 1,
      anon_sym_LPAREN,
  [2267] = 1,
    ACTIONS(585), 1,
      sym_number,
  [2271] = 1,
    ACTIONS(587), 1,
      sym_decimal_range,
  [2275] = 1,
    ACTIONS(589), 1,
      anon_sym_RPAREN,
  [2279] = 1,
    ACTIONS(591), 1,
      anon_sym_RPAREN,
  [2283] = 1,
    ACTIONS(593), 1,
      anon_sym_RPAREN,
  [2287] = 1,
    ACTIONS(595), 1,
      anon_sym_RPAREN,
  [2291] = 1,
    ACTIONS(597), 1,
      anon_sym_RPAREN,
  [2295] = 1,
    ACTIONS(599), 1,
      anon_sym_RPAREN,
  [2299] = 1,
    ACTIONS(601), 1,
      anon_sym_RPAREN,
  [2303] = 1,
    ACTIONS(603), 1,
      anon_sym_RPAREN,
  [2307] = 1,
    ACTIONS(605), 1,
      sym_decimal_range,
  [2311] = 1,
    ACTIONS(607), 1,
      aux_sym_tokens_block_token1,
  [2315] = 1,
    ACTIONS(609), 1,
      anon_sym_LBRACE,
  [2319] = 1,
    ACTIONS(611), 1,
      anon_sym_LPAREN,
  [2323] = 1,
    ACTIONS(613), 1,
      sym_decimal_range,
  [2327] = 1,
    ACTIONS(615), 1,
      sym_number,
  [2331] = 1,
    ACTIONS(617), 1,
      sym_number,
  [2335] = 1,
    ACTIONS(619), 1,
      sym_decimal_range,
  [2339] = 1,
    ACTIONS(621), 1,
      sym_number,
  [2343] = 1,
    ACTIONS(623), 1,
      sym_decimal_range,
  [2347] = 1,
    ACTIONS(625), 1,
      sym_decimal_range,
  [2351] = 1,
    ACTIONS(627), 1,
      sym_number,
  [2355] = 1,
    ACTIONS(629), 1,
      sym_decimal_range,
  [2359] = 1,
    ACTIONS(631), 1,
      sym_decimal_range,
  [2363] = 1,
    ACTIONS(633), 1,
      sym_decimal_range,
  [2367] = 1,
    ACTIONS(635), 1,
      sym_decimal_range,
  [2371] = 1,
    ACTIONS(637), 1,
      sym_decimal_range,
  [2375] = 1,
    ACTIONS(639), 1,
      sym_decimal_range,
  [2379] = 1,
    ACTIONS(641), 1,
      sym_decimal_range,
  [2383] = 1,
    ACTIONS(643), 1,
      sym_decimal_range,
  [2387] = 1,
    ACTIONS(645), 1,
      anon_sym_LBRACE,
  [2391] = 1,
    ACTIONS(647), 1,
      ts_builtin_sym_end,
  [2395] = 1,
    ACTIONS(649), 1,
      sym_identifier,
  [2399] = 1,
    ACTIONS(651), 1,
      sym_color_function_name,
  [2403] = 1,
    ACTIONS(653), 1,
      anon_sym_COMMA,
  [2407] = 1,
    ACTIONS(655), 1,
      anon_sym_COMMA,
  [2411] = 1,
    ACTIONS(657), 1,
      anon_sym_COMMA,
  [2415] = 1,
    ACTIONS(659), 1,
      anon_sym_COMMA,
  [2419] = 1,
    ACTIONS(661), 1,
      anon_sym_COMMA,
  [2423] = 1,
    ACTIONS(663), 1,
      anon_sym_COMMA,
  [2427] = 1,
    ACTIONS(665), 1,
      anon_sym_COMMA,
  [2431] = 1,
    ACTIONS(667), 1,
      anon_sym_COMMA,
  [2435] = 1,
    ACTIONS(669), 1,
      sym_decimal_range,
  [2439] = 1,
    ACTIONS(671), 1,
      sym_decimal_range,
  [2443] = 1,
    ACTIONS(673), 1,
      sym_number,
  [2447] = 1,
    ACTIONS(675), 1,
      sym_number,
  [2451] = 1,
    ACTIONS(677), 1,
      sym_decimal_range,
  [2455] = 1,
    ACTIONS(679), 1,
      sym_decimal_range,
  [2459] = 1,
    ACTIONS(681), 1,
      sym_decimal_range,
  [2463] = 1,
    ACTIONS(683), 1,
      sym_decimal_range,
  [2467] = 1,
    ACTIONS(685), 1,
      sym_number,
  [2471] = 1,
    ACTIONS(687), 1,
      anon_sym_COMMA,
  [2475] = 1,
    ACTIONS(689), 1,
      anon_sym_COMMA,
  [2479] = 1,
    ACTIONS(691), 1,
      anon_sym_COMMA,
  [2483] = 1,
    ACTIONS(693), 1,
      anon_sym_COMMA,
  [2487] = 1,
    ACTIONS(695), 1,
      anon_sym_COMMA,
  [2491] = 1,
    ACTIONS(697), 1,
      anon_sym_COMMA,
  [2495] = 1,
    ACTIONS(699), 1,
      anon_sym_COMMA,
  [2499] = 1,
    ACTIONS(701), 1,
      anon_sym_COMMA,
  [2503] = 1,
    ACTIONS(703), 1,
      sym_decimal_range,
  [2507] = 1,
    ACTIONS(705), 1,
      sym_number,
  [2511] = 1,
    ACTIONS(707), 1,
      sym_number,
  [2515] = 1,
    ACTIONS(709), 1,
      sym_decimal_range,
  [2519] = 1,
    ACTIONS(711), 1,
      sym_decimal_range,
  [2523] = 1,
    ACTIONS(713), 1,
      sym_decimal_range,
  [2527] = 1,
    ACTIONS(715), 1,
      sym_decimal_range,
  [2531] = 1,
    ACTIONS(717), 1,
      sym_number,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 64,
  [SMALL_STATE(4)] = 128,
  [SMALL_STATE(5)] = 180,
  [SMALL_STATE(6)] = 232,
  [SMALL_STATE(7)] = 284,
  [SMALL_STATE(8)] = 336,
  [SMALL_STATE(9)] = 388,
  [SMALL_STATE(10)] = 430,
  [SMALL_STATE(11)] = 452,
  [SMALL_STATE(12)] = 474,
  [SMALL_STATE(13)] = 496,
  [SMALL_STATE(14)] = 525,
  [SMALL_STATE(15)] = 554,
  [SMALL_STATE(16)] = 583,
  [SMALL_STATE(17)] = 606,
  [SMALL_STATE(18)] = 635,
  [SMALL_STATE(19)] = 664,
  [SMALL_STATE(20)] = 693,
  [SMALL_STATE(21)] = 709,
  [SMALL_STATE(22)] = 725,
  [SMALL_STATE(23)] = 745,
  [SMALL_STATE(24)] = 771,
  [SMALL_STATE(25)] = 787,
  [SMALL_STATE(26)] = 813,
  [SMALL_STATE(27)] = 829,
  [SMALL_STATE(28)] = 849,
  [SMALL_STATE(29)] = 875,
  [SMALL_STATE(30)] = 891,
  [SMALL_STATE(31)] = 917,
  [SMALL_STATE(32)] = 933,
  [SMALL_STATE(33)] = 949,
  [SMALL_STATE(34)] = 969,
  [SMALL_STATE(35)] = 985,
  [SMALL_STATE(36)] = 1001,
  [SMALL_STATE(37)] = 1017,
  [SMALL_STATE(38)] = 1033,
  [SMALL_STATE(39)] = 1049,
  [SMALL_STATE(40)] = 1065,
  [SMALL_STATE(41)] = 1081,
  [SMALL_STATE(42)] = 1097,
  [SMALL_STATE(43)] = 1113,
  [SMALL_STATE(44)] = 1129,
  [SMALL_STATE(45)] = 1145,
  [SMALL_STATE(46)] = 1161,
  [SMALL_STATE(47)] = 1176,
  [SMALL_STATE(48)] = 1191,
  [SMALL_STATE(49)] = 1205,
  [SMALL_STATE(50)] = 1219,
  [SMALL_STATE(51)] = 1233,
  [SMALL_STATE(52)] = 1247,
  [SMALL_STATE(53)] = 1261,
  [SMALL_STATE(54)] = 1275,
  [SMALL_STATE(55)] = 1289,
  [SMALL_STATE(56)] = 1303,
  [SMALL_STATE(57)] = 1317,
  [SMALL_STATE(58)] = 1331,
  [SMALL_STATE(59)] = 1346,
  [SMALL_STATE(60)] = 1361,
  [SMALL_STATE(61)] = 1372,
  [SMALL_STATE(62)] = 1385,
  [SMALL_STATE(63)] = 1398,
  [SMALL_STATE(64)] = 1409,
  [SMALL_STATE(65)] = 1422,
  [SMALL_STATE(66)] = 1429,
  [SMALL_STATE(67)] = 1436,
  [SMALL_STATE(68)] = 1447,
  [SMALL_STATE(69)] = 1460,
  [SMALL_STATE(70)] = 1473,
  [SMALL_STATE(71)] = 1486,
  [SMALL_STATE(72)] = 1499,
  [SMALL_STATE(73)] = 1512,
  [SMALL_STATE(74)] = 1521,
  [SMALL_STATE(75)] = 1530,
  [SMALL_STATE(76)] = 1543,
  [SMALL_STATE(77)] = 1556,
  [SMALL_STATE(78)] = 1566,
  [SMALL_STATE(79)] = 1576,
  [SMALL_STATE(80)] = 1586,
  [SMALL_STATE(81)] = 1596,
  [SMALL_STATE(82)] = 1606,
  [SMALL_STATE(83)] = 1614,
  [SMALL_STATE(84)] = 1624,
  [SMALL_STATE(85)] = 1632,
  [SMALL_STATE(86)] = 1642,
  [SMALL_STATE(87)] = 1652,
  [SMALL_STATE(88)] = 1660,
  [SMALL_STATE(89)] = 1670,
  [SMALL_STATE(90)] = 1677,
  [SMALL_STATE(91)] = 1684,
  [SMALL_STATE(92)] = 1691,
  [SMALL_STATE(93)] = 1698,
  [SMALL_STATE(94)] = 1705,
  [SMALL_STATE(95)] = 1712,
  [SMALL_STATE(96)] = 1719,
  [SMALL_STATE(97)] = 1726,
  [SMALL_STATE(98)] = 1731,
  [SMALL_STATE(99)] = 1738,
  [SMALL_STATE(100)] = 1745,
  [SMALL_STATE(101)] = 1752,
  [SMALL_STATE(102)] = 1759,
  [SMALL_STATE(103)] = 1766,
  [SMALL_STATE(104)] = 1773,
  [SMALL_STATE(105)] = 1780,
  [SMALL_STATE(106)] = 1787,
  [SMALL_STATE(107)] = 1794,
  [SMALL_STATE(108)] = 1801,
  [SMALL_STATE(109)] = 1808,
  [SMALL_STATE(110)] = 1815,
  [SMALL_STATE(111)] = 1822,
  [SMALL_STATE(112)] = 1829,
  [SMALL_STATE(113)] = 1836,
  [SMALL_STATE(114)] = 1843,
  [SMALL_STATE(115)] = 1850,
  [SMALL_STATE(116)] = 1857,
  [SMALL_STATE(117)] = 1864,
  [SMALL_STATE(118)] = 1871,
  [SMALL_STATE(119)] = 1878,
  [SMALL_STATE(120)] = 1885,
  [SMALL_STATE(121)] = 1892,
  [SMALL_STATE(122)] = 1899,
  [SMALL_STATE(123)] = 1906,
  [SMALL_STATE(124)] = 1913,
  [SMALL_STATE(125)] = 1920,
  [SMALL_STATE(126)] = 1927,
  [SMALL_STATE(127)] = 1934,
  [SMALL_STATE(128)] = 1941,
  [SMALL_STATE(129)] = 1948,
  [SMALL_STATE(130)] = 1955,
  [SMALL_STATE(131)] = 1959,
  [SMALL_STATE(132)] = 1963,
  [SMALL_STATE(133)] = 1967,
  [SMALL_STATE(134)] = 1971,
  [SMALL_STATE(135)] = 1975,
  [SMALL_STATE(136)] = 1979,
  [SMALL_STATE(137)] = 1983,
  [SMALL_STATE(138)] = 1987,
  [SMALL_STATE(139)] = 1991,
  [SMALL_STATE(140)] = 1995,
  [SMALL_STATE(141)] = 1999,
  [SMALL_STATE(142)] = 2003,
  [SMALL_STATE(143)] = 2007,
  [SMALL_STATE(144)] = 2011,
  [SMALL_STATE(145)] = 2015,
  [SMALL_STATE(146)] = 2019,
  [SMALL_STATE(147)] = 2023,
  [SMALL_STATE(148)] = 2027,
  [SMALL_STATE(149)] = 2031,
  [SMALL_STATE(150)] = 2035,
  [SMALL_STATE(151)] = 2039,
  [SMALL_STATE(152)] = 2043,
  [SMALL_STATE(153)] = 2047,
  [SMALL_STATE(154)] = 2051,
  [SMALL_STATE(155)] = 2055,
  [SMALL_STATE(156)] = 2059,
  [SMALL_STATE(157)] = 2063,
  [SMALL_STATE(158)] = 2067,
  [SMALL_STATE(159)] = 2071,
  [SMALL_STATE(160)] = 2075,
  [SMALL_STATE(161)] = 2079,
  [SMALL_STATE(162)] = 2083,
  [SMALL_STATE(163)] = 2087,
  [SMALL_STATE(164)] = 2091,
  [SMALL_STATE(165)] = 2095,
  [SMALL_STATE(166)] = 2099,
  [SMALL_STATE(167)] = 2103,
  [SMALL_STATE(168)] = 2107,
  [SMALL_STATE(169)] = 2111,
  [SMALL_STATE(170)] = 2115,
  [SMALL_STATE(171)] = 2119,
  [SMALL_STATE(172)] = 2123,
  [SMALL_STATE(173)] = 2127,
  [SMALL_STATE(174)] = 2131,
  [SMALL_STATE(175)] = 2135,
  [SMALL_STATE(176)] = 2139,
  [SMALL_STATE(177)] = 2143,
  [SMALL_STATE(178)] = 2147,
  [SMALL_STATE(179)] = 2151,
  [SMALL_STATE(180)] = 2155,
  [SMALL_STATE(181)] = 2159,
  [SMALL_STATE(182)] = 2163,
  [SMALL_STATE(183)] = 2167,
  [SMALL_STATE(184)] = 2171,
  [SMALL_STATE(185)] = 2175,
  [SMALL_STATE(186)] = 2179,
  [SMALL_STATE(187)] = 2183,
  [SMALL_STATE(188)] = 2187,
  [SMALL_STATE(189)] = 2191,
  [SMALL_STATE(190)] = 2195,
  [SMALL_STATE(191)] = 2199,
  [SMALL_STATE(192)] = 2203,
  [SMALL_STATE(193)] = 2207,
  [SMALL_STATE(194)] = 2211,
  [SMALL_STATE(195)] = 2215,
  [SMALL_STATE(196)] = 2219,
  [SMALL_STATE(197)] = 2223,
  [SMALL_STATE(198)] = 2227,
  [SMALL_STATE(199)] = 2231,
  [SMALL_STATE(200)] = 2235,
  [SMALL_STATE(201)] = 2239,
  [SMALL_STATE(202)] = 2243,
  [SMALL_STATE(203)] = 2247,
  [SMALL_STATE(204)] = 2251,
  [SMALL_STATE(205)] = 2255,
  [SMALL_STATE(206)] = 2259,
  [SMALL_STATE(207)] = 2263,
  [SMALL_STATE(208)] = 2267,
  [SMALL_STATE(209)] = 2271,
  [SMALL_STATE(210)] = 2275,
  [SMALL_STATE(211)] = 2279,
  [SMALL_STATE(212)] = 2283,
  [SMALL_STATE(213)] = 2287,
  [SMALL_STATE(214)] = 2291,
  [SMALL_STATE(215)] = 2295,
  [SMALL_STATE(216)] = 2299,
  [SMALL_STATE(217)] = 2303,
  [SMALL_STATE(218)] = 2307,
  [SMALL_STATE(219)] = 2311,
  [SMALL_STATE(220)] = 2315,
  [SMALL_STATE(221)] = 2319,
  [SMALL_STATE(222)] = 2323,
  [SMALL_STATE(223)] = 2327,
  [SMALL_STATE(224)] = 2331,
  [SMALL_STATE(225)] = 2335,
  [SMALL_STATE(226)] = 2339,
  [SMALL_STATE(227)] = 2343,
  [SMALL_STATE(228)] = 2347,
  [SMALL_STATE(229)] = 2351,
  [SMALL_STATE(230)] = 2355,
  [SMALL_STATE(231)] = 2359,
  [SMALL_STATE(232)] = 2363,
  [SMALL_STATE(233)] = 2367,
  [SMALL_STATE(234)] = 2371,
  [SMALL_STATE(235)] = 2375,
  [SMALL_STATE(236)] = 2379,
  [SMALL_STATE(237)] = 2383,
  [SMALL_STATE(238)] = 2387,
  [SMALL_STATE(239)] = 2391,
  [SMALL_STATE(240)] = 2395,
  [SMALL_STATE(241)] = 2399,
  [SMALL_STATE(242)] = 2403,
  [SMALL_STATE(243)] = 2407,
  [SMALL_STATE(244)] = 2411,
  [SMALL_STATE(245)] = 2415,
  [SMALL_STATE(246)] = 2419,
  [SMALL_STATE(247)] = 2423,
  [SMALL_STATE(248)] = 2427,
  [SMALL_STATE(249)] = 2431,
  [SMALL_STATE(250)] = 2435,
  [SMALL_STATE(251)] = 2439,
  [SMALL_STATE(252)] = 2443,
  [SMALL_STATE(253)] = 2447,
  [SMALL_STATE(254)] = 2451,
  [SMALL_STATE(255)] = 2455,
  [SMALL_STATE(256)] = 2459,
  [SMALL_STATE(257)] = 2463,
  [SMALL_STATE(258)] = 2467,
  [SMALL_STATE(259)] = 2471,
  [SMALL_STATE(260)] = 2475,
  [SMALL_STATE(261)] = 2479,
  [SMALL_STATE(262)] = 2483,
  [SMALL_STATE(263)] = 2487,
  [SMALL_STATE(264)] = 2491,
  [SMALL_STATE(265)] = 2495,
  [SMALL_STATE(266)] = 2499,
  [SMALL_STATE(267)] = 2503,
  [SMALL_STATE(268)] = 2507,
  [SMALL_STATE(269)] = 2511,
  [SMALL_STATE(270)] = 2515,
  [SMALL_STATE(271)] = 2519,
  [SMALL_STATE(272)] = 2523,
  [SMALL_STATE(273)] = 2527,
  [SMALL_STATE(274)] = 2531,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_color_function_call_repeat2, 2), SHIFT_REPEAT(267),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_color_function_call_repeat2, 2),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_color_function_call_repeat2, 2), SHIFT_REPEAT(73),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_color_function_call_repeat2, 2), SHIFT_REPEAT(268),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_color_function_call_repeat2, 2), SHIFT_REPEAT(269),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_color_function_call_repeat2, 2), SHIFT_REPEAT(16),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_color_function_call_repeat2, 2), SHIFT_REPEAT(270),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_color_function_call_repeat2, 2), SHIFT_REPEAT(271),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_color_function_call_repeat2, 2), SHIFT_REPEAT(272),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_color_function_call_repeat2, 2), SHIFT_REPEAT(273),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_color_function_call_repeat2, 2), SHIFT_REPEAT(274),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__color_value_repeat1, 2),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__color_value_repeat1, 2), SHIFT_REPEAT(241),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__color_value, 2),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__color_value, 1),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__token_body, 2), SHIFT_REPEAT(92),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__token_body, 2), SHIFT_REPEAT(201),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__token_body, 2),
  [124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__token_body, 2), SHIFT_REPEAT(200),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_color_function_call_repeat2, 1),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [143] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__token_body, 2), SHIFT_REPEAT(91),
  [146] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__token_body, 2), SHIFT_REPEAT(238),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hsl, 7, .production_id = 2),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oklch, 9, .production_id = 5),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hex, 2),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rgb, 9, .production_id = 1),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rec2020, 9, .production_id = 1),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_p3, 9, .production_id = 1),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color_function_call, 4),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_color_function_call_repeat1, 2),
  [165] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_color_function_call_repeat1, 2), SHIFT_REPEAT(9),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oklab, 9, .production_id = 4),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hsv, 9, .production_id = 3),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color_function_call, 5),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hsl, 9, .production_id = 2),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_a98rgb, 9, .production_id = 1),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_a98rgb, 7, .production_id = 1),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rgb, 7, .production_id = 1),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rec2020, 7, .production_id = 1),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_p3, 7, .production_id = 1),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oklch, 7, .production_id = 5),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oklab, 7, .production_id = 4),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hsv, 7, .production_id = 3),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_percent_number, 2),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_token_block, 5),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional_token_block, 5),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional_token_block, 7),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_token_block, 7),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional_token_block, 6),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_token_block, 6),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_child_token_block, 4),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child_token_block, 4),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__token_body, 2),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [218] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(59),
  [221] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(125),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [232] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__color_value_repeat1, 2), SHIFT_REPEAT(155),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conditional_token_block_repeat2, 2),
  [237] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conditional_token_block_repeat2, 2), SHIFT_REPEAT(192),
  [240] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_conditional_token_block_repeat2, 2), SHIFT_REPEAT(192),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tokens_block, 5),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tokens_block, 4),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conditional_token_block_repeat1, 2),
  [253] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conditional_token_block_repeat1, 2), SHIFT_REPEAT(154),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_switch_repeat1, 2),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_switch_repeat1, 2),
  [280] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch, 3),
  [284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [286] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_switch_repeat1, 2), SHIFT_REPEAT(172),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conditional_token_block_repeat2, 5),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_conditional_token_block_repeat2, 5),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_token_reference, 2),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_token_reference, 2),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch, 2),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conditional_token_block_repeat2, 4),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_conditional_token_block_repeat2, 4),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oklab, 7, .production_id = 4),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rgb, 7, .production_id = 1),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_switch_repeat1, 3),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_switch_repeat1, 3),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hex, 2),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_a98rgb, 7, .production_id = 1),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rec2020, 9, .production_id = 1),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hsl, 7, .production_id = 2),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rgb, 9, .production_id = 1),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hsv, 7, .production_id = 3),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_a98rgb, 9, .production_id = 1),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hsl, 9, .production_id = 2),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hsv, 9, .production_id = 3),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oklch, 7, .production_id = 5),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oklab, 9, .production_id = 4),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_p3, 7, .production_id = 1),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_color_function_call, 4),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [423] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oklch, 9, .production_id = 5),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rec2020, 7, .production_id = 1),
  [427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_color_function_call, 5),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_p3, 9, .production_id = 1),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_token_assignment, 3),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string, 3),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dimension, 2),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_token_declaration, 4),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_token_value, 1),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_token_type, 1),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [647] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
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
