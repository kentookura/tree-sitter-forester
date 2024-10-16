#include "./trie.c"
#include "string.h"
#include "tree_sitter/alloc.h"
#include "tree_sitter/array.h"
#include "tree_sitter/parser.h"
#include <stdint.h>

typedef enum {
  IDENT_PATH_START,
  VERBATIM,
  HERALD_START,
  HERALD_STOP,
  CUSTOM_VERBATIM,
  LEGACY_VERBATIM,
  BUILTIN_START,
} TokenType;

typedef Array(int32_t) heraldArray;

typedef struct {
  uint8_t opening_brace_count;
  heraldArray *heralds;
} Scanner;

static void consume(TSLexer *lexer) { lexer->advance(lexer, false); }

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
  if (lexer->lookahead == '|' || lexer->lookahead == ' ' ||
      lexer->lookahead == '\r' || lexer->lookahead == '\n') {
    return false;
  } else {
    array_push(scanner->heralds, lexer->lookahead);
  }
  lexer->mark_end(lexer);

  while (lexer->lookahead != '|') {
    if (lexer->eof(lexer)) {
      return false;
    }

    consume(lexer);
    array_push(scanner->heralds, lexer->lookahead);
  }
  array_pop(scanner->heralds); // pop sep `|`
  lexer->result_symbol = HERALD_START;
  lexer->mark_end(lexer);
  return true;
}

static bool end_herald(Scanner *scanner, TSLexer *lexer) {
  lexer->mark_end(lexer);

  for (size_t offset = 0; offset < scanner->heralds->size; offset++) {
    if (lexer->eof(lexer)) {
      return false;
    }

    if (lexer->lookahead != *array_get(scanner->heralds, offset)) {
      return false;
    }
    consume(lexer);
  }

  array_clear(scanner->heralds);

  lexer->mark_end(lexer);
  lexer->result_symbol = HERALD_STOP;
  return true;
}

static bool scan_custom_verbatim(heraldArray *heralds, TSLexer *lexer,
                                 int result_symbol) {
  if (heralds->size == 0) {
    return false;
  }
  lexer->mark_end(lexer);

  size_t offset = 0;
  for (;;) {
    if (lexer->eof(lexer)) {
      return false;
    }
    if (offset == heralds->size) {
      lexer->result_symbol = result_symbol;
      return true;
    }
    if (offset == 0) {
      lexer->mark_end(lexer);
    }
    if (lexer->lookahead == *array_get(heralds, offset)) {
      offset++;
    } else {
      offset = 0;
    }
    consume(lexer);
  }
}

const char *BUILTINS[] = {
    "ref",         "title",  "taxon",      "date",       "meta", "author",
    "contributor", "parent", "number",     "tag",        "p",    "em",
    "strong",      "li",     "ol",         "ul",         "code", "blockquote",
    "pre",         "figure", "figcaption", "transclude", "tex",  "query",
    "import",      "export", "open",       "def",        "let",  "fun",
    "subtree",     "scope",  "put",        "get",        "put?", "alloc",
    "object",      "patch",
};

static bool start_builtin(TSLexer *lexer) {
  int ret = 0;
  Trie *root = NULL;

  // Create a root trie
  ret = trie_new(&root);
  if (-1 == ret) {
    return false;
  }

  // insert all the words from the dictionary
  for (size_t i = 0; i < sizeof(BUILTINS) / sizeof(BUILTINS[0]); i++) {
    const char *builtin = BUILTINS[i];
    ret = trie_insert(root, (char *)builtin, strlen(builtin));
    if (-1 == ret) {
      return false;
    }
  }

  lexer->mark_end(lexer);

  Trie *trie = root;
  while (!lexer->eof(lexer)) {
    ret = trie_poll(trie, lexer->lookahead, &trie);
    if (-1 == ret) {
      return false;
    } else if (1 == ret) {
      consume(lexer);
      continue;
    }

    consume(lexer);
    if (lexer->lookahead == '/') {
      return false;
    }

    if ('a' <= lexer->lookahead && lexer->lookahead <= 'z' ||
        'A' <= lexer->lookahead && lexer->lookahead <= 'Z') {
      if (NULL == trie->children[lexer->lookahead]) {
        return false;
      }
      continue;
    } else {
      lexer->result_symbol = BUILTIN_START;
      return true;
    }
  }

  return false;
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
    return scan_custom_verbatim(scanner->heralds, lexer, CUSTOM_VERBATIM);
  } else if (valid_symbols[LEGACY_VERBATIM]) {
    heraldArray heralds = array_new();
    char s[9] = "\\stopverb";
    for (size_t i = 0; i < 9; i++) {
      array_push(&heralds, s[i]);
    }
    return scan_custom_verbatim(&heralds, lexer, LEGACY_VERBATIM);
  } else if (valid_symbols[BUILTIN_START]) {
    // dirty
    return start_builtin(lexer);
  }

  return false;
}

void *tree_sitter_forester_external_scanner_create() {
  Scanner *scanner = (Scanner *)ts_malloc(sizeof(Scanner));
  scanner->heralds = ts_malloc(sizeof(Array(int32_t)));
  array_init(scanner->heralds);
  return scanner;
}

void tree_sitter_forester_external_scanner_destroy(void *payload) {
  Scanner *scanner = (Scanner *)payload;
  array_delete(scanner->heralds);
  ts_free(scanner);
}

unsigned tree_sitter_forester_external_scanner_serialize(void *payload,
                                                         char *buffer) {
  Scanner *scanner = (Scanner *)payload;
  int offset = 0;

  buffer[offset++] = (char)scanner->opening_brace_count;

  for (size_t i = 0; i < scanner->heralds->size; i++) {
    int32_t herald = *array_get(scanner->heralds, i);
    memcpy(&buffer[offset], &herald, sizeof(int32_t));
    offset += sizeof(int32_t);
  }

  return offset;
}

void tree_sitter_forester_external_scanner_deserialize(void *payload,
                                                       const char *buffer,
                                                       unsigned length) {
  Scanner *scanner = (Scanner *)payload;
  scanner->opening_brace_count = 0;
  array_init(scanner->heralds);

  int offset = 0;
  if (length > offset) {
    scanner->opening_brace_count = buffer[offset++];
    while (length > offset) {
      int32_t herald;
      memcpy(&herald, &buffer[offset], sizeof(int32_t));
      offset += sizeof(int32_t);

      array_push(scanner->heralds, herald);
    }
  }
}
