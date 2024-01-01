#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 124
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 63
#define ALIAS_COUNT 9
#define TOKEN_COUNT 41
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 5

enum {
  sym__newlines = 1,
  aux_sym__string_token1 = 2,
  sym_asset_path = 3,
  sym_asterisk = 4,
  anon_sym_LBRACE = 5,
  anon_sym_RBRACE = 6,
  anon_sym_when = 7,
  sym_decimal_range = 8,
  sym_dimensional_unit = 9,
  anon_sym_POUND = 10,
  aux_sym_hex_token1 = 11,
  aux_sym_hex_token2 = 12,
  aux_sym_hex_token3 = 13,
  aux_sym_hex_token4 = 14,
  aux_sym_hsl_token1 = 15,
  anon_sym_COMMA = 16,
  anon_sym_RPAREN = 17,
  aux_sym_hsv_token1 = 18,
  sym_identifier = 19,
  sym_multi_line_comment = 20,
  sym_negative_assertion = 21,
  sym_number = 22,
  aux_sym_oklab_token1 = 23,
  aux_sym_p3_token1 = 24,
  sym_positive_assertion = 25,
  sym_ref_identifier = 26,
  aux_sym_rgb_token1 = 27,
  sym_single_line_comment = 28,
  sym_string = 29,
  anon_sym_COLON = 30,
  anon_sym_tokens = 31,
  aux_sym_tokens_block_token1 = 32,
  aux_sym_tokens_block_token2 = 33,
  anon_sym_DOLLAR = 34,
  anon_sym_text = 35,
  anon_sym_color = 36,
  anon_sym_asset = 37,
  anon_sym_switch = 38,
  anon_sym_dimension = 39,
  anon_sym_range = 40,
  sym_source_file = 41,
  sym__string = 42,
  aux_sym__token_body = 43,
  sym_child_token_block = 44,
  sym_conditional_token_block = 45,
  sym_dimension = 46,
  sym_hex = 47,
  sym_hsl = 48,
  sym_hsv = 49,
  sym_oklab = 50,
  sym_p3 = 51,
  sym_rgb = 52,
  sym_switch = 53,
  sym_token_assignment = 54,
  sym_tokens_block = 55,
  sym_token_declaration = 56,
  sym_token_reference = 57,
  sym_token_type = 58,
  sym_token_value = 59,
  aux_sym_source_file_repeat1 = 60,
  aux_sym_conditional_token_block_repeat1 = 61,
  aux_sym_switch_repeat1 = 62,
  alias_sym_a_channel = 63,
  alias_sym_b_channel = 64,
  alias_sym_blue_channel = 65,
  alias_sym_green_channel = 66,
  alias_sym_hue_channel = 67,
  alias_sym_lightness_channel = 68,
  alias_sym_red_channel = 69,
  alias_sym_saturation_channel = 70,
  alias_sym_value_channel = 71,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__newlines] = "_newlines",
  [aux_sym__string_token1] = "_string_token1",
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
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [aux_sym_hsv_token1] = "hsv_token1",
  [sym_identifier] = "identifier",
  [sym_multi_line_comment] = "multi_line_comment",
  [sym_negative_assertion] = "negative_assertion",
  [sym_number] = "number",
  [aux_sym_oklab_token1] = "oklab_token1",
  [aux_sym_p3_token1] = "p3_token1",
  [sym_positive_assertion] = "positive_assertion",
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
  [sym_child_token_block] = "child_token_block",
  [sym_conditional_token_block] = "conditional_token_block",
  [sym_dimension] = "dimension",
  [sym_hex] = "hex",
  [sym_hsl] = "hsl",
  [sym_hsv] = "hsv",
  [sym_oklab] = "oklab",
  [sym_p3] = "p3",
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
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [aux_sym_hsv_token1] = aux_sym_hsv_token1,
  [sym_identifier] = sym_identifier,
  [sym_multi_line_comment] = sym_multi_line_comment,
  [sym_negative_assertion] = sym_negative_assertion,
  [sym_number] = sym_number,
  [aux_sym_oklab_token1] = aux_sym_oklab_token1,
  [aux_sym_p3_token1] = aux_sym_p3_token1,
  [sym_positive_assertion] = sym_positive_assertion,
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
  [sym_child_token_block] = sym_child_token_block,
  [sym_conditional_token_block] = sym_conditional_token_block,
  [sym_dimension] = sym_dimension,
  [sym_hex] = sym_hex,
  [sym_hsl] = sym_hsl,
  [sym_hsv] = sym_hsv,
  [sym_oklab] = sym_oklab,
  [sym_p3] = sym_p3,
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
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
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
    [1] = alias_sym_hue_channel,
    [3] = alias_sym_saturation_channel,
    [5] = alias_sym_lightness_channel,
  },
  [2] = {
    [1] = alias_sym_hue_channel,
    [3] = alias_sym_saturation_channel,
    [5] = alias_sym_value_channel,
  },
  [3] = {
    [1] = alias_sym_lightness_channel,
    [3] = alias_sym_a_channel,
    [5] = alias_sym_b_channel,
  },
  [4] = {
    [1] = alias_sym_red_channel,
    [3] = alias_sym_green_channel,
    [5] = alias_sym_blue_channel,
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
  [7] = 7,
  [8] = 5,
  [9] = 6,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 12,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 14,
  [19] = 16,
  [20] = 17,
  [21] = 15,
  [22] = 22,
  [23] = 23,
  [24] = 24,
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
  [47] = 42,
  [48] = 48,
  [49] = 49,
  [50] = 44,
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
  [109] = 40,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 114,
  [116] = 116,
  [117] = 113,
  [118] = 118,
  [119] = 110,
  [120] = 120,
  [121] = 111,
  [122] = 120,
  [123] = 123,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(99);
      if (lookahead == '"') ADVANCE(101);
      if (lookahead == '#') ADVANCE(116);
      if (lookahead == '$') ADVANCE(180);
      if (lookahead == '%') ADVANCE(115);
      if (lookahead == ')') ADVANCE(123);
      if (lookahead == '*') ADVANCE(103);
      if (lookahead == ',') ADVANCE(122);
      if (lookahead == '-') ADVANCE(88);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '0') ADVANCE(111);
      if (lookahead == '1') ADVANCE(108);
      if (lookahead == ':') ADVANCE(176);
      if (lookahead == 'a') ADVANCE(73);
      if (lookahead == 'c') ADVANCE(83);
      if (lookahead == 'd') ADVANCE(43);
      if (lookahead == 'e') ADVANCE(86);
      if (lookahead == 'h') ADVANCE(67);
      if (lookahead == 'i') ADVANCE(54);
      if (lookahead == 'm') ADVANCE(51);
      if (lookahead == 'o') ADVANCE(46);
      if (lookahead == 'p') ADVANCE(19);
      if (lookahead == 'r') ADVANCE(21);
      if (lookahead == 's') ADVANCE(78);
      if (lookahead == 't') ADVANCE(29);
      if (lookahead == 'v') ADVANCE(85);
      if (lookahead == 'w') ADVANCE(38);
      if (lookahead == '{') ADVANCE(104);
      if (lookahead == '}') ADVANCE(105);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(166);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(100);
      if (lookahead == '*') ADVANCE(103);
      if (lookahead == ',') ADVANCE(122);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(101);
      if (lookahead == '#') ADVANCE(116);
      if (lookahead == '$') ADVANCE(180);
      if (lookahead == '-') ADVANCE(88);
      if (lookahead == '/') ADVANCE(97);
      if (lookahead == 'h') ADVANCE(69);
      if (lookahead == 'o') ADVANCE(45);
      if (lookahead == 'p') ADVANCE(20);
      if (lookahead == 'r') ADVANCE(36);
      if (lookahead == '{') ADVANCE(178);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 3:
      if (lookahead == '(') ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '(') ADVANCE(121);
      if (lookahead == 'a') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == '(') ADVANCE(121);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '(') ADVANCE(124);
      if (lookahead == 'a') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == '(') ADVANCE(124);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '(') ADVANCE(172);
      if (lookahead == 'a') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == '(') ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '(') ADVANCE(168);
      if (lookahead == 'a') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(11);
      END_STATE();
    case 11:
      if (lookahead == '(') ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '*') ADVANCE(15);
      if (lookahead == '/') ADVANCE(173);
      END_STATE();
    case 13:
      if (lookahead == '*') ADVANCE(15);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 14:
      if (lookahead == '*') ADVANCE(14);
      if (lookahead == '/') ADVANCE(164);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 15:
      if (lookahead == '*') ADVANCE(14);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '0') ADVANCE(112);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(167);
      END_STATE();
    case 17:
      if (lookahead == '0') ADVANCE(110);
      if (lookahead == '1') ADVANCE(109);
      if (lookahead == 'a') ADVANCE(70);
      if (lookahead == 'c') ADVANCE(63);
      if (lookahead == 'd') ADVANCE(42);
      if (lookahead == 'r') ADVANCE(22);
      if (lookahead == 's') ADVANCE(79);
      if (lookahead == 't') ADVANCE(31);
      if (lookahead == 'w') ADVANCE(40);
      if (lookahead == '}') ADVANCE(179);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 18:
      if (lookahead == '0') ADVANCE(113);
      END_STATE();
    case 19:
      if (lookahead == '3') ADVANCE(3);
      if (lookahead == 'c' ||
          lookahead == 't' ||
          lookahead == 'x') ADVANCE(115);
      END_STATE();
    case 20:
      if (lookahead == '3') ADVANCE(125);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(55);
      if (lookahead == 'e') ADVANCE(51);
      if (lookahead == 'g') ADVANCE(26);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(150);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(80);
      if (lookahead == 'i') ADVANCE(53);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(70);
      if (lookahead == 'c') ADVANCE(63);
      if (lookahead == 'd') ADVANCE(42);
      if (lookahead == 'r') ADVANCE(22);
      if (lookahead == 's') ADVANCE(79);
      if (lookahead == 't') ADVANCE(31);
      if (lookahead == 'w') ADVANCE(40);
      if (lookahead == '}') ADVANCE(105);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(27);
      END_STATE();
    case 26:
      if (lookahead == 'b') ADVANCE(8);
      END_STATE();
    case 27:
      if (lookahead == 'b') ADVANCE(10);
      END_STATE();
    case 28:
      if (lookahead == 'c') ADVANCE(39);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(81);
      if (lookahead == 'o') ADVANCE(47);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(191);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(162);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 36:
      if (lookahead == 'g') ADVANCE(135);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 37:
      if (lookahead == 'g') ADVANCE(30);
      END_STATE();
    case 38:
      if (lookahead == 'h') ADVANCE(33);
      END_STATE();
    case 39:
      if (lookahead == 'h') ADVANCE(187);
      END_STATE();
    case 40:
      if (lookahead == 'h') ADVANCE(139);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 41:
      if (lookahead == 'i') ADVANCE(74);
      END_STATE();
    case 42:
      if (lookahead == 'i') ADVANCE(149);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 43:
      if (lookahead == 'i') ADVANCE(52);
      if (lookahead == 'v') ADVANCE(84);
      END_STATE();
    case 44:
      if (lookahead == 'i') ADVANCE(65);
      END_STATE();
    case 45:
      if (lookahead == 'k') ADVANCE(147);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 46:
      if (lookahead == 'k') ADVANCE(50);
      END_STATE();
    case 47:
      if (lookahead == 'k') ADVANCE(35);
      END_STATE();
    case 48:
      if (lookahead == 'l') ADVANCE(61);
      END_STATE();
    case 49:
      if (lookahead == 'l') ADVANCE(4);
      if (lookahead == 'v') ADVANCE(6);
      END_STATE();
    case 50:
      if (lookahead == 'l') ADVANCE(25);
      END_STATE();
    case 51:
      if (lookahead == 'm') ADVANCE(115);
      END_STATE();
    case 52:
      if (lookahead == 'm') ADVANCE(34);
      END_STATE();
    case 53:
      if (lookahead == 'n') ADVANCE(115);
      END_STATE();
    case 54:
      if (lookahead == 'n') ADVANCE(115);
      if (lookahead == 's') ADVANCE(170);
      END_STATE();
    case 55:
      if (lookahead == 'n') ADVANCE(37);
      END_STATE();
    case 56:
      if (lookahead == 'n') ADVANCE(106);
      END_STATE();
    case 57:
      if (lookahead == 'n') ADVANCE(189);
      END_STATE();
    case 58:
      if (lookahead == 'n') ADVANCE(64);
      END_STATE();
    case 59:
      if (lookahead == 'n') ADVANCE(71);
      END_STATE();
    case 60:
      if (lookahead == 'n') ADVANCE(68);
      END_STATE();
    case 61:
      if (lookahead == 'o') ADVANCE(66);
      END_STATE();
    case 62:
      if (lookahead == 'o') ADVANCE(47);
      END_STATE();
    case 63:
      if (lookahead == 'o') ADVANCE(148);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 64:
      if (lookahead == 'o') ADVANCE(77);
      END_STATE();
    case 65:
      if (lookahead == 'o') ADVANCE(57);
      END_STATE();
    case 66:
      if (lookahead == 'r') ADVANCE(183);
      END_STATE();
    case 67:
      if (lookahead == 's') ADVANCE(49);
      END_STATE();
    case 68:
      if (lookahead == 's') ADVANCE(177);
      END_STATE();
    case 69:
      if (lookahead == 's') ADVANCE(146);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 70:
      if (lookahead == 's') ADVANCE(158);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 71:
      if (lookahead == 's') ADVANCE(44);
      END_STATE();
    case 72:
      if (lookahead == 's') ADVANCE(32);
      END_STATE();
    case 73:
      if (lookahead == 's') ADVANCE(72);
      END_STATE();
    case 74:
      if (lookahead == 't') ADVANCE(28);
      END_STATE();
    case 75:
      if (lookahead == 't') ADVANCE(181);
      END_STATE();
    case 76:
      if (lookahead == 't') ADVANCE(185);
      END_STATE();
    case 77:
      if (lookahead == 't') ADVANCE(165);
      END_STATE();
    case 78:
      if (lookahead == 'w') ADVANCE(41);
      END_STATE();
    case 79:
      if (lookahead == 'w') ADVANCE(144);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 80:
      if (lookahead == 'x') ADVANCE(115);
      END_STATE();
    case 81:
      if (lookahead == 'x') ADVANCE(75);
      END_STATE();
    case 82:
      if (lookahead == '{') ADVANCE(178);
      if (lookahead == '}') ADVANCE(105);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(82)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 83:
      if (lookahead == 'h' ||
          lookahead == 'm') ADVANCE(115);
      if (lookahead == 'o') ADVANCE(48);
      END_STATE();
    case 84:
      if (lookahead == 'h' ||
          lookahead == 'w') ADVANCE(115);
      END_STATE();
    case 85:
      if (lookahead == 'h' ||
          lookahead == 'w') ADVANCE(115);
      if (lookahead == 'm') ADVANCE(23);
      END_STATE();
    case 86:
      if (lookahead == 'm' ||
          lookahead == 'x') ADVANCE(115);
      END_STATE();
    case 87:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(87)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 88:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      END_STATE();
    case 89:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(114);
      END_STATE();
    case 90:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(167);
      END_STATE();
    case 91:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(117);
      END_STATE();
    case 92:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(119);
      END_STATE();
    case 93:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(120);
      END_STATE();
    case 94:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(91);
      END_STATE();
    case 95:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 96:
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 97:
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 98:
      if (eof) ADVANCE(99);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == 't') ADVANCE(62);
      if (lookahead == '{') ADVANCE(104);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(98)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(94);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym__newlines);
      if (lookahead == '\n') ADVANCE(100);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym__string_token1);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_asset_path);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_asterisk);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_when);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_when);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_decimal_range);
      if (lookahead == '.') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_decimal_range);
      if (lookahead == '.') ADVANCE(18);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_decimal_range);
      if (lookahead == '.') ADVANCE(89);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_decimal_range);
      if (lookahead == '.') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_decimal_range);
      if (lookahead == '0') ADVANCE(112);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(167);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_decimal_range);
      if (lookahead == '0') ADVANCE(113);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_decimal_range);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(114);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_dimensional_unit);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_hex_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(118);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_hex_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(92);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_hex_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(93);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_hex_token4);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_hsl_token1);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_hsv_token1);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(121);
      if (lookahead == 'a') ADVANCE(127);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(5);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(121);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(5);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(124);
      if (lookahead == 'a') ADVANCE(129);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(7);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(124);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(7);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(172);
      if (lookahead == 'a') ADVANCE(131);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(9);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(9);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(168);
      if (lookahead == 'a') ADVANCE(133);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(136);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(130);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(132);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(143);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(192);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(151);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(153);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(161);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(138);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(188);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(159);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(155);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(126);
      if (lookahead == 'v') ADVANCE(128);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(134);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(154);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(140);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(142);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(107);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(190);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(157);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(156);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(152);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(184);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(145);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(141);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(137);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(182);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(186);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(160);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_multi_line_comment);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_negative_assertion);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(167);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_oklab_token1);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_p3_token1);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_positive_assertion);
      if (lookahead == ' ') ADVANCE(58);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_ref_identifier);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_rgb_token1);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_single_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(173);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(174);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\' &&
          lookahead != '^' &&
          lookahead != 'n') ADVANCE(175);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_string);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\' &&
          lookahead != '^' &&
          lookahead != 'n') ADVANCE(175);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_tokens);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_tokens_block_token1);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_tokens_block_token2);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_text);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_text);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_color);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_color);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_asset);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_asset);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_switch);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_switch);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_dimension);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_dimension);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_range);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_range);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 98},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 17},
  [5] = {.lex_state = 24},
  [6] = {.lex_state = 17},
  [7] = {.lex_state = 17},
  [8] = {.lex_state = 24},
  [9] = {.lex_state = 24},
  [10] = {.lex_state = 17},
  [11] = {.lex_state = 17},
  [12] = {.lex_state = 17},
  [13] = {.lex_state = 17},
  [14] = {.lex_state = 17},
  [15] = {.lex_state = 17},
  [16] = {.lex_state = 24},
  [17] = {.lex_state = 24},
  [18] = {.lex_state = 24},
  [19] = {.lex_state = 17},
  [20] = {.lex_state = 17},
  [21] = {.lex_state = 24},
  [22] = {.lex_state = 98},
  [23] = {.lex_state = 98},
  [24] = {.lex_state = 98},
  [25] = {.lex_state = 82},
  [26] = {.lex_state = 82},
  [27] = {.lex_state = 98},
  [28] = {.lex_state = 82},
  [29] = {.lex_state = 82},
  [30] = {.lex_state = 98},
  [31] = {.lex_state = 82},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 82},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 82},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 174},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 82},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 2},
  [62] = {.lex_state = 2},
  [63] = {.lex_state = 17},
  [64] = {.lex_state = 17},
  [65] = {.lex_state = 2},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 2},
  [78] = {.lex_state = 2},
  [79] = {.lex_state = 17},
  [80] = {.lex_state = 17},
  [81] = {.lex_state = 2},
  [82] = {.lex_state = 2},
  [83] = {.lex_state = 17},
  [84] = {.lex_state = 17},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 2},
  [87] = {.lex_state = 17},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 17},
  [90] = {.lex_state = 1},
  [91] = {.lex_state = 17},
  [92] = {.lex_state = 1},
  [93] = {.lex_state = 17},
  [94] = {.lex_state = 1},
  [95] = {.lex_state = 17},
  [96] = {.lex_state = 1},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 1},
  [103] = {.lex_state = 1},
  [104] = {.lex_state = 1},
  [105] = {.lex_state = 1},
  [106] = {.lex_state = 1},
  [107] = {.lex_state = 2},
  [108] = {.lex_state = 1},
  [109] = {.lex_state = 1},
  [110] = {.lex_state = 98},
  [111] = {.lex_state = 82},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 1},
  [114] = {.lex_state = 87},
  [115] = {.lex_state = 87},
  [116] = {.lex_state = 82},
  [117] = {.lex_state = 1},
  [118] = {.lex_state = 82},
  [119] = {.lex_state = 98},
  [120] = {.lex_state = 98},
  [121] = {.lex_state = 82},
  [122] = {.lex_state = 98},
  [123] = {.lex_state = 2},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym__string_token1] = ACTIONS(1),
    [sym_asset_path] = ACTIONS(1),
    [sym_asterisk] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_when] = ACTIONS(1),
    [sym_decimal_range] = ACTIONS(1),
    [sym_dimensional_unit] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [aux_sym_hsl_token1] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [aux_sym_hsv_token1] = ACTIONS(1),
    [sym_multi_line_comment] = ACTIONS(1),
    [sym_negative_assertion] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [aux_sym_oklab_token1] = ACTIONS(1),
    [aux_sym_p3_token1] = ACTIONS(1),
    [sym_positive_assertion] = ACTIONS(1),
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
    [sym_source_file] = STATE(66),
    [sym_tokens_block] = STATE(23),
    [aux_sym_source_file_repeat1] = STATE(23),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_multi_line_comment] = ACTIONS(5),
    [sym_single_line_comment] = ACTIONS(5),
    [anon_sym_tokens] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(9), 1,
      aux_sym__string_token1,
    ACTIONS(11), 1,
      sym_asset_path,
    ACTIONS(13), 1,
      anon_sym_POUND,
    ACTIONS(15), 1,
      aux_sym_hsl_token1,
    ACTIONS(17), 1,
      aux_sym_hsv_token1,
    ACTIONS(19), 1,
      sym_identifier,
    ACTIONS(21), 1,
      sym_number,
    ACTIONS(23), 1,
      aux_sym_oklab_token1,
    ACTIONS(25), 1,
      aux_sym_p3_token1,
    ACTIONS(27), 1,
      aux_sym_rgb_token1,
    ACTIONS(29), 1,
      anon_sym_DOLLAR,
    STATE(76), 1,
      sym_token_value,
    STATE(108), 10,
      sym__string,
      sym_dimension,
      sym_hex,
      sym_hsl,
      sym_hsv,
      sym_oklab,
      sym_p3,
      sym_rgb,
      sym_switch,
      sym_token_reference,
  [49] = 13,
    ACTIONS(9), 1,
      aux_sym__string_token1,
    ACTIONS(11), 1,
      sym_asset_path,
    ACTIONS(13), 1,
      anon_sym_POUND,
    ACTIONS(15), 1,
      aux_sym_hsl_token1,
    ACTIONS(17), 1,
      aux_sym_hsv_token1,
    ACTIONS(19), 1,
      sym_identifier,
    ACTIONS(21), 1,
      sym_number,
    ACTIONS(23), 1,
      aux_sym_oklab_token1,
    ACTIONS(25), 1,
      aux_sym_p3_token1,
    ACTIONS(27), 1,
      aux_sym_rgb_token1,
    ACTIONS(29), 1,
      anon_sym_DOLLAR,
    STATE(72), 1,
      sym_token_value,
    STATE(108), 10,
      sym__string,
      sym_dimension,
      sym_hex,
      sym_hsl,
      sym_hsv,
      sym_oklab,
      sym_p3,
      sym_rgb,
      sym_switch,
      sym_token_reference,
  [98] = 7,
    ACTIONS(31), 1,
      anon_sym_when,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(35), 1,
      aux_sym_tokens_block_token2,
    STATE(116), 1,
      sym_token_type,
    STATE(117), 1,
      sym_token_declaration,
    STATE(6), 3,
      aux_sym__token_body,
      sym_child_token_block,
      sym_conditional_token_block,
    ACTIONS(37), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [127] = 7,
    ACTIONS(39), 1,
      anon_sym_RBRACE,
    ACTIONS(41), 1,
      anon_sym_when,
    ACTIONS(43), 1,
      sym_identifier,
    STATE(113), 1,
      sym_token_declaration,
    STATE(116), 1,
      sym_token_type,
    STATE(9), 3,
      aux_sym__token_body,
      sym_child_token_block,
      sym_conditional_token_block,
    ACTIONS(37), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [156] = 7,
    ACTIONS(45), 1,
      anon_sym_when,
    ACTIONS(48), 1,
      sym_identifier,
    ACTIONS(51), 1,
      aux_sym_tokens_block_token2,
    STATE(116), 1,
      sym_token_type,
    STATE(117), 1,
      sym_token_declaration,
    STATE(6), 3,
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
  [185] = 7,
    ACTIONS(31), 1,
      anon_sym_when,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(56), 1,
      aux_sym_tokens_block_token2,
    STATE(116), 1,
      sym_token_type,
    STATE(117), 1,
      sym_token_declaration,
    STATE(6), 3,
      aux_sym__token_body,
      sym_child_token_block,
      sym_conditional_token_block,
    ACTIONS(37), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [214] = 7,
    ACTIONS(41), 1,
      anon_sym_when,
    ACTIONS(43), 1,
      sym_identifier,
    ACTIONS(58), 1,
      anon_sym_RBRACE,
    STATE(113), 1,
      sym_token_declaration,
    STATE(116), 1,
      sym_token_type,
    STATE(9), 3,
      aux_sym__token_body,
      sym_child_token_block,
      sym_conditional_token_block,
    ACTIONS(37), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [243] = 7,
    ACTIONS(51), 1,
      anon_sym_RBRACE,
    ACTIONS(60), 1,
      anon_sym_when,
    ACTIONS(63), 1,
      sym_identifier,
    STATE(113), 1,
      sym_token_declaration,
    STATE(116), 1,
      sym_token_type,
    STATE(9), 3,
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
  [272] = 6,
    ACTIONS(31), 1,
      anon_sym_when,
    ACTIONS(33), 1,
      sym_identifier,
    STATE(116), 1,
      sym_token_type,
    STATE(117), 1,
      sym_token_declaration,
    STATE(4), 3,
      aux_sym__token_body,
      sym_child_token_block,
      sym_conditional_token_block,
    ACTIONS(37), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [298] = 6,
    ACTIONS(31), 1,
      anon_sym_when,
    ACTIONS(33), 1,
      sym_identifier,
    STATE(116), 1,
      sym_token_type,
    STATE(117), 1,
      sym_token_declaration,
    STATE(7), 3,
      aux_sym__token_body,
      sym_child_token_block,
      sym_conditional_token_block,
    ACTIONS(37), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [324] = 6,
    ACTIONS(41), 1,
      anon_sym_when,
    ACTIONS(43), 1,
      sym_identifier,
    STATE(113), 1,
      sym_token_declaration,
    STATE(116), 1,
      sym_token_type,
    STATE(8), 3,
      aux_sym__token_body,
      sym_child_token_block,
      sym_conditional_token_block,
    ACTIONS(37), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [350] = 6,
    ACTIONS(41), 1,
      anon_sym_when,
    ACTIONS(43), 1,
      sym_identifier,
    STATE(113), 1,
      sym_token_declaration,
    STATE(116), 1,
      sym_token_type,
    STATE(5), 3,
      aux_sym__token_body,
      sym_child_token_block,
      sym_conditional_token_block,
    ACTIONS(37), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [376] = 2,
    ACTIONS(68), 1,
      aux_sym_tokens_block_token2,
    ACTIONS(66), 8,
      anon_sym_when,
      sym_identifier,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [390] = 2,
    ACTIONS(72), 1,
      aux_sym_tokens_block_token2,
    ACTIONS(70), 8,
      anon_sym_when,
      sym_identifier,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [404] = 2,
    ACTIONS(74), 1,
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
  [418] = 2,
    ACTIONS(51), 1,
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
  [432] = 2,
    ACTIONS(68), 1,
      anon_sym_RBRACE,
    ACTIONS(66), 8,
      anon_sym_when,
      sym_identifier,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [446] = 2,
    ACTIONS(74), 1,
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
  [460] = 2,
    ACTIONS(51), 1,
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
  [474] = 2,
    ACTIONS(72), 1,
      anon_sym_RBRACE,
    ACTIONS(70), 8,
      anon_sym_when,
      sym_identifier,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [488] = 4,
    ACTIONS(80), 1,
      ts_builtin_sym_end,
    ACTIONS(85), 1,
      anon_sym_tokens,
    ACTIONS(82), 2,
      sym_multi_line_comment,
      sym_single_line_comment,
    STATE(22), 2,
      sym_tokens_block,
      aux_sym_source_file_repeat1,
  [503] = 4,
    ACTIONS(7), 1,
      anon_sym_tokens,
    ACTIONS(88), 1,
      ts_builtin_sym_end,
    ACTIONS(90), 2,
      sym_multi_line_comment,
      sym_single_line_comment,
    STATE(22), 2,
      sym_tokens_block,
      aux_sym_source_file_repeat1,
  [518] = 1,
    ACTIONS(92), 4,
      ts_builtin_sym_end,
      sym_multi_line_comment,
      sym_single_line_comment,
      anon_sym_tokens,
  [525] = 4,
    ACTIONS(94), 1,
      anon_sym_RBRACE,
    ACTIONS(96), 1,
      sym_identifier,
    STATE(25), 1,
      aux_sym_conditional_token_block_repeat1,
    STATE(59), 1,
      sym_token_assignment,
  [538] = 4,
    ACTIONS(99), 1,
      anon_sym_RBRACE,
    ACTIONS(101), 1,
      sym_identifier,
    STATE(25), 1,
      aux_sym_conditional_token_block_repeat1,
    STATE(59), 1,
      sym_token_assignment,
  [551] = 1,
    ACTIONS(103), 4,
      ts_builtin_sym_end,
      sym_multi_line_comment,
      sym_single_line_comment,
      anon_sym_tokens,
  [558] = 4,
    ACTIONS(101), 1,
      sym_identifier,
    ACTIONS(105), 1,
      anon_sym_RBRACE,
    STATE(29), 1,
      aux_sym_conditional_token_block_repeat1,
    STATE(59), 1,
      sym_token_assignment,
  [571] = 4,
    ACTIONS(101), 1,
      sym_identifier,
    ACTIONS(107), 1,
      anon_sym_RBRACE,
    STATE(25), 1,
      aux_sym_conditional_token_block_repeat1,
    STATE(59), 1,
      sym_token_assignment,
  [584] = 2,
    ACTIONS(111), 1,
      aux_sym_hex_token4,
    ACTIONS(109), 3,
      aux_sym_hex_token1,
      aux_sym_hex_token2,
      aux_sym_hex_token3,
  [593] = 4,
    ACTIONS(101), 1,
      sym_identifier,
    ACTIONS(113), 1,
      anon_sym_RBRACE,
    STATE(26), 1,
      aux_sym_conditional_token_block_repeat1,
    STATE(59), 1,
      sym_token_assignment,
  [606] = 3,
    ACTIONS(115), 1,
      sym__newlines,
    ACTIONS(117), 1,
      anon_sym_COMMA,
    STATE(32), 1,
      aux_sym_switch_repeat1,
  [616] = 3,
    ACTIONS(115), 1,
      sym__newlines,
    ACTIONS(120), 1,
      sym_asterisk,
    ACTIONS(122), 1,
      anon_sym_COMMA,
  [626] = 3,
    ACTIONS(124), 1,
      sym__newlines,
    ACTIONS(126), 1,
      anon_sym_COMMA,
    STATE(32), 1,
      aux_sym_switch_repeat1,
  [636] = 3,
    ACTIONS(126), 1,
      anon_sym_COMMA,
    ACTIONS(128), 1,
      sym__newlines,
    STATE(32), 1,
      aux_sym_switch_repeat1,
  [646] = 3,
    ACTIONS(130), 1,
      sym_asterisk,
    ACTIONS(132), 1,
      anon_sym_COMMA,
    STATE(34), 1,
      aux_sym_switch_repeat1,
  [656] = 2,
    ACTIONS(134), 1,
      anon_sym_COMMA,
    ACTIONS(136), 1,
      anon_sym_RPAREN,
  [663] = 2,
    ACTIONS(138), 1,
      anon_sym_COMMA,
    ACTIONS(140), 1,
      anon_sym_RPAREN,
  [670] = 2,
    ACTIONS(142), 1,
      sym__newlines,
    ACTIONS(144), 1,
      anon_sym_COMMA,
  [677] = 2,
    ACTIONS(146), 1,
      sym_negative_assertion,
    ACTIONS(148), 1,
      sym_positive_assertion,
  [684] = 2,
    ACTIONS(150), 1,
      sym_identifier,
    ACTIONS(152), 1,
      aux_sym_tokens_block_token1,
  [691] = 2,
    ACTIONS(154), 1,
      anon_sym_DOLLAR,
    STATE(50), 1,
      sym_token_reference,
  [698] = 1,
    ACTIONS(94), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [703] = 2,
    ACTIONS(156), 1,
      sym_negative_assertion,
    ACTIONS(158), 1,
      sym_positive_assertion,
  [710] = 2,
    ACTIONS(160), 1,
      anon_sym_COMMA,
    ACTIONS(162), 1,
      anon_sym_RPAREN,
  [717] = 2,
    ACTIONS(132), 1,
      anon_sym_COMMA,
    STATE(35), 1,
      aux_sym_switch_repeat1,
  [724] = 2,
    ACTIONS(154), 1,
      anon_sym_DOLLAR,
    STATE(44), 1,
      sym_token_reference,
  [731] = 2,
    ACTIONS(164), 1,
      anon_sym_COMMA,
    ACTIONS(166), 1,
      anon_sym_RPAREN,
  [738] = 2,
    ACTIONS(168), 1,
      anon_sym_COMMA,
    ACTIONS(170), 1,
      anon_sym_RPAREN,
  [745] = 2,
    ACTIONS(172), 1,
      sym_negative_assertion,
    ACTIONS(174), 1,
      sym_positive_assertion,
  [752] = 1,
    ACTIONS(176), 1,
      sym_string,
  [756] = 1,
    ACTIONS(178), 1,
      sym__newlines,
  [760] = 1,
    ACTIONS(180), 1,
      sym_identifier,
  [764] = 1,
    ACTIONS(182), 1,
      sym__newlines,
  [768] = 1,
    ACTIONS(184), 1,
      anon_sym_COMMA,
  [772] = 1,
    ACTIONS(186), 1,
      anon_sym_COMMA,
  [776] = 1,
    ACTIONS(188), 1,
      anon_sym_COMMA,
  [780] = 1,
    ACTIONS(190), 1,
      anon_sym_COLON,
  [784] = 1,
    ACTIONS(192), 1,
      sym__newlines,
  [788] = 1,
    ACTIONS(194), 1,
      sym__newlines,
  [792] = 1,
    ACTIONS(196), 1,
      sym_number,
  [796] = 1,
    ACTIONS(198), 1,
      sym_number,
  [800] = 1,
    ACTIONS(200), 1,
      sym_decimal_range,
  [804] = 1,
    ACTIONS(202), 1,
      sym_decimal_range,
  [808] = 1,
    ACTIONS(204), 1,
      sym_number,
  [812] = 1,
    ACTIONS(206), 1,
      ts_builtin_sym_end,
  [816] = 1,
    ACTIONS(208), 1,
      anon_sym_COMMA,
  [820] = 1,
    ACTIONS(210), 1,
      sym__newlines,
  [824] = 1,
    ACTIONS(212), 1,
      aux_sym__string_token1,
  [828] = 1,
    ACTIONS(214), 1,
      anon_sym_COMMA,
  [832] = 1,
    ACTIONS(216), 1,
      anon_sym_COMMA,
  [836] = 1,
    ACTIONS(218), 1,
      sym__newlines,
  [840] = 1,
    ACTIONS(220), 1,
      anon_sym_COMMA,
  [844] = 1,
    ACTIONS(222), 1,
      anon_sym_COMMA,
  [848] = 1,
    ACTIONS(224), 1,
      anon_sym_COMMA,
  [852] = 1,
    ACTIONS(226), 1,
      sym__newlines,
  [856] = 1,
    ACTIONS(228), 1,
      sym_number,
  [860] = 1,
    ACTIONS(230), 1,
      sym_number,
  [864] = 1,
    ACTIONS(232), 1,
      sym_decimal_range,
  [868] = 1,
    ACTIONS(234), 1,
      sym_decimal_range,
  [872] = 1,
    ACTIONS(236), 1,
      sym_number,
  [876] = 1,
    ACTIONS(238), 1,
      sym_number,
  [880] = 1,
    ACTIONS(240), 1,
      sym_decimal_range,
  [884] = 1,
    ACTIONS(242), 1,
      sym_decimal_range,
  [888] = 1,
    ACTIONS(244), 1,
      sym_dimensional_unit,
  [892] = 1,
    ACTIONS(246), 1,
      sym_number,
  [896] = 1,
    ACTIONS(248), 1,
      sym_decimal_range,
  [900] = 1,
    ACTIONS(250), 1,
      anon_sym_COMMA,
  [904] = 1,
    ACTIONS(252), 1,
      sym_decimal_range,
  [908] = 1,
    ACTIONS(254), 1,
      sym__newlines,
  [912] = 1,
    ACTIONS(256), 1,
      sym_decimal_range,
  [916] = 1,
    ACTIONS(258), 1,
      sym__newlines,
  [920] = 1,
    ACTIONS(260), 1,
      sym_decimal_range,
  [924] = 1,
    ACTIONS(262), 1,
      sym__newlines,
  [928] = 1,
    ACTIONS(264), 1,
      sym_decimal_range,
  [932] = 1,
    ACTIONS(266), 1,
      sym__newlines,
  [936] = 1,
    ACTIONS(268), 1,
      anon_sym_RPAREN,
  [940] = 1,
    ACTIONS(270), 1,
      anon_sym_RPAREN,
  [944] = 1,
    ACTIONS(272), 1,
      anon_sym_RPAREN,
  [948] = 1,
    ACTIONS(274), 1,
      anon_sym_RPAREN,
  [952] = 1,
    ACTIONS(276), 1,
      anon_sym_RPAREN,
  [956] = 1,
    ACTIONS(278), 1,
      sym__newlines,
  [960] = 1,
    ACTIONS(280), 1,
      sym__newlines,
  [964] = 1,
    ACTIONS(282), 1,
      sym__newlines,
  [968] = 1,
    ACTIONS(284), 1,
      sym__newlines,
  [972] = 1,
    ACTIONS(286), 1,
      sym__newlines,
  [976] = 1,
    ACTIONS(288), 1,
      sym_number,
  [980] = 1,
    ACTIONS(290), 1,
      sym__newlines,
  [984] = 1,
    ACTIONS(146), 1,
      sym__newlines,
  [988] = 1,
    ACTIONS(292), 1,
      anon_sym_LBRACE,
  [992] = 1,
    ACTIONS(294), 1,
      sym_identifier,
  [996] = 1,
    ACTIONS(296), 1,
      anon_sym_COLON,
  [1000] = 1,
    ACTIONS(298), 1,
      sym__newlines,
  [1004] = 1,
    ACTIONS(300), 1,
      sym_ref_identifier,
  [1008] = 1,
    ACTIONS(302), 1,
      sym_ref_identifier,
  [1012] = 1,
    ACTIONS(304), 1,
      sym_identifier,
  [1016] = 1,
    ACTIONS(306), 1,
      sym__newlines,
  [1020] = 1,
    ACTIONS(308), 1,
      sym_identifier,
  [1024] = 1,
    ACTIONS(310), 1,
      anon_sym_LBRACE,
  [1028] = 1,
    ACTIONS(312), 1,
      anon_sym_LBRACE,
  [1032] = 1,
    ACTIONS(314), 1,
      sym_identifier,
  [1036] = 1,
    ACTIONS(316), 1,
      anon_sym_LBRACE,
  [1040] = 1,
    ACTIONS(318), 1,
      aux_sym_tokens_block_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 49,
  [SMALL_STATE(4)] = 98,
  [SMALL_STATE(5)] = 127,
  [SMALL_STATE(6)] = 156,
  [SMALL_STATE(7)] = 185,
  [SMALL_STATE(8)] = 214,
  [SMALL_STATE(9)] = 243,
  [SMALL_STATE(10)] = 272,
  [SMALL_STATE(11)] = 298,
  [SMALL_STATE(12)] = 324,
  [SMALL_STATE(13)] = 350,
  [SMALL_STATE(14)] = 376,
  [SMALL_STATE(15)] = 390,
  [SMALL_STATE(16)] = 404,
  [SMALL_STATE(17)] = 418,
  [SMALL_STATE(18)] = 432,
  [SMALL_STATE(19)] = 446,
  [SMALL_STATE(20)] = 460,
  [SMALL_STATE(21)] = 474,
  [SMALL_STATE(22)] = 488,
  [SMALL_STATE(23)] = 503,
  [SMALL_STATE(24)] = 518,
  [SMALL_STATE(25)] = 525,
  [SMALL_STATE(26)] = 538,
  [SMALL_STATE(27)] = 551,
  [SMALL_STATE(28)] = 558,
  [SMALL_STATE(29)] = 571,
  [SMALL_STATE(30)] = 584,
  [SMALL_STATE(31)] = 593,
  [SMALL_STATE(32)] = 606,
  [SMALL_STATE(33)] = 616,
  [SMALL_STATE(34)] = 626,
  [SMALL_STATE(35)] = 636,
  [SMALL_STATE(36)] = 646,
  [SMALL_STATE(37)] = 656,
  [SMALL_STATE(38)] = 663,
  [SMALL_STATE(39)] = 670,
  [SMALL_STATE(40)] = 677,
  [SMALL_STATE(41)] = 684,
  [SMALL_STATE(42)] = 691,
  [SMALL_STATE(43)] = 698,
  [SMALL_STATE(44)] = 703,
  [SMALL_STATE(45)] = 710,
  [SMALL_STATE(46)] = 717,
  [SMALL_STATE(47)] = 724,
  [SMALL_STATE(48)] = 731,
  [SMALL_STATE(49)] = 738,
  [SMALL_STATE(50)] = 745,
  [SMALL_STATE(51)] = 752,
  [SMALL_STATE(52)] = 756,
  [SMALL_STATE(53)] = 760,
  [SMALL_STATE(54)] = 764,
  [SMALL_STATE(55)] = 768,
  [SMALL_STATE(56)] = 772,
  [SMALL_STATE(57)] = 776,
  [SMALL_STATE(58)] = 780,
  [SMALL_STATE(59)] = 784,
  [SMALL_STATE(60)] = 788,
  [SMALL_STATE(61)] = 792,
  [SMALL_STATE(62)] = 796,
  [SMALL_STATE(63)] = 800,
  [SMALL_STATE(64)] = 804,
  [SMALL_STATE(65)] = 808,
  [SMALL_STATE(66)] = 812,
  [SMALL_STATE(67)] = 816,
  [SMALL_STATE(68)] = 820,
  [SMALL_STATE(69)] = 824,
  [SMALL_STATE(70)] = 828,
  [SMALL_STATE(71)] = 832,
  [SMALL_STATE(72)] = 836,
  [SMALL_STATE(73)] = 840,
  [SMALL_STATE(74)] = 844,
  [SMALL_STATE(75)] = 848,
  [SMALL_STATE(76)] = 852,
  [SMALL_STATE(77)] = 856,
  [SMALL_STATE(78)] = 860,
  [SMALL_STATE(79)] = 864,
  [SMALL_STATE(80)] = 868,
  [SMALL_STATE(81)] = 872,
  [SMALL_STATE(82)] = 876,
  [SMALL_STATE(83)] = 880,
  [SMALL_STATE(84)] = 884,
  [SMALL_STATE(85)] = 888,
  [SMALL_STATE(86)] = 892,
  [SMALL_STATE(87)] = 896,
  [SMALL_STATE(88)] = 900,
  [SMALL_STATE(89)] = 904,
  [SMALL_STATE(90)] = 908,
  [SMALL_STATE(91)] = 912,
  [SMALL_STATE(92)] = 916,
  [SMALL_STATE(93)] = 920,
  [SMALL_STATE(94)] = 924,
  [SMALL_STATE(95)] = 928,
  [SMALL_STATE(96)] = 932,
  [SMALL_STATE(97)] = 936,
  [SMALL_STATE(98)] = 940,
  [SMALL_STATE(99)] = 944,
  [SMALL_STATE(100)] = 948,
  [SMALL_STATE(101)] = 952,
  [SMALL_STATE(102)] = 956,
  [SMALL_STATE(103)] = 960,
  [SMALL_STATE(104)] = 964,
  [SMALL_STATE(105)] = 968,
  [SMALL_STATE(106)] = 972,
  [SMALL_STATE(107)] = 976,
  [SMALL_STATE(108)] = 980,
  [SMALL_STATE(109)] = 984,
  [SMALL_STATE(110)] = 988,
  [SMALL_STATE(111)] = 992,
  [SMALL_STATE(112)] = 996,
  [SMALL_STATE(113)] = 1000,
  [SMALL_STATE(114)] = 1004,
  [SMALL_STATE(115)] = 1008,
  [SMALL_STATE(116)] = 1012,
  [SMALL_STATE(117)] = 1016,
  [SMALL_STATE(118)] = 1020,
  [SMALL_STATE(119)] = 1024,
  [SMALL_STATE(120)] = 1028,
  [SMALL_STATE(121)] = 1032,
  [SMALL_STATE(122)] = 1036,
  [SMALL_STATE(123)] = 1040,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__token_body, 2), SHIFT_REPEAT(42),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__token_body, 2), SHIFT_REPEAT(122),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__token_body, 2),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__token_body, 2), SHIFT_REPEAT(118),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__token_body, 2), SHIFT_REPEAT(47),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__token_body, 2), SHIFT_REPEAT(120),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_child_token_block, 4),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child_token_block, 4),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional_token_block, 6),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_token_block, 6),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_token_block, 7),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional_token_block, 7),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__token_body, 2),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(22),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(41),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tokens_block, 5),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conditional_token_block_repeat1, 2),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conditional_token_block_repeat1, 2), SHIFT_REPEAT(58),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tokens_block, 4),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_switch_repeat1, 2),
  [117] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_switch_repeat1, 2), SHIFT_REPEAT(53),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_switch_repeat1, 2),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch, 2),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch, 3),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_switch_repeat1, 3),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_switch_repeat1, 3),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_token_reference, 2),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_token_reference, 2),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hsl, 7, .production_id = 1),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dimension, 2),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string, 3),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [206] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hex, 2),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_token_declaration, 4),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_token_assignment, 3),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hsv, 7, .production_id = 2),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oklab, 7, .production_id = 3),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_p3, 7, .production_id = 4),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rgb, 7, .production_id = 4),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hsl, 9, .production_id = 1),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hsv, 9, .production_id = 2),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oklab, 9, .production_id = 3),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_p3, 9, .production_id = 4),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rgb, 9, .production_id = 4),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_token_value, 1),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_token_type, 1),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
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
