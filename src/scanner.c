#include "tree_sitter/parser.h"

typedef enum { IDENT_PATH_START } TokenType;

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

bool tree_sitter_forester_external_scanner_scan(void *payload, TSLexer *lexer,
                                                const bool *valid_symbols) {
  if (valid_symbols[IDENT_PATH_START] && start_ident_path(lexer)) {
    return true;
  }

  return false;
}

void *tree_sitter_forester_external_scanner_create() { return NULL; }

void tree_sitter_forester_external_scanner_destroy(void *payload) {}

unsigned tree_sitter_forester_external_scanner_serialize(void *payload,
                                                         char *buffer) {
  return 0;
}

void tree_sitter_forester_external_scanner_deserialize(void *payload,
                                                       const char *buffer,
                                                       unsigned length) {}
