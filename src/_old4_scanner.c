#include <tree_sitter/parser.h>
#include <string.h>
#include "stack.h"

enum TokenType {
  INDENT,
  DEDENT
  // NEWLINE
};

void * tree_sitter_matry_external_scanner_create() {
  Stack* stackPtr = (Stack *)malloc(sizeof(Stack));

  if (stackPtr != NULL) {
    initStack(stackPtr);
  }

  return stackPtr;
}

void tree_sitter_matry_external_scanner_destroy(void *payload) {
  if (payload != NULL) {
    Stack *stack = (Stack *)payload;
    free(stack);
  }
}

unsigned tree_sitter_matry_external_scanner_serialize(
    void *payload,
    char *buffer
) {
  Stack *stack = (Stack *)payload;
  if (stack == NULL) {
    return 0; // No state to serialize
  }

  // Check if buffer is large enough
  unsigned stack_size = sizeof(Stack);
  if (stack_size > TREE_SITTER_SERIALIZATION_BUFFER_SIZE) {
    return 0; // Buffer not big enough
  }

  // Serialize state into buffer
  memcpy(buffer, stack, stack_size);
  return stack_size; // Return the size of the serialized data
}

void tree_sitter_matry_external_scanner_deserialize(
  void *payload,
  const char *buffer,
  unsigned length
) {
  Stack *stack = (Stack *)payload;
  if (stack == NULL || buffer == NULL) {
    return; // Can't deserialize without valid state and buffer
  }

  // Check if the length is correct
  unsigned stack_size = sizeof(Stack);
  if (length < stack_size) {
    return; // Not enough data to deserialize
  }

  // Deserialize state from buffer
  memcpy(stack, buffer, stack_size);
}

bool tree_sitter_matry_external_scanner_scan(
  void *payload,
  TSLexer *lexer,
  const bool *valid_symbols
) {
  Stack *stack = (Stack *)payload;
  bool at_start_of_line = true;

  while (lexer->lookahead != 0) {
    if (lexer->lookahead == 'i') {
      lexer->result_symbol = INDENT;
    } else if (lexer->lookahead == 'd') {
      lexer->result_symbol = DEDENT;
    }

    lexer->advance(lexer, false);
  }

  return false;
}
