#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 84
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 55
#define ALIAS_COUNT 3
#define TOKEN_COUNT 37
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 2

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
  sym_identifier = 15,
  sym_multi_line_comment = 16,
  sym_negative_assertion = 17,
  sym_number = 18,
  sym_positive_assertion = 19,
  sym_ref_identifier = 20,
  aux_sym_rgb_token1 = 21,
  anon_sym_COMMA = 22,
  anon_sym_RPAREN = 23,
  sym_single_line_comment = 24,
  sym_string = 25,
  anon_sym_COLON = 26,
  anon_sym_tokens = 27,
  aux_sym_tokens_block_token1 = 28,
  aux_sym_tokens_block_token2 = 29,
  anon_sym_DOLLAR = 30,
  anon_sym_text = 31,
  anon_sym_color = 32,
  anon_sym_asset = 33,
  anon_sym_switch = 34,
  anon_sym_dimension = 35,
  anon_sym_range = 36,
  sym_source_file = 37,
  sym__string = 38,
  aux_sym__token_body = 39,
  sym_child_token_block = 40,
  sym_conditional_token_block = 41,
  sym_dimension = 42,
  sym_hex = 43,
  sym_rgb = 44,
  sym_switch = 45,
  sym_token_assignment = 46,
  sym_tokens_block = 47,
  sym_token_declaration = 48,
  sym_token_reference = 49,
  sym_token_type = 50,
  sym_token_value = 51,
  aux_sym_source_file_repeat1 = 52,
  aux_sym_conditional_token_block_repeat1 = 53,
  aux_sym_switch_repeat1 = 54,
  alias_sym_blue_channel = 55,
  alias_sym_green_channel = 56,
  alias_sym_red_channel = 57,
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
  [sym_identifier] = "identifier",
  [sym_multi_line_comment] = "multi_line_comment",
  [sym_negative_assertion] = "negative_assertion",
  [sym_number] = "number",
  [sym_positive_assertion] = "positive_assertion",
  [sym_ref_identifier] = "ref_identifier",
  [aux_sym_rgb_token1] = "rgb_token1",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
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
  [alias_sym_red_channel] = "red_channel",
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
  [sym_identifier] = sym_identifier,
  [sym_multi_line_comment] = sym_multi_line_comment,
  [sym_negative_assertion] = sym_negative_assertion,
  [sym_number] = sym_number,
  [sym_positive_assertion] = sym_positive_assertion,
  [sym_ref_identifier] = sym_ref_identifier,
  [aux_sym_rgb_token1] = aux_sym_rgb_token1,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
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
  [alias_sym_red_channel] = alias_sym_red_channel,
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
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
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
  [alias_sym_red_channel] = {
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
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 2,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 6,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 11,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 16,
  [18] = 18,
  [19] = 18,
  [20] = 14,
  [21] = 15,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 24,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 27,
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
  [44] = 39,
  [45] = 42,
  [46] = 46,
  [47] = 47,
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
  [69] = 46,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 74,
  [76] = 76,
  [77] = 73,
  [78] = 78,
  [79] = 70,
  [80] = 80,
  [81] = 71,
  [82] = 80,
  [83] = 83,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(83);
      if (lookahead == '"') ADVANCE(85);
      if (lookahead == '#') ADVANCE(100);
      if (lookahead == '$') ADVANCE(149);
      if (lookahead == '%') ADVANCE(99);
      if (lookahead == ')') ADVANCE(141);
      if (lookahead == '*') ADVANCE(87);
      if (lookahead == ',') ADVANCE(140);
      if (lookahead == '-') ADVANCE(72);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '0') ADVANCE(95);
      if (lookahead == '1') ADVANCE(92);
      if (lookahead == ':') ADVANCE(145);
      if (lookahead == 'a') ADVANCE(54);
      if (lookahead == 'c') ADVANCE(66);
      if (lookahead == 'd') ADVANCE(32);
      if (lookahead == 'e') ADVANCE(69);
      if (lookahead == 'i') ADVANCE(39);
      if (lookahead == 'm') ADVANCE(36);
      if (lookahead == 'p') ADVANCE(70);
      if (lookahead == 'r') ADVANCE(13);
      if (lookahead == 's') ADVANCE(61);
      if (lookahead == 't') ADVANCE(18);
      if (lookahead == 'v') ADVANCE(68);
      if (lookahead == 'w') ADVANCE(27);
      if (lookahead == '{') ADVANCE(88);
      if (lookahead == '}') ADVANCE(89);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(135);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(84);
      if (lookahead == '*') ADVANCE(87);
      if (lookahead == ',') ADVANCE(140);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(85);
      if (lookahead == '#') ADVANCE(100);
      if (lookahead == '$') ADVANCE(149);
      if (lookahead == '-') ADVANCE(72);
      if (lookahead == '/') ADVANCE(81);
      if (lookahead == 'r') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(135);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 3:
      if (lookahead == '(') ADVANCE(139);
      if (lookahead == 'a') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == '(') ADVANCE(139);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '/') ADVANCE(142);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(8);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(7);
      if (lookahead == '/') ADVANCE(133);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(7);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(72);
      if (lookahead == 'a') ADVANCE(53);
      if (lookahead == 'c') ADVANCE(48);
      if (lookahead == 'd') ADVANCE(31);
      if (lookahead == 'r') ADVANCE(14);
      if (lookahead == 's') ADVANCE(62);
      if (lookahead == 't') ADVANCE(20);
      if (lookahead == 'w') ADVANCE(29);
      if (lookahead == '{') ADVANCE(147);
      if (lookahead == '}') ADVANCE(89);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(135);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 10:
      if (lookahead == '0') ADVANCE(96);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(136);
      END_STATE();
    case 11:
      if (lookahead == '0') ADVANCE(94);
      if (lookahead == '1') ADVANCE(93);
      if (lookahead == 'a') ADVANCE(53);
      if (lookahead == 'c') ADVANCE(48);
      if (lookahead == 'd') ADVANCE(31);
      if (lookahead == 'r') ADVANCE(14);
      if (lookahead == 's') ADVANCE(62);
      if (lookahead == 't') ADVANCE(20);
      if (lookahead == 'w') ADVANCE(29);
      if (lookahead == '}') ADVANCE(148);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 12:
      if (lookahead == '0') ADVANCE(97);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(40);
      if (lookahead == 'e') ADVANCE(36);
      if (lookahead == 'g') ADVANCE(16);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(119);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(63);
      if (lookahead == 'i') ADVANCE(38);
      END_STATE();
    case 16:
      if (lookahead == 'b') ADVANCE(3);
      END_STATE();
    case 17:
      if (lookahead == 'c') ADVANCE(28);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(64);
      if (lookahead == 'o') ADVANCE(34);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(160);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(131);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 25:
      if (lookahead == 'g') ADVANCE(107);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 26:
      if (lookahead == 'g') ADVANCE(19);
      END_STATE();
    case 27:
      if (lookahead == 'h') ADVANCE(22);
      END_STATE();
    case 28:
      if (lookahead == 'h') ADVANCE(156);
      END_STATE();
    case 29:
      if (lookahead == 'h') ADVANCE(110);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 30:
      if (lookahead == 'i') ADVANCE(57);
      END_STATE();
    case 31:
      if (lookahead == 'i') ADVANCE(118);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 32:
      if (lookahead == 'i') ADVANCE(37);
      if (lookahead == 'v') ADVANCE(67);
      END_STATE();
    case 33:
      if (lookahead == 'i') ADVANCE(50);
      END_STATE();
    case 34:
      if (lookahead == 'k') ADVANCE(24);
      END_STATE();
    case 35:
      if (lookahead == 'l') ADVANCE(47);
      END_STATE();
    case 36:
      if (lookahead == 'm') ADVANCE(99);
      END_STATE();
    case 37:
      if (lookahead == 'm') ADVANCE(23);
      END_STATE();
    case 38:
      if (lookahead == 'n') ADVANCE(99);
      END_STATE();
    case 39:
      if (lookahead == 'n') ADVANCE(99);
      if (lookahead == 's') ADVANCE(137);
      END_STATE();
    case 40:
      if (lookahead == 'n') ADVANCE(26);
      END_STATE();
    case 41:
      if (lookahead == 'n') ADVANCE(90);
      END_STATE();
    case 42:
      if (lookahead == 'n') ADVANCE(158);
      END_STATE();
    case 43:
      if (lookahead == 'n') ADVANCE(49);
      END_STATE();
    case 44:
      if (lookahead == 'n') ADVANCE(55);
      END_STATE();
    case 45:
      if (lookahead == 'n') ADVANCE(52);
      END_STATE();
    case 46:
      if (lookahead == 'o') ADVANCE(34);
      END_STATE();
    case 47:
      if (lookahead == 'o') ADVANCE(51);
      END_STATE();
    case 48:
      if (lookahead == 'o') ADVANCE(117);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 49:
      if (lookahead == 'o') ADVANCE(60);
      END_STATE();
    case 50:
      if (lookahead == 'o') ADVANCE(42);
      END_STATE();
    case 51:
      if (lookahead == 'r') ADVANCE(152);
      END_STATE();
    case 52:
      if (lookahead == 's') ADVANCE(146);
      END_STATE();
    case 53:
      if (lookahead == 's') ADVANCE(127);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 54:
      if (lookahead == 's') ADVANCE(56);
      END_STATE();
    case 55:
      if (lookahead == 's') ADVANCE(33);
      END_STATE();
    case 56:
      if (lookahead == 's') ADVANCE(21);
      END_STATE();
    case 57:
      if (lookahead == 't') ADVANCE(17);
      END_STATE();
    case 58:
      if (lookahead == 't') ADVANCE(150);
      END_STATE();
    case 59:
      if (lookahead == 't') ADVANCE(154);
      END_STATE();
    case 60:
      if (lookahead == 't') ADVANCE(134);
      END_STATE();
    case 61:
      if (lookahead == 'w') ADVANCE(30);
      END_STATE();
    case 62:
      if (lookahead == 'w') ADVANCE(115);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 63:
      if (lookahead == 'x') ADVANCE(99);
      END_STATE();
    case 64:
      if (lookahead == 'x') ADVANCE(58);
      END_STATE();
    case 65:
      if (lookahead == '{') ADVANCE(147);
      if (lookahead == '}') ADVANCE(89);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(65)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 66:
      if (lookahead == 'h' ||
          lookahead == 'm') ADVANCE(99);
      if (lookahead == 'o') ADVANCE(35);
      END_STATE();
    case 67:
      if (lookahead == 'h' ||
          lookahead == 'w') ADVANCE(99);
      END_STATE();
    case 68:
      if (lookahead == 'h' ||
          lookahead == 'w') ADVANCE(99);
      if (lookahead == 'm') ADVANCE(15);
      END_STATE();
    case 69:
      if (lookahead == 'm' ||
          lookahead == 'x') ADVANCE(99);
      END_STATE();
    case 70:
      if (lookahead == 'c' ||
          lookahead == 't' ||
          lookahead == 'x') ADVANCE(99);
      END_STATE();
    case 71:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(71)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 72:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(135);
      END_STATE();
    case 73:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(98);
      END_STATE();
    case 74:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(136);
      END_STATE();
    case 75:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(101);
      END_STATE();
    case 76:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(103);
      END_STATE();
    case 77:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(104);
      END_STATE();
    case 78:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(75);
      END_STATE();
    case 79:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 80:
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(138);
      END_STATE();
    case 81:
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 82:
      if (eof) ADVANCE(83);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == 't') ADVANCE(46);
      if (lookahead == '{') ADVANCE(88);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(82)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(78);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym__newlines);
      if (lookahead == '\n') ADVANCE(84);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym__string_token1);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_asset_path);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_asterisk);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_when);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_when);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_decimal_range);
      if (lookahead == '.') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(135);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_decimal_range);
      if (lookahead == '.') ADVANCE(12);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_decimal_range);
      if (lookahead == '.') ADVANCE(73);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_decimal_range);
      if (lookahead == '.') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(135);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_decimal_range);
      if (lookahead == '0') ADVANCE(96);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(136);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_decimal_range);
      if (lookahead == '0') ADVANCE(97);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_decimal_range);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(98);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_dimensional_unit);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_hex_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(102);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_hex_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(76);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_hex_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(77);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_hex_token4);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(139);
      if (lookahead == 'a') ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(4);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(139);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(4);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(105);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(114);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(161);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(120);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(122);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(130);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(109);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(157);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(128);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(124);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(123);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(111);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(113);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(91);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(159);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(126);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(125);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(121);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(153);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(116);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(112);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(108);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(151);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(155);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(129);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_multi_line_comment);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_negative_assertion);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(135);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(136);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_positive_assertion);
      if (lookahead == ' ') ADVANCE(43);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_ref_identifier);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(138);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_rgb_token1);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_single_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(142);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\' &&
          lookahead != '^' &&
          lookahead != 'n') ADVANCE(144);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_string);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\' &&
          lookahead != '^' &&
          lookahead != 'n') ADVANCE(144);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_tokens);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_tokens_block_token1);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_tokens_block_token2);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_text);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_text);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_color);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_color);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_asset);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_asset);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_switch);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_switch);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_dimension);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_dimension);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_range);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_range);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 82},
  [2] = {.lex_state = 9},
  [3] = {.lex_state = 11},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 9},
  [7] = {.lex_state = 11},
  [8] = {.lex_state = 9},
  [9] = {.lex_state = 11},
  [10] = {.lex_state = 9},
  [11] = {.lex_state = 9},
  [12] = {.lex_state = 9},
  [13] = {.lex_state = 9},
  [14] = {.lex_state = 11},
  [15] = {.lex_state = 11},
  [16] = {.lex_state = 11},
  [17] = {.lex_state = 9},
  [18] = {.lex_state = 9},
  [19] = {.lex_state = 11},
  [20] = {.lex_state = 9},
  [21] = {.lex_state = 9},
  [22] = {.lex_state = 82},
  [23] = {.lex_state = 82},
  [24] = {.lex_state = 65},
  [25] = {.lex_state = 65},
  [26] = {.lex_state = 65},
  [27] = {.lex_state = 65},
  [28] = {.lex_state = 82},
  [29] = {.lex_state = 82},
  [30] = {.lex_state = 65},
  [31] = {.lex_state = 82},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 65},
  [41] = {.lex_state = 65},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 65},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 9},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 9},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 9},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 11},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 1},
  [68] = {.lex_state = 143},
  [69] = {.lex_state = 1},
  [70] = {.lex_state = 82},
  [71] = {.lex_state = 65},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 71},
  [75] = {.lex_state = 71},
  [76] = {.lex_state = 65},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 65},
  [79] = {.lex_state = 82},
  [80] = {.lex_state = 82},
  [81] = {.lex_state = 65},
  [82] = {.lex_state = 82},
  [83] = {.lex_state = 9},
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
    [sym_multi_line_comment] = ACTIONS(1),
    [sym_negative_assertion] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_positive_assertion] = ACTIONS(1),
    [aux_sym_rgb_token1] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
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
    [sym_source_file] = STATE(54),
    [sym_tokens_block] = STATE(23),
    [aux_sym_source_file_repeat1] = STATE(23),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_multi_line_comment] = ACTIONS(5),
    [sym_single_line_comment] = ACTIONS(5),
    [anon_sym_tokens] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(9), 1,
      anon_sym_RBRACE,
    ACTIONS(11), 1,
      anon_sym_when,
    ACTIONS(14), 1,
      sym_identifier,
    STATE(73), 1,
      sym_token_declaration,
    STATE(76), 1,
      sym_token_type,
    STATE(2), 3,
      aux_sym__token_body,
      sym_child_token_block,
      sym_conditional_token_block,
    ACTIONS(17), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [29] = 7,
    ACTIONS(9), 1,
      aux_sym_tokens_block_token2,
    ACTIONS(20), 1,
      anon_sym_when,
    ACTIONS(23), 1,
      sym_identifier,
    STATE(76), 1,
      sym_token_type,
    STATE(77), 1,
      sym_token_declaration,
    STATE(3), 3,
      aux_sym__token_body,
      sym_child_token_block,
      sym_conditional_token_block,
    ACTIONS(17), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [58] = 9,
    ACTIONS(26), 1,
      aux_sym__string_token1,
    ACTIONS(28), 1,
      sym_asset_path,
    ACTIONS(30), 1,
      anon_sym_POUND,
    ACTIONS(32), 1,
      sym_identifier,
    ACTIONS(34), 1,
      sym_number,
    ACTIONS(36), 1,
      aux_sym_rgb_token1,
    ACTIONS(38), 1,
      anon_sym_DOLLAR,
    STATE(57), 1,
      sym_token_value,
    STATE(67), 6,
      sym__string,
      sym_dimension,
      sym_hex,
      sym_rgb,
      sym_switch,
      sym_token_reference,
  [91] = 9,
    ACTIONS(26), 1,
      aux_sym__string_token1,
    ACTIONS(28), 1,
      sym_asset_path,
    ACTIONS(30), 1,
      anon_sym_POUND,
    ACTIONS(32), 1,
      sym_identifier,
    ACTIONS(34), 1,
      sym_number,
    ACTIONS(36), 1,
      aux_sym_rgb_token1,
    ACTIONS(38), 1,
      anon_sym_DOLLAR,
    STATE(60), 1,
      sym_token_value,
    STATE(67), 6,
      sym__string,
      sym_dimension,
      sym_hex,
      sym_rgb,
      sym_switch,
      sym_token_reference,
  [124] = 7,
    ACTIONS(40), 1,
      anon_sym_RBRACE,
    ACTIONS(42), 1,
      anon_sym_when,
    ACTIONS(44), 1,
      sym_identifier,
    STATE(73), 1,
      sym_token_declaration,
    STATE(76), 1,
      sym_token_type,
    STATE(2), 3,
      aux_sym__token_body,
      sym_child_token_block,
      sym_conditional_token_block,
    ACTIONS(46), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [153] = 7,
    ACTIONS(48), 1,
      anon_sym_when,
    ACTIONS(50), 1,
      sym_identifier,
    ACTIONS(52), 1,
      aux_sym_tokens_block_token2,
    STATE(76), 1,
      sym_token_type,
    STATE(77), 1,
      sym_token_declaration,
    STATE(3), 3,
      aux_sym__token_body,
      sym_child_token_block,
      sym_conditional_token_block,
    ACTIONS(46), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [182] = 7,
    ACTIONS(42), 1,
      anon_sym_when,
    ACTIONS(44), 1,
      sym_identifier,
    ACTIONS(54), 1,
      anon_sym_RBRACE,
    STATE(73), 1,
      sym_token_declaration,
    STATE(76), 1,
      sym_token_type,
    STATE(2), 3,
      aux_sym__token_body,
      sym_child_token_block,
      sym_conditional_token_block,
    ACTIONS(46), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [211] = 7,
    ACTIONS(48), 1,
      anon_sym_when,
    ACTIONS(50), 1,
      sym_identifier,
    ACTIONS(56), 1,
      aux_sym_tokens_block_token2,
    STATE(76), 1,
      sym_token_type,
    STATE(77), 1,
      sym_token_declaration,
    STATE(3), 3,
      aux_sym__token_body,
      sym_child_token_block,
      sym_conditional_token_block,
    ACTIONS(46), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [240] = 6,
    ACTIONS(48), 1,
      anon_sym_when,
    ACTIONS(50), 1,
      sym_identifier,
    STATE(76), 1,
      sym_token_type,
    STATE(77), 1,
      sym_token_declaration,
    STATE(9), 3,
      aux_sym__token_body,
      sym_child_token_block,
      sym_conditional_token_block,
    ACTIONS(46), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [266] = 6,
    ACTIONS(42), 1,
      anon_sym_when,
    ACTIONS(44), 1,
      sym_identifier,
    STATE(73), 1,
      sym_token_declaration,
    STATE(76), 1,
      sym_token_type,
    STATE(8), 3,
      aux_sym__token_body,
      sym_child_token_block,
      sym_conditional_token_block,
    ACTIONS(46), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [292] = 6,
    ACTIONS(48), 1,
      anon_sym_when,
    ACTIONS(50), 1,
      sym_identifier,
    STATE(76), 1,
      sym_token_type,
    STATE(77), 1,
      sym_token_declaration,
    STATE(7), 3,
      aux_sym__token_body,
      sym_child_token_block,
      sym_conditional_token_block,
    ACTIONS(46), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [318] = 6,
    ACTIONS(42), 1,
      anon_sym_when,
    ACTIONS(44), 1,
      sym_identifier,
    STATE(73), 1,
      sym_token_declaration,
    STATE(76), 1,
      sym_token_type,
    STATE(6), 3,
      aux_sym__token_body,
      sym_child_token_block,
      sym_conditional_token_block,
    ACTIONS(46), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [344] = 2,
    ACTIONS(60), 1,
      aux_sym_tokens_block_token2,
    ACTIONS(58), 8,
      anon_sym_when,
      sym_identifier,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [358] = 2,
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
  [372] = 2,
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
  [386] = 2,
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
  [400] = 2,
    ACTIONS(9), 1,
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
  [414] = 2,
    ACTIONS(9), 1,
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
  [428] = 2,
    ACTIONS(60), 1,
      anon_sym_RBRACE,
    ACTIONS(58), 8,
      anon_sym_when,
      sym_identifier,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [442] = 2,
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
  [456] = 4,
    ACTIONS(72), 1,
      ts_builtin_sym_end,
    ACTIONS(77), 1,
      anon_sym_tokens,
    ACTIONS(74), 2,
      sym_multi_line_comment,
      sym_single_line_comment,
    STATE(22), 2,
      sym_tokens_block,
      aux_sym_source_file_repeat1,
  [471] = 4,
    ACTIONS(7), 1,
      anon_sym_tokens,
    ACTIONS(80), 1,
      ts_builtin_sym_end,
    ACTIONS(82), 2,
      sym_multi_line_comment,
      sym_single_line_comment,
    STATE(22), 2,
      sym_tokens_block,
      aux_sym_source_file_repeat1,
  [486] = 4,
    ACTIONS(84), 1,
      anon_sym_RBRACE,
    ACTIONS(86), 1,
      sym_identifier,
    STATE(25), 1,
      aux_sym_conditional_token_block_repeat1,
    STATE(52), 1,
      sym_token_assignment,
  [499] = 4,
    ACTIONS(88), 1,
      anon_sym_RBRACE,
    ACTIONS(90), 1,
      sym_identifier,
    STATE(25), 1,
      aux_sym_conditional_token_block_repeat1,
    STATE(52), 1,
      sym_token_assignment,
  [512] = 4,
    ACTIONS(86), 1,
      sym_identifier,
    ACTIONS(93), 1,
      anon_sym_RBRACE,
    STATE(25), 1,
      aux_sym_conditional_token_block_repeat1,
    STATE(52), 1,
      sym_token_assignment,
  [525] = 4,
    ACTIONS(86), 1,
      sym_identifier,
    ACTIONS(95), 1,
      anon_sym_RBRACE,
    STATE(26), 1,
      aux_sym_conditional_token_block_repeat1,
    STATE(52), 1,
      sym_token_assignment,
  [538] = 1,
    ACTIONS(97), 4,
      ts_builtin_sym_end,
      sym_multi_line_comment,
      sym_single_line_comment,
      anon_sym_tokens,
  [545] = 1,
    ACTIONS(99), 4,
      ts_builtin_sym_end,
      sym_multi_line_comment,
      sym_single_line_comment,
      anon_sym_tokens,
  [552] = 4,
    ACTIONS(86), 1,
      sym_identifier,
    ACTIONS(101), 1,
      anon_sym_RBRACE,
    STATE(24), 1,
      aux_sym_conditional_token_block_repeat1,
    STATE(52), 1,
      sym_token_assignment,
  [565] = 2,
    ACTIONS(105), 1,
      aux_sym_hex_token4,
    ACTIONS(103), 3,
      aux_sym_hex_token1,
      aux_sym_hex_token2,
      aux_sym_hex_token3,
  [574] = 3,
    ACTIONS(107), 1,
      sym_asterisk,
    ACTIONS(109), 1,
      anon_sym_COMMA,
    STATE(34), 1,
      aux_sym_switch_repeat1,
  [584] = 3,
    ACTIONS(111), 1,
      sym__newlines,
    ACTIONS(113), 1,
      anon_sym_COMMA,
    STATE(33), 1,
      aux_sym_switch_repeat1,
  [594] = 3,
    ACTIONS(116), 1,
      sym__newlines,
    ACTIONS(118), 1,
      anon_sym_COMMA,
    STATE(33), 1,
      aux_sym_switch_repeat1,
  [604] = 3,
    ACTIONS(118), 1,
      anon_sym_COMMA,
    ACTIONS(120), 1,
      sym__newlines,
    STATE(33), 1,
      aux_sym_switch_repeat1,
  [614] = 3,
    ACTIONS(111), 1,
      sym__newlines,
    ACTIONS(122), 1,
      sym_asterisk,
    ACTIONS(124), 1,
      anon_sym_COMMA,
  [624] = 2,
    ACTIONS(126), 1,
      anon_sym_COMMA,
    ACTIONS(128), 1,
      anon_sym_RPAREN,
  [631] = 2,
    ACTIONS(130), 1,
      sym__newlines,
    ACTIONS(132), 1,
      anon_sym_COMMA,
  [638] = 2,
    ACTIONS(134), 1,
      sym_negative_assertion,
    ACTIONS(136), 1,
      sym_positive_assertion,
  [645] = 2,
    ACTIONS(138), 1,
      sym_identifier,
    ACTIONS(140), 1,
      aux_sym_tokens_block_token1,
  [652] = 1,
    ACTIONS(88), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [657] = 2,
    ACTIONS(142), 1,
      anon_sym_DOLLAR,
    STATE(39), 1,
      sym_token_reference,
  [664] = 2,
    ACTIONS(109), 1,
      anon_sym_COMMA,
    STATE(35), 1,
      aux_sym_switch_repeat1,
  [671] = 2,
    ACTIONS(144), 1,
      sym_negative_assertion,
    ACTIONS(146), 1,
      sym_positive_assertion,
  [678] = 2,
    ACTIONS(142), 1,
      anon_sym_DOLLAR,
    STATE(44), 1,
      sym_token_reference,
  [685] = 2,
    ACTIONS(148), 1,
      sym_negative_assertion,
    ACTIONS(150), 1,
      sym_positive_assertion,
  [692] = 1,
    ACTIONS(152), 1,
      sym_identifier,
  [696] = 1,
    ACTIONS(154), 1,
      anon_sym_COMMA,
  [700] = 1,
    ACTIONS(156), 1,
      sym__newlines,
  [704] = 1,
    ACTIONS(158), 1,
      sym__newlines,
  [708] = 1,
    ACTIONS(160), 1,
      anon_sym_COLON,
  [712] = 1,
    ACTIONS(162), 1,
      sym__newlines,
  [716] = 1,
    ACTIONS(164), 1,
      sym_number,
  [720] = 1,
    ACTIONS(166), 1,
      ts_builtin_sym_end,
  [724] = 1,
    ACTIONS(168), 1,
      sym__newlines,
  [728] = 1,
    ACTIONS(170), 1,
      aux_sym__string_token1,
  [732] = 1,
    ACTIONS(172), 1,
      sym__newlines,
  [736] = 1,
    ACTIONS(174), 1,
      sym_number,
  [740] = 1,
    ACTIONS(176), 1,
      anon_sym_COMMA,
  [744] = 1,
    ACTIONS(178), 1,
      sym__newlines,
  [748] = 1,
    ACTIONS(180), 1,
      sym_number,
  [752] = 1,
    ACTIONS(182), 1,
      sym_dimensional_unit,
  [756] = 1,
    ACTIONS(184), 1,
      sym_decimal_range,
  [760] = 1,
    ACTIONS(186), 1,
      sym__newlines,
  [764] = 1,
    ACTIONS(188), 1,
      anon_sym_RPAREN,
  [768] = 1,
    ACTIONS(190), 1,
      sym__newlines,
  [772] = 1,
    ACTIONS(192), 1,
      sym__newlines,
  [776] = 1,
    ACTIONS(194), 1,
      sym_string,
  [780] = 1,
    ACTIONS(148), 1,
      sym__newlines,
  [784] = 1,
    ACTIONS(196), 1,
      anon_sym_LBRACE,
  [788] = 1,
    ACTIONS(198), 1,
      sym_identifier,
  [792] = 1,
    ACTIONS(200), 1,
      anon_sym_COLON,
  [796] = 1,
    ACTIONS(202), 1,
      sym__newlines,
  [800] = 1,
    ACTIONS(204), 1,
      sym_ref_identifier,
  [804] = 1,
    ACTIONS(206), 1,
      sym_ref_identifier,
  [808] = 1,
    ACTIONS(208), 1,
      sym_identifier,
  [812] = 1,
    ACTIONS(210), 1,
      sym__newlines,
  [816] = 1,
    ACTIONS(212), 1,
      sym_identifier,
  [820] = 1,
    ACTIONS(214), 1,
      anon_sym_LBRACE,
  [824] = 1,
    ACTIONS(216), 1,
      anon_sym_LBRACE,
  [828] = 1,
    ACTIONS(218), 1,
      sym_identifier,
  [832] = 1,
    ACTIONS(220), 1,
      anon_sym_LBRACE,
  [836] = 1,
    ACTIONS(222), 1,
      aux_sym_tokens_block_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 29,
  [SMALL_STATE(4)] = 58,
  [SMALL_STATE(5)] = 91,
  [SMALL_STATE(6)] = 124,
  [SMALL_STATE(7)] = 153,
  [SMALL_STATE(8)] = 182,
  [SMALL_STATE(9)] = 211,
  [SMALL_STATE(10)] = 240,
  [SMALL_STATE(11)] = 266,
  [SMALL_STATE(12)] = 292,
  [SMALL_STATE(13)] = 318,
  [SMALL_STATE(14)] = 344,
  [SMALL_STATE(15)] = 358,
  [SMALL_STATE(16)] = 372,
  [SMALL_STATE(17)] = 386,
  [SMALL_STATE(18)] = 400,
  [SMALL_STATE(19)] = 414,
  [SMALL_STATE(20)] = 428,
  [SMALL_STATE(21)] = 442,
  [SMALL_STATE(22)] = 456,
  [SMALL_STATE(23)] = 471,
  [SMALL_STATE(24)] = 486,
  [SMALL_STATE(25)] = 499,
  [SMALL_STATE(26)] = 512,
  [SMALL_STATE(27)] = 525,
  [SMALL_STATE(28)] = 538,
  [SMALL_STATE(29)] = 545,
  [SMALL_STATE(30)] = 552,
  [SMALL_STATE(31)] = 565,
  [SMALL_STATE(32)] = 574,
  [SMALL_STATE(33)] = 584,
  [SMALL_STATE(34)] = 594,
  [SMALL_STATE(35)] = 604,
  [SMALL_STATE(36)] = 614,
  [SMALL_STATE(37)] = 624,
  [SMALL_STATE(38)] = 631,
  [SMALL_STATE(39)] = 638,
  [SMALL_STATE(40)] = 645,
  [SMALL_STATE(41)] = 652,
  [SMALL_STATE(42)] = 657,
  [SMALL_STATE(43)] = 664,
  [SMALL_STATE(44)] = 671,
  [SMALL_STATE(45)] = 678,
  [SMALL_STATE(46)] = 685,
  [SMALL_STATE(47)] = 692,
  [SMALL_STATE(48)] = 696,
  [SMALL_STATE(49)] = 700,
  [SMALL_STATE(50)] = 704,
  [SMALL_STATE(51)] = 708,
  [SMALL_STATE(52)] = 712,
  [SMALL_STATE(53)] = 716,
  [SMALL_STATE(54)] = 720,
  [SMALL_STATE(55)] = 724,
  [SMALL_STATE(56)] = 728,
  [SMALL_STATE(57)] = 732,
  [SMALL_STATE(58)] = 736,
  [SMALL_STATE(59)] = 740,
  [SMALL_STATE(60)] = 744,
  [SMALL_STATE(61)] = 748,
  [SMALL_STATE(62)] = 752,
  [SMALL_STATE(63)] = 756,
  [SMALL_STATE(64)] = 760,
  [SMALL_STATE(65)] = 764,
  [SMALL_STATE(66)] = 768,
  [SMALL_STATE(67)] = 772,
  [SMALL_STATE(68)] = 776,
  [SMALL_STATE(69)] = 780,
  [SMALL_STATE(70)] = 784,
  [SMALL_STATE(71)] = 788,
  [SMALL_STATE(72)] = 792,
  [SMALL_STATE(73)] = 796,
  [SMALL_STATE(74)] = 800,
  [SMALL_STATE(75)] = 804,
  [SMALL_STATE(76)] = 808,
  [SMALL_STATE(77)] = 812,
  [SMALL_STATE(78)] = 816,
  [SMALL_STATE(79)] = 820,
  [SMALL_STATE(80)] = 824,
  [SMALL_STATE(81)] = 828,
  [SMALL_STATE(82)] = 832,
  [SMALL_STATE(83)] = 836,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__token_body, 2),
  [11] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__token_body, 2), SHIFT_REPEAT(45),
  [14] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__token_body, 2), SHIFT_REPEAT(80),
  [17] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__token_body, 2), SHIFT_REPEAT(78),
  [20] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__token_body, 2), SHIFT_REPEAT(42),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__token_body, 2), SHIFT_REPEAT(82),
  [26] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [28] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [32] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [42] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [44] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [46] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [48] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [50] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional_token_block, 6),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_token_block, 6),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_child_token_block, 4),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child_token_block, 4),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional_token_block, 7),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_token_block, 7),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__token_body, 2),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(22),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(40),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conditional_token_block_repeat1, 2),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conditional_token_block_repeat1, 2), SHIFT_REPEAT(51),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tokens_block, 4),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tokens_block, 5),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_switch_repeat1, 2),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_switch_repeat1, 2), SHIFT_REPEAT(47),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch, 2),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch, 3),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_switch_repeat1, 2),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_switch_repeat1, 3),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_switch_repeat1, 3),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_token_reference, 2),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_token_reference, 2),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string, 3),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dimension, 2),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [166] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hex, 2),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_token_declaration, 4),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_token_assignment, 3),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rgb, 7, .production_id = 1),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rgb, 9, .production_id = 1),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_token_value, 1),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_token_type, 1),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
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
