#include "tree_sitter/alloc.h"
#include "tree_sitter/parser.h"
#include <stdint.h>

typedef enum { IDENT_PATH_START, VERBATIM } TokenType;

typedef struct {
  uint8_t opening_brace_count;
} Scanner;

static void advance(TSLexer *lexer) { lexer->advance(lexer, false); }
static void skip(TSLexer *lexer) { lexer->advance(lexer, true); }

static bool start_ident_path(TSLexer *lexer) {
  lexer->mark_end(lexer);

  int32_t next = lexer->lookahead;
  if (next == '/') {
    lexer->result_symbol = IDENT_PATH_START;
    return true;
  }

  return false;
}

static bool scan_verbatim(Scanner *scanner, TSLexer *lexer) {
  scanner->opening_brace_count = 1;
  for (;;) {
    if (lexer->eof(lexer)) {
      return false;
    }
    if (scanner->opening_brace_count == 0) {
      lexer->mark_end(lexer);
      lexer->result_symbol = VERBATIM;
      return true;
    }

    int32_t next = lexer->lookahead;
    if (next == '{') {
      scanner->opening_brace_count++;
    }
    if (next == '}') {
      scanner->opening_brace_count--;
      if (scanner->opening_brace_count == 0) {
        continue;
      }
    }
    advance(lexer);
  }
}

bool tree_sitter_forester_external_scanner_scan(void *payload, TSLexer *lexer,
                                                const bool *valid_symbols) {

  Scanner *scanner = (Scanner *)payload;

  if (valid_symbols[IDENT_PATH_START] && start_ident_path(lexer)) {
    return true;
  } else if (valid_symbols[VERBATIM]) {
    return scan_verbatim(scanner, lexer);
  }

  return false;
}

void *tree_sitter_forester_external_scanner_create() {
  return ts_calloc(1, sizeof(Scanner));
}

void tree_sitter_forester_external_scanner_destroy(void *payload) {
  ts_free((Scanner *)payload);
}

unsigned tree_sitter_forester_external_scanner_serialize(void *payload,
                                                         char *buffer) {
  Scanner *scanner = (Scanner *)payload;
  buffer[0] = (char)scanner->opening_brace_count;
  return 1;
}

void tree_sitter_forester_external_scanner_deserialize(void *payload,
                                                       const char *buffer,
                                                       unsigned length) {
  Scanner *scanner = (Scanner *)payload;
  scanner->opening_brace_count = 0;
  if (length == 1) {
    Scanner *scanner = (Scanner *)payload;
    scanner->opening_brace_count = buffer[0];
  }
}
