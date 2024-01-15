#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 283
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 88
#define ALIAS_COUNT 10
#define TOKEN_COUNT 52
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
  anon_sym_STAR = 7,
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
  anon_sym_PLUS = 27,
  anon_sym_DASH = 28,
  anon_sym_SLASH = 29,
  anon_sym_PERCENT = 30,
  aux_sym_oklab_token1 = 31,
  aux_sym_oklch_token1 = 32,
  aux_sym_p3_token1 = 33,
  aux_sym_percent_number_token1 = 34,
  sym_positive_assertion = 35,
  aux_sym_rec2020_token1 = 36,
  sym_ref_identifier = 37,
  aux_sym_rgb_token1 = 38,
  sym_single_line_comment = 39,
  sym_string = 40,
  anon_sym_COLON = 41,
  anon_sym_tokens = 42,
  aux_sym_tokens_block_token1 = 43,
  aux_sym_tokens_block_token2 = 44,
  anon_sym_DOLLAR = 45,
  anon_sym_text = 46,
  anon_sym_color = 47,
  anon_sym_asset = 48,
  anon_sym_switch = 49,
  anon_sym_dimension = 50,
  anon_sym_range = 51,
  sym_source_file = 52,
  sym__string = 53,
  aux_sym__token_body = 54,
  sym_a98rgb = 55,
  sym_asterisk = 56,
  sym_child_token_block = 57,
  sym_color_expression = 58,
  sym_color_function_call = 59,
  sym_conditional_token_block = 60,
  sym_dimension = 61,
  sym_expression = 62,
  sym_hex = 63,
  sym_hsl = 64,
  sym_hsv = 65,
  sym_numeric_operator = 66,
  sym_oklab = 67,
  sym_oklch = 68,
  sym_p3 = 69,
  sym_percent_number = 70,
  sym_rec2020 = 71,
  sym_rgb = 72,
  sym_switch = 73,
  sym_token_assignment = 74,
  sym_tokens_block = 75,
  sym_token_declaration = 76,
  sym_token_reference = 77,
  sym_token_type = 78,
  sym_token_value = 79,
  aux_sym_source_file_repeat1 = 80,
  aux_sym_color_expression_repeat1 = 81,
  aux_sym_color_function_call_repeat1 = 82,
  aux_sym_color_function_call_repeat2 = 83,
  aux_sym_conditional_token_block_repeat1 = 84,
  aux_sym_conditional_token_block_repeat2 = 85,
  aux_sym_expression_repeat1 = 86,
  aux_sym_switch_repeat1 = 87,
  alias_sym_a_channel = 88,
  alias_sym_b_channel = 89,
  alias_sym_blue_channel = 90,
  alias_sym_chroma_channel = 91,
  alias_sym_green_channel = 92,
  alias_sym_hue_channel = 93,
  alias_sym_lightness_channel = 94,
  alias_sym_red_channel = 95,
  alias_sym_saturation_channel = 96,
  alias_sym_value_channel = 97,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__newlines] = "_newlines",
  [aux_sym__string_token1] = "_string_token1",
  [aux_sym_a98rgb_token1] = "a98rgb_token1",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [sym_asset_path] = "asset_path",
  [anon_sym_STAR] = "*",
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
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_SLASH] = "/",
  [anon_sym_PERCENT] = "%",
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
  [sym__string] = "_string",
  [aux_sym__token_body] = "_token_body",
  [sym_a98rgb] = "a98rgb",
  [sym_asterisk] = "asterisk",
  [sym_child_token_block] = "child_token_block",
  [sym_color_expression] = "color_expression",
  [sym_color_function_call] = "color_function_call",
  [sym_conditional_token_block] = "conditional_token_block",
  [sym_dimension] = "dimension",
  [sym_expression] = "expression",
  [sym_hex] = "hex",
  [sym_hsl] = "hsl",
  [sym_hsv] = "hsv",
  [sym_numeric_operator] = "numeric_operator",
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
  [aux_sym_color_expression_repeat1] = "color_expression_repeat1",
  [aux_sym_color_function_call_repeat1] = "color_function_call_repeat1",
  [aux_sym_color_function_call_repeat2] = "color_function_call_repeat2",
  [aux_sym_conditional_token_block_repeat1] = "conditional_token_block_repeat1",
  [aux_sym_conditional_token_block_repeat2] = "conditional_token_block_repeat2",
  [aux_sym_expression_repeat1] = "expression_repeat1",
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
  [anon_sym_STAR] = anon_sym_STAR,
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
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
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
  [sym__string] = sym__string,
  [aux_sym__token_body] = aux_sym__token_body,
  [sym_a98rgb] = sym_a98rgb,
  [sym_asterisk] = sym_asterisk,
  [sym_child_token_block] = sym_child_token_block,
  [sym_color_expression] = sym_color_expression,
  [sym_color_function_call] = sym_color_function_call,
  [sym_conditional_token_block] = sym_conditional_token_block,
  [sym_dimension] = sym_dimension,
  [sym_expression] = sym_expression,
  [sym_hex] = sym_hex,
  [sym_hsl] = sym_hsl,
  [sym_hsv] = sym_hsv,
  [sym_numeric_operator] = sym_numeric_operator,
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
  [aux_sym_color_expression_repeat1] = aux_sym_color_expression_repeat1,
  [aux_sym_color_function_call_repeat1] = aux_sym_color_function_call_repeat1,
  [aux_sym_color_function_call_repeat2] = aux_sym_color_function_call_repeat2,
  [aux_sym_conditional_token_block_repeat1] = aux_sym_conditional_token_block_repeat1,
  [aux_sym_conditional_token_block_repeat2] = aux_sym_conditional_token_block_repeat2,
  [aux_sym_expression_repeat1] = aux_sym_expression_repeat1,
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
  [anon_sym_STAR] = {
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
  [sym_asterisk] = {
    .visible = true,
    .named = true,
  },
  [sym_child_token_block] = {
    .visible = true,
    .named = true,
  },
  [sym_color_expression] = {
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
  [sym_expression] = {
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
  [sym_numeric_operator] = {
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
  [aux_sym_color_expression_repeat1] = {
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
  [aux_sym_expression_repeat1] = {
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
  [6] = 5,
  [7] = 7,
  [8] = 7,
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
  [27] = 27,
  [28] = 27,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 23,
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
  [48] = 44,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 51,
  [54] = 54,
  [55] = 55,
  [56] = 49,
  [57] = 50,
  [58] = 54,
  [59] = 55,
  [60] = 13,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 11,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 70,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 12,
  [76] = 76,
  [77] = 73,
  [78] = 78,
  [79] = 69,
  [80] = 10,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 78,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 91,
  [93] = 93,
  [94] = 94,
  [95] = 89,
  [96] = 96,
  [97] = 16,
  [98] = 98,
  [99] = 98,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 17,
  [110] = 110,
  [111] = 111,
  [112] = 26,
  [113] = 37,
  [114] = 30,
  [115] = 35,
  [116] = 32,
  [117] = 34,
  [118] = 38,
  [119] = 33,
  [120] = 39,
  [121] = 31,
  [122] = 42,
  [123] = 22,
  [124] = 96,
  [125] = 107,
  [126] = 106,
  [127] = 105,
  [128] = 103,
  [129] = 102,
  [130] = 101,
  [131] = 100,
  [132] = 132,
  [133] = 29,
  [134] = 41,
  [135] = 24,
  [136] = 136,
  [137] = 40,
  [138] = 25,
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
  [166] = 166,
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
  [180] = 111,
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
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 202,
  [207] = 207,
  [208] = 201,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 164,
  [219] = 165,
  [220] = 166,
  [221] = 167,
  [222] = 168,
  [223] = 169,
  [224] = 170,
  [225] = 171,
  [226] = 226,
  [227] = 227,
  [228] = 200,
  [229] = 215,
  [230] = 143,
  [231] = 144,
  [232] = 145,
  [233] = 146,
  [234] = 147,
  [235] = 148,
  [236] = 149,
  [237] = 150,
  [238] = 154,
  [239] = 155,
  [240] = 156,
  [241] = 157,
  [242] = 158,
  [243] = 159,
  [244] = 160,
  [245] = 161,
  [246] = 140,
  [247] = 247,
  [248] = 204,
  [249] = 172,
  [250] = 214,
  [251] = 213,
  [252] = 212,
  [253] = 211,
  [254] = 184,
  [255] = 179,
  [256] = 210,
  [257] = 141,
  [258] = 258,
  [259] = 152,
  [260] = 151,
  [261] = 189,
  [262] = 178,
  [263] = 258,
  [264] = 226,
  [265] = 217,
  [266] = 216,
  [267] = 185,
  [268] = 183,
  [269] = 182,
  [270] = 177,
  [271] = 176,
  [272] = 175,
  [273] = 174,
  [274] = 173,
  [275] = 198,
  [276] = 196,
  [277] = 195,
  [278] = 193,
  [279] = 192,
  [280] = 191,
  [281] = 190,
  [282] = 139,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(120);
      if (lookahead == '"') ADVANCE(122);
      if (lookahead == '#') ADVANCE(143);
      if (lookahead == '$') ADVANCE(231);
      if (lookahead == '%') ADVANCE(215);
      if (lookahead == '(') ADVANCE(131);
      if (lookahead == ')') ADVANCE(125);
      if (lookahead == '*') ADVANCE(127);
      if (lookahead == '+') ADVANCE(211);
      if (lookahead == ',') ADVANCE(124);
      if (lookahead == '-') ADVANCE(212);
      if (lookahead == '.') ADVANCE(130);
      if (lookahead == '/') ADVANCE(214);
      if (lookahead == '0') ADVANCE(136);
      if (lookahead == '1') ADVANCE(137);
      if (lookahead == ':') ADVANCE(227);
      if (lookahead == 'a') ADVANCE(27);
      if (lookahead == 'c') ADVANCE(101);
      if (lookahead == 'd') ADVANCE(59);
      if (lookahead == 'e') ADVANCE(105);
      if (lookahead == 'h') ADVANCE(84);
      if (lookahead == 'i') ADVANCE(70);
      if (lookahead == 'm') ADVANCE(67);
      if (lookahead == 'o') ADVANCE(62);
      if (lookahead == 'p') ADVANCE(23);
      if (lookahead == 'r') ADVANCE(30);
      if (lookahead == 's') ADVANCE(96);
      if (lookahead == 't') ADVANCE(42);
      if (lookahead == 'v') ADVANCE(104);
      if (lookahead == 'w') ADVANCE(53);
      if (lookahead == '{') ADVANCE(128);
      if (lookahead == '}') ADVANCE(129);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(115);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(209);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(121);
      if (lookahead == '$') ADVANCE(231);
      if (lookahead == '%') ADVANCE(215);
      if (lookahead == '*') ADVANCE(127);
      if (lookahead == '+') ADVANCE(211);
      if (lookahead == ',') ADVANCE(124);
      if (lookahead == '-') ADVANCE(212);
      if (lookahead == '.') ADVANCE(130);
      if (lookahead == '/') ADVANCE(213);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(205);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(122);
      if (lookahead == '#') ADVANCE(143);
      if (lookahead == '$') ADVANCE(231);
      if (lookahead == '-') ADVANCE(109);
      if (lookahead == '/') ADVANCE(118);
      if (lookahead == 'a') ADVANCE(29);
      if (lookahead == 'h') ADVANCE(87);
      if (lookahead == 'o') ADVANCE(61);
      if (lookahead == 'p') ADVANCE(24);
      if (lookahead == 'r') ADVANCE(44);
      if (lookahead == '{') ADVANCE(229);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(205);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 3:
      if (lookahead == '%') ADVANCE(142);
      if (lookahead == 'c') ADVANCE(102);
      if (lookahead == 'd') ADVANCE(95);
      if (lookahead == 'e') ADVANCE(105);
      if (lookahead == 'i') ADVANCE(69);
      if (lookahead == 'm') ADVANCE(67);
      if (lookahead == 'p') ADVANCE(106);
      if (lookahead == 'r') ADVANCE(41);
      if (lookahead == 'v') ADVANCE(104);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(115);
      END_STATE();
    case 4:
      if (lookahead == '(') ADVANCE(218);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '(') ADVANCE(153);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '(') ADVANCE(154);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '(') ADVANCE(223);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '(') ADVANCE(216);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '(') ADVANCE(217);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '(') ADVANCE(123);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '(') ADVANCE(221);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '*') ADVANCE(14);
      if (lookahead == '/') ADVANCE(224);
      END_STATE();
    case 13:
      if (lookahead == '*') ADVANCE(13);
      if (lookahead == '/') ADVANCE(203);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 14:
      if (lookahead == '*') ADVANCE(13);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == '0') ADVANCE(139);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(210);
      END_STATE();
    case 16:
      if (lookahead == '0') ADVANCE(135);
      if (lookahead == '1') ADVANCE(138);
      if (lookahead == 'a') ADVANCE(88);
      if (lookahead == 'c') ADVANCE(79);
      if (lookahead == 'd') ADVANCE(58);
      if (lookahead == 'r') ADVANCE(31);
      if (lookahead == 's') ADVANCE(97);
      if (lookahead == 't') ADVANCE(45);
      if (lookahead == 'w') ADVANCE(55);
      if (lookahead == '}') ADVANCE(230);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 17:
      if (lookahead == '0') ADVANCE(140);
      END_STATE();
    case 18:
      if (lookahead == '0') ADVANCE(11);
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
      if (lookahead == '3') ADVANCE(4);
      END_STATE();
    case 23:
      if (lookahead == '3') ADVANCE(4);
      if (lookahead == 'c' ||
          lookahead == 't' ||
          lookahead == 'x') ADVANCE(142);
      END_STATE();
    case 24:
      if (lookahead == '3') ADVANCE(155);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 25:
      if (lookahead == '8') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(146);
      END_STATE();
    case 26:
      if (lookahead == '8') ADVANCE(83);
      END_STATE();
    case 27:
      if (lookahead == '9') ADVANCE(25);
      if (lookahead == 's') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '8') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(112);
      END_STATE();
    case 28:
      if (lookahead == '9') ADVANCE(26);
      END_STATE();
    case 29:
      if (lookahead == '9') ADVANCE(167);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '8') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(71);
      if (lookahead == 'e') ADVANCE(39);
      if (lookahead == 'g') ADVANCE(35);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(190);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(98);
      if (lookahead == 'i') ADVANCE(69);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(88);
      if (lookahead == 'c') ADVANCE(79);
      if (lookahead == 'd') ADVANCE(58);
      if (lookahead == 'r') ADVANCE(31);
      if (lookahead == 's') ADVANCE(97);
      if (lookahead == 't') ADVANCE(45);
      if (lookahead == 'w') ADVANCE(55);
      if (lookahead == '}') ADVANCE(129);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(33)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(36);
      if (lookahead == 'c') ADVANCE(56);
      END_STATE();
    case 35:
      if (lookahead == 'b') ADVANCE(7);
      END_STATE();
    case 36:
      if (lookahead == 'b') ADVANCE(8);
      END_STATE();
    case 37:
      if (lookahead == 'b') ADVANCE(10);
      END_STATE();
    case 38:
      if (lookahead == 'c') ADVANCE(20);
      END_STATE();
    case 39:
      if (lookahead == 'c') ADVANCE(20);
      if (lookahead == 'm') ADVANCE(142);
      END_STATE();
    case 40:
      if (lookahead == 'c') ADVANCE(54);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(99);
      if (lookahead == 'o') ADVANCE(63);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(242);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(172);
      if (lookahead == 'g') ADVANCE(169);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(201);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(38);
      if (lookahead == 'g') ADVANCE(35);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 51:
      if (lookahead == 'g') ADVANCE(43);
      END_STATE();
    case 52:
      if (lookahead == 'g') ADVANCE(37);
      END_STATE();
    case 53:
      if (lookahead == 'h') ADVANCE(48);
      END_STATE();
    case 54:
      if (lookahead == 'h') ADVANCE(238);
      END_STATE();
    case 55:
      if (lookahead == 'h') ADVANCE(175);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 56:
      if (lookahead == 'h') ADVANCE(9);
      END_STATE();
    case 57:
      if (lookahead == 'i') ADVANCE(91);
      END_STATE();
    case 58:
      if (lookahead == 'i') ADVANCE(187);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 59:
      if (lookahead == 'i') ADVANCE(68);
      if (lookahead == 'v') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(112);
      END_STATE();
    case 60:
      if (lookahead == 'i') ADVANCE(81);
      END_STATE();
    case 61:
      if (lookahead == 'k') ADVANCE(184);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 62:
      if (lookahead == 'k') ADVANCE(65);
      END_STATE();
    case 63:
      if (lookahead == 'k') ADVANCE(50);
      END_STATE();
    case 64:
      if (lookahead == 'l') ADVANCE(77);
      END_STATE();
    case 65:
      if (lookahead == 'l') ADVANCE(34);
      END_STATE();
    case 66:
      if (lookahead == 'l') ADVANCE(5);
      if (lookahead == 'v') ADVANCE(6);
      END_STATE();
    case 67:
      if (lookahead == 'm') ADVANCE(142);
      END_STATE();
    case 68:
      if (lookahead == 'm') ADVANCE(49);
      END_STATE();
    case 69:
      if (lookahead == 'n') ADVANCE(142);
      END_STATE();
    case 70:
      if (lookahead == 'n') ADVANCE(142);
      if (lookahead == 's') ADVANCE(220);
      END_STATE();
    case 71:
      if (lookahead == 'n') ADVANCE(51);
      END_STATE();
    case 72:
      if (lookahead == 'n') ADVANCE(133);
      END_STATE();
    case 73:
      if (lookahead == 'n') ADVANCE(240);
      END_STATE();
    case 74:
      if (lookahead == 'n') ADVANCE(80);
      END_STATE();
    case 75:
      if (lookahead == 'n') ADVANCE(89);
      END_STATE();
    case 76:
      if (lookahead == 'n') ADVANCE(86);
      END_STATE();
    case 77:
      if (lookahead == 'o') ADVANCE(82);
      END_STATE();
    case 78:
      if (lookahead == 'o') ADVANCE(63);
      END_STATE();
    case 79:
      if (lookahead == 'o') ADVANCE(185);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 80:
      if (lookahead == 'o') ADVANCE(94);
      END_STATE();
    case 81:
      if (lookahead == 'o') ADVANCE(73);
      END_STATE();
    case 82:
      if (lookahead == 'r') ADVANCE(234);
      END_STATE();
    case 83:
      if (lookahead == 'r') ADVANCE(52);
      END_STATE();
    case 84:
      if (lookahead == 's') ADVANCE(66);
      END_STATE();
    case 85:
      if (lookahead == 's') ADVANCE(220);
      END_STATE();
    case 86:
      if (lookahead == 's') ADVANCE(228);
      END_STATE();
    case 87:
      if (lookahead == 's') ADVANCE(186);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 88:
      if (lookahead == 's') ADVANCE(197);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 89:
      if (lookahead == 's') ADVANCE(60);
      END_STATE();
    case 90:
      if (lookahead == 's') ADVANCE(47);
      END_STATE();
    case 91:
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 92:
      if (lookahead == 't') ADVANCE(232);
      END_STATE();
    case 93:
      if (lookahead == 't') ADVANCE(236);
      END_STATE();
    case 94:
      if (lookahead == 't') ADVANCE(204);
      END_STATE();
    case 95:
      if (lookahead == 'v') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(112);
      END_STATE();
    case 96:
      if (lookahead == 'w') ADVANCE(57);
      END_STATE();
    case 97:
      if (lookahead == 'w') ADVANCE(182);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 98:
      if (lookahead == 'x') ADVANCE(142);
      END_STATE();
    case 99:
      if (lookahead == 'x') ADVANCE(92);
      END_STATE();
    case 100:
      if (lookahead == '{') ADVANCE(229);
      if (lookahead == '}') ADVANCE(129);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(100)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 101:
      if (lookahead == 'h' ||
          lookahead == 'm') ADVANCE(142);
      if (lookahead == 'o') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(112);
      END_STATE();
    case 102:
      if (lookahead == 'h' ||
          lookahead == 'm') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(112);
      END_STATE();
    case 103:
      if (lookahead == 'h' ||
          lookahead == 'w') ADVANCE(142);
      END_STATE();
    case 104:
      if (lookahead == 'h' ||
          lookahead == 'w') ADVANCE(142);
      if (lookahead == 'm') ADVANCE(32);
      END_STATE();
    case 105:
      if (lookahead == 'm' ||
          lookahead == 'x') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(112);
      END_STATE();
    case 106:
      if (lookahead == 'c' ||
          lookahead == 't' ||
          lookahead == 'x') ADVANCE(142);
      END_STATE();
    case 107:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(107)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 108:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(108)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 109:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(205);
      END_STATE();
    case 110:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(141);
      END_STATE();
    case 111:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(210);
      END_STATE();
    case 112:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(146);
      END_STATE();
    case 113:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(150);
      END_STATE();
    case 114:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(151);
      END_STATE();
    case 115:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(112);
      END_STATE();
    case 116:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 117:
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 118:
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 119:
      if (eof) ADVANCE(120);
      if (lookahead == '#') ADVANCE(143);
      if (lookahead == '$') ADVANCE(231);
      if (lookahead == '%') ADVANCE(219);
      if (lookahead == ')') ADVANCE(125);
      if (lookahead == ',') ADVANCE(124);
      if (lookahead == '-') ADVANCE(109);
      if (lookahead == '.') ADVANCE(130);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == 'a') ADVANCE(28);
      if (lookahead == 'h') ADVANCE(84);
      if (lookahead == 'i') ADVANCE(85);
      if (lookahead == 'o') ADVANCE(62);
      if (lookahead == 'p') ADVANCE(22);
      if (lookahead == 'r') ADVANCE(46);
      if (lookahead == 't') ADVANCE(78);
      if (lookahead == '{') ADVANCE(128);
      if (lookahead == '}') ADVANCE(129);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(119)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(205);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym__newlines);
      if (lookahead == '\n') ADVANCE(121);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym__string_token1);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_a98rgb_token1);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_asset_path);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_color_function_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_when);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_when);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_decimal_range);
      if (lookahead == '.') ADVANCE(110);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_decimal_range);
      if (lookahead == '.') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(112);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_decimal_range);
      if (lookahead == '.') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(112);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_decimal_range);
      if (lookahead == '.') ADVANCE(17);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_decimal_range);
      if (lookahead == '0') ADVANCE(139);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(210);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_decimal_range);
      if (lookahead == '0') ADVANCE(140);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_decimal_range);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(141);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_dimensional_unit);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_hex_token1);
      if (lookahead == '.') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(147);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(148);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_hex_token1);
      if (lookahead == 'r') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(148);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_hex_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(148);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_hex_token2);
      if (lookahead == '.') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(207);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(113);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_hex_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(113);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_hex_token3);
      if (lookahead == '.') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(208);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(114);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_hex_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(114);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_hex_token4);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_hex_token4);
      if (lookahead == '.') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(205);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_hsl_token1);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_hsv_token1);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(218);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(4);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(153);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(5);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(154);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(6);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(223);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(7);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(216);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(8);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(217);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(9);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(123);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(10);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(221);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '0') ADVANCE(162);
      if (lookahead == '-' ||
          ('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '0') ADVANCE(166);
      if (lookahead == '-' ||
          ('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(164);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(163);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '8') ADVANCE(194);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(170);
      if (lookahead == 'c') ADVANCE(181);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(158);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(159);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(161);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(165);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(180);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(243);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(188);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(191);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(199);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(174);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(171);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(239);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(160);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(200);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(193);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(168);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(192);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(156);
      if (lookahead == 'v') ADVANCE(157);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(176);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(134);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(241);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(178);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(196);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(195);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(189);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(179);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(235);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(183);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(177);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(233);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(237);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(173);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(198);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_multi_line_comment);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_negative_assertion);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(205);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(146);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(149);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(150);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(151);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(112);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(210);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(205);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(14);
      if (lookahead == '/') ADVANCE(224);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_oklab_token1);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_oklch_token1);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_p3_token1);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_percent_number_token1);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_positive_assertion);
      if (lookahead == ' ') ADVANCE(74);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_rec2020_token1);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_ref_identifier);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_rgb_token1);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_single_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(224);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(225);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\' &&
          lookahead != '^' &&
          lookahead != 'n') ADVANCE(226);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_string);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\' &&
          lookahead != '^' &&
          lookahead != 'n') ADVANCE(226);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_tokens);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_tokens_block_token1);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_tokens_block_token2);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_text);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_text);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_color);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_color);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_asset);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_asset);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_switch);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_switch);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_dimension);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_dimension);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_range);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_range);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 119},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 119},
  [5] = {.lex_state = 119},
  [6] = {.lex_state = 119},
  [7] = {.lex_state = 119},
  [8] = {.lex_state = 119},
  [9] = {.lex_state = 119},
  [10] = {.lex_state = 119},
  [11] = {.lex_state = 119},
  [12] = {.lex_state = 119},
  [13] = {.lex_state = 119},
  [14] = {.lex_state = 119},
  [15] = {.lex_state = 119},
  [16] = {.lex_state = 119},
  [17] = {.lex_state = 119},
  [18] = {.lex_state = 16},
  [19] = {.lex_state = 16},
  [20] = {.lex_state = 119},
  [21] = {.lex_state = 119},
  [22] = {.lex_state = 119},
  [23] = {.lex_state = 16},
  [24] = {.lex_state = 119},
  [25] = {.lex_state = 119},
  [26] = {.lex_state = 119},
  [27] = {.lex_state = 33},
  [28] = {.lex_state = 33},
  [29] = {.lex_state = 119},
  [30] = {.lex_state = 119},
  [31] = {.lex_state = 119},
  [32] = {.lex_state = 119},
  [33] = {.lex_state = 119},
  [34] = {.lex_state = 119},
  [35] = {.lex_state = 119},
  [36] = {.lex_state = 33},
  [37] = {.lex_state = 119},
  [38] = {.lex_state = 119},
  [39] = {.lex_state = 119},
  [40] = {.lex_state = 119},
  [41] = {.lex_state = 119},
  [42] = {.lex_state = 119},
  [43] = {.lex_state = 119},
  [44] = {.lex_state = 16},
  [45] = {.lex_state = 119},
  [46] = {.lex_state = 16},
  [47] = {.lex_state = 16},
  [48] = {.lex_state = 16},
  [49] = {.lex_state = 33},
  [50] = {.lex_state = 16},
  [51] = {.lex_state = 16},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 33},
  [54] = {.lex_state = 16},
  [55] = {.lex_state = 16},
  [56] = {.lex_state = 16},
  [57] = {.lex_state = 33},
  [58] = {.lex_state = 33},
  [59] = {.lex_state = 33},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 119},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 119},
  [66] = {.lex_state = 119},
  [67] = {.lex_state = 1},
  [68] = {.lex_state = 100},
  [69] = {.lex_state = 100},
  [70] = {.lex_state = 3},
  [71] = {.lex_state = 3},
  [72] = {.lex_state = 119},
  [73] = {.lex_state = 119},
  [74] = {.lex_state = 100},
  [75] = {.lex_state = 1},
  [76] = {.lex_state = 119},
  [77] = {.lex_state = 119},
  [78] = {.lex_state = 100},
  [79] = {.lex_state = 100},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 119},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 100},
  [85] = {.lex_state = 100},
  [86] = {.lex_state = 1},
  [87] = {.lex_state = 1},
  [88] = {.lex_state = 119},
  [89] = {.lex_state = 119},
  [90] = {.lex_state = 1},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 1},
  [94] = {.lex_state = 119},
  [95] = {.lex_state = 119},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 1},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 100},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 1},
  [109] = {.lex_state = 1},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 1},
  [112] = {.lex_state = 1},
  [113] = {.lex_state = 1},
  [114] = {.lex_state = 1},
  [115] = {.lex_state = 1},
  [116] = {.lex_state = 1},
  [117] = {.lex_state = 1},
  [118] = {.lex_state = 1},
  [119] = {.lex_state = 1},
  [120] = {.lex_state = 1},
  [121] = {.lex_state = 1},
  [122] = {.lex_state = 1},
  [123] = {.lex_state = 1},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 100},
  [133] = {.lex_state = 1},
  [134] = {.lex_state = 1},
  [135] = {.lex_state = 1},
  [136] = {.lex_state = 119},
  [137] = {.lex_state = 1},
  [138] = {.lex_state = 1},
  [139] = {.lex_state = 119},
  [140] = {.lex_state = 119},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 1},
  [143] = {.lex_state = 16},
  [144] = {.lex_state = 119},
  [145] = {.lex_state = 119},
  [146] = {.lex_state = 16},
  [147] = {.lex_state = 119},
  [148] = {.lex_state = 16},
  [149] = {.lex_state = 16},
  [150] = {.lex_state = 119},
  [151] = {.lex_state = 119},
  [152] = {.lex_state = 16},
  [153] = {.lex_state = 1},
  [154] = {.lex_state = 16},
  [155] = {.lex_state = 16},
  [156] = {.lex_state = 16},
  [157] = {.lex_state = 16},
  [158] = {.lex_state = 16},
  [159] = {.lex_state = 16},
  [160] = {.lex_state = 16},
  [161] = {.lex_state = 16},
  [162] = {.lex_state = 1},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 107},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 16},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 100},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 119},
  [188] = {.lex_state = 1},
  [189] = {.lex_state = 119},
  [190] = {.lex_state = 16},
  [191] = {.lex_state = 16},
  [192] = {.lex_state = 16},
  [193] = {.lex_state = 16},
  [194] = {.lex_state = 3},
  [195] = {.lex_state = 119},
  [196] = {.lex_state = 119},
  [197] = {.lex_state = 1},
  [198] = {.lex_state = 16},
  [199] = {.lex_state = 225},
  [200] = {.lex_state = 119},
  [201] = {.lex_state = 1},
  [202] = {.lex_state = 108},
  [203] = {.lex_state = 100},
  [204] = {.lex_state = 100},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 108},
  [207] = {.lex_state = 100},
  [208] = {.lex_state = 1},
  [209] = {.lex_state = 100},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 119},
  [217] = {.lex_state = 16},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 16},
  [227] = {.lex_state = 2},
  [228] = {.lex_state = 119},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 16},
  [231] = {.lex_state = 119},
  [232] = {.lex_state = 119},
  [233] = {.lex_state = 16},
  [234] = {.lex_state = 119},
  [235] = {.lex_state = 16},
  [236] = {.lex_state = 16},
  [237] = {.lex_state = 119},
  [238] = {.lex_state = 16},
  [239] = {.lex_state = 16},
  [240] = {.lex_state = 16},
  [241] = {.lex_state = 16},
  [242] = {.lex_state = 16},
  [243] = {.lex_state = 16},
  [244] = {.lex_state = 16},
  [245] = {.lex_state = 16},
  [246] = {.lex_state = 119},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 100},
  [249] = {.lex_state = 107},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 16},
  [259] = {.lex_state = 16},
  [260] = {.lex_state = 119},
  [261] = {.lex_state = 119},
  [262] = {.lex_state = 16},
  [263] = {.lex_state = 16},
  [264] = {.lex_state = 16},
  [265] = {.lex_state = 16},
  [266] = {.lex_state = 119},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 16},
  [276] = {.lex_state = 119},
  [277] = {.lex_state = 119},
  [278] = {.lex_state = 16},
  [279] = {.lex_state = 16},
  [280] = {.lex_state = 16},
  [281] = {.lex_state = 16},
  [282] = {.lex_state = 119},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym__string_token1] = ACTIONS(1),
    [aux_sym_a98rgb_token1] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
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
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [aux_sym_oklab_token1] = ACTIONS(1),
    [aux_sym_oklch_token1] = ACTIONS(1),
    [aux_sym_p3_token1] = ACTIONS(1),
    [aux_sym_percent_number_token1] = ACTIONS(1),
    [sym_positive_assertion] = ACTIONS(1),
    [aux_sym_rec2020_token1] = ACTIONS(1),
    [aux_sym_rgb_token1] = ACTIONS(1),
    [sym_single_line_comment] = ACTIONS(1),
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
    [sym_source_file] = STATE(247),
    [sym_tokens_block] = STATE(65),
    [aux_sym_source_file_repeat1] = STATE(65),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_multi_line_comment] = ACTIONS(5),
    [sym_single_line_comment] = ACTIONS(5),
    [anon_sym_tokens] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 19,
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
    STATE(64), 1,
      aux_sym_expression_repeat1,
    STATE(188), 1,
      sym_token_value,
    STATE(52), 2,
      sym_dimension,
      sym_token_reference,
    STATE(197), 4,
      sym__string,
      sym_color_expression,
      sym_expression,
      sym_switch,
    STATE(80), 9,
      sym_a98rgb,
      sym_hex,
      sym_hsl,
      sym_hsv,
      sym_oklab,
      sym_oklch,
      sym_p3,
      sym_rec2020,
      sym_rgb,
  [70] = 19,
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
    STATE(64), 1,
      aux_sym_expression_repeat1,
    STATE(142), 1,
      sym_token_value,
    STATE(52), 2,
      sym_dimension,
      sym_token_reference,
    STATE(197), 4,
      sym__string,
      sym_color_expression,
      sym_expression,
      sym_switch,
    STATE(80), 9,
      sym_a98rgb,
      sym_hex,
      sym_hsl,
      sym_hsv,
      sym_oklab,
      sym_oklch,
      sym_p3,
      sym_rec2020,
      sym_rgb,
  [140] = 15,
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
    ACTIONS(69), 1,
      anon_sym_DOLLAR,
    STATE(4), 1,
      aux_sym_color_function_call_repeat2,
    STATE(20), 3,
      sym_color_expression,
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
  [196] = 15,
    ACTIONS(72), 1,
      aux_sym_a98rgb_token1,
    ACTIONS(74), 1,
      anon_sym_RPAREN,
    ACTIONS(76), 1,
      anon_sym_POUND,
    ACTIONS(78), 1,
      aux_sym_hsl_token1,
    ACTIONS(80), 1,
      aux_sym_hsv_token1,
    ACTIONS(82), 1,
      sym_number,
    ACTIONS(84), 1,
      aux_sym_oklab_token1,
    ACTIONS(86), 1,
      aux_sym_oklch_token1,
    ACTIONS(88), 1,
      aux_sym_p3_token1,
    ACTIONS(90), 1,
      aux_sym_rec2020_token1,
    ACTIONS(92), 1,
      aux_sym_rgb_token1,
    ACTIONS(94), 1,
      anon_sym_DOLLAR,
    STATE(4), 1,
      aux_sym_color_function_call_repeat2,
    STATE(20), 3,
      sym_color_expression,
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
  [252] = 15,
    ACTIONS(72), 1,
      aux_sym_a98rgb_token1,
    ACTIONS(76), 1,
      anon_sym_POUND,
    ACTIONS(78), 1,
      aux_sym_hsl_token1,
    ACTIONS(80), 1,
      aux_sym_hsv_token1,
    ACTIONS(82), 1,
      sym_number,
    ACTIONS(84), 1,
      aux_sym_oklab_token1,
    ACTIONS(86), 1,
      aux_sym_oklch_token1,
    ACTIONS(88), 1,
      aux_sym_p3_token1,
    ACTIONS(90), 1,
      aux_sym_rec2020_token1,
    ACTIONS(92), 1,
      aux_sym_rgb_token1,
    ACTIONS(94), 1,
      anon_sym_DOLLAR,
    ACTIONS(96), 1,
      anon_sym_RPAREN,
    STATE(4), 1,
      aux_sym_color_function_call_repeat2,
    STATE(20), 3,
      sym_color_expression,
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
  [308] = 15,
    ACTIONS(72), 1,
      aux_sym_a98rgb_token1,
    ACTIONS(76), 1,
      anon_sym_POUND,
    ACTIONS(78), 1,
      aux_sym_hsl_token1,
    ACTIONS(80), 1,
      aux_sym_hsv_token1,
    ACTIONS(82), 1,
      sym_number,
    ACTIONS(84), 1,
      aux_sym_oklab_token1,
    ACTIONS(86), 1,
      aux_sym_oklch_token1,
    ACTIONS(88), 1,
      aux_sym_p3_token1,
    ACTIONS(90), 1,
      aux_sym_rec2020_token1,
    ACTIONS(92), 1,
      aux_sym_rgb_token1,
    ACTIONS(94), 1,
      anon_sym_DOLLAR,
    ACTIONS(98), 1,
      anon_sym_RPAREN,
    STATE(6), 1,
      aux_sym_color_function_call_repeat2,
    STATE(20), 3,
      sym_color_expression,
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
  [364] = 15,
    ACTIONS(72), 1,
      aux_sym_a98rgb_token1,
    ACTIONS(76), 1,
      anon_sym_POUND,
    ACTIONS(78), 1,
      aux_sym_hsl_token1,
    ACTIONS(80), 1,
      aux_sym_hsv_token1,
    ACTIONS(82), 1,
      sym_number,
    ACTIONS(84), 1,
      aux_sym_oklab_token1,
    ACTIONS(86), 1,
      aux_sym_oklch_token1,
    ACTIONS(88), 1,
      aux_sym_p3_token1,
    ACTIONS(90), 1,
      aux_sym_rec2020_token1,
    ACTIONS(92), 1,
      aux_sym_rgb_token1,
    ACTIONS(94), 1,
      anon_sym_DOLLAR,
    ACTIONS(100), 1,
      anon_sym_RPAREN,
    STATE(5), 1,
      aux_sym_color_function_call_repeat2,
    STATE(20), 3,
      sym_color_expression,
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
  [420] = 11,
    ACTIONS(72), 1,
      aux_sym_a98rgb_token1,
    ACTIONS(76), 1,
      anon_sym_POUND,
    ACTIONS(78), 1,
      aux_sym_hsl_token1,
    ACTIONS(80), 1,
      aux_sym_hsv_token1,
    ACTIONS(84), 1,
      aux_sym_oklab_token1,
    ACTIONS(86), 1,
      aux_sym_oklch_token1,
    ACTIONS(88), 1,
      aux_sym_p3_token1,
    ACTIONS(90), 1,
      aux_sym_rec2020_token1,
    ACTIONS(92), 1,
      aux_sym_rgb_token1,
    STATE(43), 1,
      sym_color_expression,
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
  [462] = 3,
    ACTIONS(104), 1,
      anon_sym_DOT,
    STATE(11), 2,
      sym_color_function_call,
      aux_sym_color_expression_repeat1,
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
  [485] = 3,
    ACTIONS(104), 1,
      anon_sym_DOT,
    STATE(12), 2,
      sym_color_function_call,
      aux_sym_color_expression_repeat1,
    ACTIONS(106), 13,
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
  [508] = 3,
    ACTIONS(110), 1,
      anon_sym_DOT,
    STATE(12), 2,
      sym_color_function_call,
      aux_sym_color_expression_repeat1,
    ACTIONS(108), 13,
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
  [531] = 2,
    ACTIONS(115), 1,
      sym_positive_assertion,
    ACTIONS(113), 15,
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
  [552] = 4,
    ACTIONS(119), 1,
      anon_sym_COMMA,
    ACTIONS(121), 1,
      aux_sym_percent_number_token1,
    STATE(21), 1,
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
  [576] = 3,
    ACTIONS(125), 1,
      anon_sym_COMMA,
    STATE(15), 1,
      aux_sym_color_function_call_repeat1,
    ACTIONS(123), 12,
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
  [597] = 1,
    ACTIONS(128), 14,
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
  [614] = 1,
    ACTIONS(130), 14,
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
  [631] = 7,
    ACTIONS(132), 1,
      anon_sym_when,
    ACTIONS(134), 1,
      sym_identifier,
    ACTIONS(136), 1,
      aux_sym_tokens_block_token2,
    STATE(207), 1,
      sym_token_type,
    STATE(208), 1,
      sym_token_declaration,
    STATE(23), 3,
      aux_sym__token_body,
      sym_child_token_block,
      sym_conditional_token_block,
    ACTIONS(138), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [660] = 7,
    ACTIONS(132), 1,
      anon_sym_when,
    ACTIONS(134), 1,
      sym_identifier,
    ACTIONS(140), 1,
      aux_sym_tokens_block_token2,
    STATE(207), 1,
      sym_token_type,
    STATE(208), 1,
      sym_token_declaration,
    STATE(23), 3,
      aux_sym__token_body,
      sym_child_token_block,
      sym_conditional_token_block,
    ACTIONS(138), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [689] = 3,
    ACTIONS(119), 1,
      anon_sym_COMMA,
    STATE(21), 1,
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
  [710] = 3,
    ACTIONS(119), 1,
      anon_sym_COMMA,
    STATE(15), 1,
      aux_sym_color_function_call_repeat1,
    ACTIONS(40), 12,
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
  [731] = 1,
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
  [748] = 7,
    ACTIONS(144), 1,
      anon_sym_when,
    ACTIONS(147), 1,
      sym_identifier,
    ACTIONS(150), 1,
      aux_sym_tokens_block_token2,
    STATE(207), 1,
      sym_token_type,
    STATE(208), 1,
      sym_token_declaration,
    STATE(23), 3,
      aux_sym__token_body,
      sym_child_token_block,
      sym_conditional_token_block,
    ACTIONS(152), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [777] = 1,
    ACTIONS(155), 14,
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
  [794] = 1,
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
  [811] = 1,
    ACTIONS(159), 14,
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
    ACTIONS(161), 1,
      anon_sym_RBRACE,
    ACTIONS(163), 1,
      anon_sym_when,
    ACTIONS(165), 1,
      sym_identifier,
    STATE(201), 1,
      sym_token_declaration,
    STATE(207), 1,
      sym_token_type,
    STATE(36), 3,
      aux_sym__token_body,
      sym_child_token_block,
      sym_conditional_token_block,
    ACTIONS(138), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [857] = 7,
    ACTIONS(163), 1,
      anon_sym_when,
    ACTIONS(165), 1,
      sym_identifier,
    ACTIONS(167), 1,
      anon_sym_RBRACE,
    STATE(201), 1,
      sym_token_declaration,
    STATE(207), 1,
      sym_token_type,
    STATE(36), 3,
      aux_sym__token_body,
      sym_child_token_block,
      sym_conditional_token_block,
    ACTIONS(138), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [886] = 1,
    ACTIONS(169), 14,
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
    ACTIONS(171), 14,
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
  [937] = 1,
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
  [954] = 1,
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
  [971] = 1,
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
  [988] = 1,
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
  [1005] = 7,
    ACTIONS(150), 1,
      anon_sym_RBRACE,
    ACTIONS(183), 1,
      anon_sym_when,
    ACTIONS(186), 1,
      sym_identifier,
    STATE(201), 1,
      sym_token_declaration,
    STATE(207), 1,
      sym_token_type,
    STATE(36), 3,
      aux_sym__token_body,
      sym_child_token_block,
      sym_conditional_token_block,
    ACTIONS(152), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [1034] = 1,
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
  [1051] = 1,
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
  [1068] = 1,
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
  [1085] = 1,
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
  [1102] = 1,
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
  [1119] = 1,
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
  [1136] = 1,
    ACTIONS(123), 13,
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
  [1152] = 6,
    ACTIONS(163), 1,
      anon_sym_when,
    ACTIONS(165), 1,
      sym_identifier,
    STATE(201), 1,
      sym_token_declaration,
    STATE(207), 1,
      sym_token_type,
    STATE(28), 3,
      aux_sym__token_body,
      sym_child_token_block,
      sym_conditional_token_block,
    ACTIONS(138), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [1178] = 1,
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
  [1194] = 6,
    ACTIONS(132), 1,
      anon_sym_when,
    ACTIONS(134), 1,
      sym_identifier,
    STATE(207), 1,
      sym_token_type,
    STATE(208), 1,
      sym_token_declaration,
    STATE(18), 3,
      aux_sym__token_body,
      sym_child_token_block,
      sym_conditional_token_block,
    ACTIONS(138), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [1220] = 6,
    ACTIONS(132), 1,
      anon_sym_when,
    ACTIONS(134), 1,
      sym_identifier,
    STATE(207), 1,
      sym_token_type,
    STATE(208), 1,
      sym_token_declaration,
    STATE(19), 3,
      aux_sym__token_body,
      sym_child_token_block,
      sym_conditional_token_block,
    ACTIONS(138), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [1246] = 6,
    ACTIONS(163), 1,
      anon_sym_when,
    ACTIONS(165), 1,
      sym_identifier,
    STATE(201), 1,
      sym_token_declaration,
    STATE(207), 1,
      sym_token_type,
    STATE(27), 3,
      aux_sym__token_body,
      sym_child_token_block,
      sym_conditional_token_block,
    ACTIONS(138), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [1272] = 2,
    ACTIONS(150), 1,
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
  [1286] = 2,
    ACTIONS(207), 1,
      aux_sym_tokens_block_token2,
    ACTIONS(205), 8,
      anon_sym_when,
      sym_identifier,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [1300] = 2,
    ACTIONS(211), 1,
      aux_sym_tokens_block_token2,
    ACTIONS(209), 8,
      anon_sym_when,
      sym_identifier,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [1314] = 4,
    ACTIONS(213), 1,
      sym__newlines,
    STATE(72), 1,
      sym_numeric_operator,
    ACTIONS(217), 2,
      sym_number,
      anon_sym_DOLLAR,
    ACTIONS(215), 5,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [1332] = 2,
    ACTIONS(211), 1,
      anon_sym_RBRACE,
    ACTIONS(209), 8,
      anon_sym_when,
      sym_identifier,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [1346] = 2,
    ACTIONS(221), 1,
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
  [1360] = 2,
    ACTIONS(225), 1,
      aux_sym_tokens_block_token2,
    ACTIONS(223), 8,
      anon_sym_when,
      sym_identifier,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [1374] = 2,
    ACTIONS(150), 1,
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
  [1388] = 2,
    ACTIONS(207), 1,
      anon_sym_RBRACE,
    ACTIONS(205), 8,
      anon_sym_when,
      sym_identifier,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [1402] = 2,
    ACTIONS(221), 1,
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
  [1416] = 2,
    ACTIONS(225), 1,
      anon_sym_RBRACE,
    ACTIONS(223), 8,
      anon_sym_when,
      sym_identifier,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [1430] = 2,
    ACTIONS(113), 1,
      sym__newlines,
    ACTIONS(115), 7,
      anon_sym_STAR,
      sym_number,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_DOLLAR,
  [1443] = 2,
    ACTIONS(227), 1,
      sym__newlines,
    ACTIONS(229), 7,
      anon_sym_STAR,
      sym_number,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_DOLLAR,
  [1456] = 5,
    ACTIONS(231), 1,
      sym__newlines,
    ACTIONS(233), 1,
      sym_number,
    ACTIONS(236), 1,
      anon_sym_DOLLAR,
    STATE(62), 1,
      aux_sym_expression_repeat1,
    STATE(52), 2,
      sym_dimension,
      sym_token_reference,
  [1473] = 4,
    ACTIONS(239), 1,
      ts_builtin_sym_end,
    ACTIONS(244), 1,
      anon_sym_tokens,
    ACTIONS(241), 2,
      sym_multi_line_comment,
      sym_single_line_comment,
    STATE(63), 2,
      sym_tokens_block,
      aux_sym_source_file_repeat1,
  [1488] = 5,
    ACTIONS(247), 1,
      sym__newlines,
    ACTIONS(249), 1,
      sym_number,
    ACTIONS(251), 1,
      anon_sym_DOLLAR,
    STATE(62), 1,
      aux_sym_expression_repeat1,
    STATE(52), 2,
      sym_dimension,
      sym_token_reference,
  [1505] = 4,
    ACTIONS(7), 1,
      anon_sym_tokens,
    ACTIONS(253), 1,
      ts_builtin_sym_end,
    ACTIONS(255), 2,
      sym_multi_line_comment,
      sym_single_line_comment,
    STATE(63), 2,
      sym_tokens_block,
      aux_sym_source_file_repeat1,
  [1520] = 1,
    ACTIONS(257), 4,
      ts_builtin_sym_end,
      sym_multi_line_comment,
      sym_single_line_comment,
      anon_sym_tokens,
  [1527] = 3,
    ACTIONS(106), 1,
      sym__newlines,
    ACTIONS(259), 1,
      anon_sym_DOT,
    STATE(75), 2,
      sym_color_function_call,
      aux_sym_color_expression_repeat1,
  [1538] = 4,
    ACTIONS(261), 1,
      anon_sym_RBRACE,
    ACTIONS(263), 1,
      sym_identifier,
    STATE(84), 1,
      aux_sym_conditional_token_block_repeat1,
    STATE(162), 1,
      sym_token_assignment,
  [1551] = 4,
    ACTIONS(263), 1,
      sym_identifier,
    ACTIONS(265), 1,
      anon_sym_RBRACE,
    STATE(85), 1,
      aux_sym_conditional_token_block_repeat1,
    STATE(162), 1,
      sym_token_assignment,
  [1564] = 2,
    ACTIONS(269), 1,
      aux_sym_hex_token4,
    ACTIONS(267), 3,
      aux_sym_hex_token1,
      aux_sym_hex_token2,
      aux_sym_hex_token3,
  [1573] = 2,
    ACTIONS(273), 1,
      aux_sym_hex_token4,
    ACTIONS(271), 3,
      aux_sym_hex_token1,
      aux_sym_hex_token2,
      aux_sym_hex_token3,
  [1582] = 3,
    ACTIONS(23), 1,
      sym_number,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    STATE(93), 2,
      sym_dimension,
      sym_token_reference,
  [1593] = 4,
    ACTIONS(275), 1,
      anon_sym_RBRACE,
    ACTIONS(277), 1,
      sym_negative_assertion,
    ACTIONS(279), 1,
      sym_positive_assertion,
    STATE(81), 1,
      aux_sym_conditional_token_block_repeat2,
  [1606] = 4,
    ACTIONS(263), 1,
      sym_identifier,
    ACTIONS(281), 1,
      anon_sym_RBRACE,
    STATE(68), 1,
      aux_sym_conditional_token_block_repeat1,
    STATE(162), 1,
      sym_token_assignment,
  [1619] = 3,
    ACTIONS(108), 1,
      sym__newlines,
    ACTIONS(283), 1,
      anon_sym_DOT,
    STATE(75), 2,
      sym_color_function_call,
      aux_sym_color_expression_repeat1,
  [1630] = 1,
    ACTIONS(286), 4,
      ts_builtin_sym_end,
      sym_multi_line_comment,
      sym_single_line_comment,
      anon_sym_tokens,
  [1637] = 4,
    ACTIONS(277), 1,
      sym_negative_assertion,
    ACTIONS(279), 1,
      sym_positive_assertion,
    ACTIONS(288), 1,
      anon_sym_RBRACE,
    STATE(81), 1,
      aux_sym_conditional_token_block_repeat2,
  [1650] = 4,
    ACTIONS(263), 1,
      sym_identifier,
    ACTIONS(290), 1,
      anon_sym_RBRACE,
    STATE(84), 1,
      aux_sym_conditional_token_block_repeat1,
    STATE(162), 1,
      sym_token_assignment,
  [1663] = 4,
    ACTIONS(263), 1,
      sym_identifier,
    ACTIONS(292), 1,
      anon_sym_RBRACE,
    STATE(78), 1,
      aux_sym_conditional_token_block_repeat1,
    STATE(162), 1,
      sym_token_assignment,
  [1676] = 3,
    ACTIONS(102), 1,
      sym__newlines,
    ACTIONS(259), 1,
      anon_sym_DOT,
    STATE(67), 2,
      sym_color_function_call,
      aux_sym_color_expression_repeat1,
  [1687] = 4,
    ACTIONS(294), 1,
      anon_sym_RBRACE,
    ACTIONS(296), 1,
      sym_negative_assertion,
    ACTIONS(299), 1,
      sym_positive_assertion,
    STATE(81), 1,
      aux_sym_conditional_token_block_repeat2,
  [1700] = 4,
    ACTIONS(302), 1,
      anon_sym_COMMA,
    ACTIONS(304), 1,
      anon_sym_STAR,
    STATE(90), 1,
      aux_sym_switch_repeat1,
    STATE(110), 1,
      sym_asterisk,
  [1713] = 4,
    ACTIONS(306), 1,
      sym__newlines,
    ACTIONS(308), 1,
      anon_sym_COMMA,
    ACTIONS(310), 1,
      anon_sym_STAR,
    STATE(108), 1,
      sym_asterisk,
  [1726] = 4,
    ACTIONS(312), 1,
      anon_sym_RBRACE,
    ACTIONS(314), 1,
      sym_identifier,
    STATE(84), 1,
      aux_sym_conditional_token_block_repeat1,
    STATE(162), 1,
      sym_token_assignment,
  [1739] = 4,
    ACTIONS(263), 1,
      sym_identifier,
    ACTIONS(317), 1,
      anon_sym_RBRACE,
    STATE(84), 1,
      aux_sym_conditional_token_block_repeat1,
    STATE(162), 1,
      sym_token_assignment,
  [1752] = 3,
    ACTIONS(306), 1,
      sym__newlines,
    ACTIONS(319), 1,
      anon_sym_COMMA,
    STATE(86), 1,
      aux_sym_switch_repeat1,
  [1762] = 3,
    ACTIONS(322), 1,
      sym__newlines,
    ACTIONS(324), 1,
      anon_sym_COMMA,
    STATE(86), 1,
      aux_sym_switch_repeat1,
  [1772] = 2,
    ACTIONS(328), 1,
      sym_positive_assertion,
    ACTIONS(326), 2,
      anon_sym_RBRACE,
      sym_negative_assertion,
  [1780] = 3,
    ACTIONS(330), 1,
      anon_sym_LBRACE,
    ACTIONS(332), 1,
      sym_negative_assertion,
    ACTIONS(334), 1,
      sym_positive_assertion,
  [1790] = 3,
    ACTIONS(324), 1,
      anon_sym_COMMA,
    ACTIONS(336), 1,
      sym__newlines,
    STATE(86), 1,
      aux_sym_switch_repeat1,
  [1800] = 3,
    ACTIONS(277), 1,
      sym_negative_assertion,
    ACTIONS(279), 1,
      sym_positive_assertion,
    STATE(77), 1,
      aux_sym_conditional_token_block_repeat2,
  [1810] = 3,
    ACTIONS(277), 1,
      sym_negative_assertion,
    ACTIONS(279), 1,
      sym_positive_assertion,
    STATE(73), 1,
      aux_sym_conditional_token_block_repeat2,
  [1820] = 2,
    ACTIONS(338), 1,
      sym__newlines,
    ACTIONS(340), 2,
      sym_number,
      anon_sym_DOLLAR,
  [1828] = 2,
    ACTIONS(344), 1,
      sym_positive_assertion,
    ACTIONS(342), 2,
      anon_sym_RBRACE,
      sym_negative_assertion,
  [1836] = 3,
    ACTIONS(346), 1,
      anon_sym_LBRACE,
    ACTIONS(348), 1,
      sym_negative_assertion,
    ACTIONS(350), 1,
      sym_positive_assertion,
  [1846] = 2,
    ACTIONS(352), 1,
      anon_sym_COMMA,
    ACTIONS(354), 1,
      anon_sym_RPAREN,
  [1853] = 2,
    ACTIONS(128), 1,
      sym__newlines,
    ACTIONS(356), 1,
      anon_sym_DOT,
  [1860] = 2,
    ACTIONS(94), 1,
      anon_sym_DOLLAR,
    STATE(89), 1,
      sym_token_reference,
  [1867] = 2,
    ACTIONS(94), 1,
      anon_sym_DOLLAR,
    STATE(95), 1,
      sym_token_reference,
  [1874] = 2,
    ACTIONS(358), 1,
      anon_sym_COMMA,
    ACTIONS(360), 1,
      anon_sym_RPAREN,
  [1881] = 2,
    ACTIONS(362), 1,
      anon_sym_COMMA,
    ACTIONS(364), 1,
      anon_sym_RPAREN,
  [1888] = 2,
    ACTIONS(366), 1,
      anon_sym_COMMA,
    ACTIONS(368), 1,
      anon_sym_RPAREN,
  [1895] = 2,
    ACTIONS(370), 1,
      anon_sym_COMMA,
    ACTIONS(372), 1,
      anon_sym_RPAREN,
  [1902] = 1,
    ACTIONS(312), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [1907] = 2,
    ACTIONS(374), 1,
      anon_sym_COMMA,
    ACTIONS(376), 1,
      anon_sym_RPAREN,
  [1914] = 2,
    ACTIONS(378), 1,
      anon_sym_COMMA,
    ACTIONS(380), 1,
      anon_sym_RPAREN,
  [1921] = 2,
    ACTIONS(382), 1,
      anon_sym_COMMA,
    ACTIONS(384), 1,
      anon_sym_RPAREN,
  [1928] = 2,
    ACTIONS(386), 1,
      sym__newlines,
    ACTIONS(388), 1,
      anon_sym_COMMA,
  [1935] = 2,
    ACTIONS(130), 1,
      sym__newlines,
    ACTIONS(390), 1,
      anon_sym_DOT,
  [1942] = 2,
    ACTIONS(302), 1,
      anon_sym_COMMA,
    STATE(87), 1,
      aux_sym_switch_repeat1,
  [1949] = 2,
    ACTIONS(392), 1,
      sym__newlines,
    ACTIONS(394), 1,
      anon_sym_COMMA,
  [1956] = 2,
    ACTIONS(159), 1,
      sym__newlines,
    ACTIONS(396), 1,
      anon_sym_DOT,
  [1963] = 2,
    ACTIONS(189), 1,
      sym__newlines,
    ACTIONS(398), 1,
      anon_sym_DOT,
  [1970] = 2,
    ACTIONS(171), 1,
      sym__newlines,
    ACTIONS(400), 1,
      anon_sym_DOT,
  [1977] = 2,
    ACTIONS(181), 1,
      sym__newlines,
    ACTIONS(402), 1,
      anon_sym_DOT,
  [1984] = 2,
    ACTIONS(175), 1,
      sym__newlines,
    ACTIONS(404), 1,
      anon_sym_DOT,
  [1991] = 2,
    ACTIONS(179), 1,
      sym__newlines,
    ACTIONS(406), 1,
      anon_sym_DOT,
  [1998] = 2,
    ACTIONS(191), 1,
      sym__newlines,
    ACTIONS(408), 1,
      anon_sym_DOT,
  [2005] = 2,
    ACTIONS(177), 1,
      sym__newlines,
    ACTIONS(410), 1,
      anon_sym_DOT,
  [2012] = 2,
    ACTIONS(193), 1,
      sym__newlines,
    ACTIONS(412), 1,
      anon_sym_DOT,
  [2019] = 2,
    ACTIONS(173), 1,
      sym__newlines,
    ACTIONS(414), 1,
      anon_sym_DOT,
  [2026] = 2,
    ACTIONS(199), 1,
      sym__newlines,
    ACTIONS(416), 1,
      anon_sym_DOT,
  [2033] = 2,
    ACTIONS(142), 1,
      sym__newlines,
    ACTIONS(418), 1,
      anon_sym_DOT,
  [2040] = 2,
    ACTIONS(420), 1,
      anon_sym_COMMA,
    ACTIONS(422), 1,
      anon_sym_RPAREN,
  [2047] = 2,
    ACTIONS(424), 1,
      anon_sym_COMMA,
    ACTIONS(426), 1,
      anon_sym_RPAREN,
  [2054] = 2,
    ACTIONS(428), 1,
      anon_sym_COMMA,
    ACTIONS(430), 1,
      anon_sym_RPAREN,
  [2061] = 2,
    ACTIONS(432), 1,
      anon_sym_COMMA,
    ACTIONS(434), 1,
      anon_sym_RPAREN,
  [2068] = 2,
    ACTIONS(436), 1,
      anon_sym_COMMA,
    ACTIONS(438), 1,
      anon_sym_RPAREN,
  [2075] = 2,
    ACTIONS(440), 1,
      anon_sym_COMMA,
    ACTIONS(442), 1,
      anon_sym_RPAREN,
  [2082] = 2,
    ACTIONS(444), 1,
      anon_sym_COMMA,
    ACTIONS(446), 1,
      anon_sym_RPAREN,
  [2089] = 2,
    ACTIONS(448), 1,
      anon_sym_COMMA,
    ACTIONS(450), 1,
      anon_sym_RPAREN,
  [2096] = 2,
    ACTIONS(452), 1,
      sym_identifier,
    ACTIONS(454), 1,
      aux_sym_tokens_block_token1,
  [2103] = 2,
    ACTIONS(169), 1,
      sym__newlines,
    ACTIONS(456), 1,
      anon_sym_DOT,
  [2110] = 2,
    ACTIONS(197), 1,
      sym__newlines,
    ACTIONS(458), 1,
      anon_sym_DOT,
  [2117] = 2,
    ACTIONS(155), 1,
      sym__newlines,
    ACTIONS(460), 1,
      anon_sym_DOT,
  [2124] = 1,
    ACTIONS(462), 2,
      sym_number,
      anon_sym_DOLLAR,
  [2129] = 2,
    ACTIONS(195), 1,
      sym__newlines,
    ACTIONS(464), 1,
      anon_sym_DOT,
  [2136] = 2,
    ACTIONS(157), 1,
      sym__newlines,
    ACTIONS(466), 1,
      anon_sym_DOT,
  [2143] = 1,
    ACTIONS(468), 1,
      sym_number,
  [2147] = 1,
    ACTIONS(470), 1,
      anon_sym_LBRACE,
  [2151] = 1,
    ACTIONS(472), 1,
      anon_sym_COMMA,
  [2155] = 1,
    ACTIONS(474), 1,
      sym__newlines,
  [2159] = 1,
    ACTIONS(476), 1,
      sym_decimal_range,
  [2163] = 1,
    ACTIONS(478), 1,
      sym_number,
  [2167] = 1,
    ACTIONS(480), 1,
      sym_number,
  [2171] = 1,
    ACTIONS(482), 1,
      sym_decimal_range,
  [2175] = 1,
    ACTIONS(484), 1,
      sym_number,
  [2179] = 1,
    ACTIONS(486), 1,
      sym_decimal_range,
  [2183] = 1,
    ACTIONS(488), 1,
      sym_decimal_range,
  [2187] = 1,
    ACTIONS(490), 1,
      sym_number,
  [2191] = 1,
    ACTIONS(492), 1,
      sym_number,
  [2195] = 1,
    ACTIONS(494), 1,
      sym_decimal_range,
  [2199] = 1,
    ACTIONS(496), 1,
      sym__newlines,
  [2203] = 1,
    ACTIONS(498), 1,
      sym_decimal_range,
  [2207] = 1,
    ACTIONS(500), 1,
      sym_decimal_range,
  [2211] = 1,
    ACTIONS(502), 1,
      sym_decimal_range,
  [2215] = 1,
    ACTIONS(504), 1,
      sym_decimal_range,
  [2219] = 1,
    ACTIONS(506), 1,
      sym_decimal_range,
  [2223] = 1,
    ACTIONS(508), 1,
      sym_decimal_range,
  [2227] = 1,
    ACTIONS(510), 1,
      sym_decimal_range,
  [2231] = 1,
    ACTIONS(512), 1,
      sym_decimal_range,
  [2235] = 1,
    ACTIONS(514), 1,
      sym__newlines,
  [2239] = 1,
    ACTIONS(516), 1,
      anon_sym_COLON,
  [2243] = 1,
    ACTIONS(518), 1,
      anon_sym_RPAREN,
  [2247] = 1,
    ACTIONS(520), 1,
      anon_sym_RPAREN,
  [2251] = 1,
    ACTIONS(522), 1,
      anon_sym_RPAREN,
  [2255] = 1,
    ACTIONS(524), 1,
      anon_sym_RPAREN,
  [2259] = 1,
    ACTIONS(526), 1,
      anon_sym_RPAREN,
  [2263] = 1,
    ACTIONS(528), 1,
      anon_sym_RPAREN,
  [2267] = 1,
    ACTIONS(530), 1,
      anon_sym_RPAREN,
  [2271] = 1,
    ACTIONS(532), 1,
      anon_sym_RPAREN,
  [2275] = 1,
    ACTIONS(534), 1,
      sym_color_function_name,
  [2279] = 1,
    ACTIONS(536), 1,
      anon_sym_COMMA,
  [2283] = 1,
    ACTIONS(538), 1,
      anon_sym_COMMA,
  [2287] = 1,
    ACTIONS(540), 1,
      anon_sym_COMMA,
  [2291] = 1,
    ACTIONS(542), 1,
      anon_sym_COMMA,
  [2295] = 1,
    ACTIONS(544), 1,
      anon_sym_COMMA,
  [2299] = 1,
    ACTIONS(546), 1,
      sym_decimal_range,
  [2303] = 1,
    ACTIONS(548), 1,
      anon_sym_COMMA,
  [2307] = 1,
    ACTIONS(392), 1,
      anon_sym_COMMA,
  [2311] = 1,
    ACTIONS(550), 1,
      sym_identifier,
  [2315] = 1,
    ACTIONS(552), 1,
      anon_sym_COMMA,
  [2319] = 1,
    ACTIONS(554), 1,
      anon_sym_COMMA,
  [2323] = 1,
    ACTIONS(556), 1,
      anon_sym_COMMA,
  [2327] = 1,
    ACTIONS(558), 1,
      anon_sym_COMMA,
  [2331] = 1,
    ACTIONS(560), 1,
      aux_sym__string_token1,
  [2335] = 1,
    ACTIONS(562), 1,
      anon_sym_LBRACE,
  [2339] = 1,
    ACTIONS(564), 1,
      sym__newlines,
  [2343] = 1,
    ACTIONS(566), 1,
      sym_number,
  [2347] = 1,
    ACTIONS(568), 1,
      sym_decimal_range,
  [2351] = 1,
    ACTIONS(570), 1,
      sym_decimal_range,
  [2355] = 1,
    ACTIONS(572), 1,
      sym_decimal_range,
  [2359] = 1,
    ACTIONS(574), 1,
      sym_decimal_range,
  [2363] = 1,
    ACTIONS(576), 1,
      sym_dimensional_unit,
  [2367] = 1,
    ACTIONS(578), 1,
      sym_number,
  [2371] = 1,
    ACTIONS(580), 1,
      sym_number,
  [2375] = 1,
    ACTIONS(582), 1,
      sym__newlines,
  [2379] = 1,
    ACTIONS(584), 1,
      sym_decimal_range,
  [2383] = 1,
    ACTIONS(586), 1,
      sym_string,
  [2387] = 1,
    ACTIONS(588), 1,
      anon_sym_LBRACE,
  [2391] = 1,
    ACTIONS(590), 1,
      sym__newlines,
  [2395] = 1,
    ACTIONS(592), 1,
      sym_ref_identifier,
  [2399] = 1,
    ACTIONS(594), 1,
      sym_identifier,
  [2403] = 1,
    ACTIONS(596), 1,
      sym_identifier,
  [2407] = 1,
    ACTIONS(598), 1,
      anon_sym_COLON,
  [2411] = 1,
    ACTIONS(600), 1,
      sym_ref_identifier,
  [2415] = 1,
    ACTIONS(602), 1,
      sym_identifier,
  [2419] = 1,
    ACTIONS(604), 1,
      sym__newlines,
  [2423] = 1,
    ACTIONS(606), 1,
      sym_identifier,
  [2427] = 1,
    ACTIONS(608), 1,
      anon_sym_COMMA,
  [2431] = 1,
    ACTIONS(610), 1,
      anon_sym_COMMA,
  [2435] = 1,
    ACTIONS(612), 1,
      anon_sym_COMMA,
  [2439] = 1,
    ACTIONS(614), 1,
      anon_sym_COMMA,
  [2443] = 1,
    ACTIONS(616), 1,
      anon_sym_COMMA,
  [2447] = 1,
    ACTIONS(618), 1,
      anon_sym_LPAREN,
  [2451] = 1,
    ACTIONS(620), 1,
      sym_number,
  [2455] = 1,
    ACTIONS(622), 1,
      sym_decimal_range,
  [2459] = 1,
    ACTIONS(624), 1,
      anon_sym_RPAREN,
  [2463] = 1,
    ACTIONS(626), 1,
      anon_sym_RPAREN,
  [2467] = 1,
    ACTIONS(628), 1,
      anon_sym_RPAREN,
  [2471] = 1,
    ACTIONS(630), 1,
      anon_sym_RPAREN,
  [2475] = 1,
    ACTIONS(632), 1,
      anon_sym_RPAREN,
  [2479] = 1,
    ACTIONS(634), 1,
      anon_sym_RPAREN,
  [2483] = 1,
    ACTIONS(636), 1,
      anon_sym_RPAREN,
  [2487] = 1,
    ACTIONS(638), 1,
      anon_sym_RPAREN,
  [2491] = 1,
    ACTIONS(640), 1,
      sym_decimal_range,
  [2495] = 1,
    ACTIONS(642), 1,
      aux_sym_tokens_block_token1,
  [2499] = 1,
    ACTIONS(644), 1,
      anon_sym_LBRACE,
  [2503] = 1,
    ACTIONS(646), 1,
      anon_sym_LPAREN,
  [2507] = 1,
    ACTIONS(648), 1,
      sym_decimal_range,
  [2511] = 1,
    ACTIONS(650), 1,
      sym_number,
  [2515] = 1,
    ACTIONS(652), 1,
      sym_number,
  [2519] = 1,
    ACTIONS(654), 1,
      sym_decimal_range,
  [2523] = 1,
    ACTIONS(656), 1,
      sym_number,
  [2527] = 1,
    ACTIONS(658), 1,
      sym_decimal_range,
  [2531] = 1,
    ACTIONS(660), 1,
      sym_decimal_range,
  [2535] = 1,
    ACTIONS(662), 1,
      sym_number,
  [2539] = 1,
    ACTIONS(664), 1,
      sym_decimal_range,
  [2543] = 1,
    ACTIONS(666), 1,
      sym_decimal_range,
  [2547] = 1,
    ACTIONS(668), 1,
      sym_decimal_range,
  [2551] = 1,
    ACTIONS(670), 1,
      sym_decimal_range,
  [2555] = 1,
    ACTIONS(672), 1,
      sym_decimal_range,
  [2559] = 1,
    ACTIONS(674), 1,
      sym_decimal_range,
  [2563] = 1,
    ACTIONS(676), 1,
      sym_decimal_range,
  [2567] = 1,
    ACTIONS(678), 1,
      sym_decimal_range,
  [2571] = 1,
    ACTIONS(680), 1,
      anon_sym_LBRACE,
  [2575] = 1,
    ACTIONS(682), 1,
      ts_builtin_sym_end,
  [2579] = 1,
    ACTIONS(684), 1,
      sym_identifier,
  [2583] = 1,
    ACTIONS(686), 1,
      sym_color_function_name,
  [2587] = 1,
    ACTIONS(688), 1,
      anon_sym_COMMA,
  [2591] = 1,
    ACTIONS(690), 1,
      anon_sym_COMMA,
  [2595] = 1,
    ACTIONS(692), 1,
      anon_sym_COMMA,
  [2599] = 1,
    ACTIONS(694), 1,
      anon_sym_COMMA,
  [2603] = 1,
    ACTIONS(696), 1,
      anon_sym_COMMA,
  [2607] = 1,
    ACTIONS(698), 1,
      anon_sym_COMMA,
  [2611] = 1,
    ACTIONS(700), 1,
      anon_sym_COMMA,
  [2615] = 1,
    ACTIONS(702), 1,
      anon_sym_COMMA,
  [2619] = 1,
    ACTIONS(704), 1,
      sym_decimal_range,
  [2623] = 1,
    ACTIONS(706), 1,
      sym_decimal_range,
  [2627] = 1,
    ACTIONS(708), 1,
      sym_number,
  [2631] = 1,
    ACTIONS(710), 1,
      sym_number,
  [2635] = 1,
    ACTIONS(712), 1,
      sym_decimal_range,
  [2639] = 1,
    ACTIONS(714), 1,
      sym_decimal_range,
  [2643] = 1,
    ACTIONS(716), 1,
      sym_decimal_range,
  [2647] = 1,
    ACTIONS(718), 1,
      sym_decimal_range,
  [2651] = 1,
    ACTIONS(720), 1,
      sym_number,
  [2655] = 1,
    ACTIONS(722), 1,
      anon_sym_COMMA,
  [2659] = 1,
    ACTIONS(724), 1,
      anon_sym_COMMA,
  [2663] = 1,
    ACTIONS(726), 1,
      anon_sym_COMMA,
  [2667] = 1,
    ACTIONS(728), 1,
      anon_sym_COMMA,
  [2671] = 1,
    ACTIONS(730), 1,
      anon_sym_COMMA,
  [2675] = 1,
    ACTIONS(732), 1,
      anon_sym_COMMA,
  [2679] = 1,
    ACTIONS(734), 1,
      anon_sym_COMMA,
  [2683] = 1,
    ACTIONS(736), 1,
      anon_sym_COMMA,
  [2687] = 1,
    ACTIONS(738), 1,
      sym_decimal_range,
  [2691] = 1,
    ACTIONS(740), 1,
      sym_number,
  [2695] = 1,
    ACTIONS(742), 1,
      sym_number,
  [2699] = 1,
    ACTIONS(744), 1,
      sym_decimal_range,
  [2703] = 1,
    ACTIONS(746), 1,
      sym_decimal_range,
  [2707] = 1,
    ACTIONS(748), 1,
      sym_decimal_range,
  [2711] = 1,
    ACTIONS(750), 1,
      sym_decimal_range,
  [2715] = 1,
    ACTIONS(752), 1,
      sym_number,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 70,
  [SMALL_STATE(4)] = 140,
  [SMALL_STATE(5)] = 196,
  [SMALL_STATE(6)] = 252,
  [SMALL_STATE(7)] = 308,
  [SMALL_STATE(8)] = 364,
  [SMALL_STATE(9)] = 420,
  [SMALL_STATE(10)] = 462,
  [SMALL_STATE(11)] = 485,
  [SMALL_STATE(12)] = 508,
  [SMALL_STATE(13)] = 531,
  [SMALL_STATE(14)] = 552,
  [SMALL_STATE(15)] = 576,
  [SMALL_STATE(16)] = 597,
  [SMALL_STATE(17)] = 614,
  [SMALL_STATE(18)] = 631,
  [SMALL_STATE(19)] = 660,
  [SMALL_STATE(20)] = 689,
  [SMALL_STATE(21)] = 710,
  [SMALL_STATE(22)] = 731,
  [SMALL_STATE(23)] = 748,
  [SMALL_STATE(24)] = 777,
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
  [SMALL_STATE(37)] = 1034,
  [SMALL_STATE(38)] = 1051,
  [SMALL_STATE(39)] = 1068,
  [SMALL_STATE(40)] = 1085,
  [SMALL_STATE(41)] = 1102,
  [SMALL_STATE(42)] = 1119,
  [SMALL_STATE(43)] = 1136,
  [SMALL_STATE(44)] = 1152,
  [SMALL_STATE(45)] = 1178,
  [SMALL_STATE(46)] = 1194,
  [SMALL_STATE(47)] = 1220,
  [SMALL_STATE(48)] = 1246,
  [SMALL_STATE(49)] = 1272,
  [SMALL_STATE(50)] = 1286,
  [SMALL_STATE(51)] = 1300,
  [SMALL_STATE(52)] = 1314,
  [SMALL_STATE(53)] = 1332,
  [SMALL_STATE(54)] = 1346,
  [SMALL_STATE(55)] = 1360,
  [SMALL_STATE(56)] = 1374,
  [SMALL_STATE(57)] = 1388,
  [SMALL_STATE(58)] = 1402,
  [SMALL_STATE(59)] = 1416,
  [SMALL_STATE(60)] = 1430,
  [SMALL_STATE(61)] = 1443,
  [SMALL_STATE(62)] = 1456,
  [SMALL_STATE(63)] = 1473,
  [SMALL_STATE(64)] = 1488,
  [SMALL_STATE(65)] = 1505,
  [SMALL_STATE(66)] = 1520,
  [SMALL_STATE(67)] = 1527,
  [SMALL_STATE(68)] = 1538,
  [SMALL_STATE(69)] = 1551,
  [SMALL_STATE(70)] = 1564,
  [SMALL_STATE(71)] = 1573,
  [SMALL_STATE(72)] = 1582,
  [SMALL_STATE(73)] = 1593,
  [SMALL_STATE(74)] = 1606,
  [SMALL_STATE(75)] = 1619,
  [SMALL_STATE(76)] = 1630,
  [SMALL_STATE(77)] = 1637,
  [SMALL_STATE(78)] = 1650,
  [SMALL_STATE(79)] = 1663,
  [SMALL_STATE(80)] = 1676,
  [SMALL_STATE(81)] = 1687,
  [SMALL_STATE(82)] = 1700,
  [SMALL_STATE(83)] = 1713,
  [SMALL_STATE(84)] = 1726,
  [SMALL_STATE(85)] = 1739,
  [SMALL_STATE(86)] = 1752,
  [SMALL_STATE(87)] = 1762,
  [SMALL_STATE(88)] = 1772,
  [SMALL_STATE(89)] = 1780,
  [SMALL_STATE(90)] = 1790,
  [SMALL_STATE(91)] = 1800,
  [SMALL_STATE(92)] = 1810,
  [SMALL_STATE(93)] = 1820,
  [SMALL_STATE(94)] = 1828,
  [SMALL_STATE(95)] = 1836,
  [SMALL_STATE(96)] = 1846,
  [SMALL_STATE(97)] = 1853,
  [SMALL_STATE(98)] = 1860,
  [SMALL_STATE(99)] = 1867,
  [SMALL_STATE(100)] = 1874,
  [SMALL_STATE(101)] = 1881,
  [SMALL_STATE(102)] = 1888,
  [SMALL_STATE(103)] = 1895,
  [SMALL_STATE(104)] = 1902,
  [SMALL_STATE(105)] = 1907,
  [SMALL_STATE(106)] = 1914,
  [SMALL_STATE(107)] = 1921,
  [SMALL_STATE(108)] = 1928,
  [SMALL_STATE(109)] = 1935,
  [SMALL_STATE(110)] = 1942,
  [SMALL_STATE(111)] = 1949,
  [SMALL_STATE(112)] = 1956,
  [SMALL_STATE(113)] = 1963,
  [SMALL_STATE(114)] = 1970,
  [SMALL_STATE(115)] = 1977,
  [SMALL_STATE(116)] = 1984,
  [SMALL_STATE(117)] = 1991,
  [SMALL_STATE(118)] = 1998,
  [SMALL_STATE(119)] = 2005,
  [SMALL_STATE(120)] = 2012,
  [SMALL_STATE(121)] = 2019,
  [SMALL_STATE(122)] = 2026,
  [SMALL_STATE(123)] = 2033,
  [SMALL_STATE(124)] = 2040,
  [SMALL_STATE(125)] = 2047,
  [SMALL_STATE(126)] = 2054,
  [SMALL_STATE(127)] = 2061,
  [SMALL_STATE(128)] = 2068,
  [SMALL_STATE(129)] = 2075,
  [SMALL_STATE(130)] = 2082,
  [SMALL_STATE(131)] = 2089,
  [SMALL_STATE(132)] = 2096,
  [SMALL_STATE(133)] = 2103,
  [SMALL_STATE(134)] = 2110,
  [SMALL_STATE(135)] = 2117,
  [SMALL_STATE(136)] = 2124,
  [SMALL_STATE(137)] = 2129,
  [SMALL_STATE(138)] = 2136,
  [SMALL_STATE(139)] = 2143,
  [SMALL_STATE(140)] = 2147,
  [SMALL_STATE(141)] = 2151,
  [SMALL_STATE(142)] = 2155,
  [SMALL_STATE(143)] = 2159,
  [SMALL_STATE(144)] = 2163,
  [SMALL_STATE(145)] = 2167,
  [SMALL_STATE(146)] = 2171,
  [SMALL_STATE(147)] = 2175,
  [SMALL_STATE(148)] = 2179,
  [SMALL_STATE(149)] = 2183,
  [SMALL_STATE(150)] = 2187,
  [SMALL_STATE(151)] = 2191,
  [SMALL_STATE(152)] = 2195,
  [SMALL_STATE(153)] = 2199,
  [SMALL_STATE(154)] = 2203,
  [SMALL_STATE(155)] = 2207,
  [SMALL_STATE(156)] = 2211,
  [SMALL_STATE(157)] = 2215,
  [SMALL_STATE(158)] = 2219,
  [SMALL_STATE(159)] = 2223,
  [SMALL_STATE(160)] = 2227,
  [SMALL_STATE(161)] = 2231,
  [SMALL_STATE(162)] = 2235,
  [SMALL_STATE(163)] = 2239,
  [SMALL_STATE(164)] = 2243,
  [SMALL_STATE(165)] = 2247,
  [SMALL_STATE(166)] = 2251,
  [SMALL_STATE(167)] = 2255,
  [SMALL_STATE(168)] = 2259,
  [SMALL_STATE(169)] = 2263,
  [SMALL_STATE(170)] = 2267,
  [SMALL_STATE(171)] = 2271,
  [SMALL_STATE(172)] = 2275,
  [SMALL_STATE(173)] = 2279,
  [SMALL_STATE(174)] = 2283,
  [SMALL_STATE(175)] = 2287,
  [SMALL_STATE(176)] = 2291,
  [SMALL_STATE(177)] = 2295,
  [SMALL_STATE(178)] = 2299,
  [SMALL_STATE(179)] = 2303,
  [SMALL_STATE(180)] = 2307,
  [SMALL_STATE(181)] = 2311,
  [SMALL_STATE(182)] = 2315,
  [SMALL_STATE(183)] = 2319,
  [SMALL_STATE(184)] = 2323,
  [SMALL_STATE(185)] = 2327,
  [SMALL_STATE(186)] = 2331,
  [SMALL_STATE(187)] = 2335,
  [SMALL_STATE(188)] = 2339,
  [SMALL_STATE(189)] = 2343,
  [SMALL_STATE(190)] = 2347,
  [SMALL_STATE(191)] = 2351,
  [SMALL_STATE(192)] = 2355,
  [SMALL_STATE(193)] = 2359,
  [SMALL_STATE(194)] = 2363,
  [SMALL_STATE(195)] = 2367,
  [SMALL_STATE(196)] = 2371,
  [SMALL_STATE(197)] = 2375,
  [SMALL_STATE(198)] = 2379,
  [SMALL_STATE(199)] = 2383,
  [SMALL_STATE(200)] = 2387,
  [SMALL_STATE(201)] = 2391,
  [SMALL_STATE(202)] = 2395,
  [SMALL_STATE(203)] = 2399,
  [SMALL_STATE(204)] = 2403,
  [SMALL_STATE(205)] = 2407,
  [SMALL_STATE(206)] = 2411,
  [SMALL_STATE(207)] = 2415,
  [SMALL_STATE(208)] = 2419,
  [SMALL_STATE(209)] = 2423,
  [SMALL_STATE(210)] = 2427,
  [SMALL_STATE(211)] = 2431,
  [SMALL_STATE(212)] = 2435,
  [SMALL_STATE(213)] = 2439,
  [SMALL_STATE(214)] = 2443,
  [SMALL_STATE(215)] = 2447,
  [SMALL_STATE(216)] = 2451,
  [SMALL_STATE(217)] = 2455,
  [SMALL_STATE(218)] = 2459,
  [SMALL_STATE(219)] = 2463,
  [SMALL_STATE(220)] = 2467,
  [SMALL_STATE(221)] = 2471,
  [SMALL_STATE(222)] = 2475,
  [SMALL_STATE(223)] = 2479,
  [SMALL_STATE(224)] = 2483,
  [SMALL_STATE(225)] = 2487,
  [SMALL_STATE(226)] = 2491,
  [SMALL_STATE(227)] = 2495,
  [SMALL_STATE(228)] = 2499,
  [SMALL_STATE(229)] = 2503,
  [SMALL_STATE(230)] = 2507,
  [SMALL_STATE(231)] = 2511,
  [SMALL_STATE(232)] = 2515,
  [SMALL_STATE(233)] = 2519,
  [SMALL_STATE(234)] = 2523,
  [SMALL_STATE(235)] = 2527,
  [SMALL_STATE(236)] = 2531,
  [SMALL_STATE(237)] = 2535,
  [SMALL_STATE(238)] = 2539,
  [SMALL_STATE(239)] = 2543,
  [SMALL_STATE(240)] = 2547,
  [SMALL_STATE(241)] = 2551,
  [SMALL_STATE(242)] = 2555,
  [SMALL_STATE(243)] = 2559,
  [SMALL_STATE(244)] = 2563,
  [SMALL_STATE(245)] = 2567,
  [SMALL_STATE(246)] = 2571,
  [SMALL_STATE(247)] = 2575,
  [SMALL_STATE(248)] = 2579,
  [SMALL_STATE(249)] = 2583,
  [SMALL_STATE(250)] = 2587,
  [SMALL_STATE(251)] = 2591,
  [SMALL_STATE(252)] = 2595,
  [SMALL_STATE(253)] = 2599,
  [SMALL_STATE(254)] = 2603,
  [SMALL_STATE(255)] = 2607,
  [SMALL_STATE(256)] = 2611,
  [SMALL_STATE(257)] = 2615,
  [SMALL_STATE(258)] = 2619,
  [SMALL_STATE(259)] = 2623,
  [SMALL_STATE(260)] = 2627,
  [SMALL_STATE(261)] = 2631,
  [SMALL_STATE(262)] = 2635,
  [SMALL_STATE(263)] = 2639,
  [SMALL_STATE(264)] = 2643,
  [SMALL_STATE(265)] = 2647,
  [SMALL_STATE(266)] = 2651,
  [SMALL_STATE(267)] = 2655,
  [SMALL_STATE(268)] = 2659,
  [SMALL_STATE(269)] = 2663,
  [SMALL_STATE(270)] = 2667,
  [SMALL_STATE(271)] = 2671,
  [SMALL_STATE(272)] = 2675,
  [SMALL_STATE(273)] = 2679,
  [SMALL_STATE(274)] = 2683,
  [SMALL_STATE(275)] = 2687,
  [SMALL_STATE(276)] = 2691,
  [SMALL_STATE(277)] = 2695,
  [SMALL_STATE(278)] = 2699,
  [SMALL_STATE(279)] = 2703,
  [SMALL_STATE(280)] = 2707,
  [SMALL_STATE(281)] = 2711,
  [SMALL_STATE(282)] = 2715,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_color_function_call_repeat2, 2), SHIFT_REPEAT(275),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_color_function_call_repeat2, 2),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_color_function_call_repeat2, 2), SHIFT_REPEAT(70),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_color_function_call_repeat2, 2), SHIFT_REPEAT(276),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_color_function_call_repeat2, 2), SHIFT_REPEAT(277),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_color_function_call_repeat2, 2), SHIFT_REPEAT(14),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_color_function_call_repeat2, 2), SHIFT_REPEAT(278),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_color_function_call_repeat2, 2), SHIFT_REPEAT(279),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_color_function_call_repeat2, 2), SHIFT_REPEAT(280),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_color_function_call_repeat2, 2), SHIFT_REPEAT(281),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_color_function_call_repeat2, 2), SHIFT_REPEAT(282),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_color_function_call_repeat2, 2), SHIFT_REPEAT(206),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color_expression, 1),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color_expression, 2),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_color_expression_repeat1, 2),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_color_expression_repeat1, 2), SHIFT_REPEAT(249),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_token_reference, 2),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_token_reference, 2),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_color_function_call_repeat2, 1),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_color_function_call_repeat1, 2),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_color_function_call_repeat1, 2), SHIFT_REPEAT(9),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hsl, 9, .production_id = 2),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hex, 2),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color_function_call, 4),
  [144] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__token_body, 2), SHIFT_REPEAT(99),
  [147] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__token_body, 2), SHIFT_REPEAT(140),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__token_body, 2),
  [152] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__token_body, 2), SHIFT_REPEAT(209),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color_function_call, 5),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_a98rgb, 7, .production_id = 1),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hsl, 7, .production_id = 2),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rgb, 9, .production_id = 1),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hsv, 7, .production_id = 3),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rec2020, 9, .production_id = 1),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oklab, 7, .production_id = 4),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_p3, 9, .production_id = 1),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oklch, 9, .production_id = 5),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oklab, 9, .production_id = 4),
  [183] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__token_body, 2), SHIFT_REPEAT(98),
  [186] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__token_body, 2), SHIFT_REPEAT(246),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hsv, 9, .production_id = 3),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oklch, 7, .production_id = 5),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_p3, 7, .production_id = 1),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_a98rgb, 9, .production_id = 1),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rgb, 7, .production_id = 1),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rec2020, 7, .production_id = 1),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_percent_number, 2),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__token_body, 2),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional_token_block, 7),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_token_block, 7),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_child_token_block, 4),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child_token_block, 4),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 1),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expression_repeat1, 1),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional_token_block, 6),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_token_block, 6),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional_token_block, 5),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_token_block, 5),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dimension, 2),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dimension, 2),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2),
  [233] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expression_repeat1, 2), SHIFT_REPEAT(194),
  [236] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expression_repeat1, 2), SHIFT_REPEAT(202),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [241] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(63),
  [244] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(132),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tokens_block, 4),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [283] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_color_expression_repeat1, 2), SHIFT_REPEAT(172),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tokens_block, 5),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conditional_token_block_repeat2, 2),
  [296] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conditional_token_block_repeat2, 2), SHIFT_REPEAT(203),
  [299] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_conditional_token_block_repeat2, 2), SHIFT_REPEAT(203),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_switch_repeat1, 2),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_switch_repeat1, 2),
  [310] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conditional_token_block_repeat1, 2),
  [314] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conditional_token_block_repeat1, 2), SHIFT_REPEAT(163),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [319] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_switch_repeat1, 2), SHIFT_REPEAT(181),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch, 3),
  [324] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conditional_token_block_repeat2, 5),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_conditional_token_block_repeat2, 5),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch, 2),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 3),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expression_repeat1, 3),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conditional_token_block_repeat2, 4),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_conditional_token_block_repeat2, 4),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [350] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hsl, 9, .production_id = 2),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_switch_repeat1, 3),
  [388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_switch_repeat1, 3),
  [390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hex, 2),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_asterisk, 1),
  [394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_asterisk, 1),
  [396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hsl, 7, .production_id = 2),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hsv, 9, .production_id = 3),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hsv, 7, .production_id = 3),
  [402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oklab, 9, .production_id = 4),
  [404] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oklab, 7, .production_id = 4),
  [406] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oklch, 9, .production_id = 5),
  [408] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oklch, 7, .production_id = 5),
  [410] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_p3, 9, .production_id = 1),
  [412] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_p3, 7, .production_id = 1),
  [414] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rec2020, 9, .production_id = 1),
  [416] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rec2020, 7, .production_id = 1),
  [418] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_color_function_call, 4),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [456] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rgb, 9, .production_id = 1),
  [458] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rgb, 7, .production_id = 1),
  [460] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_color_function_call, 5),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_operator, 1),
  [464] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_a98rgb, 9, .production_id = 1),
  [466] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_a98rgb, 7, .production_id = 1),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_token_assignment, 3),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string, 3),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_token_declaration, 4),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_token_value, 1),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_token_type, 1),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [682] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
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
