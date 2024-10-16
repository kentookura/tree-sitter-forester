#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ALPHABET_SIZE 128

/*--Node in the Trie--*/
typedef struct Trie {
  struct Trie *children[ALPHABET_SIZE];
  bool end_of_word;
} Trie;

static int trie_new(Trie **trie) {
  *trie = calloc(1, sizeof(Trie));
  if (NULL == *trie) {
    // memory allocation failed
    return -1;
  }
  return 0;
}

static int trie_insert(Trie *trie, char *word, unsigned word_len) {
  int ret = 0;

  if (0 == word_len) {
    trie->end_of_word = true;
    return 0;
  }

  // mapping
  const int32_t index = word[0];
  if (ALPHABET_SIZE <= index) {
    return -1;
  }

  // The index does not exist yet, allocate it.
  if (NULL == trie->children[index]) {
    ret = trie_new(&trie->children[index]);
    if (-1 == ret) {
      // creating new trie node failed
      return -1;
    }
  }

  return trie_insert(trie->children[index], word + 1, word_len - 1);
}

static int trie_poll(Trie *trie, int32_t word, Trie **result) {
  // mapping
  const int32_t index = word;
  if (ALPHABET_SIZE <= index) {
    return -1;
  }

  // no match
  if (NULL == trie->children[index]) {
    return -1;
  }

  *result = trie->children[index];

  // matched a word
  if ((*result)->end_of_word) {
    return 0;
  }

  return 1;
}
