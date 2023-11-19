#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 112
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 63
#define ALIAS_COUNT 0
#define TOKEN_COUNT 38
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
  anon_sym_render = 37,
  sym_source_file = 38,
  sym_conditional = 39,
  sym_value = 40,
  sym_token_reference = 41,
  sym_keyword = 42,
  sym_token_type = 43,
  sym_tokens_block = 44,
  sym_token_declaration = 45,
  sym_component_block = 46,
  sym_variants_block = 47,
  sym_variant_declaration = 48,
  sym_element_type = 49,
  sym_element_declaration = 50,
  sym_elements_block = 51,
  sym_style_block = 52,
  sym_style_declaration = 53,
  sym_story_block = 54,
  sym_frame_block = 55,
  aux_sym_source_file_repeat1 = 56,
  aux_sym_tokens_block_repeat1 = 57,
  aux_sym_component_block_repeat1 = 58,
  aux_sym_variants_block_repeat1 = 59,
  aux_sym_elements_block_repeat1 = 60,
  aux_sym_style_block_repeat1 = 61,
  aux_sym_story_block_repeat1 = 62,
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
  [anon_sym_render] = "render",
  [sym_source_file] = "source_file",
  [sym_conditional] = "conditional",
  [sym_value] = "value",
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
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_tokens_block_repeat1] = "tokens_block_repeat1",
  [aux_sym_component_block_repeat1] = "component_block_repeat1",
  [aux_sym_variants_block_repeat1] = "variants_block_repeat1",
  [aux_sym_elements_block_repeat1] = "elements_block_repeat1",
  [aux_sym_style_block_repeat1] = "style_block_repeat1",
  [aux_sym_story_block_repeat1] = "story_block_repeat1",
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
  [anon_sym_render] = anon_sym_render,
  [sym_source_file] = sym_source_file,
  [sym_conditional] = sym_conditional,
  [sym_value] = sym_value,
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
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_tokens_block_repeat1] = aux_sym_tokens_block_repeat1,
  [aux_sym_component_block_repeat1] = aux_sym_component_block_repeat1,
  [aux_sym_variants_block_repeat1] = aux_sym_variants_block_repeat1,
  [aux_sym_elements_block_repeat1] = aux_sym_elements_block_repeat1,
  [aux_sym_style_block_repeat1] = aux_sym_style_block_repeat1,
  [aux_sym_story_block_repeat1] = aux_sym_story_block_repeat1,
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
  [anon_sym_render] = {
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
  [sym_value] = {
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
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 12,
  [21] = 21,
  [22] = 16,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 21,
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
  [72] = 21,
  [73] = 16,
  [74] = 12,
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
  [110] = 89,
  [111] = 89,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(116);
      if (lookahead == '#') ADVANCE(136);
      if (lookahead == '$') ADVANCE(138);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == ':') ADVANCE(167);
      if (lookahead == 'a') ADVANCE(95);
      if (lookahead == 'c') ADVANCE(73);
      if (lookahead == 'd') ADVANCE(46);
      if (lookahead == 'e') ADVANCE(51);
      if (lookahead == 'f') ADVANCE(86);
      if (lookahead == 'i') ADVANCE(58);
      if (lookahead == 'n') ADVANCE(107);
      if (lookahead == 'o') ADVANCE(36);
      if (lookahead == 'r') ADVANCE(7);
      if (lookahead == 's') ADVANCE(45);
      if (lookahead == 't') ADVANCE(18);
      if (lookahead == 'v') ADVANCE(10);
      if (lookahead == 'w') ADVANCE(44);
      if (lookahead == '{') ADVANCE(165);
      if (lookahead == '}') ADVANCE(166);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(132);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(124);
      if (lookahead == '}') ADVANCE(166);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 2:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '/') ADVANCE(117);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '/') ADVANCE(118);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '/') ADVANCE(119);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(4);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(71);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(71);
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(40);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(91);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(91);
      if (lookahead == 'i') ADVANCE(16);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(85);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(68);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(59);
      END_STATE();
    case 14:
      if (lookahead == 'b') ADVANCE(29);
      END_STATE();
    case 15:
      if (lookahead == 'c') ADVANCE(43);
      END_STATE();
    case 16:
      if (lookahead == 'd') ADVANCE(28);
      END_STATE();
    case 17:
      if (lookahead == 'd') ADVANCE(31);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(109);
      if (lookahead == 'o') ADVANCE(39);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(176);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(171);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(160);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(170);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(174);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(161);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(90);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 36:
      if (lookahead == 'f') ADVANCE(37);
      if (lookahead == 'n') ADVANCE(142);
      END_STATE();
    case 37:
      if (lookahead == 'f') ADVANCE(145);
      END_STATE();
    case 38:
      if (lookahead == 'f') ADVANCE(122);
      if (lookahead == 'n') ADVANCE(143);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 39:
      if (lookahead == 'g') ADVANCE(42);
      if (lookahead == 'k') ADVANCE(32);
      END_STATE();
    case 40:
      if (lookahead == 'g') ADVANCE(20);
      END_STATE();
    case 41:
      if (lookahead == 'g') ADVANCE(21);
      END_STATE();
    case 42:
      if (lookahead == 'g') ADVANCE(54);
      END_STATE();
    case 43:
      if (lookahead == 'h') ADVANCE(162);
      END_STATE();
    case 44:
      if (lookahead == 'h') ADVANCE(27);
      END_STATE();
    case 45:
      if (lookahead == 'h') ADVANCE(11);
      if (lookahead == 't') ADVANCE(78);
      if (lookahead == 'w') ADVANCE(47);
      END_STATE();
    case 46:
      if (lookahead == 'i') ADVANCE(60);
      END_STATE();
    case 47:
      if (lookahead == 'i') ADVANCE(99);
      END_STATE();
    case 48:
      if (lookahead == 'i') ADVANCE(12);
      END_STATE();
    case 49:
      if (lookahead == 'i') ADVANCE(83);
      END_STATE();
    case 50:
      if (lookahead == 'k') ADVANCE(32);
      END_STATE();
    case 51:
      if (lookahead == 'l') ADVANCE(35);
      END_STATE();
    case 52:
      if (lookahead == 'l') ADVANCE(79);
      if (lookahead == 'm') ADVANCE(84);
      END_STATE();
    case 53:
      if (lookahead == 'l') ADVANCE(23);
      END_STATE();
    case 54:
      if (lookahead == 'l') ADVANCE(24);
      END_STATE();
    case 55:
      if (lookahead == 'm') ADVANCE(133);
      END_STATE();
    case 56:
      if (lookahead == 'm') ADVANCE(84);
      END_STATE();
    case 57:
      if (lookahead == 'm') ADVANCE(14);
      END_STATE();
    case 58:
      if (lookahead == 'm') ADVANCE(8);
      if (lookahead == 's') ADVANCE(126);
      END_STATE();
    case 59:
      if (lookahead == 'm') ADVANCE(19);
      END_STATE();
    case 60:
      if (lookahead == 'm') ADVANCE(30);
      END_STATE();
    case 61:
      if (lookahead == 'm') ADVANCE(33);
      END_STATE();
    case 62:
      if (lookahead == 'n') ADVANCE(125);
      END_STATE();
    case 63:
      if (lookahead == 'n') ADVANCE(159);
      END_STATE();
    case 64:
      if (lookahead == 'n') ADVANCE(96);
      END_STATE();
    case 65:
      if (lookahead == 'n') ADVANCE(92);
      END_STATE();
    case 66:
      if (lookahead == 'n') ADVANCE(81);
      END_STATE();
    case 67:
      if (lookahead == 'n') ADVANCE(104);
      END_STATE();
    case 68:
      if (lookahead == 'n') ADVANCE(105);
      END_STATE();
    case 69:
      if (lookahead == 'n') ADVANCE(103);
      END_STATE();
    case 70:
      if (lookahead == 'n') ADVANCE(17);
      END_STATE();
    case 71:
      if (lookahead == 'n') ADVANCE(41);
      END_STATE();
    case 72:
      if (lookahead == 'n') ADVANCE(34);
      END_STATE();
    case 73:
      if (lookahead == 'o') ADVANCE(52);
      END_STATE();
    case 74:
      if (lookahead == 'o') ADVANCE(172);
      END_STATE();
    case 75:
      if (lookahead == 'o') ADVANCE(50);
      END_STATE();
    case 76:
      if (lookahead == 'o') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(76)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 77:
      if (lookahead == 'o') ADVANCE(87);
      END_STATE();
    case 78:
      if (lookahead == 'o') ADVANCE(87);
      if (lookahead == 'y') ADVANCE(53);
      END_STATE();
    case 79:
      if (lookahead == 'o') ADVANCE(88);
      END_STATE();
    case 80:
      if (lookahead == 'o') ADVANCE(56);
      END_STATE();
    case 81:
      if (lookahead == 'o') ADVANCE(102);
      END_STATE();
    case 82:
      if (lookahead == 'o') ADVANCE(72);
      END_STATE();
    case 83:
      if (lookahead == 'o') ADVANCE(63);
      END_STATE();
    case 84:
      if (lookahead == 'p') ADVANCE(82);
      END_STATE();
    case 85:
      if (lookahead == 'p') ADVANCE(22);
      END_STATE();
    case 86:
      if (lookahead == 'r') ADVANCE(13);
      END_STATE();
    case 87:
      if (lookahead == 'r') ADVANCE(110);
      END_STATE();
    case 88:
      if (lookahead == 'r') ADVANCE(156);
      END_STATE();
    case 89:
      if (lookahead == 'r') ADVANCE(158);
      END_STATE();
    case 90:
      if (lookahead == 'r') ADVANCE(177);
      END_STATE();
    case 91:
      if (lookahead == 'r') ADVANCE(48);
      END_STATE();
    case 92:
      if (lookahead == 's') ADVANCE(164);
      END_STATE();
    case 93:
      if (lookahead == 's') ADVANCE(173);
      END_STATE();
    case 94:
      if (lookahead == 's') ADVANCE(169);
      END_STATE();
    case 95:
      if (lookahead == 's') ADVANCE(97);
      END_STATE();
    case 96:
      if (lookahead == 's') ADVANCE(49);
      END_STATE();
    case 97:
      if (lookahead == 's') ADVANCE(26);
      END_STATE();
    case 98:
      if (lookahead == 't') ADVANCE(78);
      if (lookahead == 'w') ADVANCE(47);
      END_STATE();
    case 99:
      if (lookahead == 't') ADVANCE(15);
      END_STATE();
    case 100:
      if (lookahead == 't') ADVANCE(157);
      END_STATE();
    case 101:
      if (lookahead == 't') ADVANCE(163);
      END_STATE();
    case 102:
      if (lookahead == 't') ADVANCE(127);
      END_STATE();
    case 103:
      if (lookahead == 't') ADVANCE(168);
      END_STATE();
    case 104:
      if (lookahead == 't') ADVANCE(93);
      END_STATE();
    case 105:
      if (lookahead == 't') ADVANCE(94);
      END_STATE();
    case 106:
      if (lookahead == 't') ADVANCE(77);
      END_STATE();
    case 107:
      if (lookahead == 'u') ADVANCE(57);
      END_STATE();
    case 108:
      if (lookahead == 'x') ADVANCE(133);
      END_STATE();
    case 109:
      if (lookahead == 'x') ADVANCE(100);
      END_STATE();
    case 110:
      if (lookahead == 'y') ADVANCE(175);
      END_STATE();
    case 111:
      if (lookahead == '{') ADVANCE(165);
      if (lookahead == '}') ADVANCE(166);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(111)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 112:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 113:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 114:
      if (eof) ADVANCE(116);
      if (lookahead == '\n') ADVANCE(124);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == 'a') ADVANCE(95);
      if (lookahead == 'c') ADVANCE(73);
      if (lookahead == 'd') ADVANCE(46);
      if (lookahead == 'e') ADVANCE(51);
      if (lookahead == 'f') ADVANCE(86);
      if (lookahead == 'n') ADVANCE(107);
      if (lookahead == 'r') ADVANCE(6);
      if (lookahead == 's') ADVANCE(98);
      if (lookahead == 't') ADVANCE(18);
      if (lookahead == 'v') ADVANCE(9);
      if (lookahead == '}') ADVANCE(166);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(114)
      END_STATE();
    case 115:
      if (eof) ADVANCE(116);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == 'c') ADVANCE(80);
      if (lookahead == 's') ADVANCE(106);
      if (lookahead == 't') ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(115)
      END_STATE();
    case 116:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_single_line_comment);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(118);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_single_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(118);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_multi_line_comment);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_spaced_identifier);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_spaced_identifier);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(146);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym__newlines);
      if (lookahead == '\n') ADVANCE(124);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_conditional_token1);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_positive_assertion);
      if (lookahead == ' ') ADVANCE(66);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_negative_assertion);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_dimension);
      if (lookahead == '\n') ADVANCE(135);
      if (lookahead == '%') ADVANCE(129);
      if (lookahead == 'e') ADVANCE(152);
      if (lookahead == 'p') ADVANCE(153);
      if (lookahead == 'r') ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      if (lookahead != 0) ADVANCE(155);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_dimension);
      if (lookahead == '\n') ADVANCE(135);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(130);
      if (lookahead != 0) ADVANCE(155);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_dimension);
      if (lookahead == '\n') ADVANCE(134);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      if (lookahead != 0) ADVANCE(155);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_dimension);
      if (lookahead == '\n') ADVANCE(134);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(131);
      if (lookahead != 0) ADVANCE(155);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_dimension);
      if (lookahead == '%') ADVANCE(133);
      if (lookahead == 'e') ADVANCE(55);
      if (lookahead == 'p') ADVANCE(108);
      if (lookahead == 'r') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(132);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_dimension);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(135);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_dimension);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(134);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_dimension);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(132);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_color);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_color);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(155);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(155);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_url);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_url);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(155);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_on);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_on);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_on);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(155);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_off);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_off);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_off);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(155);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_arbitrary_text);
      if (lookahead == '#') ADVANCE(137);
      if (lookahead == '$') ADVANCE(139);
      if (lookahead == '/') ADVANCE(154);
      if (lookahead == 'o') ADVANCE(150);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(155);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_arbitrary_text);
      if (lookahead == 'e') ADVANCE(152);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(155);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_arbitrary_text);
      if (lookahead == 'f') ADVANCE(151);
      if (lookahead == 'n') ADVANCE(144);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(155);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_arbitrary_text);
      if (lookahead == 'f') ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(155);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_arbitrary_text);
      if (lookahead == 'm') ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(155);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_arbitrary_text);
      if (lookahead == 'x') ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(155);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_arbitrary_text);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(155);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_arbitrary_text);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(155);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_color);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_text);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_number);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_dimension);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_range);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_toggle);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_switch);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_asset);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_tokens);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_component);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_variants);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_shape);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_image);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_video);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_elements);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_style);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_story);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_frame);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_render);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 115},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 148},
  [14] = {.lex_state = 115},
  [15] = {.lex_state = 115},
  [16] = {.lex_state = 114},
  [17] = {.lex_state = 148},
  [18] = {.lex_state = 114},
  [19] = {.lex_state = 114},
  [20] = {.lex_state = 114},
  [21] = {.lex_state = 114},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 148},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 114},
  [34] = {.lex_state = 114},
  [35] = {.lex_state = 114},
  [36] = {.lex_state = 114},
  [37] = {.lex_state = 114},
  [38] = {.lex_state = 114},
  [39] = {.lex_state = 115},
  [40] = {.lex_state = 115},
  [41] = {.lex_state = 115},
  [42] = {.lex_state = 115},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 115},
  [45] = {.lex_state = 115},
  [46] = {.lex_state = 115},
  [47] = {.lex_state = 115},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 114},
  [51] = {.lex_state = 114},
  [52] = {.lex_state = 114},
  [53] = {.lex_state = 114},
  [54] = {.lex_state = 114},
  [55] = {.lex_state = 76},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 111},
  [62] = {.lex_state = 111},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 111},
  [65] = {.lex_state = 111},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 111},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 114},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 111},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 111},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 111},
  [86] = {.lex_state = 111},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 111},
  [89] = {.lex_state = 111},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 111},
  [98] = {.lex_state = 111},
  [99] = {.lex_state = 112},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 111},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 111},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 112},
  [106] = {.lex_state = 111},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 111},
  [111] = {.lex_state = 111},
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
    [anon_sym_render] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(104),
    [sym_tokens_block] = STATE(14),
    [sym_component_block] = STATE(14),
    [sym_story_block] = STATE(14),
    [aux_sym_source_file_repeat1] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_single_line_comment] = ACTIONS(5),
    [sym_multi_line_comment] = ACTIONS(5),
    [anon_sym_tokens] = ACTIONS(7),
    [anon_sym_component] = ACTIONS(9),
    [anon_sym_story] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(15), 1,
      anon_sym_RBRACE,
    STATE(7), 1,
      aux_sym_tokens_block_repeat1,
    STATE(19), 1,
      sym_token_declaration,
    STATE(97), 1,
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
  [23] = 4,
    ACTIONS(17), 1,
      anon_sym_RBRACE,
    STATE(88), 1,
      sym_token_type,
    STATE(10), 2,
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
  [44] = 5,
    ACTIONS(19), 1,
      anon_sym_RBRACE,
    STATE(5), 1,
      aux_sym_tokens_block_repeat1,
    STATE(19), 1,
      sym_token_declaration,
    STATE(97), 1,
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
  [67] = 5,
    ACTIONS(24), 1,
      anon_sym_RBRACE,
    STATE(5), 1,
      aux_sym_tokens_block_repeat1,
    STATE(19), 1,
      sym_token_declaration,
    STATE(97), 1,
      sym_token_type,
    ACTIONS(21), 8,
      anon_sym_color,
      anon_sym_text,
      anon_sym_number,
      anon_sym_dimension,
      anon_sym_range,
      anon_sym_toggle,
      anon_sym_switch,
      anon_sym_asset,
  [90] = 5,
    ACTIONS(26), 1,
      anon_sym_RBRACE,
    STATE(4), 1,
      aux_sym_tokens_block_repeat1,
    STATE(19), 1,
      sym_token_declaration,
    STATE(97), 1,
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
  [113] = 5,
    ACTIONS(26), 1,
      anon_sym_RBRACE,
    STATE(5), 1,
      aux_sym_tokens_block_repeat1,
    STATE(19), 1,
      sym_token_declaration,
    STATE(97), 1,
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
  [136] = 5,
    ACTIONS(28), 1,
      anon_sym_RBRACE,
    STATE(9), 1,
      aux_sym_tokens_block_repeat1,
    STATE(19), 1,
      sym_token_declaration,
    STATE(97), 1,
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
  [159] = 5,
    ACTIONS(15), 1,
      anon_sym_RBRACE,
    STATE(5), 1,
      aux_sym_tokens_block_repeat1,
    STATE(19), 1,
      sym_token_declaration,
    STATE(97), 1,
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
  [182] = 4,
    ACTIONS(30), 1,
      anon_sym_RBRACE,
    STATE(88), 1,
      sym_token_type,
    STATE(11), 2,
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
  [203] = 4,
    ACTIONS(35), 1,
      anon_sym_RBRACE,
    STATE(88), 1,
      sym_token_type,
    STATE(11), 2,
      sym_variant_declaration,
      aux_sym_variants_block_repeat1,
    ACTIONS(32), 8,
      anon_sym_color,
      anon_sym_text,
      anon_sym_number,
      anon_sym_dimension,
      anon_sym_range,
      anon_sym_toggle,
      anon_sym_switch,
      anon_sym_asset,
  [224] = 2,
    ACTIONS(37), 1,
      sym_positive_assertion,
    ACTIONS(39), 10,
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
  [240] = 5,
    ACTIONS(43), 1,
      anon_sym_DOLLAR,
    STATE(24), 1,
      sym_value,
    ACTIONS(45), 2,
      anon_sym_on,
      anon_sym_off,
    STATE(26), 2,
      sym_token_reference,
      sym_keyword,
    ACTIONS(41), 4,
      sym_dimension,
      sym_color,
      sym_url,
      sym_arbitrary_text,
  [261] = 6,
    ACTIONS(7), 1,
      anon_sym_tokens,
    ACTIONS(9), 1,
      anon_sym_component,
    ACTIONS(11), 1,
      anon_sym_story,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    ACTIONS(49), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(15), 4,
      sym_tokens_block,
      sym_component_block,
      sym_story_block,
      aux_sym_source_file_repeat1,
  [284] = 6,
    ACTIONS(51), 1,
      ts_builtin_sym_end,
    ACTIONS(56), 1,
      anon_sym_tokens,
    ACTIONS(59), 1,
      anon_sym_component,
    ACTIONS(62), 1,
      anon_sym_story,
    ACTIONS(53), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(15), 4,
      sym_tokens_block,
      sym_component_block,
      sym_story_block,
      aux_sym_source_file_repeat1,
  [307] = 2,
    ACTIONS(65), 1,
      sym__newlines,
    ACTIONS(67), 9,
      anon_sym_color,
      anon_sym_text,
      anon_sym_number,
      anon_sym_dimension,
      anon_sym_range,
      anon_sym_toggle,
      anon_sym_switch,
      anon_sym_asset,
      anon_sym_RBRACE,
  [322] = 5,
    ACTIONS(71), 1,
      anon_sym_DOLLAR,
    STATE(18), 1,
      sym_value,
    ACTIONS(73), 2,
      anon_sym_on,
      anon_sym_off,
    STATE(21), 2,
      sym_token_reference,
      sym_keyword,
    ACTIONS(69), 4,
      sym_dimension,
      sym_color,
      sym_url,
      sym_arbitrary_text,
  [343] = 2,
    ACTIONS(75), 1,
      sym__newlines,
    ACTIONS(77), 9,
      anon_sym_color,
      anon_sym_text,
      anon_sym_number,
      anon_sym_dimension,
      anon_sym_range,
      anon_sym_toggle,
      anon_sym_switch,
      anon_sym_asset,
      anon_sym_RBRACE,
  [358] = 2,
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
  [373] = 2,
    ACTIONS(39), 1,
      sym__newlines,
    ACTIONS(37), 9,
      anon_sym_color,
      anon_sym_text,
      anon_sym_number,
      anon_sym_dimension,
      anon_sym_range,
      anon_sym_toggle,
      anon_sym_switch,
      anon_sym_asset,
      anon_sym_RBRACE,
  [388] = 2,
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
  [403] = 1,
    ACTIONS(65), 10,
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
  [416] = 5,
    ACTIONS(89), 1,
      anon_sym_DOLLAR,
    STATE(77), 1,
      sym_value,
    ACTIONS(91), 2,
      anon_sym_on,
      anon_sym_off,
    STATE(72), 2,
      sym_token_reference,
      sym_keyword,
    ACTIONS(87), 4,
      sym_dimension,
      sym_color,
      sym_url,
      sym_arbitrary_text,
  [437] = 1,
    ACTIONS(93), 9,
      anon_sym_color,
      anon_sym_text,
      anon_sym_number,
      anon_sym_dimension,
      anon_sym_range,
      anon_sym_toggle,
      anon_sym_switch,
      anon_sym_asset,
      anon_sym_RBRACE,
  [449] = 1,
    ACTIONS(24), 9,
      anon_sym_color,
      anon_sym_text,
      anon_sym_number,
      anon_sym_dimension,
      anon_sym_range,
      anon_sym_toggle,
      anon_sym_switch,
      anon_sym_asset,
      anon_sym_RBRACE,
  [461] = 1,
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
  [473] = 5,
    ACTIONS(95), 1,
      anon_sym_RBRACE,
    ACTIONS(97), 1,
      anon_sym_variants,
    ACTIONS(99), 1,
      anon_sym_elements,
    ACTIONS(101), 1,
      anon_sym_style,
    STATE(31), 4,
      sym_variants_block,
      sym_elements_block,
      sym_style_block,
      aux_sym_component_block_repeat1,
  [492] = 5,
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
  [511] = 4,
    ACTIONS(116), 1,
      anon_sym_RBRACE,
    STATE(98), 1,
      sym_element_type,
    STATE(30), 2,
      sym_element_declaration,
      aux_sym_elements_block_repeat1,
    ACTIONS(114), 4,
      anon_sym_text,
      anon_sym_shape,
      anon_sym_image,
      anon_sym_video,
  [528] = 4,
    ACTIONS(121), 1,
      anon_sym_RBRACE,
    STATE(98), 1,
      sym_element_type,
    STATE(30), 2,
      sym_element_declaration,
      aux_sym_elements_block_repeat1,
    ACTIONS(118), 4,
      anon_sym_text,
      anon_sym_shape,
      anon_sym_image,
      anon_sym_video,
  [545] = 5,
    ACTIONS(97), 1,
      anon_sym_variants,
    ACTIONS(99), 1,
      anon_sym_elements,
    ACTIONS(101), 1,
      anon_sym_style,
    ACTIONS(123), 1,
      anon_sym_RBRACE,
    STATE(28), 4,
      sym_variants_block,
      sym_elements_block,
      sym_style_block,
      aux_sym_component_block_repeat1,
  [564] = 4,
    ACTIONS(125), 1,
      anon_sym_RBRACE,
    STATE(98), 1,
      sym_element_type,
    STATE(29), 2,
      sym_element_declaration,
      aux_sym_elements_block_repeat1,
    ACTIONS(114), 4,
      anon_sym_text,
      anon_sym_shape,
      anon_sym_image,
      anon_sym_video,
  [581] = 3,
    ACTIONS(127), 1,
      ts_builtin_sym_end,
    ACTIONS(131), 1,
      sym__newlines,
    ACTIONS(129), 5,
      sym_single_line_comment,
      sym_multi_line_comment,
      anon_sym_tokens,
      anon_sym_component,
      anon_sym_story,
  [595] = 3,
    ACTIONS(133), 1,
      ts_builtin_sym_end,
    ACTIONS(137), 1,
      sym__newlines,
    ACTIONS(135), 5,
      sym_single_line_comment,
      sym_multi_line_comment,
      anon_sym_tokens,
      anon_sym_component,
      anon_sym_story,
  [609] = 3,
    ACTIONS(139), 1,
      ts_builtin_sym_end,
    ACTIONS(143), 1,
      sym__newlines,
    ACTIONS(141), 5,
      sym_single_line_comment,
      sym_multi_line_comment,
      anon_sym_tokens,
      anon_sym_component,
      anon_sym_story,
  [623] = 3,
    ACTIONS(145), 1,
      ts_builtin_sym_end,
    ACTIONS(149), 1,
      sym__newlines,
    ACTIONS(147), 5,
      sym_single_line_comment,
      sym_multi_line_comment,
      anon_sym_tokens,
      anon_sym_component,
      anon_sym_story,
  [637] = 3,
    ACTIONS(151), 1,
      ts_builtin_sym_end,
    ACTIONS(155), 1,
      sym__newlines,
    ACTIONS(153), 5,
      sym_single_line_comment,
      sym_multi_line_comment,
      anon_sym_tokens,
      anon_sym_component,
      anon_sym_story,
  [651] = 3,
    ACTIONS(157), 1,
      ts_builtin_sym_end,
    ACTIONS(161), 1,
      sym__newlines,
    ACTIONS(159), 5,
      sym_single_line_comment,
      sym_multi_line_comment,
      anon_sym_tokens,
      anon_sym_component,
      anon_sym_story,
  [665] = 1,
    ACTIONS(127), 6,
      ts_builtin_sym_end,
      sym_single_line_comment,
      sym_multi_line_comment,
      anon_sym_tokens,
      anon_sym_component,
      anon_sym_story,
  [674] = 1,
    ACTIONS(145), 6,
      ts_builtin_sym_end,
      sym_single_line_comment,
      sym_multi_line_comment,
      anon_sym_tokens,
      anon_sym_component,
      anon_sym_story,
  [683] = 1,
    ACTIONS(163), 6,
      ts_builtin_sym_end,
      sym_single_line_comment,
      sym_multi_line_comment,
      anon_sym_tokens,
      anon_sym_component,
      anon_sym_story,
  [692] = 1,
    ACTIONS(165), 6,
      ts_builtin_sym_end,
      sym_single_line_comment,
      sym_multi_line_comment,
      anon_sym_tokens,
      anon_sym_component,
      anon_sym_story,
  [701] = 2,
    ACTIONS(169), 1,
      anon_sym_LBRACE,
    ACTIONS(167), 5,
      anon_sym_text,
      anon_sym_RBRACE,
      anon_sym_shape,
      anon_sym_image,
      anon_sym_video,
  [712] = 1,
    ACTIONS(171), 6,
      ts_builtin_sym_end,
      sym_single_line_comment,
      sym_multi_line_comment,
      anon_sym_tokens,
      anon_sym_component,
      anon_sym_story,
  [721] = 1,
    ACTIONS(139), 6,
      ts_builtin_sym_end,
      sym_single_line_comment,
      sym_multi_line_comment,
      anon_sym_tokens,
      anon_sym_component,
      anon_sym_story,
  [730] = 1,
    ACTIONS(173), 6,
      ts_builtin_sym_end,
      sym_single_line_comment,
      sym_multi_line_comment,
      anon_sym_tokens,
      anon_sym_component,
      anon_sym_story,
  [739] = 1,
    ACTIONS(133), 6,
      ts_builtin_sym_end,
      sym_single_line_comment,
      sym_multi_line_comment,
      anon_sym_tokens,
      anon_sym_component,
      anon_sym_story,
  [748] = 3,
    STATE(96), 1,
      sym_element_declaration,
    STATE(98), 1,
      sym_element_type,
    ACTIONS(114), 4,
      anon_sym_text,
      anon_sym_shape,
      anon_sym_image,
      anon_sym_video,
  [761] = 1,
    ACTIONS(175), 5,
      anon_sym_text,
      anon_sym_RBRACE,
      anon_sym_shape,
      anon_sym_image,
      anon_sym_video,
  [769] = 2,
    ACTIONS(177), 1,
      sym__newlines,
    ACTIONS(179), 4,
      anon_sym_RBRACE,
      anon_sym_variants,
      anon_sym_elements,
      anon_sym_style,
  [779] = 2,
    ACTIONS(181), 1,
      sym__newlines,
    ACTIONS(183), 4,
      anon_sym_RBRACE,
      anon_sym_variants,
      anon_sym_elements,
      anon_sym_style,
  [789] = 2,
    ACTIONS(185), 1,
      sym__newlines,
    ACTIONS(187), 4,
      anon_sym_RBRACE,
      anon_sym_variants,
      anon_sym_elements,
      anon_sym_style,
  [799] = 2,
    ACTIONS(189), 1,
      sym__newlines,
    ACTIONS(191), 4,
      anon_sym_RBRACE,
      anon_sym_variants,
      anon_sym_elements,
      anon_sym_style,
  [809] = 2,
    ACTIONS(193), 1,
      sym__newlines,
    ACTIONS(195), 4,
      anon_sym_RBRACE,
      anon_sym_variants,
      anon_sym_elements,
      anon_sym_style,
  [819] = 3,
    ACTIONS(197), 1,
      sym_identifier,
    STATE(84), 1,
      sym_keyword,
    ACTIONS(45), 2,
      anon_sym_on,
      anon_sym_off,
  [830] = 1,
    ACTIONS(199), 4,
      anon_sym_RBRACE,
      anon_sym_variants,
      anon_sym_elements,
      anon_sym_style,
  [837] = 1,
    ACTIONS(201), 4,
      anon_sym_RBRACE,
      anon_sym_variants,
      anon_sym_elements,
      anon_sym_style,
  [844] = 1,
    ACTIONS(203), 4,
      anon_sym_RBRACE,
      anon_sym_variants,
      anon_sym_elements,
      anon_sym_style,
  [851] = 3,
    ACTIONS(205), 1,
      anon_sym_RBRACE,
    ACTIONS(207), 1,
      anon_sym_frame,
    STATE(66), 2,
      sym_frame_block,
      aux_sym_story_block_repeat1,
  [862] = 1,
    ACTIONS(209), 4,
      anon_sym_RBRACE,
      anon_sym_variants,
      anon_sym_elements,
      anon_sym_style,
  [869] = 4,
    ACTIONS(211), 1,
      sym_identifier,
    ACTIONS(213), 1,
      anon_sym_RBRACE,
    STATE(65), 1,
      aux_sym_style_block_repeat1,
    STATE(78), 1,
      sym_style_declaration,
  [882] = 4,
    ACTIONS(211), 1,
      sym_identifier,
    ACTIONS(213), 1,
      anon_sym_RBRACE,
    STATE(64), 1,
      aux_sym_style_block_repeat1,
    STATE(78), 1,
      sym_style_declaration,
  [895] = 3,
    ACTIONS(215), 1,
      anon_sym_RBRACE,
    ACTIONS(217), 1,
      anon_sym_frame,
    STATE(63), 2,
      sym_frame_block,
      aux_sym_story_block_repeat1,
  [906] = 4,
    ACTIONS(220), 1,
      sym_identifier,
    ACTIONS(223), 1,
      anon_sym_RBRACE,
    STATE(64), 1,
      aux_sym_style_block_repeat1,
    STATE(78), 1,
      sym_style_declaration,
  [919] = 4,
    ACTIONS(211), 1,
      sym_identifier,
    ACTIONS(225), 1,
      anon_sym_RBRACE,
    STATE(64), 1,
      aux_sym_style_block_repeat1,
    STATE(78), 1,
      sym_style_declaration,
  [932] = 3,
    ACTIONS(207), 1,
      anon_sym_frame,
    ACTIONS(227), 1,
      anon_sym_RBRACE,
    STATE(63), 2,
      sym_frame_block,
      aux_sym_story_block_repeat1,
  [943] = 4,
    ACTIONS(211), 1,
      sym_identifier,
    ACTIONS(229), 1,
      anon_sym_RBRACE,
    STATE(62), 1,
      aux_sym_style_block_repeat1,
    STATE(78), 1,
      sym_style_declaration,
  [956] = 1,
    ACTIONS(231), 4,
      anon_sym_RBRACE,
      anon_sym_variants,
      anon_sym_elements,
      anon_sym_style,
  [963] = 1,
    ACTIONS(233), 4,
      anon_sym_RBRACE,
      anon_sym_variants,
      anon_sym_elements,
      anon_sym_style,
  [970] = 1,
    ACTIONS(235), 4,
      anon_sym_RBRACE,
      anon_sym_variants,
      anon_sym_elements,
      anon_sym_style,
  [977] = 3,
    ACTIONS(237), 1,
      aux_sym_conditional_token1,
    ACTIONS(239), 1,
      anon_sym_LBRACE,
    STATE(109), 1,
      sym_conditional,
  [987] = 2,
    ACTIONS(83), 1,
      sym__newlines,
    ACTIONS(85), 2,
      sym_identifier,
      anon_sym_RBRACE,
  [995] = 2,
    ACTIONS(65), 1,
      sym__newlines,
    ACTIONS(67), 2,
      sym_identifier,
      anon_sym_RBRACE,
  [1003] = 2,
    ACTIONS(39), 1,
      sym__newlines,
    ACTIONS(37), 2,
      sym_identifier,
      anon_sym_RBRACE,
  [1011] = 2,
    ACTIONS(241), 1,
      sym__newlines,
    ACTIONS(243), 2,
      anon_sym_RBRACE,
      anon_sym_frame,
  [1019] = 3,
    ACTIONS(237), 1,
      aux_sym_conditional_token1,
    ACTIONS(245), 1,
      anon_sym_LBRACE,
    STATE(107), 1,
      sym_conditional,
  [1029] = 2,
    ACTIONS(249), 1,
      sym__newlines,
    ACTIONS(247), 2,
      sym_identifier,
      anon_sym_RBRACE,
  [1037] = 2,
    ACTIONS(253), 1,
      sym__newlines,
    ACTIONS(251), 2,
      sym_identifier,
      anon_sym_RBRACE,
  [1045] = 1,
    ACTIONS(223), 2,
      sym_identifier,
      anon_sym_RBRACE,
  [1050] = 1,
    ACTIONS(255), 2,
      anon_sym_RBRACE,
      anon_sym_frame,
  [1055] = 2,
    ACTIONS(257), 1,
      anon_sym_DOLLAR,
    STATE(83), 1,
      sym_token_reference,
  [1062] = 2,
    ACTIONS(259), 1,
      sym_identifier,
    ACTIONS(261), 1,
      anon_sym_LBRACE,
  [1069] = 2,
    ACTIONS(263), 1,
      sym_positive_assertion,
    ACTIONS(265), 1,
      sym_negative_assertion,
  [1076] = 1,
    ACTIONS(267), 1,
      anon_sym_LBRACE,
  [1080] = 1,
    ACTIONS(269), 1,
      sym_identifier,
  [1084] = 1,
    ACTIONS(271), 1,
      sym_identifier,
  [1088] = 1,
    ACTIONS(273), 1,
      anon_sym_LBRACE,
  [1092] = 1,
    ACTIONS(275), 1,
      sym_identifier,
  [1096] = 1,
    ACTIONS(277), 1,
      sym_identifier,
  [1100] = 1,
    ACTIONS(279), 1,
      anon_sym_LBRACE,
  [1104] = 1,
    ACTIONS(281), 1,
      anon_sym_LBRACE,
  [1108] = 1,
    ACTIONS(283), 1,
      anon_sym_COLON,
  [1112] = 1,
    ACTIONS(285), 1,
      anon_sym_LBRACE,
  [1116] = 1,
    ACTIONS(287), 1,
      anon_sym_RBRACE,
  [1120] = 1,
    ACTIONS(289), 1,
      anon_sym_COLON,
  [1124] = 1,
    ACTIONS(291), 1,
      anon_sym_RBRACE,
  [1128] = 1,
    ACTIONS(293), 1,
      sym_identifier,
  [1132] = 1,
    ACTIONS(295), 1,
      sym_identifier,
  [1136] = 1,
    ACTIONS(297), 1,
      sym_spaced_identifier,
  [1140] = 1,
    ACTIONS(299), 1,
      anon_sym_COLON,
  [1144] = 1,
    ACTIONS(301), 1,
      sym_identifier,
  [1148] = 1,
    ACTIONS(303), 1,
      anon_sym_LBRACE,
  [1152] = 1,
    ACTIONS(305), 1,
      sym_identifier,
  [1156] = 1,
    ACTIONS(307), 1,
      ts_builtin_sym_end,
  [1160] = 1,
    ACTIONS(309), 1,
      sym_spaced_identifier,
  [1164] = 1,
    ACTIONS(311), 1,
      sym_identifier,
  [1168] = 1,
    ACTIONS(313), 1,
      anon_sym_LBRACE,
  [1172] = 1,
    ACTIONS(315), 1,
      anon_sym_render,
  [1176] = 1,
    ACTIONS(317), 1,
      anon_sym_LBRACE,
  [1180] = 1,
    ACTIONS(319), 1,
      sym_identifier,
  [1184] = 1,
    ACTIONS(321), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 23,
  [SMALL_STATE(4)] = 44,
  [SMALL_STATE(5)] = 67,
  [SMALL_STATE(6)] = 90,
  [SMALL_STATE(7)] = 113,
  [SMALL_STATE(8)] = 136,
  [SMALL_STATE(9)] = 159,
  [SMALL_STATE(10)] = 182,
  [SMALL_STATE(11)] = 203,
  [SMALL_STATE(12)] = 224,
  [SMALL_STATE(13)] = 240,
  [SMALL_STATE(14)] = 261,
  [SMALL_STATE(15)] = 284,
  [SMALL_STATE(16)] = 307,
  [SMALL_STATE(17)] = 322,
  [SMALL_STATE(18)] = 343,
  [SMALL_STATE(19)] = 358,
  [SMALL_STATE(20)] = 373,
  [SMALL_STATE(21)] = 388,
  [SMALL_STATE(22)] = 403,
  [SMALL_STATE(23)] = 416,
  [SMALL_STATE(24)] = 437,
  [SMALL_STATE(25)] = 449,
  [SMALL_STATE(26)] = 461,
  [SMALL_STATE(27)] = 473,
  [SMALL_STATE(28)] = 492,
  [SMALL_STATE(29)] = 511,
  [SMALL_STATE(30)] = 528,
  [SMALL_STATE(31)] = 545,
  [SMALL_STATE(32)] = 564,
  [SMALL_STATE(33)] = 581,
  [SMALL_STATE(34)] = 595,
  [SMALL_STATE(35)] = 609,
  [SMALL_STATE(36)] = 623,
  [SMALL_STATE(37)] = 637,
  [SMALL_STATE(38)] = 651,
  [SMALL_STATE(39)] = 665,
  [SMALL_STATE(40)] = 674,
  [SMALL_STATE(41)] = 683,
  [SMALL_STATE(42)] = 692,
  [SMALL_STATE(43)] = 701,
  [SMALL_STATE(44)] = 712,
  [SMALL_STATE(45)] = 721,
  [SMALL_STATE(46)] = 730,
  [SMALL_STATE(47)] = 739,
  [SMALL_STATE(48)] = 748,
  [SMALL_STATE(49)] = 761,
  [SMALL_STATE(50)] = 769,
  [SMALL_STATE(51)] = 779,
  [SMALL_STATE(52)] = 789,
  [SMALL_STATE(53)] = 799,
  [SMALL_STATE(54)] = 809,
  [SMALL_STATE(55)] = 819,
  [SMALL_STATE(56)] = 830,
  [SMALL_STATE(57)] = 837,
  [SMALL_STATE(58)] = 844,
  [SMALL_STATE(59)] = 851,
  [SMALL_STATE(60)] = 862,
  [SMALL_STATE(61)] = 869,
  [SMALL_STATE(62)] = 882,
  [SMALL_STATE(63)] = 895,
  [SMALL_STATE(64)] = 906,
  [SMALL_STATE(65)] = 919,
  [SMALL_STATE(66)] = 932,
  [SMALL_STATE(67)] = 943,
  [SMALL_STATE(68)] = 956,
  [SMALL_STATE(69)] = 963,
  [SMALL_STATE(70)] = 970,
  [SMALL_STATE(71)] = 977,
  [SMALL_STATE(72)] = 987,
  [SMALL_STATE(73)] = 995,
  [SMALL_STATE(74)] = 1003,
  [SMALL_STATE(75)] = 1011,
  [SMALL_STATE(76)] = 1019,
  [SMALL_STATE(77)] = 1029,
  [SMALL_STATE(78)] = 1037,
  [SMALL_STATE(79)] = 1045,
  [SMALL_STATE(80)] = 1050,
  [SMALL_STATE(81)] = 1055,
  [SMALL_STATE(82)] = 1062,
  [SMALL_STATE(83)] = 1069,
  [SMALL_STATE(84)] = 1076,
  [SMALL_STATE(85)] = 1080,
  [SMALL_STATE(86)] = 1084,
  [SMALL_STATE(87)] = 1088,
  [SMALL_STATE(88)] = 1092,
  [SMALL_STATE(89)] = 1096,
  [SMALL_STATE(90)] = 1100,
  [SMALL_STATE(91)] = 1104,
  [SMALL_STATE(92)] = 1108,
  [SMALL_STATE(93)] = 1112,
  [SMALL_STATE(94)] = 1116,
  [SMALL_STATE(95)] = 1120,
  [SMALL_STATE(96)] = 1124,
  [SMALL_STATE(97)] = 1128,
  [SMALL_STATE(98)] = 1132,
  [SMALL_STATE(99)] = 1136,
  [SMALL_STATE(100)] = 1140,
  [SMALL_STATE(101)] = 1144,
  [SMALL_STATE(102)] = 1148,
  [SMALL_STATE(103)] = 1152,
  [SMALL_STATE(104)] = 1156,
  [SMALL_STATE(105)] = 1160,
  [SMALL_STATE(106)] = 1164,
  [SMALL_STATE(107)] = 1168,
  [SMALL_STATE(108)] = 1172,
  [SMALL_STATE(109)] = 1176,
  [SMALL_STATE(110)] = 1180,
  [SMALL_STATE(111)] = 1184,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tokens_block_repeat1, 2), SHIFT_REPEAT(103),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tokens_block_repeat1, 2),
  [26] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [28] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variants_block_repeat1, 2), SHIFT_REPEAT(103),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variants_block_repeat1, 2),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_token_reference, 2),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_token_reference, 2),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(15),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(82),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(106),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(105),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword, 1),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword, 1),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_token_declaration, 4),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_token_declaration, 4),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tokens_block_repeat1, 1),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variant_declaration, 4),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_component_block_repeat1, 2),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_block_repeat1, 2), SHIFT_REPEAT(91),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_block_repeat1, 2), SHIFT_REPEAT(102),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_block_repeat1, 2), SHIFT_REPEAT(101),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_elements_block_repeat1, 2), SHIFT_REPEAT(85),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_elements_block_repeat1, 2),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tokens_block, 4),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tokens_block, 4),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_story_block, 5),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_story_block, 5),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tokens_block, 5),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tokens_block, 5),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tokens_block, 6),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tokens_block, 6),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_story_block, 4),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_story_block, 4),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tokens_block, 3),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tokens_block, 3),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_block, 4),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_story_block, 6),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_declaration, 2),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tokens_block, 7),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_block, 5),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_declaration, 5),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_style_block, 6),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_elements_block, 4),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_elements_block, 3),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_style_block, 4),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_style_block, 5),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_block, 7),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_elements_block, 5),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_block, 5),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variants_block, 3),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_story_block_repeat1, 2),
  [217] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_story_block_repeat1, 2), SHIFT_REPEAT(99),
  [220] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_style_block_repeat1, 2), SHIFT_REPEAT(100),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_style_block_repeat1, 2),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_elements_block, 4),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variants_block, 4),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_block, 6),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_frame_block, 6),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_style_declaration, 3),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_declaration, 3),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_style_block_repeat1, 1),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_frame_block, 7),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 4),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_type, 1),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_token_type, 1),
  [307] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
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
