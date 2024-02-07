#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 203
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 143
#define ALIAS_COUNT 1
#define TOKEN_COUNT 65
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 18
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 17

enum ts_symbol_identifiers {
  anon_sym_LBRACE = 1,
  anon_sym_RBRACE = 2,
  anon_sym_LBRACK = 3,
  anon_sym_RBRACK = 4,
  anon_sym_LPAREN = 5,
  anon_sym_RPAREN = 6,
  anon_sym_BSLASH = 7,
  anon_sym_title = 8,
  anon_sym_author = 9,
  anon_sym_contributor = 10,
  anon_sym_date = 11,
  anon_sym_DASH = 12,
  anon_sym_tag = 13,
  anon_sym_ref = 14,
  sym_year = 15,
  sym_month = 16,
  aux_sym_day_token1 = 17,
  aux_sym_day_token2 = 18,
  anon_sym_def = 19,
  anon_sym_alloc = 20,
  anon_sym_taxon = 21,
  anon_sym_meta = 22,
  anon_sym_import = 23,
  anon_sym_export = 24,
  anon_sym_namespace = 25,
  anon_sym_transclude = 26,
  anon_sym_let = 27,
  anon_sym_tex = 28,
  anon_sym_iftex = 29,
  anon_sym_block = 30,
  anon_sym_scope = 31,
  anon_sym_subtree = 32,
  anon_sym_put = 33,
  anon_sym_get = 34,
  anon_sym_open = 35,
  anon_sym_query = 36,
  anon_sym_object = 37,
  anon_sym_patch = 38,
  anon_sym_call = 39,
  sym_comment = 40,
  anon_sym_POUND = 41,
  anon_sym_POUND_POUND = 42,
  anon_sym_p = 43,
  anon_sym_em = 44,
  anon_sym_strong = 45,
  anon_sym_li = 46,
  anon_sym_ul = 47,
  anon_sym_ol = 48,
  anon_sym_code = 49,
  anon_sym_blockquote = 50,
  anon_sym_pre = 51,
  anon_sym_BSLASHquery_SLASHauthor = 52,
  anon_sym_BSLASHquery_SLASHtag = 53,
  anon_sym_BSLASHquery_SLASHtaxon = 54,
  anon_sym_BSLASHquery_SLASHand = 55,
  anon_sym_BSLASHquery_SLASHor = 56,
  anon_sym_LBRACE_RBRACE = 57,
  anon_sym__ = 58,
  anon_sym_LBRACK_LBRACK = 59,
  anon_sym_RBRACK_RBRACK = 60,
  aux_sym__whitespace_token1 = 61,
  sym__alpha = 62,
  sym__digit = 63,
  sym_text = 64,
  sym_source_file = 65,
  sym__node = 66,
  sym_squares = 67,
  sym_parens = 68,
  sym_title = 69,
  sym_author = 70,
  sym_contributor = 71,
  sym_date = 72,
  sym_tag = 73,
  sym_day = 74,
  sym_def = 75,
  sym_alloc = 76,
  sym_taxon = 77,
  sym_meta = 78,
  sym_import = 79,
  sym_export = 80,
  sym_namespace = 81,
  sym_transclude = 82,
  sym_let = 83,
  sym_tex = 84,
  sym_if_tex = 85,
  sym_block = 86,
  sym_scope = 87,
  sym_subtree = 88,
  sym_put = 89,
  sym_get = 90,
  sym_open = 91,
  sym_query_tree = 92,
  sym__default = 93,
  sym_object = 94,
  sym_patch = 95,
  sym_call = 96,
  sym__prim = 97,
  sym_inline_math = 98,
  sym_display_math = 99,
  sym_p = 100,
  sym_em = 101,
  sym_strong = 102,
  sym_li = 103,
  sym_ul = 104,
  sym_ol = 105,
  sym_code = 106,
  sym_blockquote = 107,
  sym_pre = 108,
  sym__query = 109,
  sym__query0 = 110,
  sym_query_author = 111,
  sym_query_tag = 112,
  sym_query_taxon = 113,
  sym_query_and = 114,
  sym_query_or = 115,
  sym_query_meta = 116,
  sym_queries = 117,
  sym_method_decl = 118,
  sym_fun_spec = 119,
  sym_ident = 120,
  sym_ident_with_method_calls = 121,
  sym__arg = 122,
  sym__link = 123,
  sym_addr = 124,
  sym_id = 125,
  sym_prefix = 126,
  sym_markdown_link = 127,
  sym_unlabeled_link = 128,
  sym_external_link = 129,
  sym__whitespace = 130,
  sym__txt_arg = 131,
  aux_sym_source_file_repeat1 = 132,
  aux_sym_braces_repeat1 = 133,
  aux_sym_object_repeat1 = 134,
  aux_sym__query_repeat1 = 135,
  aux_sym_queries_repeat1 = 136,
  aux_sym_fun_spec_repeat1 = 137,
  aux_sym_ident_repeat1 = 138,
  aux_sym_ident_with_method_calls_repeat1 = 139,
  aux_sym__arg_repeat1 = 140,
  aux_sym_id_repeat1 = 141,
  aux_sym_prefix_repeat1 = 142,
  alias_sym_method_body = 143,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_BSLASH] = "\\",
  [anon_sym_title] = "title",
  [anon_sym_author] = "author",
  [anon_sym_contributor] = "contributor",
  [anon_sym_date] = "date",
  [anon_sym_DASH] = "-",
  [anon_sym_tag] = "tag",
  [anon_sym_ref] = "ref",
  [sym_year] = "year",
  [sym_month] = "month",
  [aux_sym_day_token1] = "day_token1",
  [aux_sym_day_token2] = "day_token2",
  [anon_sym_def] = "def",
  [anon_sym_alloc] = "alloc",
  [anon_sym_taxon] = "taxon",
  [anon_sym_meta] = "meta",
  [anon_sym_import] = "import",
  [anon_sym_export] = "export",
  [anon_sym_namespace] = "namespace",
  [anon_sym_transclude] = "transclude",
  [anon_sym_let] = "let",
  [anon_sym_tex] = "tex",
  [anon_sym_iftex] = "iftex",
  [anon_sym_block] = "block",
  [anon_sym_scope] = "scope",
  [anon_sym_subtree] = "subtree",
  [anon_sym_put] = "put",
  [anon_sym_get] = "get",
  [anon_sym_open] = "open",
  [anon_sym_query] = "query",
  [anon_sym_object] = "object",
  [anon_sym_patch] = "patch",
  [anon_sym_call] = "call",
  [sym_comment] = "comment",
  [anon_sym_POUND] = "#",
  [anon_sym_POUND_POUND] = "##",
  [anon_sym_p] = "p",
  [anon_sym_em] = "em",
  [anon_sym_strong] = "strong",
  [anon_sym_li] = "li",
  [anon_sym_ul] = "ul",
  [anon_sym_ol] = "ol",
  [anon_sym_code] = "code",
  [anon_sym_blockquote] = "blockquote",
  [anon_sym_pre] = "pre",
  [anon_sym_BSLASHquery_SLASHauthor] = "\\query/author",
  [anon_sym_BSLASHquery_SLASHtag] = "\\query/tag",
  [anon_sym_BSLASHquery_SLASHtaxon] = "\\query/taxon",
  [anon_sym_BSLASHquery_SLASHand] = "\\query/and",
  [anon_sym_BSLASHquery_SLASHor] = "\\query/or",
  [anon_sym_LBRACE_RBRACE] = "{}",
  [anon_sym__] = "_",
  [anon_sym_LBRACK_LBRACK] = "[[",
  [anon_sym_RBRACK_RBRACK] = "]]",
  [aux_sym__whitespace_token1] = "_whitespace_token1",
  [sym__alpha] = "_alpha",
  [sym__digit] = "_digit",
  [sym_text] = "text",
  [sym_source_file] = "source_file",
  [sym__node] = "_node",
  [sym_squares] = "squares",
  [sym_parens] = "parens",
  [sym_title] = "title",
  [sym_author] = "author",
  [sym_contributor] = "contributor",
  [sym_date] = "date",
  [sym_tag] = "tag",
  [sym_day] = "day",
  [sym_def] = "def",
  [sym_alloc] = "alloc",
  [sym_taxon] = "taxon",
  [sym_meta] = "meta",
  [sym_import] = "import",
  [sym_export] = "export",
  [sym_namespace] = "namespace",
  [sym_transclude] = "transclude",
  [sym_let] = "let",
  [sym_tex] = "tex",
  [sym_if_tex] = "if_tex",
  [sym_block] = "block",
  [sym_scope] = "scope",
  [sym_subtree] = "subtree",
  [sym_put] = "put",
  [sym_get] = "get",
  [sym_open] = "open",
  [sym_query_tree] = "query_tree",
  [sym__default] = "_default",
  [sym_object] = "object",
  [sym_patch] = "patch",
  [sym_call] = "call",
  [sym__prim] = "_prim",
  [sym_inline_math] = "inline_math",
  [sym_display_math] = "display_math",
  [sym_p] = "paragraph",
  [sym_em] = "em",
  [sym_strong] = "strong",
  [sym_li] = "li",
  [sym_ul] = "ul",
  [sym_ol] = "ol",
  [sym_code] = "code",
  [sym_blockquote] = "blockquote",
  [sym_pre] = "pre",
  [sym__query] = "_query",
  [sym__query0] = "_query0",
  [sym_query_author] = "query_author",
  [sym_query_tag] = "query_tag",
  [sym_query_taxon] = "query_taxon",
  [sym_query_and] = "query_and",
  [sym_query_or] = "query_or",
  [sym_query_meta] = "query_meta",
  [sym_queries] = "queries",
  [sym_method_decl] = "method_decl",
  [sym_fun_spec] = "fun_spec",
  [sym_ident] = "ident",
  [sym_ident_with_method_calls] = "ident_with_method_calls",
  [sym__arg] = "_arg",
  [sym__link] = "_link",
  [sym_addr] = "addr",
  [sym_id] = "id",
  [sym_prefix] = "prefix",
  [sym_markdown_link] = "markdown_link",
  [sym_unlabeled_link] = "unlabeled_link",
  [sym_external_link] = "external_link",
  [sym__whitespace] = "_whitespace",
  [sym__txt_arg] = "_txt_arg",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_braces_repeat1] = "braces_repeat1",
  [aux_sym_object_repeat1] = "object_repeat1",
  [aux_sym__query_repeat1] = "_query_repeat1",
  [aux_sym_queries_repeat1] = "queries_repeat1",
  [aux_sym_fun_spec_repeat1] = "fun_spec_repeat1",
  [aux_sym_ident_repeat1] = "ident_repeat1",
  [aux_sym_ident_with_method_calls_repeat1] = "ident_with_method_calls_repeat1",
  [aux_sym__arg_repeat1] = "_arg_repeat1",
  [aux_sym_id_repeat1] = "id_repeat1",
  [aux_sym_prefix_repeat1] = "prefix_repeat1",
  [alias_sym_method_body] = "method_body",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [anon_sym_title] = anon_sym_title,
  [anon_sym_author] = anon_sym_author,
  [anon_sym_contributor] = anon_sym_contributor,
  [anon_sym_date] = anon_sym_date,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_tag] = anon_sym_tag,
  [anon_sym_ref] = anon_sym_ref,
  [sym_year] = sym_year,
  [sym_month] = sym_month,
  [aux_sym_day_token1] = aux_sym_day_token1,
  [aux_sym_day_token2] = aux_sym_day_token2,
  [anon_sym_def] = anon_sym_def,
  [anon_sym_alloc] = anon_sym_alloc,
  [anon_sym_taxon] = anon_sym_taxon,
  [anon_sym_meta] = anon_sym_meta,
  [anon_sym_import] = anon_sym_import,
  [anon_sym_export] = anon_sym_export,
  [anon_sym_namespace] = anon_sym_namespace,
  [anon_sym_transclude] = anon_sym_transclude,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_tex] = anon_sym_tex,
  [anon_sym_iftex] = anon_sym_iftex,
  [anon_sym_block] = anon_sym_block,
  [anon_sym_scope] = anon_sym_scope,
  [anon_sym_subtree] = anon_sym_subtree,
  [anon_sym_put] = anon_sym_put,
  [anon_sym_get] = anon_sym_get,
  [anon_sym_open] = anon_sym_open,
  [anon_sym_query] = anon_sym_query,
  [anon_sym_object] = anon_sym_object,
  [anon_sym_patch] = anon_sym_patch,
  [anon_sym_call] = anon_sym_call,
  [sym_comment] = sym_comment,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_POUND_POUND] = anon_sym_POUND_POUND,
  [anon_sym_p] = anon_sym_p,
  [anon_sym_em] = anon_sym_em,
  [anon_sym_strong] = anon_sym_strong,
  [anon_sym_li] = anon_sym_li,
  [anon_sym_ul] = anon_sym_ul,
  [anon_sym_ol] = anon_sym_ol,
  [anon_sym_code] = anon_sym_code,
  [anon_sym_blockquote] = anon_sym_blockquote,
  [anon_sym_pre] = anon_sym_pre,
  [anon_sym_BSLASHquery_SLASHauthor] = anon_sym_BSLASHquery_SLASHauthor,
  [anon_sym_BSLASHquery_SLASHtag] = anon_sym_BSLASHquery_SLASHtag,
  [anon_sym_BSLASHquery_SLASHtaxon] = anon_sym_BSLASHquery_SLASHtaxon,
  [anon_sym_BSLASHquery_SLASHand] = anon_sym_BSLASHquery_SLASHand,
  [anon_sym_BSLASHquery_SLASHor] = anon_sym_BSLASHquery_SLASHor,
  [anon_sym_LBRACE_RBRACE] = anon_sym_LBRACE_RBRACE,
  [anon_sym__] = anon_sym__,
  [anon_sym_LBRACK_LBRACK] = anon_sym_LBRACK_LBRACK,
  [anon_sym_RBRACK_RBRACK] = anon_sym_RBRACK_RBRACK,
  [aux_sym__whitespace_token1] = aux_sym__whitespace_token1,
  [sym__alpha] = sym__alpha,
  [sym__digit] = sym__digit,
  [sym_text] = sym_text,
  [sym_source_file] = sym_source_file,
  [sym__node] = sym__node,
  [sym_squares] = sym_squares,
  [sym_parens] = sym_parens,
  [sym_title] = sym_title,
  [sym_author] = sym_author,
  [sym_contributor] = sym_contributor,
  [sym_date] = sym_date,
  [sym_tag] = sym_tag,
  [sym_day] = sym_day,
  [sym_def] = sym_def,
  [sym_alloc] = sym_alloc,
  [sym_taxon] = sym_taxon,
  [sym_meta] = sym_meta,
  [sym_import] = sym_import,
  [sym_export] = sym_export,
  [sym_namespace] = sym_namespace,
  [sym_transclude] = sym_transclude,
  [sym_let] = sym_let,
  [sym_tex] = sym_tex,
  [sym_if_tex] = sym_if_tex,
  [sym_block] = sym_block,
  [sym_scope] = sym_scope,
  [sym_subtree] = sym_subtree,
  [sym_put] = sym_put,
  [sym_get] = sym_get,
  [sym_open] = sym_open,
  [sym_query_tree] = sym_query_tree,
  [sym__default] = sym__default,
  [sym_object] = sym_object,
  [sym_patch] = sym_patch,
  [sym_call] = sym_call,
  [sym__prim] = sym__prim,
  [sym_inline_math] = sym_inline_math,
  [sym_display_math] = sym_display_math,
  [sym_p] = sym_p,
  [sym_em] = sym_em,
  [sym_strong] = sym_strong,
  [sym_li] = sym_li,
  [sym_ul] = sym_ul,
  [sym_ol] = sym_ol,
  [sym_code] = sym_code,
  [sym_blockquote] = sym_blockquote,
  [sym_pre] = sym_pre,
  [sym__query] = sym__query,
  [sym__query0] = sym__query0,
  [sym_query_author] = sym_query_author,
  [sym_query_tag] = sym_query_tag,
  [sym_query_taxon] = sym_query_taxon,
  [sym_query_and] = sym_query_and,
  [sym_query_or] = sym_query_or,
  [sym_query_meta] = sym_query_meta,
  [sym_queries] = sym_queries,
  [sym_method_decl] = sym_method_decl,
  [sym_fun_spec] = sym_fun_spec,
  [sym_ident] = sym_ident,
  [sym_ident_with_method_calls] = sym_ident_with_method_calls,
  [sym__arg] = sym__arg,
  [sym__link] = sym__link,
  [sym_addr] = sym_addr,
  [sym_id] = sym_id,
  [sym_prefix] = sym_prefix,
  [sym_markdown_link] = sym_markdown_link,
  [sym_unlabeled_link] = sym_unlabeled_link,
  [sym_external_link] = sym_external_link,
  [sym__whitespace] = sym__whitespace,
  [sym__txt_arg] = sym__txt_arg,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_braces_repeat1] = aux_sym_braces_repeat1,
  [aux_sym_object_repeat1] = aux_sym_object_repeat1,
  [aux_sym__query_repeat1] = aux_sym__query_repeat1,
  [aux_sym_queries_repeat1] = aux_sym_queries_repeat1,
  [aux_sym_fun_spec_repeat1] = aux_sym_fun_spec_repeat1,
  [aux_sym_ident_repeat1] = aux_sym_ident_repeat1,
  [aux_sym_ident_with_method_calls_repeat1] = aux_sym_ident_with_method_calls_repeat1,
  [aux_sym__arg_repeat1] = aux_sym__arg_repeat1,
  [aux_sym_id_repeat1] = aux_sym_id_repeat1,
  [aux_sym_prefix_repeat1] = aux_sym_prefix_repeat1,
  [alias_sym_method_body] = alias_sym_method_body,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_title] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_author] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_contributor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_date] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tag] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ref] = {
    .visible = true,
    .named = false,
  },
  [sym_year] = {
    .visible = true,
    .named = true,
  },
  [sym_month] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_day_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_day_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_def] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_alloc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_taxon] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_meta] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_import] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_export] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_namespace] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_transclude] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tex] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_iftex] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_block] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_scope] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_subtree] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_put] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_get] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_open] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_query] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_object] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_patch] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_call] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_p] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_em] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_strong] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_li] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ul] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ol] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_code] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_blockquote] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pre] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHquery_SLASHauthor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHquery_SLASHtag] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHquery_SLASHtaxon] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHquery_SLASHand] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHquery_SLASHor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym__] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__whitespace_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__alpha] = {
    .visible = false,
    .named = true,
  },
  [sym__digit] = {
    .visible = false,
    .named = true,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__node] = {
    .visible = false,
    .named = true,
  },
  [sym_squares] = {
    .visible = true,
    .named = true,
  },
  [sym_parens] = {
    .visible = true,
    .named = true,
  },
  [sym_title] = {
    .visible = true,
    .named = true,
  },
  [sym_author] = {
    .visible = true,
    .named = true,
  },
  [sym_contributor] = {
    .visible = true,
    .named = true,
  },
  [sym_date] = {
    .visible = true,
    .named = true,
  },
  [sym_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_day] = {
    .visible = true,
    .named = true,
  },
  [sym_def] = {
    .visible = true,
    .named = true,
  },
  [sym_alloc] = {
    .visible = true,
    .named = true,
  },
  [sym_taxon] = {
    .visible = true,
    .named = true,
  },
  [sym_meta] = {
    .visible = true,
    .named = true,
  },
  [sym_import] = {
    .visible = true,
    .named = true,
  },
  [sym_export] = {
    .visible = true,
    .named = true,
  },
  [sym_namespace] = {
    .visible = true,
    .named = true,
  },
  [sym_transclude] = {
    .visible = true,
    .named = true,
  },
  [sym_let] = {
    .visible = true,
    .named = true,
  },
  [sym_tex] = {
    .visible = true,
    .named = true,
  },
  [sym_if_tex] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_scope] = {
    .visible = true,
    .named = true,
  },
  [sym_subtree] = {
    .visible = true,
    .named = true,
  },
  [sym_put] = {
    .visible = true,
    .named = true,
  },
  [sym_get] = {
    .visible = true,
    .named = true,
  },
  [sym_open] = {
    .visible = true,
    .named = true,
  },
  [sym_query_tree] = {
    .visible = true,
    .named = true,
  },
  [sym__default] = {
    .visible = false,
    .named = true,
  },
  [sym_object] = {
    .visible = true,
    .named = true,
  },
  [sym_patch] = {
    .visible = true,
    .named = true,
  },
  [sym_call] = {
    .visible = true,
    .named = true,
  },
  [sym__prim] = {
    .visible = false,
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
  [sym_p] = {
    .visible = true,
    .named = true,
  },
  [sym_em] = {
    .visible = true,
    .named = true,
  },
  [sym_strong] = {
    .visible = true,
    .named = true,
  },
  [sym_li] = {
    .visible = true,
    .named = true,
  },
  [sym_ul] = {
    .visible = true,
    .named = true,
  },
  [sym_ol] = {
    .visible = true,
    .named = true,
  },
  [sym_code] = {
    .visible = true,
    .named = true,
  },
  [sym_blockquote] = {
    .visible = true,
    .named = true,
  },
  [sym_pre] = {
    .visible = true,
    .named = true,
  },
  [sym__query] = {
    .visible = false,
    .named = true,
  },
  [sym__query0] = {
    .visible = false,
    .named = true,
  },
  [sym_query_author] = {
    .visible = true,
    .named = true,
  },
  [sym_query_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_query_taxon] = {
    .visible = true,
    .named = true,
  },
  [sym_query_and] = {
    .visible = true,
    .named = true,
  },
  [sym_query_or] = {
    .visible = true,
    .named = true,
  },
  [sym_query_meta] = {
    .visible = true,
    .named = true,
  },
  [sym_queries] = {
    .visible = true,
    .named = true,
  },
  [sym_method_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_fun_spec] = {
    .visible = true,
    .named = true,
  },
  [sym_ident] = {
    .visible = true,
    .named = true,
  },
  [sym_ident_with_method_calls] = {
    .visible = true,
    .named = true,
  },
  [sym__arg] = {
    .visible = false,
    .named = true,
  },
  [sym__link] = {
    .visible = false,
    .named = true,
  },
  [sym_addr] = {
    .visible = true,
    .named = true,
  },
  [sym_id] = {
    .visible = true,
    .named = true,
  },
  [sym_prefix] = {
    .visible = true,
    .named = true,
  },
  [sym_markdown_link] = {
    .visible = true,
    .named = true,
  },
  [sym_unlabeled_link] = {
    .visible = true,
    .named = true,
  },
  [sym_external_link] = {
    .visible = true,
    .named = true,
  },
  [sym__whitespace] = {
    .visible = false,
    .named = true,
  },
  [sym__txt_arg] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_braces_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_object_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__query_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_queries_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_fun_spec_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_ident_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_ident_with_method_calls_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__arg_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_id_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_prefix_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_method_body] = {
    .visible = true,
    .named = true,
  },
};

enum ts_field_identifiers {
  field_address = 1,
  field_argument = 2,
  field_author = 3,
  field_binder = 4,
  field_contributor = 5,
  field_date = 6,
  field_dest = 7,
  field_id = 8,
  field_identifier = 9,
  field_k = 10,
  field_key = 11,
  field_label = 12,
  field_object = 13,
  field_prefix = 14,
  field_self = 15,
  field_tag = 16,
  field_v = 17,
  field_value = 18,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_address] = "address",
  [field_argument] = "argument",
  [field_author] = "author",
  [field_binder] = "binder",
  [field_contributor] = "contributor",
  [field_date] = "date",
  [field_dest] = "dest",
  [field_id] = "id",
  [field_identifier] = "identifier",
  [field_k] = "k",
  [field_key] = "key",
  [field_label] = "label",
  [field_object] = "object",
  [field_prefix] = "prefix",
  [field_self] = "self",
  [field_tag] = "tag",
  [field_v] = "v",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 3},
  [3] = {.index = 4, .length = 3},
  [4] = {.index = 7, .length = 3},
  [5] = {.index = 10, .length = 3},
  [6] = {.index = 13, .length = 2},
  [7] = {.index = 15, .length = 2},
  [8] = {.index = 17, .length = 2},
  [9] = {.index = 19, .length = 3},
  [10] = {.index = 22, .length = 1},
  [11] = {.index = 23, .length = 2},
  [12] = {.index = 25, .length = 6},
  [13] = {.index = 31, .length = 3},
  [14] = {.index = 34, .length = 9},
  [15] = {.index = 43, .length = 4},
  [16] = {.index = 47, .length = 4},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_label, 1},
  [1] =
    {field_author, 0},
    {field_author, 1},
    {field_author, 2},
  [4] =
    {field_contributor, 0},
    {field_contributor, 1},
    {field_contributor, 2},
  [7] =
    {field_date, 0},
    {field_date, 1},
    {field_date, 2},
  [10] =
    {field_tag, 0},
    {field_tag, 1},
    {field_tag, 2},
  [13] =
    {field_argument, 1},
    {field_identifier, 0},
  [15] =
    {field_argument, 3},
    {field_identifier, 2},
  [17] =
    {field_id, 2},
    {field_prefix, 0},
  [19] =
    {field_argument, 2},
    {field_binder, 1},
    {field_identifier, 0},
  [22] =
    {field_address, 3},
  [23] =
    {field_k, 0},
    {field_v, 1},
  [25] =
    {field_dest, 3},
    {field_dest, 4},
    {field_dest, 5},
    {field_label, 0},
    {field_label, 1},
    {field_label, 2},
  [31] =
    {field_self, 2},
    {field_self, 3},
    {field_self, 4},
  [34] =
    {field_date, 0},
    {field_date, 1},
    {field_date, 2},
    {field_date, 3},
    {field_date, 4},
    {field_date, 5},
    {field_date, 6},
    {field_date, 7},
    {field_date, 8},
  [43] =
    {field_object, 2},
    {field_self, 3},
    {field_self, 4},
    {field_self, 5},
  [47] =
    {field_key, 0},
    {field_key, 1},
    {field_key, 2},
    {field_value, 3},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [16] = {
    [3] = alias_sym_method_body,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym__arg, 2,
    sym__arg,
    alias_sym_method_body,
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 4,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 4,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 13,
  [15] = 13,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 27,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 23,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 26,
  [107] = 25,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 27,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 38,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 37,
  [195] = 195,
  [196] = 173,
  [197] = 197,
  [198] = 160,
  [199] = 199,
  [200] = 200,
  [201] = 172,
  [202] = 202,
};

static inline bool sym_text_character_set_1(int32_t c) {
  return (c < '%'
    ? (c < '\r'
      ? (c < '\n'
        ? c == 0
        : c <= '\n')
      : (c <= '\r' || c == '#'))
    : (c <= '%' || (c < '{'
      ? (c < '['
        ? (c >= '(' && c <= ')')
        : c <= ']')
      : (c <= '{' || c == '}'))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(53);
      if (lookahead == '#') ADVANCE(124);
      if (lookahead == '%') ADVANCE(122);
      if (lookahead == '(') ADVANCE(60);
      if (lookahead == ')') ADVANCE(61);
      if (lookahead == '-') ADVANCE(71);
      if (lookahead == '[') ADVANCE(58);
      if (lookahead == '\\') ADVANCE(62);
      if (lookahead == ']') ADVANCE(59);
      if (lookahead == '_') ADVANCE(159);
      if (lookahead == 'a') ADVANCE(218);
      if (lookahead == 'b') ADVANCE(211);
      if (lookahead == 'c') ADVANCE(168);
      if (lookahead == 'd') ADVANCE(166);
      if (lookahead == 'e') ADVANCE(219);
      if (lookahead == 'g') ADVANCE(196);
      if (lookahead == 'i') ADVANCE(203);
      if (lookahead == 'l') ADVANCE(197);
      if (lookahead == 'm') ADVANCE(199);
      if (lookahead == 'n') ADVANCE(163);
      if (lookahead == 'o') ADVANCE(170);
      if (lookahead == 'p') ADVANCE(126);
      if (lookahead == 'q') ADVANCE(266);
      if (lookahead == 'r') ADVANCE(193);
      if (lookahead == 's') ADVANCE(175);
      if (lookahead == 't') ADVANCE(164);
      if (lookahead == 'u') ADVANCE(212);
      if (lookahead == '{') ADVANCE(55);
      if (lookahead == '}') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(78);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(79);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 1:
      if (lookahead == '#') ADVANCE(123);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(1)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(383);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(389);
      END_STATE();
    case 2:
      if (lookahead == ')') ADVANCE(61);
      if (lookahead == '-') ADVANCE(71);
      if (lookahead == ']') ADVANCE(7);
      if (lookahead == '_') ADVANCE(159);
      if (lookahead == '}') ADVANCE(56);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(274);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 3:
      if (lookahead == ')') ADVANCE(61);
      if (lookahead == '[') ADVANCE(57);
      if (lookahead == ']') ADVANCE(7);
      if (lookahead == 'b') ADVANCE(25);
      if (lookahead == 'c') ADVANCE(32);
      if (lookahead == 'e') ADVANCE(26);
      if (lookahead == 'l') ADVANCE(21);
      if (lookahead == 'o') ADVANCE(23);
      if (lookahead == 'p') ADVANCE(128);
      if (lookahead == 's') ADVANCE(44);
      if (lookahead == 'u') ADVANCE(24);
      if (lookahead == '{') ADVANCE(55);
      if (lookahead == '}') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(78);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '/') ADVANCE(9);
      END_STATE();
    case 5:
      if (lookahead == '0') ADVANCE(51);
      if (lookahead == '1') ADVANCE(77);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(76);
      END_STATE();
    case 6:
      if (lookahead == '[') ADVANCE(57);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == '{') ADVANCE(54);
      if (lookahead == '}') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(162);
      if (('\n' <= lookahead && lookahead <= '\r')) SKIP(6)
      END_STATE();
    case 7:
      if (lookahead == ']') ADVANCE(161);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(329);
      if (lookahead == 'b') ADVANCE(322);
      if (lookahead == 'c') ADVANCE(281);
      if (lookahead == 'd') ADVANCE(279);
      if (lookahead == 'e') ADVANCE(330);
      if (lookahead == 'g') ADVANCE(308);
      if (lookahead == 'i') ADVANCE(314);
      if (lookahead == 'l') ADVANCE(309);
      if (lookahead == 'm') ADVANCE(311);
      if (lookahead == 'n') ADVANCE(276);
      if (lookahead == 'o') ADVANCE(283);
      if (lookahead == 'p') ADVANCE(127);
      if (lookahead == 'q') ADVANCE(377);
      if (lookahead == 's') ADVANCE(288);
      if (lookahead == 't') ADVANCE(277);
      if (lookahead == 'u') ADVANCE(323);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(8)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(275);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '%' &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(389);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(27);
      if (lookahead == 'o') ADVANCE(39);
      if (lookahead == 't') ADVANCE(10);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(18);
      END_STATE();
    case 11:
      if (lookahead == 'c') ADVANCE(22);
      END_STATE();
    case 12:
      if (lookahead == 'd') ADVANCE(156);
      END_STATE();
    case 13:
      if (lookahead == 'd') ADVANCE(16);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(150);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(144);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(147);
      END_STATE();
    case 18:
      if (lookahead == 'g') ADVANCE(154);
      if (lookahead == 'x') ADVANCE(30);
      END_STATE();
    case 19:
      if (lookahead == 'g') ADVANCE(132);
      END_STATE();
    case 20:
      if (lookahead == 'h') ADVANCE(34);
      END_STATE();
    case 21:
      if (lookahead == 'i') ADVANCE(135);
      END_STATE();
    case 22:
      if (lookahead == 'k') ADVANCE(37);
      END_STATE();
    case 23:
      if (lookahead == 'l') ADVANCE(141);
      END_STATE();
    case 24:
      if (lookahead == 'l') ADVANCE(138);
      END_STATE();
    case 25:
      if (lookahead == 'l') ADVANCE(31);
      END_STATE();
    case 26:
      if (lookahead == 'm') ADVANCE(129);
      END_STATE();
    case 27:
      if (lookahead == 'n') ADVANCE(12);
      if (lookahead == 'u') ADVANCE(42);
      END_STATE();
    case 28:
      if (lookahead == 'n') ADVANCE(155);
      END_STATE();
    case 29:
      if (lookahead == 'n') ADVANCE(19);
      END_STATE();
    case 30:
      if (lookahead == 'o') ADVANCE(28);
      END_STATE();
    case 31:
      if (lookahead == 'o') ADVANCE(11);
      END_STATE();
    case 32:
      if (lookahead == 'o') ADVANCE(13);
      END_STATE();
    case 33:
      if (lookahead == 'o') ADVANCE(29);
      END_STATE();
    case 34:
      if (lookahead == 'o') ADVANCE(40);
      END_STATE();
    case 35:
      if (lookahead == 'o') ADVANCE(43);
      END_STATE();
    case 36:
      if (lookahead == 'q') ADVANCE(45);
      END_STATE();
    case 37:
      if (lookahead == 'q') ADVANCE(46);
      END_STATE();
    case 38:
      if (lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 39:
      if (lookahead == 'r') ADVANCE(157);
      END_STATE();
    case 40:
      if (lookahead == 'r') ADVANCE(153);
      END_STATE();
    case 41:
      if (lookahead == 'r') ADVANCE(33);
      END_STATE();
    case 42:
      if (lookahead == 't') ADVANCE(20);
      END_STATE();
    case 43:
      if (lookahead == 't') ADVANCE(17);
      END_STATE();
    case 44:
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 45:
      if (lookahead == 'u') ADVANCE(14);
      END_STATE();
    case 46:
      if (lookahead == 'u') ADVANCE(35);
      END_STATE();
    case 47:
      if (lookahead == 'y') ADVANCE(4);
      END_STATE();
    case 48:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(48)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(384);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '%' &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(389);
      END_STATE();
    case 49:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(49)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(388);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '%' &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(389);
      END_STATE();
    case 50:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(50)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      END_STATE();
    case 51:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(76);
      END_STATE();
    case 52:
      if (eof) ADVANCE(53);
      if (lookahead == '#') ADVANCE(124);
      if (lookahead == '%') ADVANCE(122);
      if (lookahead == '(') ADVANCE(60);
      if (lookahead == ')') ADVANCE(61);
      if (lookahead == '[') ADVANCE(58);
      if (lookahead == '\\') ADVANCE(62);
      if (lookahead == ']') ADVANCE(59);
      if (lookahead == '{') ADVANCE(55);
      if (lookahead == '}') ADVANCE(56);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(52)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(383);
      if (lookahead != 0) ADVANCE(389);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '}') ADVANCE(158);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '[') ADVANCE(160);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_title);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_title);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_author);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_author);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_contributor);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_contributor);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_date);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_date);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_tag);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_tag);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_ref);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_year);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_month);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_month);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(76);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_day_token1);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_day_token2);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_def);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_def);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_alloc);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_alloc);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_taxon);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_taxon);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_meta);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_meta);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_import);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_import);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_export);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_export);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_namespace);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_namespace);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_transclude);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_transclude);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_let);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_let);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_tex);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_tex);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_iftex);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_iftex);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_block);
      if (lookahead == 'q') ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_block);
      if (lookahead == 'q') ADVANCE(378);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_scope);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_scope);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_subtree);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_subtree);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_put);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_put);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_get);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_get);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_open);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_open);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_query);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_query);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_object);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_object);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_patch);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_patch);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_call);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_call);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(122);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '#') ADVANCE(125);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_POUND_POUND);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_p);
      if (lookahead == 'a') ADVANCE(256);
      if (lookahead == 'r') ADVANCE(183);
      if (lookahead == 'u') ADVANCE(252);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_p);
      if (lookahead == 'a') ADVANCE(367);
      if (lookahead == 'r') ADVANCE(296);
      if (lookahead == 'u') ADVANCE(363);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_p);
      if (lookahead == 'r') ADVANCE(15);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_em);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_em);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_em);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_strong);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_strong);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_strong);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_li);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_li);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_li);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_ul);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_ul);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_ul);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_ol);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_ol);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_ol);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_code);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_code);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_code);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_blockquote);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_blockquote);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_blockquote);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_pre);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_pre);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_pre);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_BSLASHquery_SLASHauthor);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_BSLASHquery_SLASHtag);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_BSLASHquery_SLASHtaxon);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_BSLASHquery_SLASHand);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_BSLASHquery_SLASHor);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_LBRACE_RBRACE);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_LBRACK_LBRACK);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_RBRACK_RBRACK);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(162);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'a') ADVANCE(220);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'a') ADVANCE(204);
      if (lookahead == 'e') ADVANCE(269);
      if (lookahead == 'i') ADVANCE(259);
      if (lookahead == 'r') ADVANCE(167);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'a') ADVANCE(86);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'a') ADVANCE(261);
      if (lookahead == 'e') ADVANCE(201);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'a') ADVANCE(224);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'a') ADVANCE(214);
      if (lookahead == 'o') ADVANCE(180);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'a') ADVANCE(179);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'b') ADVANCE(209);
      if (lookahead == 'l') ADVANCE(142);
      if (lookahead == 'p') ADVANCE(182);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'b') ADVANCE(268);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'b') ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'c') ADVANCE(210);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'c') ADVANCE(82);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'c') ADVANCE(226);
      if (lookahead == 't') ADVANCE(243);
      if (lookahead == 'u') ADVANCE(172);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'c') ADVANCE(206);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'c') ADVANCE(215);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'c') ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'c') ADVANCE(190);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'd') ADVANCE(184);
      if (lookahead == 'n') ADVANCE(258);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'd') ADVANCE(192);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(221);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(151);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(145);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(69);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(247);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(63);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(92);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(202);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(239);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(250);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(251);
      if (lookahead == 'i') ADVANCE(136);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(257);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(189);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'f') ADVANCE(80);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'f') ADVANCE(74);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'f') ADVANCE(262);
      if (lookahead == 'm') ADVANCE(238);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'g') ADVANCE(72);
      if (lookahead == 'x') ADVANCE(230);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'g') ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'h') ADVANCE(118);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'h') ADVANCE(231);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'i') ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'j') ADVANCE(198);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'k') ADVANCE(102);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'l') ADVANCE(225);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'l') ADVANCE(139);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'l') ADVANCE(120);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'l') ADVANCE(213);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'l') ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'l') ADVANCE(188);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'l') ADVANCE(227);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'l') ADVANCE(217);
      if (lookahead == 'u') ADVANCE(249);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'm') ADVANCE(130);
      if (lookahead == 'x') ADVANCE(235);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'm') ADVANCE(186);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'n') ADVANCE(112);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'n') ADVANCE(205);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'n') ADVANCE(84);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'n') ADVANCE(248);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'o') ADVANCE(173);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'o') ADVANCE(237);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'o') ADVANCE(174);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'o') ADVANCE(222);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'o') ADVANCE(244);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'o') ADVANCE(223);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'o') ADVANCE(241);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'o') ADVANCE(242);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'o') ADVANCE(245);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'o') ADVANCE(263);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'p') ADVANCE(229);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'p') ADVANCE(169);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'p') ADVANCE(187);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'p') ADVANCE(233);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'r') ADVANCE(271);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'r') ADVANCE(208);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'r') ADVANCE(65);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'r') ADVANCE(67);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'r') ADVANCE(228);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'r') ADVANCE(253);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'r') ADVANCE(254);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'r') ADVANCE(200);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 's') ADVANCE(236);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 's') ADVANCE(177);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 't') ADVANCE(207);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 't') ADVANCE(110);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 't') ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 't') ADVANCE(108);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 't') ADVANCE(90);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 't') ADVANCE(88);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 't') ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 't') ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 't') ADVANCE(165);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 't') ADVANCE(240);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 't') ADVANCE(216);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 't') ADVANCE(246);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 't') ADVANCE(185);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 't') ADVANCE(195);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 't') ADVANCE(191);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 't') ADVANCE(232);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'u') ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'u') ADVANCE(194);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'u') ADVANCE(234);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'u') ADVANCE(264);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'x') ADVANCE(98);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'x') ADVANCE(100);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'y') ADVANCE(114);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym__alpha);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym__alpha);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym__digit);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(274);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a') ADVANCE(329);
      if (lookahead == 'b') ADVANCE(322);
      if (lookahead == 'c') ADVANCE(281);
      if (lookahead == 'd') ADVANCE(279);
      if (lookahead == 'e') ADVANCE(330);
      if (lookahead == 'g') ADVANCE(308);
      if (lookahead == 'i') ADVANCE(314);
      if (lookahead == 'l') ADVANCE(309);
      if (lookahead == 'm') ADVANCE(311);
      if (lookahead == 'n') ADVANCE(276);
      if (lookahead == 'o') ADVANCE(283);
      if (lookahead == 'p') ADVANCE(127);
      if (lookahead == 'q') ADVANCE(377);
      if (lookahead == 's') ADVANCE(288);
      if (lookahead == 't') ADVANCE(277);
      if (lookahead == 'u') ADVANCE(323);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(275);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead) &&
          lookahead != '#' &&
          lookahead != '%' &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(389);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a') ADVANCE(331);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a') ADVANCE(315);
      if (lookahead == 'e') ADVANCE(380);
      if (lookahead == 'i') ADVANCE(370);
      if (lookahead == 'r') ADVANCE(280);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a') ADVANCE(87);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a') ADVANCE(372);
      if (lookahead == 'e') ADVANCE(313);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a') ADVANCE(335);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a') ADVANCE(325);
      if (lookahead == 'o') ADVANCE(293);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a') ADVANCE(292);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'b') ADVANCE(320);
      if (lookahead == 'l') ADVANCE(143);
      if (lookahead == 'p') ADVANCE(295);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'b') ADVANCE(379);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'b') ADVANCE(371);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'c') ADVANCE(321);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'c') ADVANCE(83);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'c') ADVANCE(337);
      if (lookahead == 't') ADVANCE(354);
      if (lookahead == 'u') ADVANCE(285);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'c') ADVANCE(317);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'c') ADVANCE(326);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'c') ADVANCE(366);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'c') ADVANCE(303);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'd') ADVANCE(297);
      if (lookahead == 'n') ADVANCE(369);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'd') ADVANCE(305);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(332);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(152);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(146);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(70);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(358);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(105);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(64);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(107);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(93);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(149);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(95);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(350);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(381);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(361);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(362);
      if (lookahead == 'i') ADVANCE(137);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(291);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(368);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(302);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'f') ADVANCE(81);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'f') ADVANCE(373);
      if (lookahead == 'm') ADVANCE(349);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'g') ADVANCE(73);
      if (lookahead == 'x') ADVANCE(341);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'g') ADVANCE(134);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'h') ADVANCE(119);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'h') ADVANCE(342);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i') ADVANCE(284);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'j') ADVANCE(310);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'k') ADVANCE(103);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l') ADVANCE(336);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l') ADVANCE(140);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l') ADVANCE(121);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l') ADVANCE(324);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l') ADVANCE(376);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l') ADVANCE(301);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l') ADVANCE(338);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l') ADVANCE(328);
      if (lookahead == 'u') ADVANCE(360);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'm') ADVANCE(131);
      if (lookahead == 'x') ADVANCE(346);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'm') ADVANCE(299);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'n') ADVANCE(113);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'n') ADVANCE(316);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'n') ADVANCE(85);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'n') ADVANCE(359);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'o') ADVANCE(286);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'o') ADVANCE(348);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'o') ADVANCE(287);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'o') ADVANCE(333);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'o') ADVANCE(355);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'o') ADVANCE(334);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'o') ADVANCE(352);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'o') ADVANCE(353);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'o') ADVANCE(357);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'o') ADVANCE(374);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'p') ADVANCE(340);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'p') ADVANCE(282);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'p') ADVANCE(300);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'p') ADVANCE(344);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r') ADVANCE(382);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r') ADVANCE(319);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r') ADVANCE(66);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r') ADVANCE(68);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r') ADVANCE(339);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r') ADVANCE(364);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r') ADVANCE(312);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r') ADVANCE(365);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 's') ADVANCE(347);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 's') ADVANCE(290);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't') ADVANCE(318);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't') ADVANCE(111);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't') ADVANCE(97);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't') ADVANCE(109);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't') ADVANCE(91);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't') ADVANCE(89);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't') ADVANCE(117);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't') ADVANCE(289);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't') ADVANCE(278);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't') ADVANCE(351);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't') ADVANCE(327);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't') ADVANCE(356);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't') ADVANCE(298);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't') ADVANCE(307);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't') ADVANCE(304);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't') ADVANCE(343);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'u') ADVANCE(294);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'u') ADVANCE(306);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'u') ADVANCE(345);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'u') ADVANCE(375);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'x') ADVANCE(99);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'x') ADVANCE(101);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'y') ADVANCE(115);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(383);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead) &&
          lookahead != '#' &&
          lookahead != '%' &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(389);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(384);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead) &&
          lookahead != '#' &&
          lookahead != '%' &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(389);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(388);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead) &&
          lookahead != '#' &&
          lookahead != '%' &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(389);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_text);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(75);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_text);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(386);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_text);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(387);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_text);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 52},
  [2] = {.lex_state = 52},
  [3] = {.lex_state = 52},
  [4] = {.lex_state = 52},
  [5] = {.lex_state = 52},
  [6] = {.lex_state = 52},
  [7] = {.lex_state = 52},
  [8] = {.lex_state = 52},
  [9] = {.lex_state = 52},
  [10] = {.lex_state = 52},
  [11] = {.lex_state = 52},
  [12] = {.lex_state = 52},
  [13] = {.lex_state = 52},
  [14] = {.lex_state = 52},
  [15] = {.lex_state = 52},
  [16] = {.lex_state = 8},
  [17] = {.lex_state = 6},
  [18] = {.lex_state = 6},
  [19] = {.lex_state = 6},
  [20] = {.lex_state = 6},
  [21] = {.lex_state = 6},
  [22] = {.lex_state = 6},
  [23] = {.lex_state = 52},
  [24] = {.lex_state = 52},
  [25] = {.lex_state = 52},
  [26] = {.lex_state = 52},
  [27] = {.lex_state = 52},
  [28] = {.lex_state = 52},
  [29] = {.lex_state = 52},
  [30] = {.lex_state = 52},
  [31] = {.lex_state = 52},
  [32] = {.lex_state = 52},
  [33] = {.lex_state = 52},
  [34] = {.lex_state = 52},
  [35] = {.lex_state = 52},
  [36] = {.lex_state = 52},
  [37] = {.lex_state = 52},
  [38] = {.lex_state = 52},
  [39] = {.lex_state = 52},
  [40] = {.lex_state = 52},
  [41] = {.lex_state = 52},
  [42] = {.lex_state = 52},
  [43] = {.lex_state = 52},
  [44] = {.lex_state = 52},
  [45] = {.lex_state = 52},
  [46] = {.lex_state = 52},
  [47] = {.lex_state = 52},
  [48] = {.lex_state = 52},
  [49] = {.lex_state = 52},
  [50] = {.lex_state = 52},
  [51] = {.lex_state = 52},
  [52] = {.lex_state = 52},
  [53] = {.lex_state = 52},
  [54] = {.lex_state = 52},
  [55] = {.lex_state = 52},
  [56] = {.lex_state = 52},
  [57] = {.lex_state = 52},
  [58] = {.lex_state = 52},
  [59] = {.lex_state = 52},
  [60] = {.lex_state = 52},
  [61] = {.lex_state = 52},
  [62] = {.lex_state = 52},
  [63] = {.lex_state = 52},
  [64] = {.lex_state = 52},
  [65] = {.lex_state = 52},
  [66] = {.lex_state = 52},
  [67] = {.lex_state = 52},
  [68] = {.lex_state = 52},
  [69] = {.lex_state = 52},
  [70] = {.lex_state = 52},
  [71] = {.lex_state = 52},
  [72] = {.lex_state = 52},
  [73] = {.lex_state = 52},
  [74] = {.lex_state = 52},
  [75] = {.lex_state = 52},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 6},
  [79] = {.lex_state = 52},
  [80] = {.lex_state = 6},
  [81] = {.lex_state = 3},
  [82] = {.lex_state = 6},
  [83] = {.lex_state = 6},
  [84] = {.lex_state = 6},
  [85] = {.lex_state = 6},
  [86] = {.lex_state = 2},
  [87] = {.lex_state = 6},
  [88] = {.lex_state = 2},
  [89] = {.lex_state = 6},
  [90] = {.lex_state = 6},
  [91] = {.lex_state = 6},
  [92] = {.lex_state = 6},
  [93] = {.lex_state = 2},
  [94] = {.lex_state = 48},
  [95] = {.lex_state = 6},
  [96] = {.lex_state = 6},
  [97] = {.lex_state = 48},
  [98] = {.lex_state = 3},
  [99] = {.lex_state = 6},
  [100] = {.lex_state = 2},
  [101] = {.lex_state = 6},
  [102] = {.lex_state = 6},
  [103] = {.lex_state = 3},
  [104] = {.lex_state = 2},
  [105] = {.lex_state = 2},
  [106] = {.lex_state = 3},
  [107] = {.lex_state = 3},
  [108] = {.lex_state = 6},
  [109] = {.lex_state = 3},
  [110] = {.lex_state = 3},
  [111] = {.lex_state = 2},
  [112] = {.lex_state = 6},
  [113] = {.lex_state = 1},
  [114] = {.lex_state = 3},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 2},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 3},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 3},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 49},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 3},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 3},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 5},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 3},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 3},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 52},
  [173] = {.lex_state = 52},
  [174] = {.lex_state = 52},
  [175] = {.lex_state = 52},
  [176] = {.lex_state = 3},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 50},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 3},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 52},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 52},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 52},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 52},
  [202] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [anon_sym_title] = ACTIONS(1),
    [anon_sym_author] = ACTIONS(1),
    [anon_sym_contributor] = ACTIONS(1),
    [anon_sym_date] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_tag] = ACTIONS(1),
    [anon_sym_ref] = ACTIONS(1),
    [aux_sym_day_token1] = ACTIONS(1),
    [aux_sym_day_token2] = ACTIONS(1),
    [anon_sym_def] = ACTIONS(1),
    [anon_sym_alloc] = ACTIONS(1),
    [anon_sym_taxon] = ACTIONS(1),
    [anon_sym_meta] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_export] = ACTIONS(1),
    [anon_sym_namespace] = ACTIONS(1),
    [anon_sym_transclude] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_tex] = ACTIONS(1),
    [anon_sym_iftex] = ACTIONS(1),
    [anon_sym_block] = ACTIONS(1),
    [anon_sym_scope] = ACTIONS(1),
    [anon_sym_subtree] = ACTIONS(1),
    [anon_sym_put] = ACTIONS(1),
    [anon_sym_get] = ACTIONS(1),
    [anon_sym_open] = ACTIONS(1),
    [anon_sym_query] = ACTIONS(1),
    [anon_sym_object] = ACTIONS(1),
    [anon_sym_patch] = ACTIONS(1),
    [anon_sym_call] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_POUND_POUND] = ACTIONS(1),
    [anon_sym_p] = ACTIONS(1),
    [anon_sym_em] = ACTIONS(1),
    [anon_sym_strong] = ACTIONS(1),
    [anon_sym_li] = ACTIONS(1),
    [anon_sym_ul] = ACTIONS(1),
    [anon_sym_ol] = ACTIONS(1),
    [anon_sym_code] = ACTIONS(1),
    [anon_sym_blockquote] = ACTIONS(1),
    [anon_sym_pre] = ACTIONS(1),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(1),
    [sym__alpha] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(199),
    [sym__node] = STATE(6),
    [sym_squares] = STATE(6),
    [sym_parens] = STATE(6),
    [sym_title] = STATE(6),
    [sym_author] = STATE(6),
    [sym_contributor] = STATE(6),
    [sym_date] = STATE(6),
    [sym_tag] = STATE(6),
    [sym_def] = STATE(6),
    [sym_alloc] = STATE(6),
    [sym_taxon] = STATE(6),
    [sym_meta] = STATE(6),
    [sym_import] = STATE(6),
    [sym_export] = STATE(6),
    [sym_namespace] = STATE(6),
    [sym_transclude] = STATE(6),
    [sym_let] = STATE(6),
    [sym_tex] = STATE(6),
    [sym_if_tex] = STATE(6),
    [sym_block] = STATE(6),
    [sym_scope] = STATE(6),
    [sym_subtree] = STATE(6),
    [sym_put] = STATE(6),
    [sym_get] = STATE(6),
    [sym_open] = STATE(6),
    [sym_query_tree] = STATE(6),
    [sym__default] = STATE(6),
    [sym_object] = STATE(6),
    [sym_patch] = STATE(6),
    [sym_call] = STATE(6),
    [sym__prim] = STATE(6),
    [sym_inline_math] = STATE(6),
    [sym_display_math] = STATE(6),
    [sym_p] = STATE(6),
    [sym_em] = STATE(6),
    [sym_strong] = STATE(6),
    [sym_li] = STATE(6),
    [sym_ul] = STATE(6),
    [sym_ol] = STATE(6),
    [sym_code] = STATE(6),
    [sym_blockquote] = STATE(6),
    [sym_pre] = STATE(6),
    [sym_ident] = STATE(6),
    [sym_ident_with_method_calls] = STATE(6),
    [sym__link] = STATE(6),
    [sym_markdown_link] = STATE(6),
    [sym_unlabeled_link] = STATE(6),
    [aux_sym_source_file_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_BSLASH] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [anon_sym_POUND] = ACTIONS(13),
    [anon_sym_POUND_POUND] = ACTIONS(15),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(17),
    [sym_text] = ACTIONS(19),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(26), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_BSLASH,
    ACTIONS(32), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_POUND,
    ACTIONS(38), 1,
      anon_sym_POUND_POUND,
    ACTIONS(41), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(44), 1,
      sym_text,
    ACTIONS(24), 2,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
    STATE(2), 48,
      sym__node,
      sym_squares,
      sym_parens,
      sym_title,
      sym_author,
      sym_contributor,
      sym_date,
      sym_tag,
      sym_def,
      sym_alloc,
      sym_taxon,
      sym_meta,
      sym_import,
      sym_export,
      sym_namespace,
      sym_transclude,
      sym_let,
      sym_tex,
      sym_if_tex,
      sym_block,
      sym_scope,
      sym_subtree,
      sym_put,
      sym_get,
      sym_open,
      sym_query_tree,
      sym__default,
      sym_object,
      sym_patch,
      sym_call,
      sym__prim,
      sym_inline_math,
      sym_display_math,
      sym_p,
      sym_em,
      sym_strong,
      sym_li,
      sym_ul,
      sym_ol,
      sym_code,
      sym_blockquote,
      sym_pre,
      sym_ident,
      sym_ident_with_method_calls,
      sym__link,
      sym_markdown_link,
      sym_unlabeled_link,
      aux_sym_braces_repeat1,
  [79] = 10,
    ACTIONS(47), 1,
      anon_sym_RBRACE,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(52), 1,
      anon_sym_LPAREN,
    ACTIONS(55), 1,
      anon_sym_BSLASH,
    ACTIONS(58), 1,
      sym_comment,
    ACTIONS(61), 1,
      anon_sym_POUND,
    ACTIONS(64), 1,
      anon_sym_POUND_POUND,
    ACTIONS(67), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(70), 1,
      sym_text,
    STATE(3), 48,
      sym__node,
      sym_squares,
      sym_parens,
      sym_title,
      sym_author,
      sym_contributor,
      sym_date,
      sym_tag,
      sym_def,
      sym_alloc,
      sym_taxon,
      sym_meta,
      sym_import,
      sym_export,
      sym_namespace,
      sym_transclude,
      sym_let,
      sym_tex,
      sym_if_tex,
      sym_block,
      sym_scope,
      sym_subtree,
      sym_put,
      sym_get,
      sym_open,
      sym_query_tree,
      sym__default,
      sym_object,
      sym_patch,
      sym_call,
      sym__prim,
      sym_inline_math,
      sym_display_math,
      sym_p,
      sym_em,
      sym_strong,
      sym_li,
      sym_ul,
      sym_ol,
      sym_code,
      sym_blockquote,
      sym_pre,
      sym_ident,
      sym_ident_with_method_calls,
      sym__link,
      sym_markdown_link,
      sym_unlabeled_link,
      aux_sym__arg_repeat1,
  [157] = 10,
    ACTIONS(5), 1,
      anon_sym_LBRACK,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_BSLASH,
    ACTIONS(13), 1,
      anon_sym_POUND,
    ACTIONS(15), 1,
      anon_sym_POUND_POUND,
    ACTIONS(17), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(73), 1,
      anon_sym_RBRACE,
    ACTIONS(75), 1,
      sym_comment,
    ACTIONS(77), 1,
      sym_text,
    STATE(3), 48,
      sym__node,
      sym_squares,
      sym_parens,
      sym_title,
      sym_author,
      sym_contributor,
      sym_date,
      sym_tag,
      sym_def,
      sym_alloc,
      sym_taxon,
      sym_meta,
      sym_import,
      sym_export,
      sym_namespace,
      sym_transclude,
      sym_let,
      sym_tex,
      sym_if_tex,
      sym_block,
      sym_scope,
      sym_subtree,
      sym_put,
      sym_get,
      sym_open,
      sym_query_tree,
      sym__default,
      sym_object,
      sym_patch,
      sym_call,
      sym__prim,
      sym_inline_math,
      sym_display_math,
      sym_p,
      sym_em,
      sym_strong,
      sym_li,
      sym_ul,
      sym_ol,
      sym_code,
      sym_blockquote,
      sym_pre,
      sym_ident,
      sym_ident_with_method_calls,
      sym__link,
      sym_markdown_link,
      sym_unlabeled_link,
      aux_sym__arg_repeat1,
  [235] = 10,
    ACTIONS(5), 1,
      anon_sym_LBRACK,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_BSLASH,
    ACTIONS(13), 1,
      anon_sym_POUND,
    ACTIONS(15), 1,
      anon_sym_POUND_POUND,
    ACTIONS(17), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(75), 1,
      sym_comment,
    ACTIONS(77), 1,
      sym_text,
    ACTIONS(79), 1,
      anon_sym_RBRACE,
    STATE(3), 48,
      sym__node,
      sym_squares,
      sym_parens,
      sym_title,
      sym_author,
      sym_contributor,
      sym_date,
      sym_tag,
      sym_def,
      sym_alloc,
      sym_taxon,
      sym_meta,
      sym_import,
      sym_export,
      sym_namespace,
      sym_transclude,
      sym_let,
      sym_tex,
      sym_if_tex,
      sym_block,
      sym_scope,
      sym_subtree,
      sym_put,
      sym_get,
      sym_open,
      sym_query_tree,
      sym__default,
      sym_object,
      sym_patch,
      sym_call,
      sym__prim,
      sym_inline_math,
      sym_display_math,
      sym_p,
      sym_em,
      sym_strong,
      sym_li,
      sym_ul,
      sym_ol,
      sym_code,
      sym_blockquote,
      sym_pre,
      sym_ident,
      sym_ident_with_method_calls,
      sym__link,
      sym_markdown_link,
      sym_unlabeled_link,
      aux_sym__arg_repeat1,
  [313] = 10,
    ACTIONS(5), 1,
      anon_sym_LBRACK,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_BSLASH,
    ACTIONS(13), 1,
      anon_sym_POUND,
    ACTIONS(15), 1,
      anon_sym_POUND_POUND,
    ACTIONS(17), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(81), 1,
      ts_builtin_sym_end,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(85), 1,
      sym_text,
    STATE(9), 48,
      sym__node,
      sym_squares,
      sym_parens,
      sym_title,
      sym_author,
      sym_contributor,
      sym_date,
      sym_tag,
      sym_def,
      sym_alloc,
      sym_taxon,
      sym_meta,
      sym_import,
      sym_export,
      sym_namespace,
      sym_transclude,
      sym_let,
      sym_tex,
      sym_if_tex,
      sym_block,
      sym_scope,
      sym_subtree,
      sym_put,
      sym_get,
      sym_open,
      sym_query_tree,
      sym__default,
      sym_object,
      sym_patch,
      sym_call,
      sym__prim,
      sym_inline_math,
      sym_display_math,
      sym_p,
      sym_em,
      sym_strong,
      sym_li,
      sym_ul,
      sym_ol,
      sym_code,
      sym_blockquote,
      sym_pre,
      sym_ident,
      sym_ident_with_method_calls,
      sym__link,
      sym_markdown_link,
      sym_unlabeled_link,
      aux_sym_source_file_repeat1,
  [391] = 10,
    ACTIONS(5), 1,
      anon_sym_LBRACK,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_BSLASH,
    ACTIONS(13), 1,
      anon_sym_POUND,
    ACTIONS(15), 1,
      anon_sym_POUND_POUND,
    ACTIONS(17), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(87), 1,
      anon_sym_RBRACK,
    ACTIONS(89), 1,
      sym_comment,
    ACTIONS(91), 1,
      sym_text,
    STATE(2), 48,
      sym__node,
      sym_squares,
      sym_parens,
      sym_title,
      sym_author,
      sym_contributor,
      sym_date,
      sym_tag,
      sym_def,
      sym_alloc,
      sym_taxon,
      sym_meta,
      sym_import,
      sym_export,
      sym_namespace,
      sym_transclude,
      sym_let,
      sym_tex,
      sym_if_tex,
      sym_block,
      sym_scope,
      sym_subtree,
      sym_put,
      sym_get,
      sym_open,
      sym_query_tree,
      sym__default,
      sym_object,
      sym_patch,
      sym_call,
      sym__prim,
      sym_inline_math,
      sym_display_math,
      sym_p,
      sym_em,
      sym_strong,
      sym_li,
      sym_ul,
      sym_ol,
      sym_code,
      sym_blockquote,
      sym_pre,
      sym_ident,
      sym_ident_with_method_calls,
      sym__link,
      sym_markdown_link,
      sym_unlabeled_link,
      aux_sym_braces_repeat1,
  [469] = 10,
    ACTIONS(5), 1,
      anon_sym_LBRACK,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_BSLASH,
    ACTIONS(13), 1,
      anon_sym_POUND,
    ACTIONS(15), 1,
      anon_sym_POUND_POUND,
    ACTIONS(17), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(89), 1,
      sym_comment,
    ACTIONS(91), 1,
      sym_text,
    ACTIONS(93), 1,
      anon_sym_RPAREN,
    STATE(2), 48,
      sym__node,
      sym_squares,
      sym_parens,
      sym_title,
      sym_author,
      sym_contributor,
      sym_date,
      sym_tag,
      sym_def,
      sym_alloc,
      sym_taxon,
      sym_meta,
      sym_import,
      sym_export,
      sym_namespace,
      sym_transclude,
      sym_let,
      sym_tex,
      sym_if_tex,
      sym_block,
      sym_scope,
      sym_subtree,
      sym_put,
      sym_get,
      sym_open,
      sym_query_tree,
      sym__default,
      sym_object,
      sym_patch,
      sym_call,
      sym__prim,
      sym_inline_math,
      sym_display_math,
      sym_p,
      sym_em,
      sym_strong,
      sym_li,
      sym_ul,
      sym_ol,
      sym_code,
      sym_blockquote,
      sym_pre,
      sym_ident,
      sym_ident_with_method_calls,
      sym__link,
      sym_markdown_link,
      sym_unlabeled_link,
      aux_sym_braces_repeat1,
  [547] = 10,
    ACTIONS(95), 1,
      ts_builtin_sym_end,
    ACTIONS(97), 1,
      anon_sym_LBRACK,
    ACTIONS(100), 1,
      anon_sym_LPAREN,
    ACTIONS(103), 1,
      anon_sym_BSLASH,
    ACTIONS(106), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_POUND,
    ACTIONS(112), 1,
      anon_sym_POUND_POUND,
    ACTIONS(115), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(118), 1,
      sym_text,
    STATE(9), 48,
      sym__node,
      sym_squares,
      sym_parens,
      sym_title,
      sym_author,
      sym_contributor,
      sym_date,
      sym_tag,
      sym_def,
      sym_alloc,
      sym_taxon,
      sym_meta,
      sym_import,
      sym_export,
      sym_namespace,
      sym_transclude,
      sym_let,
      sym_tex,
      sym_if_tex,
      sym_block,
      sym_scope,
      sym_subtree,
      sym_put,
      sym_get,
      sym_open,
      sym_query_tree,
      sym__default,
      sym_object,
      sym_patch,
      sym_call,
      sym__prim,
      sym_inline_math,
      sym_display_math,
      sym_p,
      sym_em,
      sym_strong,
      sym_li,
      sym_ul,
      sym_ol,
      sym_code,
      sym_blockquote,
      sym_pre,
      sym_ident,
      sym_ident_with_method_calls,
      sym__link,
      sym_markdown_link,
      sym_unlabeled_link,
      aux_sym_source_file_repeat1,
  [625] = 10,
    ACTIONS(5), 1,
      anon_sym_LBRACK,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_BSLASH,
    ACTIONS(13), 1,
      anon_sym_POUND,
    ACTIONS(15), 1,
      anon_sym_POUND_POUND,
    ACTIONS(17), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(75), 1,
      sym_comment,
    ACTIONS(77), 1,
      sym_text,
    ACTIONS(121), 1,
      anon_sym_RBRACE,
    STATE(3), 48,
      sym__node,
      sym_squares,
      sym_parens,
      sym_title,
      sym_author,
      sym_contributor,
      sym_date,
      sym_tag,
      sym_def,
      sym_alloc,
      sym_taxon,
      sym_meta,
      sym_import,
      sym_export,
      sym_namespace,
      sym_transclude,
      sym_let,
      sym_tex,
      sym_if_tex,
      sym_block,
      sym_scope,
      sym_subtree,
      sym_put,
      sym_get,
      sym_open,
      sym_query_tree,
      sym__default,
      sym_object,
      sym_patch,
      sym_call,
      sym__prim,
      sym_inline_math,
      sym_display_math,
      sym_p,
      sym_em,
      sym_strong,
      sym_li,
      sym_ul,
      sym_ol,
      sym_code,
      sym_blockquote,
      sym_pre,
      sym_ident,
      sym_ident_with_method_calls,
      sym__link,
      sym_markdown_link,
      sym_unlabeled_link,
      aux_sym__arg_repeat1,
  [703] = 9,
    ACTIONS(5), 1,
      anon_sym_LBRACK,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_BSLASH,
    ACTIONS(13), 1,
      anon_sym_POUND,
    ACTIONS(15), 1,
      anon_sym_POUND_POUND,
    ACTIONS(17), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(123), 1,
      sym_comment,
    ACTIONS(125), 1,
      sym_text,
    STATE(7), 48,
      sym__node,
      sym_squares,
      sym_parens,
      sym_title,
      sym_author,
      sym_contributor,
      sym_date,
      sym_tag,
      sym_def,
      sym_alloc,
      sym_taxon,
      sym_meta,
      sym_import,
      sym_export,
      sym_namespace,
      sym_transclude,
      sym_let,
      sym_tex,
      sym_if_tex,
      sym_block,
      sym_scope,
      sym_subtree,
      sym_put,
      sym_get,
      sym_open,
      sym_query_tree,
      sym__default,
      sym_object,
      sym_patch,
      sym_call,
      sym__prim,
      sym_inline_math,
      sym_display_math,
      sym_p,
      sym_em,
      sym_strong,
      sym_li,
      sym_ul,
      sym_ol,
      sym_code,
      sym_blockquote,
      sym_pre,
      sym_ident,
      sym_ident_with_method_calls,
      sym__link,
      sym_markdown_link,
      sym_unlabeled_link,
      aux_sym_braces_repeat1,
  [778] = 9,
    ACTIONS(5), 1,
      anon_sym_LBRACK,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_BSLASH,
    ACTIONS(13), 1,
      anon_sym_POUND,
    ACTIONS(15), 1,
      anon_sym_POUND_POUND,
    ACTIONS(17), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(129), 1,
      sym_text,
    STATE(8), 48,
      sym__node,
      sym_squares,
      sym_parens,
      sym_title,
      sym_author,
      sym_contributor,
      sym_date,
      sym_tag,
      sym_def,
      sym_alloc,
      sym_taxon,
      sym_meta,
      sym_import,
      sym_export,
      sym_namespace,
      sym_transclude,
      sym_let,
      sym_tex,
      sym_if_tex,
      sym_block,
      sym_scope,
      sym_subtree,
      sym_put,
      sym_get,
      sym_open,
      sym_query_tree,
      sym__default,
      sym_object,
      sym_patch,
      sym_call,
      sym__prim,
      sym_inline_math,
      sym_display_math,
      sym_p,
      sym_em,
      sym_strong,
      sym_li,
      sym_ul,
      sym_ol,
      sym_code,
      sym_blockquote,
      sym_pre,
      sym_ident,
      sym_ident_with_method_calls,
      sym__link,
      sym_markdown_link,
      sym_unlabeled_link,
      aux_sym_braces_repeat1,
  [853] = 9,
    ACTIONS(5), 1,
      anon_sym_LBRACK,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_BSLASH,
    ACTIONS(13), 1,
      anon_sym_POUND,
    ACTIONS(15), 1,
      anon_sym_POUND_POUND,
    ACTIONS(17), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(131), 1,
      sym_comment,
    ACTIONS(133), 1,
      sym_text,
    STATE(4), 48,
      sym__node,
      sym_squares,
      sym_parens,
      sym_title,
      sym_author,
      sym_contributor,
      sym_date,
      sym_tag,
      sym_def,
      sym_alloc,
      sym_taxon,
      sym_meta,
      sym_import,
      sym_export,
      sym_namespace,
      sym_transclude,
      sym_let,
      sym_tex,
      sym_if_tex,
      sym_block,
      sym_scope,
      sym_subtree,
      sym_put,
      sym_get,
      sym_open,
      sym_query_tree,
      sym__default,
      sym_object,
      sym_patch,
      sym_call,
      sym__prim,
      sym_inline_math,
      sym_display_math,
      sym_p,
      sym_em,
      sym_strong,
      sym_li,
      sym_ul,
      sym_ol,
      sym_code,
      sym_blockquote,
      sym_pre,
      sym_ident,
      sym_ident_with_method_calls,
      sym__link,
      sym_markdown_link,
      sym_unlabeled_link,
      aux_sym__arg_repeat1,
  [928] = 9,
    ACTIONS(5), 1,
      anon_sym_LBRACK,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_BSLASH,
    ACTIONS(13), 1,
      anon_sym_POUND,
    ACTIONS(15), 1,
      anon_sym_POUND_POUND,
    ACTIONS(17), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(135), 1,
      sym_comment,
    ACTIONS(137), 1,
      sym_text,
    STATE(5), 48,
      sym__node,
      sym_squares,
      sym_parens,
      sym_title,
      sym_author,
      sym_contributor,
      sym_date,
      sym_tag,
      sym_def,
      sym_alloc,
      sym_taxon,
      sym_meta,
      sym_import,
      sym_export,
      sym_namespace,
      sym_transclude,
      sym_let,
      sym_tex,
      sym_if_tex,
      sym_block,
      sym_scope,
      sym_subtree,
      sym_put,
      sym_get,
      sym_open,
      sym_query_tree,
      sym__default,
      sym_object,
      sym_patch,
      sym_call,
      sym__prim,
      sym_inline_math,
      sym_display_math,
      sym_p,
      sym_em,
      sym_strong,
      sym_li,
      sym_ul,
      sym_ol,
      sym_code,
      sym_blockquote,
      sym_pre,
      sym_ident,
      sym_ident_with_method_calls,
      sym__link,
      sym_markdown_link,
      sym_unlabeled_link,
      aux_sym__arg_repeat1,
  [1003] = 9,
    ACTIONS(5), 1,
      anon_sym_LBRACK,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_BSLASH,
    ACTIONS(13), 1,
      anon_sym_POUND,
    ACTIONS(15), 1,
      anon_sym_POUND_POUND,
    ACTIONS(17), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(139), 1,
      sym_comment,
    ACTIONS(141), 1,
      sym_text,
    STATE(10), 48,
      sym__node,
      sym_squares,
      sym_parens,
      sym_title,
      sym_author,
      sym_contributor,
      sym_date,
      sym_tag,
      sym_def,
      sym_alloc,
      sym_taxon,
      sym_meta,
      sym_import,
      sym_export,
      sym_namespace,
      sym_transclude,
      sym_let,
      sym_tex,
      sym_if_tex,
      sym_block,
      sym_scope,
      sym_subtree,
      sym_put,
      sym_get,
      sym_open,
      sym_query_tree,
      sym__default,
      sym_object,
      sym_patch,
      sym_call,
      sym__prim,
      sym_inline_math,
      sym_display_math,
      sym_p,
      sym_em,
      sym_strong,
      sym_li,
      sym_ul,
      sym_ol,
      sym_code,
      sym_blockquote,
      sym_pre,
      sym_ident,
      sym_ident_with_method_calls,
      sym__link,
      sym_markdown_link,
      sym_unlabeled_link,
      aux_sym__arg_repeat1,
  [1078] = 36,
    ACTIONS(143), 1,
      anon_sym_title,
    ACTIONS(145), 1,
      anon_sym_author,
    ACTIONS(147), 1,
      anon_sym_contributor,
    ACTIONS(149), 1,
      anon_sym_date,
    ACTIONS(151), 1,
      anon_sym_tag,
    ACTIONS(153), 1,
      anon_sym_def,
    ACTIONS(155), 1,
      anon_sym_alloc,
    ACTIONS(157), 1,
      anon_sym_taxon,
    ACTIONS(159), 1,
      anon_sym_meta,
    ACTIONS(161), 1,
      anon_sym_import,
    ACTIONS(163), 1,
      anon_sym_export,
    ACTIONS(165), 1,
      anon_sym_namespace,
    ACTIONS(167), 1,
      anon_sym_transclude,
    ACTIONS(169), 1,
      anon_sym_let,
    ACTIONS(171), 1,
      anon_sym_tex,
    ACTIONS(173), 1,
      anon_sym_iftex,
    ACTIONS(175), 1,
      anon_sym_block,
    ACTIONS(177), 1,
      anon_sym_scope,
    ACTIONS(179), 1,
      anon_sym_subtree,
    ACTIONS(181), 1,
      anon_sym_put,
    ACTIONS(183), 1,
      anon_sym_get,
    ACTIONS(185), 1,
      anon_sym_open,
    ACTIONS(187), 1,
      anon_sym_query,
    ACTIONS(189), 1,
      anon_sym_object,
    ACTIONS(191), 1,
      anon_sym_patch,
    ACTIONS(193), 1,
      anon_sym_call,
    ACTIONS(195), 1,
      anon_sym_p,
    ACTIONS(197), 1,
      anon_sym_em,
    ACTIONS(199), 1,
      anon_sym_strong,
    ACTIONS(201), 1,
      anon_sym_li,
    ACTIONS(203), 1,
      anon_sym_ul,
    ACTIONS(205), 1,
      anon_sym_ol,
    ACTIONS(207), 1,
      anon_sym_code,
    ACTIONS(209), 1,
      anon_sym_blockquote,
    ACTIONS(211), 1,
      anon_sym_pre,
    ACTIONS(213), 1,
      sym_text,
  [1187] = 10,
    ACTIONS(215), 1,
      anon_sym_LBRACE,
    ACTIONS(217), 1,
      anon_sym_RBRACE,
    ACTIONS(219), 1,
      anon_sym_BSLASHquery_SLASHauthor,
    ACTIONS(221), 1,
      anon_sym_BSLASHquery_SLASHtag,
    ACTIONS(223), 1,
      anon_sym_BSLASHquery_SLASHtaxon,
    ACTIONS(225), 1,
      anon_sym_BSLASHquery_SLASHand,
    ACTIONS(227), 1,
      anon_sym_BSLASHquery_SLASHor,
    ACTIONS(229), 1,
      aux_sym__whitespace_token1,
    STATE(129), 1,
      sym__txt_arg,
    STATE(20), 9,
      sym__query0,
      sym_query_author,
      sym_query_tag,
      sym_query_taxon,
      sym_query_and,
      sym_query_or,
      sym_query_meta,
      sym__whitespace,
      aux_sym_queries_repeat1,
  [1226] = 10,
    ACTIONS(215), 1,
      anon_sym_LBRACE,
    ACTIONS(219), 1,
      anon_sym_BSLASHquery_SLASHauthor,
    ACTIONS(221), 1,
      anon_sym_BSLASHquery_SLASHtag,
    ACTIONS(223), 1,
      anon_sym_BSLASHquery_SLASHtaxon,
    ACTIONS(225), 1,
      anon_sym_BSLASHquery_SLASHand,
    ACTIONS(227), 1,
      anon_sym_BSLASHquery_SLASHor,
    ACTIONS(231), 1,
      aux_sym__whitespace_token1,
    STATE(129), 1,
      sym__txt_arg,
    STATE(165), 1,
      sym_queries,
    STATE(17), 9,
      sym__query0,
      sym_query_author,
      sym_query_tag,
      sym_query_taxon,
      sym_query_and,
      sym_query_or,
      sym_query_meta,
      sym__whitespace,
      aux_sym_queries_repeat1,
  [1265] = 10,
    ACTIONS(215), 1,
      anon_sym_LBRACE,
    ACTIONS(219), 1,
      anon_sym_BSLASHquery_SLASHauthor,
    ACTIONS(221), 1,
      anon_sym_BSLASHquery_SLASHtag,
    ACTIONS(223), 1,
      anon_sym_BSLASHquery_SLASHtaxon,
    ACTIONS(225), 1,
      anon_sym_BSLASHquery_SLASHand,
    ACTIONS(227), 1,
      anon_sym_BSLASHquery_SLASHor,
    ACTIONS(231), 1,
      aux_sym__whitespace_token1,
    STATE(129), 1,
      sym__txt_arg,
    STATE(167), 1,
      sym_queries,
    STATE(17), 9,
      sym__query0,
      sym_query_author,
      sym_query_tag,
      sym_query_taxon,
      sym_query_and,
      sym_query_or,
      sym_query_meta,
      sym__whitespace,
      aux_sym_queries_repeat1,
  [1304] = 10,
    ACTIONS(233), 1,
      anon_sym_LBRACE,
    ACTIONS(236), 1,
      anon_sym_RBRACE,
    ACTIONS(238), 1,
      anon_sym_BSLASHquery_SLASHauthor,
    ACTIONS(241), 1,
      anon_sym_BSLASHquery_SLASHtag,
    ACTIONS(244), 1,
      anon_sym_BSLASHquery_SLASHtaxon,
    ACTIONS(247), 1,
      anon_sym_BSLASHquery_SLASHand,
    ACTIONS(250), 1,
      anon_sym_BSLASHquery_SLASHor,
    ACTIONS(253), 1,
      aux_sym__whitespace_token1,
    STATE(129), 1,
      sym__txt_arg,
    STATE(20), 9,
      sym__query0,
      sym_query_author,
      sym_query_tag,
      sym_query_taxon,
      sym_query_and,
      sym_query_or,
      sym_query_meta,
      sym__whitespace,
      aux_sym_queries_repeat1,
  [1343] = 11,
    ACTIONS(215), 1,
      anon_sym_LBRACE,
    ACTIONS(219), 1,
      anon_sym_BSLASHquery_SLASHauthor,
    ACTIONS(221), 1,
      anon_sym_BSLASHquery_SLASHtag,
    ACTIONS(223), 1,
      anon_sym_BSLASHquery_SLASHtaxon,
    ACTIONS(225), 1,
      anon_sym_BSLASHquery_SLASHand,
    ACTIONS(227), 1,
      anon_sym_BSLASHquery_SLASHor,
    ACTIONS(256), 1,
      aux_sym__whitespace_token1,
    STATE(129), 1,
      sym__txt_arg,
    STATE(195), 1,
      sym__query,
    STATE(22), 2,
      sym__whitespace,
      aux_sym__query_repeat1,
    STATE(108), 7,
      sym__query0,
      sym_query_author,
      sym_query_tag,
      sym_query_taxon,
      sym_query_and,
      sym_query_or,
      sym_query_meta,
  [1384] = 10,
    ACTIONS(215), 1,
      anon_sym_LBRACE,
    ACTIONS(219), 1,
      anon_sym_BSLASHquery_SLASHauthor,
    ACTIONS(221), 1,
      anon_sym_BSLASHquery_SLASHtag,
    ACTIONS(223), 1,
      anon_sym_BSLASHquery_SLASHtaxon,
    ACTIONS(225), 1,
      anon_sym_BSLASHquery_SLASHand,
    ACTIONS(227), 1,
      anon_sym_BSLASHquery_SLASHor,
    ACTIONS(258), 1,
      aux_sym__whitespace_token1,
    STATE(129), 1,
      sym__txt_arg,
    STATE(78), 2,
      sym__whitespace,
      aux_sym__query_repeat1,
    STATE(99), 7,
      sym__query0,
      sym_query_author,
      sym_query_tag,
      sym_query_taxon,
      sym_query_and,
      sym_query_or,
      sym_query_meta,
  [1422] = 5,
    ACTIONS(262), 1,
      anon_sym_LBRACE,
    ACTIONS(266), 1,
      anon_sym_LBRACE_RBRACE,
    ACTIONS(260), 2,
      ts_builtin_sym_end,
      sym_text,
    STATE(26), 2,
      sym__arg,
      aux_sym_ident_repeat1,
    ACTIONS(264), 10,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [1449] = 6,
    ACTIONS(262), 1,
      anon_sym_LBRACE,
    ACTIONS(266), 1,
      anon_sym_LBRACE_RBRACE,
    ACTIONS(268), 1,
      anon_sym_POUND,
    ACTIONS(260), 2,
      ts_builtin_sym_end,
      sym_text,
    STATE(26), 2,
      sym__arg,
      aux_sym_ident_repeat1,
    ACTIONS(264), 9,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [1478] = 4,
    ACTIONS(272), 1,
      anon_sym_LBRACE,
    ACTIONS(270), 2,
      ts_builtin_sym_end,
      sym_text,
    STATE(25), 2,
      sym__arg,
      aux_sym_ident_repeat1,
    ACTIONS(275), 10,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [1502] = 4,
    ACTIONS(262), 1,
      anon_sym_LBRACE,
    ACTIONS(277), 2,
      ts_builtin_sym_end,
      sym_text,
    STATE(25), 2,
      sym__arg,
      aux_sym_ident_repeat1,
    ACTIONS(279), 10,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [1526] = 2,
    ACTIONS(281), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(283), 11,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [1544] = 3,
    STATE(29), 1,
      aux_sym_ident_with_method_calls_repeat1,
    ACTIONS(285), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(287), 10,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [1564] = 5,
    ACTIONS(289), 1,
      ts_builtin_sym_end,
    ACTIONS(293), 1,
      anon_sym_POUND,
    ACTIONS(296), 1,
      sym_text,
    STATE(29), 1,
      aux_sym_ident_with_method_calls_repeat1,
    ACTIONS(291), 9,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [1588] = 2,
    ACTIONS(299), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(301), 10,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [1605] = 2,
    ACTIONS(303), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(305), 10,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [1622] = 2,
    ACTIONS(307), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(309), 10,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [1639] = 2,
    ACTIONS(311), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(313), 10,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [1656] = 2,
    ACTIONS(315), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(317), 10,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [1673] = 2,
    ACTIONS(319), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(321), 10,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [1690] = 2,
    ACTIONS(323), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(325), 10,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [1707] = 2,
    ACTIONS(327), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(329), 10,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [1724] = 2,
    ACTIONS(277), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(279), 10,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [1741] = 2,
    ACTIONS(331), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(333), 10,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [1758] = 2,
    ACTIONS(335), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(337), 10,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [1775] = 2,
    ACTIONS(339), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(341), 10,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [1792] = 2,
    ACTIONS(343), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(345), 10,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [1809] = 2,
    ACTIONS(347), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(349), 10,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [1826] = 2,
    ACTIONS(351), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(353), 10,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [1843] = 2,
    ACTIONS(355), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(357), 10,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [1860] = 2,
    ACTIONS(359), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(361), 10,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [1877] = 2,
    ACTIONS(363), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(365), 10,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [1894] = 2,
    ACTIONS(367), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(369), 10,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [1911] = 2,
    ACTIONS(371), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(373), 10,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [1928] = 2,
    ACTIONS(375), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(377), 10,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [1945] = 2,
    ACTIONS(379), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(381), 10,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [1962] = 2,
    ACTIONS(383), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(385), 10,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [1979] = 2,
    ACTIONS(387), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(389), 10,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [1996] = 2,
    ACTIONS(391), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(393), 10,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2013] = 2,
    ACTIONS(395), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(397), 10,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2030] = 2,
    ACTIONS(399), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(401), 10,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2047] = 2,
    ACTIONS(403), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(405), 10,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2064] = 2,
    ACTIONS(407), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(409), 10,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2081] = 2,
    ACTIONS(411), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(413), 10,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2098] = 2,
    ACTIONS(415), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(417), 10,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2115] = 2,
    ACTIONS(419), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(421), 10,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2132] = 2,
    ACTIONS(423), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(425), 10,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2149] = 2,
    ACTIONS(427), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(429), 10,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2166] = 2,
    ACTIONS(431), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(433), 10,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2183] = 2,
    ACTIONS(435), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(437), 10,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2200] = 2,
    ACTIONS(439), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(441), 10,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2217] = 2,
    ACTIONS(443), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(445), 10,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2234] = 2,
    ACTIONS(447), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(449), 10,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2251] = 2,
    ACTIONS(451), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(453), 10,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2268] = 2,
    ACTIONS(455), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(457), 10,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2285] = 2,
    ACTIONS(459), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(461), 10,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2302] = 2,
    ACTIONS(463), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(465), 10,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2319] = 2,
    ACTIONS(467), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(469), 10,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2336] = 2,
    ACTIONS(471), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(473), 10,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2353] = 2,
    ACTIONS(475), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(477), 10,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2370] = 2,
    ACTIONS(479), 1,
      anon_sym_BSLASH,
    STATE(30), 10,
      sym__prim,
      sym_p,
      sym_em,
      sym_strong,
      sym_li,
      sym_ul,
      sym_ol,
      sym_code,
      sym_blockquote,
      sym_pre,
  [2386] = 2,
    ACTIONS(479), 1,
      anon_sym_BSLASH,
    STATE(41), 10,
      sym__prim,
      sym_p,
      sym_em,
      sym_strong,
      sym_li,
      sym_ul,
      sym_ol,
      sym_code,
      sym_blockquote,
      sym_pre,
  [2402] = 3,
    ACTIONS(483), 1,
      aux_sym__whitespace_token1,
    STATE(78), 2,
      sym__whitespace,
      aux_sym__query_repeat1,
    ACTIONS(481), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASHquery_SLASHauthor,
      anon_sym_BSLASHquery_SLASHtag,
      anon_sym_BSLASHquery_SLASHtaxon,
      anon_sym_BSLASHquery_SLASHand,
      anon_sym_BSLASHquery_SLASHor,
  [2419] = 3,
    ACTIONS(488), 1,
      anon_sym_RBRACK,
    ACTIONS(490), 1,
      sym_text,
    ACTIONS(486), 7,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_BSLASH,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2435] = 2,
    ACTIONS(281), 1,
      aux_sym__whitespace_token1,
    ACTIONS(283), 8,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_BSLASHquery_SLASHauthor,
      anon_sym_BSLASHquery_SLASHtag,
      anon_sym_BSLASHquery_SLASHtaxon,
      anon_sym_BSLASHquery_SLASHand,
      anon_sym_BSLASHquery_SLASHor,
  [2449] = 9,
    ACTIONS(195), 1,
      anon_sym_p,
    ACTIONS(492), 1,
      anon_sym_em,
    ACTIONS(494), 1,
      anon_sym_strong,
    ACTIONS(496), 1,
      anon_sym_li,
    ACTIONS(498), 1,
      anon_sym_ul,
    ACTIONS(500), 1,
      anon_sym_ol,
    ACTIONS(502), 1,
      anon_sym_code,
    ACTIONS(504), 1,
      anon_sym_blockquote,
    ACTIONS(506), 1,
      anon_sym_pre,
  [2477] = 2,
    ACTIONS(510), 1,
      aux_sym__whitespace_token1,
    ACTIONS(508), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASHquery_SLASHauthor,
      anon_sym_BSLASHquery_SLASHtag,
      anon_sym_BSLASHquery_SLASHtaxon,
      anon_sym_BSLASHquery_SLASHand,
      anon_sym_BSLASHquery_SLASHor,
  [2490] = 2,
    ACTIONS(514), 1,
      aux_sym__whitespace_token1,
    ACTIONS(512), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASHquery_SLASHauthor,
      anon_sym_BSLASHquery_SLASHtag,
      anon_sym_BSLASHquery_SLASHtaxon,
      anon_sym_BSLASHquery_SLASHand,
      anon_sym_BSLASHquery_SLASHor,
  [2503] = 2,
    ACTIONS(518), 1,
      aux_sym__whitespace_token1,
    ACTIONS(516), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASHquery_SLASHauthor,
      anon_sym_BSLASHquery_SLASHtag,
      anon_sym_BSLASHquery_SLASHtaxon,
      anon_sym_BSLASHquery_SLASHand,
      anon_sym_BSLASHquery_SLASHor,
  [2516] = 2,
    ACTIONS(522), 1,
      aux_sym__whitespace_token1,
    ACTIONS(520), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASHquery_SLASHauthor,
      anon_sym_BSLASHquery_SLASHtag,
      anon_sym_BSLASHquery_SLASHtaxon,
      anon_sym_BSLASHquery_SLASHand,
      anon_sym_BSLASHquery_SLASHor,
  [2529] = 3,
    STATE(88), 1,
      aux_sym_id_repeat1,
    ACTIONS(524), 3,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_RBRACK_RBRACK,
    ACTIONS(526), 4,
      anon_sym_DASH,
      anon_sym__,
      sym__alpha,
      sym__digit,
  [2544] = 2,
    ACTIONS(530), 1,
      aux_sym__whitespace_token1,
    ACTIONS(528), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASHquery_SLASHauthor,
      anon_sym_BSLASHquery_SLASHtag,
      anon_sym_BSLASHquery_SLASHtaxon,
      anon_sym_BSLASHquery_SLASHand,
      anon_sym_BSLASHquery_SLASHor,
  [2557] = 3,
    STATE(88), 1,
      aux_sym_id_repeat1,
    ACTIONS(532), 3,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_RBRACK_RBRACK,
    ACTIONS(534), 4,
      anon_sym_DASH,
      anon_sym__,
      sym__alpha,
      sym__digit,
  [2572] = 2,
    ACTIONS(539), 1,
      aux_sym__whitespace_token1,
    ACTIONS(537), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASHquery_SLASHauthor,
      anon_sym_BSLASHquery_SLASHtag,
      anon_sym_BSLASHquery_SLASHtaxon,
      anon_sym_BSLASHquery_SLASHand,
      anon_sym_BSLASHquery_SLASHor,
  [2585] = 4,
    ACTIONS(541), 1,
      anon_sym_RBRACE,
    ACTIONS(543), 1,
      anon_sym_LBRACK,
    ACTIONS(545), 1,
      aux_sym__whitespace_token1,
    STATE(91), 3,
      sym_method_decl,
      sym__whitespace,
      aux_sym_object_repeat1,
  [2600] = 4,
    ACTIONS(547), 1,
      anon_sym_RBRACE,
    ACTIONS(549), 1,
      anon_sym_LBRACK,
    ACTIONS(552), 1,
      aux_sym__whitespace_token1,
    STATE(91), 3,
      sym_method_decl,
      sym__whitespace,
      aux_sym_object_repeat1,
  [2615] = 4,
    ACTIONS(543), 1,
      anon_sym_LBRACK,
    ACTIONS(545), 1,
      aux_sym__whitespace_token1,
    ACTIONS(555), 1,
      anon_sym_RBRACE,
    STATE(91), 3,
      sym_method_decl,
      sym__whitespace,
      aux_sym_object_repeat1,
  [2630] = 3,
    STATE(86), 1,
      aux_sym_id_repeat1,
    STATE(114), 1,
      sym_id,
    ACTIONS(557), 4,
      anon_sym_DASH,
      anon_sym__,
      sym__alpha,
      sym__digit,
  [2643] = 5,
    ACTIONS(559), 1,
      sym__alpha,
    ACTIONS(561), 1,
      sym_text,
    STATE(117), 1,
      aux_sym_prefix_repeat1,
    STATE(169), 1,
      sym_prefix,
    STATE(168), 2,
      sym_addr,
      sym_external_link,
  [2660] = 3,
    ACTIONS(543), 1,
      anon_sym_LBRACK,
    ACTIONS(563), 1,
      aux_sym__whitespace_token1,
    STATE(90), 3,
      sym_method_decl,
      sym__whitespace,
      aux_sym_object_repeat1,
  [2672] = 3,
    ACTIONS(543), 1,
      anon_sym_LBRACK,
    ACTIONS(565), 1,
      aux_sym__whitespace_token1,
    STATE(92), 3,
      sym_method_decl,
      sym__whitespace,
      aux_sym_object_repeat1,
  [2684] = 5,
    ACTIONS(559), 1,
      sym__alpha,
    ACTIONS(567), 1,
      sym_text,
    STATE(117), 1,
      aux_sym_prefix_repeat1,
    STATE(169), 1,
      sym_prefix,
    STATE(186), 1,
      sym_addr,
  [2700] = 4,
    ACTIONS(260), 1,
      anon_sym_LBRACK,
    ACTIONS(264), 1,
      anon_sym_LBRACE,
    ACTIONS(569), 1,
      anon_sym_LBRACE_RBRACE,
    STATE(106), 2,
      sym__arg,
      aux_sym_ident_repeat1,
  [2714] = 3,
    ACTIONS(571), 1,
      anon_sym_RBRACE,
    ACTIONS(573), 1,
      aux_sym__whitespace_token1,
    STATE(102), 2,
      sym__whitespace,
      aux_sym__query_repeat1,
  [2725] = 4,
    ACTIONS(575), 1,
      sym__alpha,
    STATE(117), 1,
      aux_sym_prefix_repeat1,
    STATE(169), 1,
      sym_prefix,
    STATE(202), 1,
      sym_addr,
  [2738] = 3,
    ACTIONS(258), 1,
      aux_sym__whitespace_token1,
    ACTIONS(571), 1,
      anon_sym_RBRACE,
    STATE(78), 2,
      sym__whitespace,
      aux_sym__query_repeat1,
  [2749] = 3,
    ACTIONS(258), 1,
      aux_sym__whitespace_token1,
    ACTIONS(577), 1,
      anon_sym_RBRACE,
    STATE(78), 2,
      sym__whitespace,
      aux_sym__query_repeat1,
  [2760] = 4,
    ACTIONS(579), 1,
      anon_sym_LBRACE,
    ACTIONS(581), 1,
      anon_sym_LBRACK,
    STATE(52), 1,
      sym__arg,
    STATE(110), 1,
      aux_sym_fun_spec_repeat1,
  [2773] = 4,
    ACTIONS(575), 1,
      sym__alpha,
    STATE(117), 1,
      aux_sym_prefix_repeat1,
    STATE(169), 1,
      sym_prefix,
    STATE(181), 1,
      sym_addr,
  [2786] = 4,
    ACTIONS(575), 1,
      sym__alpha,
    STATE(117), 1,
      aux_sym_prefix_repeat1,
    STATE(169), 1,
      sym_prefix,
    STATE(185), 1,
      sym_addr,
  [2799] = 2,
    ACTIONS(277), 2,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
    STATE(107), 2,
      sym__arg,
      aux_sym_ident_repeat1,
  [2808] = 3,
    ACTIONS(270), 1,
      anon_sym_LBRACK,
    ACTIONS(583), 1,
      anon_sym_LBRACE,
    STATE(107), 2,
      sym__arg,
      aux_sym_ident_repeat1,
  [2819] = 3,
    ACTIONS(586), 1,
      anon_sym_RBRACE,
    ACTIONS(588), 1,
      aux_sym__whitespace_token1,
    STATE(101), 2,
      sym__whitespace,
      aux_sym__query_repeat1,
  [2830] = 4,
    ACTIONS(579), 1,
      anon_sym_LBRACE,
    ACTIONS(581), 1,
      anon_sym_LBRACK,
    STATE(35), 1,
      sym__arg,
    STATE(103), 1,
      aux_sym_fun_spec_repeat1,
  [2843] = 3,
    ACTIONS(590), 1,
      anon_sym_LBRACE,
    ACTIONS(592), 1,
      anon_sym_LBRACK,
    STATE(110), 1,
      aux_sym_fun_spec_repeat1,
  [2853] = 3,
    ACTIONS(595), 1,
      anon_sym_DASH,
    ACTIONS(597), 1,
      sym__alpha,
    STATE(111), 1,
      aux_sym_prefix_repeat1,
  [2863] = 2,
    ACTIONS(602), 1,
      aux_sym__whitespace_token1,
    ACTIONS(600), 2,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
  [2871] = 3,
    ACTIONS(604), 1,
      anon_sym_POUND,
    ACTIONS(606), 1,
      sym_text,
    STATE(28), 1,
      aux_sym_ident_with_method_calls_repeat1,
  [2881] = 1,
    ACTIONS(608), 3,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_RBRACK_RBRACK,
  [2887] = 3,
    ACTIONS(610), 1,
      anon_sym_BSLASH,
    STATE(72), 1,
      sym_fun_spec,
    STATE(109), 1,
      sym_ident,
  [2897] = 3,
    ACTIONS(610), 1,
      anon_sym_BSLASH,
    STATE(71), 1,
      sym_fun_spec,
    STATE(109), 1,
      sym_ident,
  [2907] = 3,
    ACTIONS(612), 1,
      anon_sym_DASH,
    ACTIONS(614), 1,
      sym__alpha,
    STATE(111), 1,
      aux_sym_prefix_repeat1,
  [2917] = 2,
    ACTIONS(616), 1,
      anon_sym_LBRACE,
    STATE(69), 1,
      sym__txt_arg,
  [2924] = 2,
    ACTIONS(579), 1,
      anon_sym_LBRACE,
    STATE(73), 1,
      sym__arg,
  [2931] = 2,
    ACTIONS(579), 1,
      anon_sym_LBRACE,
    STATE(56), 1,
      sym__arg,
  [2938] = 2,
    ACTIONS(579), 1,
      anon_sym_LBRACE,
    STATE(68), 1,
      sym__arg,
  [2945] = 2,
    ACTIONS(618), 1,
      anon_sym_LBRACE,
    STATE(87), 1,
      sym__arg,
  [2952] = 2,
    ACTIONS(618), 1,
      anon_sym_LBRACE,
    STATE(84), 1,
      sym__arg,
  [2959] = 2,
    ACTIONS(618), 1,
      anon_sym_LBRACE,
    STATE(85), 1,
      sym__arg,
  [2966] = 2,
    ACTIONS(620), 1,
      anon_sym_LBRACE,
    STATE(148), 1,
      sym__arg,
  [2973] = 2,
    ACTIONS(620), 1,
      anon_sym_LBRACE,
    STATE(147), 1,
      sym__arg,
  [2980] = 1,
    ACTIONS(281), 2,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
  [2985] = 2,
    ACTIONS(579), 1,
      anon_sym_LBRACE,
    STATE(59), 1,
      sym__arg,
  [2992] = 2,
    ACTIONS(618), 1,
      anon_sym_LBRACE,
    STATE(89), 1,
      sym__arg,
  [2999] = 2,
    ACTIONS(579), 1,
      anon_sym_LBRACE,
    STATE(64), 1,
      sym__arg,
  [3006] = 2,
    ACTIONS(579), 1,
      anon_sym_LBRACE,
    STATE(58), 1,
      sym__arg,
  [3013] = 1,
    ACTIONS(277), 2,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
  [3018] = 2,
    ACTIONS(610), 1,
      anon_sym_BSLASH,
    STATE(146), 1,
      sym_ident,
  [3025] = 2,
    ACTIONS(622), 1,
      anon_sym_LBRACE,
    STATE(149), 1,
      sym__txt_arg,
  [3032] = 2,
    ACTIONS(624), 1,
      anon_sym_LBRACE,
    STATE(75), 1,
      sym__txt_arg,
  [3039] = 2,
    ACTIONS(626), 1,
      anon_sym_BSLASH,
    STATE(74), 1,
      sym_ident,
  [3046] = 2,
    ACTIONS(626), 1,
      anon_sym_BSLASH,
    STATE(54), 1,
      sym_ident,
  [3053] = 2,
    ACTIONS(618), 1,
      anon_sym_LBRACE,
    STATE(112), 1,
      sym__arg,
  [3060] = 2,
    ACTIONS(626), 1,
      anon_sym_BSLASH,
    STATE(53), 1,
      sym_ident,
  [3067] = 2,
    ACTIONS(620), 1,
      anon_sym_LBRACE,
    STATE(176), 1,
      sym__arg,
  [3074] = 2,
    ACTIONS(579), 1,
      anon_sym_LBRACE,
    STATE(51), 1,
      sym__arg,
  [3081] = 2,
    ACTIONS(579), 1,
      anon_sym_LBRACE,
    STATE(49), 1,
      sym__arg,
  [3088] = 2,
    ACTIONS(579), 1,
      anon_sym_LBRACE,
    STATE(55), 1,
      sym__arg,
  [3095] = 2,
    ACTIONS(579), 1,
      anon_sym_LBRACE,
    STATE(31), 1,
      sym__arg,
  [3102] = 2,
    ACTIONS(624), 1,
      anon_sym_LBRACE,
    STATE(66), 1,
      sym__txt_arg,
  [3109] = 2,
    ACTIONS(579), 1,
      anon_sym_LBRACE,
    STATE(48), 1,
      sym__arg,
  [3116] = 2,
    ACTIONS(579), 1,
      anon_sym_LBRACE,
    STATE(32), 1,
      sym__arg,
  [3123] = 2,
    ACTIONS(579), 1,
      anon_sym_LBRACE,
    STATE(33), 1,
      sym__arg,
  [3130] = 2,
    ACTIONS(579), 1,
      anon_sym_LBRACE,
    STATE(34), 1,
      sym__arg,
  [3137] = 2,
    ACTIONS(579), 1,
      anon_sym_LBRACE,
    STATE(47), 1,
      sym__arg,
  [3144] = 2,
    ACTIONS(628), 1,
      sym_year,
    ACTIONS(630), 1,
      sym_text,
  [3151] = 2,
    ACTIONS(624), 1,
      anon_sym_LBRACE,
    STATE(70), 1,
      sym__txt_arg,
  [3158] = 2,
    ACTIONS(632), 1,
      aux_sym_day_token1,
    STATE(179), 1,
      sym_day,
  [3165] = 2,
    ACTIONS(579), 1,
      anon_sym_LBRACE,
    STATE(46), 1,
      sym__arg,
  [3172] = 2,
    ACTIONS(579), 1,
      anon_sym_LBRACE,
    STATE(45), 1,
      sym__arg,
  [3179] = 2,
    ACTIONS(624), 1,
      anon_sym_LBRACE,
    STATE(67), 1,
      sym__txt_arg,
  [3186] = 1,
    ACTIONS(634), 2,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
  [3191] = 2,
    ACTIONS(579), 1,
      anon_sym_LBRACE,
    STATE(44), 1,
      sym__arg,
  [3198] = 2,
    ACTIONS(579), 1,
      anon_sym_LBRACE,
    STATE(42), 1,
      sym__arg,
  [3205] = 1,
    ACTIONS(636), 1,
      anon_sym_RBRACE,
  [3209] = 1,
    ACTIONS(638), 1,
      sym_month,
  [3213] = 1,
    ACTIONS(640), 1,
      anon_sym_RBRACK,
  [3217] = 1,
    ACTIONS(642), 1,
      anon_sym_DASH,
  [3221] = 1,
    ACTIONS(644), 1,
      anon_sym_LBRACE,
  [3225] = 1,
    ACTIONS(646), 1,
      anon_sym_RBRACE,
  [3229] = 1,
    ACTIONS(648), 1,
      anon_sym_RBRACK_RBRACK,
  [3233] = 1,
    ACTIONS(650), 1,
      anon_sym_RBRACE,
  [3237] = 1,
    ACTIONS(652), 1,
      anon_sym_RBRACK_RBRACK,
  [3241] = 1,
    ACTIONS(654), 1,
      anon_sym_DASH,
  [3245] = 1,
    ACTIONS(656), 1,
      anon_sym_LBRACE,
  [3249] = 1,
    ACTIONS(658), 1,
      anon_sym_LPAREN,
  [3253] = 1,
    ACTIONS(660), 1,
      sym_text,
  [3257] = 1,
    ACTIONS(662), 1,
      sym_text,
  [3261] = 1,
    ACTIONS(664), 1,
      sym_text,
  [3265] = 1,
    ACTIONS(666), 1,
      sym_text,
  [3269] = 1,
    ACTIONS(668), 1,
      anon_sym_LBRACK,
  [3273] = 1,
    ACTIONS(670), 1,
      anon_sym_RBRACK,
  [3277] = 1,
    ACTIONS(672), 1,
      aux_sym_day_token2,
  [3281] = 1,
    ACTIONS(674), 1,
      anon_sym_RBRACE,
  [3285] = 1,
    ACTIONS(676), 1,
      anon_sym_RBRACK,
  [3289] = 1,
    ACTIONS(678), 1,
      anon_sym_RBRACE,
  [3293] = 1,
    ACTIONS(680), 1,
      anon_sym_LBRACK,
  [3297] = 1,
    ACTIONS(682), 1,
      anon_sym_LBRACE,
  [3301] = 1,
    ACTIONS(684), 1,
      anon_sym_RBRACE,
  [3305] = 1,
    ACTIONS(686), 1,
      anon_sym_RBRACE,
  [3309] = 1,
    ACTIONS(688), 1,
      anon_sym_RPAREN,
  [3313] = 1,
    ACTIONS(690), 1,
      anon_sym_DASH,
  [3317] = 1,
    ACTIONS(692), 1,
      sym_text,
  [3321] = 1,
    ACTIONS(694), 1,
      anon_sym_LBRACE,
  [3325] = 1,
    ACTIONS(696), 1,
      sym_text,
  [3329] = 1,
    ACTIONS(698), 1,
      anon_sym_RBRACK,
  [3333] = 1,
    ACTIONS(700), 1,
      anon_sym_LBRACE,
  [3337] = 1,
    ACTIONS(702), 1,
      anon_sym_LBRACE,
  [3341] = 1,
    ACTIONS(327), 1,
      anon_sym_LBRACE,
  [3345] = 1,
    ACTIONS(704), 1,
      anon_sym_RBRACE,
  [3349] = 1,
    ACTIONS(706), 1,
      sym_text,
  [3353] = 1,
    ACTIONS(708), 1,
      anon_sym_LBRACE,
  [3357] = 1,
    ACTIONS(710), 1,
      anon_sym_RBRACE,
  [3361] = 1,
    ACTIONS(712), 1,
      ts_builtin_sym_end,
  [3365] = 1,
    ACTIONS(714), 1,
      anon_sym_LBRACE,
  [3369] = 1,
    ACTIONS(716), 1,
      sym_text,
  [3373] = 1,
    ACTIONS(718), 1,
      anon_sym_RBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 79,
  [SMALL_STATE(4)] = 157,
  [SMALL_STATE(5)] = 235,
  [SMALL_STATE(6)] = 313,
  [SMALL_STATE(7)] = 391,
  [SMALL_STATE(8)] = 469,
  [SMALL_STATE(9)] = 547,
  [SMALL_STATE(10)] = 625,
  [SMALL_STATE(11)] = 703,
  [SMALL_STATE(12)] = 778,
  [SMALL_STATE(13)] = 853,
  [SMALL_STATE(14)] = 928,
  [SMALL_STATE(15)] = 1003,
  [SMALL_STATE(16)] = 1078,
  [SMALL_STATE(17)] = 1187,
  [SMALL_STATE(18)] = 1226,
  [SMALL_STATE(19)] = 1265,
  [SMALL_STATE(20)] = 1304,
  [SMALL_STATE(21)] = 1343,
  [SMALL_STATE(22)] = 1384,
  [SMALL_STATE(23)] = 1422,
  [SMALL_STATE(24)] = 1449,
  [SMALL_STATE(25)] = 1478,
  [SMALL_STATE(26)] = 1502,
  [SMALL_STATE(27)] = 1526,
  [SMALL_STATE(28)] = 1544,
  [SMALL_STATE(29)] = 1564,
  [SMALL_STATE(30)] = 1588,
  [SMALL_STATE(31)] = 1605,
  [SMALL_STATE(32)] = 1622,
  [SMALL_STATE(33)] = 1639,
  [SMALL_STATE(34)] = 1656,
  [SMALL_STATE(35)] = 1673,
  [SMALL_STATE(36)] = 1690,
  [SMALL_STATE(37)] = 1707,
  [SMALL_STATE(38)] = 1724,
  [SMALL_STATE(39)] = 1741,
  [SMALL_STATE(40)] = 1758,
  [SMALL_STATE(41)] = 1775,
  [SMALL_STATE(42)] = 1792,
  [SMALL_STATE(43)] = 1809,
  [SMALL_STATE(44)] = 1826,
  [SMALL_STATE(45)] = 1843,
  [SMALL_STATE(46)] = 1860,
  [SMALL_STATE(47)] = 1877,
  [SMALL_STATE(48)] = 1894,
  [SMALL_STATE(49)] = 1911,
  [SMALL_STATE(50)] = 1928,
  [SMALL_STATE(51)] = 1945,
  [SMALL_STATE(52)] = 1962,
  [SMALL_STATE(53)] = 1979,
  [SMALL_STATE(54)] = 1996,
  [SMALL_STATE(55)] = 2013,
  [SMALL_STATE(56)] = 2030,
  [SMALL_STATE(57)] = 2047,
  [SMALL_STATE(58)] = 2064,
  [SMALL_STATE(59)] = 2081,
  [SMALL_STATE(60)] = 2098,
  [SMALL_STATE(61)] = 2115,
  [SMALL_STATE(62)] = 2132,
  [SMALL_STATE(63)] = 2149,
  [SMALL_STATE(64)] = 2166,
  [SMALL_STATE(65)] = 2183,
  [SMALL_STATE(66)] = 2200,
  [SMALL_STATE(67)] = 2217,
  [SMALL_STATE(68)] = 2234,
  [SMALL_STATE(69)] = 2251,
  [SMALL_STATE(70)] = 2268,
  [SMALL_STATE(71)] = 2285,
  [SMALL_STATE(72)] = 2302,
  [SMALL_STATE(73)] = 2319,
  [SMALL_STATE(74)] = 2336,
  [SMALL_STATE(75)] = 2353,
  [SMALL_STATE(76)] = 2370,
  [SMALL_STATE(77)] = 2386,
  [SMALL_STATE(78)] = 2402,
  [SMALL_STATE(79)] = 2419,
  [SMALL_STATE(80)] = 2435,
  [SMALL_STATE(81)] = 2449,
  [SMALL_STATE(82)] = 2477,
  [SMALL_STATE(83)] = 2490,
  [SMALL_STATE(84)] = 2503,
  [SMALL_STATE(85)] = 2516,
  [SMALL_STATE(86)] = 2529,
  [SMALL_STATE(87)] = 2544,
  [SMALL_STATE(88)] = 2557,
  [SMALL_STATE(89)] = 2572,
  [SMALL_STATE(90)] = 2585,
  [SMALL_STATE(91)] = 2600,
  [SMALL_STATE(92)] = 2615,
  [SMALL_STATE(93)] = 2630,
  [SMALL_STATE(94)] = 2643,
  [SMALL_STATE(95)] = 2660,
  [SMALL_STATE(96)] = 2672,
  [SMALL_STATE(97)] = 2684,
  [SMALL_STATE(98)] = 2700,
  [SMALL_STATE(99)] = 2714,
  [SMALL_STATE(100)] = 2725,
  [SMALL_STATE(101)] = 2738,
  [SMALL_STATE(102)] = 2749,
  [SMALL_STATE(103)] = 2760,
  [SMALL_STATE(104)] = 2773,
  [SMALL_STATE(105)] = 2786,
  [SMALL_STATE(106)] = 2799,
  [SMALL_STATE(107)] = 2808,
  [SMALL_STATE(108)] = 2819,
  [SMALL_STATE(109)] = 2830,
  [SMALL_STATE(110)] = 2843,
  [SMALL_STATE(111)] = 2853,
  [SMALL_STATE(112)] = 2863,
  [SMALL_STATE(113)] = 2871,
  [SMALL_STATE(114)] = 2881,
  [SMALL_STATE(115)] = 2887,
  [SMALL_STATE(116)] = 2897,
  [SMALL_STATE(117)] = 2907,
  [SMALL_STATE(118)] = 2917,
  [SMALL_STATE(119)] = 2924,
  [SMALL_STATE(120)] = 2931,
  [SMALL_STATE(121)] = 2938,
  [SMALL_STATE(122)] = 2945,
  [SMALL_STATE(123)] = 2952,
  [SMALL_STATE(124)] = 2959,
  [SMALL_STATE(125)] = 2966,
  [SMALL_STATE(126)] = 2973,
  [SMALL_STATE(127)] = 2980,
  [SMALL_STATE(128)] = 2985,
  [SMALL_STATE(129)] = 2992,
  [SMALL_STATE(130)] = 2999,
  [SMALL_STATE(131)] = 3006,
  [SMALL_STATE(132)] = 3013,
  [SMALL_STATE(133)] = 3018,
  [SMALL_STATE(134)] = 3025,
  [SMALL_STATE(135)] = 3032,
  [SMALL_STATE(136)] = 3039,
  [SMALL_STATE(137)] = 3046,
  [SMALL_STATE(138)] = 3053,
  [SMALL_STATE(139)] = 3060,
  [SMALL_STATE(140)] = 3067,
  [SMALL_STATE(141)] = 3074,
  [SMALL_STATE(142)] = 3081,
  [SMALL_STATE(143)] = 3088,
  [SMALL_STATE(144)] = 3095,
  [SMALL_STATE(145)] = 3102,
  [SMALL_STATE(146)] = 3109,
  [SMALL_STATE(147)] = 3116,
  [SMALL_STATE(148)] = 3123,
  [SMALL_STATE(149)] = 3130,
  [SMALL_STATE(150)] = 3137,
  [SMALL_STATE(151)] = 3144,
  [SMALL_STATE(152)] = 3151,
  [SMALL_STATE(153)] = 3158,
  [SMALL_STATE(154)] = 3165,
  [SMALL_STATE(155)] = 3172,
  [SMALL_STATE(156)] = 3179,
  [SMALL_STATE(157)] = 3186,
  [SMALL_STATE(158)] = 3191,
  [SMALL_STATE(159)] = 3198,
  [SMALL_STATE(160)] = 3205,
  [SMALL_STATE(161)] = 3209,
  [SMALL_STATE(162)] = 3213,
  [SMALL_STATE(163)] = 3217,
  [SMALL_STATE(164)] = 3221,
  [SMALL_STATE(165)] = 3225,
  [SMALL_STATE(166)] = 3229,
  [SMALL_STATE(167)] = 3233,
  [SMALL_STATE(168)] = 3237,
  [SMALL_STATE(169)] = 3241,
  [SMALL_STATE(170)] = 3245,
  [SMALL_STATE(171)] = 3249,
  [SMALL_STATE(172)] = 3253,
  [SMALL_STATE(173)] = 3257,
  [SMALL_STATE(174)] = 3261,
  [SMALL_STATE(175)] = 3265,
  [SMALL_STATE(176)] = 3269,
  [SMALL_STATE(177)] = 3273,
  [SMALL_STATE(178)] = 3277,
  [SMALL_STATE(179)] = 3281,
  [SMALL_STATE(180)] = 3285,
  [SMALL_STATE(181)] = 3289,
  [SMALL_STATE(182)] = 3293,
  [SMALL_STATE(183)] = 3297,
  [SMALL_STATE(184)] = 3301,
  [SMALL_STATE(185)] = 3305,
  [SMALL_STATE(186)] = 3309,
  [SMALL_STATE(187)] = 3313,
  [SMALL_STATE(188)] = 3317,
  [SMALL_STATE(189)] = 3321,
  [SMALL_STATE(190)] = 3325,
  [SMALL_STATE(191)] = 3329,
  [SMALL_STATE(192)] = 3333,
  [SMALL_STATE(193)] = 3337,
  [SMALL_STATE(194)] = 3341,
  [SMALL_STATE(195)] = 3345,
  [SMALL_STATE(196)] = 3349,
  [SMALL_STATE(197)] = 3353,
  [SMALL_STATE(198)] = 3357,
  [SMALL_STATE(199)] = 3361,
  [SMALL_STATE(200)] = 3365,
  [SMALL_STATE(201)] = 3369,
  [SMALL_STATE(202)] = 3373,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_braces_repeat1, 2), SHIFT_REPEAT(11),
  [24] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_braces_repeat1, 2),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_braces_repeat1, 2), SHIFT_REPEAT(12),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_braces_repeat1, 2), SHIFT_REPEAT(16),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_braces_repeat1, 2), SHIFT_REPEAT(2),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_braces_repeat1, 2), SHIFT_REPEAT(143),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_braces_repeat1, 2), SHIFT_REPEAT(120),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_braces_repeat1, 2), SHIFT_REPEAT(94),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_braces_repeat1, 2), SHIFT_REPEAT(2),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__arg_repeat1, 2),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__arg_repeat1, 2), SHIFT_REPEAT(11),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__arg_repeat1, 2), SHIFT_REPEAT(12),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__arg_repeat1, 2), SHIFT_REPEAT(16),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__arg_repeat1, 2), SHIFT_REPEAT(3),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__arg_repeat1, 2), SHIFT_REPEAT(143),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__arg_repeat1, 2), SHIFT_REPEAT(120),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__arg_repeat1, 2), SHIFT_REPEAT(94),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__arg_repeat1, 2), SHIFT_REPEAT(3),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(11),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(12),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(16),
  [106] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(143),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(120),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(94),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_queries, 1),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [233] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_queries_repeat1, 2), SHIFT_REPEAT(201),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_queries_repeat1, 2),
  [238] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_queries_repeat1, 2), SHIFT_REPEAT(122),
  [241] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_queries_repeat1, 2), SHIFT_REPEAT(123),
  [244] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_queries_repeat1, 2), SHIFT_REPEAT(124),
  [247] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_queries_repeat1, 2), SHIFT_REPEAT(200),
  [250] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_queries_repeat1, 2), SHIFT_REPEAT(197),
  [253] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_queries_repeat1, 2), SHIFT_REPEAT(20),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ident, 2, .production_id = 1),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ident, 2, .production_id = 1),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ident_repeat1, 2),
  [272] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ident_repeat1, 2), SHIFT_REPEAT(15),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ident_repeat1, 2),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ident, 3, .production_id = 1),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ident, 3, .production_id = 1),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__arg, 3),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__arg, 3),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ident_with_method_calls, 4),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ident_with_method_calls, 4),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ident_with_method_calls_repeat1, 2),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ident_with_method_calls_repeat1, 2),
  [293] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ident_with_method_calls_repeat1, 2), SHIFT_REPEAT(29),
  [296] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ident_with_method_calls_repeat1, 2), SHIFT_REPEAT(29),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pre, 3),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pre, 3),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_em, 3),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_em, 3),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 4),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_tex, 4),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_tex, 4),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta, 4),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_meta, 4),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fun_spec, 2, .production_id = 6),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fun_spec, 2, .production_id = 6),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unlabeled_link, 3),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unlabeled_link, 3),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__txt_arg, 3),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__txt_arg, 3),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_patch, 9, .production_id = 15),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_patch, 9, .production_id = 15),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 9, .production_id = 14),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_date, 9, .production_id = 14),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_blockquote, 3),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_blockquote, 3),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 3),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 3),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 8, .production_id = 13),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 8, .production_id = 13),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ol, 3),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ol, 3),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ul, 3),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ul, 3),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_li, 3),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_li, 3),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_strong, 3),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_strong, 3),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_put, 4, .production_id = 7),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_put, 4, .production_id = 7),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_p, 3),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_p, 3),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_markdown_link, 6, .production_id = 12),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_markdown_link, 6, .production_id = 12),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 3),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 3),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fun_spec, 3, .production_id = 9),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fun_spec, 3, .production_id = 9),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 3),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_open, 3),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_get, 3),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_get, 3),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_math, 2),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_math, 2),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_display_math, 2),
  [401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_display_math, 2),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 5),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import, 5),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subtree, 3),
  [409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subtree, 3),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scope, 3),
  [413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scope, 3),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 5),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_export, 5),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_tree, 5),
  [421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_tree, 5),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_squares, 3),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_squares, 3),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parens, 3),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parens, 3),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title, 3),
  [433] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title, 3),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transclude, 5, .production_id = 10),
  [437] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transclude, 5, .production_id = 10),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_author, 3, .production_id = 2),
  [441] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_author, 3, .production_id = 2),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contributor, 3, .production_id = 3),
  [445] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_contributor, 3, .production_id = 3),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tex, 3),
  [449] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tex, 3),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 3, .production_id = 4),
  [453] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_date, 3, .production_id = 4),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3, .production_id = 5),
  [457] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 3, .production_id = 5),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let, 3),
  [461] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let, 3),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def, 3),
  [465] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_def, 3),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace, 3),
  [469] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace, 3),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alloc, 3),
  [473] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alloc, 3),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_taxon, 3),
  [477] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_taxon, 3),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [481] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__query_repeat1, 2),
  [483] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__query_repeat1, 2), SHIFT_REPEAT(78),
  [486] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__node, 1),
  [488] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__node, 1),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [508] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_or, 4),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_or, 4),
  [512] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_and, 4),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_and, 4),
  [516] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_tag, 2),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_tag, 2),
  [520] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_taxon, 2),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_taxon, 2),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id, 1),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [528] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_author, 2),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_author, 2),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_id_repeat1, 2),
  [534] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_id_repeat1, 2), SHIFT_REPEAT(88),
  [537] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_meta, 2, .production_id = 11),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_meta, 2, .production_id = 11),
  [541] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [543] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [547] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_object_repeat1, 2),
  [549] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_repeat1, 2), SHIFT_REPEAT(175),
  [552] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2), SHIFT_REPEAT(91),
  [555] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [559] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [561] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [567] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [571] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__query, 2),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [577] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__query, 3),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [583] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ident_repeat1, 2), SHIFT_REPEAT(14),
  [586] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__query, 1),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fun_spec_repeat1, 2),
  [592] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fun_spec_repeat1, 2), SHIFT_REPEAT(188),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_prefix_repeat1, 2),
  [597] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_prefix_repeat1, 2), SHIFT_REPEAT(111),
  [600] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_decl, 4, .production_id = 16),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_decl, 4, .production_id = 16),
  [604] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_addr, 3, .production_id = 8),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prefix, 1),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [628] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [630] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fun_spec_repeat1, 3),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_link, 1),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_day, 2),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [712] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
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
