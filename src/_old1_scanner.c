#include <tree_sitter/parser.h>
#include <string.h>

enum TokenType {
  INDENT,
  DEDENT,
  NEWLINE
};

typedef struct {
  int current_indent_level;
  int previous_indent_level;
} IndentationState;

void *tree_sitter_matry_external_scanner_create() {
  IndentationState *state = malloc(sizeof(IndentationState));
  if (state) {
    state->current_indent_level = 0;
    state->previous_indent_level = 0;
  }
  return state;
}

void tree_sitter_matry_external_scanner_destroy(void *payload) {
  if (payload != NULL) {
    // Cast the void pointer back to IndentationState pointer
    IndentationState *state = (IndentationState *)payload;
    // Free the allocated memory
    free(state);
  }
}

unsigned tree_sitter_matry_external_scanner_serialize(
    void *payload,
    char *buffer
) {
  IndentationState *state = (IndentationState *)payload;
  if (state == NULL) {
    return 0; // No state to serialize
  }

  // Check if buffer is large enough
  unsigned state_size = sizeof(IndentationState);
  if (state_size > TREE_SITTER_SERIALIZATION_BUFFER_SIZE) {
    return 0; // Buffer not big enough
  }

  // Serialize state into buffer
  memcpy(buffer, state, state_size);
  return state_size; // Return the size of the serialized data
}

void tree_sitter_matry_external_scanner_deserialize(
    void *payload,
    const char *buffer,
    unsigned length
) {
  IndentationState *state = (IndentationState *)payload;
  if (state == NULL || buffer == NULL) {
    return; // Can't deserialize without valid state and buffer
  }

  // Check if the length is correct
  unsigned state_size = sizeof(IndentationState);
  if (length < state_size) {
    return; // Not enough data to deserialize
  }

  // Deserialize state from buffer
  memcpy(state, buffer, state_size);
}

bool tree_sitter_matry_external_scanner_scan(
    void *payload,
    TSLexer *lexer,
    const bool *valid_symbols
) {
  IndentationState *state = (IndentationState *)payload;
  int whitespace_count = 0;
  bool at_start_of_line = true;

  while (lexer->lookahead != 0) {
    if (at_start_of_line && (lexer->lookahead == ' ' || lexer->lookahead == '\t')) {
      // Counting whitespace at the start of a line
      whitespace_count++;
      lexer->advance(lexer, true);
    } else if (lexer->lookahead == '\n') {
      // Newline character
      lexer->advance(lexer, true);
      at_start_of_line = true;
      whitespace_count = 0;
    } else {
      // First non-whitespace character
      at_start_of_line = false;

      if (whitespace_count > state->current_indent_level) {
        // Emit INDENT token
        lexer->result_symbol = INDENT;
        state->previous_indent_level = state->current_indent_level;
        state->current_indent_level = whitespace_count;
        return true;
      } else if (whitespace_count < state->current_indent_level) {
        // Emit DEDENT token
        lexer->result_symbol = DEDENT;
        state->previous_indent_level = state->current_indent_level;
        state->current_indent_level = whitespace_count;
        return true;
      }

      // Continue scanning the rest of the line normally
      lexer->advance(lexer, false);
    }
  }

  return false;
}
