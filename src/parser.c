#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 21
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 17
#define ALIAS_COUNT 0
#define TOKEN_COUNT 8
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
  sym_comment = 7,
  sym_source_file = 8,
  sym_command = 9,
  sym_content = 10,
  sym_text = 11,
  sym_ident = 12,
  sym_inline_math = 13,
  sym_display_math = 14,
  aux_sym_source_file_repeat1 = 15,
  aux_sym_content_repeat1 = 16,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_command_token1] = "command_token1",
  [aux_sym_command_token2] = "command_token2",
  [aux_sym_command_token3] = "command_token3",
  [aux_sym_text_token1] = "text_token1",
  [aux_sym_inline_math_token1] = "inline_math_token1",
  [aux_sym_display_math_token1] = "display_math_token1",
  [sym_comment] = "comment",
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
  [sym_comment] = sym_comment,
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
  [sym_comment] = {
    .visible = true,
    .named = true,
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
      if (lookahead == '%') ADVANCE(12);
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
    case 12:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(12);
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
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
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
    [sym_comment] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(18),
    [sym_command] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_command_token1] = ACTIONS(5),
    [sym_comment] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(9), 1,
      aux_sym_command_token3,
    ACTIONS(11), 1,
      aux_sym_text_token1,
    ACTIONS(14), 1,
      aux_sym_inline_math_token1,
    ACTIONS(17), 1,
      aux_sym_display_math_token1,
    STATE(2), 4,
      sym_text,
      sym_inline_math,
      sym_display_math,
      aux_sym_content_repeat1,
  [19] = 5,
    ACTIONS(20), 1,
      aux_sym_text_token1,
    ACTIONS(22), 1,
      aux_sym_inline_math_token1,
    ACTIONS(24), 1,
      aux_sym_display_math_token1,
    STATE(16), 1,
      sym_content,
    STATE(4), 4,
      sym_text,
      sym_inline_math,
      sym_display_math,
      aux_sym_content_repeat1,
  [38] = 5,
    ACTIONS(20), 1,
      aux_sym_text_token1,
    ACTIONS(22), 1,
      aux_sym_inline_math_token1,
    ACTIONS(24), 1,
      aux_sym_display_math_token1,
    ACTIONS(26), 1,
      aux_sym_command_token3,
    STATE(2), 4,
      sym_text,
      sym_inline_math,
      sym_display_math,
      aux_sym_content_repeat1,
  [57] = 4,
    ACTIONS(5), 1,
      aux_sym_command_token1,
    ACTIONS(28), 1,
      ts_builtin_sym_end,
    ACTIONS(30), 1,
      sym_comment,
    STATE(6), 2,
      sym_command,
      aux_sym_source_file_repeat1,
  [71] = 4,
    ACTIONS(32), 1,
      ts_builtin_sym_end,
    ACTIONS(34), 1,
      aux_sym_command_token1,
    ACTIONS(37), 1,
      sym_comment,
    STATE(6), 2,
      sym_command,
      aux_sym_source_file_repeat1,
  [85] = 2,
    ACTIONS(42), 1,
      aux_sym_text_token1,
    ACTIONS(40), 3,
      aux_sym_command_token3,
      aux_sym_inline_math_token1,
      aux_sym_display_math_token1,
  [94] = 2,
    ACTIONS(46), 1,
      aux_sym_text_token1,
    ACTIONS(44), 3,
      aux_sym_command_token3,
      aux_sym_inline_math_token1,
      aux_sym_display_math_token1,
  [103] = 2,
    ACTIONS(50), 1,
      aux_sym_text_token1,
    ACTIONS(48), 3,
      aux_sym_command_token3,
      aux_sym_inline_math_token1,
      aux_sym_display_math_token1,
  [112] = 1,
    ACTIONS(52), 3,
      ts_builtin_sym_end,
      aux_sym_command_token1,
      sym_comment,
  [118] = 2,
    ACTIONS(54), 1,
      aux_sym_text_token1,
    STATE(19), 1,
      sym_ident,
  [125] = 2,
    ACTIONS(56), 1,
      aux_sym_text_token1,
    STATE(17), 1,
      sym_text,
  [132] = 2,
    ACTIONS(56), 1,
      aux_sym_text_token1,
    STATE(15), 1,
      sym_text,
  [139] = 1,
    ACTIONS(58), 1,
      aux_sym_command_token2,
  [143] = 1,
    ACTIONS(60), 1,
      aux_sym_command_token3,
  [147] = 1,
    ACTIONS(62), 1,
      aux_sym_command_token3,
  [151] = 1,
    ACTIONS(64), 1,
      aux_sym_command_token3,
  [155] = 1,
    ACTIONS(66), 1,
      ts_builtin_sym_end,
  [159] = 1,
    ACTIONS(68), 1,
      aux_sym_command_token2,
  [163] = 1,
    ACTIONS(50), 1,
      aux_sym_command_token3,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 19,
  [SMALL_STATE(4)] = 38,
  [SMALL_STATE(5)] = 57,
  [SMALL_STATE(6)] = 71,
  [SMALL_STATE(7)] = 85,
  [SMALL_STATE(8)] = 94,
  [SMALL_STATE(9)] = 103,
  [SMALL_STATE(10)] = 112,
  [SMALL_STATE(11)] = 118,
  [SMALL_STATE(12)] = 125,
  [SMALL_STATE(13)] = 132,
  [SMALL_STATE(14)] = 139,
  [SMALL_STATE(15)] = 143,
  [SMALL_STATE(16)] = 147,
  [SMALL_STATE(17)] = 151,
  [SMALL_STATE(18)] = 155,
  [SMALL_STATE(19)] = 159,
  [SMALL_STATE(20)] = 163,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [9] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 2),
  [11] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(9),
  [14] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(12),
  [17] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(13),
  [20] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [22] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [24] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [26] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_content, 1),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(11),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [40] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_display_math, 3),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_display_math, 3),
  [44] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_math, 3),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_math, 3),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text, 1),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 1),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 5, .production_id = 1),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ident, 1),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [66] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
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
