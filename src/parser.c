#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 114
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 61
#define ALIAS_COUNT 9
#define TOKEN_COUNT 40
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
  sym_positive_assertion = 24,
  sym_ref_identifier = 25,
  aux_sym_rgb_token1 = 26,
  sym_single_line_comment = 27,
  sym_string = 28,
  anon_sym_COLON = 29,
  anon_sym_tokens = 30,
  aux_sym_tokens_block_token1 = 31,
  aux_sym_tokens_block_token2 = 32,
  anon_sym_DOLLAR = 33,
  anon_sym_text = 34,
  anon_sym_color = 35,
  anon_sym_asset = 36,
  anon_sym_switch = 37,
  anon_sym_dimension = 38,
  anon_sym_range = 39,
  sym_source_file = 40,
  sym__string = 41,
  aux_sym__token_body = 42,
  sym_child_token_block = 43,
  sym_conditional_token_block = 44,
  sym_dimension = 45,
  sym_hex = 46,
  sym_hsl = 47,
  sym_hsv = 48,
  sym_oklab = 49,
  sym_rgb = 50,
  sym_switch = 51,
  sym_token_assignment = 52,
  sym_tokens_block = 53,
  sym_token_declaration = 54,
  sym_token_reference = 55,
  sym_token_type = 56,
  sym_token_value = 57,
  aux_sym_source_file_repeat1 = 58,
  aux_sym_conditional_token_block_repeat1 = 59,
  aux_sym_switch_repeat1 = 60,
  alias_sym_a_channel = 61,
  alias_sym_b_channel = 62,
  alias_sym_blue_channel = 63,
  alias_sym_green_channel = 64,
  alias_sym_hue_channel = 65,
  alias_sym_lightness_channel = 66,
  alias_sym_red_channel = 67,
  alias_sym_saturation_channel = 68,
  alias_sym_value_channel = 69,
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
  [8] = 6,
  [9] = 5,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 11,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 14,
  [19] = 17,
  [20] = 15,
  [21] = 16,
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
  [47] = 47,
  [48] = 39,
  [49] = 42,
  [50] = 50,
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
  [99] = 38,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 104,
  [106] = 106,
  [107] = 103,
  [108] = 108,
  [109] = 100,
  [110] = 110,
  [111] = 101,
  [112] = 110,
  [113] = 113,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(97);
      if (lookahead == '"') ADVANCE(99);
      if (lookahead == '#') ADVANCE(114);
      if (lookahead == '$') ADVANCE(176);
      if (lookahead == '%') ADVANCE(113);
      if (lookahead == ')') ADVANCE(121);
      if (lookahead == '*') ADVANCE(101);
      if (lookahead == ',') ADVANCE(120);
      if (lookahead == '-') ADVANCE(86);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == '0') ADVANCE(109);
      if (lookahead == '1') ADVANCE(106);
      if (lookahead == ':') ADVANCE(172);
      if (lookahead == 'a') ADVANCE(70);
      if (lookahead == 'c') ADVANCE(80);
      if (lookahead == 'd') ADVANCE(40);
      if (lookahead == 'e') ADVANCE(83);
      if (lookahead == 'h') ADVANCE(64);
      if (lookahead == 'i') ADVANCE(51);
      if (lookahead == 'm') ADVANCE(48);
      if (lookahead == 'o') ADVANCE(43);
      if (lookahead == 'p') ADVANCE(84);
      if (lookahead == 'r') ADVANCE(18);
      if (lookahead == 's') ADVANCE(75);
      if (lookahead == 't') ADVANCE(26);
      if (lookahead == 'v') ADVANCE(82);
      if (lookahead == 'w') ADVANCE(35);
      if (lookahead == '{') ADVANCE(102);
      if (lookahead == '}') ADVANCE(103);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(163);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(98);
      if (lookahead == '*') ADVANCE(101);
      if (lookahead == ',') ADVANCE(120);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(99);
      if (lookahead == '#') ADVANCE(114);
      if (lookahead == '$') ADVANCE(176);
      if (lookahead == '-') ADVANCE(86);
      if (lookahead == '/') ADVANCE(95);
      if (lookahead == 'h') ADVANCE(66);
      if (lookahead == 'o') ADVANCE(42);
      if (lookahead == 'r') ADVANCE(33);
      if (lookahead == '{') ADVANCE(174);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(163);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 3:
      if (lookahead == '(') ADVANCE(119);
      if (lookahead == 'a') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == '(') ADVANCE(119);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '(') ADVANCE(122);
      if (lookahead == 'a') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == '(') ADVANCE(122);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '(') ADVANCE(168);
      if (lookahead == 'a') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == '(') ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '(') ADVANCE(165);
      if (lookahead == 'a') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(10);
      END_STATE();
    case 10:
      if (lookahead == '(') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '*') ADVANCE(14);
      if (lookahead == '/') ADVANCE(169);
      END_STATE();
    case 12:
      if (lookahead == '*') ADVANCE(14);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 13:
      if (lookahead == '*') ADVANCE(13);
      if (lookahead == '/') ADVANCE(161);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 14:
      if (lookahead == '*') ADVANCE(13);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == '0') ADVANCE(110);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(164);
      END_STATE();
    case 16:
      if (lookahead == '0') ADVANCE(108);
      if (lookahead == '1') ADVANCE(107);
      if (lookahead == 'a') ADVANCE(67);
      if (lookahead == 'c') ADVANCE(60);
      if (lookahead == 'd') ADVANCE(39);
      if (lookahead == 'r') ADVANCE(19);
      if (lookahead == 's') ADVANCE(76);
      if (lookahead == 't') ADVANCE(28);
      if (lookahead == 'w') ADVANCE(37);
      if (lookahead == '}') ADVANCE(175);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 17:
      if (lookahead == '0') ADVANCE(111);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(52);
      if (lookahead == 'e') ADVANCE(48);
      if (lookahead == 'g') ADVANCE(23);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(147);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(77);
      if (lookahead == 'i') ADVANCE(50);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(67);
      if (lookahead == 'c') ADVANCE(60);
      if (lookahead == 'd') ADVANCE(39);
      if (lookahead == 'r') ADVANCE(19);
      if (lookahead == 's') ADVANCE(76);
      if (lookahead == 't') ADVANCE(28);
      if (lookahead == 'w') ADVANCE(37);
      if (lookahead == '}') ADVANCE(103);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(24);
      END_STATE();
    case 23:
      if (lookahead == 'b') ADVANCE(7);
      END_STATE();
    case 24:
      if (lookahead == 'b') ADVANCE(9);
      END_STATE();
    case 25:
      if (lookahead == 'c') ADVANCE(36);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(78);
      if (lookahead == 'o') ADVANCE(44);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(187);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(159);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 33:
      if (lookahead == 'g') ADVANCE(132);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 34:
      if (lookahead == 'g') ADVANCE(27);
      END_STATE();
    case 35:
      if (lookahead == 'h') ADVANCE(30);
      END_STATE();
    case 36:
      if (lookahead == 'h') ADVANCE(183);
      END_STATE();
    case 37:
      if (lookahead == 'h') ADVANCE(136);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 38:
      if (lookahead == 'i') ADVANCE(71);
      END_STATE();
    case 39:
      if (lookahead == 'i') ADVANCE(146);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 40:
      if (lookahead == 'i') ADVANCE(49);
      if (lookahead == 'v') ADVANCE(81);
      END_STATE();
    case 41:
      if (lookahead == 'i') ADVANCE(62);
      END_STATE();
    case 42:
      if (lookahead == 'k') ADVANCE(144);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 43:
      if (lookahead == 'k') ADVANCE(47);
      END_STATE();
    case 44:
      if (lookahead == 'k') ADVANCE(32);
      END_STATE();
    case 45:
      if (lookahead == 'l') ADVANCE(58);
      END_STATE();
    case 46:
      if (lookahead == 'l') ADVANCE(3);
      if (lookahead == 'v') ADVANCE(5);
      END_STATE();
    case 47:
      if (lookahead == 'l') ADVANCE(22);
      END_STATE();
    case 48:
      if (lookahead == 'm') ADVANCE(113);
      END_STATE();
    case 49:
      if (lookahead == 'm') ADVANCE(31);
      END_STATE();
    case 50:
      if (lookahead == 'n') ADVANCE(113);
      END_STATE();
    case 51:
      if (lookahead == 'n') ADVANCE(113);
      if (lookahead == 's') ADVANCE(166);
      END_STATE();
    case 52:
      if (lookahead == 'n') ADVANCE(34);
      END_STATE();
    case 53:
      if (lookahead == 'n') ADVANCE(104);
      END_STATE();
    case 54:
      if (lookahead == 'n') ADVANCE(185);
      END_STATE();
    case 55:
      if (lookahead == 'n') ADVANCE(61);
      END_STATE();
    case 56:
      if (lookahead == 'n') ADVANCE(68);
      END_STATE();
    case 57:
      if (lookahead == 'n') ADVANCE(65);
      END_STATE();
    case 58:
      if (lookahead == 'o') ADVANCE(63);
      END_STATE();
    case 59:
      if (lookahead == 'o') ADVANCE(44);
      END_STATE();
    case 60:
      if (lookahead == 'o') ADVANCE(145);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 61:
      if (lookahead == 'o') ADVANCE(74);
      END_STATE();
    case 62:
      if (lookahead == 'o') ADVANCE(54);
      END_STATE();
    case 63:
      if (lookahead == 'r') ADVANCE(179);
      END_STATE();
    case 64:
      if (lookahead == 's') ADVANCE(46);
      END_STATE();
    case 65:
      if (lookahead == 's') ADVANCE(173);
      END_STATE();
    case 66:
      if (lookahead == 's') ADVANCE(143);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 67:
      if (lookahead == 's') ADVANCE(155);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 68:
      if (lookahead == 's') ADVANCE(41);
      END_STATE();
    case 69:
      if (lookahead == 's') ADVANCE(29);
      END_STATE();
    case 70:
      if (lookahead == 's') ADVANCE(69);
      END_STATE();
    case 71:
      if (lookahead == 't') ADVANCE(25);
      END_STATE();
    case 72:
      if (lookahead == 't') ADVANCE(177);
      END_STATE();
    case 73:
      if (lookahead == 't') ADVANCE(181);
      END_STATE();
    case 74:
      if (lookahead == 't') ADVANCE(162);
      END_STATE();
    case 75:
      if (lookahead == 'w') ADVANCE(38);
      END_STATE();
    case 76:
      if (lookahead == 'w') ADVANCE(141);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 77:
      if (lookahead == 'x') ADVANCE(113);
      END_STATE();
    case 78:
      if (lookahead == 'x') ADVANCE(72);
      END_STATE();
    case 79:
      if (lookahead == '{') ADVANCE(174);
      if (lookahead == '}') ADVANCE(103);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(79)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 80:
      if (lookahead == 'h' ||
          lookahead == 'm') ADVANCE(113);
      if (lookahead == 'o') ADVANCE(45);
      END_STATE();
    case 81:
      if (lookahead == 'h' ||
          lookahead == 'w') ADVANCE(113);
      END_STATE();
    case 82:
      if (lookahead == 'h' ||
          lookahead == 'w') ADVANCE(113);
      if (lookahead == 'm') ADVANCE(20);
      END_STATE();
    case 83:
      if (lookahead == 'm' ||
          lookahead == 'x') ADVANCE(113);
      END_STATE();
    case 84:
      if (lookahead == 'c' ||
          lookahead == 't' ||
          lookahead == 'x') ADVANCE(113);
      END_STATE();
    case 85:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(85)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 86:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(163);
      END_STATE();
    case 87:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      END_STATE();
    case 88:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(164);
      END_STATE();
    case 89:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(115);
      END_STATE();
    case 90:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(117);
      END_STATE();
    case 91:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(118);
      END_STATE();
    case 92:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(89);
      END_STATE();
    case 93:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 94:
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 95:
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 96:
      if (eof) ADVANCE(97);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == 't') ADVANCE(59);
      if (lookahead == '{') ADVANCE(102);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(96)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(92);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym__newlines);
      if (lookahead == '\n') ADVANCE(98);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym__string_token1);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_asset_path);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_asterisk);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_when);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_when);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_decimal_range);
      if (lookahead == '.') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(163);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_decimal_range);
      if (lookahead == '.') ADVANCE(17);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_decimal_range);
      if (lookahead == '.') ADVANCE(87);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_decimal_range);
      if (lookahead == '.') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(163);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_decimal_range);
      if (lookahead == '0') ADVANCE(110);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(164);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_decimal_range);
      if (lookahead == '0') ADVANCE(111);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_decimal_range);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_dimensional_unit);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_hex_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(116);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_hex_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(90);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_hex_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(91);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_hex_token4);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_hsl_token1);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_hsv_token1);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(119);
      if (lookahead == 'a') ADVANCE(124);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(4);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(119);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(4);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(122);
      if (lookahead == 'a') ADVANCE(126);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(6);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(122);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(6);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(168);
      if (lookahead == 'a') ADVANCE(128);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(8);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(8);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(165);
      if (lookahead == 'a') ADVANCE(130);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(10);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(10);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(133);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(127);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(129);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(140);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(188);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(148);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(150);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(158);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(135);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(184);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(156);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(152);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(123);
      if (lookahead == 'v') ADVANCE(125);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(131);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(151);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(137);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(139);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(105);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(186);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(154);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(153);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(149);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(180);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(142);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(138);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(134);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(178);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(182);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(157);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_multi_line_comment);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_negative_assertion);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(163);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(164);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_oklab_token1);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_positive_assertion);
      if (lookahead == ' ') ADVANCE(55);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_ref_identifier);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_rgb_token1);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_single_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(169);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(170);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\' &&
          lookahead != '^' &&
          lookahead != 'n') ADVANCE(171);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_string);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\' &&
          lookahead != '^' &&
          lookahead != 'n') ADVANCE(171);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_tokens);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_tokens_block_token1);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_tokens_block_token2);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_text);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_text);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_color);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_color);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_asset);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_asset);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_switch);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_switch);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_dimension);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_dimension);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_range);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_range);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 96},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 16},
  [5] = {.lex_state = 16},
  [6] = {.lex_state = 21},
  [7] = {.lex_state = 16},
  [8] = {.lex_state = 21},
  [9] = {.lex_state = 21},
  [10] = {.lex_state = 16},
  [11] = {.lex_state = 16},
  [12] = {.lex_state = 16},
  [13] = {.lex_state = 16},
  [14] = {.lex_state = 16},
  [15] = {.lex_state = 21},
  [16] = {.lex_state = 16},
  [17] = {.lex_state = 21},
  [18] = {.lex_state = 21},
  [19] = {.lex_state = 16},
  [20] = {.lex_state = 16},
  [21] = {.lex_state = 21},
  [22] = {.lex_state = 96},
  [23] = {.lex_state = 96},
  [24] = {.lex_state = 96},
  [25] = {.lex_state = 79},
  [26] = {.lex_state = 79},
  [27] = {.lex_state = 96},
  [28] = {.lex_state = 79},
  [29] = {.lex_state = 79},
  [30] = {.lex_state = 96},
  [31] = {.lex_state = 79},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 79},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 79},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 16},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 79},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 16},
  [62] = {.lex_state = 2},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 2},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 2},
  [74] = {.lex_state = 2},
  [75] = {.lex_state = 16},
  [76] = {.lex_state = 2},
  [77] = {.lex_state = 16},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 2},
  [80] = {.lex_state = 2},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 16},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 16},
  [86] = {.lex_state = 1},
  [87] = {.lex_state = 16},
  [88] = {.lex_state = 1},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 1},
  [94] = {.lex_state = 1},
  [95] = {.lex_state = 1},
  [96] = {.lex_state = 1},
  [97] = {.lex_state = 1},
  [98] = {.lex_state = 170},
  [99] = {.lex_state = 1},
  [100] = {.lex_state = 96},
  [101] = {.lex_state = 79},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 1},
  [104] = {.lex_state = 85},
  [105] = {.lex_state = 85},
  [106] = {.lex_state = 79},
  [107] = {.lex_state = 1},
  [108] = {.lex_state = 79},
  [109] = {.lex_state = 96},
  [110] = {.lex_state = 96},
  [111] = {.lex_state = 79},
  [112] = {.lex_state = 96},
  [113] = {.lex_state = 2},
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
    [sym_source_file] = STATE(58),
    [sym_tokens_block] = STATE(23),
    [aux_sym_source_file_repeat1] = STATE(23),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_multi_line_comment] = ACTIONS(5),
    [sym_single_line_comment] = ACTIONS(5),
    [anon_sym_tokens] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 12,
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
      aux_sym_rgb_token1,
    ACTIONS(27), 1,
      anon_sym_DOLLAR,
    STATE(72), 1,
      sym_token_value,
    STATE(97), 9,
      sym__string,
      sym_dimension,
      sym_hex,
      sym_hsl,
      sym_hsv,
      sym_oklab,
      sym_rgb,
      sym_switch,
      sym_token_reference,
  [45] = 12,
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
      aux_sym_rgb_token1,
    ACTIONS(27), 1,
      anon_sym_DOLLAR,
    STATE(66), 1,
      sym_token_value,
    STATE(97), 9,
      sym__string,
      sym_dimension,
      sym_hex,
      sym_hsl,
      sym_hsv,
      sym_oklab,
      sym_rgb,
      sym_switch,
      sym_token_reference,
  [90] = 7,
    ACTIONS(29), 1,
      anon_sym_when,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(33), 1,
      aux_sym_tokens_block_token2,
    STATE(106), 1,
      sym_token_type,
    STATE(107), 1,
      sym_token_declaration,
    STATE(5), 3,
      aux_sym__token_body,
      sym_child_token_block,
      sym_conditional_token_block,
    ACTIONS(35), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [119] = 7,
    ACTIONS(37), 1,
      anon_sym_when,
    ACTIONS(40), 1,
      sym_identifier,
    ACTIONS(43), 1,
      aux_sym_tokens_block_token2,
    STATE(106), 1,
      sym_token_type,
    STATE(107), 1,
      sym_token_declaration,
    STATE(5), 3,
      aux_sym__token_body,
      sym_child_token_block,
      sym_conditional_token_block,
    ACTIONS(45), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [148] = 7,
    ACTIONS(48), 1,
      anon_sym_RBRACE,
    ACTIONS(50), 1,
      anon_sym_when,
    ACTIONS(52), 1,
      sym_identifier,
    STATE(103), 1,
      sym_token_declaration,
    STATE(106), 1,
      sym_token_type,
    STATE(9), 3,
      aux_sym__token_body,
      sym_child_token_block,
      sym_conditional_token_block,
    ACTIONS(35), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [177] = 7,
    ACTIONS(29), 1,
      anon_sym_when,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(54), 1,
      aux_sym_tokens_block_token2,
    STATE(106), 1,
      sym_token_type,
    STATE(107), 1,
      sym_token_declaration,
    STATE(5), 3,
      aux_sym__token_body,
      sym_child_token_block,
      sym_conditional_token_block,
    ACTIONS(35), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [206] = 7,
    ACTIONS(50), 1,
      anon_sym_when,
    ACTIONS(52), 1,
      sym_identifier,
    ACTIONS(56), 1,
      anon_sym_RBRACE,
    STATE(103), 1,
      sym_token_declaration,
    STATE(106), 1,
      sym_token_type,
    STATE(9), 3,
      aux_sym__token_body,
      sym_child_token_block,
      sym_conditional_token_block,
    ACTIONS(35), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [235] = 7,
    ACTIONS(43), 1,
      anon_sym_RBRACE,
    ACTIONS(58), 1,
      anon_sym_when,
    ACTIONS(61), 1,
      sym_identifier,
    STATE(103), 1,
      sym_token_declaration,
    STATE(106), 1,
      sym_token_type,
    STATE(9), 3,
      aux_sym__token_body,
      sym_child_token_block,
      sym_conditional_token_block,
    ACTIONS(45), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [264] = 6,
    ACTIONS(29), 1,
      anon_sym_when,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(106), 1,
      sym_token_type,
    STATE(107), 1,
      sym_token_declaration,
    STATE(4), 3,
      aux_sym__token_body,
      sym_child_token_block,
      sym_conditional_token_block,
    ACTIONS(35), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [290] = 6,
    ACTIONS(50), 1,
      anon_sym_when,
    ACTIONS(52), 1,
      sym_identifier,
    STATE(103), 1,
      sym_token_declaration,
    STATE(106), 1,
      sym_token_type,
    STATE(8), 3,
      aux_sym__token_body,
      sym_child_token_block,
      sym_conditional_token_block,
    ACTIONS(35), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [316] = 6,
    ACTIONS(29), 1,
      anon_sym_when,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(106), 1,
      sym_token_type,
    STATE(107), 1,
      sym_token_declaration,
    STATE(7), 3,
      aux_sym__token_body,
      sym_child_token_block,
      sym_conditional_token_block,
    ACTIONS(35), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [342] = 6,
    ACTIONS(50), 1,
      anon_sym_when,
    ACTIONS(52), 1,
      sym_identifier,
    STATE(103), 1,
      sym_token_declaration,
    STATE(106), 1,
      sym_token_type,
    STATE(6), 3,
      aux_sym__token_body,
      sym_child_token_block,
      sym_conditional_token_block,
    ACTIONS(35), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [368] = 2,
    ACTIONS(66), 1,
      aux_sym_tokens_block_token2,
    ACTIONS(64), 8,
      anon_sym_when,
      sym_identifier,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [382] = 2,
    ACTIONS(43), 1,
      anon_sym_RBRACE,
    ACTIONS(68), 8,
      anon_sym_when,
      sym_identifier,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [396] = 2,
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
  [410] = 2,
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
  [424] = 2,
    ACTIONS(66), 1,
      anon_sym_RBRACE,
    ACTIONS(64), 8,
      anon_sym_when,
      sym_identifier,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [438] = 2,
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
  [452] = 2,
    ACTIONS(43), 1,
      aux_sym_tokens_block_token2,
    ACTIONS(68), 8,
      anon_sym_when,
      sym_identifier,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [466] = 2,
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
  [480] = 4,
    ACTIONS(78), 1,
      ts_builtin_sym_end,
    ACTIONS(83), 1,
      anon_sym_tokens,
    ACTIONS(80), 2,
      sym_multi_line_comment,
      sym_single_line_comment,
    STATE(22), 2,
      sym_tokens_block,
      aux_sym_source_file_repeat1,
  [495] = 4,
    ACTIONS(7), 1,
      anon_sym_tokens,
    ACTIONS(86), 1,
      ts_builtin_sym_end,
    ACTIONS(88), 2,
      sym_multi_line_comment,
      sym_single_line_comment,
    STATE(22), 2,
      sym_tokens_block,
      aux_sym_source_file_repeat1,
  [510] = 1,
    ACTIONS(90), 4,
      ts_builtin_sym_end,
      sym_multi_line_comment,
      sym_single_line_comment,
      anon_sym_tokens,
  [517] = 4,
    ACTIONS(92), 1,
      anon_sym_RBRACE,
    ACTIONS(94), 1,
      sym_identifier,
    STATE(25), 1,
      aux_sym_conditional_token_block_repeat1,
    STATE(55), 1,
      sym_token_assignment,
  [530] = 4,
    ACTIONS(97), 1,
      anon_sym_RBRACE,
    ACTIONS(99), 1,
      sym_identifier,
    STATE(25), 1,
      aux_sym_conditional_token_block_repeat1,
    STATE(55), 1,
      sym_token_assignment,
  [543] = 1,
    ACTIONS(101), 4,
      ts_builtin_sym_end,
      sym_multi_line_comment,
      sym_single_line_comment,
      anon_sym_tokens,
  [550] = 4,
    ACTIONS(99), 1,
      sym_identifier,
    ACTIONS(103), 1,
      anon_sym_RBRACE,
    STATE(29), 1,
      aux_sym_conditional_token_block_repeat1,
    STATE(55), 1,
      sym_token_assignment,
  [563] = 4,
    ACTIONS(99), 1,
      sym_identifier,
    ACTIONS(105), 1,
      anon_sym_RBRACE,
    STATE(25), 1,
      aux_sym_conditional_token_block_repeat1,
    STATE(55), 1,
      sym_token_assignment,
  [576] = 2,
    ACTIONS(109), 1,
      aux_sym_hex_token4,
    ACTIONS(107), 3,
      aux_sym_hex_token1,
      aux_sym_hex_token2,
      aux_sym_hex_token3,
  [585] = 4,
    ACTIONS(99), 1,
      sym_identifier,
    ACTIONS(111), 1,
      anon_sym_RBRACE,
    STATE(26), 1,
      aux_sym_conditional_token_block_repeat1,
    STATE(55), 1,
      sym_token_assignment,
  [598] = 3,
    ACTIONS(113), 1,
      sym__newlines,
    ACTIONS(115), 1,
      anon_sym_COMMA,
    STATE(35), 1,
      aux_sym_switch_repeat1,
  [608] = 3,
    ACTIONS(115), 1,
      anon_sym_COMMA,
    ACTIONS(117), 1,
      sym__newlines,
    STATE(35), 1,
      aux_sym_switch_repeat1,
  [618] = 3,
    ACTIONS(119), 1,
      sym__newlines,
    ACTIONS(121), 1,
      sym_asterisk,
    ACTIONS(123), 1,
      anon_sym_COMMA,
  [628] = 3,
    ACTIONS(119), 1,
      sym__newlines,
    ACTIONS(125), 1,
      anon_sym_COMMA,
    STATE(35), 1,
      aux_sym_switch_repeat1,
  [638] = 3,
    ACTIONS(128), 1,
      sym_asterisk,
    ACTIONS(130), 1,
      anon_sym_COMMA,
    STATE(32), 1,
      aux_sym_switch_repeat1,
  [648] = 2,
    ACTIONS(132), 1,
      anon_sym_COMMA,
    ACTIONS(134), 1,
      anon_sym_RPAREN,
  [655] = 2,
    ACTIONS(136), 1,
      sym_negative_assertion,
    ACTIONS(138), 1,
      sym_positive_assertion,
  [662] = 2,
    ACTIONS(140), 1,
      anon_sym_DOLLAR,
    STATE(49), 1,
      sym_token_reference,
  [669] = 2,
    ACTIONS(142), 1,
      sym__newlines,
    ACTIONS(144), 1,
      anon_sym_COMMA,
  [676] = 1,
    ACTIONS(92), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [681] = 2,
    ACTIONS(146), 1,
      sym_negative_assertion,
    ACTIONS(148), 1,
      sym_positive_assertion,
  [688] = 2,
    ACTIONS(150), 1,
      anon_sym_COMMA,
    ACTIONS(152), 1,
      anon_sym_RPAREN,
  [695] = 2,
    ACTIONS(154), 1,
      anon_sym_COMMA,
    ACTIONS(156), 1,
      anon_sym_RPAREN,
  [702] = 2,
    ACTIONS(130), 1,
      anon_sym_COMMA,
    STATE(33), 1,
      aux_sym_switch_repeat1,
  [709] = 2,
    ACTIONS(158), 1,
      anon_sym_COMMA,
    ACTIONS(160), 1,
      anon_sym_RPAREN,
  [716] = 2,
    ACTIONS(162), 1,
      sym_identifier,
    ACTIONS(164), 1,
      aux_sym_tokens_block_token1,
  [723] = 2,
    ACTIONS(140), 1,
      anon_sym_DOLLAR,
    STATE(42), 1,
      sym_token_reference,
  [730] = 2,
    ACTIONS(166), 1,
      sym_negative_assertion,
    ACTIONS(168), 1,
      sym_positive_assertion,
  [737] = 1,
    ACTIONS(170), 1,
      sym_number,
  [741] = 1,
    ACTIONS(172), 1,
      sym_decimal_range,
  [745] = 1,
    ACTIONS(174), 1,
      anon_sym_COMMA,
  [749] = 1,
    ACTIONS(176), 1,
      anon_sym_COMMA,
  [753] = 1,
    ACTIONS(178), 1,
      anon_sym_COLON,
  [757] = 1,
    ACTIONS(180), 1,
      sym__newlines,
  [761] = 1,
    ACTIONS(182), 1,
      sym__newlines,
  [765] = 1,
    ACTIONS(184), 1,
      sym_number,
  [769] = 1,
    ACTIONS(186), 1,
      ts_builtin_sym_end,
  [773] = 1,
    ACTIONS(188), 1,
      sym_identifier,
  [777] = 1,
    ACTIONS(190), 1,
      anon_sym_COMMA,
  [781] = 1,
    ACTIONS(192), 1,
      sym_decimal_range,
  [785] = 1,
    ACTIONS(194), 1,
      sym_number,
  [789] = 1,
    ACTIONS(196), 1,
      anon_sym_COMMA,
  [793] = 1,
    ACTIONS(198), 1,
      sym__newlines,
  [797] = 1,
    ACTIONS(200), 1,
      aux_sym__string_token1,
  [801] = 1,
    ACTIONS(202), 1,
      sym__newlines,
  [805] = 1,
    ACTIONS(204), 1,
      anon_sym_COMMA,
  [809] = 1,
    ACTIONS(206), 1,
      anon_sym_COMMA,
  [813] = 1,
    ACTIONS(208), 1,
      sym_number,
  [817] = 1,
    ACTIONS(210), 1,
      anon_sym_COMMA,
  [821] = 1,
    ACTIONS(212), 1,
      anon_sym_COMMA,
  [825] = 1,
    ACTIONS(214), 1,
      sym__newlines,
  [829] = 1,
    ACTIONS(216), 1,
      sym_number,
  [833] = 1,
    ACTIONS(218), 1,
      sym_number,
  [837] = 1,
    ACTIONS(220), 1,
      sym_decimal_range,
  [841] = 1,
    ACTIONS(222), 1,
      sym_number,
  [845] = 1,
    ACTIONS(224), 1,
      sym_decimal_range,
  [849] = 1,
    ACTIONS(226), 1,
      sym_dimensional_unit,
  [853] = 1,
    ACTIONS(228), 1,
      sym_number,
  [857] = 1,
    ACTIONS(230), 1,
      sym_number,
  [861] = 1,
    ACTIONS(232), 1,
      sym__newlines,
  [865] = 1,
    ACTIONS(234), 1,
      sym__newlines,
  [869] = 1,
    ACTIONS(236), 1,
      sym_decimal_range,
  [873] = 1,
    ACTIONS(238), 1,
      sym__newlines,
  [877] = 1,
    ACTIONS(240), 1,
      sym_decimal_range,
  [881] = 1,
    ACTIONS(242), 1,
      sym__newlines,
  [885] = 1,
    ACTIONS(244), 1,
      sym_decimal_range,
  [889] = 1,
    ACTIONS(246), 1,
      sym__newlines,
  [893] = 1,
    ACTIONS(248), 1,
      anon_sym_RPAREN,
  [897] = 1,
    ACTIONS(250), 1,
      anon_sym_RPAREN,
  [901] = 1,
    ACTIONS(252), 1,
      anon_sym_RPAREN,
  [905] = 1,
    ACTIONS(254), 1,
      anon_sym_RPAREN,
  [909] = 1,
    ACTIONS(256), 1,
      sym__newlines,
  [913] = 1,
    ACTIONS(258), 1,
      sym__newlines,
  [917] = 1,
    ACTIONS(260), 1,
      sym__newlines,
  [921] = 1,
    ACTIONS(262), 1,
      sym__newlines,
  [925] = 1,
    ACTIONS(264), 1,
      sym__newlines,
  [929] = 1,
    ACTIONS(266), 1,
      sym_string,
  [933] = 1,
    ACTIONS(136), 1,
      sym__newlines,
  [937] = 1,
    ACTIONS(268), 1,
      anon_sym_LBRACE,
  [941] = 1,
    ACTIONS(270), 1,
      sym_identifier,
  [945] = 1,
    ACTIONS(272), 1,
      anon_sym_COLON,
  [949] = 1,
    ACTIONS(274), 1,
      sym__newlines,
  [953] = 1,
    ACTIONS(276), 1,
      sym_ref_identifier,
  [957] = 1,
    ACTIONS(278), 1,
      sym_ref_identifier,
  [961] = 1,
    ACTIONS(280), 1,
      sym_identifier,
  [965] = 1,
    ACTIONS(282), 1,
      sym__newlines,
  [969] = 1,
    ACTIONS(284), 1,
      sym_identifier,
  [973] = 1,
    ACTIONS(286), 1,
      anon_sym_LBRACE,
  [977] = 1,
    ACTIONS(288), 1,
      anon_sym_LBRACE,
  [981] = 1,
    ACTIONS(290), 1,
      sym_identifier,
  [985] = 1,
    ACTIONS(292), 1,
      anon_sym_LBRACE,
  [989] = 1,
    ACTIONS(294), 1,
      aux_sym_tokens_block_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 45,
  [SMALL_STATE(4)] = 90,
  [SMALL_STATE(5)] = 119,
  [SMALL_STATE(6)] = 148,
  [SMALL_STATE(7)] = 177,
  [SMALL_STATE(8)] = 206,
  [SMALL_STATE(9)] = 235,
  [SMALL_STATE(10)] = 264,
  [SMALL_STATE(11)] = 290,
  [SMALL_STATE(12)] = 316,
  [SMALL_STATE(13)] = 342,
  [SMALL_STATE(14)] = 368,
  [SMALL_STATE(15)] = 382,
  [SMALL_STATE(16)] = 396,
  [SMALL_STATE(17)] = 410,
  [SMALL_STATE(18)] = 424,
  [SMALL_STATE(19)] = 438,
  [SMALL_STATE(20)] = 452,
  [SMALL_STATE(21)] = 466,
  [SMALL_STATE(22)] = 480,
  [SMALL_STATE(23)] = 495,
  [SMALL_STATE(24)] = 510,
  [SMALL_STATE(25)] = 517,
  [SMALL_STATE(26)] = 530,
  [SMALL_STATE(27)] = 543,
  [SMALL_STATE(28)] = 550,
  [SMALL_STATE(29)] = 563,
  [SMALL_STATE(30)] = 576,
  [SMALL_STATE(31)] = 585,
  [SMALL_STATE(32)] = 598,
  [SMALL_STATE(33)] = 608,
  [SMALL_STATE(34)] = 618,
  [SMALL_STATE(35)] = 628,
  [SMALL_STATE(36)] = 638,
  [SMALL_STATE(37)] = 648,
  [SMALL_STATE(38)] = 655,
  [SMALL_STATE(39)] = 662,
  [SMALL_STATE(40)] = 669,
  [SMALL_STATE(41)] = 676,
  [SMALL_STATE(42)] = 681,
  [SMALL_STATE(43)] = 688,
  [SMALL_STATE(44)] = 695,
  [SMALL_STATE(45)] = 702,
  [SMALL_STATE(46)] = 709,
  [SMALL_STATE(47)] = 716,
  [SMALL_STATE(48)] = 723,
  [SMALL_STATE(49)] = 730,
  [SMALL_STATE(50)] = 737,
  [SMALL_STATE(51)] = 741,
  [SMALL_STATE(52)] = 745,
  [SMALL_STATE(53)] = 749,
  [SMALL_STATE(54)] = 753,
  [SMALL_STATE(55)] = 757,
  [SMALL_STATE(56)] = 761,
  [SMALL_STATE(57)] = 765,
  [SMALL_STATE(58)] = 769,
  [SMALL_STATE(59)] = 773,
  [SMALL_STATE(60)] = 777,
  [SMALL_STATE(61)] = 781,
  [SMALL_STATE(62)] = 785,
  [SMALL_STATE(63)] = 789,
  [SMALL_STATE(64)] = 793,
  [SMALL_STATE(65)] = 797,
  [SMALL_STATE(66)] = 801,
  [SMALL_STATE(67)] = 805,
  [SMALL_STATE(68)] = 809,
  [SMALL_STATE(69)] = 813,
  [SMALL_STATE(70)] = 817,
  [SMALL_STATE(71)] = 821,
  [SMALL_STATE(72)] = 825,
  [SMALL_STATE(73)] = 829,
  [SMALL_STATE(74)] = 833,
  [SMALL_STATE(75)] = 837,
  [SMALL_STATE(76)] = 841,
  [SMALL_STATE(77)] = 845,
  [SMALL_STATE(78)] = 849,
  [SMALL_STATE(79)] = 853,
  [SMALL_STATE(80)] = 857,
  [SMALL_STATE(81)] = 861,
  [SMALL_STATE(82)] = 865,
  [SMALL_STATE(83)] = 869,
  [SMALL_STATE(84)] = 873,
  [SMALL_STATE(85)] = 877,
  [SMALL_STATE(86)] = 881,
  [SMALL_STATE(87)] = 885,
  [SMALL_STATE(88)] = 889,
  [SMALL_STATE(89)] = 893,
  [SMALL_STATE(90)] = 897,
  [SMALL_STATE(91)] = 901,
  [SMALL_STATE(92)] = 905,
  [SMALL_STATE(93)] = 909,
  [SMALL_STATE(94)] = 913,
  [SMALL_STATE(95)] = 917,
  [SMALL_STATE(96)] = 921,
  [SMALL_STATE(97)] = 925,
  [SMALL_STATE(98)] = 929,
  [SMALL_STATE(99)] = 933,
  [SMALL_STATE(100)] = 937,
  [SMALL_STATE(101)] = 941,
  [SMALL_STATE(102)] = 945,
  [SMALL_STATE(103)] = 949,
  [SMALL_STATE(104)] = 953,
  [SMALL_STATE(105)] = 957,
  [SMALL_STATE(106)] = 961,
  [SMALL_STATE(107)] = 965,
  [SMALL_STATE(108)] = 969,
  [SMALL_STATE(109)] = 973,
  [SMALL_STATE(110)] = 977,
  [SMALL_STATE(111)] = 981,
  [SMALL_STATE(112)] = 985,
  [SMALL_STATE(113)] = 989,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__token_body, 2), SHIFT_REPEAT(39),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__token_body, 2), SHIFT_REPEAT(112),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__token_body, 2),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__token_body, 2), SHIFT_REPEAT(108),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [50] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [52] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__token_body, 2), SHIFT_REPEAT(48),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__token_body, 2), SHIFT_REPEAT(110),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_child_token_block, 4),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child_token_block, 4),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__token_body, 2),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional_token_block, 6),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_token_block, 6),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_token_block, 7),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional_token_block, 7),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(22),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(47),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tokens_block, 5),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conditional_token_block_repeat1, 2),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conditional_token_block_repeat1, 2), SHIFT_REPEAT(54),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tokens_block, 4),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch, 2),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch, 3),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_switch_repeat1, 2),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_switch_repeat1, 2),
  [125] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_switch_repeat1, 2), SHIFT_REPEAT(59),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_token_reference, 2),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_token_reference, 2),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_switch_repeat1, 3),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_switch_repeat1, 3),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string, 3),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [186] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hex, 2),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_token_declaration, 4),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_token_assignment, 3),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dimension, 2),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hsl, 7, .production_id = 1),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hsv, 7, .production_id = 2),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oklab, 7, .production_id = 3),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rgb, 7, .production_id = 4),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hsl, 9, .production_id = 1),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hsv, 9, .production_id = 2),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oklab, 9, .production_id = 3),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rgb, 9, .production_id = 4),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_token_value, 1),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_token_type, 1),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
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
