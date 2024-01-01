#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 144
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 67
#define ALIAS_COUNT 9
#define TOKEN_COUNT 43
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 5

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
  aux_sym_p3_token1 = 25,
  sym_positive_assertion = 26,
  aux_sym_rec2020_token1 = 27,
  sym_ref_identifier = 28,
  aux_sym_rgb_token1 = 29,
  sym_single_line_comment = 30,
  sym_string = 31,
  anon_sym_COLON = 32,
  anon_sym_tokens = 33,
  aux_sym_tokens_block_token1 = 34,
  aux_sym_tokens_block_token2 = 35,
  anon_sym_DOLLAR = 36,
  anon_sym_text = 37,
  anon_sym_color = 38,
  anon_sym_asset = 39,
  anon_sym_switch = 40,
  anon_sym_dimension = 41,
  anon_sym_range = 42,
  sym_source_file = 43,
  sym__string = 44,
  aux_sym__token_body = 45,
  sym_a98rgb = 46,
  sym_child_token_block = 47,
  sym_conditional_token_block = 48,
  sym_dimension = 49,
  sym_hex = 50,
  sym_hsl = 51,
  sym_hsv = 52,
  sym_oklab = 53,
  sym_p3 = 54,
  sym_rec2020 = 55,
  sym_rgb = 56,
  sym_switch = 57,
  sym_token_assignment = 58,
  sym_tokens_block = 59,
  sym_token_declaration = 60,
  sym_token_reference = 61,
  sym_token_type = 62,
  sym_token_value = 63,
  aux_sym_source_file_repeat1 = 64,
  aux_sym_conditional_token_block_repeat1 = 65,
  aux_sym_switch_repeat1 = 66,
  alias_sym_a_channel = 67,
  alias_sym_b_channel = 68,
  alias_sym_blue_channel = 69,
  alias_sym_green_channel = 70,
  alias_sym_hue_channel = 71,
  alias_sym_lightness_channel = 72,
  alias_sym_red_channel = 73,
  alias_sym_saturation_channel = 74,
  alias_sym_value_channel = 75,
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
  [8] = 8,
  [9] = 6,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 12,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 14,
  [18] = 15,
  [19] = 16,
  [20] = 20,
  [21] = 20,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 24,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 30,
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
  [47] = 43,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 37,
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
  [129] = 51,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 134,
  [136] = 136,
  [137] = 133,
  [138] = 138,
  [139] = 130,
  [140] = 140,
  [141] = 131,
  [142] = 140,
  [143] = 143,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(109);
      if (lookahead == '"') ADVANCE(111);
      if (lookahead == '#') ADVANCE(129);
      if (lookahead == '$') ADVANCE(201);
      if (lookahead == '%') ADVANCE(128);
      if (lookahead == ')') ADVANCE(114);
      if (lookahead == '*') ADVANCE(116);
      if (lookahead == ',') ADVANCE(113);
      if (lookahead == '-') ADVANCE(98);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '0') ADVANCE(123);
      if (lookahead == '1') ADVANCE(121);
      if (lookahead == ':') ADVANCE(197);
      if (lookahead == 'a') ADVANCE(26);
      if (lookahead == 'c') ADVANCE(93);
      if (lookahead == 'd') ADVANCE(53);
      if (lookahead == 'e') ADVANCE(96);
      if (lookahead == 'h') ADVANCE(78);
      if (lookahead == 'i') ADVANCE(64);
      if (lookahead == 'm') ADVANCE(61);
      if (lookahead == 'o') ADVANCE(56);
      if (lookahead == 'p') ADVANCE(23);
      if (lookahead == 'r') ADVANCE(28);
      if (lookahead == 's') ADVANCE(88);
      if (lookahead == 't') ADVANCE(38);
      if (lookahead == 'v') ADVANCE(95);
      if (lookahead == 'w') ADVANCE(48);
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
      if (lookahead == '$') ADVANCE(201);
      if (lookahead == '-') ADVANCE(98);
      if (lookahead == '/') ADVANCE(107);
      if (lookahead == 'a') ADVANCE(27);
      if (lookahead == 'h') ADVANCE(80);
      if (lookahead == 'o') ADVANCE(55);
      if (lookahead == 'p') ADVANCE(24);
      if (lookahead == 'r') ADVANCE(40);
      if (lookahead == '{') ADVANCE(199);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(186);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 3:
      if (lookahead == '(') ADVANCE(189);
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
      if (lookahead == 'a') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == '(') ADVANCE(135);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '(') ADVANCE(193);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '(') ADVANCE(188);
      if (lookahead == 'a') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == '(') ADVANCE(188);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '(') ADVANCE(112);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '(') ADVANCE(191);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '*') ADVANCE(15);
      if (lookahead == '/') ADVANCE(194);
      END_STATE();
    case 13:
      if (lookahead == '*') ADVANCE(15);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 14:
      if (lookahead == '*') ADVANCE(14);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 15:
      if (lookahead == '*') ADVANCE(14);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '0') ADVANCE(125);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(187);
      END_STATE();
    case 17:
      if (lookahead == '0') ADVANCE(122);
      if (lookahead == '1') ADVANCE(124);
      if (lookahead == 'a') ADVANCE(81);
      if (lookahead == 'c') ADVANCE(73);
      if (lookahead == 'd') ADVANCE(52);
      if (lookahead == 'r') ADVANCE(29);
      if (lookahead == 's') ADVANCE(89);
      if (lookahead == 't') ADVANCE(41);
      if (lookahead == 'w') ADVANCE(50);
      if (lookahead == '}') ADVANCE(118);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 18:
      if (lookahead == '0') ADVANCE(126);
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
      if (lookahead == '3') ADVANCE(3);
      if (lookahead == 'c' ||
          lookahead == 't' ||
          lookahead == 'x') ADVANCE(128);
      END_STATE();
    case 24:
      if (lookahead == '3') ADVANCE(136);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 25:
      if (lookahead == '8') ADVANCE(77);
      END_STATE();
    case 26:
      if (lookahead == '9') ADVANCE(25);
      if (lookahead == 's') ADVANCE(83);
      END_STATE();
    case 27:
      if (lookahead == '9') ADVANCE(149);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '8') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(65);
      if (lookahead == 'e') ADVANCE(36);
      if (lookahead == 'g') ADVANCE(34);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(171);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(33);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(90);
      if (lookahead == 'i') ADVANCE(63);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(81);
      if (lookahead == 'c') ADVANCE(73);
      if (lookahead == 'd') ADVANCE(52);
      if (lookahead == 'r') ADVANCE(29);
      if (lookahead == 's') ADVANCE(89);
      if (lookahead == 't') ADVANCE(41);
      if (lookahead == 'w') ADVANCE(50);
      if (lookahead == '}') ADVANCE(200);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(32)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 33:
      if (lookahead == 'b') ADVANCE(8);
      END_STATE();
    case 34:
      if (lookahead == 'b') ADVANCE(7);
      END_STATE();
    case 35:
      if (lookahead == 'b') ADVANCE(10);
      END_STATE();
    case 36:
      if (lookahead == 'c') ADVANCE(21);
      if (lookahead == 'm') ADVANCE(128);
      END_STATE();
    case 37:
      if (lookahead == 'c') ADVANCE(49);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(91);
      if (lookahead == 'o') ADVANCE(57);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(212);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(154);
      if (lookahead == 'g') ADVANCE(152);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(182);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(86);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 46:
      if (lookahead == 'g') ADVANCE(39);
      END_STATE();
    case 47:
      if (lookahead == 'g') ADVANCE(35);
      END_STATE();
    case 48:
      if (lookahead == 'h') ADVANCE(43);
      END_STATE();
    case 49:
      if (lookahead == 'h') ADVANCE(208);
      END_STATE();
    case 50:
      if (lookahead == 'h') ADVANCE(157);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
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
      if (lookahead == 'k') ADVANCE(45);
      END_STATE();
    case 58:
      if (lookahead == 'l') ADVANCE(72);
      END_STATE();
    case 59:
      if (lookahead == 'l') ADVANCE(30);
      END_STATE();
    case 60:
      if (lookahead == 'l') ADVANCE(4);
      if (lookahead == 'v') ADVANCE(5);
      END_STATE();
    case 61:
      if (lookahead == 'm') ADVANCE(128);
      END_STATE();
    case 62:
      if (lookahead == 'm') ADVANCE(44);
      END_STATE();
    case 63:
      if (lookahead == 'n') ADVANCE(128);
      END_STATE();
    case 64:
      if (lookahead == 'n') ADVANCE(128);
      if (lookahead == 's') ADVANCE(190);
      END_STATE();
    case 65:
      if (lookahead == 'n') ADVANCE(46);
      END_STATE();
    case 66:
      if (lookahead == 'n') ADVANCE(119);
      END_STATE();
    case 67:
      if (lookahead == 'n') ADVANCE(210);
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
      if (lookahead == 'r') ADVANCE(204);
      END_STATE();
    case 77:
      if (lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 78:
      if (lookahead == 's') ADVANCE(60);
      END_STATE();
    case 79:
      if (lookahead == 's') ADVANCE(198);
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
      if (lookahead == 's') ADVANCE(42);
      END_STATE();
    case 84:
      if (lookahead == 't') ADVANCE(37);
      END_STATE();
    case 85:
      if (lookahead == 't') ADVANCE(202);
      END_STATE();
    case 86:
      if (lookahead == 't') ADVANCE(206);
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
      if (lookahead == '{') ADVANCE(199);
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
      if (lookahead == 'm') ADVANCE(31);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 107:
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 108:
      if (eof) ADVANCE(109);
      if (lookahead == '/') ADVANCE(12);
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
      if (lookahead == '.') ADVANCE(16);
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
      if (lookahead == '.') ADVANCE(18);
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
      if (lookahead == '(') ADVANCE(189);
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
      if (lookahead == 'a') ADVANCE(139);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(6);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(135);
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
      if (lookahead == '(') ADVANCE(193);
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
      if (lookahead == '(') ADVANCE(188);
      if (lookahead == 'a') ADVANCE(142);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(9);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(188);
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
      if (lookahead == '(') ADVANCE(112);
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
      if (lookahead == '(') ADVANCE(191);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '0') ADVANCE(144);
      if (lookahead == '-' ||
          ('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '0') ADVANCE(148);
      if (lookahead == '-' ||
          ('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(146);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(145);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '8') ADVANCE(175);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(151);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(141);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(140);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(143);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(147);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(162);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(213);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(169);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(172);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(180);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(156);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(153);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(209);
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
      if (lookahead == 'l') ADVANCE(150);
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
      if (lookahead == 'm') ADVANCE(158);
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
      if (lookahead == 'n') ADVANCE(211);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(160);
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
      if (lookahead == 'r') ADVANCE(161);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(205);
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
      if (lookahead == 's') ADVANCE(159);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(203);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(207);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(155);
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
      ACCEPT_TOKEN(aux_sym_p3_token1);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_positive_assertion);
      if (lookahead == ' ') ADVANCE(68);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_rec2020_token1);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_ref_identifier);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_rgb_token1);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_single_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(194);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(195);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\' &&
          lookahead != '^' &&
          lookahead != 'n') ADVANCE(196);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_string);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\' &&
          lookahead != '^' &&
          lookahead != 'n') ADVANCE(196);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_tokens);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_tokens_block_token1);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_tokens_block_token2);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_text);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_text);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_color);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_color);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_asset);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_asset);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_switch);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_switch);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_dimension);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_dimension);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_range);
      END_STATE();
    case 213:
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
  [4] = {.lex_state = 17},
  [5] = {.lex_state = 32},
  [6] = {.lex_state = 17},
  [7] = {.lex_state = 17},
  [8] = {.lex_state = 32},
  [9] = {.lex_state = 32},
  [10] = {.lex_state = 17},
  [11] = {.lex_state = 17},
  [12] = {.lex_state = 17},
  [13] = {.lex_state = 17},
  [14] = {.lex_state = 17},
  [15] = {.lex_state = 32},
  [16] = {.lex_state = 17},
  [17] = {.lex_state = 32},
  [18] = {.lex_state = 17},
  [19] = {.lex_state = 32},
  [20] = {.lex_state = 17},
  [21] = {.lex_state = 32},
  [22] = {.lex_state = 108},
  [23] = {.lex_state = 108},
  [24] = {.lex_state = 92},
  [25] = {.lex_state = 108},
  [26] = {.lex_state = 108},
  [27] = {.lex_state = 92},
  [28] = {.lex_state = 108},
  [29] = {.lex_state = 92},
  [30] = {.lex_state = 92},
  [31] = {.lex_state = 92},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 92},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 92},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 92},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 1},
  [66] = {.lex_state = 17},
  [67] = {.lex_state = 2},
  [68] = {.lex_state = 2},
  [69] = {.lex_state = 17},
  [70] = {.lex_state = 17},
  [71] = {.lex_state = 17},
  [72] = {.lex_state = 2},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 17},
  [86] = {.lex_state = 2},
  [87] = {.lex_state = 2},
  [88] = {.lex_state = 17},
  [89] = {.lex_state = 17},
  [90] = {.lex_state = 17},
  [91] = {.lex_state = 2},
  [92] = {.lex_state = 2},
  [93] = {.lex_state = 17},
  [94] = {.lex_state = 17},
  [95] = {.lex_state = 17},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 2},
  [98] = {.lex_state = 1},
  [99] = {.lex_state = 17},
  [100] = {.lex_state = 1},
  [101] = {.lex_state = 17},
  [102] = {.lex_state = 1},
  [103] = {.lex_state = 17},
  [104] = {.lex_state = 1},
  [105] = {.lex_state = 17},
  [106] = {.lex_state = 1},
  [107] = {.lex_state = 17},
  [108] = {.lex_state = 1},
  [109] = {.lex_state = 17},
  [110] = {.lex_state = 1},
  [111] = {.lex_state = 17},
  [112] = {.lex_state = 1},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 1},
  [121] = {.lex_state = 1},
  [122] = {.lex_state = 1},
  [123] = {.lex_state = 1},
  [124] = {.lex_state = 1},
  [125] = {.lex_state = 1},
  [126] = {.lex_state = 1},
  [127] = {.lex_state = 17},
  [128] = {.lex_state = 195},
  [129] = {.lex_state = 1},
  [130] = {.lex_state = 108},
  [131] = {.lex_state = 92},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 1},
  [134] = {.lex_state = 97},
  [135] = {.lex_state = 97},
  [136] = {.lex_state = 92},
  [137] = {.lex_state = 1},
  [138] = {.lex_state = 92},
  [139] = {.lex_state = 108},
  [140] = {.lex_state = 108},
  [141] = {.lex_state = 92},
  [142] = {.lex_state = 108},
  [143] = {.lex_state = 2},
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
    [sym_source_file] = STATE(73),
    [sym_tokens_block] = STATE(23),
    [aux_sym_source_file_repeat1] = STATE(23),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_multi_line_comment] = ACTIONS(5),
    [sym_single_line_comment] = ACTIONS(5),
    [anon_sym_tokens] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 15,
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
      aux_sym_p3_token1,
    ACTIONS(29), 1,
      aux_sym_rec2020_token1,
    ACTIONS(31), 1,
      aux_sym_rgb_token1,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    STATE(84), 1,
      sym_token_value,
    STATE(54), 12,
      sym__string,
      sym_a98rgb,
      sym_dimension,
      sym_hex,
      sym_hsl,
      sym_hsv,
      sym_oklab,
      sym_p3,
      sym_rec2020,
      sym_rgb,
      sym_switch,
      sym_token_reference,
  [57] = 15,
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
      aux_sym_p3_token1,
    ACTIONS(29), 1,
      aux_sym_rec2020_token1,
    ACTIONS(31), 1,
      aux_sym_rgb_token1,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    STATE(79), 1,
      sym_token_value,
    STATE(54), 12,
      sym__string,
      sym_a98rgb,
      sym_dimension,
      sym_hex,
      sym_hsl,
      sym_hsv,
      sym_oklab,
      sym_p3,
      sym_rec2020,
      sym_rgb,
      sym_switch,
      sym_token_reference,
  [114] = 7,
    ACTIONS(35), 1,
      anon_sym_RBRACE,
    ACTIONS(37), 1,
      anon_sym_when,
    ACTIONS(39), 1,
      sym_identifier,
    STATE(133), 1,
      sym_token_declaration,
    STATE(136), 1,
      sym_token_type,
    STATE(6), 3,
      aux_sym__token_body,
      sym_child_token_block,
      sym_conditional_token_block,
    ACTIONS(41), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [143] = 7,
    ACTIONS(43), 1,
      anon_sym_when,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      aux_sym_tokens_block_token2,
    STATE(136), 1,
      sym_token_type,
    STATE(137), 1,
      sym_token_declaration,
    STATE(9), 3,
      aux_sym__token_body,
      sym_child_token_block,
      sym_conditional_token_block,
    ACTIONS(41), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [172] = 7,
    ACTIONS(49), 1,
      anon_sym_RBRACE,
    ACTIONS(51), 1,
      anon_sym_when,
    ACTIONS(54), 1,
      sym_identifier,
    STATE(133), 1,
      sym_token_declaration,
    STATE(136), 1,
      sym_token_type,
    STATE(6), 3,
      aux_sym__token_body,
      sym_child_token_block,
      sym_conditional_token_block,
    ACTIONS(57), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [201] = 7,
    ACTIONS(37), 1,
      anon_sym_when,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(60), 1,
      anon_sym_RBRACE,
    STATE(133), 1,
      sym_token_declaration,
    STATE(136), 1,
      sym_token_type,
    STATE(6), 3,
      aux_sym__token_body,
      sym_child_token_block,
      sym_conditional_token_block,
    ACTIONS(41), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [230] = 7,
    ACTIONS(43), 1,
      anon_sym_when,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(62), 1,
      aux_sym_tokens_block_token2,
    STATE(136), 1,
      sym_token_type,
    STATE(137), 1,
      sym_token_declaration,
    STATE(9), 3,
      aux_sym__token_body,
      sym_child_token_block,
      sym_conditional_token_block,
    ACTIONS(41), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [259] = 7,
    ACTIONS(49), 1,
      aux_sym_tokens_block_token2,
    ACTIONS(64), 1,
      anon_sym_when,
    ACTIONS(67), 1,
      sym_identifier,
    STATE(136), 1,
      sym_token_type,
    STATE(137), 1,
      sym_token_declaration,
    STATE(9), 3,
      aux_sym__token_body,
      sym_child_token_block,
      sym_conditional_token_block,
    ACTIONS(57), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [288] = 6,
    ACTIONS(43), 1,
      anon_sym_when,
    ACTIONS(45), 1,
      sym_identifier,
    STATE(136), 1,
      sym_token_type,
    STATE(137), 1,
      sym_token_declaration,
    STATE(5), 3,
      aux_sym__token_body,
      sym_child_token_block,
      sym_conditional_token_block,
    ACTIONS(41), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [314] = 6,
    ACTIONS(43), 1,
      anon_sym_when,
    ACTIONS(45), 1,
      sym_identifier,
    STATE(136), 1,
      sym_token_type,
    STATE(137), 1,
      sym_token_declaration,
    STATE(8), 3,
      aux_sym__token_body,
      sym_child_token_block,
      sym_conditional_token_block,
    ACTIONS(41), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [340] = 6,
    ACTIONS(37), 1,
      anon_sym_when,
    ACTIONS(39), 1,
      sym_identifier,
    STATE(133), 1,
      sym_token_declaration,
    STATE(136), 1,
      sym_token_type,
    STATE(7), 3,
      aux_sym__token_body,
      sym_child_token_block,
      sym_conditional_token_block,
    ACTIONS(41), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [366] = 6,
    ACTIONS(37), 1,
      anon_sym_when,
    ACTIONS(39), 1,
      sym_identifier,
    STATE(133), 1,
      sym_token_declaration,
    STATE(136), 1,
      sym_token_type,
    STATE(4), 3,
      aux_sym__token_body,
      sym_child_token_block,
      sym_conditional_token_block,
    ACTIONS(41), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [392] = 2,
    ACTIONS(70), 1,
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
  [406] = 2,
    ACTIONS(76), 1,
      aux_sym_tokens_block_token2,
    ACTIONS(74), 8,
      anon_sym_when,
      sym_identifier,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [420] = 2,
    ACTIONS(49), 1,
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
  [434] = 2,
    ACTIONS(70), 1,
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
  [448] = 2,
    ACTIONS(76), 1,
      anon_sym_RBRACE,
    ACTIONS(74), 8,
      anon_sym_when,
      sym_identifier,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [462] = 2,
    ACTIONS(49), 1,
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
  [476] = 2,
    ACTIONS(80), 1,
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
  [490] = 2,
    ACTIONS(80), 1,
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
  [504] = 4,
    ACTIONS(84), 1,
      ts_builtin_sym_end,
    ACTIONS(89), 1,
      anon_sym_tokens,
    ACTIONS(86), 2,
      sym_multi_line_comment,
      sym_single_line_comment,
    STATE(22), 2,
      sym_tokens_block,
      aux_sym_source_file_repeat1,
  [519] = 4,
    ACTIONS(7), 1,
      anon_sym_tokens,
    ACTIONS(92), 1,
      ts_builtin_sym_end,
    ACTIONS(94), 2,
      sym_multi_line_comment,
      sym_single_line_comment,
    STATE(22), 2,
      sym_tokens_block,
      aux_sym_source_file_repeat1,
  [534] = 4,
    ACTIONS(96), 1,
      anon_sym_RBRACE,
    ACTIONS(98), 1,
      sym_identifier,
    STATE(31), 1,
      aux_sym_conditional_token_block_repeat1,
    STATE(64), 1,
      sym_token_assignment,
  [547] = 1,
    ACTIONS(100), 4,
      ts_builtin_sym_end,
      sym_multi_line_comment,
      sym_single_line_comment,
      anon_sym_tokens,
  [554] = 1,
    ACTIONS(102), 4,
      ts_builtin_sym_end,
      sym_multi_line_comment,
      sym_single_line_comment,
      anon_sym_tokens,
  [561] = 4,
    ACTIONS(98), 1,
      sym_identifier,
    ACTIONS(104), 1,
      anon_sym_RBRACE,
    STATE(30), 1,
      aux_sym_conditional_token_block_repeat1,
    STATE(64), 1,
      sym_token_assignment,
  [574] = 2,
    ACTIONS(108), 1,
      aux_sym_hex_token4,
    ACTIONS(106), 3,
      aux_sym_hex_token1,
      aux_sym_hex_token2,
      aux_sym_hex_token3,
  [583] = 4,
    ACTIONS(110), 1,
      anon_sym_RBRACE,
    ACTIONS(112), 1,
      sym_identifier,
    STATE(29), 1,
      aux_sym_conditional_token_block_repeat1,
    STATE(64), 1,
      sym_token_assignment,
  [596] = 4,
    ACTIONS(98), 1,
      sym_identifier,
    ACTIONS(115), 1,
      anon_sym_RBRACE,
    STATE(29), 1,
      aux_sym_conditional_token_block_repeat1,
    STATE(64), 1,
      sym_token_assignment,
  [609] = 4,
    ACTIONS(98), 1,
      sym_identifier,
    ACTIONS(117), 1,
      anon_sym_RBRACE,
    STATE(29), 1,
      aux_sym_conditional_token_block_repeat1,
    STATE(64), 1,
      sym_token_assignment,
  [622] = 3,
    ACTIONS(119), 1,
      sym__newlines,
    ACTIONS(121), 1,
      anon_sym_COMMA,
    STATE(33), 1,
      aux_sym_switch_repeat1,
  [632] = 3,
    ACTIONS(123), 1,
      sym__newlines,
    ACTIONS(125), 1,
      anon_sym_COMMA,
    STATE(33), 1,
      aux_sym_switch_repeat1,
  [642] = 3,
    ACTIONS(123), 1,
      sym__newlines,
    ACTIONS(128), 1,
      anon_sym_COMMA,
    ACTIONS(130), 1,
      sym_asterisk,
  [652] = 3,
    ACTIONS(121), 1,
      anon_sym_COMMA,
    ACTIONS(132), 1,
      sym__newlines,
    STATE(33), 1,
      aux_sym_switch_repeat1,
  [662] = 3,
    ACTIONS(134), 1,
      anon_sym_COMMA,
    ACTIONS(136), 1,
      sym_asterisk,
    STATE(35), 1,
      aux_sym_switch_repeat1,
  [672] = 2,
    ACTIONS(138), 1,
      sym_negative_assertion,
    ACTIONS(140), 1,
      sym_positive_assertion,
  [679] = 2,
    ACTIONS(142), 1,
      anon_sym_COMMA,
    ACTIONS(144), 1,
      anon_sym_RPAREN,
  [686] = 2,
    ACTIONS(146), 1,
      anon_sym_COMMA,
    ACTIONS(148), 1,
      anon_sym_RPAREN,
  [693] = 2,
    ACTIONS(150), 1,
      anon_sym_COMMA,
    ACTIONS(152), 1,
      anon_sym_RPAREN,
  [700] = 2,
    ACTIONS(154), 1,
      sym__newlines,
    ACTIONS(156), 1,
      anon_sym_COMMA,
  [707] = 2,
    ACTIONS(158), 1,
      anon_sym_COMMA,
    ACTIONS(160), 1,
      anon_sym_RPAREN,
  [714] = 2,
    ACTIONS(162), 1,
      anon_sym_DOLLAR,
    STATE(52), 1,
      sym_token_reference,
  [721] = 2,
    ACTIONS(164), 1,
      anon_sym_COMMA,
    ACTIONS(166), 1,
      anon_sym_RPAREN,
  [728] = 1,
    ACTIONS(110), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [733] = 2,
    ACTIONS(168), 1,
      anon_sym_COMMA,
    ACTIONS(170), 1,
      anon_sym_RPAREN,
  [740] = 2,
    ACTIONS(162), 1,
      anon_sym_DOLLAR,
    STATE(37), 1,
      sym_token_reference,
  [747] = 2,
    ACTIONS(172), 1,
      anon_sym_COMMA,
    ACTIONS(174), 1,
      anon_sym_RPAREN,
  [754] = 2,
    ACTIONS(176), 1,
      sym_identifier,
    ACTIONS(178), 1,
      aux_sym_tokens_block_token1,
  [761] = 2,
    ACTIONS(134), 1,
      anon_sym_COMMA,
    STATE(32), 1,
      aux_sym_switch_repeat1,
  [768] = 2,
    ACTIONS(180), 1,
      sym_negative_assertion,
    ACTIONS(182), 1,
      sym_positive_assertion,
  [775] = 2,
    ACTIONS(184), 1,
      sym_negative_assertion,
    ACTIONS(186), 1,
      sym_positive_assertion,
  [782] = 1,
    ACTIONS(188), 1,
      sym_number,
  [786] = 1,
    ACTIONS(190), 1,
      sym__newlines,
  [790] = 1,
    ACTIONS(192), 1,
      anon_sym_COMMA,
  [794] = 1,
    ACTIONS(194), 1,
      anon_sym_COMMA,
  [798] = 1,
    ACTIONS(196), 1,
      sym_identifier,
  [802] = 1,
    ACTIONS(198), 1,
      sym__newlines,
  [806] = 1,
    ACTIONS(200), 1,
      anon_sym_COMMA,
  [810] = 1,
    ACTIONS(202), 1,
      anon_sym_COMMA,
  [814] = 1,
    ACTIONS(204), 1,
      anon_sym_COMMA,
  [818] = 1,
    ACTIONS(206), 1,
      anon_sym_COMMA,
  [822] = 1,
    ACTIONS(208), 1,
      anon_sym_COLON,
  [826] = 1,
    ACTIONS(210), 1,
      sym__newlines,
  [830] = 1,
    ACTIONS(212), 1,
      sym__newlines,
  [834] = 1,
    ACTIONS(214), 1,
      sym_decimal_range,
  [838] = 1,
    ACTIONS(216), 1,
      sym_number,
  [842] = 1,
    ACTIONS(218), 1,
      sym_number,
  [846] = 1,
    ACTIONS(220), 1,
      sym_decimal_range,
  [850] = 1,
    ACTIONS(222), 1,
      sym_decimal_range,
  [854] = 1,
    ACTIONS(224), 1,
      sym_decimal_range,
  [858] = 1,
    ACTIONS(226), 1,
      sym_number,
  [862] = 1,
    ACTIONS(228), 1,
      ts_builtin_sym_end,
  [866] = 1,
    ACTIONS(230), 1,
      anon_sym_COMMA,
  [870] = 1,
    ACTIONS(232), 1,
      aux_sym__string_token1,
  [874] = 1,
    ACTIONS(234), 1,
      anon_sym_COMMA,
  [878] = 1,
    ACTIONS(236), 1,
      anon_sym_COMMA,
  [882] = 1,
    ACTIONS(238), 1,
      anon_sym_COMMA,
  [886] = 1,
    ACTIONS(240), 1,
      sym__newlines,
  [890] = 1,
    ACTIONS(242), 1,
      anon_sym_COMMA,
  [894] = 1,
    ACTIONS(244), 1,
      anon_sym_COMMA,
  [898] = 1,
    ACTIONS(246), 1,
      anon_sym_COMMA,
  [902] = 1,
    ACTIONS(248), 1,
      anon_sym_COMMA,
  [906] = 1,
    ACTIONS(250), 1,
      sym__newlines,
  [910] = 1,
    ACTIONS(252), 1,
      sym_decimal_range,
  [914] = 1,
    ACTIONS(254), 1,
      sym_number,
  [918] = 1,
    ACTIONS(256), 1,
      sym_number,
  [922] = 1,
    ACTIONS(258), 1,
      sym_decimal_range,
  [926] = 1,
    ACTIONS(260), 1,
      sym_decimal_range,
  [930] = 1,
    ACTIONS(262), 1,
      sym_decimal_range,
  [934] = 1,
    ACTIONS(264), 1,
      sym_number,
  [938] = 1,
    ACTIONS(266), 1,
      sym_number,
  [942] = 1,
    ACTIONS(268), 1,
      sym_decimal_range,
  [946] = 1,
    ACTIONS(270), 1,
      sym_decimal_range,
  [950] = 1,
    ACTIONS(272), 1,
      sym_decimal_range,
  [954] = 1,
    ACTIONS(274), 1,
      sym_dimensional_unit,
  [958] = 1,
    ACTIONS(276), 1,
      sym_number,
  [962] = 1,
    ACTIONS(278), 1,
      sym__newlines,
  [966] = 1,
    ACTIONS(280), 1,
      sym_decimal_range,
  [970] = 1,
    ACTIONS(282), 1,
      sym__newlines,
  [974] = 1,
    ACTIONS(284), 1,
      sym_decimal_range,
  [978] = 1,
    ACTIONS(286), 1,
      sym__newlines,
  [982] = 1,
    ACTIONS(288), 1,
      sym_decimal_range,
  [986] = 1,
    ACTIONS(290), 1,
      sym__newlines,
  [990] = 1,
    ACTIONS(292), 1,
      sym_decimal_range,
  [994] = 1,
    ACTIONS(294), 1,
      sym__newlines,
  [998] = 1,
    ACTIONS(296), 1,
      sym_decimal_range,
  [1002] = 1,
    ACTIONS(298), 1,
      sym__newlines,
  [1006] = 1,
    ACTIONS(300), 1,
      sym_decimal_range,
  [1010] = 1,
    ACTIONS(302), 1,
      sym__newlines,
  [1014] = 1,
    ACTIONS(304), 1,
      sym_decimal_range,
  [1018] = 1,
    ACTIONS(306), 1,
      sym__newlines,
  [1022] = 1,
    ACTIONS(308), 1,
      anon_sym_RPAREN,
  [1026] = 1,
    ACTIONS(310), 1,
      anon_sym_RPAREN,
  [1030] = 1,
    ACTIONS(312), 1,
      anon_sym_RPAREN,
  [1034] = 1,
    ACTIONS(314), 1,
      anon_sym_RPAREN,
  [1038] = 1,
    ACTIONS(316), 1,
      anon_sym_RPAREN,
  [1042] = 1,
    ACTIONS(318), 1,
      anon_sym_RPAREN,
  [1046] = 1,
    ACTIONS(320), 1,
      anon_sym_RPAREN,
  [1050] = 1,
    ACTIONS(322), 1,
      sym__newlines,
  [1054] = 1,
    ACTIONS(324), 1,
      sym__newlines,
  [1058] = 1,
    ACTIONS(326), 1,
      sym__newlines,
  [1062] = 1,
    ACTIONS(328), 1,
      sym__newlines,
  [1066] = 1,
    ACTIONS(330), 1,
      sym__newlines,
  [1070] = 1,
    ACTIONS(332), 1,
      sym__newlines,
  [1074] = 1,
    ACTIONS(334), 1,
      sym__newlines,
  [1078] = 1,
    ACTIONS(336), 1,
      sym_decimal_range,
  [1082] = 1,
    ACTIONS(338), 1,
      sym_string,
  [1086] = 1,
    ACTIONS(180), 1,
      sym__newlines,
  [1090] = 1,
    ACTIONS(340), 1,
      anon_sym_LBRACE,
  [1094] = 1,
    ACTIONS(342), 1,
      sym_identifier,
  [1098] = 1,
    ACTIONS(344), 1,
      anon_sym_COLON,
  [1102] = 1,
    ACTIONS(346), 1,
      sym__newlines,
  [1106] = 1,
    ACTIONS(348), 1,
      sym_ref_identifier,
  [1110] = 1,
    ACTIONS(350), 1,
      sym_ref_identifier,
  [1114] = 1,
    ACTIONS(352), 1,
      sym_identifier,
  [1118] = 1,
    ACTIONS(354), 1,
      sym__newlines,
  [1122] = 1,
    ACTIONS(356), 1,
      sym_identifier,
  [1126] = 1,
    ACTIONS(358), 1,
      anon_sym_LBRACE,
  [1130] = 1,
    ACTIONS(360), 1,
      anon_sym_LBRACE,
  [1134] = 1,
    ACTIONS(362), 1,
      sym_identifier,
  [1138] = 1,
    ACTIONS(364), 1,
      anon_sym_LBRACE,
  [1142] = 1,
    ACTIONS(366), 1,
      aux_sym_tokens_block_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 57,
  [SMALL_STATE(4)] = 114,
  [SMALL_STATE(5)] = 143,
  [SMALL_STATE(6)] = 172,
  [SMALL_STATE(7)] = 201,
  [SMALL_STATE(8)] = 230,
  [SMALL_STATE(9)] = 259,
  [SMALL_STATE(10)] = 288,
  [SMALL_STATE(11)] = 314,
  [SMALL_STATE(12)] = 340,
  [SMALL_STATE(13)] = 366,
  [SMALL_STATE(14)] = 392,
  [SMALL_STATE(15)] = 406,
  [SMALL_STATE(16)] = 420,
  [SMALL_STATE(17)] = 434,
  [SMALL_STATE(18)] = 448,
  [SMALL_STATE(19)] = 462,
  [SMALL_STATE(20)] = 476,
  [SMALL_STATE(21)] = 490,
  [SMALL_STATE(22)] = 504,
  [SMALL_STATE(23)] = 519,
  [SMALL_STATE(24)] = 534,
  [SMALL_STATE(25)] = 547,
  [SMALL_STATE(26)] = 554,
  [SMALL_STATE(27)] = 561,
  [SMALL_STATE(28)] = 574,
  [SMALL_STATE(29)] = 583,
  [SMALL_STATE(30)] = 596,
  [SMALL_STATE(31)] = 609,
  [SMALL_STATE(32)] = 622,
  [SMALL_STATE(33)] = 632,
  [SMALL_STATE(34)] = 642,
  [SMALL_STATE(35)] = 652,
  [SMALL_STATE(36)] = 662,
  [SMALL_STATE(37)] = 672,
  [SMALL_STATE(38)] = 679,
  [SMALL_STATE(39)] = 686,
  [SMALL_STATE(40)] = 693,
  [SMALL_STATE(41)] = 700,
  [SMALL_STATE(42)] = 707,
  [SMALL_STATE(43)] = 714,
  [SMALL_STATE(44)] = 721,
  [SMALL_STATE(45)] = 728,
  [SMALL_STATE(46)] = 733,
  [SMALL_STATE(47)] = 740,
  [SMALL_STATE(48)] = 747,
  [SMALL_STATE(49)] = 754,
  [SMALL_STATE(50)] = 761,
  [SMALL_STATE(51)] = 768,
  [SMALL_STATE(52)] = 775,
  [SMALL_STATE(53)] = 782,
  [SMALL_STATE(54)] = 786,
  [SMALL_STATE(55)] = 790,
  [SMALL_STATE(56)] = 794,
  [SMALL_STATE(57)] = 798,
  [SMALL_STATE(58)] = 802,
  [SMALL_STATE(59)] = 806,
  [SMALL_STATE(60)] = 810,
  [SMALL_STATE(61)] = 814,
  [SMALL_STATE(62)] = 818,
  [SMALL_STATE(63)] = 822,
  [SMALL_STATE(64)] = 826,
  [SMALL_STATE(65)] = 830,
  [SMALL_STATE(66)] = 834,
  [SMALL_STATE(67)] = 838,
  [SMALL_STATE(68)] = 842,
  [SMALL_STATE(69)] = 846,
  [SMALL_STATE(70)] = 850,
  [SMALL_STATE(71)] = 854,
  [SMALL_STATE(72)] = 858,
  [SMALL_STATE(73)] = 862,
  [SMALL_STATE(74)] = 866,
  [SMALL_STATE(75)] = 870,
  [SMALL_STATE(76)] = 874,
  [SMALL_STATE(77)] = 878,
  [SMALL_STATE(78)] = 882,
  [SMALL_STATE(79)] = 886,
  [SMALL_STATE(80)] = 890,
  [SMALL_STATE(81)] = 894,
  [SMALL_STATE(82)] = 898,
  [SMALL_STATE(83)] = 902,
  [SMALL_STATE(84)] = 906,
  [SMALL_STATE(85)] = 910,
  [SMALL_STATE(86)] = 914,
  [SMALL_STATE(87)] = 918,
  [SMALL_STATE(88)] = 922,
  [SMALL_STATE(89)] = 926,
  [SMALL_STATE(90)] = 930,
  [SMALL_STATE(91)] = 934,
  [SMALL_STATE(92)] = 938,
  [SMALL_STATE(93)] = 942,
  [SMALL_STATE(94)] = 946,
  [SMALL_STATE(95)] = 950,
  [SMALL_STATE(96)] = 954,
  [SMALL_STATE(97)] = 958,
  [SMALL_STATE(98)] = 962,
  [SMALL_STATE(99)] = 966,
  [SMALL_STATE(100)] = 970,
  [SMALL_STATE(101)] = 974,
  [SMALL_STATE(102)] = 978,
  [SMALL_STATE(103)] = 982,
  [SMALL_STATE(104)] = 986,
  [SMALL_STATE(105)] = 990,
  [SMALL_STATE(106)] = 994,
  [SMALL_STATE(107)] = 998,
  [SMALL_STATE(108)] = 1002,
  [SMALL_STATE(109)] = 1006,
  [SMALL_STATE(110)] = 1010,
  [SMALL_STATE(111)] = 1014,
  [SMALL_STATE(112)] = 1018,
  [SMALL_STATE(113)] = 1022,
  [SMALL_STATE(114)] = 1026,
  [SMALL_STATE(115)] = 1030,
  [SMALL_STATE(116)] = 1034,
  [SMALL_STATE(117)] = 1038,
  [SMALL_STATE(118)] = 1042,
  [SMALL_STATE(119)] = 1046,
  [SMALL_STATE(120)] = 1050,
  [SMALL_STATE(121)] = 1054,
  [SMALL_STATE(122)] = 1058,
  [SMALL_STATE(123)] = 1062,
  [SMALL_STATE(124)] = 1066,
  [SMALL_STATE(125)] = 1070,
  [SMALL_STATE(126)] = 1074,
  [SMALL_STATE(127)] = 1078,
  [SMALL_STATE(128)] = 1082,
  [SMALL_STATE(129)] = 1086,
  [SMALL_STATE(130)] = 1090,
  [SMALL_STATE(131)] = 1094,
  [SMALL_STATE(132)] = 1098,
  [SMALL_STATE(133)] = 1102,
  [SMALL_STATE(134)] = 1106,
  [SMALL_STATE(135)] = 1110,
  [SMALL_STATE(136)] = 1114,
  [SMALL_STATE(137)] = 1118,
  [SMALL_STATE(138)] = 1122,
  [SMALL_STATE(139)] = 1126,
  [SMALL_STATE(140)] = 1130,
  [SMALL_STATE(141)] = 1134,
  [SMALL_STATE(142)] = 1138,
  [SMALL_STATE(143)] = 1142,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__token_body, 2),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__token_body, 2), SHIFT_REPEAT(43),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__token_body, 2), SHIFT_REPEAT(140),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__token_body, 2), SHIFT_REPEAT(138),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__token_body, 2), SHIFT_REPEAT(47),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__token_body, 2), SHIFT_REPEAT(142),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child_token_block, 4),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_child_token_block, 4),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional_token_block, 7),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_token_block, 7),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__token_body, 2),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_token_block, 6),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional_token_block, 6),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(22),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(49),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tokens_block, 5),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tokens_block, 4),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conditional_token_block_repeat1, 2),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conditional_token_block_repeat1, 2), SHIFT_REPEAT(63),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch, 3),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_switch_repeat1, 2),
  [125] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_switch_repeat1, 2), SHIFT_REPEAT(57),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_switch_repeat1, 2),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch, 2),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_switch_repeat1, 3),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_switch_repeat1, 3),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_token_reference, 2),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_token_reference, 2),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_token_value, 1),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dimension, 2),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string, 3),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [228] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_token_declaration, 4),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_token_assignment, 3),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hex, 2),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_a98rgb, 7, .production_id = 1),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hsl, 7, .production_id = 2),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hsv, 7, .production_id = 3),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oklab, 7, .production_id = 4),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_p3, 7, .production_id = 1),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rec2020, 7, .production_id = 1),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rgb, 7, .production_id = 1),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_a98rgb, 9, .production_id = 1),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hsl, 9, .production_id = 2),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hsv, 9, .production_id = 3),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oklab, 9, .production_id = 4),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_p3, 9, .production_id = 1),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rec2020, 9, .production_id = 1),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rgb, 9, .production_id = 1),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_token_type, 1),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
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
