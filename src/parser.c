#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 104
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 59
#define ALIAS_COUNT 7
#define TOKEN_COUNT 39
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 4

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
  sym_positive_assertion = 23,
  sym_ref_identifier = 24,
  aux_sym_rgb_token1 = 25,
  sym_single_line_comment = 26,
  sym_string = 27,
  anon_sym_COLON = 28,
  anon_sym_tokens = 29,
  aux_sym_tokens_block_token1 = 30,
  aux_sym_tokens_block_token2 = 31,
  anon_sym_DOLLAR = 32,
  anon_sym_text = 33,
  anon_sym_color = 34,
  anon_sym_asset = 35,
  anon_sym_switch = 36,
  anon_sym_dimension = 37,
  anon_sym_range = 38,
  sym_source_file = 39,
  sym__string = 40,
  aux_sym__token_body = 41,
  sym_child_token_block = 42,
  sym_conditional_token_block = 43,
  sym_dimension = 44,
  sym_hex = 45,
  sym_hsl = 46,
  sym_hsv = 47,
  sym_rgb = 48,
  sym_switch = 49,
  sym_token_assignment = 50,
  sym_tokens_block = 51,
  sym_token_declaration = 52,
  sym_token_reference = 53,
  sym_token_type = 54,
  sym_token_value = 55,
  aux_sym_source_file_repeat1 = 56,
  aux_sym_conditional_token_block_repeat1 = 57,
  aux_sym_switch_repeat1 = 58,
  alias_sym_blue_channel = 59,
  alias_sym_green_channel = 60,
  alias_sym_hue_channel = 61,
  alias_sym_lightness_channel = 62,
  alias_sym_red_channel = 63,
  alias_sym_saturation_channel = 64,
  alias_sym_value_channel = 65,
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
  [7] = 5,
  [8] = 6,
  [9] = 9,
  [10] = 10,
  [11] = 10,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 15,
  [18] = 18,
  [19] = 16,
  [20] = 18,
  [21] = 14,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 29,
  [31] = 25,
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
  [47] = 45,
  [48] = 46,
  [49] = 49,
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
  [89] = 37,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 94,
  [96] = 96,
  [97] = 93,
  [98] = 98,
  [99] = 90,
  [100] = 100,
  [101] = 91,
  [102] = 100,
  [103] = 103,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(90);
      if (lookahead == '"') ADVANCE(92);
      if (lookahead == '#') ADVANCE(107);
      if (lookahead == '$') ADVANCE(163);
      if (lookahead == '%') ADVANCE(106);
      if (lookahead == ')') ADVANCE(114);
      if (lookahead == '*') ADVANCE(94);
      if (lookahead == ',') ADVANCE(113);
      if (lookahead == '-') ADVANCE(79);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '0') ADVANCE(102);
      if (lookahead == '1') ADVANCE(99);
      if (lookahead == ':') ADVANCE(159);
      if (lookahead == 'a') ADVANCE(63);
      if (lookahead == 'c') ADVANCE(73);
      if (lookahead == 'd') ADVANCE(36);
      if (lookahead == 'e') ADVANCE(76);
      if (lookahead == 'h') ADVANCE(57);
      if (lookahead == 'i') ADVANCE(44);
      if (lookahead == 'm') ADVANCE(41);
      if (lookahead == 'p') ADVANCE(77);
      if (lookahead == 'r') ADVANCE(16);
      if (lookahead == 's') ADVANCE(68);
      if (lookahead == 't') ADVANCE(22);
      if (lookahead == 'v') ADVANCE(75);
      if (lookahead == 'w') ADVANCE(31);
      if (lookahead == '{') ADVANCE(95);
      if (lookahead == '}') ADVANCE(96);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(151);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(91);
      if (lookahead == '*') ADVANCE(94);
      if (lookahead == ',') ADVANCE(113);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(92);
      if (lookahead == '#') ADVANCE(107);
      if (lookahead == '$') ADVANCE(163);
      if (lookahead == '-') ADVANCE(79);
      if (lookahead == '/') ADVANCE(88);
      if (lookahead == 'h') ADVANCE(59);
      if (lookahead == 'r') ADVANCE(29);
      if (lookahead == '{') ADVANCE(161);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(151);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 3:
      if (lookahead == '(') ADVANCE(112);
      if (lookahead == 'a') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == '(') ADVANCE(112);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '(') ADVANCE(115);
      if (lookahead == 'a') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == '(') ADVANCE(115);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '(') ADVANCE(155);
      if (lookahead == 'a') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == '(') ADVANCE(155);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '/') ADVANCE(156);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(12);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 11:
      if (lookahead == '*') ADVANCE(11);
      if (lookahead == '/') ADVANCE(149);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 12:
      if (lookahead == '*') ADVANCE(11);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '0') ADVANCE(103);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(152);
      END_STATE();
    case 14:
      if (lookahead == '0') ADVANCE(101);
      if (lookahead == '1') ADVANCE(100);
      if (lookahead == 'a') ADVANCE(60);
      if (lookahead == 'c') ADVANCE(53);
      if (lookahead == 'd') ADVANCE(35);
      if (lookahead == 'r') ADVANCE(17);
      if (lookahead == 's') ADVANCE(69);
      if (lookahead == 't') ADVANCE(24);
      if (lookahead == 'w') ADVANCE(33);
      if (lookahead == '}') ADVANCE(162);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 15:
      if (lookahead == '0') ADVANCE(104);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(45);
      if (lookahead == 'e') ADVANCE(41);
      if (lookahead == 'g') ADVANCE(20);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(135);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(70);
      if (lookahead == 'i') ADVANCE(43);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(60);
      if (lookahead == 'c') ADVANCE(53);
      if (lookahead == 'd') ADVANCE(35);
      if (lookahead == 'r') ADVANCE(17);
      if (lookahead == 's') ADVANCE(69);
      if (lookahead == 't') ADVANCE(24);
      if (lookahead == 'w') ADVANCE(33);
      if (lookahead == '}') ADVANCE(96);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 20:
      if (lookahead == 'b') ADVANCE(7);
      END_STATE();
    case 21:
      if (lookahead == 'c') ADVANCE(32);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(71);
      if (lookahead == 'o') ADVANCE(38);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(174);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(147);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 29:
      if (lookahead == 'g') ADVANCE(122);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 30:
      if (lookahead == 'g') ADVANCE(23);
      END_STATE();
    case 31:
      if (lookahead == 'h') ADVANCE(26);
      END_STATE();
    case 32:
      if (lookahead == 'h') ADVANCE(170);
      END_STATE();
    case 33:
      if (lookahead == 'h') ADVANCE(125);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 34:
      if (lookahead == 'i') ADVANCE(64);
      END_STATE();
    case 35:
      if (lookahead == 'i') ADVANCE(134);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 36:
      if (lookahead == 'i') ADVANCE(42);
      if (lookahead == 'v') ADVANCE(74);
      END_STATE();
    case 37:
      if (lookahead == 'i') ADVANCE(55);
      END_STATE();
    case 38:
      if (lookahead == 'k') ADVANCE(28);
      END_STATE();
    case 39:
      if (lookahead == 'l') ADVANCE(52);
      END_STATE();
    case 40:
      if (lookahead == 'l') ADVANCE(3);
      if (lookahead == 'v') ADVANCE(5);
      END_STATE();
    case 41:
      if (lookahead == 'm') ADVANCE(106);
      END_STATE();
    case 42:
      if (lookahead == 'm') ADVANCE(27);
      END_STATE();
    case 43:
      if (lookahead == 'n') ADVANCE(106);
      END_STATE();
    case 44:
      if (lookahead == 'n') ADVANCE(106);
      if (lookahead == 's') ADVANCE(153);
      END_STATE();
    case 45:
      if (lookahead == 'n') ADVANCE(30);
      END_STATE();
    case 46:
      if (lookahead == 'n') ADVANCE(97);
      END_STATE();
    case 47:
      if (lookahead == 'n') ADVANCE(172);
      END_STATE();
    case 48:
      if (lookahead == 'n') ADVANCE(54);
      END_STATE();
    case 49:
      if (lookahead == 'n') ADVANCE(61);
      END_STATE();
    case 50:
      if (lookahead == 'n') ADVANCE(58);
      END_STATE();
    case 51:
      if (lookahead == 'o') ADVANCE(38);
      END_STATE();
    case 52:
      if (lookahead == 'o') ADVANCE(56);
      END_STATE();
    case 53:
      if (lookahead == 'o') ADVANCE(133);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 54:
      if (lookahead == 'o') ADVANCE(67);
      END_STATE();
    case 55:
      if (lookahead == 'o') ADVANCE(47);
      END_STATE();
    case 56:
      if (lookahead == 'r') ADVANCE(166);
      END_STATE();
    case 57:
      if (lookahead == 's') ADVANCE(40);
      END_STATE();
    case 58:
      if (lookahead == 's') ADVANCE(160);
      END_STATE();
    case 59:
      if (lookahead == 's') ADVANCE(132);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 60:
      if (lookahead == 's') ADVANCE(143);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 61:
      if (lookahead == 's') ADVANCE(37);
      END_STATE();
    case 62:
      if (lookahead == 's') ADVANCE(25);
      END_STATE();
    case 63:
      if (lookahead == 's') ADVANCE(62);
      END_STATE();
    case 64:
      if (lookahead == 't') ADVANCE(21);
      END_STATE();
    case 65:
      if (lookahead == 't') ADVANCE(164);
      END_STATE();
    case 66:
      if (lookahead == 't') ADVANCE(168);
      END_STATE();
    case 67:
      if (lookahead == 't') ADVANCE(150);
      END_STATE();
    case 68:
      if (lookahead == 'w') ADVANCE(34);
      END_STATE();
    case 69:
      if (lookahead == 'w') ADVANCE(130);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 70:
      if (lookahead == 'x') ADVANCE(106);
      END_STATE();
    case 71:
      if (lookahead == 'x') ADVANCE(65);
      END_STATE();
    case 72:
      if (lookahead == '{') ADVANCE(161);
      if (lookahead == '}') ADVANCE(96);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(72)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 73:
      if (lookahead == 'h' ||
          lookahead == 'm') ADVANCE(106);
      if (lookahead == 'o') ADVANCE(39);
      END_STATE();
    case 74:
      if (lookahead == 'h' ||
          lookahead == 'w') ADVANCE(106);
      END_STATE();
    case 75:
      if (lookahead == 'h' ||
          lookahead == 'w') ADVANCE(106);
      if (lookahead == 'm') ADVANCE(18);
      END_STATE();
    case 76:
      if (lookahead == 'm' ||
          lookahead == 'x') ADVANCE(106);
      END_STATE();
    case 77:
      if (lookahead == 'c' ||
          lookahead == 't' ||
          lookahead == 'x') ADVANCE(106);
      END_STATE();
    case 78:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(78)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 79:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(151);
      END_STATE();
    case 80:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(105);
      END_STATE();
    case 81:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      END_STATE();
    case 82:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(108);
      END_STATE();
    case 83:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(110);
      END_STATE();
    case 84:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(111);
      END_STATE();
    case 85:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(82);
      END_STATE();
    case 86:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 87:
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 88:
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 89:
      if (eof) ADVANCE(90);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == 't') ADVANCE(51);
      if (lookahead == '{') ADVANCE(95);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(89)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(85);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym__newlines);
      if (lookahead == '\n') ADVANCE(91);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym__string_token1);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_asset_path);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_asterisk);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_when);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_when);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_decimal_range);
      if (lookahead == '.') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(151);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_decimal_range);
      if (lookahead == '.') ADVANCE(15);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_decimal_range);
      if (lookahead == '.') ADVANCE(80);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_decimal_range);
      if (lookahead == '.') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(151);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_decimal_range);
      if (lookahead == '0') ADVANCE(103);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(152);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_decimal_range);
      if (lookahead == '0') ADVANCE(104);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_decimal_range);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(105);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_dimensional_unit);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_hex_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(109);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_hex_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(83);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_hex_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(84);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_hex_token4);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_hsl_token1);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_hsv_token1);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(112);
      if (lookahead == 'a') ADVANCE(117);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(4);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(112);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(4);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(115);
      if (lookahead == 'a') ADVANCE(119);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(6);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(115);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(6);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(155);
      if (lookahead == 'a') ADVANCE(121);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(8);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(155);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(8);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(120);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(129);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(175);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(136);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(138);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(146);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(124);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(171);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(144);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(140);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(116);
      if (lookahead == 'v') ADVANCE(118);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(139);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(126);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(128);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(98);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(173);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(142);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(141);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(137);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(167);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(131);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(127);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(123);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(165);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(169);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(145);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_multi_line_comment);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_negative_assertion);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(151);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_positive_assertion);
      if (lookahead == ' ') ADVANCE(48);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_ref_identifier);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_rgb_token1);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_single_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(156);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(157);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\' &&
          lookahead != '^' &&
          lookahead != 'n') ADVANCE(158);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_string);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\' &&
          lookahead != '^' &&
          lookahead != 'n') ADVANCE(158);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_tokens);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_tokens_block_token1);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_tokens_block_token2);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_text);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_text);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_color);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_color);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_asset);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_asset);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_switch);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_switch);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_dimension);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_dimension);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_range);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_range);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 89},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 14},
  [5] = {.lex_state = 19},
  [6] = {.lex_state = 19},
  [7] = {.lex_state = 14},
  [8] = {.lex_state = 19},
  [9] = {.lex_state = 14},
  [10] = {.lex_state = 14},
  [11] = {.lex_state = 14},
  [12] = {.lex_state = 14},
  [13] = {.lex_state = 14},
  [14] = {.lex_state = 14},
  [15] = {.lex_state = 14},
  [16] = {.lex_state = 14},
  [17] = {.lex_state = 19},
  [18] = {.lex_state = 19},
  [19] = {.lex_state = 19},
  [20] = {.lex_state = 14},
  [21] = {.lex_state = 19},
  [22] = {.lex_state = 89},
  [23] = {.lex_state = 89},
  [24] = {.lex_state = 89},
  [25] = {.lex_state = 72},
  [26] = {.lex_state = 89},
  [27] = {.lex_state = 89},
  [28] = {.lex_state = 72},
  [29] = {.lex_state = 72},
  [30] = {.lex_state = 72},
  [31] = {.lex_state = 72},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 72},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 72},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 72},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 2},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 2},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 2},
  [70] = {.lex_state = 2},
  [71] = {.lex_state = 2},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 2},
  [74] = {.lex_state = 2},
  [75] = {.lex_state = 14},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 14},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 14},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 1},
  [86] = {.lex_state = 1},
  [87] = {.lex_state = 1},
  [88] = {.lex_state = 157},
  [89] = {.lex_state = 1},
  [90] = {.lex_state = 89},
  [91] = {.lex_state = 72},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 1},
  [94] = {.lex_state = 78},
  [95] = {.lex_state = 78},
  [96] = {.lex_state = 72},
  [97] = {.lex_state = 1},
  [98] = {.lex_state = 72},
  [99] = {.lex_state = 89},
  [100] = {.lex_state = 89},
  [101] = {.lex_state = 72},
  [102] = {.lex_state = 89},
  [103] = {.lex_state = 2},
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
    [sym_source_file] = STATE(56),
    [sym_tokens_block] = STATE(22),
    [aux_sym_source_file_repeat1] = STATE(22),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_multi_line_comment] = ACTIONS(5),
    [sym_single_line_comment] = ACTIONS(5),
    [anon_sym_tokens] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
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
      aux_sym_rgb_token1,
    ACTIONS(25), 1,
      anon_sym_DOLLAR,
    STATE(68), 1,
      sym_token_value,
    STATE(87), 8,
      sym__string,
      sym_dimension,
      sym_hex,
      sym_hsl,
      sym_hsv,
      sym_rgb,
      sym_switch,
      sym_token_reference,
  [41] = 11,
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
      aux_sym_rgb_token1,
    ACTIONS(25), 1,
      anon_sym_DOLLAR,
    STATE(63), 1,
      sym_token_value,
    STATE(87), 8,
      sym__string,
      sym_dimension,
      sym_hex,
      sym_hsl,
      sym_hsv,
      sym_rgb,
      sym_switch,
      sym_token_reference,
  [82] = 7,
    ACTIONS(27), 1,
      anon_sym_when,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(31), 1,
      aux_sym_tokens_block_token2,
    STATE(96), 1,
      sym_token_type,
    STATE(97), 1,
      sym_token_declaration,
    STATE(7), 3,
      aux_sym__token_body,
      sym_child_token_block,
      sym_conditional_token_block,
    ACTIONS(33), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [111] = 7,
    ACTIONS(35), 1,
      anon_sym_RBRACE,
    ACTIONS(37), 1,
      anon_sym_when,
    ACTIONS(40), 1,
      sym_identifier,
    STATE(93), 1,
      sym_token_declaration,
    STATE(96), 1,
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
  [140] = 7,
    ACTIONS(46), 1,
      anon_sym_RBRACE,
    ACTIONS(48), 1,
      anon_sym_when,
    ACTIONS(50), 1,
      sym_identifier,
    STATE(93), 1,
      sym_token_declaration,
    STATE(96), 1,
      sym_token_type,
    STATE(5), 3,
      aux_sym__token_body,
      sym_child_token_block,
      sym_conditional_token_block,
    ACTIONS(33), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [169] = 7,
    ACTIONS(35), 1,
      aux_sym_tokens_block_token2,
    ACTIONS(52), 1,
      anon_sym_when,
    ACTIONS(55), 1,
      sym_identifier,
    STATE(96), 1,
      sym_token_type,
    STATE(97), 1,
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
  [198] = 7,
    ACTIONS(48), 1,
      anon_sym_when,
    ACTIONS(50), 1,
      sym_identifier,
    ACTIONS(58), 1,
      anon_sym_RBRACE,
    STATE(93), 1,
      sym_token_declaration,
    STATE(96), 1,
      sym_token_type,
    STATE(5), 3,
      aux_sym__token_body,
      sym_child_token_block,
      sym_conditional_token_block,
    ACTIONS(33), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [227] = 7,
    ACTIONS(27), 1,
      anon_sym_when,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(60), 1,
      aux_sym_tokens_block_token2,
    STATE(96), 1,
      sym_token_type,
    STATE(97), 1,
      sym_token_declaration,
    STATE(7), 3,
      aux_sym__token_body,
      sym_child_token_block,
      sym_conditional_token_block,
    ACTIONS(33), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [256] = 6,
    ACTIONS(48), 1,
      anon_sym_when,
    ACTIONS(50), 1,
      sym_identifier,
    STATE(93), 1,
      sym_token_declaration,
    STATE(96), 1,
      sym_token_type,
    STATE(6), 3,
      aux_sym__token_body,
      sym_child_token_block,
      sym_conditional_token_block,
    ACTIONS(33), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [282] = 6,
    ACTIONS(48), 1,
      anon_sym_when,
    ACTIONS(50), 1,
      sym_identifier,
    STATE(93), 1,
      sym_token_declaration,
    STATE(96), 1,
      sym_token_type,
    STATE(8), 3,
      aux_sym__token_body,
      sym_child_token_block,
      sym_conditional_token_block,
    ACTIONS(33), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [308] = 6,
    ACTIONS(27), 1,
      anon_sym_when,
    ACTIONS(29), 1,
      sym_identifier,
    STATE(96), 1,
      sym_token_type,
    STATE(97), 1,
      sym_token_declaration,
    STATE(9), 3,
      aux_sym__token_body,
      sym_child_token_block,
      sym_conditional_token_block,
    ACTIONS(33), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [334] = 6,
    ACTIONS(27), 1,
      anon_sym_when,
    ACTIONS(29), 1,
      sym_identifier,
    STATE(96), 1,
      sym_token_type,
    STATE(97), 1,
      sym_token_declaration,
    STATE(4), 3,
      aux_sym__token_body,
      sym_child_token_block,
      sym_conditional_token_block,
    ACTIONS(33), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [360] = 2,
    ACTIONS(64), 1,
      aux_sym_tokens_block_token2,
    ACTIONS(62), 8,
      anon_sym_when,
      sym_identifier,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [374] = 2,
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
  [388] = 2,
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
  [402] = 2,
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
  [416] = 2,
    ACTIONS(35), 1,
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
  [430] = 2,
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
  [444] = 2,
    ACTIONS(35), 1,
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
  [458] = 2,
    ACTIONS(64), 1,
      anon_sym_RBRACE,
    ACTIONS(62), 8,
      anon_sym_when,
      sym_identifier,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [472] = 4,
    ACTIONS(7), 1,
      anon_sym_tokens,
    ACTIONS(76), 1,
      ts_builtin_sym_end,
    ACTIONS(78), 2,
      sym_multi_line_comment,
      sym_single_line_comment,
    STATE(23), 2,
      sym_tokens_block,
      aux_sym_source_file_repeat1,
  [487] = 4,
    ACTIONS(80), 1,
      ts_builtin_sym_end,
    ACTIONS(85), 1,
      anon_sym_tokens,
    ACTIONS(82), 2,
      sym_multi_line_comment,
      sym_single_line_comment,
    STATE(23), 2,
      sym_tokens_block,
      aux_sym_source_file_repeat1,
  [502] = 1,
    ACTIONS(88), 4,
      ts_builtin_sym_end,
      sym_multi_line_comment,
      sym_single_line_comment,
      anon_sym_tokens,
  [509] = 4,
    ACTIONS(90), 1,
      anon_sym_RBRACE,
    ACTIONS(92), 1,
      sym_identifier,
    STATE(28), 1,
      aux_sym_conditional_token_block_repeat1,
    STATE(49), 1,
      sym_token_assignment,
  [522] = 1,
    ACTIONS(94), 4,
      ts_builtin_sym_end,
      sym_multi_line_comment,
      sym_single_line_comment,
      anon_sym_tokens,
  [529] = 2,
    ACTIONS(98), 1,
      aux_sym_hex_token4,
    ACTIONS(96), 3,
      aux_sym_hex_token1,
      aux_sym_hex_token2,
      aux_sym_hex_token3,
  [538] = 4,
    ACTIONS(100), 1,
      anon_sym_RBRACE,
    ACTIONS(102), 1,
      sym_identifier,
    STATE(28), 1,
      aux_sym_conditional_token_block_repeat1,
    STATE(49), 1,
      sym_token_assignment,
  [551] = 4,
    ACTIONS(92), 1,
      sym_identifier,
    ACTIONS(105), 1,
      anon_sym_RBRACE,
    STATE(31), 1,
      aux_sym_conditional_token_block_repeat1,
    STATE(49), 1,
      sym_token_assignment,
  [564] = 4,
    ACTIONS(92), 1,
      sym_identifier,
    ACTIONS(107), 1,
      anon_sym_RBRACE,
    STATE(25), 1,
      aux_sym_conditional_token_block_repeat1,
    STATE(49), 1,
      sym_token_assignment,
  [577] = 4,
    ACTIONS(92), 1,
      sym_identifier,
    ACTIONS(109), 1,
      anon_sym_RBRACE,
    STATE(28), 1,
      aux_sym_conditional_token_block_repeat1,
    STATE(49), 1,
      sym_token_assignment,
  [590] = 3,
    ACTIONS(111), 1,
      sym__newlines,
    ACTIONS(113), 1,
      anon_sym_COMMA,
    STATE(33), 1,
      aux_sym_switch_repeat1,
  [600] = 3,
    ACTIONS(115), 1,
      sym__newlines,
    ACTIONS(117), 1,
      anon_sym_COMMA,
    STATE(33), 1,
      aux_sym_switch_repeat1,
  [610] = 3,
    ACTIONS(115), 1,
      sym__newlines,
    ACTIONS(120), 1,
      sym_asterisk,
    ACTIONS(122), 1,
      anon_sym_COMMA,
  [620] = 3,
    ACTIONS(113), 1,
      anon_sym_COMMA,
    ACTIONS(124), 1,
      sym__newlines,
    STATE(33), 1,
      aux_sym_switch_repeat1,
  [630] = 3,
    ACTIONS(126), 1,
      sym_asterisk,
    ACTIONS(128), 1,
      anon_sym_COMMA,
    STATE(35), 1,
      aux_sym_switch_repeat1,
  [640] = 2,
    ACTIONS(130), 1,
      sym_negative_assertion,
    ACTIONS(132), 1,
      sym_positive_assertion,
  [647] = 2,
    ACTIONS(134), 1,
      anon_sym_COMMA,
    ACTIONS(136), 1,
      anon_sym_RPAREN,
  [654] = 2,
    ACTIONS(138), 1,
      anon_sym_COMMA,
    ACTIONS(140), 1,
      anon_sym_RPAREN,
  [661] = 1,
    ACTIONS(100), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [666] = 2,
    ACTIONS(142), 1,
      sym__newlines,
    ACTIONS(144), 1,
      anon_sym_COMMA,
  [673] = 2,
    ACTIONS(146), 1,
      anon_sym_COMMA,
    ACTIONS(148), 1,
      anon_sym_RPAREN,
  [680] = 2,
    ACTIONS(150), 1,
      sym_identifier,
    ACTIONS(152), 1,
      aux_sym_tokens_block_token1,
  [687] = 2,
    ACTIONS(128), 1,
      anon_sym_COMMA,
    STATE(32), 1,
      aux_sym_switch_repeat1,
  [694] = 2,
    ACTIONS(154), 1,
      sym_negative_assertion,
    ACTIONS(156), 1,
      sym_positive_assertion,
  [701] = 2,
    ACTIONS(158), 1,
      anon_sym_DOLLAR,
    STATE(45), 1,
      sym_token_reference,
  [708] = 2,
    ACTIONS(160), 1,
      sym_negative_assertion,
    ACTIONS(162), 1,
      sym_positive_assertion,
  [715] = 2,
    ACTIONS(158), 1,
      anon_sym_DOLLAR,
    STATE(47), 1,
      sym_token_reference,
  [722] = 1,
    ACTIONS(164), 1,
      sym__newlines,
  [726] = 1,
    ACTIONS(166), 1,
      sym__newlines,
  [730] = 1,
    ACTIONS(168), 1,
      anon_sym_COMMA,
  [734] = 1,
    ACTIONS(170), 1,
      anon_sym_COLON,
  [738] = 1,
    ACTIONS(172), 1,
      sym__newlines,
  [742] = 1,
    ACTIONS(174), 1,
      sym_number,
  [746] = 1,
    ACTIONS(176), 1,
      sym_number,
  [750] = 1,
    ACTIONS(178), 1,
      ts_builtin_sym_end,
  [754] = 1,
    ACTIONS(180), 1,
      sym_identifier,
  [758] = 1,
    ACTIONS(182), 1,
      anon_sym_COMMA,
  [762] = 1,
    ACTIONS(184), 1,
      sym_number,
  [766] = 1,
    ACTIONS(186), 1,
      anon_sym_COMMA,
  [770] = 1,
    ACTIONS(188), 1,
      sym__newlines,
  [774] = 1,
    ACTIONS(190), 1,
      aux_sym__string_token1,
  [778] = 1,
    ACTIONS(192), 1,
      sym__newlines,
  [782] = 1,
    ACTIONS(194), 1,
      anon_sym_COMMA,
  [786] = 1,
    ACTIONS(196), 1,
      anon_sym_COMMA,
  [790] = 1,
    ACTIONS(198), 1,
      sym_number,
  [794] = 1,
    ACTIONS(200), 1,
      anon_sym_COMMA,
  [798] = 1,
    ACTIONS(202), 1,
      sym__newlines,
  [802] = 1,
    ACTIONS(204), 1,
      sym_number,
  [806] = 1,
    ACTIONS(206), 1,
      sym_number,
  [810] = 1,
    ACTIONS(208), 1,
      sym_number,
  [814] = 1,
    ACTIONS(210), 1,
      sym_dimensional_unit,
  [818] = 1,
    ACTIONS(212), 1,
      sym_number,
  [822] = 1,
    ACTIONS(214), 1,
      sym_number,
  [826] = 1,
    ACTIONS(216), 1,
      sym_decimal_range,
  [830] = 1,
    ACTIONS(218), 1,
      sym__newlines,
  [834] = 1,
    ACTIONS(220), 1,
      sym_decimal_range,
  [838] = 1,
    ACTIONS(222), 1,
      sym__newlines,
  [842] = 1,
    ACTIONS(224), 1,
      sym_decimal_range,
  [846] = 1,
    ACTIONS(226), 1,
      sym__newlines,
  [850] = 1,
    ACTIONS(228), 1,
      anon_sym_RPAREN,
  [854] = 1,
    ACTIONS(230), 1,
      anon_sym_RPAREN,
  [858] = 1,
    ACTIONS(232), 1,
      anon_sym_RPAREN,
  [862] = 1,
    ACTIONS(234), 1,
      sym__newlines,
  [866] = 1,
    ACTIONS(236), 1,
      sym__newlines,
  [870] = 1,
    ACTIONS(238), 1,
      sym__newlines,
  [874] = 1,
    ACTIONS(240), 1,
      sym__newlines,
  [878] = 1,
    ACTIONS(242), 1,
      sym_string,
  [882] = 1,
    ACTIONS(130), 1,
      sym__newlines,
  [886] = 1,
    ACTIONS(244), 1,
      anon_sym_LBRACE,
  [890] = 1,
    ACTIONS(246), 1,
      sym_identifier,
  [894] = 1,
    ACTIONS(248), 1,
      anon_sym_COLON,
  [898] = 1,
    ACTIONS(250), 1,
      sym__newlines,
  [902] = 1,
    ACTIONS(252), 1,
      sym_ref_identifier,
  [906] = 1,
    ACTIONS(254), 1,
      sym_ref_identifier,
  [910] = 1,
    ACTIONS(256), 1,
      sym_identifier,
  [914] = 1,
    ACTIONS(258), 1,
      sym__newlines,
  [918] = 1,
    ACTIONS(260), 1,
      sym_identifier,
  [922] = 1,
    ACTIONS(262), 1,
      anon_sym_LBRACE,
  [926] = 1,
    ACTIONS(264), 1,
      anon_sym_LBRACE,
  [930] = 1,
    ACTIONS(266), 1,
      sym_identifier,
  [934] = 1,
    ACTIONS(268), 1,
      anon_sym_LBRACE,
  [938] = 1,
    ACTIONS(270), 1,
      aux_sym_tokens_block_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 41,
  [SMALL_STATE(4)] = 82,
  [SMALL_STATE(5)] = 111,
  [SMALL_STATE(6)] = 140,
  [SMALL_STATE(7)] = 169,
  [SMALL_STATE(8)] = 198,
  [SMALL_STATE(9)] = 227,
  [SMALL_STATE(10)] = 256,
  [SMALL_STATE(11)] = 282,
  [SMALL_STATE(12)] = 308,
  [SMALL_STATE(13)] = 334,
  [SMALL_STATE(14)] = 360,
  [SMALL_STATE(15)] = 374,
  [SMALL_STATE(16)] = 388,
  [SMALL_STATE(17)] = 402,
  [SMALL_STATE(18)] = 416,
  [SMALL_STATE(19)] = 430,
  [SMALL_STATE(20)] = 444,
  [SMALL_STATE(21)] = 458,
  [SMALL_STATE(22)] = 472,
  [SMALL_STATE(23)] = 487,
  [SMALL_STATE(24)] = 502,
  [SMALL_STATE(25)] = 509,
  [SMALL_STATE(26)] = 522,
  [SMALL_STATE(27)] = 529,
  [SMALL_STATE(28)] = 538,
  [SMALL_STATE(29)] = 551,
  [SMALL_STATE(30)] = 564,
  [SMALL_STATE(31)] = 577,
  [SMALL_STATE(32)] = 590,
  [SMALL_STATE(33)] = 600,
  [SMALL_STATE(34)] = 610,
  [SMALL_STATE(35)] = 620,
  [SMALL_STATE(36)] = 630,
  [SMALL_STATE(37)] = 640,
  [SMALL_STATE(38)] = 647,
  [SMALL_STATE(39)] = 654,
  [SMALL_STATE(40)] = 661,
  [SMALL_STATE(41)] = 666,
  [SMALL_STATE(42)] = 673,
  [SMALL_STATE(43)] = 680,
  [SMALL_STATE(44)] = 687,
  [SMALL_STATE(45)] = 694,
  [SMALL_STATE(46)] = 701,
  [SMALL_STATE(47)] = 708,
  [SMALL_STATE(48)] = 715,
  [SMALL_STATE(49)] = 722,
  [SMALL_STATE(50)] = 726,
  [SMALL_STATE(51)] = 730,
  [SMALL_STATE(52)] = 734,
  [SMALL_STATE(53)] = 738,
  [SMALL_STATE(54)] = 742,
  [SMALL_STATE(55)] = 746,
  [SMALL_STATE(56)] = 750,
  [SMALL_STATE(57)] = 754,
  [SMALL_STATE(58)] = 758,
  [SMALL_STATE(59)] = 762,
  [SMALL_STATE(60)] = 766,
  [SMALL_STATE(61)] = 770,
  [SMALL_STATE(62)] = 774,
  [SMALL_STATE(63)] = 778,
  [SMALL_STATE(64)] = 782,
  [SMALL_STATE(65)] = 786,
  [SMALL_STATE(66)] = 790,
  [SMALL_STATE(67)] = 794,
  [SMALL_STATE(68)] = 798,
  [SMALL_STATE(69)] = 802,
  [SMALL_STATE(70)] = 806,
  [SMALL_STATE(71)] = 810,
  [SMALL_STATE(72)] = 814,
  [SMALL_STATE(73)] = 818,
  [SMALL_STATE(74)] = 822,
  [SMALL_STATE(75)] = 826,
  [SMALL_STATE(76)] = 830,
  [SMALL_STATE(77)] = 834,
  [SMALL_STATE(78)] = 838,
  [SMALL_STATE(79)] = 842,
  [SMALL_STATE(80)] = 846,
  [SMALL_STATE(81)] = 850,
  [SMALL_STATE(82)] = 854,
  [SMALL_STATE(83)] = 858,
  [SMALL_STATE(84)] = 862,
  [SMALL_STATE(85)] = 866,
  [SMALL_STATE(86)] = 870,
  [SMALL_STATE(87)] = 874,
  [SMALL_STATE(88)] = 878,
  [SMALL_STATE(89)] = 882,
  [SMALL_STATE(90)] = 886,
  [SMALL_STATE(91)] = 890,
  [SMALL_STATE(92)] = 894,
  [SMALL_STATE(93)] = 898,
  [SMALL_STATE(94)] = 902,
  [SMALL_STATE(95)] = 906,
  [SMALL_STATE(96)] = 910,
  [SMALL_STATE(97)] = 914,
  [SMALL_STATE(98)] = 918,
  [SMALL_STATE(99)] = 922,
  [SMALL_STATE(100)] = 926,
  [SMALL_STATE(101)] = 930,
  [SMALL_STATE(102)] = 934,
  [SMALL_STATE(103)] = 938,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__token_body, 2),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__token_body, 2), SHIFT_REPEAT(48),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__token_body, 2), SHIFT_REPEAT(100),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__token_body, 2), SHIFT_REPEAT(98),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [48] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [50] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__token_body, 2), SHIFT_REPEAT(46),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__token_body, 2), SHIFT_REPEAT(102),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional_token_block, 6),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_token_block, 6),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional_token_block, 7),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_token_block, 7),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_child_token_block, 4),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child_token_block, 4),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__token_body, 2),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(23),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(43),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tokens_block, 5),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tokens_block, 4),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conditional_token_block_repeat1, 2),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conditional_token_block_repeat1, 2), SHIFT_REPEAT(52),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch, 3),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_switch_repeat1, 2),
  [117] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_switch_repeat1, 2), SHIFT_REPEAT(57),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_switch_repeat1, 2),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch, 2),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_token_reference, 2),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_token_reference, 2),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_switch_repeat1, 3),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_switch_repeat1, 3),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hsl, 7, .production_id = 1),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string, 3),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [178] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hex, 2),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_token_declaration, 4),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_token_assignment, 3),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dimension, 2),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hsv, 7, .production_id = 2),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rgb, 7, .production_id = 3),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hsl, 9, .production_id = 1),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hsv, 9, .production_id = 2),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rgb, 9, .production_id = 3),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_token_value, 1),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_token_type, 1),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
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
