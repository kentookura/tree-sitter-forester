#include "string.h"
#include "tree_sitter/alloc.h"
#include "tree_sitter/parser.h"
#include <ctype.h>
#include <stdint.h>

typedef enum {
  IDENT_PATH_START,
  VERBATIM,
  HERALD_START,
  HERALD_STOP,
  CUSTOM_VERBATIM,
} TokenType;

typedef struct {
  uint8_t opening_brace_count;
  uint8_t herald_count;
  int32_t herald;
} Scanner;

static void consume(TSLexer *lexer) { lexer->advance(lexer, false); }
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
    consume(lexer);
  }
}

static bool start_herald(Scanner *scanner, TSLexer *lexer) {
  if (lexer->lookahead == '|' || isspace(lexer->lookahead)) {
    return false;
  } else {
    scanner->herald = lexer->lookahead;
    scanner->herald_count = 1;
  }
  lexer->mark_end(lexer);

  while (lexer->lookahead != '|') {
    if (lexer->eof(lexer)) {
      return false;
    }

    consume(lexer);
    if (lexer->lookahead == scanner->herald) {
      scanner->herald_count += 1;
    } else {
      break;
    }
  }
  lexer->result_symbol = HERALD_START;
  lexer->mark_end(lexer);
  return true;
}

static bool end_herald(Scanner *scanner, TSLexer *lexer) {
  uint8_t local_herald_count = 0;
  lexer->mark_end(lexer);

  if (scanner->herald != lexer->lookahead) {
    return false;
  }

  for (uint8_t i = 1; i <= scanner->herald_count; i++) {
    if (lexer->lookahead != scanner->herald) {
      return false;
    }
    consume(lexer);
  }

  lexer->mark_end(lexer);
  lexer->result_symbol = HERALD_STOP;
  return true;
}

static bool scan_custom_verbatim(int32_t herald, TSLexer *lexer) {
  if (herald == 0) {
    return false;
  }

  for (;;) {
    if (lexer->eof(lexer)) {
      return false;
    }
    if (lexer->lookahead == herald) {
      lexer->mark_end(lexer);
      lexer->result_symbol = CUSTOM_VERBATIM;
      return true;
    }
    consume(lexer);
  }
}

bool tree_sitter_forester_external_scanner_scan(void *payload, TSLexer *lexer,
                                                const bool *valid_symbols) {

  Scanner *scanner = (Scanner *)payload;

  if (valid_symbols[IDENT_PATH_START]) {
    return start_ident_path(lexer);
  } else if (valid_symbols[VERBATIM]) {
    return scan_verbatim(scanner, lexer);
  } else if (valid_symbols[HERALD_START]) {
    return start_herald(scanner, lexer);
  } else if (valid_symbols[HERALD_STOP]) {
    return end_herald(scanner, lexer);
  } else if (valid_symbols[CUSTOM_VERBATIM]) {
    return scan_custom_verbatim(scanner->herald, lexer);
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
  buffer[1] = (char)scanner->herald_count;
  memcpy(&buffer[2], &scanner->herald, 4);
  return 6;
}

void tree_sitter_forester_external_scanner_deserialize(void *payload,
                                                       const char *buffer,
                                                       unsigned length) {
  Scanner *scanner = (Scanner *)payload;
  scanner->opening_brace_count = 0;
  scanner->herald_count = 0;
  scanner->herald = 0;
  if (length == 6) {
    Scanner *scanner = (Scanner *)payload;
    scanner->opening_brace_count = buffer[0];
    scanner->herald_count = buffer[1];
    memcpy(&scanner->herald, &buffer[2], 4);
  }
}
