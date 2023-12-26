#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 21
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 16
#define ALIAS_COUNT 0
#define TOKEN_COUNT 7
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 2

enum {
  aux_sym_command_token1 = 1,
  aux_sym_command_token2 = 2,
  aux_sym_command_token3 = 3,
  aux_sym_text_token1 = 4,
  aux_sym_inline_math_token1 = 5,
  aux_sym_display_math_token1 = 6,
  sym_source_file = 7,
  sym_command = 8,
  sym_content = 9,
  sym_text = 10,
  sym_ident = 11,
  sym_inline_math = 12,
  sym_display_math = 13,
  aux_sym_source_file_repeat1 = 14,
  aux_sym_content_repeat1 = 15,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_command_token1] = "command_token1",
  [aux_sym_command_token2] = "command_token2",
  [aux_sym_command_token3] = "command_token3",
  [aux_sym_text_token1] = "text_token1",
  [aux_sym_inline_math_token1] = "inline_math_token1",
  [aux_sym_display_math_token1] = "display_math_token1",
  [sym_source_file] = "source_file",
  [sym_command] = "command",
  [sym_content] = "content",
  [sym_text] = "text",
  [sym_ident] = "ident",
  [sym_inline_math] = "inline_math",
  [sym_display_math] = "display_math",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_content_repeat1] = "content_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_command_token1] = aux_sym_command_token1,
  [aux_sym_command_token2] = aux_sym_command_token2,
  [aux_sym_command_token3] = aux_sym_command_token3,
  [aux_sym_text_token1] = aux_sym_text_token1,
  [aux_sym_inline_math_token1] = aux_sym_inline_math_token1,
  [aux_sym_display_math_token1] = aux_sym_display_math_token1,
  [sym_source_file] = sym_source_file,
  [sym_command] = sym_command,
  [sym_content] = sym_content,
  [sym_text] = sym_text,
  [sym_ident] = sym_ident,
  [sym_inline_math] = sym_inline_math,
  [sym_display_math] = sym_display_math,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_content_repeat1] = aux_sym_content_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_command_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_command_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_command_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_text_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_inline_math_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_display_math_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_command] = {
    .visible = true,
    .named = true,
  },
  [sym_content] = {
    .visible = true,
    .named = true,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [sym_ident] = {
    .visible = true,
    .named = true,
  },
  [sym_inline_math] = {
    .visible = true,
    .named = true,
  },
  [sym_display_math] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_content_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_ident = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_ident] = "ident",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_ident, 1},
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
  [20] = 9,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(4);
      if (lookahead == '#') ADVANCE(2);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead == '{') ADVANCE(6);
      if (lookahead == '}') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(8);
      if (lookahead == '#') ADVANCE(2);
      if (lookahead == '}') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(1)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(9);
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(3);
      if (lookahead == '{') ADVANCE(10);
      END_STATE();
    case 3:
      if (lookahead == '{') ADVANCE(11);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(aux_sym_command_token1);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(aux_sym_command_token2);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(aux_sym_command_token3);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == ' ') ADVANCE(8);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(9);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(9);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(aux_sym_inline_math_token1);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(aux_sym_display_math_token1);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_command_token1] = ACTIONS(1),
    [aux_sym_command_token2] = ACTIONS(1),
    [aux_sym_command_token3] = ACTIONS(1),
    [aux_sym_inline_math_token1] = ACTIONS(1),
    [aux_sym_display_math_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(18),
    [sym_command] = STATE(6),
    [aux_sym_source_file_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_command_token1] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(7), 1,
      aux_sym_command_token3,
    ACTIONS(9), 1,
      aux_sym_text_token1,
    ACTIONS(12), 1,
      aux_sym_inline_math_token1,
    ACTIONS(15), 1,
      aux_sym_display_math_token1,
    STATE(2), 4,
      sym_text,
      sym_inline_math,
      sym_display_math,
      aux_sym_content_repeat1,
  [19] = 5,
    ACTIONS(18), 1,
      aux_sym_text_token1,
    ACTIONS(20), 1,
      aux_sym_inline_math_token1,
    ACTIONS(22), 1,
      aux_sym_display_math_token1,
    STATE(16), 1,
      sym_content,
    STATE(4), 4,
      sym_text,
      sym_inline_math,
      sym_display_math,
      aux_sym_content_repeat1,
  [38] = 5,
    ACTIONS(18), 1,
      aux_sym_text_token1,
    ACTIONS(20), 1,
      aux_sym_inline_math_token1,
    ACTIONS(22), 1,
      aux_sym_display_math_token1,
    ACTIONS(24), 1,
      aux_sym_command_token3,
    STATE(2), 4,
      sym_text,
      sym_inline_math,
      sym_display_math,
      aux_sym_content_repeat1,
  [57] = 2,
    ACTIONS(28), 1,
      aux_sym_text_token1,
    ACTIONS(26), 3,
      aux_sym_command_token3,
      aux_sym_inline_math_token1,
      aux_sym_display_math_token1,
  [66] = 3,
    ACTIONS(5), 1,
      aux_sym_command_token1,
    ACTIONS(30), 1,
      ts_builtin_sym_end,
    STATE(8), 2,
      sym_command,
      aux_sym_source_file_repeat1,
  [77] = 2,
    ACTIONS(34), 1,
      aux_sym_text_token1,
    ACTIONS(32), 3,
      aux_sym_command_token3,
      aux_sym_inline_math_token1,
      aux_sym_display_math_token1,
  [86] = 3,
    ACTIONS(36), 1,
      ts_builtin_sym_end,
    ACTIONS(38), 1,
      aux_sym_command_token1,
    STATE(8), 2,
      sym_command,
      aux_sym_source_file_repeat1,
  [97] = 2,
    ACTIONS(43), 1,
      aux_sym_text_token1,
    ACTIONS(41), 3,
      aux_sym_command_token3,
      aux_sym_inline_math_token1,
      aux_sym_display_math_token1,
  [106] = 2,
    ACTIONS(45), 1,
      aux_sym_text_token1,
    STATE(19), 1,
      sym_ident,
  [113] = 2,
    ACTIONS(47), 1,
      aux_sym_text_token1,
    STATE(17), 1,
      sym_text,
  [120] = 2,
    ACTIONS(47), 1,
      aux_sym_text_token1,
    STATE(15), 1,
      sym_text,
  [127] = 1,
    ACTIONS(49), 2,
      ts_builtin_sym_end,
      aux_sym_command_token1,
  [132] = 1,
    ACTIONS(51), 1,
      aux_sym_command_token2,
  [136] = 1,
    ACTIONS(53), 1,
      aux_sym_command_token3,
  [140] = 1,
    ACTIONS(55), 1,
      aux_sym_command_token3,
  [144] = 1,
    ACTIONS(57), 1,
      aux_sym_command_token3,
  [148] = 1,
    ACTIONS(59), 1,
      ts_builtin_sym_end,
  [152] = 1,
    ACTIONS(61), 1,
      aux_sym_command_token2,
  [156] = 1,
    ACTIONS(43), 1,
      aux_sym_command_token3,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 19,
  [SMALL_STATE(4)] = 38,
  [SMALL_STATE(5)] = 57,
  [SMALL_STATE(6)] = 66,
  [SMALL_STATE(7)] = 77,
  [SMALL_STATE(8)] = 86,
  [SMALL_STATE(9)] = 97,
  [SMALL_STATE(10)] = 106,
  [SMALL_STATE(11)] = 113,
  [SMALL_STATE(12)] = 120,
  [SMALL_STATE(13)] = 127,
  [SMALL_STATE(14)] = 132,
  [SMALL_STATE(15)] = 136,
  [SMALL_STATE(16)] = 140,
  [SMALL_STATE(17)] = 144,
  [SMALL_STATE(18)] = 148,
  [SMALL_STATE(19)] = 152,
  [SMALL_STATE(20)] = 156,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [7] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 2),
  [9] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(9),
  [12] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(11),
  [15] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(12),
  [18] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [20] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [22] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [24] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_content, 1),
  [26] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_display_math, 3),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_display_math, 3),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [32] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_math, 3),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_math, 3),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text, 1),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 1),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 5, .production_id = 1),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ident, 1),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [59] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_forester(void) {
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
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
