#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 94
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 57
#define ALIAS_COUNT 6
#define TOKEN_COUNT 38
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 3

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
  sym_identifier = 18,
  sym_multi_line_comment = 19,
  sym_negative_assertion = 20,
  sym_number = 21,
  sym_positive_assertion = 22,
  sym_ref_identifier = 23,
  aux_sym_rgb_token1 = 24,
  sym_single_line_comment = 25,
  sym_string = 26,
  anon_sym_COLON = 27,
  anon_sym_tokens = 28,
  aux_sym_tokens_block_token1 = 29,
  aux_sym_tokens_block_token2 = 30,
  anon_sym_DOLLAR = 31,
  anon_sym_text = 32,
  anon_sym_color = 33,
  anon_sym_asset = 34,
  anon_sym_switch = 35,
  anon_sym_dimension = 36,
  anon_sym_range = 37,
  sym_source_file = 38,
  sym__string = 39,
  aux_sym__token_body = 40,
  sym_child_token_block = 41,
  sym_conditional_token_block = 42,
  sym_dimension = 43,
  sym_hex = 44,
  sym_hsl = 45,
  sym_rgb = 46,
  sym_switch = 47,
  sym_token_assignment = 48,
  sym_tokens_block = 49,
  sym_token_declaration = 50,
  sym_token_reference = 51,
  sym_token_type = 52,
  sym_token_value = 53,
  aux_sym_source_file_repeat1 = 54,
  aux_sym_conditional_token_block_repeat1 = 55,
  aux_sym_switch_repeat1 = 56,
  alias_sym_blue_channel = 57,
  alias_sym_green_channel = 58,
  alias_sym_hue_channel = 59,
  alias_sym_lightness_channel = 60,
  alias_sym_red_channel = 61,
  alias_sym_saturation_channel = 62,
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
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [1] = alias_sym_hue_channel,
    [3] = alias_sym_saturation_channel,
    [5] = alias_sym_lightness_channel,
  },
  [2] = {
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
  [13] = 11,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 14,
  [18] = 18,
  [19] = 15,
  [20] = 18,
  [21] = 16,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 28,
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
  [46] = 45,
  [47] = 40,
  [48] = 48,
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
  [79] = 38,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 84,
  [86] = 86,
  [87] = 83,
  [88] = 88,
  [89] = 80,
  [90] = 90,
  [91] = 81,
  [92] = 90,
  [93] = 93,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(88);
      if (lookahead == '"') ADVANCE(90);
      if (lookahead == '#') ADVANCE(105);
      if (lookahead == '$') ADVANCE(158);
      if (lookahead == '%') ADVANCE(104);
      if (lookahead == ')') ADVANCE(112);
      if (lookahead == '*') ADVANCE(92);
      if (lookahead == ',') ADVANCE(111);
      if (lookahead == '-') ADVANCE(77);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == '0') ADVANCE(100);
      if (lookahead == '1') ADVANCE(97);
      if (lookahead == ':') ADVANCE(154);
      if (lookahead == 'a') ADVANCE(61);
      if (lookahead == 'c') ADVANCE(71);
      if (lookahead == 'd') ADVANCE(34);
      if (lookahead == 'e') ADVANCE(74);
      if (lookahead == 'h') ADVANCE(58);
      if (lookahead == 'i') ADVANCE(42);
      if (lookahead == 'm') ADVANCE(39);
      if (lookahead == 'p') ADVANCE(75);
      if (lookahead == 'r') ADVANCE(14);
      if (lookahead == 's') ADVANCE(66);
      if (lookahead == 't') ADVANCE(20);
      if (lookahead == 'v') ADVANCE(73);
      if (lookahead == 'w') ADVANCE(29);
      if (lookahead == '{') ADVANCE(93);
      if (lookahead == '}') ADVANCE(94);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(146);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '*') ADVANCE(92);
      if (lookahead == ',') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(90);
      if (lookahead == '#') ADVANCE(105);
      if (lookahead == '$') ADVANCE(158);
      if (lookahead == '-') ADVANCE(77);
      if (lookahead == '/') ADVANCE(86);
      if (lookahead == 'h') ADVANCE(56);
      if (lookahead == 'r') ADVANCE(27);
      if (lookahead == '{') ADVANCE(156);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(146);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 3:
      if (lookahead == '(') ADVANCE(110);
      if (lookahead == 'a') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == '(') ADVANCE(110);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '(') ADVANCE(150);
      if (lookahead == 'a') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == '(') ADVANCE(150);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == '/') ADVANCE(151);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(10);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(9);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '0') ADVANCE(101);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(147);
      END_STATE();
    case 12:
      if (lookahead == '0') ADVANCE(99);
      if (lookahead == '1') ADVANCE(98);
      if (lookahead == 'a') ADVANCE(57);
      if (lookahead == 'c') ADVANCE(51);
      if (lookahead == 'd') ADVANCE(33);
      if (lookahead == 'r') ADVANCE(15);
      if (lookahead == 's') ADVANCE(67);
      if (lookahead == 't') ADVANCE(22);
      if (lookahead == 'w') ADVANCE(31);
      if (lookahead == '}') ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 13:
      if (lookahead == '0') ADVANCE(102);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(43);
      if (lookahead == 'e') ADVANCE(39);
      if (lookahead == 'g') ADVANCE(18);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(130);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(68);
      if (lookahead == 'i') ADVANCE(41);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(57);
      if (lookahead == 'c') ADVANCE(51);
      if (lookahead == 'd') ADVANCE(33);
      if (lookahead == 'r') ADVANCE(15);
      if (lookahead == 's') ADVANCE(67);
      if (lookahead == 't') ADVANCE(22);
      if (lookahead == 'w') ADVANCE(31);
      if (lookahead == '}') ADVANCE(94);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 18:
      if (lookahead == 'b') ADVANCE(5);
      END_STATE();
    case 19:
      if (lookahead == 'c') ADVANCE(30);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(69);
      if (lookahead == 'o') ADVANCE(36);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(169);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(142);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 27:
      if (lookahead == 'g') ADVANCE(117);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 28:
      if (lookahead == 'g') ADVANCE(21);
      END_STATE();
    case 29:
      if (lookahead == 'h') ADVANCE(24);
      END_STATE();
    case 30:
      if (lookahead == 'h') ADVANCE(165);
      END_STATE();
    case 31:
      if (lookahead == 'h') ADVANCE(120);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 32:
      if (lookahead == 'i') ADVANCE(62);
      END_STATE();
    case 33:
      if (lookahead == 'i') ADVANCE(129);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 34:
      if (lookahead == 'i') ADVANCE(40);
      if (lookahead == 'v') ADVANCE(72);
      END_STATE();
    case 35:
      if (lookahead == 'i') ADVANCE(53);
      END_STATE();
    case 36:
      if (lookahead == 'k') ADVANCE(26);
      END_STATE();
    case 37:
      if (lookahead == 'l') ADVANCE(50);
      END_STATE();
    case 38:
      if (lookahead == 'l') ADVANCE(3);
      END_STATE();
    case 39:
      if (lookahead == 'm') ADVANCE(104);
      END_STATE();
    case 40:
      if (lookahead == 'm') ADVANCE(25);
      END_STATE();
    case 41:
      if (lookahead == 'n') ADVANCE(104);
      END_STATE();
    case 42:
      if (lookahead == 'n') ADVANCE(104);
      if (lookahead == 's') ADVANCE(148);
      END_STATE();
    case 43:
      if (lookahead == 'n') ADVANCE(28);
      END_STATE();
    case 44:
      if (lookahead == 'n') ADVANCE(95);
      END_STATE();
    case 45:
      if (lookahead == 'n') ADVANCE(167);
      END_STATE();
    case 46:
      if (lookahead == 'n') ADVANCE(52);
      END_STATE();
    case 47:
      if (lookahead == 'n') ADVANCE(59);
      END_STATE();
    case 48:
      if (lookahead == 'n') ADVANCE(55);
      END_STATE();
    case 49:
      if (lookahead == 'o') ADVANCE(36);
      END_STATE();
    case 50:
      if (lookahead == 'o') ADVANCE(54);
      END_STATE();
    case 51:
      if (lookahead == 'o') ADVANCE(128);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 52:
      if (lookahead == 'o') ADVANCE(65);
      END_STATE();
    case 53:
      if (lookahead == 'o') ADVANCE(45);
      END_STATE();
    case 54:
      if (lookahead == 'r') ADVANCE(161);
      END_STATE();
    case 55:
      if (lookahead == 's') ADVANCE(155);
      END_STATE();
    case 56:
      if (lookahead == 's') ADVANCE(127);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 57:
      if (lookahead == 's') ADVANCE(138);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 58:
      if (lookahead == 's') ADVANCE(38);
      END_STATE();
    case 59:
      if (lookahead == 's') ADVANCE(35);
      END_STATE();
    case 60:
      if (lookahead == 's') ADVANCE(23);
      END_STATE();
    case 61:
      if (lookahead == 's') ADVANCE(60);
      END_STATE();
    case 62:
      if (lookahead == 't') ADVANCE(19);
      END_STATE();
    case 63:
      if (lookahead == 't') ADVANCE(159);
      END_STATE();
    case 64:
      if (lookahead == 't') ADVANCE(163);
      END_STATE();
    case 65:
      if (lookahead == 't') ADVANCE(145);
      END_STATE();
    case 66:
      if (lookahead == 'w') ADVANCE(32);
      END_STATE();
    case 67:
      if (lookahead == 'w') ADVANCE(125);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 68:
      if (lookahead == 'x') ADVANCE(104);
      END_STATE();
    case 69:
      if (lookahead == 'x') ADVANCE(63);
      END_STATE();
    case 70:
      if (lookahead == '{') ADVANCE(156);
      if (lookahead == '}') ADVANCE(94);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(70)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 71:
      if (lookahead == 'h' ||
          lookahead == 'm') ADVANCE(104);
      if (lookahead == 'o') ADVANCE(37);
      END_STATE();
    case 72:
      if (lookahead == 'h' ||
          lookahead == 'w') ADVANCE(104);
      END_STATE();
    case 73:
      if (lookahead == 'h' ||
          lookahead == 'w') ADVANCE(104);
      if (lookahead == 'm') ADVANCE(16);
      END_STATE();
    case 74:
      if (lookahead == 'm' ||
          lookahead == 'x') ADVANCE(104);
      END_STATE();
    case 75:
      if (lookahead == 'c' ||
          lookahead == 't' ||
          lookahead == 'x') ADVANCE(104);
      END_STATE();
    case 76:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(76)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 77:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(146);
      END_STATE();
    case 78:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(103);
      END_STATE();
    case 79:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(147);
      END_STATE();
    case 80:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(106);
      END_STATE();
    case 81:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(108);
      END_STATE();
    case 82:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(109);
      END_STATE();
    case 83:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(80);
      END_STATE();
    case 84:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 85:
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 86:
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 87:
      if (eof) ADVANCE(88);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == 't') ADVANCE(49);
      if (lookahead == '{') ADVANCE(93);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(87)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(83);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym__newlines);
      if (lookahead == '\n') ADVANCE(89);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym__string_token1);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_asset_path);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_asterisk);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_when);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_when);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_decimal_range);
      if (lookahead == '.') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(146);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_decimal_range);
      if (lookahead == '.') ADVANCE(13);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_decimal_range);
      if (lookahead == '.') ADVANCE(78);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_decimal_range);
      if (lookahead == '.') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(146);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_decimal_range);
      if (lookahead == '0') ADVANCE(101);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(147);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_decimal_range);
      if (lookahead == '0') ADVANCE(102);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_decimal_range);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(103);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_dimensional_unit);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_hex_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(107);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_hex_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(81);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_hex_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(82);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_hex_token4);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_hsl_token1);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(110);
      if (lookahead == 'a') ADVANCE(114);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(4);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(110);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(4);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(150);
      if (lookahead == 'a') ADVANCE(116);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(6);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(150);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(6);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(115);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(124);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(170);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(131);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(133);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(141);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(119);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(166);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(139);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(135);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(113);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(134);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(121);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(123);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(96);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(168);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(137);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(136);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(132);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(162);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(126);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(122);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(118);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(160);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(164);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(140);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_multi_line_comment);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_negative_assertion);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(146);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(147);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_positive_assertion);
      if (lookahead == ' ') ADVANCE(46);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_ref_identifier);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_rgb_token1);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_single_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(151);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(152);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\' &&
          lookahead != '^' &&
          lookahead != 'n') ADVANCE(153);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_string);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\' &&
          lookahead != '^' &&
          lookahead != 'n') ADVANCE(153);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_tokens);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_tokens_block_token1);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_tokens_block_token2);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_text);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_text);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_color);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_color);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_asset);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_asset);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_switch);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_switch);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_dimension);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_dimension);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_range);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_range);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 87},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 12},
  [5] = {.lex_state = 17},
  [6] = {.lex_state = 12},
  [7] = {.lex_state = 12},
  [8] = {.lex_state = 17},
  [9] = {.lex_state = 17},
  [10] = {.lex_state = 12},
  [11] = {.lex_state = 12},
  [12] = {.lex_state = 12},
  [13] = {.lex_state = 12},
  [14] = {.lex_state = 12},
  [15] = {.lex_state = 12},
  [16] = {.lex_state = 12},
  [17] = {.lex_state = 17},
  [18] = {.lex_state = 17},
  [19] = {.lex_state = 17},
  [20] = {.lex_state = 12},
  [21] = {.lex_state = 17},
  [22] = {.lex_state = 87},
  [23] = {.lex_state = 87},
  [24] = {.lex_state = 70},
  [25] = {.lex_state = 70},
  [26] = {.lex_state = 87},
  [27] = {.lex_state = 87},
  [28] = {.lex_state = 70},
  [29] = {.lex_state = 87},
  [30] = {.lex_state = 70},
  [31] = {.lex_state = 70},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 70},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 70},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 70},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 2},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 2},
  [66] = {.lex_state = 2},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 2},
  [69] = {.lex_state = 12},
  [70] = {.lex_state = 1},
  [71] = {.lex_state = 12},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 1},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 152},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 87},
  [81] = {.lex_state = 70},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 76},
  [85] = {.lex_state = 76},
  [86] = {.lex_state = 70},
  [87] = {.lex_state = 1},
  [88] = {.lex_state = 70},
  [89] = {.lex_state = 87},
  [90] = {.lex_state = 87},
  [91] = {.lex_state = 70},
  [92] = {.lex_state = 87},
  [93] = {.lex_state = 2},
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
    [sym_source_file] = STATE(53),
    [sym_tokens_block] = STATE(23),
    [aux_sym_source_file_repeat1] = STATE(23),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_multi_line_comment] = ACTIONS(5),
    [sym_single_line_comment] = ACTIONS(5),
    [anon_sym_tokens] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(9), 1,
      aux_sym__string_token1,
    ACTIONS(11), 1,
      sym_asset_path,
    ACTIONS(13), 1,
      anon_sym_POUND,
    ACTIONS(15), 1,
      aux_sym_hsl_token1,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      sym_number,
    ACTIONS(21), 1,
      aux_sym_rgb_token1,
    ACTIONS(23), 1,
      anon_sym_DOLLAR,
    STATE(64), 1,
      sym_token_value,
    STATE(77), 7,
      sym__string,
      sym_dimension,
      sym_hex,
      sym_hsl,
      sym_rgb,
      sym_switch,
      sym_token_reference,
  [37] = 10,
    ACTIONS(9), 1,
      aux_sym__string_token1,
    ACTIONS(11), 1,
      sym_asset_path,
    ACTIONS(13), 1,
      anon_sym_POUND,
    ACTIONS(15), 1,
      aux_sym_hsl_token1,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      sym_number,
    ACTIONS(21), 1,
      aux_sym_rgb_token1,
    ACTIONS(23), 1,
      anon_sym_DOLLAR,
    STATE(60), 1,
      sym_token_value,
    STATE(77), 7,
      sym__string,
      sym_dimension,
      sym_hex,
      sym_hsl,
      sym_rgb,
      sym_switch,
      sym_token_reference,
  [74] = 7,
    ACTIONS(25), 1,
      anon_sym_when,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(29), 1,
      aux_sym_tokens_block_token2,
    STATE(86), 1,
      sym_token_type,
    STATE(87), 1,
      sym_token_declaration,
    STATE(6), 3,
      aux_sym__token_body,
      sym_child_token_block,
      sym_conditional_token_block,
    ACTIONS(31), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [103] = 7,
    ACTIONS(33), 1,
      anon_sym_RBRACE,
    ACTIONS(35), 1,
      anon_sym_when,
    ACTIONS(37), 1,
      sym_identifier,
    STATE(83), 1,
      sym_token_declaration,
    STATE(86), 1,
      sym_token_type,
    STATE(9), 3,
      aux_sym__token_body,
      sym_child_token_block,
      sym_conditional_token_block,
    ACTIONS(31), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [132] = 7,
    ACTIONS(39), 1,
      anon_sym_when,
    ACTIONS(42), 1,
      sym_identifier,
    ACTIONS(45), 1,
      aux_sym_tokens_block_token2,
    STATE(86), 1,
      sym_token_type,
    STATE(87), 1,
      sym_token_declaration,
    STATE(6), 3,
      aux_sym__token_body,
      sym_child_token_block,
      sym_conditional_token_block,
    ACTIONS(47), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [161] = 7,
    ACTIONS(25), 1,
      anon_sym_when,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(50), 1,
      aux_sym_tokens_block_token2,
    STATE(86), 1,
      sym_token_type,
    STATE(87), 1,
      sym_token_declaration,
    STATE(6), 3,
      aux_sym__token_body,
      sym_child_token_block,
      sym_conditional_token_block,
    ACTIONS(31), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [190] = 7,
    ACTIONS(35), 1,
      anon_sym_when,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(52), 1,
      anon_sym_RBRACE,
    STATE(83), 1,
      sym_token_declaration,
    STATE(86), 1,
      sym_token_type,
    STATE(9), 3,
      aux_sym__token_body,
      sym_child_token_block,
      sym_conditional_token_block,
    ACTIONS(31), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [219] = 7,
    ACTIONS(45), 1,
      anon_sym_RBRACE,
    ACTIONS(54), 1,
      anon_sym_when,
    ACTIONS(57), 1,
      sym_identifier,
    STATE(83), 1,
      sym_token_declaration,
    STATE(86), 1,
      sym_token_type,
    STATE(9), 3,
      aux_sym__token_body,
      sym_child_token_block,
      sym_conditional_token_block,
    ACTIONS(47), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [248] = 6,
    ACTIONS(25), 1,
      anon_sym_when,
    ACTIONS(27), 1,
      sym_identifier,
    STATE(86), 1,
      sym_token_type,
    STATE(87), 1,
      sym_token_declaration,
    STATE(4), 3,
      aux_sym__token_body,
      sym_child_token_block,
      sym_conditional_token_block,
    ACTIONS(31), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [274] = 6,
    ACTIONS(35), 1,
      anon_sym_when,
    ACTIONS(37), 1,
      sym_identifier,
    STATE(83), 1,
      sym_token_declaration,
    STATE(86), 1,
      sym_token_type,
    STATE(8), 3,
      aux_sym__token_body,
      sym_child_token_block,
      sym_conditional_token_block,
    ACTIONS(31), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [300] = 6,
    ACTIONS(25), 1,
      anon_sym_when,
    ACTIONS(27), 1,
      sym_identifier,
    STATE(86), 1,
      sym_token_type,
    STATE(87), 1,
      sym_token_declaration,
    STATE(7), 3,
      aux_sym__token_body,
      sym_child_token_block,
      sym_conditional_token_block,
    ACTIONS(31), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [326] = 6,
    ACTIONS(35), 1,
      anon_sym_when,
    ACTIONS(37), 1,
      sym_identifier,
    STATE(83), 1,
      sym_token_declaration,
    STATE(86), 1,
      sym_token_type,
    STATE(5), 3,
      aux_sym__token_body,
      sym_child_token_block,
      sym_conditional_token_block,
    ACTIONS(31), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [352] = 2,
    ACTIONS(62), 1,
      aux_sym_tokens_block_token2,
    ACTIONS(60), 8,
      anon_sym_when,
      sym_identifier,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [366] = 2,
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
  [380] = 2,
    ACTIONS(70), 1,
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
  [394] = 2,
    ACTIONS(62), 1,
      anon_sym_RBRACE,
    ACTIONS(60), 8,
      anon_sym_when,
      sym_identifier,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [408] = 2,
    ACTIONS(45), 1,
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
  [422] = 2,
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
  [436] = 2,
    ACTIONS(45), 1,
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
  [450] = 2,
    ACTIONS(70), 1,
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
  [464] = 4,
    ACTIONS(74), 1,
      ts_builtin_sym_end,
    ACTIONS(79), 1,
      anon_sym_tokens,
    ACTIONS(76), 2,
      sym_multi_line_comment,
      sym_single_line_comment,
    STATE(22), 2,
      sym_tokens_block,
      aux_sym_source_file_repeat1,
  [479] = 4,
    ACTIONS(7), 1,
      anon_sym_tokens,
    ACTIONS(82), 1,
      ts_builtin_sym_end,
    ACTIONS(84), 2,
      sym_multi_line_comment,
      sym_single_line_comment,
    STATE(22), 2,
      sym_tokens_block,
      aux_sym_source_file_repeat1,
  [494] = 4,
    ACTIONS(86), 1,
      anon_sym_RBRACE,
    ACTIONS(88), 1,
      sym_identifier,
    STATE(24), 1,
      aux_sym_conditional_token_block_repeat1,
    STATE(49), 1,
      sym_token_assignment,
  [507] = 4,
    ACTIONS(91), 1,
      anon_sym_RBRACE,
    ACTIONS(93), 1,
      sym_identifier,
    STATE(24), 1,
      aux_sym_conditional_token_block_repeat1,
    STATE(49), 1,
      sym_token_assignment,
  [520] = 1,
    ACTIONS(95), 4,
      ts_builtin_sym_end,
      sym_multi_line_comment,
      sym_single_line_comment,
      anon_sym_tokens,
  [527] = 1,
    ACTIONS(97), 4,
      ts_builtin_sym_end,
      sym_multi_line_comment,
      sym_single_line_comment,
      anon_sym_tokens,
  [534] = 4,
    ACTIONS(93), 1,
      sym_identifier,
    ACTIONS(99), 1,
      anon_sym_RBRACE,
    STATE(25), 1,
      aux_sym_conditional_token_block_repeat1,
    STATE(49), 1,
      sym_token_assignment,
  [547] = 2,
    ACTIONS(103), 1,
      aux_sym_hex_token4,
    ACTIONS(101), 3,
      aux_sym_hex_token1,
      aux_sym_hex_token2,
      aux_sym_hex_token3,
  [556] = 4,
    ACTIONS(93), 1,
      sym_identifier,
    ACTIONS(105), 1,
      anon_sym_RBRACE,
    STATE(31), 1,
      aux_sym_conditional_token_block_repeat1,
    STATE(49), 1,
      sym_token_assignment,
  [569] = 4,
    ACTIONS(93), 1,
      sym_identifier,
    ACTIONS(107), 1,
      anon_sym_RBRACE,
    STATE(24), 1,
      aux_sym_conditional_token_block_repeat1,
    STATE(49), 1,
      sym_token_assignment,
  [582] = 3,
    ACTIONS(109), 1,
      sym__newlines,
    ACTIONS(111), 1,
      anon_sym_COMMA,
    STATE(35), 1,
      aux_sym_switch_repeat1,
  [592] = 3,
    ACTIONS(111), 1,
      anon_sym_COMMA,
    ACTIONS(113), 1,
      sym__newlines,
    STATE(35), 1,
      aux_sym_switch_repeat1,
  [602] = 3,
    ACTIONS(115), 1,
      sym__newlines,
    ACTIONS(117), 1,
      sym_asterisk,
    ACTIONS(119), 1,
      anon_sym_COMMA,
  [612] = 3,
    ACTIONS(115), 1,
      sym__newlines,
    ACTIONS(121), 1,
      anon_sym_COMMA,
    STATE(35), 1,
      aux_sym_switch_repeat1,
  [622] = 3,
    ACTIONS(124), 1,
      sym_asterisk,
    ACTIONS(126), 1,
      anon_sym_COMMA,
    STATE(33), 1,
      aux_sym_switch_repeat1,
  [632] = 2,
    ACTIONS(128), 1,
      sym__newlines,
    ACTIONS(130), 1,
      anon_sym_COMMA,
  [639] = 2,
    ACTIONS(132), 1,
      sym_negative_assertion,
    ACTIONS(134), 1,
      sym_positive_assertion,
  [646] = 1,
    ACTIONS(86), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [651] = 2,
    ACTIONS(136), 1,
      anon_sym_DOLLAR,
    STATE(46), 1,
      sym_token_reference,
  [658] = 2,
    ACTIONS(138), 1,
      sym_identifier,
    ACTIONS(140), 1,
      aux_sym_tokens_block_token1,
  [665] = 2,
    ACTIONS(126), 1,
      anon_sym_COMMA,
    STATE(32), 1,
      aux_sym_switch_repeat1,
  [672] = 2,
    ACTIONS(142), 1,
      anon_sym_COMMA,
    ACTIONS(144), 1,
      anon_sym_RPAREN,
  [679] = 2,
    ACTIONS(146), 1,
      anon_sym_COMMA,
    ACTIONS(148), 1,
      anon_sym_RPAREN,
  [686] = 2,
    ACTIONS(150), 1,
      sym_negative_assertion,
    ACTIONS(152), 1,
      sym_positive_assertion,
  [693] = 2,
    ACTIONS(154), 1,
      sym_negative_assertion,
    ACTIONS(156), 1,
      sym_positive_assertion,
  [700] = 2,
    ACTIONS(136), 1,
      anon_sym_DOLLAR,
    STATE(45), 1,
      sym_token_reference,
  [707] = 1,
    ACTIONS(158), 1,
      sym__newlines,
  [711] = 1,
    ACTIONS(160), 1,
      sym__newlines,
  [715] = 1,
    ACTIONS(162), 1,
      anon_sym_COLON,
  [719] = 1,
    ACTIONS(164), 1,
      sym__newlines,
  [723] = 1,
    ACTIONS(166), 1,
      sym_number,
  [727] = 1,
    ACTIONS(168), 1,
      ts_builtin_sym_end,
  [731] = 1,
    ACTIONS(170), 1,
      anon_sym_COMMA,
  [735] = 1,
    ACTIONS(172), 1,
      sym_identifier,
  [739] = 1,
    ACTIONS(174), 1,
      sym_number,
  [743] = 1,
    ACTIONS(176), 1,
      anon_sym_COMMA,
  [747] = 1,
    ACTIONS(178), 1,
      sym__newlines,
  [751] = 1,
    ACTIONS(180), 1,
      aux_sym__string_token1,
  [755] = 1,
    ACTIONS(182), 1,
      sym__newlines,
  [759] = 1,
    ACTIONS(184), 1,
      anon_sym_COMMA,
  [763] = 1,
    ACTIONS(186), 1,
      sym_number,
  [767] = 1,
    ACTIONS(188), 1,
      anon_sym_COMMA,
  [771] = 1,
    ACTIONS(190), 1,
      sym__newlines,
  [775] = 1,
    ACTIONS(192), 1,
      sym_number,
  [779] = 1,
    ACTIONS(194), 1,
      sym_number,
  [783] = 1,
    ACTIONS(196), 1,
      sym_dimensional_unit,
  [787] = 1,
    ACTIONS(198), 1,
      sym_number,
  [791] = 1,
    ACTIONS(200), 1,
      sym_decimal_range,
  [795] = 1,
    ACTIONS(202), 1,
      sym__newlines,
  [799] = 1,
    ACTIONS(204), 1,
      sym_decimal_range,
  [803] = 1,
    ACTIONS(206), 1,
      sym__newlines,
  [807] = 1,
    ACTIONS(208), 1,
      anon_sym_RPAREN,
  [811] = 1,
    ACTIONS(210), 1,
      anon_sym_RPAREN,
  [815] = 1,
    ACTIONS(212), 1,
      sym__newlines,
  [819] = 1,
    ACTIONS(214), 1,
      sym__newlines,
  [823] = 1,
    ACTIONS(216), 1,
      sym__newlines,
  [827] = 1,
    ACTIONS(218), 1,
      sym_string,
  [831] = 1,
    ACTIONS(132), 1,
      sym__newlines,
  [835] = 1,
    ACTIONS(220), 1,
      anon_sym_LBRACE,
  [839] = 1,
    ACTIONS(222), 1,
      sym_identifier,
  [843] = 1,
    ACTIONS(224), 1,
      anon_sym_COLON,
  [847] = 1,
    ACTIONS(226), 1,
      sym__newlines,
  [851] = 1,
    ACTIONS(228), 1,
      sym_ref_identifier,
  [855] = 1,
    ACTIONS(230), 1,
      sym_ref_identifier,
  [859] = 1,
    ACTIONS(232), 1,
      sym_identifier,
  [863] = 1,
    ACTIONS(234), 1,
      sym__newlines,
  [867] = 1,
    ACTIONS(236), 1,
      sym_identifier,
  [871] = 1,
    ACTIONS(238), 1,
      anon_sym_LBRACE,
  [875] = 1,
    ACTIONS(240), 1,
      anon_sym_LBRACE,
  [879] = 1,
    ACTIONS(242), 1,
      sym_identifier,
  [883] = 1,
    ACTIONS(244), 1,
      anon_sym_LBRACE,
  [887] = 1,
    ACTIONS(246), 1,
      aux_sym_tokens_block_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 37,
  [SMALL_STATE(4)] = 74,
  [SMALL_STATE(5)] = 103,
  [SMALL_STATE(6)] = 132,
  [SMALL_STATE(7)] = 161,
  [SMALL_STATE(8)] = 190,
  [SMALL_STATE(9)] = 219,
  [SMALL_STATE(10)] = 248,
  [SMALL_STATE(11)] = 274,
  [SMALL_STATE(12)] = 300,
  [SMALL_STATE(13)] = 326,
  [SMALL_STATE(14)] = 352,
  [SMALL_STATE(15)] = 366,
  [SMALL_STATE(16)] = 380,
  [SMALL_STATE(17)] = 394,
  [SMALL_STATE(18)] = 408,
  [SMALL_STATE(19)] = 422,
  [SMALL_STATE(20)] = 436,
  [SMALL_STATE(21)] = 450,
  [SMALL_STATE(22)] = 464,
  [SMALL_STATE(23)] = 479,
  [SMALL_STATE(24)] = 494,
  [SMALL_STATE(25)] = 507,
  [SMALL_STATE(26)] = 520,
  [SMALL_STATE(27)] = 527,
  [SMALL_STATE(28)] = 534,
  [SMALL_STATE(29)] = 547,
  [SMALL_STATE(30)] = 556,
  [SMALL_STATE(31)] = 569,
  [SMALL_STATE(32)] = 582,
  [SMALL_STATE(33)] = 592,
  [SMALL_STATE(34)] = 602,
  [SMALL_STATE(35)] = 612,
  [SMALL_STATE(36)] = 622,
  [SMALL_STATE(37)] = 632,
  [SMALL_STATE(38)] = 639,
  [SMALL_STATE(39)] = 646,
  [SMALL_STATE(40)] = 651,
  [SMALL_STATE(41)] = 658,
  [SMALL_STATE(42)] = 665,
  [SMALL_STATE(43)] = 672,
  [SMALL_STATE(44)] = 679,
  [SMALL_STATE(45)] = 686,
  [SMALL_STATE(46)] = 693,
  [SMALL_STATE(47)] = 700,
  [SMALL_STATE(48)] = 707,
  [SMALL_STATE(49)] = 711,
  [SMALL_STATE(50)] = 715,
  [SMALL_STATE(51)] = 719,
  [SMALL_STATE(52)] = 723,
  [SMALL_STATE(53)] = 727,
  [SMALL_STATE(54)] = 731,
  [SMALL_STATE(55)] = 735,
  [SMALL_STATE(56)] = 739,
  [SMALL_STATE(57)] = 743,
  [SMALL_STATE(58)] = 747,
  [SMALL_STATE(59)] = 751,
  [SMALL_STATE(60)] = 755,
  [SMALL_STATE(61)] = 759,
  [SMALL_STATE(62)] = 763,
  [SMALL_STATE(63)] = 767,
  [SMALL_STATE(64)] = 771,
  [SMALL_STATE(65)] = 775,
  [SMALL_STATE(66)] = 779,
  [SMALL_STATE(67)] = 783,
  [SMALL_STATE(68)] = 787,
  [SMALL_STATE(69)] = 791,
  [SMALL_STATE(70)] = 795,
  [SMALL_STATE(71)] = 799,
  [SMALL_STATE(72)] = 803,
  [SMALL_STATE(73)] = 807,
  [SMALL_STATE(74)] = 811,
  [SMALL_STATE(75)] = 815,
  [SMALL_STATE(76)] = 819,
  [SMALL_STATE(77)] = 823,
  [SMALL_STATE(78)] = 827,
  [SMALL_STATE(79)] = 831,
  [SMALL_STATE(80)] = 835,
  [SMALL_STATE(81)] = 839,
  [SMALL_STATE(82)] = 843,
  [SMALL_STATE(83)] = 847,
  [SMALL_STATE(84)] = 851,
  [SMALL_STATE(85)] = 855,
  [SMALL_STATE(86)] = 859,
  [SMALL_STATE(87)] = 863,
  [SMALL_STATE(88)] = 867,
  [SMALL_STATE(89)] = 871,
  [SMALL_STATE(90)] = 875,
  [SMALL_STATE(91)] = 879,
  [SMALL_STATE(92)] = 883,
  [SMALL_STATE(93)] = 887,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__token_body, 2), SHIFT_REPEAT(40),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__token_body, 2), SHIFT_REPEAT(92),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__token_body, 2),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__token_body, 2), SHIFT_REPEAT(88),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__token_body, 2), SHIFT_REPEAT(47),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__token_body, 2), SHIFT_REPEAT(90),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional_token_block, 7),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_token_block, 7),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_child_token_block, 4),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child_token_block, 4),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional_token_block, 6),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_token_block, 6),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__token_body, 2),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(22),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(41),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conditional_token_block_repeat1, 2),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conditional_token_block_repeat1, 2), SHIFT_REPEAT(50),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tokens_block, 5),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tokens_block, 4),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch, 3),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch, 2),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_switch_repeat1, 2),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_switch_repeat1, 2),
  [121] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_switch_repeat1, 2), SHIFT_REPEAT(55),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_switch_repeat1, 3),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_switch_repeat1, 3),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_token_reference, 2),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_token_reference, 2),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dimension, 2),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string, 3),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [168] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hex, 2),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_token_declaration, 4),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_token_assignment, 3),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hsl, 7, .production_id = 1),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rgb, 7, .production_id = 2),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hsl, 9, .production_id = 1),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rgb, 9, .production_id = 2),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_token_value, 1),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_token_type, 1),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
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
