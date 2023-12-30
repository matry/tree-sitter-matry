#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 82
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 50
#define ALIAS_COUNT 3
#define TOKEN_COUNT 33
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
  sym_hex = 10,
  sym_identifier = 11,
  sym_multi_line_comment = 12,
  sym_negative_assertion = 13,
  sym_number = 14,
  sym_positive_assertion = 15,
  sym_ref_identifier = 16,
  aux_sym_rgb_token1 = 17,
  anon_sym_COMMA = 18,
  anon_sym_RPAREN = 19,
  sym_single_line_comment = 20,
  sym_string = 21,
  anon_sym_COLON = 22,
  anon_sym_tokens = 23,
  aux_sym_tokens_block_token1 = 24,
  aux_sym_tokens_block_token2 = 25,
  anon_sym_DOLLAR = 26,
  anon_sym_text = 27,
  anon_sym_color = 28,
  anon_sym_asset = 29,
  anon_sym_switch = 30,
  anon_sym_dimension = 31,
  anon_sym_range = 32,
  sym_source_file = 33,
  sym__string = 34,
  aux_sym__token_body = 35,
  sym_child_token_block = 36,
  sym_conditional_token_block = 37,
  sym_dimension = 38,
  sym_rgb = 39,
  sym_switch = 40,
  sym_token_assignment = 41,
  sym_tokens_block = 42,
  sym_token_declaration = 43,
  sym_token_reference = 44,
  sym_token_type = 45,
  sym_token_value = 46,
  aux_sym_source_file_repeat1 = 47,
  aux_sym_conditional_token_block_repeat1 = 48,
  aux_sym_switch_repeat1 = 49,
  alias_sym_blue_channel = 50,
  alias_sym_green_channel = 51,
  alias_sym_red_channel = 52,
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
  [sym_hex] = "hex",
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
  [sym_hex] = sym_hex,
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
  [sym_hex] = {
    .visible = true,
    .named = true,
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
  [6] = 5,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 9,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 14,
  [18] = 18,
  [19] = 18,
  [20] = 15,
  [21] = 16,
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
  [43] = 39,
  [44] = 42,
  [45] = 45,
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
  [67] = 38,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 72,
  [74] = 74,
  [75] = 71,
  [76] = 76,
  [77] = 68,
  [78] = 78,
  [79] = 69,
  [80] = 78,
  [81] = 81,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(79);
      if (lookahead == '"') ADVANCE(81);
      if (lookahead == '#') ADVANCE(96);
      if (lookahead == '$') ADVANCE(141);
      if (lookahead == '%') ADVANCE(95);
      if (lookahead == ')') ADVANCE(133);
      if (lookahead == '*') ADVANCE(83);
      if (lookahead == ',') ADVANCE(132);
      if (lookahead == '-') ADVANCE(72);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '0') ADVANCE(91);
      if (lookahead == '1') ADVANCE(88);
      if (lookahead == ':') ADVANCE(137);
      if (lookahead == 'a') ADVANCE(54);
      if (lookahead == 'c') ADVANCE(66);
      if (lookahead == 'd') ADVANCE(32);
      if (lookahead == 'e') ADVANCE(69);
      if (lookahead == 'i') ADVANCE(39);
      if (lookahead == 'm') ADVANCE(36);
      if (lookahead == 'p') ADVANCE(70);
      if (lookahead == 'r') ADVANCE(12);
      if (lookahead == 's') ADVANCE(61);
      if (lookahead == 't') ADVANCE(18);
      if (lookahead == 'v') ADVANCE(68);
      if (lookahead == 'w') ADVANCE(27);
      if (lookahead == '{') ADVANCE(84);
      if (lookahead == '}') ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(127);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(80);
      if (lookahead == '*') ADVANCE(83);
      if (lookahead == ',') ADVANCE(132);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(81);
      if (lookahead == '#') ADVANCE(96);
      if (lookahead == '$') ADVANCE(141);
      if (lookahead == '-') ADVANCE(72);
      if (lookahead == '/') ADVANCE(77);
      if (lookahead == 'r') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 3:
      if (lookahead == '(') ADVANCE(131);
      if (lookahead == 'a') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == '(') ADVANCE(131);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '/') ADVANCE(134);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(8);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(7);
      if (lookahead == '/') ADVANCE(125);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(7);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '0') ADVANCE(92);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(128);
      END_STATE();
    case 10:
      if (lookahead == '0') ADVANCE(90);
      if (lookahead == '1') ADVANCE(89);
      if (lookahead == 'a') ADVANCE(53);
      if (lookahead == 'c') ADVANCE(48);
      if (lookahead == 'd') ADVANCE(31);
      if (lookahead == 'r') ADVANCE(14);
      if (lookahead == 's') ADVANCE(62);
      if (lookahead == 't') ADVANCE(20);
      if (lookahead == 'w') ADVANCE(29);
      if (lookahead == '{') ADVANCE(139);
      if (lookahead == '}') ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 11:
      if (lookahead == '0') ADVANCE(93);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(40);
      if (lookahead == 'e') ADVANCE(36);
      if (lookahead == 'g') ADVANCE(16);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(53);
      if (lookahead == 'c') ADVANCE(48);
      if (lookahead == 'd') ADVANCE(31);
      if (lookahead == 'r') ADVANCE(14);
      if (lookahead == 's') ADVANCE(62);
      if (lookahead == 't') ADVANCE(20);
      if (lookahead == 'w') ADVANCE(29);
      if (lookahead == '}') ADVANCE(140);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(111);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(124);
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
      if (lookahead == 'e') ADVANCE(152);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(123);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
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
      if (lookahead == 'g') ADVANCE(99);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 26:
      if (lookahead == 'g') ADVANCE(19);
      END_STATE();
    case 27:
      if (lookahead == 'h') ADVANCE(22);
      END_STATE();
    case 28:
      if (lookahead == 'h') ADVANCE(148);
      END_STATE();
    case 29:
      if (lookahead == 'h') ADVANCE(102);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 30:
      if (lookahead == 'i') ADVANCE(57);
      END_STATE();
    case 31:
      if (lookahead == 'i') ADVANCE(110);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
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
      if (lookahead == 'm') ADVANCE(95);
      END_STATE();
    case 37:
      if (lookahead == 'm') ADVANCE(23);
      END_STATE();
    case 38:
      if (lookahead == 'n') ADVANCE(95);
      END_STATE();
    case 39:
      if (lookahead == 'n') ADVANCE(95);
      if (lookahead == 's') ADVANCE(129);
      END_STATE();
    case 40:
      if (lookahead == 'n') ADVANCE(26);
      END_STATE();
    case 41:
      if (lookahead == 'n') ADVANCE(86);
      END_STATE();
    case 42:
      if (lookahead == 'n') ADVANCE(150);
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
      if (lookahead == 'o') ADVANCE(109);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 49:
      if (lookahead == 'o') ADVANCE(60);
      END_STATE();
    case 50:
      if (lookahead == 'o') ADVANCE(42);
      END_STATE();
    case 51:
      if (lookahead == 'r') ADVANCE(144);
      END_STATE();
    case 52:
      if (lookahead == 's') ADVANCE(138);
      END_STATE();
    case 53:
      if (lookahead == 's') ADVANCE(119);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
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
      if (lookahead == 't') ADVANCE(142);
      END_STATE();
    case 59:
      if (lookahead == 't') ADVANCE(146);
      END_STATE();
    case 60:
      if (lookahead == 't') ADVANCE(126);
      END_STATE();
    case 61:
      if (lookahead == 'w') ADVANCE(30);
      END_STATE();
    case 62:
      if (lookahead == 'w') ADVANCE(107);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 63:
      if (lookahead == 'x') ADVANCE(95);
      END_STATE();
    case 64:
      if (lookahead == 'x') ADVANCE(58);
      END_STATE();
    case 65:
      if (lookahead == '{') ADVANCE(139);
      if (lookahead == '}') ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(65)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 66:
      if (lookahead == 'h' ||
          lookahead == 'm') ADVANCE(95);
      if (lookahead == 'o') ADVANCE(35);
      END_STATE();
    case 67:
      if (lookahead == 'h' ||
          lookahead == 'w') ADVANCE(95);
      END_STATE();
    case 68:
      if (lookahead == 'h' ||
          lookahead == 'w') ADVANCE(95);
      if (lookahead == 'm') ADVANCE(15);
      END_STATE();
    case 69:
      if (lookahead == 'm' ||
          lookahead == 'x') ADVANCE(95);
      END_STATE();
    case 70:
      if (lookahead == 'c' ||
          lookahead == 't' ||
          lookahead == 'x') ADVANCE(95);
      END_STATE();
    case 71:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(71)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 72:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      END_STATE();
    case 73:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(94);
      END_STATE();
    case 74:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      END_STATE();
    case 75:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 76:
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 77:
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 78:
      if (eof) ADVANCE(79);
      if (lookahead == '-') ADVANCE(72);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == 't') ADVANCE(46);
      if (lookahead == '{') ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(78)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym__newlines);
      if (lookahead == '\n') ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym__string_token1);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_asset_path);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_asterisk);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_when);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_when);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_decimal_range);
      if (lookahead == '.') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_decimal_range);
      if (lookahead == '.') ADVANCE(11);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_decimal_range);
      if (lookahead == '.') ADVANCE(73);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_decimal_range);
      if (lookahead == '.') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_decimal_range);
      if (lookahead == '0') ADVANCE(92);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(128);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_decimal_range);
      if (lookahead == '0') ADVANCE(93);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_decimal_range);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(94);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_dimensional_unit);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_hex);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(131);
      if (lookahead == 'a') ADVANCE(98);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(4);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(131);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(4);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(97);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(106);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(153);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(112);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(114);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(122);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(101);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(149);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(120);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(116);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(115);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(103);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(105);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(87);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(151);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(118);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(117);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(113);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(145);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(108);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(104);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(100);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(143);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(147);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(121);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_multi_line_comment);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_negative_assertion);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_positive_assertion);
      if (lookahead == ' ') ADVANCE(43);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_ref_identifier);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_rgb_token1);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_single_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(134);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\' &&
          lookahead != '^' &&
          lookahead != 'n') ADVANCE(136);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_string);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\' &&
          lookahead != '^' &&
          lookahead != 'n') ADVANCE(136);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_tokens);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_tokens_block_token1);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_tokens_block_token2);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_text);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_text);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_color);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_color);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_asset);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_asset);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_switch);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_switch);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_dimension);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_dimension);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_range);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_range);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 78},
  [2] = {.lex_state = 10},
  [3] = {.lex_state = 13},
  [4] = {.lex_state = 13},
  [5] = {.lex_state = 10},
  [6] = {.lex_state = 10},
  [7] = {.lex_state = 13},
  [8] = {.lex_state = 10},
  [9] = {.lex_state = 10},
  [10] = {.lex_state = 10},
  [11] = {.lex_state = 10},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 13},
  [15] = {.lex_state = 13},
  [16] = {.lex_state = 13},
  [17] = {.lex_state = 10},
  [18] = {.lex_state = 10},
  [19] = {.lex_state = 13},
  [20] = {.lex_state = 10},
  [21] = {.lex_state = 10},
  [22] = {.lex_state = 78},
  [23] = {.lex_state = 78},
  [24] = {.lex_state = 65},
  [25] = {.lex_state = 65},
  [26] = {.lex_state = 65},
  [27] = {.lex_state = 65},
  [28] = {.lex_state = 78},
  [29] = {.lex_state = 78},
  [30] = {.lex_state = 65},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 65},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 65},
  [46] = {.lex_state = 65},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 78},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 78},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 78},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 10},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 1},
  [66] = {.lex_state = 135},
  [67] = {.lex_state = 1},
  [68] = {.lex_state = 78},
  [69] = {.lex_state = 65},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 71},
  [73] = {.lex_state = 71},
  [74] = {.lex_state = 65},
  [75] = {.lex_state = 1},
  [76] = {.lex_state = 65},
  [77] = {.lex_state = 78},
  [78] = {.lex_state = 78},
  [79] = {.lex_state = 65},
  [80] = {.lex_state = 78},
  [81] = {.lex_state = 10},
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
    [sym_hex] = ACTIONS(1),
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
    [sym_source_file] = STATE(52),
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
    STATE(71), 1,
      sym_token_declaration,
    STATE(74), 1,
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
    STATE(74), 1,
      sym_token_type,
    STATE(75), 1,
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
  [58] = 7,
    ACTIONS(26), 1,
      anon_sym_when,
    ACTIONS(28), 1,
      sym_identifier,
    ACTIONS(30), 1,
      aux_sym_tokens_block_token2,
    STATE(74), 1,
      sym_token_type,
    STATE(75), 1,
      sym_token_declaration,
    STATE(3), 3,
      aux_sym__token_body,
      sym_child_token_block,
      sym_conditional_token_block,
    ACTIONS(32), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [87] = 7,
    ACTIONS(34), 1,
      anon_sym_RBRACE,
    ACTIONS(36), 1,
      anon_sym_when,
    ACTIONS(38), 1,
      sym_identifier,
    STATE(71), 1,
      sym_token_declaration,
    STATE(74), 1,
      sym_token_type,
    STATE(2), 3,
      aux_sym__token_body,
      sym_child_token_block,
      sym_conditional_token_block,
    ACTIONS(32), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [116] = 7,
    ACTIONS(36), 1,
      anon_sym_when,
    ACTIONS(38), 1,
      sym_identifier,
    ACTIONS(40), 1,
      anon_sym_RBRACE,
    STATE(71), 1,
      sym_token_declaration,
    STATE(74), 1,
      sym_token_type,
    STATE(2), 3,
      aux_sym__token_body,
      sym_child_token_block,
      sym_conditional_token_block,
    ACTIONS(32), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [145] = 7,
    ACTIONS(26), 1,
      anon_sym_when,
    ACTIONS(28), 1,
      sym_identifier,
    ACTIONS(42), 1,
      aux_sym_tokens_block_token2,
    STATE(74), 1,
      sym_token_type,
    STATE(75), 1,
      sym_token_declaration,
    STATE(3), 3,
      aux_sym__token_body,
      sym_child_token_block,
      sym_conditional_token_block,
    ACTIONS(32), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [174] = 6,
    ACTIONS(26), 1,
      anon_sym_when,
    ACTIONS(28), 1,
      sym_identifier,
    STATE(74), 1,
      sym_token_type,
    STATE(75), 1,
      sym_token_declaration,
    STATE(7), 3,
      aux_sym__token_body,
      sym_child_token_block,
      sym_conditional_token_block,
    ACTIONS(32), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [200] = 6,
    ACTIONS(36), 1,
      anon_sym_when,
    ACTIONS(38), 1,
      sym_identifier,
    STATE(71), 1,
      sym_token_declaration,
    STATE(74), 1,
      sym_token_type,
    STATE(5), 3,
      aux_sym__token_body,
      sym_child_token_block,
      sym_conditional_token_block,
    ACTIONS(32), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [226] = 6,
    ACTIONS(26), 1,
      anon_sym_when,
    ACTIONS(28), 1,
      sym_identifier,
    STATE(74), 1,
      sym_token_type,
    STATE(75), 1,
      sym_token_declaration,
    STATE(4), 3,
      aux_sym__token_body,
      sym_child_token_block,
      sym_conditional_token_block,
    ACTIONS(32), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [252] = 6,
    ACTIONS(36), 1,
      anon_sym_when,
    ACTIONS(38), 1,
      sym_identifier,
    STATE(71), 1,
      sym_token_declaration,
    STATE(74), 1,
      sym_token_type,
    STATE(6), 3,
      aux_sym__token_body,
      sym_child_token_block,
      sym_conditional_token_block,
    ACTIONS(32), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [278] = 8,
    ACTIONS(44), 1,
      aux_sym__string_token1,
    ACTIONS(48), 1,
      sym_identifier,
    ACTIONS(50), 1,
      sym_number,
    ACTIONS(52), 1,
      aux_sym_rgb_token1,
    ACTIONS(54), 1,
      anon_sym_DOLLAR,
    STATE(55), 1,
      sym_token_value,
    ACTIONS(46), 2,
      sym_asset_path,
      sym_hex,
    STATE(65), 5,
      sym__string,
      sym_dimension,
      sym_rgb,
      sym_switch,
      sym_token_reference,
  [308] = 8,
    ACTIONS(44), 1,
      aux_sym__string_token1,
    ACTIONS(48), 1,
      sym_identifier,
    ACTIONS(50), 1,
      sym_number,
    ACTIONS(52), 1,
      aux_sym_rgb_token1,
    ACTIONS(54), 1,
      anon_sym_DOLLAR,
    STATE(58), 1,
      sym_token_value,
    ACTIONS(46), 2,
      sym_asset_path,
      sym_hex,
    STATE(65), 5,
      sym__string,
      sym_dimension,
      sym_rgb,
      sym_switch,
      sym_token_reference,
  [338] = 2,
    ACTIONS(58), 1,
      aux_sym_tokens_block_token2,
    ACTIONS(56), 8,
      anon_sym_when,
      sym_identifier,
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
    ACTIONS(58), 1,
      anon_sym_RBRACE,
    ACTIONS(56), 8,
      anon_sym_when,
      sym_identifier,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [394] = 2,
    ACTIONS(9), 1,
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
  [408] = 2,
    ACTIONS(9), 1,
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
  [422] = 2,
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
  [436] = 2,
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
  [450] = 4,
    ACTIONS(70), 1,
      ts_builtin_sym_end,
    ACTIONS(75), 1,
      anon_sym_tokens,
    ACTIONS(72), 2,
      sym_multi_line_comment,
      sym_single_line_comment,
    STATE(22), 2,
      sym_tokens_block,
      aux_sym_source_file_repeat1,
  [465] = 4,
    ACTIONS(7), 1,
      anon_sym_tokens,
    ACTIONS(78), 1,
      ts_builtin_sym_end,
    ACTIONS(80), 2,
      sym_multi_line_comment,
      sym_single_line_comment,
    STATE(22), 2,
      sym_tokens_block,
      aux_sym_source_file_repeat1,
  [480] = 4,
    ACTIONS(82), 1,
      anon_sym_RBRACE,
    ACTIONS(84), 1,
      sym_identifier,
    STATE(25), 1,
      aux_sym_conditional_token_block_repeat1,
    STATE(49), 1,
      sym_token_assignment,
  [493] = 4,
    ACTIONS(86), 1,
      anon_sym_RBRACE,
    ACTIONS(88), 1,
      sym_identifier,
    STATE(25), 1,
      aux_sym_conditional_token_block_repeat1,
    STATE(49), 1,
      sym_token_assignment,
  [506] = 4,
    ACTIONS(84), 1,
      sym_identifier,
    ACTIONS(91), 1,
      anon_sym_RBRACE,
    STATE(25), 1,
      aux_sym_conditional_token_block_repeat1,
    STATE(49), 1,
      sym_token_assignment,
  [519] = 4,
    ACTIONS(84), 1,
      sym_identifier,
    ACTIONS(93), 1,
      anon_sym_RBRACE,
    STATE(26), 1,
      aux_sym_conditional_token_block_repeat1,
    STATE(49), 1,
      sym_token_assignment,
  [532] = 1,
    ACTIONS(95), 4,
      ts_builtin_sym_end,
      sym_multi_line_comment,
      sym_single_line_comment,
      anon_sym_tokens,
  [539] = 1,
    ACTIONS(97), 4,
      ts_builtin_sym_end,
      sym_multi_line_comment,
      sym_single_line_comment,
      anon_sym_tokens,
  [546] = 4,
    ACTIONS(84), 1,
      sym_identifier,
    ACTIONS(99), 1,
      anon_sym_RBRACE,
    STATE(24), 1,
      aux_sym_conditional_token_block_repeat1,
    STATE(49), 1,
      sym_token_assignment,
  [559] = 3,
    ACTIONS(101), 1,
      sym__newlines,
    ACTIONS(103), 1,
      anon_sym_COMMA,
    STATE(31), 1,
      aux_sym_switch_repeat1,
  [569] = 3,
    ACTIONS(106), 1,
      sym_asterisk,
    ACTIONS(108), 1,
      anon_sym_COMMA,
    STATE(33), 1,
      aux_sym_switch_repeat1,
  [579] = 3,
    ACTIONS(110), 1,
      sym__newlines,
    ACTIONS(112), 1,
      anon_sym_COMMA,
    STATE(31), 1,
      aux_sym_switch_repeat1,
  [589] = 3,
    ACTIONS(112), 1,
      anon_sym_COMMA,
    ACTIONS(114), 1,
      sym__newlines,
    STATE(31), 1,
      aux_sym_switch_repeat1,
  [599] = 3,
    ACTIONS(101), 1,
      sym__newlines,
    ACTIONS(116), 1,
      sym_asterisk,
    ACTIONS(118), 1,
      anon_sym_COMMA,
  [609] = 2,
    ACTIONS(120), 1,
      anon_sym_COMMA,
    ACTIONS(122), 1,
      anon_sym_RPAREN,
  [616] = 2,
    ACTIONS(124), 1,
      sym__newlines,
    ACTIONS(126), 1,
      anon_sym_COMMA,
  [623] = 2,
    ACTIONS(128), 1,
      sym_negative_assertion,
    ACTIONS(130), 1,
      sym_positive_assertion,
  [630] = 2,
    ACTIONS(132), 1,
      sym_negative_assertion,
    ACTIONS(134), 1,
      sym_positive_assertion,
  [637] = 1,
    ACTIONS(86), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [642] = 2,
    ACTIONS(108), 1,
      anon_sym_COMMA,
    STATE(34), 1,
      aux_sym_switch_repeat1,
  [649] = 2,
    ACTIONS(136), 1,
      anon_sym_DOLLAR,
    STATE(39), 1,
      sym_token_reference,
  [656] = 2,
    ACTIONS(138), 1,
      sym_negative_assertion,
    ACTIONS(140), 1,
      sym_positive_assertion,
  [663] = 2,
    ACTIONS(136), 1,
      anon_sym_DOLLAR,
    STATE(43), 1,
      sym_token_reference,
  [670] = 2,
    ACTIONS(142), 1,
      sym_identifier,
    ACTIONS(144), 1,
      aux_sym_tokens_block_token1,
  [677] = 1,
    ACTIONS(146), 1,
      sym_identifier,
  [681] = 1,
    ACTIONS(148), 1,
      sym__newlines,
  [685] = 1,
    ACTIONS(150), 1,
      anon_sym_COLON,
  [689] = 1,
    ACTIONS(152), 1,
      sym__newlines,
  [693] = 1,
    ACTIONS(154), 1,
      anon_sym_COMMA,
  [697] = 1,
    ACTIONS(156), 1,
      sym_number,
  [701] = 1,
    ACTIONS(158), 1,
      ts_builtin_sym_end,
  [705] = 1,
    ACTIONS(160), 1,
      sym__newlines,
  [709] = 1,
    ACTIONS(162), 1,
      aux_sym__string_token1,
  [713] = 1,
    ACTIONS(164), 1,
      sym__newlines,
  [717] = 1,
    ACTIONS(166), 1,
      sym_number,
  [721] = 1,
    ACTIONS(168), 1,
      anon_sym_COMMA,
  [725] = 1,
    ACTIONS(170), 1,
      sym__newlines,
  [729] = 1,
    ACTIONS(172), 1,
      sym_number,
  [733] = 1,
    ACTIONS(174), 1,
      sym_dimensional_unit,
  [737] = 1,
    ACTIONS(176), 1,
      sym_decimal_range,
  [741] = 1,
    ACTIONS(178), 1,
      sym__newlines,
  [745] = 1,
    ACTIONS(180), 1,
      anon_sym_RPAREN,
  [749] = 1,
    ACTIONS(182), 1,
      sym__newlines,
  [753] = 1,
    ACTIONS(184), 1,
      sym__newlines,
  [757] = 1,
    ACTIONS(186), 1,
      sym_string,
  [761] = 1,
    ACTIONS(128), 1,
      sym__newlines,
  [765] = 1,
    ACTIONS(188), 1,
      anon_sym_LBRACE,
  [769] = 1,
    ACTIONS(190), 1,
      sym_identifier,
  [773] = 1,
    ACTIONS(192), 1,
      anon_sym_COLON,
  [777] = 1,
    ACTIONS(194), 1,
      sym__newlines,
  [781] = 1,
    ACTIONS(196), 1,
      sym_ref_identifier,
  [785] = 1,
    ACTIONS(198), 1,
      sym_ref_identifier,
  [789] = 1,
    ACTIONS(200), 1,
      sym_identifier,
  [793] = 1,
    ACTIONS(202), 1,
      sym__newlines,
  [797] = 1,
    ACTIONS(204), 1,
      sym_identifier,
  [801] = 1,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
  [805] = 1,
    ACTIONS(208), 1,
      anon_sym_LBRACE,
  [809] = 1,
    ACTIONS(210), 1,
      sym_identifier,
  [813] = 1,
    ACTIONS(212), 1,
      anon_sym_LBRACE,
  [817] = 1,
    ACTIONS(214), 1,
      aux_sym_tokens_block_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 29,
  [SMALL_STATE(4)] = 58,
  [SMALL_STATE(5)] = 87,
  [SMALL_STATE(6)] = 116,
  [SMALL_STATE(7)] = 145,
  [SMALL_STATE(8)] = 174,
  [SMALL_STATE(9)] = 200,
  [SMALL_STATE(10)] = 226,
  [SMALL_STATE(11)] = 252,
  [SMALL_STATE(12)] = 278,
  [SMALL_STATE(13)] = 308,
  [SMALL_STATE(14)] = 338,
  [SMALL_STATE(15)] = 352,
  [SMALL_STATE(16)] = 366,
  [SMALL_STATE(17)] = 380,
  [SMALL_STATE(18)] = 394,
  [SMALL_STATE(19)] = 408,
  [SMALL_STATE(20)] = 422,
  [SMALL_STATE(21)] = 436,
  [SMALL_STATE(22)] = 450,
  [SMALL_STATE(23)] = 465,
  [SMALL_STATE(24)] = 480,
  [SMALL_STATE(25)] = 493,
  [SMALL_STATE(26)] = 506,
  [SMALL_STATE(27)] = 519,
  [SMALL_STATE(28)] = 532,
  [SMALL_STATE(29)] = 539,
  [SMALL_STATE(30)] = 546,
  [SMALL_STATE(31)] = 559,
  [SMALL_STATE(32)] = 569,
  [SMALL_STATE(33)] = 579,
  [SMALL_STATE(34)] = 589,
  [SMALL_STATE(35)] = 599,
  [SMALL_STATE(36)] = 609,
  [SMALL_STATE(37)] = 616,
  [SMALL_STATE(38)] = 623,
  [SMALL_STATE(39)] = 630,
  [SMALL_STATE(40)] = 637,
  [SMALL_STATE(41)] = 642,
  [SMALL_STATE(42)] = 649,
  [SMALL_STATE(43)] = 656,
  [SMALL_STATE(44)] = 663,
  [SMALL_STATE(45)] = 670,
  [SMALL_STATE(46)] = 677,
  [SMALL_STATE(47)] = 681,
  [SMALL_STATE(48)] = 685,
  [SMALL_STATE(49)] = 689,
  [SMALL_STATE(50)] = 693,
  [SMALL_STATE(51)] = 697,
  [SMALL_STATE(52)] = 701,
  [SMALL_STATE(53)] = 705,
  [SMALL_STATE(54)] = 709,
  [SMALL_STATE(55)] = 713,
  [SMALL_STATE(56)] = 717,
  [SMALL_STATE(57)] = 721,
  [SMALL_STATE(58)] = 725,
  [SMALL_STATE(59)] = 729,
  [SMALL_STATE(60)] = 733,
  [SMALL_STATE(61)] = 737,
  [SMALL_STATE(62)] = 741,
  [SMALL_STATE(63)] = 745,
  [SMALL_STATE(64)] = 749,
  [SMALL_STATE(65)] = 753,
  [SMALL_STATE(66)] = 757,
  [SMALL_STATE(67)] = 761,
  [SMALL_STATE(68)] = 765,
  [SMALL_STATE(69)] = 769,
  [SMALL_STATE(70)] = 773,
  [SMALL_STATE(71)] = 777,
  [SMALL_STATE(72)] = 781,
  [SMALL_STATE(73)] = 785,
  [SMALL_STATE(74)] = 789,
  [SMALL_STATE(75)] = 793,
  [SMALL_STATE(76)] = 797,
  [SMALL_STATE(77)] = 801,
  [SMALL_STATE(78)] = 805,
  [SMALL_STATE(79)] = 809,
  [SMALL_STATE(80)] = 813,
  [SMALL_STATE(81)] = 817,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__token_body, 2),
  [11] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__token_body, 2), SHIFT_REPEAT(44),
  [14] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__token_body, 2), SHIFT_REPEAT(78),
  [17] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__token_body, 2), SHIFT_REPEAT(76),
  [20] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__token_body, 2), SHIFT_REPEAT(42),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__token_body, 2), SHIFT_REPEAT(80),
  [26] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [28] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [32] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [36] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [38] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [48] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional_token_block, 7),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_token_block, 7),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional_token_block, 6),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_token_block, 6),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_child_token_block, 4),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child_token_block, 4),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__token_body, 2),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(22),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(45),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conditional_token_block_repeat1, 2),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conditional_token_block_repeat1, 2), SHIFT_REPEAT(48),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tokens_block, 4),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tokens_block, 5),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_switch_repeat1, 2),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_switch_repeat1, 2), SHIFT_REPEAT(46),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch, 2),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch, 3),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_switch_repeat1, 2),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_switch_repeat1, 3),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_switch_repeat1, 3),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_token_reference, 2),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_token_reference, 2),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string, 3),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [158] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dimension, 2),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_token_declaration, 4),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_token_assignment, 3),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rgb, 7, .production_id = 1),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rgb, 9, .production_id = 1),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_token_value, 1),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_token_type, 1),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
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
