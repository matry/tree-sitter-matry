#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 124
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 65
#define ALIAS_COUNT 0
#define TOKEN_COUNT 37
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 1

enum {
  sym_single_line_comment = 1,
  sym_multi_line_comment = 2,
  sym_spaced_identifier = 3,
  sym_identifier = 4,
  sym__newlines = 5,
  aux_sym_conditional_token1 = 6,
  sym_positive_assertion = 7,
  sym_negative_assertion = 8,
  sym_dimension = 9,
  sym_color = 10,
  anon_sym_DOLLAR = 11,
  sym_url = 12,
  anon_sym_on = 13,
  anon_sym_off = 14,
  sym_arbitrary_text = 15,
  anon_sym_color = 16,
  anon_sym_text = 17,
  anon_sym_number = 18,
  anon_sym_dimension = 19,
  anon_sym_range = 20,
  anon_sym_toggle = 21,
  anon_sym_switch = 22,
  anon_sym_asset = 23,
  anon_sym_tokens = 24,
  anon_sym_LBRACE = 25,
  anon_sym_RBRACE = 26,
  anon_sym_COLON = 27,
  anon_sym_component = 28,
  anon_sym_variants = 29,
  anon_sym_shape = 30,
  anon_sym_image = 31,
  anon_sym_video = 32,
  anon_sym_elements = 33,
  anon_sym_style = 34,
  anon_sym_story = 35,
  anon_sym_frame = 36,
  sym_source_file = 37,
  sym_conditional = 38,
  sym_style_value = 39,
  sym_token_reference = 40,
  sym_keyword = 41,
  sym_token_type = 42,
  sym_tokens_block = 43,
  sym_token_declaration = 44,
  sym_component_block = 45,
  sym_variants_block = 46,
  sym_variant_declaration = 47,
  sym_element_type = 48,
  sym_element_declaration = 49,
  sym_elements_block = 50,
  sym_style_block = 51,
  sym_style_declaration = 52,
  sym_story_block = 53,
  sym_frame_block = 54,
  sym_frame_component = 55,
  sym_frame_rule = 56,
  aux_sym_source_file_repeat1 = 57,
  aux_sym_tokens_block_repeat1 = 58,
  aux_sym_component_block_repeat1 = 59,
  aux_sym_variants_block_repeat1 = 60,
  aux_sym_elements_block_repeat1 = 61,
  aux_sym_style_block_repeat1 = 62,
  aux_sym_story_block_repeat1 = 63,
  aux_sym_frame_component_repeat1 = 64,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_single_line_comment] = "single_line_comment",
  [sym_multi_line_comment] = "multi_line_comment",
  [sym_spaced_identifier] = "spaced_identifier",
  [sym_identifier] = "identifier",
  [sym__newlines] = "_newlines",
  [aux_sym_conditional_token1] = "conditional_token1",
  [sym_positive_assertion] = "positive_assertion",
  [sym_negative_assertion] = "negative_assertion",
  [sym_dimension] = "dimension",
  [sym_color] = "color",
  [anon_sym_DOLLAR] = "$",
  [sym_url] = "url",
  [anon_sym_on] = "on",
  [anon_sym_off] = "off",
  [sym_arbitrary_text] = "arbitrary_text",
  [anon_sym_color] = "color",
  [anon_sym_text] = "text",
  [anon_sym_number] = "number",
  [anon_sym_dimension] = "dimension",
  [anon_sym_range] = "range",
  [anon_sym_toggle] = "toggle",
  [anon_sym_switch] = "switch",
  [anon_sym_asset] = "asset",
  [anon_sym_tokens] = "tokens",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COLON] = ":",
  [anon_sym_component] = "component",
  [anon_sym_variants] = "variants",
  [anon_sym_shape] = "shape",
  [anon_sym_image] = "image",
  [anon_sym_video] = "video",
  [anon_sym_elements] = "elements",
  [anon_sym_style] = "style",
  [anon_sym_story] = "story",
  [anon_sym_frame] = "frame",
  [sym_source_file] = "source_file",
  [sym_conditional] = "conditional",
  [sym_style_value] = "style_value",
  [sym_token_reference] = "token_reference",
  [sym_keyword] = "keyword",
  [sym_token_type] = "token_type",
  [sym_tokens_block] = "tokens_block",
  [sym_token_declaration] = "token_declaration",
  [sym_component_block] = "component_block",
  [sym_variants_block] = "variants_block",
  [sym_variant_declaration] = "variant_declaration",
  [sym_element_type] = "element_type",
  [sym_element_declaration] = "element_declaration",
  [sym_elements_block] = "elements_block",
  [sym_style_block] = "style_block",
  [sym_style_declaration] = "style_declaration",
  [sym_story_block] = "story_block",
  [sym_frame_block] = "frame_block",
  [sym_frame_component] = "frame_component",
  [sym_frame_rule] = "frame_rule",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_tokens_block_repeat1] = "tokens_block_repeat1",
  [aux_sym_component_block_repeat1] = "component_block_repeat1",
  [aux_sym_variants_block_repeat1] = "variants_block_repeat1",
  [aux_sym_elements_block_repeat1] = "elements_block_repeat1",
  [aux_sym_style_block_repeat1] = "style_block_repeat1",
  [aux_sym_story_block_repeat1] = "story_block_repeat1",
  [aux_sym_frame_component_repeat1] = "frame_component_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_single_line_comment] = sym_single_line_comment,
  [sym_multi_line_comment] = sym_multi_line_comment,
  [sym_spaced_identifier] = sym_spaced_identifier,
  [sym_identifier] = sym_identifier,
  [sym__newlines] = sym__newlines,
  [aux_sym_conditional_token1] = aux_sym_conditional_token1,
  [sym_positive_assertion] = sym_positive_assertion,
  [sym_negative_assertion] = sym_negative_assertion,
  [sym_dimension] = sym_dimension,
  [sym_color] = sym_color,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [sym_url] = sym_url,
  [anon_sym_on] = anon_sym_on,
  [anon_sym_off] = anon_sym_off,
  [sym_arbitrary_text] = sym_arbitrary_text,
  [anon_sym_color] = anon_sym_color,
  [anon_sym_text] = anon_sym_text,
  [anon_sym_number] = anon_sym_number,
  [anon_sym_dimension] = anon_sym_dimension,
  [anon_sym_range] = anon_sym_range,
  [anon_sym_toggle] = anon_sym_toggle,
  [anon_sym_switch] = anon_sym_switch,
  [anon_sym_asset] = anon_sym_asset,
  [anon_sym_tokens] = anon_sym_tokens,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_component] = anon_sym_component,
  [anon_sym_variants] = anon_sym_variants,
  [anon_sym_shape] = anon_sym_shape,
  [anon_sym_image] = anon_sym_image,
  [anon_sym_video] = anon_sym_video,
  [anon_sym_elements] = anon_sym_elements,
  [anon_sym_style] = anon_sym_style,
  [anon_sym_story] = anon_sym_story,
  [anon_sym_frame] = anon_sym_frame,
  [sym_source_file] = sym_source_file,
  [sym_conditional] = sym_conditional,
  [sym_style_value] = sym_style_value,
  [sym_token_reference] = sym_token_reference,
  [sym_keyword] = sym_keyword,
  [sym_token_type] = sym_token_type,
  [sym_tokens_block] = sym_tokens_block,
  [sym_token_declaration] = sym_token_declaration,
  [sym_component_block] = sym_component_block,
  [sym_variants_block] = sym_variants_block,
  [sym_variant_declaration] = sym_variant_declaration,
  [sym_element_type] = sym_element_type,
  [sym_element_declaration] = sym_element_declaration,
  [sym_elements_block] = sym_elements_block,
  [sym_style_block] = sym_style_block,
  [sym_style_declaration] = sym_style_declaration,
  [sym_story_block] = sym_story_block,
  [sym_frame_block] = sym_frame_block,
  [sym_frame_component] = sym_frame_component,
  [sym_frame_rule] = sym_frame_rule,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_tokens_block_repeat1] = aux_sym_tokens_block_repeat1,
  [aux_sym_component_block_repeat1] = aux_sym_component_block_repeat1,
  [aux_sym_variants_block_repeat1] = aux_sym_variants_block_repeat1,
  [aux_sym_elements_block_repeat1] = aux_sym_elements_block_repeat1,
  [aux_sym_style_block_repeat1] = aux_sym_style_block_repeat1,
  [aux_sym_story_block_repeat1] = aux_sym_story_block_repeat1,
  [aux_sym_frame_component_repeat1] = aux_sym_frame_component_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
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
  [sym_spaced_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym__newlines] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_conditional_token1] = {
    .visible = false,
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
  [sym_dimension] = {
    .visible = true,
    .named = true,
  },
  [sym_color] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [sym_url] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_on] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_off] = {
    .visible = true,
    .named = false,
  },
  [sym_arbitrary_text] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_color] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_text] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_number] = {
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
  [anon_sym_toggle] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_switch] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_asset] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tokens] = {
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
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_component] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_variants] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_shape] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_image] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_video] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_elements] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_style] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_story] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_frame] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_conditional] = {
    .visible = true,
    .named = true,
  },
  [sym_style_value] = {
    .visible = true,
    .named = true,
  },
  [sym_token_reference] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_token_type] = {
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
  [sym_component_block] = {
    .visible = true,
    .named = true,
  },
  [sym_variants_block] = {
    .visible = true,
    .named = true,
  },
  [sym_variant_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_element_type] = {
    .visible = true,
    .named = true,
  },
  [sym_element_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_elements_block] = {
    .visible = true,
    .named = true,
  },
  [sym_style_block] = {
    .visible = true,
    .named = true,
  },
  [sym_style_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_story_block] = {
    .visible = true,
    .named = true,
  },
  [sym_frame_block] = {
    .visible = true,
    .named = true,
  },
  [sym_frame_component] = {
    .visible = true,
    .named = true,
  },
  [sym_frame_rule] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_tokens_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_component_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_variants_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_elements_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_style_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_story_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_frame_component_repeat1] = {
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
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 13,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 19,
  [23] = 23,
  [24] = 24,
  [25] = 20,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
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
  [79] = 13,
  [80] = 19,
  [81] = 81,
  [82] = 20,
  [83] = 83,
  [84] = 84,
  [85] = 20,
  [86] = 19,
  [87] = 13,
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
  [121] = 119,
  [122] = 119,
  [123] = 119,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(111);
      if (lookahead == '#') ADVANCE(139);
      if (lookahead == '$') ADVANCE(141);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == ':') ADVANCE(175);
      if (lookahead == 'a') ADVANCE(90);
      if (lookahead == 'c') ADVANCE(69);
      if (lookahead == 'd') ADVANCE(43);
      if (lookahead == 'e') ADVANCE(48);
      if (lookahead == 'f') ADVANCE(85);
      if (lookahead == 'i') ADVANCE(55);
      if (lookahead == 'n') ADVANCE(102);
      if (lookahead == 'o') ADVANCE(33);
      if (lookahead == 'r') ADVANCE(6);
      if (lookahead == 's') ADVANCE(42);
      if (lookahead == 't') ADVANCE(16);
      if (lookahead == 'v') ADVANCE(9);
      if (lookahead == 'w') ADVANCE(41);
      if (lookahead == '{') ADVANCE(173);
      if (lookahead == '}') ADVANCE(174);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(135);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(126);
      if (lookahead == '}') ADVANCE(174);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 2:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '/') ADVANCE(112);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '/') ADVANCE(113);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '/') ADVANCE(114);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(4);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(67);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(37);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(86);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(86);
      if (lookahead == 'i') ADVANCE(15);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(81);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(65);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(56);
      END_STATE();
    case 13:
      if (lookahead == 'b') ADVANCE(28);
      END_STATE();
    case 14:
      if (lookahead == 'c') ADVANCE(40);
      END_STATE();
    case 15:
      if (lookahead == 'd') ADVANCE(27);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(104);
      if (lookahead == 'o') ADVANCE(36);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(184);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(179);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(168);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(178);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(182);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(169);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(96);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 33:
      if (lookahead == 'f') ADVANCE(34);
      if (lookahead == 'n') ADVANCE(145);
      END_STATE();
    case 34:
      if (lookahead == 'f') ADVANCE(149);
      END_STATE();
    case 35:
      if (lookahead == 'f') ADVANCE(121);
      if (lookahead == 'n') ADVANCE(147);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 36:
      if (lookahead == 'g') ADVANCE(39);
      if (lookahead == 'k') ADVANCE(29);
      END_STATE();
    case 37:
      if (lookahead == 'g') ADVANCE(18);
      END_STATE();
    case 38:
      if (lookahead == 'g') ADVANCE(19);
      END_STATE();
    case 39:
      if (lookahead == 'g') ADVANCE(51);
      END_STATE();
    case 40:
      if (lookahead == 'h') ADVANCE(170);
      END_STATE();
    case 41:
      if (lookahead == 'h') ADVANCE(24);
      END_STATE();
    case 42:
      if (lookahead == 'h') ADVANCE(10);
      if (lookahead == 't') ADVANCE(74);
      if (lookahead == 'w') ADVANCE(44);
      END_STATE();
    case 43:
      if (lookahead == 'i') ADVANCE(57);
      END_STATE();
    case 44:
      if (lookahead == 'i') ADVANCE(94);
      END_STATE();
    case 45:
      if (lookahead == 'i') ADVANCE(11);
      END_STATE();
    case 46:
      if (lookahead == 'i') ADVANCE(79);
      END_STATE();
    case 47:
      if (lookahead == 'k') ADVANCE(29);
      END_STATE();
    case 48:
      if (lookahead == 'l') ADVANCE(32);
      END_STATE();
    case 49:
      if (lookahead == 'l') ADVANCE(75);
      if (lookahead == 'm') ADVANCE(80);
      END_STATE();
    case 50:
      if (lookahead == 'l') ADVANCE(21);
      END_STATE();
    case 51:
      if (lookahead == 'l') ADVANCE(22);
      END_STATE();
    case 52:
      if (lookahead == 'm') ADVANCE(136);
      END_STATE();
    case 53:
      if (lookahead == 'm') ADVANCE(80);
      END_STATE();
    case 54:
      if (lookahead == 'm') ADVANCE(13);
      END_STATE();
    case 55:
      if (lookahead == 'm') ADVANCE(7);
      if (lookahead == 's') ADVANCE(128);
      END_STATE();
    case 56:
      if (lookahead == 'm') ADVANCE(17);
      END_STATE();
    case 57:
      if (lookahead == 'm') ADVANCE(26);
      END_STATE();
    case 58:
      if (lookahead == 'm') ADVANCE(30);
      END_STATE();
    case 59:
      if (lookahead == 'n') ADVANCE(127);
      END_STATE();
    case 60:
      if (lookahead == 'n') ADVANCE(167);
      END_STATE();
    case 61:
      if (lookahead == 'n') ADVANCE(91);
      END_STATE();
    case 62:
      if (lookahead == 'n') ADVANCE(87);
      END_STATE();
    case 63:
      if (lookahead == 'n') ADVANCE(77);
      END_STATE();
    case 64:
      if (lookahead == 'n') ADVANCE(99);
      END_STATE();
    case 65:
      if (lookahead == 'n') ADVANCE(100);
      END_STATE();
    case 66:
      if (lookahead == 'n') ADVANCE(98);
      END_STATE();
    case 67:
      if (lookahead == 'n') ADVANCE(38);
      END_STATE();
    case 68:
      if (lookahead == 'n') ADVANCE(31);
      END_STATE();
    case 69:
      if (lookahead == 'o') ADVANCE(49);
      END_STATE();
    case 70:
      if (lookahead == 'o') ADVANCE(180);
      END_STATE();
    case 71:
      if (lookahead == 'o') ADVANCE(47);
      END_STATE();
    case 72:
      if (lookahead == 'o') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(72)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 73:
      if (lookahead == 'o') ADVANCE(82);
      END_STATE();
    case 74:
      if (lookahead == 'o') ADVANCE(82);
      if (lookahead == 'y') ADVANCE(50);
      END_STATE();
    case 75:
      if (lookahead == 'o') ADVANCE(83);
      END_STATE();
    case 76:
      if (lookahead == 'o') ADVANCE(53);
      END_STATE();
    case 77:
      if (lookahead == 'o') ADVANCE(97);
      END_STATE();
    case 78:
      if (lookahead == 'o') ADVANCE(68);
      END_STATE();
    case 79:
      if (lookahead == 'o') ADVANCE(60);
      END_STATE();
    case 80:
      if (lookahead == 'p') ADVANCE(78);
      END_STATE();
    case 81:
      if (lookahead == 'p') ADVANCE(20);
      END_STATE();
    case 82:
      if (lookahead == 'r') ADVANCE(105);
      END_STATE();
    case 83:
      if (lookahead == 'r') ADVANCE(164);
      END_STATE();
    case 84:
      if (lookahead == 'r') ADVANCE(166);
      END_STATE();
    case 85:
      if (lookahead == 'r') ADVANCE(12);
      END_STATE();
    case 86:
      if (lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 87:
      if (lookahead == 's') ADVANCE(172);
      END_STATE();
    case 88:
      if (lookahead == 's') ADVANCE(181);
      END_STATE();
    case 89:
      if (lookahead == 's') ADVANCE(177);
      END_STATE();
    case 90:
      if (lookahead == 's') ADVANCE(92);
      END_STATE();
    case 91:
      if (lookahead == 's') ADVANCE(46);
      END_STATE();
    case 92:
      if (lookahead == 's') ADVANCE(25);
      END_STATE();
    case 93:
      if (lookahead == 't') ADVANCE(74);
      if (lookahead == 'w') ADVANCE(44);
      END_STATE();
    case 94:
      if (lookahead == 't') ADVANCE(14);
      END_STATE();
    case 95:
      if (lookahead == 't') ADVANCE(165);
      END_STATE();
    case 96:
      if (lookahead == 't') ADVANCE(171);
      END_STATE();
    case 97:
      if (lookahead == 't') ADVANCE(129);
      END_STATE();
    case 98:
      if (lookahead == 't') ADVANCE(176);
      END_STATE();
    case 99:
      if (lookahead == 't') ADVANCE(88);
      END_STATE();
    case 100:
      if (lookahead == 't') ADVANCE(89);
      END_STATE();
    case 101:
      if (lookahead == 't') ADVANCE(73);
      END_STATE();
    case 102:
      if (lookahead == 'u') ADVANCE(54);
      END_STATE();
    case 103:
      if (lookahead == 'x') ADVANCE(136);
      END_STATE();
    case 104:
      if (lookahead == 'x') ADVANCE(95);
      END_STATE();
    case 105:
      if (lookahead == 'y') ADVANCE(183);
      END_STATE();
    case 106:
      if (lookahead == '{') ADVANCE(173);
      if (lookahead == '}') ADVANCE(174);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(106)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 107:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 108:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 109:
      if (eof) ADVANCE(111);
      if (lookahead == '\n') ADVANCE(126);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == 'a') ADVANCE(90);
      if (lookahead == 'c') ADVANCE(69);
      if (lookahead == 'd') ADVANCE(43);
      if (lookahead == 'e') ADVANCE(48);
      if (lookahead == 'f') ADVANCE(85);
      if (lookahead == 'n') ADVANCE(102);
      if (lookahead == 'r') ADVANCE(6);
      if (lookahead == 's') ADVANCE(93);
      if (lookahead == 't') ADVANCE(16);
      if (lookahead == 'v') ADVANCE(8);
      if (lookahead == '}') ADVANCE(174);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(109)
      END_STATE();
    case 110:
      if (eof) ADVANCE(111);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == 'c') ADVANCE(76);
      if (lookahead == 's') ADVANCE(101);
      if (lookahead == 't') ADVANCE(71);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(110)
      END_STATE();
    case 111:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_single_line_comment);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(113);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_single_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(113);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_multi_line_comment);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_spaced_identifier);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_spaced_identifier);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\n') ADVANCE(138);
      if (lookahead == '%') ADVANCE(132);
      if (lookahead == 'e') ADVANCE(122);
      if (lookahead == 'p') ADVANCE(123);
      if (lookahead == 'r') ADVANCE(119);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(117);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      if (lookahead != 0) ADVANCE(163);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\n') ADVANCE(138);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(133);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      if (lookahead != 0) ADVANCE(163);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(122);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(163);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(150);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(163);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(151);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(118);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(163);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(118);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(163);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(163);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym__newlines);
      if (lookahead == '\n') ADVANCE(126);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_conditional_token1);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_positive_assertion);
      if (lookahead == ' ') ADVANCE(63);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_negative_assertion);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_dimension);
      if (lookahead == '\n') ADVANCE(138);
      if (lookahead == '%') ADVANCE(132);
      if (lookahead == 'e') ADVANCE(122);
      if (lookahead == 'p') ADVANCE(123);
      if (lookahead == 'r') ADVANCE(119);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(117);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      if (lookahead != 0) ADVANCE(163);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_dimension);
      if (lookahead == '\n') ADVANCE(138);
      if (lookahead == '%') ADVANCE(132);
      if (lookahead == 'e') ADVANCE(159);
      if (lookahead == 'p') ADVANCE(160);
      if (lookahead == 'r') ADVANCE(155);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(131);
      if (lookahead != 0) ADVANCE(163);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_dimension);
      if (lookahead == '\n') ADVANCE(138);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(133);
      if (lookahead != 0) ADVANCE(163);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_dimension);
      if (lookahead == '\n') ADVANCE(137);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(131);
      if (lookahead != 0) ADVANCE(163);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_dimension);
      if (lookahead == '\n') ADVANCE(137);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(134);
      if (lookahead != 0) ADVANCE(163);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_dimension);
      if (lookahead == '%') ADVANCE(136);
      if (lookahead == 'e') ADVANCE(52);
      if (lookahead == 'p') ADVANCE(103);
      if (lookahead == 'r') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(135);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_dimension);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(138);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_dimension);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(137);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_dimension);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(135);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_color);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_color);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(163);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(163);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_url);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_url);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(163);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_on);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_on);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(163);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_on);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_on);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(163);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_off);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_off);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(163);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_off);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_off);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(163);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_arbitrary_text);
      if (lookahead == '#') ADVANCE(140);
      if (lookahead == '$') ADVANCE(142);
      if (lookahead == '/') ADVANCE(162);
      if (lookahead == 'o') ADVANCE(156);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(163);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_arbitrary_text);
      if (lookahead == '#') ADVANCE(140);
      if (lookahead == '$') ADVANCE(142);
      if (lookahead == '/') ADVANCE(162);
      if (lookahead == 'o') ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(131);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(163);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_arbitrary_text);
      if (lookahead == 'e') ADVANCE(159);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(163);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_arbitrary_text);
      if (lookahead == 'f') ADVANCE(120);
      if (lookahead == 'n') ADVANCE(146);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(163);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_arbitrary_text);
      if (lookahead == 'f') ADVANCE(158);
      if (lookahead == 'n') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(163);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_arbitrary_text);
      if (lookahead == 'f') ADVANCE(152);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(163);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_arbitrary_text);
      if (lookahead == 'm') ADVANCE(132);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(163);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_arbitrary_text);
      if (lookahead == 'x') ADVANCE(132);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(163);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_arbitrary_text);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(163);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_arbitrary_text);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(163);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_arbitrary_text);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(163);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_color);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_text);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_number);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_dimension);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_range);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_toggle);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_switch);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_asset);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_tokens);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_component);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_variants);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_shape);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_image);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_video);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_elements);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_style);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_story);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_frame);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 110},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 153},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 109},
  [15] = {.lex_state = 154},
  [16] = {.lex_state = 109},
  [17] = {.lex_state = 110},
  [18] = {.lex_state = 154},
  [19] = {.lex_state = 109},
  [20] = {.lex_state = 109},
  [21] = {.lex_state = 154},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 110},
  [24] = {.lex_state = 109},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 109},
  [35] = {.lex_state = 109},
  [36] = {.lex_state = 109},
  [37] = {.lex_state = 109},
  [38] = {.lex_state = 109},
  [39] = {.lex_state = 109},
  [40] = {.lex_state = 110},
  [41] = {.lex_state = 110},
  [42] = {.lex_state = 110},
  [43] = {.lex_state = 110},
  [44] = {.lex_state = 110},
  [45] = {.lex_state = 110},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 110},
  [49] = {.lex_state = 110},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 109},
  [52] = {.lex_state = 109},
  [53] = {.lex_state = 109},
  [54] = {.lex_state = 109},
  [55] = {.lex_state = 109},
  [56] = {.lex_state = 106},
  [57] = {.lex_state = 106},
  [58] = {.lex_state = 106},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 106},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 106},
  [66] = {.lex_state = 72},
  [67] = {.lex_state = 106},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 106},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 106},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 109},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 106},
  [86] = {.lex_state = 106},
  [87] = {.lex_state = 106},
  [88] = {.lex_state = 106},
  [89] = {.lex_state = 106},
  [90] = {.lex_state = 106},
  [91] = {.lex_state = 106},
  [92] = {.lex_state = 106},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 106},
  [95] = {.lex_state = 107},
  [96] = {.lex_state = 106},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 106},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 106},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 107},
  [114] = {.lex_state = 106},
  [115] = {.lex_state = 106},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 106},
  [118] = {.lex_state = 106},
  [119] = {.lex_state = 106},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 106},
  [122] = {.lex_state = 106},
  [123] = {.lex_state = 106},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_single_line_comment] = ACTIONS(1),
    [sym_multi_line_comment] = ACTIONS(1),
    [aux_sym_conditional_token1] = ACTIONS(1),
    [sym_positive_assertion] = ACTIONS(1),
    [sym_negative_assertion] = ACTIONS(1),
    [sym_dimension] = ACTIONS(1),
    [sym_color] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [sym_url] = ACTIONS(1),
    [anon_sym_on] = ACTIONS(1),
    [anon_sym_off] = ACTIONS(1),
    [anon_sym_color] = ACTIONS(1),
    [anon_sym_text] = ACTIONS(1),
    [anon_sym_number] = ACTIONS(1),
    [anon_sym_dimension] = ACTIONS(1),
    [anon_sym_range] = ACTIONS(1),
    [anon_sym_toggle] = ACTIONS(1),
    [anon_sym_switch] = ACTIONS(1),
    [anon_sym_asset] = ACTIONS(1),
    [anon_sym_tokens] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_component] = ACTIONS(1),
    [anon_sym_variants] = ACTIONS(1),
    [anon_sym_shape] = ACTIONS(1),
    [anon_sym_image] = ACTIONS(1),
    [anon_sym_video] = ACTIONS(1),
    [anon_sym_elements] = ACTIONS(1),
    [anon_sym_style] = ACTIONS(1),
    [anon_sym_story] = ACTIONS(1),
    [anon_sym_frame] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(112),
    [sym_tokens_block] = STATE(23),
    [sym_component_block] = STATE(23),
    [sym_story_block] = STATE(23),
    [aux_sym_source_file_repeat1] = STATE(23),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_single_line_comment] = ACTIONS(5),
    [sym_multi_line_comment] = ACTIONS(5),
    [anon_sym_tokens] = ACTIONS(7),
    [anon_sym_component] = ACTIONS(9),
    [anon_sym_story] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(15), 1,
      anon_sym_RBRACE,
    STATE(117), 1,
      sym_token_type,
    STATE(8), 2,
      sym_variant_declaration,
      aux_sym_variants_block_repeat1,
    ACTIONS(13), 8,
      anon_sym_color,
      anon_sym_text,
      anon_sym_number,
      anon_sym_dimension,
      anon_sym_range,
      anon_sym_toggle,
      anon_sym_switch,
      anon_sym_asset,
  [21] = 5,
    ACTIONS(17), 1,
      anon_sym_RBRACE,
    STATE(9), 1,
      aux_sym_tokens_block_repeat1,
    STATE(24), 1,
      sym_token_declaration,
    STATE(118), 1,
      sym_token_type,
    ACTIONS(13), 8,
      anon_sym_color,
      anon_sym_text,
      anon_sym_number,
      anon_sym_dimension,
      anon_sym_range,
      anon_sym_toggle,
      anon_sym_switch,
      anon_sym_asset,
  [44] = 5,
    ACTIONS(22), 1,
      anon_sym_RBRACE,
    STATE(4), 1,
      aux_sym_tokens_block_repeat1,
    STATE(24), 1,
      sym_token_declaration,
    STATE(118), 1,
      sym_token_type,
    ACTIONS(19), 8,
      anon_sym_color,
      anon_sym_text,
      anon_sym_number,
      anon_sym_dimension,
      anon_sym_range,
      anon_sym_toggle,
      anon_sym_switch,
      anon_sym_asset,
  [67] = 6,
    ACTIONS(24), 1,
      sym_identifier,
    ACTIONS(28), 1,
      anon_sym_DOLLAR,
    ACTIONS(30), 2,
      anon_sym_on,
      anon_sym_off,
    STATE(85), 2,
      sym_token_reference,
      sym_keyword,
    STATE(89), 2,
      sym_style_value,
      sym_frame_component,
    ACTIONS(26), 4,
      sym_dimension,
      sym_color,
      sym_url,
      sym_arbitrary_text,
  [92] = 5,
    ACTIONS(32), 1,
      anon_sym_RBRACE,
    STATE(4), 1,
      aux_sym_tokens_block_repeat1,
    STATE(24), 1,
      sym_token_declaration,
    STATE(118), 1,
      sym_token_type,
    ACTIONS(13), 8,
      anon_sym_color,
      anon_sym_text,
      anon_sym_number,
      anon_sym_dimension,
      anon_sym_range,
      anon_sym_toggle,
      anon_sym_switch,
      anon_sym_asset,
  [115] = 5,
    ACTIONS(34), 1,
      anon_sym_RBRACE,
    STATE(6), 1,
      aux_sym_tokens_block_repeat1,
    STATE(24), 1,
      sym_token_declaration,
    STATE(118), 1,
      sym_token_type,
    ACTIONS(13), 8,
      anon_sym_color,
      anon_sym_text,
      anon_sym_number,
      anon_sym_dimension,
      anon_sym_range,
      anon_sym_toggle,
      anon_sym_switch,
      anon_sym_asset,
  [138] = 4,
    ACTIONS(36), 1,
      anon_sym_RBRACE,
    STATE(117), 1,
      sym_token_type,
    STATE(12), 2,
      sym_variant_declaration,
      aux_sym_variants_block_repeat1,
    ACTIONS(13), 8,
      anon_sym_color,
      anon_sym_text,
      anon_sym_number,
      anon_sym_dimension,
      anon_sym_range,
      anon_sym_toggle,
      anon_sym_switch,
      anon_sym_asset,
  [159] = 5,
    ACTIONS(34), 1,
      anon_sym_RBRACE,
    STATE(4), 1,
      aux_sym_tokens_block_repeat1,
    STATE(24), 1,
      sym_token_declaration,
    STATE(118), 1,
      sym_token_type,
    ACTIONS(13), 8,
      anon_sym_color,
      anon_sym_text,
      anon_sym_number,
      anon_sym_dimension,
      anon_sym_range,
      anon_sym_toggle,
      anon_sym_switch,
      anon_sym_asset,
  [182] = 5,
    ACTIONS(17), 1,
      anon_sym_RBRACE,
    STATE(4), 1,
      aux_sym_tokens_block_repeat1,
    STATE(24), 1,
      sym_token_declaration,
    STATE(118), 1,
      sym_token_type,
    ACTIONS(13), 8,
      anon_sym_color,
      anon_sym_text,
      anon_sym_number,
      anon_sym_dimension,
      anon_sym_range,
      anon_sym_toggle,
      anon_sym_switch,
      anon_sym_asset,
  [205] = 5,
    ACTIONS(38), 1,
      anon_sym_RBRACE,
    STATE(10), 1,
      aux_sym_tokens_block_repeat1,
    STATE(24), 1,
      sym_token_declaration,
    STATE(118), 1,
      sym_token_type,
    ACTIONS(13), 8,
      anon_sym_color,
      anon_sym_text,
      anon_sym_number,
      anon_sym_dimension,
      anon_sym_range,
      anon_sym_toggle,
      anon_sym_switch,
      anon_sym_asset,
  [228] = 4,
    ACTIONS(43), 1,
      anon_sym_RBRACE,
    STATE(117), 1,
      sym_token_type,
    STATE(12), 2,
      sym_variant_declaration,
      aux_sym_variants_block_repeat1,
    ACTIONS(40), 8,
      anon_sym_color,
      anon_sym_text,
      anon_sym_number,
      anon_sym_dimension,
      anon_sym_range,
      anon_sym_toggle,
      anon_sym_switch,
      anon_sym_asset,
  [249] = 2,
    ACTIONS(45), 1,
      sym_positive_assertion,
    ACTIONS(47), 10,
      sym_negative_assertion,
      anon_sym_color,
      anon_sym_text,
      anon_sym_number,
      anon_sym_dimension,
      anon_sym_range,
      anon_sym_toggle,
      anon_sym_switch,
      anon_sym_asset,
      anon_sym_RBRACE,
  [265] = 2,
    ACTIONS(49), 1,
      sym__newlines,
    ACTIONS(51), 9,
      anon_sym_color,
      anon_sym_text,
      anon_sym_number,
      anon_sym_dimension,
      anon_sym_range,
      anon_sym_toggle,
      anon_sym_switch,
      anon_sym_asset,
      anon_sym_RBRACE,
  [280] = 5,
    ACTIONS(55), 1,
      anon_sym_DOLLAR,
    STATE(76), 1,
      sym_style_value,
    ACTIONS(57), 2,
      anon_sym_on,
      anon_sym_off,
    STATE(82), 2,
      sym_token_reference,
      sym_keyword,
    ACTIONS(53), 4,
      sym_dimension,
      sym_color,
      sym_url,
      sym_arbitrary_text,
  [301] = 2,
    ACTIONS(47), 1,
      sym__newlines,
    ACTIONS(45), 9,
      anon_sym_color,
      anon_sym_text,
      anon_sym_number,
      anon_sym_dimension,
      anon_sym_range,
      anon_sym_toggle,
      anon_sym_switch,
      anon_sym_asset,
      anon_sym_RBRACE,
  [316] = 6,
    ACTIONS(59), 1,
      ts_builtin_sym_end,
    ACTIONS(64), 1,
      anon_sym_tokens,
    ACTIONS(67), 1,
      anon_sym_component,
    ACTIONS(70), 1,
      anon_sym_story,
    ACTIONS(61), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(17), 4,
      sym_tokens_block,
      sym_component_block,
      sym_story_block,
      aux_sym_source_file_repeat1,
  [339] = 5,
    ACTIONS(75), 1,
      anon_sym_DOLLAR,
    STATE(26), 1,
      sym_style_value,
    ACTIONS(77), 2,
      anon_sym_on,
      anon_sym_off,
    STATE(25), 2,
      sym_token_reference,
      sym_keyword,
    ACTIONS(73), 4,
      sym_dimension,
      sym_color,
      sym_url,
      sym_arbitrary_text,
  [360] = 2,
    ACTIONS(79), 1,
      sym__newlines,
    ACTIONS(81), 9,
      anon_sym_color,
      anon_sym_text,
      anon_sym_number,
      anon_sym_dimension,
      anon_sym_range,
      anon_sym_toggle,
      anon_sym_switch,
      anon_sym_asset,
      anon_sym_RBRACE,
  [375] = 2,
    ACTIONS(83), 1,
      sym__newlines,
    ACTIONS(85), 9,
      anon_sym_color,
      anon_sym_text,
      anon_sym_number,
      anon_sym_dimension,
      anon_sym_range,
      anon_sym_toggle,
      anon_sym_switch,
      anon_sym_asset,
      anon_sym_RBRACE,
  [390] = 5,
    ACTIONS(89), 1,
      anon_sym_DOLLAR,
    STATE(14), 1,
      sym_style_value,
    ACTIONS(91), 2,
      anon_sym_on,
      anon_sym_off,
    STATE(20), 2,
      sym_token_reference,
      sym_keyword,
    ACTIONS(87), 4,
      sym_dimension,
      sym_color,
      sym_url,
      sym_arbitrary_text,
  [411] = 1,
    ACTIONS(79), 10,
      anon_sym_color,
      anon_sym_text,
      anon_sym_number,
      anon_sym_dimension,
      anon_sym_range,
      anon_sym_toggle,
      anon_sym_switch,
      anon_sym_asset,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [424] = 6,
    ACTIONS(7), 1,
      anon_sym_tokens,
    ACTIONS(9), 1,
      anon_sym_component,
    ACTIONS(11), 1,
      anon_sym_story,
    ACTIONS(93), 1,
      ts_builtin_sym_end,
    ACTIONS(95), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(17), 4,
      sym_tokens_block,
      sym_component_block,
      sym_story_block,
      aux_sym_source_file_repeat1,
  [447] = 2,
    ACTIONS(97), 1,
      sym__newlines,
    ACTIONS(99), 9,
      anon_sym_color,
      anon_sym_text,
      anon_sym_number,
      anon_sym_dimension,
      anon_sym_range,
      anon_sym_toggle,
      anon_sym_switch,
      anon_sym_asset,
      anon_sym_RBRACE,
  [462] = 1,
    ACTIONS(83), 9,
      anon_sym_color,
      anon_sym_text,
      anon_sym_number,
      anon_sym_dimension,
      anon_sym_range,
      anon_sym_toggle,
      anon_sym_switch,
      anon_sym_asset,
      anon_sym_RBRACE,
  [474] = 1,
    ACTIONS(101), 9,
      anon_sym_color,
      anon_sym_text,
      anon_sym_number,
      anon_sym_dimension,
      anon_sym_range,
      anon_sym_toggle,
      anon_sym_switch,
      anon_sym_asset,
      anon_sym_RBRACE,
  [486] = 1,
    ACTIONS(22), 9,
      anon_sym_color,
      anon_sym_text,
      anon_sym_number,
      anon_sym_dimension,
      anon_sym_range,
      anon_sym_toggle,
      anon_sym_switch,
      anon_sym_asset,
      anon_sym_RBRACE,
  [498] = 5,
    ACTIONS(103), 1,
      anon_sym_RBRACE,
    ACTIONS(105), 1,
      anon_sym_variants,
    ACTIONS(108), 1,
      anon_sym_elements,
    ACTIONS(111), 1,
      anon_sym_style,
    STATE(28), 4,
      sym_variants_block,
      sym_elements_block,
      sym_style_block,
      aux_sym_component_block_repeat1,
  [517] = 5,
    ACTIONS(114), 1,
      anon_sym_RBRACE,
    ACTIONS(116), 1,
      anon_sym_variants,
    ACTIONS(118), 1,
      anon_sym_elements,
    ACTIONS(120), 1,
      anon_sym_style,
    STATE(32), 4,
      sym_variants_block,
      sym_elements_block,
      sym_style_block,
      aux_sym_component_block_repeat1,
  [536] = 4,
    ACTIONS(124), 1,
      anon_sym_RBRACE,
    STATE(96), 1,
      sym_element_type,
    STATE(33), 2,
      sym_element_declaration,
      aux_sym_elements_block_repeat1,
    ACTIONS(122), 4,
      anon_sym_text,
      anon_sym_shape,
      anon_sym_image,
      anon_sym_video,
  [553] = 4,
    ACTIONS(129), 1,
      anon_sym_RBRACE,
    STATE(96), 1,
      sym_element_type,
    STATE(31), 2,
      sym_element_declaration,
      aux_sym_elements_block_repeat1,
    ACTIONS(126), 4,
      anon_sym_text,
      anon_sym_shape,
      anon_sym_image,
      anon_sym_video,
  [570] = 5,
    ACTIONS(116), 1,
      anon_sym_variants,
    ACTIONS(118), 1,
      anon_sym_elements,
    ACTIONS(120), 1,
      anon_sym_style,
    ACTIONS(131), 1,
      anon_sym_RBRACE,
    STATE(28), 4,
      sym_variants_block,
      sym_elements_block,
      sym_style_block,
      aux_sym_component_block_repeat1,
  [589] = 4,
    ACTIONS(133), 1,
      anon_sym_RBRACE,
    STATE(96), 1,
      sym_element_type,
    STATE(31), 2,
      sym_element_declaration,
      aux_sym_elements_block_repeat1,
    ACTIONS(122), 4,
      anon_sym_text,
      anon_sym_shape,
      anon_sym_image,
      anon_sym_video,
  [606] = 3,
    ACTIONS(135), 1,
      ts_builtin_sym_end,
    ACTIONS(139), 1,
      sym__newlines,
    ACTIONS(137), 5,
      sym_single_line_comment,
      sym_multi_line_comment,
      anon_sym_tokens,
      anon_sym_component,
      anon_sym_story,
  [620] = 3,
    ACTIONS(141), 1,
      ts_builtin_sym_end,
    ACTIONS(145), 1,
      sym__newlines,
    ACTIONS(143), 5,
      sym_single_line_comment,
      sym_multi_line_comment,
      anon_sym_tokens,
      anon_sym_component,
      anon_sym_story,
  [634] = 3,
    ACTIONS(147), 1,
      ts_builtin_sym_end,
    ACTIONS(151), 1,
      sym__newlines,
    ACTIONS(149), 5,
      sym_single_line_comment,
      sym_multi_line_comment,
      anon_sym_tokens,
      anon_sym_component,
      anon_sym_story,
  [648] = 3,
    ACTIONS(153), 1,
      ts_builtin_sym_end,
    ACTIONS(157), 1,
      sym__newlines,
    ACTIONS(155), 5,
      sym_single_line_comment,
      sym_multi_line_comment,
      anon_sym_tokens,
      anon_sym_component,
      anon_sym_story,
  [662] = 3,
    ACTIONS(159), 1,
      ts_builtin_sym_end,
    ACTIONS(163), 1,
      sym__newlines,
    ACTIONS(161), 5,
      sym_single_line_comment,
      sym_multi_line_comment,
      anon_sym_tokens,
      anon_sym_component,
      anon_sym_story,
  [676] = 3,
    ACTIONS(165), 1,
      ts_builtin_sym_end,
    ACTIONS(169), 1,
      sym__newlines,
    ACTIONS(167), 5,
      sym_single_line_comment,
      sym_multi_line_comment,
      anon_sym_tokens,
      anon_sym_component,
      anon_sym_story,
  [690] = 1,
    ACTIONS(159), 6,
      ts_builtin_sym_end,
      sym_single_line_comment,
      sym_multi_line_comment,
      anon_sym_tokens,
      anon_sym_component,
      anon_sym_story,
  [699] = 1,
    ACTIONS(135), 6,
      ts_builtin_sym_end,
      sym_single_line_comment,
      sym_multi_line_comment,
      anon_sym_tokens,
      anon_sym_component,
      anon_sym_story,
  [708] = 1,
    ACTIONS(153), 6,
      ts_builtin_sym_end,
      sym_single_line_comment,
      sym_multi_line_comment,
      anon_sym_tokens,
      anon_sym_component,
      anon_sym_story,
  [717] = 1,
    ACTIONS(141), 6,
      ts_builtin_sym_end,
      sym_single_line_comment,
      sym_multi_line_comment,
      anon_sym_tokens,
      anon_sym_component,
      anon_sym_story,
  [726] = 1,
    ACTIONS(171), 6,
      ts_builtin_sym_end,
      sym_single_line_comment,
      sym_multi_line_comment,
      anon_sym_tokens,
      anon_sym_component,
      anon_sym_story,
  [735] = 1,
    ACTIONS(173), 6,
      ts_builtin_sym_end,
      sym_single_line_comment,
      sym_multi_line_comment,
      anon_sym_tokens,
      anon_sym_component,
      anon_sym_story,
  [744] = 3,
    STATE(96), 1,
      sym_element_type,
    STATE(98), 1,
      sym_element_declaration,
    ACTIONS(122), 4,
      anon_sym_text,
      anon_sym_shape,
      anon_sym_image,
      anon_sym_video,
  [757] = 2,
    ACTIONS(177), 1,
      anon_sym_LBRACE,
    ACTIONS(175), 5,
      anon_sym_text,
      anon_sym_RBRACE,
      anon_sym_shape,
      anon_sym_image,
      anon_sym_video,
  [768] = 1,
    ACTIONS(179), 6,
      ts_builtin_sym_end,
      sym_single_line_comment,
      sym_multi_line_comment,
      anon_sym_tokens,
      anon_sym_component,
      anon_sym_story,
  [777] = 1,
    ACTIONS(181), 6,
      ts_builtin_sym_end,
      sym_single_line_comment,
      sym_multi_line_comment,
      anon_sym_tokens,
      anon_sym_component,
      anon_sym_story,
  [786] = 1,
    ACTIONS(183), 5,
      anon_sym_text,
      anon_sym_RBRACE,
      anon_sym_shape,
      anon_sym_image,
      anon_sym_video,
  [794] = 2,
    ACTIONS(185), 1,
      sym__newlines,
    ACTIONS(187), 4,
      anon_sym_RBRACE,
      anon_sym_variants,
      anon_sym_elements,
      anon_sym_style,
  [804] = 2,
    ACTIONS(189), 1,
      sym__newlines,
    ACTIONS(191), 4,
      anon_sym_RBRACE,
      anon_sym_variants,
      anon_sym_elements,
      anon_sym_style,
  [814] = 2,
    ACTIONS(193), 1,
      sym__newlines,
    ACTIONS(195), 4,
      anon_sym_RBRACE,
      anon_sym_variants,
      anon_sym_elements,
      anon_sym_style,
  [824] = 2,
    ACTIONS(197), 1,
      sym__newlines,
    ACTIONS(199), 4,
      anon_sym_RBRACE,
      anon_sym_variants,
      anon_sym_elements,
      anon_sym_style,
  [834] = 2,
    ACTIONS(201), 1,
      sym__newlines,
    ACTIONS(203), 4,
      anon_sym_RBRACE,
      anon_sym_variants,
      anon_sym_elements,
      anon_sym_style,
  [844] = 4,
    ACTIONS(205), 1,
      sym_identifier,
    ACTIONS(208), 1,
      anon_sym_RBRACE,
    STATE(56), 1,
      aux_sym_style_block_repeat1,
    STATE(81), 1,
      sym_style_declaration,
  [857] = 3,
    ACTIONS(210), 1,
      sym_identifier,
    ACTIONS(212), 1,
      anon_sym_RBRACE,
    STATE(63), 2,
      sym_frame_rule,
      aux_sym_frame_component_repeat1,
  [868] = 4,
    ACTIONS(214), 1,
      sym_identifier,
    ACTIONS(216), 1,
      anon_sym_RBRACE,
    STATE(56), 1,
      aux_sym_style_block_repeat1,
    STATE(81), 1,
      sym_style_declaration,
  [881] = 3,
    ACTIONS(218), 1,
      anon_sym_RBRACE,
    ACTIONS(220), 1,
      anon_sym_frame,
    STATE(59), 2,
      sym_frame_block,
      aux_sym_story_block_repeat1,
  [892] = 1,
    ACTIONS(223), 4,
      anon_sym_RBRACE,
      anon_sym_variants,
      anon_sym_elements,
      anon_sym_style,
  [899] = 3,
    ACTIONS(225), 1,
      anon_sym_RBRACE,
    ACTIONS(227), 1,
      anon_sym_frame,
    STATE(70), 2,
      sym_frame_block,
      aux_sym_story_block_repeat1,
  [910] = 1,
    ACTIONS(229), 4,
      anon_sym_RBRACE,
      anon_sym_variants,
      anon_sym_elements,
      anon_sym_style,
  [917] = 3,
    ACTIONS(231), 1,
      sym_identifier,
    ACTIONS(234), 1,
      anon_sym_RBRACE,
    STATE(63), 2,
      sym_frame_rule,
      aux_sym_frame_component_repeat1,
  [928] = 1,
    ACTIONS(236), 4,
      anon_sym_RBRACE,
      anon_sym_variants,
      anon_sym_elements,
      anon_sym_style,
  [935] = 4,
    ACTIONS(214), 1,
      sym_identifier,
    ACTIONS(238), 1,
      anon_sym_RBRACE,
    STATE(56), 1,
      aux_sym_style_block_repeat1,
    STATE(81), 1,
      sym_style_declaration,
  [948] = 3,
    ACTIONS(240), 1,
      sym_identifier,
    STATE(105), 1,
      sym_keyword,
    ACTIONS(77), 2,
      anon_sym_on,
      anon_sym_off,
  [959] = 4,
    ACTIONS(214), 1,
      sym_identifier,
    ACTIONS(242), 1,
      anon_sym_RBRACE,
    STATE(58), 1,
      aux_sym_style_block_repeat1,
    STATE(81), 1,
      sym_style_declaration,
  [972] = 1,
    ACTIONS(244), 4,
      anon_sym_RBRACE,
      anon_sym_variants,
      anon_sym_elements,
      anon_sym_style,
  [979] = 4,
    ACTIONS(214), 1,
      sym_identifier,
    ACTIONS(216), 1,
      anon_sym_RBRACE,
    STATE(65), 1,
      aux_sym_style_block_repeat1,
    STATE(81), 1,
      sym_style_declaration,
  [992] = 3,
    ACTIONS(227), 1,
      anon_sym_frame,
    ACTIONS(246), 1,
      anon_sym_RBRACE,
    STATE(59), 2,
      sym_frame_block,
      aux_sym_story_block_repeat1,
  [1003] = 1,
    ACTIONS(248), 4,
      anon_sym_RBRACE,
      anon_sym_variants,
      anon_sym_elements,
      anon_sym_style,
  [1010] = 3,
    ACTIONS(210), 1,
      sym_identifier,
    ACTIONS(250), 1,
      anon_sym_RBRACE,
    STATE(57), 2,
      sym_frame_rule,
      aux_sym_frame_component_repeat1,
  [1021] = 1,
    ACTIONS(252), 4,
      anon_sym_RBRACE,
      anon_sym_variants,
      anon_sym_elements,
      anon_sym_style,
  [1028] = 1,
    ACTIONS(254), 4,
      anon_sym_RBRACE,
      anon_sym_variants,
      anon_sym_elements,
      anon_sym_style,
  [1035] = 2,
    ACTIONS(256), 1,
      sym__newlines,
    ACTIONS(258), 2,
      anon_sym_RBRACE,
      anon_sym_frame,
  [1043] = 2,
    ACTIONS(262), 1,
      sym__newlines,
    ACTIONS(260), 2,
      sym_identifier,
      anon_sym_RBRACE,
  [1051] = 3,
    ACTIONS(264), 1,
      aux_sym_conditional_token1,
    ACTIONS(266), 1,
      anon_sym_LBRACE,
    STATE(107), 1,
      sym_conditional,
  [1061] = 3,
    ACTIONS(264), 1,
      aux_sym_conditional_token1,
    ACTIONS(268), 1,
      anon_sym_LBRACE,
    STATE(108), 1,
      sym_conditional,
  [1071] = 2,
    ACTIONS(47), 1,
      sym__newlines,
    ACTIONS(45), 2,
      sym_identifier,
      anon_sym_RBRACE,
  [1079] = 2,
    ACTIONS(79), 1,
      sym__newlines,
    ACTIONS(81), 2,
      sym_identifier,
      anon_sym_RBRACE,
  [1087] = 2,
    ACTIONS(272), 1,
      sym__newlines,
    ACTIONS(270), 2,
      sym_identifier,
      anon_sym_RBRACE,
  [1095] = 2,
    ACTIONS(83), 1,
      sym__newlines,
    ACTIONS(85), 2,
      sym_identifier,
      anon_sym_RBRACE,
  [1103] = 1,
    ACTIONS(274), 2,
      anon_sym_RBRACE,
      anon_sym_frame,
  [1108] = 2,
    ACTIONS(276), 1,
      anon_sym_DOLLAR,
    STATE(93), 1,
      sym_token_reference,
  [1115] = 1,
    ACTIONS(83), 2,
      sym_identifier,
      anon_sym_RBRACE,
  [1120] = 1,
    ACTIONS(79), 2,
      sym_identifier,
      anon_sym_RBRACE,
  [1125] = 1,
    ACTIONS(47), 2,
      sym_identifier,
      anon_sym_RBRACE,
  [1130] = 2,
    ACTIONS(278), 1,
      sym_identifier,
    ACTIONS(280), 1,
      anon_sym_LBRACE,
  [1137] = 1,
    ACTIONS(282), 2,
      sym_identifier,
      anon_sym_RBRACE,
  [1142] = 1,
    ACTIONS(284), 2,
      sym_identifier,
      anon_sym_RBRACE,
  [1147] = 1,
    ACTIONS(208), 2,
      sym_identifier,
      anon_sym_RBRACE,
  [1152] = 2,
    ACTIONS(286), 1,
      sym_identifier,
    STATE(120), 1,
      sym_frame_component,
  [1159] = 2,
    ACTIONS(288), 1,
      sym_positive_assertion,
    ACTIONS(290), 1,
      sym_negative_assertion,
  [1166] = 1,
    ACTIONS(292), 2,
      sym_identifier,
      anon_sym_RBRACE,
  [1171] = 1,
    ACTIONS(294), 1,
      sym_spaced_identifier,
  [1175] = 1,
    ACTIONS(296), 1,
      sym_identifier,
  [1179] = 1,
    ACTIONS(298), 1,
      anon_sym_LBRACE,
  [1183] = 1,
    ACTIONS(300), 1,
      anon_sym_RBRACE,
  [1187] = 1,
    ACTIONS(302), 1,
      sym_identifier,
  [1191] = 1,
    ACTIONS(304), 1,
      anon_sym_COLON,
  [1195] = 1,
    ACTIONS(306), 1,
      anon_sym_LBRACE,
  [1199] = 1,
    ACTIONS(308), 1,
      anon_sym_COLON,
  [1203] = 1,
    ACTIONS(310), 1,
      anon_sym_LBRACE,
  [1207] = 1,
    ACTIONS(312), 1,
      anon_sym_COLON,
  [1211] = 1,
    ACTIONS(314), 1,
      anon_sym_LBRACE,
  [1215] = 1,
    ACTIONS(316), 1,
      anon_sym_LBRACE,
  [1219] = 1,
    ACTIONS(318), 1,
      anon_sym_LBRACE,
  [1223] = 1,
    ACTIONS(320), 1,
      anon_sym_LBRACE,
  [1227] = 1,
    ACTIONS(322), 1,
      sym_identifier,
  [1231] = 1,
    ACTIONS(324), 1,
      anon_sym_LBRACE,
  [1235] = 1,
    ACTIONS(326), 1,
      anon_sym_COLON,
  [1239] = 1,
    ACTIONS(328), 1,
      ts_builtin_sym_end,
  [1243] = 1,
    ACTIONS(330), 1,
      sym_spaced_identifier,
  [1247] = 1,
    ACTIONS(332), 1,
      sym_identifier,
  [1251] = 1,
    ACTIONS(334), 1,
      sym_identifier,
  [1255] = 1,
    ACTIONS(336), 1,
      anon_sym_LBRACE,
  [1259] = 1,
    ACTIONS(338), 1,
      sym_identifier,
  [1263] = 1,
    ACTIONS(340), 1,
      sym_identifier,
  [1267] = 1,
    ACTIONS(342), 1,
      sym_identifier,
  [1271] = 1,
    ACTIONS(344), 1,
      anon_sym_RBRACE,
  [1275] = 1,
    ACTIONS(346), 1,
      sym_identifier,
  [1279] = 1,
    ACTIONS(348), 1,
      sym_identifier,
  [1283] = 1,
    ACTIONS(350), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 21,
  [SMALL_STATE(4)] = 44,
  [SMALL_STATE(5)] = 67,
  [SMALL_STATE(6)] = 92,
  [SMALL_STATE(7)] = 115,
  [SMALL_STATE(8)] = 138,
  [SMALL_STATE(9)] = 159,
  [SMALL_STATE(10)] = 182,
  [SMALL_STATE(11)] = 205,
  [SMALL_STATE(12)] = 228,
  [SMALL_STATE(13)] = 249,
  [SMALL_STATE(14)] = 265,
  [SMALL_STATE(15)] = 280,
  [SMALL_STATE(16)] = 301,
  [SMALL_STATE(17)] = 316,
  [SMALL_STATE(18)] = 339,
  [SMALL_STATE(19)] = 360,
  [SMALL_STATE(20)] = 375,
  [SMALL_STATE(21)] = 390,
  [SMALL_STATE(22)] = 411,
  [SMALL_STATE(23)] = 424,
  [SMALL_STATE(24)] = 447,
  [SMALL_STATE(25)] = 462,
  [SMALL_STATE(26)] = 474,
  [SMALL_STATE(27)] = 486,
  [SMALL_STATE(28)] = 498,
  [SMALL_STATE(29)] = 517,
  [SMALL_STATE(30)] = 536,
  [SMALL_STATE(31)] = 553,
  [SMALL_STATE(32)] = 570,
  [SMALL_STATE(33)] = 589,
  [SMALL_STATE(34)] = 606,
  [SMALL_STATE(35)] = 620,
  [SMALL_STATE(36)] = 634,
  [SMALL_STATE(37)] = 648,
  [SMALL_STATE(38)] = 662,
  [SMALL_STATE(39)] = 676,
  [SMALL_STATE(40)] = 690,
  [SMALL_STATE(41)] = 699,
  [SMALL_STATE(42)] = 708,
  [SMALL_STATE(43)] = 717,
  [SMALL_STATE(44)] = 726,
  [SMALL_STATE(45)] = 735,
  [SMALL_STATE(46)] = 744,
  [SMALL_STATE(47)] = 757,
  [SMALL_STATE(48)] = 768,
  [SMALL_STATE(49)] = 777,
  [SMALL_STATE(50)] = 786,
  [SMALL_STATE(51)] = 794,
  [SMALL_STATE(52)] = 804,
  [SMALL_STATE(53)] = 814,
  [SMALL_STATE(54)] = 824,
  [SMALL_STATE(55)] = 834,
  [SMALL_STATE(56)] = 844,
  [SMALL_STATE(57)] = 857,
  [SMALL_STATE(58)] = 868,
  [SMALL_STATE(59)] = 881,
  [SMALL_STATE(60)] = 892,
  [SMALL_STATE(61)] = 899,
  [SMALL_STATE(62)] = 910,
  [SMALL_STATE(63)] = 917,
  [SMALL_STATE(64)] = 928,
  [SMALL_STATE(65)] = 935,
  [SMALL_STATE(66)] = 948,
  [SMALL_STATE(67)] = 959,
  [SMALL_STATE(68)] = 972,
  [SMALL_STATE(69)] = 979,
  [SMALL_STATE(70)] = 992,
  [SMALL_STATE(71)] = 1003,
  [SMALL_STATE(72)] = 1010,
  [SMALL_STATE(73)] = 1021,
  [SMALL_STATE(74)] = 1028,
  [SMALL_STATE(75)] = 1035,
  [SMALL_STATE(76)] = 1043,
  [SMALL_STATE(77)] = 1051,
  [SMALL_STATE(78)] = 1061,
  [SMALL_STATE(79)] = 1071,
  [SMALL_STATE(80)] = 1079,
  [SMALL_STATE(81)] = 1087,
  [SMALL_STATE(82)] = 1095,
  [SMALL_STATE(83)] = 1103,
  [SMALL_STATE(84)] = 1108,
  [SMALL_STATE(85)] = 1115,
  [SMALL_STATE(86)] = 1120,
  [SMALL_STATE(87)] = 1125,
  [SMALL_STATE(88)] = 1130,
  [SMALL_STATE(89)] = 1137,
  [SMALL_STATE(90)] = 1142,
  [SMALL_STATE(91)] = 1147,
  [SMALL_STATE(92)] = 1152,
  [SMALL_STATE(93)] = 1159,
  [SMALL_STATE(94)] = 1166,
  [SMALL_STATE(95)] = 1171,
  [SMALL_STATE(96)] = 1175,
  [SMALL_STATE(97)] = 1179,
  [SMALL_STATE(98)] = 1183,
  [SMALL_STATE(99)] = 1187,
  [SMALL_STATE(100)] = 1191,
  [SMALL_STATE(101)] = 1195,
  [SMALL_STATE(102)] = 1199,
  [SMALL_STATE(103)] = 1203,
  [SMALL_STATE(104)] = 1207,
  [SMALL_STATE(105)] = 1211,
  [SMALL_STATE(106)] = 1215,
  [SMALL_STATE(107)] = 1219,
  [SMALL_STATE(108)] = 1223,
  [SMALL_STATE(109)] = 1227,
  [SMALL_STATE(110)] = 1231,
  [SMALL_STATE(111)] = 1235,
  [SMALL_STATE(112)] = 1239,
  [SMALL_STATE(113)] = 1243,
  [SMALL_STATE(114)] = 1247,
  [SMALL_STATE(115)] = 1251,
  [SMALL_STATE(116)] = 1255,
  [SMALL_STATE(117)] = 1259,
  [SMALL_STATE(118)] = 1263,
  [SMALL_STATE(119)] = 1267,
  [SMALL_STATE(120)] = 1271,
  [SMALL_STATE(121)] = 1275,
  [SMALL_STATE(122)] = 1279,
  [SMALL_STATE(123)] = 1283,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tokens_block_repeat1, 2), SHIFT_REPEAT(109),
  [22] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tokens_block_repeat1, 2),
  [24] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [26] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [28] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [30] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variants_block_repeat1, 2), SHIFT_REPEAT(109),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variants_block_repeat1, 2),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_token_reference, 2),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_token_reference, 2),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_token_declaration, 4),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_token_declaration, 4),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(17),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(88),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(114),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(113),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword, 1),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword, 1),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_value, 1),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_style_value, 1),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tokens_block_repeat1, 1),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variant_declaration, 4),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_component_block_repeat1, 2),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_block_repeat1, 2), SHIFT_REPEAT(110),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_block_repeat1, 2), SHIFT_REPEAT(97),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_block_repeat1, 2), SHIFT_REPEAT(99),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_elements_block_repeat1, 2), SHIFT_REPEAT(115),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_elements_block_repeat1, 2),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tokens_block, 5),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tokens_block, 5),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tokens_block, 4),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tokens_block, 4),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_story_block, 4),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_story_block, 4),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tokens_block, 6),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tokens_block, 6),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_story_block, 5),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_story_block, 5),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tokens_block, 3),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tokens_block, 3),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_story_block, 6),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_block, 5),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_declaration, 2),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tokens_block, 7),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_block, 4),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_declaration, 5),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_elements_block, 4),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_style_block, 4),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_elements_block, 3),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_style_block, 5),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_style_block, 6),
  [205] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_style_block_repeat1, 2), SHIFT_REPEAT(111),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_style_block_repeat1, 2),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_story_block_repeat1, 2),
  [220] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_story_block_repeat1, 2), SHIFT_REPEAT(95),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variants_block, 3),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_elements_block, 5),
  [231] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_frame_component_repeat1, 2), SHIFT_REPEAT(102),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_frame_component_repeat1, 2),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_block, 5),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_block, 7),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_block, 6),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variants_block, 4),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_elements_block, 4),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_frame_block, 5),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_style_declaration, 3),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_declaration, 3),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_style_block_repeat1, 1),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_frame_block, 6),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_frame_rule, 3),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_frame_component, 4),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_frame_component, 3),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 4),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_token_type, 1),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [328] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_type, 1),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
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
