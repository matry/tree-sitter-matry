#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 69
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 39
#define ALIAS_COUNT 0
#define TOKEN_COUNT 21
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 1

enum {
  sym_spaced_identifier = 1,
  sym_identifier = 2,
  sym__newlines = 3,
  sym_single_line_comment = 4,
  sym_dimension = 5,
  anon_sym_DOLLAR = 6,
  sym_url = 7,
  anon_sym_on = 8,
  anon_sym_off = 9,
  sym_arbitrary_text = 10,
  anon_sym_tokens = 11,
  anon_sym_LBRACE = 12,
  anon_sym_RBRACE = 13,
  anon_sym_COLON = 14,
  anon_sym_component = 15,
  anon_sym_elements = 16,
  anon_sym_style = 17,
  anon_sym_story = 18,
  anon_sym_frame = 19,
  anon_sym_render = 20,
  sym_source_file = 21,
  sym_value = 22,
  sym_token_reference = 23,
  sym_keyword = 24,
  sym_tokens_block = 25,
  sym_token_declaration = 26,
  sym_component_block = 27,
  sym_elements_block = 28,
  sym_style_block = 29,
  sym_style_declaration = 30,
  sym_story_block = 31,
  sym_frame_block = 32,
  aux_sym_source_file_repeat1 = 33,
  aux_sym_tokens_block_repeat1 = 34,
  aux_sym_component_block_repeat1 = 35,
  aux_sym_elements_block_repeat1 = 36,
  aux_sym_style_block_repeat1 = 37,
  aux_sym_story_block_repeat1 = 38,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_spaced_identifier] = "spaced_identifier",
  [sym_identifier] = "identifier",
  [sym__newlines] = "_newlines",
  [sym_single_line_comment] = "single_line_comment",
  [sym_dimension] = "dimension",
  [anon_sym_DOLLAR] = "$",
  [sym_url] = "url",
  [anon_sym_on] = "on",
  [anon_sym_off] = "off",
  [sym_arbitrary_text] = "arbitrary_text",
  [anon_sym_tokens] = "tokens",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COLON] = ":",
  [anon_sym_component] = "component",
  [anon_sym_elements] = "elements",
  [anon_sym_style] = "style",
  [anon_sym_story] = "story",
  [anon_sym_frame] = "frame",
  [anon_sym_render] = "render",
  [sym_source_file] = "source_file",
  [sym_value] = "value",
  [sym_token_reference] = "token_reference",
  [sym_keyword] = "keyword",
  [sym_tokens_block] = "tokens_block",
  [sym_token_declaration] = "token_declaration",
  [sym_component_block] = "component_block",
  [sym_elements_block] = "elements_block",
  [sym_style_block] = "style_block",
  [sym_style_declaration] = "style_declaration",
  [sym_story_block] = "story_block",
  [sym_frame_block] = "frame_block",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_tokens_block_repeat1] = "tokens_block_repeat1",
  [aux_sym_component_block_repeat1] = "component_block_repeat1",
  [aux_sym_elements_block_repeat1] = "elements_block_repeat1",
  [aux_sym_style_block_repeat1] = "style_block_repeat1",
  [aux_sym_story_block_repeat1] = "story_block_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_spaced_identifier] = sym_spaced_identifier,
  [sym_identifier] = sym_identifier,
  [sym__newlines] = sym__newlines,
  [sym_single_line_comment] = sym_single_line_comment,
  [sym_dimension] = sym_dimension,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [sym_url] = sym_url,
  [anon_sym_on] = anon_sym_on,
  [anon_sym_off] = anon_sym_off,
  [sym_arbitrary_text] = sym_arbitrary_text,
  [anon_sym_tokens] = anon_sym_tokens,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_component] = anon_sym_component,
  [anon_sym_elements] = anon_sym_elements,
  [anon_sym_style] = anon_sym_style,
  [anon_sym_story] = anon_sym_story,
  [anon_sym_frame] = anon_sym_frame,
  [anon_sym_render] = anon_sym_render,
  [sym_source_file] = sym_source_file,
  [sym_value] = sym_value,
  [sym_token_reference] = sym_token_reference,
  [sym_keyword] = sym_keyword,
  [sym_tokens_block] = sym_tokens_block,
  [sym_token_declaration] = sym_token_declaration,
  [sym_component_block] = sym_component_block,
  [sym_elements_block] = sym_elements_block,
  [sym_style_block] = sym_style_block,
  [sym_style_declaration] = sym_style_declaration,
  [sym_story_block] = sym_story_block,
  [sym_frame_block] = sym_frame_block,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_tokens_block_repeat1] = aux_sym_tokens_block_repeat1,
  [aux_sym_component_block_repeat1] = aux_sym_component_block_repeat1,
  [aux_sym_elements_block_repeat1] = aux_sym_elements_block_repeat1,
  [aux_sym_style_block_repeat1] = aux_sym_style_block_repeat1,
  [aux_sym_story_block_repeat1] = aux_sym_story_block_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
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
  [sym_single_line_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_dimension] = {
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
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(51);
      if (lookahead == '$') ADVANCE(66);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == 'c') ADVANCE(29);
      if (lookahead == 'e') ADVANCE(18);
      if (lookahead == 'f') ADVANCE(35);
      if (lookahead == 'o') ADVANCE(15);
      if (lookahead == 'r') ADVANCE(6);
      if (lookahead == 's') ADVANCE(40);
      if (lookahead == 't') ADVANCE(30);
      if (lookahead == '{') ADVANCE(83);
      if (lookahead == '}') ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(55);
      if (lookahead == '}') ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 2:
      if (lookahead == '/') ADVANCE(56);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 3:
      if (lookahead == '/') ADVANCE(57);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(22);
      END_STATE();
    case 5:
      if (lookahead == 'd') ADVANCE(11);
      END_STATE();
    case 6:
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(90);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 15:
      if (lookahead == 'f') ADVANCE(16);
      if (lookahead == 'n') ADVANCE(70);
      END_STATE();
    case 16:
      if (lookahead == 'f') ADVANCE(72);
      END_STATE();
    case 17:
      if (lookahead == 'k') ADVANCE(10);
      END_STATE();
    case 18:
      if (lookahead == 'l') ADVANCE(12);
      END_STATE();
    case 19:
      if (lookahead == 'l') ADVANCE(8);
      END_STATE();
    case 20:
      if (lookahead == 'm') ADVANCE(63);
      END_STATE();
    case 21:
      if (lookahead == 'm') ADVANCE(34);
      END_STATE();
    case 22:
      if (lookahead == 'm') ADVANCE(7);
      END_STATE();
    case 23:
      if (lookahead == 'm') ADVANCE(13);
      END_STATE();
    case 24:
      if (lookahead == 'n') ADVANCE(5);
      END_STATE();
    case 25:
      if (lookahead == 'n') ADVANCE(38);
      END_STATE();
    case 26:
      if (lookahead == 'n') ADVANCE(42);
      END_STATE();
    case 27:
      if (lookahead == 'n') ADVANCE(41);
      END_STATE();
    case 28:
      if (lookahead == 'n') ADVANCE(14);
      END_STATE();
    case 29:
      if (lookahead == 'o') ADVANCE(21);
      END_STATE();
    case 30:
      if (lookahead == 'o') ADVANCE(17);
      END_STATE();
    case 31:
      if (lookahead == 'o') ADVANCE(36);
      END_STATE();
    case 32:
      if (lookahead == 'o') ADVANCE(36);
      if (lookahead == 'y') ADVANCE(19);
      END_STATE();
    case 33:
      if (lookahead == 'o') ADVANCE(28);
      END_STATE();
    case 34:
      if (lookahead == 'p') ADVANCE(33);
      END_STATE();
    case 35:
      if (lookahead == 'r') ADVANCE(4);
      END_STATE();
    case 36:
      if (lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 37:
      if (lookahead == 'r') ADVANCE(91);
      END_STATE();
    case 38:
      if (lookahead == 's') ADVANCE(82);
      END_STATE();
    case 39:
      if (lookahead == 's') ADVANCE(87);
      END_STATE();
    case 40:
      if (lookahead == 't') ADVANCE(32);
      END_STATE();
    case 41:
      if (lookahead == 't') ADVANCE(86);
      END_STATE();
    case 42:
      if (lookahead == 't') ADVANCE(39);
      END_STATE();
    case 43:
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 44:
      if (lookahead == 'x') ADVANCE(63);
      END_STATE();
    case 45:
      if (lookahead == 'y') ADVANCE(89);
      END_STATE();
    case 46:
      if (lookahead == '}') ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(46)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 47:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 48:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 49:
      if (eof) ADVANCE(51);
      if (lookahead == '\n') ADVANCE(55);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == 'c') ADVANCE(29);
      if (lookahead == 'e') ADVANCE(18);
      if (lookahead == 'f') ADVANCE(35);
      if (lookahead == 's') ADVANCE(40);
      if (lookahead == 't') ADVANCE(30);
      if (lookahead == '}') ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(49)
      END_STATE();
    case 50:
      if (eof) ADVANCE(51);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == 'c') ADVANCE(29);
      if (lookahead == 's') ADVANCE(43);
      if (lookahead == 't') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(50)
      END_STATE();
    case 51:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_spaced_identifier);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_spaced_identifier);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym__newlines);
      if (lookahead == '\n') ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_single_line_comment);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(57);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_single_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_dimension);
      if (lookahead == '\n') ADVANCE(65);
      if (lookahead == '%') ADVANCE(59);
      if (lookahead == 'e') ADVANCE(78);
      if (lookahead == 'p') ADVANCE(79);
      if (lookahead == 'r') ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      if (lookahead != 0) ADVANCE(81);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_dimension);
      if (lookahead == '\n') ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(60);
      if (lookahead != 0) ADVANCE(81);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_dimension);
      if (lookahead == '\n') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      if (lookahead != 0) ADVANCE(81);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_dimension);
      if (lookahead == '\n') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(61);
      if (lookahead != 0) ADVANCE(81);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_dimension);
      if (lookahead == '%') ADVANCE(63);
      if (lookahead == 'e') ADVANCE(20);
      if (lookahead == 'p') ADVANCE(44);
      if (lookahead == 'r') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_dimension);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(65);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_dimension);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_dimension);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(81);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_url);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_url);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(81);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_on);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_on);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(81);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_off);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_off);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(81);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_arbitrary_text);
      if (lookahead == '$') ADVANCE(67);
      if (lookahead == '/') ADVANCE(80);
      if (lookahead == 'o') ADVANCE(76);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(81);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_arbitrary_text);
      if (lookahead == 'e') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(81);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_arbitrary_text);
      if (lookahead == 'f') ADVANCE(77);
      if (lookahead == 'n') ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(81);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_arbitrary_text);
      if (lookahead == 'f') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(81);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_arbitrary_text);
      if (lookahead == 'm') ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(81);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_arbitrary_text);
      if (lookahead == 'x') ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(81);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_arbitrary_text);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(81);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_arbitrary_text);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_tokens);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_component);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_elements);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_style);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_story);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_frame);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_render);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 50},
  [2] = {.lex_state = 74},
  [3] = {.lex_state = 50},
  [4] = {.lex_state = 50},
  [5] = {.lex_state = 74},
  [6] = {.lex_state = 49},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 49},
  [9] = {.lex_state = 49},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 49},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 50},
  [14] = {.lex_state = 50},
  [15] = {.lex_state = 50},
  [16] = {.lex_state = 50},
  [17] = {.lex_state = 50},
  [18] = {.lex_state = 50},
  [19] = {.lex_state = 49},
  [20] = {.lex_state = 49},
  [21] = {.lex_state = 46},
  [22] = {.lex_state = 46},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 46},
  [26] = {.lex_state = 46},
  [27] = {.lex_state = 49},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 46},
  [30] = {.lex_state = 46},
  [31] = {.lex_state = 49},
  [32] = {.lex_state = 46},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 49},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 46},
  [45] = {.lex_state = 46},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 46},
  [49] = {.lex_state = 46},
  [50] = {.lex_state = 46},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 47},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 46},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 46},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 47},
  [63] = {.lex_state = 46},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 46},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_single_line_comment] = ACTIONS(1),
    [sym_dimension] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [sym_url] = ACTIONS(1),
    [anon_sym_on] = ACTIONS(1),
    [anon_sym_off] = ACTIONS(1),
    [anon_sym_tokens] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_component] = ACTIONS(1),
    [anon_sym_elements] = ACTIONS(1),
    [anon_sym_style] = ACTIONS(1),
    [anon_sym_story] = ACTIONS(1),
    [anon_sym_frame] = ACTIONS(1),
    [anon_sym_render] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(59),
    [sym_tokens_block] = STATE(3),
    [sym_component_block] = STATE(3),
    [sym_story_block] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_single_line_comment] = ACTIONS(5),
    [anon_sym_tokens] = ACTIONS(7),
    [anon_sym_component] = ACTIONS(9),
    [anon_sym_story] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(15), 1,
      anon_sym_DOLLAR,
    STATE(39), 1,
      sym_value,
    ACTIONS(17), 2,
      anon_sym_on,
      anon_sym_off,
    STATE(38), 2,
      sym_token_reference,
      sym_keyword,
    ACTIONS(13), 3,
      sym_dimension,
      sym_url,
      sym_arbitrary_text,
  [20] = 6,
    ACTIONS(7), 1,
      anon_sym_tokens,
    ACTIONS(9), 1,
      anon_sym_component,
    ACTIONS(11), 1,
      anon_sym_story,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(21), 1,
      sym_single_line_comment,
    STATE(4), 4,
      sym_tokens_block,
      sym_component_block,
      sym_story_block,
      aux_sym_source_file_repeat1,
  [42] = 6,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    ACTIONS(25), 1,
      sym_single_line_comment,
    ACTIONS(28), 1,
      anon_sym_tokens,
    ACTIONS(31), 1,
      anon_sym_component,
    ACTIONS(34), 1,
      anon_sym_story,
    STATE(4), 4,
      sym_tokens_block,
      sym_component_block,
      sym_story_block,
      aux_sym_source_file_repeat1,
  [64] = 5,
    ACTIONS(15), 1,
      anon_sym_DOLLAR,
    STATE(34), 1,
      sym_value,
    ACTIONS(17), 2,
      anon_sym_on,
      anon_sym_off,
    STATE(38), 2,
      sym_token_reference,
      sym_keyword,
    ACTIONS(13), 3,
      sym_dimension,
      sym_url,
      sym_arbitrary_text,
  [84] = 3,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
    ACTIONS(39), 1,
      sym__newlines,
    ACTIONS(41), 4,
      sym_single_line_comment,
      anon_sym_tokens,
      anon_sym_component,
      anon_sym_story,
  [97] = 4,
    ACTIONS(43), 1,
      anon_sym_RBRACE,
    ACTIONS(45), 1,
      anon_sym_elements,
    ACTIONS(48), 1,
      anon_sym_style,
    STATE(7), 3,
      sym_elements_block,
      sym_style_block,
      aux_sym_component_block_repeat1,
  [112] = 3,
    ACTIONS(51), 1,
      ts_builtin_sym_end,
    ACTIONS(53), 1,
      sym__newlines,
    ACTIONS(55), 4,
      sym_single_line_comment,
      anon_sym_tokens,
      anon_sym_component,
      anon_sym_story,
  [125] = 3,
    ACTIONS(57), 1,
      ts_builtin_sym_end,
    ACTIONS(59), 1,
      sym__newlines,
    ACTIONS(61), 4,
      sym_single_line_comment,
      anon_sym_tokens,
      anon_sym_component,
      anon_sym_story,
  [138] = 4,
    ACTIONS(63), 1,
      anon_sym_RBRACE,
    ACTIONS(65), 1,
      anon_sym_elements,
    ACTIONS(67), 1,
      anon_sym_style,
    STATE(7), 3,
      sym_elements_block,
      sym_style_block,
      aux_sym_component_block_repeat1,
  [153] = 3,
    ACTIONS(69), 1,
      ts_builtin_sym_end,
    ACTIONS(71), 1,
      sym__newlines,
    ACTIONS(73), 4,
      sym_single_line_comment,
      anon_sym_tokens,
      anon_sym_component,
      anon_sym_story,
  [166] = 4,
    ACTIONS(65), 1,
      anon_sym_elements,
    ACTIONS(67), 1,
      anon_sym_style,
    ACTIONS(75), 1,
      anon_sym_RBRACE,
    STATE(10), 3,
      sym_elements_block,
      sym_style_block,
      aux_sym_component_block_repeat1,
  [181] = 1,
    ACTIONS(77), 5,
      ts_builtin_sym_end,
      sym_single_line_comment,
      anon_sym_tokens,
      anon_sym_component,
      anon_sym_story,
  [189] = 1,
    ACTIONS(69), 5,
      ts_builtin_sym_end,
      sym_single_line_comment,
      anon_sym_tokens,
      anon_sym_component,
      anon_sym_story,
  [197] = 1,
    ACTIONS(79), 5,
      ts_builtin_sym_end,
      sym_single_line_comment,
      anon_sym_tokens,
      anon_sym_component,
      anon_sym_story,
  [205] = 1,
    ACTIONS(81), 5,
      ts_builtin_sym_end,
      sym_single_line_comment,
      anon_sym_tokens,
      anon_sym_component,
      anon_sym_story,
  [213] = 1,
    ACTIONS(83), 5,
      ts_builtin_sym_end,
      sym_single_line_comment,
      anon_sym_tokens,
      anon_sym_component,
      anon_sym_story,
  [221] = 1,
    ACTIONS(37), 5,
      ts_builtin_sym_end,
      sym_single_line_comment,
      anon_sym_tokens,
      anon_sym_component,
      anon_sym_story,
  [229] = 2,
    ACTIONS(85), 1,
      sym__newlines,
    ACTIONS(87), 3,
      anon_sym_RBRACE,
      anon_sym_elements,
      anon_sym_style,
  [238] = 2,
    ACTIONS(89), 1,
      sym__newlines,
    ACTIONS(91), 3,
      anon_sym_RBRACE,
      anon_sym_elements,
      anon_sym_style,
  [247] = 4,
    ACTIONS(93), 1,
      sym_identifier,
    ACTIONS(96), 1,
      anon_sym_RBRACE,
    STATE(21), 1,
      aux_sym_tokens_block_repeat1,
    STATE(47), 1,
      sym_token_declaration,
  [260] = 4,
    ACTIONS(98), 1,
      sym_identifier,
    ACTIONS(101), 1,
      anon_sym_RBRACE,
    STATE(22), 1,
      aux_sym_style_block_repeat1,
    STATE(41), 1,
      sym_style_declaration,
  [273] = 3,
    ACTIONS(103), 1,
      anon_sym_RBRACE,
    ACTIONS(105), 1,
      anon_sym_frame,
    STATE(23), 2,
      sym_frame_block,
      aux_sym_story_block_repeat1,
  [284] = 3,
    ACTIONS(108), 1,
      anon_sym_RBRACE,
    ACTIONS(110), 1,
      anon_sym_frame,
    STATE(28), 2,
      sym_frame_block,
      aux_sym_story_block_repeat1,
  [295] = 4,
    ACTIONS(112), 1,
      sym_identifier,
    ACTIONS(114), 1,
      anon_sym_RBRACE,
    STATE(21), 1,
      aux_sym_tokens_block_repeat1,
    STATE(47), 1,
      sym_token_declaration,
  [308] = 4,
    ACTIONS(116), 1,
      sym_identifier,
    ACTIONS(118), 1,
      anon_sym_RBRACE,
    STATE(30), 1,
      aux_sym_style_block_repeat1,
    STATE(41), 1,
      sym_style_declaration,
  [321] = 2,
    ACTIONS(120), 1,
      sym__newlines,
    ACTIONS(122), 3,
      anon_sym_RBRACE,
      anon_sym_elements,
      anon_sym_style,
  [330] = 3,
    ACTIONS(110), 1,
      anon_sym_frame,
    ACTIONS(124), 1,
      anon_sym_RBRACE,
    STATE(23), 2,
      sym_frame_block,
      aux_sym_story_block_repeat1,
  [341] = 4,
    ACTIONS(112), 1,
      sym_identifier,
    ACTIONS(126), 1,
      anon_sym_RBRACE,
    STATE(25), 1,
      aux_sym_tokens_block_repeat1,
    STATE(47), 1,
      sym_token_declaration,
  [354] = 4,
    ACTIONS(116), 1,
      sym_identifier,
    ACTIONS(128), 1,
      anon_sym_RBRACE,
    STATE(22), 1,
      aux_sym_style_block_repeat1,
    STATE(41), 1,
      sym_style_declaration,
  [367] = 2,
    ACTIONS(130), 1,
      sym__newlines,
    ACTIONS(132), 3,
      anon_sym_RBRACE,
      anon_sym_elements,
      anon_sym_style,
  [376] = 3,
    ACTIONS(134), 1,
      sym_identifier,
    ACTIONS(136), 1,
      anon_sym_RBRACE,
    STATE(45), 1,
      aux_sym_elements_block_repeat1,
  [386] = 1,
    ACTIONS(138), 3,
      anon_sym_RBRACE,
      anon_sym_elements,
      anon_sym_style,
  [392] = 2,
    ACTIONS(142), 1,
      sym__newlines,
    ACTIONS(140), 2,
      sym_identifier,
      anon_sym_RBRACE,
  [400] = 2,
    ACTIONS(144), 1,
      sym__newlines,
    ACTIONS(146), 2,
      anon_sym_RBRACE,
      anon_sym_frame,
  [408] = 2,
    ACTIONS(150), 1,
      sym__newlines,
    ACTIONS(148), 2,
      sym_identifier,
      anon_sym_RBRACE,
  [416] = 1,
    ACTIONS(152), 3,
      anon_sym_RBRACE,
      anon_sym_elements,
      anon_sym_style,
  [422] = 2,
    ACTIONS(156), 1,
      sym__newlines,
    ACTIONS(154), 2,
      sym_identifier,
      anon_sym_RBRACE,
  [430] = 2,
    ACTIONS(160), 1,
      sym__newlines,
    ACTIONS(158), 2,
      sym_identifier,
      anon_sym_RBRACE,
  [438] = 1,
    ACTIONS(162), 3,
      anon_sym_RBRACE,
      anon_sym_elements,
      anon_sym_style,
  [444] = 2,
    ACTIONS(166), 1,
      sym__newlines,
    ACTIONS(164), 2,
      sym_identifier,
      anon_sym_RBRACE,
  [452] = 2,
    ACTIONS(170), 1,
      sym__newlines,
    ACTIONS(168), 2,
      sym_identifier,
      anon_sym_RBRACE,
  [460] = 2,
    ACTIONS(174), 1,
      sym__newlines,
    ACTIONS(172), 2,
      sym_identifier,
      anon_sym_RBRACE,
  [468] = 3,
    ACTIONS(176), 1,
      sym_identifier,
    ACTIONS(179), 1,
      anon_sym_RBRACE,
    STATE(44), 1,
      aux_sym_elements_block_repeat1,
  [478] = 3,
    ACTIONS(134), 1,
      sym_identifier,
    ACTIONS(181), 1,
      anon_sym_RBRACE,
    STATE(44), 1,
      aux_sym_elements_block_repeat1,
  [488] = 1,
    ACTIONS(183), 3,
      anon_sym_RBRACE,
      anon_sym_elements,
      anon_sym_style,
  [494] = 2,
    ACTIONS(187), 1,
      sym__newlines,
    ACTIONS(185), 2,
      sym_identifier,
      anon_sym_RBRACE,
  [502] = 1,
    ACTIONS(101), 2,
      sym_identifier,
      anon_sym_RBRACE,
  [507] = 1,
    ACTIONS(179), 2,
      sym_identifier,
      anon_sym_RBRACE,
  [512] = 1,
    ACTIONS(96), 2,
      sym_identifier,
      anon_sym_RBRACE,
  [517] = 1,
    ACTIONS(189), 2,
      anon_sym_RBRACE,
      anon_sym_frame,
  [522] = 1,
    ACTIONS(191), 1,
      sym_spaced_identifier,
  [526] = 1,
    ACTIONS(193), 1,
      anon_sym_COLON,
  [530] = 1,
    ACTIONS(195), 1,
      anon_sym_LBRACE,
  [534] = 1,
    ACTIONS(197), 1,
      sym_identifier,
  [538] = 1,
    ACTIONS(199), 1,
      anon_sym_LBRACE,
  [542] = 1,
    ACTIONS(201), 1,
      sym_identifier,
  [546] = 1,
    ACTIONS(203), 1,
      anon_sym_render,
  [550] = 1,
    ACTIONS(205), 1,
      ts_builtin_sym_end,
  [554] = 1,
    ACTIONS(207), 1,
      anon_sym_LBRACE,
  [558] = 1,
    ACTIONS(209), 1,
      anon_sym_COLON,
  [562] = 1,
    ACTIONS(211), 1,
      sym_spaced_identifier,
  [566] = 1,
    ACTIONS(213), 1,
      sym_identifier,
  [570] = 1,
    ACTIONS(215), 1,
      anon_sym_RBRACE,
  [574] = 1,
    ACTIONS(217), 1,
      anon_sym_LBRACE,
  [578] = 1,
    ACTIONS(219), 1,
      sym_identifier,
  [582] = 1,
    ACTIONS(221), 1,
      anon_sym_LBRACE,
  [586] = 1,
    ACTIONS(223), 1,
      anon_sym_LBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 20,
  [SMALL_STATE(4)] = 42,
  [SMALL_STATE(5)] = 64,
  [SMALL_STATE(6)] = 84,
  [SMALL_STATE(7)] = 97,
  [SMALL_STATE(8)] = 112,
  [SMALL_STATE(9)] = 125,
  [SMALL_STATE(10)] = 138,
  [SMALL_STATE(11)] = 153,
  [SMALL_STATE(12)] = 166,
  [SMALL_STATE(13)] = 181,
  [SMALL_STATE(14)] = 189,
  [SMALL_STATE(15)] = 197,
  [SMALL_STATE(16)] = 205,
  [SMALL_STATE(17)] = 213,
  [SMALL_STATE(18)] = 221,
  [SMALL_STATE(19)] = 229,
  [SMALL_STATE(20)] = 238,
  [SMALL_STATE(21)] = 247,
  [SMALL_STATE(22)] = 260,
  [SMALL_STATE(23)] = 273,
  [SMALL_STATE(24)] = 284,
  [SMALL_STATE(25)] = 295,
  [SMALL_STATE(26)] = 308,
  [SMALL_STATE(27)] = 321,
  [SMALL_STATE(28)] = 330,
  [SMALL_STATE(29)] = 341,
  [SMALL_STATE(30)] = 354,
  [SMALL_STATE(31)] = 367,
  [SMALL_STATE(32)] = 376,
  [SMALL_STATE(33)] = 386,
  [SMALL_STATE(34)] = 392,
  [SMALL_STATE(35)] = 400,
  [SMALL_STATE(36)] = 408,
  [SMALL_STATE(37)] = 416,
  [SMALL_STATE(38)] = 422,
  [SMALL_STATE(39)] = 430,
  [SMALL_STATE(40)] = 438,
  [SMALL_STATE(41)] = 444,
  [SMALL_STATE(42)] = 452,
  [SMALL_STATE(43)] = 460,
  [SMALL_STATE(44)] = 468,
  [SMALL_STATE(45)] = 478,
  [SMALL_STATE(46)] = 488,
  [SMALL_STATE(47)] = 494,
  [SMALL_STATE(48)] = 502,
  [SMALL_STATE(49)] = 507,
  [SMALL_STATE(50)] = 512,
  [SMALL_STATE(51)] = 517,
  [SMALL_STATE(52)] = 522,
  [SMALL_STATE(53)] = 526,
  [SMALL_STATE(54)] = 530,
  [SMALL_STATE(55)] = 534,
  [SMALL_STATE(56)] = 538,
  [SMALL_STATE(57)] = 542,
  [SMALL_STATE(58)] = 546,
  [SMALL_STATE(59)] = 550,
  [SMALL_STATE(60)] = 554,
  [SMALL_STATE(61)] = 558,
  [SMALL_STATE(62)] = 562,
  [SMALL_STATE(63)] = 566,
  [SMALL_STATE(64)] = 570,
  [SMALL_STATE(65)] = 574,
  [SMALL_STATE(66)] = 578,
  [SMALL_STATE(67)] = 582,
  [SMALL_STATE(68)] = 586,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(60),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(63),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(62),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tokens_block, 4),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tokens_block, 4),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_component_block_repeat1, 2),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_block_repeat1, 2), SHIFT_REPEAT(68),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_block_repeat1, 2), SHIFT_REPEAT(55),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_story_block, 4),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_story_block, 4),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tokens_block, 3),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tokens_block, 3),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_story_block, 5),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_story_block, 5),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_block, 5),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tokens_block, 5),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_story_block, 6),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_block, 4),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_style_block, 4),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_elements_block, 3),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tokens_block_repeat1, 2), SHIFT_REPEAT(61),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tokens_block_repeat1, 2),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_style_block_repeat1, 2), SHIFT_REPEAT(53),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_style_block_repeat1, 2),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_story_block_repeat1, 2),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_story_block_repeat1, 2), SHIFT_REPEAT(52),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_elements_block, 4),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_style_block, 5),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_block, 5),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_token_declaration, 3),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_token_declaration, 3),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_frame_block, 6),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword, 1),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword, 1),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_block, 6),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_style_declaration, 3),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_declaration, 3),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_elements_block, 5),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_style_block_repeat1, 1),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_token_reference, 2),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_token_reference, 2),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_elements_block_repeat1, 1),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [176] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_elements_block_repeat1, 2), SHIFT_REPEAT(43),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_elements_block_repeat1, 2),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_elements_block, 4),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tokens_block_repeat1, 1),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_frame_block, 7),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [205] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
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
