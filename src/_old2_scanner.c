#include <tree_sitter/parser.h>

enum TokenType {
  INDENT,
  DEDENT
};

typedef struct {
  int indent_length;
} Scanner;

void *tree_sitter_matry_external_scanner_create() {
  Scanner *scanner = malloc(sizeof(Scanner));
  scanner->indent_length = 0;

  return scanner;
}

void tree_sitter_matry_external_scanner_destroy(void *payload) {
  Scanner *scanner = payload;
  free(scanner);
}

unsigned tree_sitter_matry_external_scanner_serialize(
  void *payload,
  char *buffer
) {
  Scanner *scanner = payload;

  return sizeof(Scanner);
}

void tree_sitter_matry_external_scanner_deserialize(
  void *payload,
  const char *buffer,
  unsigned length
) {
  Scanner *scanner = payload;
}

bool tree_sitter_matry_external_scanner_scan(
  void *payload,
  TSLexer *lexer,
  const bool *valid_symbols
) {
  Scanner *scanner = payload;

  while (lexer->lookahead == ' ' || lexer->lookahead == '\t') {
    lexer->advance(lexer, true);
  }

  if (lexer->lookahead == '\n') {
    int current_indent = 0;
    lexer->advance(lexer, true);

    while (lexer->lookahead == ' ' || lexer->lookahead == '\t') {
      current_indent++;
      lexer->advance(lexer, true);
    }

    if (current_indent > scanner->indent_length && valid_symbols[INDENT]) {
      scanner->indent_length = current_indent;
      lexer->result_symbol = INDENT;
      return true;
    } else if (current_indent < scanner->indent_length && valid_symbols[DEDENT]) {
      scanner->indent_length = current_indent;
      lexer->result_symbol = DEDENT;
      return true;
    }
  }

  return false;
}
