#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 72
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 46
#define ALIAS_COUNT 0
#define TOKEN_COUNT 30
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_tokens = 1,
  aux_sym_tokens_block_token1 = 2,
  aux_sym_tokens_block_token2 = 3,
  sym_string = 4,
  aux_sym__string_token1 = 5,
  sym_identifier = 6,
  sym_ref_identifier = 7,
  sym_asset_path = 8,
  anon_sym_LBRACE = 9,
  anon_sym_RBRACE = 10,
  anon_sym_when = 11,
  anon_sym_DOLLAR = 12,
  sym__newlines = 13,
  anon_sym_text = 14,
  anon_sym_color = 15,
  anon_sym_asset = 16,
  anon_sym_switch = 17,
  anon_sym_dimension = 18,
  anon_sym_range = 19,
  anon_sym_COLON = 20,
  sym_positive_assertion = 21,
  sym_negative_assertion = 22,
  sym_hex = 23,
  sym_number = 24,
  sym_dimensional_unit = 25,
  sym_single_line_comment = 26,
  sym_multi_line_comment = 27,
  sym_asterisk = 28,
  anon_sym_COMMA = 29,
  sym_source_file = 30,
  sym_tokens_block = 31,
  sym__string = 32,
  aux_sym__token_body = 33,
  sym_child_token_block = 34,
  sym_conditional_token_block = 35,
  sym_token_reference = 36,
  sym_token_type = 37,
  sym_token_declaration = 38,
  sym_token_assignment = 39,
  sym_token_value = 40,
  sym_dimension = 41,
  sym_switch = 42,
  aux_sym_source_file_repeat1 = 43,
  aux_sym_conditional_token_block_repeat1 = 44,
  aux_sym_switch_repeat1 = 45,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_tokens] = "tokens",
  [aux_sym_tokens_block_token1] = "tokens_block_token1",
  [aux_sym_tokens_block_token2] = "tokens_block_token2",
  [sym_string] = "string",
  [aux_sym__string_token1] = "_string_token1",
  [sym_identifier] = "identifier",
  [sym_ref_identifier] = "ref_identifier",
  [sym_asset_path] = "asset_path",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_when] = "when",
  [anon_sym_DOLLAR] = "$",
  [sym__newlines] = "_newlines",
  [anon_sym_text] = "text",
  [anon_sym_color] = "color",
  [anon_sym_asset] = "asset",
  [anon_sym_switch] = "switch",
  [anon_sym_dimension] = "dimension",
  [anon_sym_range] = "range",
  [anon_sym_COLON] = ":",
  [sym_positive_assertion] = "positive_assertion",
  [sym_negative_assertion] = "negative_assertion",
  [sym_hex] = "hex",
  [sym_number] = "number",
  [sym_dimensional_unit] = "dimensional_unit",
  [sym_single_line_comment] = "single_line_comment",
  [sym_multi_line_comment] = "multi_line_comment",
  [sym_asterisk] = "asterisk",
  [anon_sym_COMMA] = ",",
  [sym_source_file] = "source_file",
  [sym_tokens_block] = "tokens_block",
  [sym__string] = "_string",
  [aux_sym__token_body] = "_token_body",
  [sym_child_token_block] = "child_token_block",
  [sym_conditional_token_block] = "conditional_token_block",
  [sym_token_reference] = "token_reference",
  [sym_token_type] = "token_type",
  [sym_token_declaration] = "token_declaration",
  [sym_token_assignment] = "token_assignment",
  [sym_token_value] = "token_value",
  [sym_dimension] = "dimension",
  [sym_switch] = "switch",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_conditional_token_block_repeat1] = "conditional_token_block_repeat1",
  [aux_sym_switch_repeat1] = "switch_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_tokens] = anon_sym_tokens,
  [aux_sym_tokens_block_token1] = aux_sym_tokens_block_token1,
  [aux_sym_tokens_block_token2] = aux_sym_tokens_block_token2,
  [sym_string] = sym_string,
  [aux_sym__string_token1] = aux_sym__string_token1,
  [sym_identifier] = sym_identifier,
  [sym_ref_identifier] = sym_ref_identifier,
  [sym_asset_path] = sym_asset_path,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_when] = anon_sym_when,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [sym__newlines] = sym__newlines,
  [anon_sym_text] = anon_sym_text,
  [anon_sym_color] = anon_sym_color,
  [anon_sym_asset] = anon_sym_asset,
  [anon_sym_switch] = anon_sym_switch,
  [anon_sym_dimension] = anon_sym_dimension,
  [anon_sym_range] = anon_sym_range,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_positive_assertion] = sym_positive_assertion,
  [sym_negative_assertion] = sym_negative_assertion,
  [sym_hex] = sym_hex,
  [sym_number] = sym_number,
  [sym_dimensional_unit] = sym_dimensional_unit,
  [sym_single_line_comment] = sym_single_line_comment,
  [sym_multi_line_comment] = sym_multi_line_comment,
  [sym_asterisk] = sym_asterisk,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [sym_source_file] = sym_source_file,
  [sym_tokens_block] = sym_tokens_block,
  [sym__string] = sym__string,
  [aux_sym__token_body] = aux_sym__token_body,
  [sym_child_token_block] = sym_child_token_block,
  [sym_conditional_token_block] = sym_conditional_token_block,
  [sym_token_reference] = sym_token_reference,
  [sym_token_type] = sym_token_type,
  [sym_token_declaration] = sym_token_declaration,
  [sym_token_assignment] = sym_token_assignment,
  [sym_token_value] = sym_token_value,
  [sym_dimension] = sym_dimension,
  [sym_switch] = sym_switch,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_conditional_token_block_repeat1] = aux_sym_conditional_token_block_repeat1,
  [aux_sym_switch_repeat1] = aux_sym_switch_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
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
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__string_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_ref_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_asset_path] = {
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
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [sym__newlines] = {
    .visible = false,
    .named = true,
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
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_positive_assertion] = {
    .visible = true,
    .named = true,
  },
  [sym_negative_assertion] = {
    .visible = true,
    .named = true,
  },
  [sym_hex] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_dimensional_unit] = {
    .visible = true,
    .named = true,
  },
  [sym_single_line_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_multi_line_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_asterisk] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_tokens_block] = {
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
  [sym_token_reference] = {
    .visible = true,
    .named = true,
  },
  [sym_token_type] = {
    .visible = true,
    .named = true,
  },
  [sym_token_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_token_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym_token_value] = {
    .visible = true,
    .named = true,
  },
  [sym_dimension] = {
    .visible = true,
    .named = true,
  },
  [sym_switch] = {
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
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 2,
  [5] = 5,
  [6] = 6,
  [7] = 5,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 9,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 16,
  [18] = 14,
  [19] = 19,
  [20] = 15,
  [21] = 19,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 25,
  [28] = 28,
  [29] = 29,
  [30] = 29,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 38,
  [41] = 39,
  [42] = 42,
  [43] = 43,
  [44] = 44,
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
  [57] = 45,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 58,
  [62] = 56,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 51,
  [68] = 64,
  [69] = 52,
  [70] = 70,
  [71] = 71,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(74);
      if (lookahead == '"') ADVANCE(80);
      if (lookahead == '#') ADVANCE(129);
      if (lookahead == '$') ADVANCE(112);
      if (lookahead == '%') ADVANCE(132);
      if (lookahead == '*') ADVANCE(135);
      if (lookahead == ',') ADVANCE(136);
      if (lookahead == '-') ADVANCE(68);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == ':') ADVANCE(126);
      if (lookahead == 'a') ADVANCE(49);
      if (lookahead == 'c') ADVANCE(62);
      if (lookahead == 'd') ADVANCE(27);
      if (lookahead == 'e') ADVANCE(65);
      if (lookahead == 'i') ADVANCE(34);
      if (lookahead == 'm') ADVANCE(31);
      if (lookahead == 'p') ADVANCE(66);
      if (lookahead == 'r') ADVANCE(7);
      if (lookahead == 's') ADVANCE(57);
      if (lookahead == 't') ADVANCE(14);
      if (lookahead == 'v') ADVANCE(64);
      if (lookahead == 'w') ADVANCE(22);
      if (lookahead == '{') ADVANCE(108);
      if (lookahead == '}') ADVANCE(109);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(113);
      if (lookahead == '%') ADVANCE(132);
      if (lookahead == '*') ADVANCE(135);
      if (lookahead == ',') ADVANCE(136);
      if (lookahead == 'c') ADVANCE(61);
      if (lookahead == 'd') ADVANCE(56);
      if (lookahead == 'e') ADVANCE(65);
      if (lookahead == 'i') ADVANCE(33);
      if (lookahead == 'm') ADVANCE(31);
      if (lookahead == 'p') ADVANCE(66);
      if (lookahead == 'r') ADVANCE(13);
      if (lookahead == 'v') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(80);
      if (lookahead == '#') ADVANCE(129);
      if (lookahead == '$') ADVANCE(112);
      if (lookahead == '-') ADVANCE(68);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == '{') ADVANCE(76);
      if (lookahead == '}') ADVANCE(109);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '/') ADVANCE(133);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(6);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '/') ADVANCE(134);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(35);
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(48);
      if (lookahead == 'c') ADVANCE(43);
      if (lookahead == 'd') ADVANCE(26);
      if (lookahead == 'r') ADVANCE(10);
      if (lookahead == 's') ADVANCE(58);
      if (lookahead == 't') ADVANCE(16);
      if (lookahead == 'w') ADVANCE(24);
      if (lookahead == '{') ADVANCE(76);
      if (lookahead == '}') ADVANCE(109);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(48);
      if (lookahead == 'c') ADVANCE(43);
      if (lookahead == 'd') ADVANCE(26);
      if (lookahead == 'r') ADVANCE(10);
      if (lookahead == 's') ADVANCE(58);
      if (lookahead == 't') ADVANCE(16);
      if (lookahead == 'w') ADVANCE(24);
      if (lookahead == '}') ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(92);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(59);
      if (lookahead == 'i') ADVANCE(33);
      END_STATE();
    case 12:
      if (lookahead == 'c') ADVANCE(23);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(60);
      if (lookahead == 'o') ADVANCE(29);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(124);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(104);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 21:
      if (lookahead == 'g') ADVANCE(15);
      END_STATE();
    case 22:
      if (lookahead == 'h') ADVANCE(18);
      END_STATE();
    case 23:
      if (lookahead == 'h') ADVANCE(120);
      END_STATE();
    case 24:
      if (lookahead == 'h') ADVANCE(83);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 25:
      if (lookahead == 'i') ADVANCE(52);
      END_STATE();
    case 26:
      if (lookahead == 'i') ADVANCE(91);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 27:
      if (lookahead == 'i') ADVANCE(32);
      if (lookahead == 'v') ADVANCE(63);
      END_STATE();
    case 28:
      if (lookahead == 'i') ADVANCE(45);
      END_STATE();
    case 29:
      if (lookahead == 'k') ADVANCE(20);
      END_STATE();
    case 30:
      if (lookahead == 'l') ADVANCE(42);
      END_STATE();
    case 31:
      if (lookahead == 'm') ADVANCE(132);
      END_STATE();
    case 32:
      if (lookahead == 'm') ADVANCE(19);
      END_STATE();
    case 33:
      if (lookahead == 'n') ADVANCE(132);
      END_STATE();
    case 34:
      if (lookahead == 'n') ADVANCE(132);
      if (lookahead == 's') ADVANCE(127);
      END_STATE();
    case 35:
      if (lookahead == 'n') ADVANCE(21);
      END_STATE();
    case 36:
      if (lookahead == 'n') ADVANCE(110);
      END_STATE();
    case 37:
      if (lookahead == 'n') ADVANCE(122);
      END_STATE();
    case 38:
      if (lookahead == 'n') ADVANCE(44);
      END_STATE();
    case 39:
      if (lookahead == 'n') ADVANCE(50);
      END_STATE();
    case 40:
      if (lookahead == 'n') ADVANCE(47);
      END_STATE();
    case 41:
      if (lookahead == 'o') ADVANCE(29);
      END_STATE();
    case 42:
      if (lookahead == 'o') ADVANCE(46);
      END_STATE();
    case 43:
      if (lookahead == 'o') ADVANCE(90);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 44:
      if (lookahead == 'o') ADVANCE(55);
      END_STATE();
    case 45:
      if (lookahead == 'o') ADVANCE(37);
      END_STATE();
    case 46:
      if (lookahead == 'r') ADVANCE(116);
      END_STATE();
    case 47:
      if (lookahead == 's') ADVANCE(75);
      END_STATE();
    case 48:
      if (lookahead == 's') ADVANCE(100);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 49:
      if (lookahead == 's') ADVANCE(51);
      END_STATE();
    case 50:
      if (lookahead == 's') ADVANCE(28);
      END_STATE();
    case 51:
      if (lookahead == 's') ADVANCE(17);
      END_STATE();
    case 52:
      if (lookahead == 't') ADVANCE(12);
      END_STATE();
    case 53:
      if (lookahead == 't') ADVANCE(114);
      END_STATE();
    case 54:
      if (lookahead == 't') ADVANCE(118);
      END_STATE();
    case 55:
      if (lookahead == 't') ADVANCE(128);
      END_STATE();
    case 56:
      if (lookahead == 'v') ADVANCE(63);
      END_STATE();
    case 57:
      if (lookahead == 'w') ADVANCE(25);
      END_STATE();
    case 58:
      if (lookahead == 'w') ADVANCE(88);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 59:
      if (lookahead == 'x') ADVANCE(132);
      END_STATE();
    case 60:
      if (lookahead == 'x') ADVANCE(53);
      END_STATE();
    case 61:
      if (lookahead == 'h' ||
          lookahead == 'm') ADVANCE(132);
      END_STATE();
    case 62:
      if (lookahead == 'h' ||
          lookahead == 'm') ADVANCE(132);
      if (lookahead == 'o') ADVANCE(30);
      END_STATE();
    case 63:
      if (lookahead == 'h' ||
          lookahead == 'w') ADVANCE(132);
      END_STATE();
    case 64:
      if (lookahead == 'h' ||
          lookahead == 'w') ADVANCE(132);
      if (lookahead == 'm') ADVANCE(11);
      END_STATE();
    case 65:
      if (lookahead == 'm' ||
          lookahead == 'x') ADVANCE(132);
      END_STATE();
    case 66:
      if (lookahead == 'c' ||
          lookahead == 't' ||
          lookahead == 'x') ADVANCE(132);
      END_STATE();
    case 67:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(67)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 68:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      END_STATE();
    case 69:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(131);
      END_STATE();
    case 70:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 71:
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 72:
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 73:
      if (eof) ADVANCE(74);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == 't') ADVANCE(41);
      if (lookahead == '{') ADVANCE(108);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(73)
      END_STATE();
    case 74:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_tokens);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_tokens_block_token1);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_tokens_block_token2);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\' &&
          lookahead != '^' &&
          lookahead != 'n') ADVANCE(79);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_string);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\' &&
          lookahead != '^' &&
          lookahead != 'n') ADVANCE(79);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym__string_token1);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(87);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(125);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(93);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(95);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(103);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(82);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(121);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(101);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(97);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(96);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(84);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(86);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(111);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(123);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(99);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(98);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(94);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(117);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(89);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(85);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(81);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(115);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(119);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(102);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_ref_identifier);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_asset_path);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_when);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_when);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__newlines);
      if (lookahead == '\n') ADVANCE(113);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_text);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_text);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_color);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_color);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_asset);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_asset);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_switch);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_switch);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_dimension);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_dimension);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_range);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_range);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_positive_assertion);
      if (lookahead == ' ') ADVANCE(38);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_negative_assertion);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_hex);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(131);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_dimensional_unit);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_single_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(133);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_multi_line_comment);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_asterisk);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 73},
  [2] = {.lex_state = 8},
  [3] = {.lex_state = 9},
  [4] = {.lex_state = 8},
  [5] = {.lex_state = 9},
  [6] = {.lex_state = 9},
  [7] = {.lex_state = 8},
  [8] = {.lex_state = 8},
  [9] = {.lex_state = 8},
  [10] = {.lex_state = 8},
  [11] = {.lex_state = 8},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 9},
  [15] = {.lex_state = 8},
  [16] = {.lex_state = 9},
  [17] = {.lex_state = 8},
  [18] = {.lex_state = 8},
  [19] = {.lex_state = 9},
  [20] = {.lex_state = 9},
  [21] = {.lex_state = 8},
  [22] = {.lex_state = 73},
  [23] = {.lex_state = 73},
  [24] = {.lex_state = 73},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 73},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 78},
  [51] = {.lex_state = 73},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 67},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 2},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 67},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 73},
  [65] = {.lex_state = 8},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 73},
  [68] = {.lex_state = 73},
  [69] = {.lex_state = 2},
  [70] = {.lex_state = 1},
  [71] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_tokens] = ACTIONS(1),
    [aux_sym_tokens_block_token1] = ACTIONS(1),
    [aux_sym_tokens_block_token2] = ACTIONS(1),
    [aux_sym__string_token1] = ACTIONS(1),
    [sym_asset_path] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_when] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_text] = ACTIONS(1),
    [anon_sym_color] = ACTIONS(1),
    [anon_sym_asset] = ACTIONS(1),
    [anon_sym_switch] = ACTIONS(1),
    [anon_sym_dimension] = ACTIONS(1),
    [anon_sym_range] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_positive_assertion] = ACTIONS(1),
    [sym_negative_assertion] = ACTIONS(1),
    [sym_hex] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_dimensional_unit] = ACTIONS(1),
    [sym_multi_line_comment] = ACTIONS(1),
    [sym_asterisk] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(66),
    [sym_tokens_block] = STATE(22),
    [aux_sym_source_file_repeat1] = STATE(22),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_tokens] = ACTIONS(5),
    [sym_single_line_comment] = ACTIONS(7),
    [sym_multi_line_comment] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(11), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 1,
      anon_sym_when,
    STATE(47), 1,
      sym_token_type,
    STATE(61), 1,
      sym_token_declaration,
    STATE(7), 3,
      aux_sym__token_body,
      sym_child_token_block,
      sym_conditional_token_block,
    ACTIONS(15), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [29] = 7,
    ACTIONS(17), 1,
      aux_sym_tokens_block_token2,
    ACTIONS(19), 1,
      sym_identifier,
    ACTIONS(21), 1,
      anon_sym_when,
    STATE(47), 1,
      sym_token_type,
    STATE(58), 1,
      sym_token_declaration,
    STATE(5), 3,
      aux_sym__token_body,
      sym_child_token_block,
      sym_conditional_token_block,
    ACTIONS(15), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [58] = 7,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_when,
    ACTIONS(23), 1,
      anon_sym_RBRACE,
    STATE(47), 1,
      sym_token_type,
    STATE(61), 1,
      sym_token_declaration,
    STATE(7), 3,
      aux_sym__token_body,
      sym_child_token_block,
      sym_conditional_token_block,
    ACTIONS(15), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [87] = 7,
    ACTIONS(25), 1,
      aux_sym_tokens_block_token2,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(30), 1,
      anon_sym_when,
    STATE(47), 1,
      sym_token_type,
    STATE(58), 1,
      sym_token_declaration,
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
  [116] = 7,
    ACTIONS(19), 1,
      sym_identifier,
    ACTIONS(21), 1,
      anon_sym_when,
    ACTIONS(36), 1,
      aux_sym_tokens_block_token2,
    STATE(47), 1,
      sym_token_type,
    STATE(58), 1,
      sym_token_declaration,
    STATE(5), 3,
      aux_sym__token_body,
      sym_child_token_block,
      sym_conditional_token_block,
    ACTIONS(15), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [145] = 7,
    ACTIONS(25), 1,
      anon_sym_RBRACE,
    ACTIONS(38), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_when,
    STATE(47), 1,
      sym_token_type,
    STATE(61), 1,
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
  [174] = 6,
    ACTIONS(19), 1,
      sym_identifier,
    ACTIONS(21), 1,
      anon_sym_when,
    STATE(47), 1,
      sym_token_type,
    STATE(58), 1,
      sym_token_declaration,
    STATE(3), 3,
      aux_sym__token_body,
      sym_child_token_block,
      sym_conditional_token_block,
    ACTIONS(15), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [200] = 6,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_when,
    STATE(47), 1,
      sym_token_type,
    STATE(61), 1,
      sym_token_declaration,
    STATE(4), 3,
      aux_sym__token_body,
      sym_child_token_block,
      sym_conditional_token_block,
    ACTIONS(15), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [226] = 6,
    ACTIONS(19), 1,
      sym_identifier,
    ACTIONS(21), 1,
      anon_sym_when,
    STATE(47), 1,
      sym_token_type,
    STATE(58), 1,
      sym_token_declaration,
    STATE(6), 3,
      aux_sym__token_body,
      sym_child_token_block,
      sym_conditional_token_block,
    ACTIONS(15), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [252] = 6,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_when,
    STATE(47), 1,
      sym_token_type,
    STATE(61), 1,
      sym_token_declaration,
    STATE(2), 3,
      aux_sym__token_body,
      sym_child_token_block,
      sym_conditional_token_block,
    ACTIONS(15), 6,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [278] = 7,
    ACTIONS(44), 1,
      aux_sym__string_token1,
    ACTIONS(46), 1,
      sym_identifier,
    ACTIONS(50), 1,
      anon_sym_DOLLAR,
    ACTIONS(52), 1,
      sym_number,
    STATE(54), 1,
      sym_token_value,
    ACTIONS(48), 2,
      sym_asset_path,
      sym_hex,
    STATE(49), 4,
      sym__string,
      sym_token_reference,
      sym_dimension,
      sym_switch,
  [304] = 7,
    ACTIONS(44), 1,
      aux_sym__string_token1,
    ACTIONS(46), 1,
      sym_identifier,
    ACTIONS(50), 1,
      anon_sym_DOLLAR,
    ACTIONS(52), 1,
      sym_number,
    STATE(48), 1,
      sym_token_value,
    ACTIONS(48), 2,
      sym_asset_path,
      sym_hex,
    STATE(49), 4,
      sym__string,
      sym_token_reference,
      sym_dimension,
      sym_switch,
  [330] = 2,
    ACTIONS(54), 1,
      aux_sym_tokens_block_token2,
    ACTIONS(56), 8,
      sym_identifier,
      anon_sym_when,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [344] = 2,
    ACTIONS(25), 1,
      anon_sym_RBRACE,
    ACTIONS(58), 8,
      sym_identifier,
      anon_sym_when,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [358] = 2,
    ACTIONS(60), 1,
      aux_sym_tokens_block_token2,
    ACTIONS(62), 8,
      sym_identifier,
      anon_sym_when,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [372] = 2,
    ACTIONS(60), 1,
      anon_sym_RBRACE,
    ACTIONS(62), 8,
      sym_identifier,
      anon_sym_when,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [386] = 2,
    ACTIONS(54), 1,
      anon_sym_RBRACE,
    ACTIONS(56), 8,
      sym_identifier,
      anon_sym_when,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [400] = 2,
    ACTIONS(64), 1,
      aux_sym_tokens_block_token2,
    ACTIONS(66), 8,
      sym_identifier,
      anon_sym_when,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [414] = 2,
    ACTIONS(25), 1,
      aux_sym_tokens_block_token2,
    ACTIONS(58), 8,
      sym_identifier,
      anon_sym_when,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [428] = 2,
    ACTIONS(64), 1,
      anon_sym_RBRACE,
    ACTIONS(66), 8,
      sym_identifier,
      anon_sym_when,
      anon_sym_text,
      anon_sym_color,
      anon_sym_asset,
      anon_sym_switch,
      anon_sym_dimension,
      anon_sym_range,
  [442] = 4,
    ACTIONS(5), 1,
      anon_sym_tokens,
    ACTIONS(68), 1,
      ts_builtin_sym_end,
    ACTIONS(70), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(23), 2,
      sym_tokens_block,
      aux_sym_source_file_repeat1,
  [457] = 4,
    ACTIONS(72), 1,
      ts_builtin_sym_end,
    ACTIONS(74), 1,
      anon_sym_tokens,
    ACTIONS(77), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(23), 2,
      sym_tokens_block,
      aux_sym_source_file_repeat1,
  [472] = 1,
    ACTIONS(80), 4,
      ts_builtin_sym_end,
      anon_sym_tokens,
      sym_single_line_comment,
      sym_multi_line_comment,
  [479] = 4,
    ACTIONS(82), 1,
      sym_identifier,
    ACTIONS(84), 1,
      anon_sym_RBRACE,
    STATE(28), 1,
      aux_sym_conditional_token_block_repeat1,
    STATE(59), 1,
      sym_token_assignment,
  [492] = 1,
    ACTIONS(86), 4,
      ts_builtin_sym_end,
      anon_sym_tokens,
      sym_single_line_comment,
      sym_multi_line_comment,
  [499] = 4,
    ACTIONS(82), 1,
      sym_identifier,
    ACTIONS(88), 1,
      anon_sym_RBRACE,
    STATE(28), 1,
      aux_sym_conditional_token_block_repeat1,
    STATE(59), 1,
      sym_token_assignment,
  [512] = 4,
    ACTIONS(90), 1,
      sym_identifier,
    ACTIONS(93), 1,
      anon_sym_RBRACE,
    STATE(28), 1,
      aux_sym_conditional_token_block_repeat1,
    STATE(59), 1,
      sym_token_assignment,
  [525] = 4,
    ACTIONS(82), 1,
      sym_identifier,
    ACTIONS(95), 1,
      anon_sym_RBRACE,
    STATE(27), 1,
      aux_sym_conditional_token_block_repeat1,
    STATE(59), 1,
      sym_token_assignment,
  [538] = 4,
    ACTIONS(82), 1,
      sym_identifier,
    ACTIONS(97), 1,
      anon_sym_RBRACE,
    STATE(25), 1,
      aux_sym_conditional_token_block_repeat1,
    STATE(59), 1,
      sym_token_assignment,
  [551] = 3,
    ACTIONS(99), 1,
      sym__newlines,
    ACTIONS(101), 1,
      anon_sym_COMMA,
    STATE(31), 1,
      aux_sym_switch_repeat1,
  [561] = 3,
    ACTIONS(104), 1,
      sym__newlines,
    ACTIONS(106), 1,
      anon_sym_COMMA,
    STATE(31), 1,
      aux_sym_switch_repeat1,
  [571] = 3,
    ACTIONS(99), 1,
      sym__newlines,
    ACTIONS(108), 1,
      sym_asterisk,
    ACTIONS(110), 1,
      anon_sym_COMMA,
  [581] = 3,
    ACTIONS(106), 1,
      anon_sym_COMMA,
    ACTIONS(112), 1,
      sym__newlines,
    STATE(31), 1,
      aux_sym_switch_repeat1,
  [591] = 3,
    ACTIONS(114), 1,
      sym_asterisk,
    ACTIONS(116), 1,
      anon_sym_COMMA,
    STATE(32), 1,
      aux_sym_switch_repeat1,
  [601] = 2,
    ACTIONS(116), 1,
      anon_sym_COMMA,
    STATE(34), 1,
      aux_sym_switch_repeat1,
  [608] = 2,
    ACTIONS(118), 1,
      sym__newlines,
    ACTIONS(120), 1,
      anon_sym_COMMA,
  [615] = 2,
    ACTIONS(122), 1,
      anon_sym_DOLLAR,
    STATE(39), 1,
      sym_token_reference,
  [622] = 2,
    ACTIONS(124), 1,
      sym_positive_assertion,
    ACTIONS(126), 1,
      sym_negative_assertion,
  [629] = 2,
    ACTIONS(122), 1,
      anon_sym_DOLLAR,
    STATE(41), 1,
      sym_token_reference,
  [636] = 2,
    ACTIONS(128), 1,
      sym_positive_assertion,
    ACTIONS(130), 1,
      sym_negative_assertion,
  [643] = 2,
    ACTIONS(132), 1,
      aux_sym_tokens_block_token1,
    ACTIONS(134), 1,
      sym_identifier,
  [650] = 1,
    ACTIONS(93), 2,
      sym_identifier,
      anon_sym_RBRACE,
  [655] = 2,
    ACTIONS(136), 1,
      sym__newlines,
    ACTIONS(138), 1,
      sym_dimensional_unit,
  [662] = 2,
    ACTIONS(140), 1,
      sym_positive_assertion,
    ACTIONS(142), 1,
      sym_negative_assertion,
  [669] = 1,
    ACTIONS(144), 1,
      sym__newlines,
  [673] = 1,
    ACTIONS(146), 1,
      sym_identifier,
  [677] = 1,
    ACTIONS(148), 1,
      sym__newlines,
  [681] = 1,
    ACTIONS(150), 1,
      sym__newlines,
  [685] = 1,
    ACTIONS(152), 1,
      sym_string,
  [689] = 1,
    ACTIONS(154), 1,
      anon_sym_LBRACE,
  [693] = 1,
    ACTIONS(156), 1,
      sym_identifier,
  [697] = 1,
    ACTIONS(158), 1,
      anon_sym_COLON,
  [701] = 1,
    ACTIONS(160), 1,
      sym__newlines,
  [705] = 1,
    ACTIONS(162), 1,
      sym_identifier,
  [709] = 1,
    ACTIONS(164), 1,
      sym_ref_identifier,
  [713] = 1,
    ACTIONS(142), 1,
      sym__newlines,
  [717] = 1,
    ACTIONS(166), 1,
      sym__newlines,
  [721] = 1,
    ACTIONS(168), 1,
      sym__newlines,
  [725] = 1,
    ACTIONS(170), 1,
      sym_identifier,
  [729] = 1,
    ACTIONS(172), 1,
      sym__newlines,
  [733] = 1,
    ACTIONS(174), 1,
      sym_ref_identifier,
  [737] = 1,
    ACTIONS(176), 1,
      anon_sym_COLON,
  [741] = 1,
    ACTIONS(178), 1,
      anon_sym_LBRACE,
  [745] = 1,
    ACTIONS(180), 1,
      aux_sym_tokens_block_token1,
  [749] = 1,
    ACTIONS(182), 1,
      ts_builtin_sym_end,
  [753] = 1,
    ACTIONS(184), 1,
      anon_sym_LBRACE,
  [757] = 1,
    ACTIONS(186), 1,
      anon_sym_LBRACE,
  [761] = 1,
    ACTIONS(188), 1,
      sym_identifier,
  [765] = 1,
    ACTIONS(190), 1,
      sym__newlines,
  [769] = 1,
    ACTIONS(192), 1,
      aux_sym__string_token1,
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
  [SMALL_STATE(13)] = 304,
  [SMALL_STATE(14)] = 330,
  [SMALL_STATE(15)] = 344,
  [SMALL_STATE(16)] = 358,
  [SMALL_STATE(17)] = 372,
  [SMALL_STATE(18)] = 386,
  [SMALL_STATE(19)] = 400,
  [SMALL_STATE(20)] = 414,
  [SMALL_STATE(21)] = 428,
  [SMALL_STATE(22)] = 442,
  [SMALL_STATE(23)] = 457,
  [SMALL_STATE(24)] = 472,
  [SMALL_STATE(25)] = 479,
  [SMALL_STATE(26)] = 492,
  [SMALL_STATE(27)] = 499,
  [SMALL_STATE(28)] = 512,
  [SMALL_STATE(29)] = 525,
  [SMALL_STATE(30)] = 538,
  [SMALL_STATE(31)] = 551,
  [SMALL_STATE(32)] = 561,
  [SMALL_STATE(33)] = 571,
  [SMALL_STATE(34)] = 581,
  [SMALL_STATE(35)] = 591,
  [SMALL_STATE(36)] = 601,
  [SMALL_STATE(37)] = 608,
  [SMALL_STATE(38)] = 615,
  [SMALL_STATE(39)] = 622,
  [SMALL_STATE(40)] = 629,
  [SMALL_STATE(41)] = 636,
  [SMALL_STATE(42)] = 643,
  [SMALL_STATE(43)] = 650,
  [SMALL_STATE(44)] = 655,
  [SMALL_STATE(45)] = 662,
  [SMALL_STATE(46)] = 669,
  [SMALL_STATE(47)] = 673,
  [SMALL_STATE(48)] = 677,
  [SMALL_STATE(49)] = 681,
  [SMALL_STATE(50)] = 685,
  [SMALL_STATE(51)] = 689,
  [SMALL_STATE(52)] = 693,
  [SMALL_STATE(53)] = 697,
  [SMALL_STATE(54)] = 701,
  [SMALL_STATE(55)] = 705,
  [SMALL_STATE(56)] = 709,
  [SMALL_STATE(57)] = 713,
  [SMALL_STATE(58)] = 717,
  [SMALL_STATE(59)] = 721,
  [SMALL_STATE(60)] = 725,
  [SMALL_STATE(61)] = 729,
  [SMALL_STATE(62)] = 733,
  [SMALL_STATE(63)] = 737,
  [SMALL_STATE(64)] = 741,
  [SMALL_STATE(65)] = 745,
  [SMALL_STATE(66)] = 749,
  [SMALL_STATE(67)] = 753,
  [SMALL_STATE(68)] = 757,
  [SMALL_STATE(69)] = 761,
  [SMALL_STATE(70)] = 765,
  [SMALL_STATE(71)] = 769,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__token_body, 2),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__token_body, 2), SHIFT_REPEAT(64),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__token_body, 2), SHIFT_REPEAT(40),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__token_body, 2), SHIFT_REPEAT(60),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__token_body, 2), SHIFT_REPEAT(68),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__token_body, 2), SHIFT_REPEAT(38),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_token_block, 6),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional_token_block, 6),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__token_body, 2),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child_token_block, 4),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_child_token_block, 4),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_token_block, 7),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional_token_block, 7),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(42),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(23),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tokens_block, 4),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tokens_block, 5),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conditional_token_block_repeat1, 2), SHIFT_REPEAT(63),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conditional_token_block_repeat1, 2),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_switch_repeat1, 2),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_switch_repeat1, 2), SHIFT_REPEAT(55),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch, 2),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_switch_repeat1, 2),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch, 3),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_switch_repeat1, 3),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_switch_repeat1, 3),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dimension, 1),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_token_reference, 2),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_token_reference, 2),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string, 3),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_token_declaration, 4),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_token_value, 1),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_token_assignment, 3),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_token_type, 1),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [182] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dimension, 2),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
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
