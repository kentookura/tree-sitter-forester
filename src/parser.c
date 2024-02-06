#include <tree_sitter/parser.h>

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
#define STATE_COUNT 201
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 141
#define ALIAS_COUNT 1
#define TOKEN_COUNT 64
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 18
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 17

enum {
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
  anon_sym_put = 32,
  anon_sym_get = 33,
  anon_sym_open = 34,
  anon_sym_query = 35,
  anon_sym_object = 36,
  anon_sym_patch = 37,
  anon_sym_call = 38,
  sym_comment = 39,
  anon_sym_POUND = 40,
  anon_sym_POUND_POUND = 41,
  anon_sym_p = 42,
  anon_sym_em = 43,
  anon_sym_strong = 44,
  anon_sym_li = 45,
  anon_sym_ul = 46,
  anon_sym_ol = 47,
  anon_sym_code = 48,
  anon_sym_blockquote = 49,
  anon_sym_pre = 50,
  anon_sym_BSLASHquery_SLASHauthor = 51,
  anon_sym_BSLASHquery_SLASHtag = 52,
  anon_sym_BSLASHquery_SLASHtaxon = 53,
  anon_sym_BSLASHquery_SLASHand = 54,
  anon_sym_BSLASHquery_SLASHor = 55,
  anon_sym_LBRACE_RBRACE = 56,
  anon_sym__ = 57,
  anon_sym_LBRACK_LBRACK = 58,
  anon_sym_RBRACK_RBRACK = 59,
  aux_sym__whitespace_token1 = 60,
  sym__alpha = 61,
  sym__digit = 62,
  sym_text = 63,
  sym_source_file = 64,
  sym__node = 65,
  sym_squares = 66,
  sym_parens = 67,
  sym_title = 68,
  sym_author = 69,
  sym_contributor = 70,
  sym_date = 71,
  sym_tag = 72,
  sym_day = 73,
  sym_def = 74,
  sym_alloc = 75,
  sym_taxon = 76,
  sym_meta = 77,
  sym_import = 78,
  sym_export = 79,
  sym_namespace = 80,
  sym_transclude = 81,
  sym_let = 82,
  sym_tex = 83,
  sym_if_tex = 84,
  sym_block = 85,
  sym_scope = 86,
  sym_put = 87,
  sym_get = 88,
  sym_open = 89,
  sym_query_tree = 90,
  sym__default = 91,
  sym_object = 92,
  sym_patch = 93,
  sym_call = 94,
  sym__prim = 95,
  sym_inline_math = 96,
  sym_display_math = 97,
  sym_p = 98,
  sym_em = 99,
  sym_strong = 100,
  sym_li = 101,
  sym_ul = 102,
  sym_ol = 103,
  sym_code = 104,
  sym_blockquote = 105,
  sym_pre = 106,
  sym__query = 107,
  sym__query0 = 108,
  sym_query_author = 109,
  sym_query_tag = 110,
  sym_query_taxon = 111,
  sym_query_and = 112,
  sym_query_or = 113,
  sym_query_meta = 114,
  sym_queries = 115,
  sym_method_decl = 116,
  sym_fun_spec = 117,
  sym_ident = 118,
  sym_ident_with_method_calls = 119,
  sym__arg = 120,
  sym__link = 121,
  sym_addr = 122,
  sym_id = 123,
  sym_prefix = 124,
  sym_markdown_link = 125,
  sym_unlabeled_link = 126,
  sym_external_link = 127,
  sym__whitespace = 128,
  sym__txt_arg = 129,
  aux_sym_source_file_repeat1 = 130,
  aux_sym_braces_repeat1 = 131,
  aux_sym_object_repeat1 = 132,
  aux_sym__query_repeat1 = 133,
  aux_sym_queries_repeat1 = 134,
  aux_sym_fun_spec_repeat1 = 135,
  aux_sym_ident_repeat1 = 136,
  aux_sym_ident_with_method_calls_repeat1 = 137,
  aux_sym__arg_repeat1 = 138,
  aux_sym_id_repeat1 = 139,
  aux_sym_prefix_repeat1 = 140,
  alias_sym_method_body = 141,
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

enum {
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
  [9] = 4,
  [10] = 10,
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
  [96] = 24,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 25,
  [105] = 105,
  [106] = 106,
  [107] = 26,
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
  [123] = 47,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
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
  [146] = 27,
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
  [192] = 38,
  [193] = 193,
  [194] = 188,
  [195] = 195,
  [196] = 185,
  [197] = 197,
  [198] = 198,
  [199] = 189,
  [200] = 200,
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
      if (lookahead == '#') ADVANCE(122);
      if (lookahead == '%') ADVANCE(120);
      if (lookahead == '(') ADVANCE(60);
      if (lookahead == ')') ADVANCE(61);
      if (lookahead == '-') ADVANCE(71);
      if (lookahead == '[') ADVANCE(58);
      if (lookahead == '\\') ADVANCE(62);
      if (lookahead == ']') ADVANCE(59);
      if (lookahead == '_') ADVANCE(157);
      if (lookahead == 'a') ADVANCE(213);
      if (lookahead == 'b') ADVANCE(206);
      if (lookahead == 'c') ADVANCE(166);
      if (lookahead == 'd') ADVANCE(164);
      if (lookahead == 'e') ADVANCE(214);
      if (lookahead == 'g') ADVANCE(192);
      if (lookahead == 'i') ADVANCE(198);
      if (lookahead == 'l') ADVANCE(193);
      if (lookahead == 'm') ADVANCE(195);
      if (lookahead == 'n') ADVANCE(161);
      if (lookahead == 'o') ADVANCE(168);
      if (lookahead == 'p') ADVANCE(124);
      if (lookahead == 'q') ADVANCE(259);
      if (lookahead == 'r') ADVANCE(189);
      if (lookahead == 's') ADVANCE(172);
      if (lookahead == 't') ADVANCE(162);
      if (lookahead == 'u') ADVANCE(207);
      if (lookahead == '{') ADVANCE(55);
      if (lookahead == '}') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(78);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(79);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 1:
      if (lookahead == '#') ADVANCE(121);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(371);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(1)
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(377);
      END_STATE();
    case 2:
      if (lookahead == ')') ADVANCE(61);
      if (lookahead == '-') ADVANCE(71);
      if (lookahead == ']') ADVANCE(7);
      if (lookahead == '_') ADVANCE(157);
      if (lookahead == '}') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
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
      if (lookahead == 'p') ADVANCE(126);
      if (lookahead == 's') ADVANCE(44);
      if (lookahead == 'u') ADVANCE(24);
      if (lookahead == '{') ADVANCE(55);
      if (lookahead == '}') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(78);
      END_STATE();
    case 4:
      if (lookahead == '/') ADVANCE(9);
      END_STATE();
    case 5:
      if (lookahead == '0') ADVANCE(51);
      if (lookahead == '1') ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(76);
      END_STATE();
    case 6:
      if (lookahead == '[') ADVANCE(57);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == '{') ADVANCE(54);
      if (lookahead == '}') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(160);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(6)
      END_STATE();
    case 7:
      if (lookahead == ']') ADVANCE(159);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(319);
      if (lookahead == 'b') ADVANCE(312);
      if (lookahead == 'c') ADVANCE(274);
      if (lookahead == 'd') ADVANCE(272);
      if (lookahead == 'e') ADVANCE(320);
      if (lookahead == 'g') ADVANCE(299);
      if (lookahead == 'i') ADVANCE(304);
      if (lookahead == 'l') ADVANCE(300);
      if (lookahead == 'm') ADVANCE(302);
      if (lookahead == 'n') ADVANCE(269);
      if (lookahead == 'o') ADVANCE(276);
      if (lookahead == 'p') ADVANCE(125);
      if (lookahead == 'q') ADVANCE(365);
      if (lookahead == 's') ADVANCE(280);
      if (lookahead == 't') ADVANCE(270);
      if (lookahead == 'u') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(268);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(8)
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '%' &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(377);
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
      if (lookahead == 'd') ADVANCE(154);
      END_STATE();
    case 13:
      if (lookahead == 'd') ADVANCE(16);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(148);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(142);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(145);
      END_STATE();
    case 18:
      if (lookahead == 'g') ADVANCE(152);
      if (lookahead == 'x') ADVANCE(30);
      END_STATE();
    case 19:
      if (lookahead == 'g') ADVANCE(130);
      END_STATE();
    case 20:
      if (lookahead == 'h') ADVANCE(34);
      END_STATE();
    case 21:
      if (lookahead == 'i') ADVANCE(133);
      END_STATE();
    case 22:
      if (lookahead == 'k') ADVANCE(37);
      END_STATE();
    case 23:
      if (lookahead == 'l') ADVANCE(139);
      END_STATE();
    case 24:
      if (lookahead == 'l') ADVANCE(136);
      END_STATE();
    case 25:
      if (lookahead == 'l') ADVANCE(31);
      END_STATE();
    case 26:
      if (lookahead == 'm') ADVANCE(127);
      END_STATE();
    case 27:
      if (lookahead == 'n') ADVANCE(12);
      if (lookahead == 'u') ADVANCE(42);
      END_STATE();
    case 28:
      if (lookahead == 'n') ADVANCE(153);
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
      if (lookahead == 'r') ADVANCE(155);
      END_STATE();
    case 40:
      if (lookahead == 'r') ADVANCE(151);
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
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(372);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(48)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '%' &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(377);
      END_STATE();
    case 49:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(373);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(49)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(376);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '%' &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(377);
      END_STATE();
    case 50:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(50)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      END_STATE();
    case 51:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(76);
      END_STATE();
    case 52:
      if (eof) ADVANCE(53);
      if (lookahead == '#') ADVANCE(122);
      if (lookahead == '%') ADVANCE(120);
      if (lookahead == '(') ADVANCE(60);
      if (lookahead == ')') ADVANCE(61);
      if (lookahead == '[') ADVANCE(58);
      if (lookahead == '\\') ADVANCE(62);
      if (lookahead == ']') ADVANCE(59);
      if (lookahead == '{') ADVANCE(55);
      if (lookahead == '}') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(371);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(52)
      if (lookahead != 0) ADVANCE(377);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '}') ADVANCE(156);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '[') ADVANCE(158);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_title);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(377);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_author);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_author);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(377);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_contributor);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_contributor);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(377);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_date);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_date);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(377);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_tag);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_tag);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(377);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_ref);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_year);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(377);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_def);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(377);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_alloc);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_alloc);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(377);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_taxon);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_taxon);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(377);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_meta);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_meta);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(377);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_import);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_import);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(377);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_export);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_export);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(377);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_namespace);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_namespace);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(377);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_transclude);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_transclude);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(377);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_let);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_let);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(377);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_tex);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_tex);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(377);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_iftex);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_iftex);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(377);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_block);
      if (lookahead == 'q') ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_block);
      if (lookahead == 'q') ADVANCE(366);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(377);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_scope);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_scope);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(377);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_put);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_put);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(377);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_get);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_get);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(377);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_open);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_open);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(377);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_query);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_query);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(377);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_object);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_object);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(377);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_patch);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_patch);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(377);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_call);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_call);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(377);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '#') ADVANCE(123);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_POUND_POUND);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_p);
      if (lookahead == 'a') ADVANCE(250);
      if (lookahead == 'r') ADVANCE(180);
      if (lookahead == 'u') ADVANCE(246);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_p);
      if (lookahead == 'a') ADVANCE(356);
      if (lookahead == 'r') ADVANCE(288);
      if (lookahead == 'u') ADVANCE(352);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(377);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_p);
      if (lookahead == 'r') ADVANCE(15);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_em);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_em);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_em);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(377);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_strong);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_strong);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_strong);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(377);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_li);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_li);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_li);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(377);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_ul);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_ul);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_ul);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(377);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_ol);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_ol);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_ol);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(377);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_code);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_code);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_code);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(377);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_blockquote);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_blockquote);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_blockquote);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(377);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_pre);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_pre);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_pre);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(377);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_BSLASHquery_SLASHauthor);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_BSLASHquery_SLASHtag);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_BSLASHquery_SLASHtaxon);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_BSLASHquery_SLASHand);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_BSLASHquery_SLASHor);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_LBRACE_RBRACE);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_LBRACK_LBRACK);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_RBRACK_RBRACK);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(160);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'a') ADVANCE(215);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'a') ADVANCE(199);
      if (lookahead == 'e') ADVANCE(262);
      if (lookahead == 'i') ADVANCE(253);
      if (lookahead == 'r') ADVANCE(165);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'a') ADVANCE(86);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'a') ADVANCE(254);
      if (lookahead == 'e') ADVANCE(196);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'a') ADVANCE(219);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'a') ADVANCE(209);
      if (lookahead == 'o') ADVANCE(177);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'a') ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'b') ADVANCE(204);
      if (lookahead == 'l') ADVANCE(140);
      if (lookahead == 'p') ADVANCE(179);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'b') ADVANCE(261);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'c') ADVANCE(205);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'c') ADVANCE(82);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'c') ADVANCE(221);
      if (lookahead == 't') ADVANCE(238);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'c') ADVANCE(201);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'c') ADVANCE(210);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'c') ADVANCE(249);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'c') ADVANCE(186);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'd') ADVANCE(181);
      if (lookahead == 'n') ADVANCE(252);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'd') ADVANCE(188);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(216);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(149);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(143);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(69);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(241);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(63);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(92);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(146);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(197);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(234);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(263);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(244);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(245);
      if (lookahead == 'i') ADVANCE(134);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(251);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'f') ADVANCE(80);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'f') ADVANCE(74);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'f') ADVANCE(255);
      if (lookahead == 'm') ADVANCE(233);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'g') ADVANCE(72);
      if (lookahead == 'x') ADVANCE(225);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'g') ADVANCE(131);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'h') ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'h') ADVANCE(226);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'i') ADVANCE(169);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'j') ADVANCE(194);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'k') ADVANCE(102);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'l') ADVANCE(220);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'l') ADVANCE(137);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'l') ADVANCE(118);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'l') ADVANCE(208);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'l') ADVANCE(258);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'l') ADVANCE(185);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'l') ADVANCE(222);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'l') ADVANCE(212);
      if (lookahead == 'u') ADVANCE(243);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'm') ADVANCE(128);
      if (lookahead == 'x') ADVANCE(230);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'm') ADVANCE(183);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'n') ADVANCE(110);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'n') ADVANCE(200);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'n') ADVANCE(84);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'n') ADVANCE(242);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'o') ADVANCE(170);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'o') ADVANCE(232);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'o') ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'o') ADVANCE(217);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'o') ADVANCE(239);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'o') ADVANCE(218);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'o') ADVANCE(236);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'o') ADVANCE(237);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'o') ADVANCE(240);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'o') ADVANCE(256);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'p') ADVANCE(224);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'p') ADVANCE(167);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'p') ADVANCE(184);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'p') ADVANCE(228);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'r') ADVANCE(264);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'r') ADVANCE(203);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'r') ADVANCE(65);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'r') ADVANCE(67);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'r') ADVANCE(223);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'r') ADVANCE(247);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'r') ADVANCE(248);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 's') ADVANCE(231);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 's') ADVANCE(174);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 't') ADVANCE(202);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 't') ADVANCE(108);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 't') ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 't') ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 't') ADVANCE(90);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 't') ADVANCE(88);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 't') ADVANCE(114);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 't') ADVANCE(173);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 't') ADVANCE(163);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 't') ADVANCE(235);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 't') ADVANCE(211);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 't') ADVANCE(182);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 't') ADVANCE(191);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 't') ADVANCE(187);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 't') ADVANCE(227);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'u') ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'u') ADVANCE(190);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'u') ADVANCE(229);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'u') ADVANCE(257);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'x') ADVANCE(98);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'x') ADVANCE(100);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'y') ADVANCE(112);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym__alpha);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym__alpha);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(377);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym__digit);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(267);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a') ADVANCE(319);
      if (lookahead == 'b') ADVANCE(312);
      if (lookahead == 'c') ADVANCE(274);
      if (lookahead == 'd') ADVANCE(272);
      if (lookahead == 'e') ADVANCE(320);
      if (lookahead == 'g') ADVANCE(299);
      if (lookahead == 'i') ADVANCE(304);
      if (lookahead == 'l') ADVANCE(300);
      if (lookahead == 'm') ADVANCE(302);
      if (lookahead == 'n') ADVANCE(269);
      if (lookahead == 'o') ADVANCE(276);
      if (lookahead == 'p') ADVANCE(125);
      if (lookahead == 'q') ADVANCE(365);
      if (lookahead == 's') ADVANCE(280);
      if (lookahead == 't') ADVANCE(270);
      if (lookahead == 'u') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(268);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(377);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a') ADVANCE(321);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(377);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a') ADVANCE(305);
      if (lookahead == 'e') ADVANCE(368);
      if (lookahead == 'i') ADVANCE(359);
      if (lookahead == 'r') ADVANCE(273);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(377);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a') ADVANCE(87);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(377);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a') ADVANCE(360);
      if (lookahead == 'e') ADVANCE(303);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(377);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a') ADVANCE(325);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(377);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a') ADVANCE(315);
      if (lookahead == 'o') ADVANCE(285);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(377);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a') ADVANCE(283);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(377);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'b') ADVANCE(310);
      if (lookahead == 'l') ADVANCE(141);
      if (lookahead == 'p') ADVANCE(287);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(377);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'b') ADVANCE(367);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(377);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'c') ADVANCE(311);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(377);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'c') ADVANCE(83);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(377);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'c') ADVANCE(327);
      if (lookahead == 't') ADVANCE(344);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(377);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'c') ADVANCE(307);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(377);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'c') ADVANCE(316);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(377);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'c') ADVANCE(294);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(377);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'c') ADVANCE(355);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(377);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'd') ADVANCE(289);
      if (lookahead == 'n') ADVANCE(358);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(377);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'd') ADVANCE(296);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(377);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(322);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(377);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(150);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(377);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(144);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(377);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(70);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(377);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(347);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(377);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(105);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(377);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(64);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(377);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(93);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(377);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(147);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(377);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(95);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(377);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(340);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(377);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(369);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(377);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(350);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(377);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(351);
      if (lookahead == 'i') ADVANCE(135);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(377);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(284);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(377);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(357);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(377);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'f') ADVANCE(81);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(377);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'f') ADVANCE(361);
      if (lookahead == 'm') ADVANCE(339);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(377);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'g') ADVANCE(73);
      if (lookahead == 'x') ADVANCE(331);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(377);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'g') ADVANCE(132);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(377);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'h') ADVANCE(117);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(377);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'h') ADVANCE(332);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(377);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i') ADVANCE(277);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(377);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'j') ADVANCE(301);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(377);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'k') ADVANCE(103);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(377);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l') ADVANCE(326);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(377);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l') ADVANCE(138);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(377);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l') ADVANCE(119);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(377);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l') ADVANCE(314);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(377);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l') ADVANCE(364);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(377);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l') ADVANCE(293);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(377);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l') ADVANCE(328);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(377);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l') ADVANCE(318);
      if (lookahead == 'u') ADVANCE(349);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(377);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'm') ADVANCE(129);
      if (lookahead == 'x') ADVANCE(336);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(377);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'm') ADVANCE(291);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(377);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'n') ADVANCE(111);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(377);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'n') ADVANCE(306);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(377);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'n') ADVANCE(85);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(377);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'n') ADVANCE(348);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(377);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'o') ADVANCE(278);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(377);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'o') ADVANCE(338);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(377);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'o') ADVANCE(279);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(377);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'o') ADVANCE(323);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(377);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'o') ADVANCE(345);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(377);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'o') ADVANCE(324);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(377);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'o') ADVANCE(342);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(377);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'o') ADVANCE(343);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(377);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'o') ADVANCE(346);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(377);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'o') ADVANCE(362);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(377);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'p') ADVANCE(330);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(377);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'p') ADVANCE(275);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(377);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'p') ADVANCE(292);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(377);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'p') ADVANCE(334);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(377);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r') ADVANCE(370);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(377);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r') ADVANCE(309);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(377);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r') ADVANCE(66);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(377);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r') ADVANCE(68);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(377);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r') ADVANCE(329);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(377);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r') ADVANCE(353);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(377);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r') ADVANCE(354);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(377);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 's') ADVANCE(337);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(377);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 's') ADVANCE(282);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(377);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't') ADVANCE(308);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(377);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't') ADVANCE(109);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(377);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't') ADVANCE(97);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(377);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't') ADVANCE(107);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(377);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't') ADVANCE(91);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(377);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't') ADVANCE(89);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(377);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't') ADVANCE(115);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(377);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't') ADVANCE(281);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(377);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't') ADVANCE(271);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(377);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't') ADVANCE(341);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(377);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't') ADVANCE(317);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(377);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't') ADVANCE(290);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(377);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't') ADVANCE(298);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(377);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't') ADVANCE(295);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(377);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't') ADVANCE(333);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(377);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'u') ADVANCE(286);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(377);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'u') ADVANCE(297);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(377);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'u') ADVANCE(335);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(377);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'u') ADVANCE(363);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(377);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'x') ADVANCE(99);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(377);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'x') ADVANCE(101);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(377);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'y') ADVANCE(113);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(377);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(371);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(377);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(372);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(377);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(376);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(377);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_text);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(75);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(377);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_text);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(374);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(377);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_text);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(375);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(377);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_text);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(377);
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
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 6},
  [78] = {.lex_state = 52},
  [79] = {.lex_state = 3},
  [80] = {.lex_state = 6},
  [81] = {.lex_state = 6},
  [82] = {.lex_state = 6},
  [83] = {.lex_state = 6},
  [84] = {.lex_state = 6},
  [85] = {.lex_state = 2},
  [86] = {.lex_state = 2},
  [87] = {.lex_state = 6},
  [88] = {.lex_state = 6},
  [89] = {.lex_state = 48},
  [90] = {.lex_state = 6},
  [91] = {.lex_state = 6},
  [92] = {.lex_state = 6},
  [93] = {.lex_state = 2},
  [94] = {.lex_state = 6},
  [95] = {.lex_state = 6},
  [96] = {.lex_state = 3},
  [97] = {.lex_state = 48},
  [98] = {.lex_state = 2},
  [99] = {.lex_state = 3},
  [100] = {.lex_state = 2},
  [101] = {.lex_state = 6},
  [102] = {.lex_state = 6},
  [103] = {.lex_state = 6},
  [104] = {.lex_state = 3},
  [105] = {.lex_state = 3},
  [106] = {.lex_state = 2},
  [107] = {.lex_state = 3},
  [108] = {.lex_state = 6},
  [109] = {.lex_state = 1},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 2},
  [113] = {.lex_state = 3},
  [114] = {.lex_state = 6},
  [115] = {.lex_state = 3},
  [116] = {.lex_state = 2},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 3},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
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
  [146] = {.lex_state = 3},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 3},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 3},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 49},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 5},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 52},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 52},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 50},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 52},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 3},
  [187] = {.lex_state = 52},
  [188] = {.lex_state = 52},
  [189] = {.lex_state = 52},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 3},
  [194] = {.lex_state = 52},
  [195] = {.lex_state = 3},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 3},
  [199] = {.lex_state = 52},
  [200] = {.lex_state = 0},
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
    [sym_source_file] = STATE(197),
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
    STATE(2), 47,
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
  [78] = 10,
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
    STATE(3), 47,
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
  [155] = 10,
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
    STATE(3), 47,
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
  [232] = 10,
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
    STATE(3), 47,
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
  [309] = 10,
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
    STATE(10), 47,
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
  [386] = 10,
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
    STATE(2), 47,
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
  [463] = 10,
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
    STATE(2), 47,
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
  [540] = 10,
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
    ACTIONS(95), 1,
      anon_sym_RBRACE,
    STATE(3), 47,
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
  [617] = 10,
    ACTIONS(97), 1,
      ts_builtin_sym_end,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    ACTIONS(102), 1,
      anon_sym_LPAREN,
    ACTIONS(105), 1,
      anon_sym_BSLASH,
    ACTIONS(108), 1,
      sym_comment,
    ACTIONS(111), 1,
      anon_sym_POUND,
    ACTIONS(114), 1,
      anon_sym_POUND_POUND,
    ACTIONS(117), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(120), 1,
      sym_text,
    STATE(10), 47,
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
  [694] = 9,
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
    STATE(7), 47,
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
  [768] = 9,
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
    STATE(8), 47,
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
  [842] = 9,
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
    STATE(4), 47,
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
  [916] = 9,
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
    STATE(5), 47,
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
  [990] = 9,
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
    STATE(9), 47,
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
  [1064] = 35,
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
      anon_sym_put,
    ACTIONS(181), 1,
      anon_sym_get,
    ACTIONS(183), 1,
      anon_sym_open,
    ACTIONS(185), 1,
      anon_sym_query,
    ACTIONS(187), 1,
      anon_sym_object,
    ACTIONS(189), 1,
      anon_sym_patch,
    ACTIONS(191), 1,
      anon_sym_call,
    ACTIONS(193), 1,
      anon_sym_p,
    ACTIONS(195), 1,
      anon_sym_em,
    ACTIONS(197), 1,
      anon_sym_strong,
    ACTIONS(199), 1,
      anon_sym_li,
    ACTIONS(201), 1,
      anon_sym_ul,
    ACTIONS(203), 1,
      anon_sym_ol,
    ACTIONS(205), 1,
      anon_sym_code,
    ACTIONS(207), 1,
      anon_sym_blockquote,
    ACTIONS(209), 1,
      anon_sym_pre,
    ACTIONS(211), 1,
      sym_text,
  [1170] = 10,
    ACTIONS(213), 1,
      anon_sym_LBRACE,
    ACTIONS(215), 1,
      anon_sym_RBRACE,
    ACTIONS(217), 1,
      anon_sym_BSLASHquery_SLASHauthor,
    ACTIONS(219), 1,
      anon_sym_BSLASHquery_SLASHtag,
    ACTIONS(221), 1,
      anon_sym_BSLASHquery_SLASHtaxon,
    ACTIONS(223), 1,
      anon_sym_BSLASHquery_SLASHand,
    ACTIONS(225), 1,
      anon_sym_BSLASHquery_SLASHor,
    ACTIONS(227), 1,
      aux_sym__whitespace_token1,
    STATE(124), 1,
      sym__txt_arg,
    STATE(21), 9,
      sym__query0,
      sym_query_author,
      sym_query_tag,
      sym_query_taxon,
      sym_query_and,
      sym_query_or,
      sym_query_meta,
      sym__whitespace,
      aux_sym_queries_repeat1,
  [1209] = 10,
    ACTIONS(213), 1,
      anon_sym_LBRACE,
    ACTIONS(217), 1,
      anon_sym_BSLASHquery_SLASHauthor,
    ACTIONS(219), 1,
      anon_sym_BSLASHquery_SLASHtag,
    ACTIONS(221), 1,
      anon_sym_BSLASHquery_SLASHtaxon,
    ACTIONS(223), 1,
      anon_sym_BSLASHquery_SLASHand,
    ACTIONS(225), 1,
      anon_sym_BSLASHquery_SLASHor,
    ACTIONS(229), 1,
      aux_sym__whitespace_token1,
    STATE(124), 1,
      sym__txt_arg,
    STATE(163), 1,
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
  [1248] = 10,
    ACTIONS(213), 1,
      anon_sym_LBRACE,
    ACTIONS(217), 1,
      anon_sym_BSLASHquery_SLASHauthor,
    ACTIONS(219), 1,
      anon_sym_BSLASHquery_SLASHtag,
    ACTIONS(221), 1,
      anon_sym_BSLASHquery_SLASHtaxon,
    ACTIONS(223), 1,
      anon_sym_BSLASHquery_SLASHand,
    ACTIONS(225), 1,
      anon_sym_BSLASHquery_SLASHor,
    ACTIONS(229), 1,
      aux_sym__whitespace_token1,
    STATE(124), 1,
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
  [1287] = 11,
    ACTIONS(213), 1,
      anon_sym_LBRACE,
    ACTIONS(217), 1,
      anon_sym_BSLASHquery_SLASHauthor,
    ACTIONS(219), 1,
      anon_sym_BSLASHquery_SLASHtag,
    ACTIONS(221), 1,
      anon_sym_BSLASHquery_SLASHtaxon,
    ACTIONS(223), 1,
      anon_sym_BSLASHquery_SLASHand,
    ACTIONS(225), 1,
      anon_sym_BSLASHquery_SLASHor,
    ACTIONS(231), 1,
      aux_sym__whitespace_token1,
    STATE(124), 1,
      sym__txt_arg,
    STATE(166), 1,
      sym__query,
    STATE(22), 2,
      sym__whitespace,
      aux_sym__query_repeat1,
    STATE(102), 7,
      sym__query0,
      sym_query_author,
      sym_query_tag,
      sym_query_taxon,
      sym_query_and,
      sym_query_or,
      sym_query_meta,
  [1328] = 10,
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
    STATE(124), 1,
      sym__txt_arg,
    STATE(21), 9,
      sym__query0,
      sym_query_author,
      sym_query_tag,
      sym_query_taxon,
      sym_query_and,
      sym_query_or,
      sym_query_meta,
      sym__whitespace,
      aux_sym_queries_repeat1,
  [1367] = 10,
    ACTIONS(213), 1,
      anon_sym_LBRACE,
    ACTIONS(217), 1,
      anon_sym_BSLASHquery_SLASHauthor,
    ACTIONS(219), 1,
      anon_sym_BSLASHquery_SLASHtag,
    ACTIONS(221), 1,
      anon_sym_BSLASHquery_SLASHtaxon,
    ACTIONS(223), 1,
      anon_sym_BSLASHquery_SLASHand,
    ACTIONS(225), 1,
      anon_sym_BSLASHquery_SLASHor,
    ACTIONS(256), 1,
      aux_sym__whitespace_token1,
    STATE(124), 1,
      sym__txt_arg,
    STATE(77), 2,
      sym__whitespace,
      aux_sym__query_repeat1,
    STATE(103), 7,
      sym__query0,
      sym_query_author,
      sym_query_tag,
      sym_query_taxon,
      sym_query_and,
      sym_query_or,
      sym_query_meta,
  [1405] = 6,
    ACTIONS(260), 1,
      anon_sym_LBRACE,
    ACTIONS(264), 1,
      anon_sym_POUND,
    ACTIONS(266), 1,
      anon_sym_LBRACE_RBRACE,
    ACTIONS(258), 2,
      ts_builtin_sym_end,
      sym_text,
    STATE(26), 2,
      sym__arg,
      aux_sym_ident_repeat1,
    ACTIONS(262), 9,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [1434] = 5,
    ACTIONS(260), 1,
      anon_sym_LBRACE,
    ACTIONS(266), 1,
      anon_sym_LBRACE_RBRACE,
    ACTIONS(258), 2,
      ts_builtin_sym_end,
      sym_text,
    STATE(26), 2,
      sym__arg,
      aux_sym_ident_repeat1,
    ACTIONS(262), 10,
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
  [1461] = 4,
    ACTIONS(270), 1,
      anon_sym_LBRACE,
    ACTIONS(268), 2,
      ts_builtin_sym_end,
      sym_text,
    STATE(25), 2,
      sym__arg,
      aux_sym_ident_repeat1,
    ACTIONS(273), 10,
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
  [1485] = 4,
    ACTIONS(260), 1,
      anon_sym_LBRACE,
    ACTIONS(275), 2,
      ts_builtin_sym_end,
      sym_text,
    STATE(25), 2,
      sym__arg,
      aux_sym_ident_repeat1,
    ACTIONS(277), 10,
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
  [1509] = 2,
    ACTIONS(279), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(281), 11,
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
  [1527] = 3,
    STATE(29), 1,
      aux_sym_ident_with_method_calls_repeat1,
    ACTIONS(283), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(285), 10,
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
  [1547] = 5,
    ACTIONS(287), 1,
      ts_builtin_sym_end,
    ACTIONS(291), 1,
      anon_sym_POUND,
    ACTIONS(294), 1,
      sym_text,
    STATE(29), 1,
      aux_sym_ident_with_method_calls_repeat1,
    ACTIONS(289), 9,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [1571] = 2,
    ACTIONS(297), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(299), 10,
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
  [1588] = 2,
    ACTIONS(301), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(303), 10,
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
    ACTIONS(305), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(307), 10,
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
    ACTIONS(309), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(311), 10,
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
    ACTIONS(313), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(315), 10,
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
    ACTIONS(317), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(319), 10,
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
    ACTIONS(321), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(323), 10,
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
    ACTIONS(325), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(327), 10,
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
    ACTIONS(329), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(331), 10,
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
    ACTIONS(333), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(335), 10,
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
    ACTIONS(337), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(339), 10,
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
    ACTIONS(341), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(343), 10,
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
    ACTIONS(345), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(347), 10,
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
    ACTIONS(349), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(351), 10,
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
    ACTIONS(353), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(355), 10,
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
    ACTIONS(357), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(359), 10,
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
    ACTIONS(361), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(363), 10,
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
    ACTIONS(275), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(277), 10,
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
    ACTIONS(365), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(367), 10,
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
    ACTIONS(369), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(371), 10,
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
    ACTIONS(373), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(375), 10,
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
    ACTIONS(377), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(379), 10,
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
    ACTIONS(381), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(383), 10,
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
    ACTIONS(385), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(387), 10,
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
    ACTIONS(389), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(391), 10,
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
    ACTIONS(393), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(395), 10,
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
    ACTIONS(397), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(399), 10,
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
    ACTIONS(401), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(403), 10,
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
    ACTIONS(405), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(407), 10,
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
    ACTIONS(409), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(411), 10,
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
    ACTIONS(413), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(415), 10,
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
    ACTIONS(417), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(419), 10,
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
    ACTIONS(421), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(423), 10,
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
    ACTIONS(425), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(427), 10,
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
    ACTIONS(429), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(431), 10,
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
    ACTIONS(433), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(435), 10,
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
    ACTIONS(437), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(439), 10,
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
    ACTIONS(441), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(443), 10,
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
    ACTIONS(445), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(447), 10,
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
    ACTIONS(449), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(451), 10,
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
    ACTIONS(453), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(455), 10,
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
    ACTIONS(457), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(459), 10,
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
    ACTIONS(461), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(463), 10,
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
    ACTIONS(465), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(467), 10,
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
    ACTIONS(469), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(471), 10,
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
    ACTIONS(473), 1,
      anon_sym_BSLASH,
    STATE(48), 10,
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
  [2352] = 2,
    ACTIONS(473), 1,
      anon_sym_BSLASH,
    STATE(49), 10,
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
  [2368] = 3,
    ACTIONS(477), 1,
      aux_sym__whitespace_token1,
    STATE(77), 2,
      sym__whitespace,
      aux_sym__query_repeat1,
    ACTIONS(475), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASHquery_SLASHauthor,
      anon_sym_BSLASHquery_SLASHtag,
      anon_sym_BSLASHquery_SLASHtaxon,
      anon_sym_BSLASHquery_SLASHand,
      anon_sym_BSLASHquery_SLASHor,
  [2385] = 3,
    ACTIONS(482), 1,
      anon_sym_RBRACK,
    ACTIONS(484), 1,
      sym_text,
    ACTIONS(480), 7,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_BSLASH,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2401] = 9,
    ACTIONS(193), 1,
      anon_sym_p,
    ACTIONS(486), 1,
      anon_sym_em,
    ACTIONS(488), 1,
      anon_sym_strong,
    ACTIONS(490), 1,
      anon_sym_li,
    ACTIONS(492), 1,
      anon_sym_ul,
    ACTIONS(494), 1,
      anon_sym_ol,
    ACTIONS(496), 1,
      anon_sym_code,
    ACTIONS(498), 1,
      anon_sym_blockquote,
    ACTIONS(500), 1,
      anon_sym_pre,
  [2429] = 2,
    ACTIONS(279), 1,
      aux_sym__whitespace_token1,
    ACTIONS(281), 8,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_BSLASHquery_SLASHauthor,
      anon_sym_BSLASHquery_SLASHtag,
      anon_sym_BSLASHquery_SLASHtaxon,
      anon_sym_BSLASHquery_SLASHand,
      anon_sym_BSLASHquery_SLASHor,
  [2443] = 2,
    ACTIONS(504), 1,
      aux_sym__whitespace_token1,
    ACTIONS(502), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASHquery_SLASHauthor,
      anon_sym_BSLASHquery_SLASHtag,
      anon_sym_BSLASHquery_SLASHtaxon,
      anon_sym_BSLASHquery_SLASHand,
      anon_sym_BSLASHquery_SLASHor,
  [2456] = 2,
    ACTIONS(508), 1,
      aux_sym__whitespace_token1,
    ACTIONS(506), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASHquery_SLASHauthor,
      anon_sym_BSLASHquery_SLASHtag,
      anon_sym_BSLASHquery_SLASHtaxon,
      anon_sym_BSLASHquery_SLASHand,
      anon_sym_BSLASHquery_SLASHor,
  [2469] = 2,
    ACTIONS(512), 1,
      aux_sym__whitespace_token1,
    ACTIONS(510), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASHquery_SLASHauthor,
      anon_sym_BSLASHquery_SLASHtag,
      anon_sym_BSLASHquery_SLASHtaxon,
      anon_sym_BSLASHquery_SLASHand,
      anon_sym_BSLASHquery_SLASHor,
  [2482] = 2,
    ACTIONS(516), 1,
      aux_sym__whitespace_token1,
    ACTIONS(514), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASHquery_SLASHauthor,
      anon_sym_BSLASHquery_SLASHtag,
      anon_sym_BSLASHquery_SLASHtaxon,
      anon_sym_BSLASHquery_SLASHand,
      anon_sym_BSLASHquery_SLASHor,
  [2495] = 3,
    STATE(85), 1,
      aux_sym_id_repeat1,
    ACTIONS(518), 3,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_RBRACK_RBRACK,
    ACTIONS(520), 4,
      anon_sym_DASH,
      anon_sym__,
      sym__alpha,
      sym__digit,
  [2510] = 3,
    STATE(85), 1,
      aux_sym_id_repeat1,
    ACTIONS(523), 3,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_RBRACK_RBRACK,
    ACTIONS(525), 4,
      anon_sym_DASH,
      anon_sym__,
      sym__alpha,
      sym__digit,
  [2525] = 2,
    ACTIONS(529), 1,
      aux_sym__whitespace_token1,
    ACTIONS(527), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASHquery_SLASHauthor,
      anon_sym_BSLASHquery_SLASHtag,
      anon_sym_BSLASHquery_SLASHtaxon,
      anon_sym_BSLASHquery_SLASHand,
      anon_sym_BSLASHquery_SLASHor,
  [2538] = 2,
    ACTIONS(533), 1,
      aux_sym__whitespace_token1,
    ACTIONS(531), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASHquery_SLASHauthor,
      anon_sym_BSLASHquery_SLASHtag,
      anon_sym_BSLASHquery_SLASHtaxon,
      anon_sym_BSLASHquery_SLASHand,
      anon_sym_BSLASHquery_SLASHor,
  [2551] = 5,
    ACTIONS(535), 1,
      sym__alpha,
    ACTIONS(537), 1,
      sym_text,
    STATE(116), 1,
      aux_sym_prefix_repeat1,
    STATE(191), 1,
      sym_prefix,
    STATE(193), 2,
      sym_addr,
      sym_external_link,
  [2568] = 4,
    ACTIONS(539), 1,
      anon_sym_RBRACE,
    ACTIONS(541), 1,
      anon_sym_LBRACK,
    ACTIONS(544), 1,
      aux_sym__whitespace_token1,
    STATE(90), 3,
      sym_method_decl,
      sym__whitespace,
      aux_sym_object_repeat1,
  [2583] = 4,
    ACTIONS(547), 1,
      anon_sym_RBRACE,
    ACTIONS(549), 1,
      anon_sym_LBRACK,
    ACTIONS(551), 1,
      aux_sym__whitespace_token1,
    STATE(90), 3,
      sym_method_decl,
      sym__whitespace,
      aux_sym_object_repeat1,
  [2598] = 4,
    ACTIONS(549), 1,
      anon_sym_LBRACK,
    ACTIONS(551), 1,
      aux_sym__whitespace_token1,
    ACTIONS(553), 1,
      anon_sym_RBRACE,
    STATE(90), 3,
      sym_method_decl,
      sym__whitespace,
      aux_sym_object_repeat1,
  [2613] = 3,
    STATE(86), 1,
      aux_sym_id_repeat1,
    STATE(115), 1,
      sym_id,
    ACTIONS(555), 4,
      anon_sym_DASH,
      anon_sym__,
      sym__alpha,
      sym__digit,
  [2626] = 3,
    ACTIONS(549), 1,
      anon_sym_LBRACK,
    ACTIONS(557), 1,
      aux_sym__whitespace_token1,
    STATE(91), 3,
      sym_method_decl,
      sym__whitespace,
      aux_sym_object_repeat1,
  [2638] = 3,
    ACTIONS(549), 1,
      anon_sym_LBRACK,
    ACTIONS(559), 1,
      aux_sym__whitespace_token1,
    STATE(92), 3,
      sym_method_decl,
      sym__whitespace,
      aux_sym_object_repeat1,
  [2650] = 4,
    ACTIONS(258), 1,
      anon_sym_LBRACK,
    ACTIONS(262), 1,
      anon_sym_LBRACE,
    ACTIONS(561), 1,
      anon_sym_LBRACE_RBRACE,
    STATE(107), 2,
      sym__arg,
      aux_sym_ident_repeat1,
  [2664] = 5,
    ACTIONS(535), 1,
      sym__alpha,
    ACTIONS(563), 1,
      sym_text,
    STATE(116), 1,
      aux_sym_prefix_repeat1,
    STATE(170), 1,
      sym_addr,
    STATE(191), 1,
      sym_prefix,
  [2680] = 4,
    ACTIONS(565), 1,
      sym__alpha,
    STATE(116), 1,
      aux_sym_prefix_repeat1,
    STATE(181), 1,
      sym_addr,
    STATE(191), 1,
      sym_prefix,
  [2693] = 4,
    ACTIONS(567), 1,
      anon_sym_LBRACE,
    ACTIONS(569), 1,
      anon_sym_LBRACK,
    STATE(44), 1,
      sym__arg,
    STATE(105), 1,
      aux_sym_fun_spec_repeat1,
  [2706] = 4,
    ACTIONS(565), 1,
      sym__alpha,
    STATE(116), 1,
      aux_sym_prefix_repeat1,
    STATE(179), 1,
      sym_addr,
    STATE(191), 1,
      sym_prefix,
  [2719] = 3,
    ACTIONS(256), 1,
      aux_sym__whitespace_token1,
    ACTIONS(571), 1,
      anon_sym_RBRACE,
    STATE(77), 2,
      sym__whitespace,
      aux_sym__query_repeat1,
  [2730] = 3,
    ACTIONS(573), 1,
      anon_sym_RBRACE,
    ACTIONS(575), 1,
      aux_sym__whitespace_token1,
    STATE(101), 2,
      sym__whitespace,
      aux_sym__query_repeat1,
  [2741] = 3,
    ACTIONS(571), 1,
      anon_sym_RBRACE,
    ACTIONS(577), 1,
      aux_sym__whitespace_token1,
    STATE(108), 2,
      sym__whitespace,
      aux_sym__query_repeat1,
  [2752] = 3,
    ACTIONS(268), 1,
      anon_sym_LBRACK,
    ACTIONS(579), 1,
      anon_sym_LBRACE,
    STATE(104), 2,
      sym__arg,
      aux_sym_ident_repeat1,
  [2763] = 4,
    ACTIONS(567), 1,
      anon_sym_LBRACE,
    ACTIONS(569), 1,
      anon_sym_LBRACK,
    STATE(37), 1,
      sym__arg,
    STATE(113), 1,
      aux_sym_fun_spec_repeat1,
  [2776] = 4,
    ACTIONS(565), 1,
      sym__alpha,
    STATE(116), 1,
      aux_sym_prefix_repeat1,
    STATE(158), 1,
      sym_addr,
    STATE(191), 1,
      sym_prefix,
  [2789] = 2,
    ACTIONS(275), 2,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
    STATE(104), 2,
      sym__arg,
      aux_sym_ident_repeat1,
  [2798] = 3,
    ACTIONS(256), 1,
      aux_sym__whitespace_token1,
    ACTIONS(582), 1,
      anon_sym_RBRACE,
    STATE(77), 2,
      sym__whitespace,
      aux_sym__query_repeat1,
  [2809] = 3,
    ACTIONS(584), 1,
      anon_sym_POUND,
    ACTIONS(586), 1,
      sym_text,
    STATE(28), 1,
      aux_sym_ident_with_method_calls_repeat1,
  [2819] = 3,
    ACTIONS(588), 1,
      anon_sym_BSLASH,
    STATE(71), 1,
      sym_fun_spec,
    STATE(99), 1,
      sym_ident,
  [2829] = 3,
    ACTIONS(588), 1,
      anon_sym_BSLASH,
    STATE(70), 1,
      sym_fun_spec,
    STATE(99), 1,
      sym_ident,
  [2839] = 3,
    ACTIONS(590), 1,
      anon_sym_DASH,
    ACTIONS(592), 1,
      sym__alpha,
    STATE(112), 1,
      aux_sym_prefix_repeat1,
  [2849] = 3,
    ACTIONS(595), 1,
      anon_sym_LBRACE,
    ACTIONS(597), 1,
      anon_sym_LBRACK,
    STATE(113), 1,
      aux_sym_fun_spec_repeat1,
  [2859] = 2,
    ACTIONS(602), 1,
      aux_sym__whitespace_token1,
    ACTIONS(600), 2,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
  [2867] = 1,
    ACTIONS(604), 3,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_RBRACK_RBRACK,
  [2873] = 3,
    ACTIONS(606), 1,
      anon_sym_DASH,
    ACTIONS(608), 1,
      sym__alpha,
    STATE(112), 1,
      aux_sym_prefix_repeat1,
  [2883] = 2,
    ACTIONS(567), 1,
      anon_sym_LBRACE,
    STATE(50), 1,
      sym__arg,
  [2890] = 2,
    ACTIONS(610), 1,
      anon_sym_BSLASH,
    STATE(60), 1,
      sym_ident,
  [2897] = 2,
    ACTIONS(588), 1,
      anon_sym_BSLASH,
    STATE(152), 1,
      sym_ident,
  [2904] = 2,
    ACTIONS(612), 1,
      anon_sym_LBRACE,
    STATE(87), 1,
      sym__arg,
  [2911] = 2,
    ACTIONS(612), 1,
      anon_sym_LBRACE,
    STATE(88), 1,
      sym__arg,
  [2918] = 2,
    ACTIONS(612), 1,
      anon_sym_LBRACE,
    STATE(82), 1,
      sym__arg,
  [2925] = 1,
    ACTIONS(275), 2,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
  [2930] = 2,
    ACTIONS(612), 1,
      anon_sym_LBRACE,
    STATE(81), 1,
      sym__arg,
  [2937] = 2,
    ACTIONS(567), 1,
      anon_sym_LBRACE,
    STATE(55), 1,
      sym__arg,
  [2944] = 2,
    ACTIONS(614), 1,
      anon_sym_LBRACE,
    STATE(145), 1,
      sym__txt_arg,
  [2951] = 2,
    ACTIONS(616), 1,
      anon_sym_LBRACE,
    STATE(74), 1,
      sym__txt_arg,
  [2958] = 2,
    ACTIONS(610), 1,
      anon_sym_BSLASH,
    STATE(73), 1,
      sym_ident,
  [2965] = 2,
    ACTIONS(610), 1,
      anon_sym_BSLASH,
    STATE(59), 1,
      sym_ident,
  [2972] = 2,
    ACTIONS(618), 1,
      anon_sym_LBRACE,
    STATE(186), 1,
      sym__arg,
  [2979] = 2,
    ACTIONS(567), 1,
      anon_sym_LBRACE,
    STATE(64), 1,
      sym__arg,
  [2986] = 2,
    ACTIONS(618), 1,
      anon_sym_LBRACE,
    STATE(153), 1,
      sym__arg,
  [2993] = 2,
    ACTIONS(567), 1,
      anon_sym_LBRACE,
    STATE(57), 1,
      sym__arg,
  [3000] = 2,
    ACTIONS(618), 1,
      anon_sym_LBRACE,
    STATE(155), 1,
      sym__arg,
  [3007] = 2,
    ACTIONS(567), 1,
      anon_sym_LBRACE,
    STATE(67), 1,
      sym__arg,
  [3014] = 2,
    ACTIONS(612), 1,
      anon_sym_LBRACE,
    STATE(114), 1,
      sym__arg,
  [3021] = 2,
    ACTIONS(567), 1,
      anon_sym_LBRACE,
    STATE(56), 1,
      sym__arg,
  [3028] = 2,
    ACTIONS(567), 1,
      anon_sym_LBRACE,
    STATE(54), 1,
      sym__arg,
  [3035] = 2,
    ACTIONS(567), 1,
      anon_sym_LBRACE,
    STATE(31), 1,
      sym__arg,
  [3042] = 2,
    ACTIONS(567), 1,
      anon_sym_LBRACE,
    STATE(53), 1,
      sym__arg,
  [3049] = 2,
    ACTIONS(616), 1,
      anon_sym_LBRACE,
    STATE(69), 1,
      sym__txt_arg,
  [3056] = 2,
    ACTIONS(567), 1,
      anon_sym_LBRACE,
    STATE(30), 1,
      sym__arg,
  [3063] = 2,
    ACTIONS(567), 1,
      anon_sym_LBRACE,
    STATE(52), 1,
      sym__arg,
  [3070] = 2,
    ACTIONS(567), 1,
      anon_sym_LBRACE,
    STATE(51), 1,
      sym__arg,
  [3077] = 2,
    ACTIONS(567), 1,
      anon_sym_LBRACE,
    STATE(43), 1,
      sym__arg,
  [3084] = 1,
    ACTIONS(279), 2,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
  [3089] = 2,
    ACTIONS(620), 1,
      anon_sym_LBRACE,
    STATE(68), 1,
      sym__txt_arg,
  [3096] = 2,
    ACTIONS(567), 1,
      anon_sym_LBRACE,
    STATE(63), 1,
      sym__arg,
  [3103] = 2,
    ACTIONS(567), 1,
      anon_sym_LBRACE,
    STATE(72), 1,
      sym__arg,
  [3110] = 1,
    ACTIONS(622), 2,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
  [3115] = 2,
    ACTIONS(616), 1,
      anon_sym_LBRACE,
    STATE(66), 1,
      sym__txt_arg,
  [3122] = 2,
    ACTIONS(567), 1,
      anon_sym_LBRACE,
    STATE(39), 1,
      sym__arg,
  [3129] = 2,
    ACTIONS(567), 1,
      anon_sym_LBRACE,
    STATE(40), 1,
      sym__arg,
  [3136] = 2,
    ACTIONS(624), 1,
      aux_sym_day_token1,
    STATE(177), 1,
      sym_day,
  [3143] = 2,
    ACTIONS(567), 1,
      anon_sym_LBRACE,
    STATE(41), 1,
      sym__arg,
  [3150] = 2,
    ACTIONS(616), 1,
      anon_sym_LBRACE,
    STATE(65), 1,
      sym__txt_arg,
  [3157] = 2,
    ACTIONS(626), 1,
      sym_year,
    ACTIONS(628), 1,
      sym_text,
  [3164] = 1,
    ACTIONS(630), 1,
      anon_sym_RBRACE,
  [3168] = 1,
    ACTIONS(632), 1,
      sym_month,
  [3172] = 1,
    ACTIONS(634), 1,
      anon_sym_RBRACK,
  [3176] = 1,
    ACTIONS(636), 1,
      anon_sym_DASH,
  [3180] = 1,
    ACTIONS(638), 1,
      anon_sym_LBRACE,
  [3184] = 1,
    ACTIONS(640), 1,
      anon_sym_RBRACE,
  [3188] = 1,
    ACTIONS(642), 1,
      anon_sym_LBRACE,
  [3192] = 1,
    ACTIONS(644), 1,
      anon_sym_RBRACE,
  [3196] = 1,
    ACTIONS(646), 1,
      anon_sym_RBRACE,
  [3200] = 1,
    ACTIONS(648), 1,
      anon_sym_RBRACK,
  [3204] = 1,
    ACTIONS(650), 1,
      anon_sym_LBRACE,
  [3208] = 1,
    ACTIONS(652), 1,
      sym_text,
  [3212] = 1,
    ACTIONS(654), 1,
      anon_sym_RPAREN,
  [3216] = 1,
    ACTIONS(656), 1,
      anon_sym_LBRACE,
  [3220] = 1,
    ACTIONS(658), 1,
      anon_sym_RBRACK,
  [3224] = 1,
    ACTIONS(660), 1,
      sym_text,
  [3228] = 1,
    ACTIONS(662), 1,
      anon_sym_LBRACE,
  [3232] = 1,
    ACTIONS(664), 1,
      anon_sym_LBRACE,
  [3236] = 1,
    ACTIONS(666), 1,
      aux_sym_day_token2,
  [3240] = 1,
    ACTIONS(668), 1,
      anon_sym_RBRACE,
  [3244] = 1,
    ACTIONS(670), 1,
      anon_sym_RBRACK,
  [3248] = 1,
    ACTIONS(672), 1,
      anon_sym_RBRACE,
  [3252] = 1,
    ACTIONS(674), 1,
      anon_sym_LBRACE,
  [3256] = 1,
    ACTIONS(676), 1,
      anon_sym_RBRACE,
  [3260] = 1,
    ACTIONS(678), 1,
      anon_sym_RBRACE,
  [3264] = 1,
    ACTIONS(680), 1,
      sym_text,
  [3268] = 1,
    ACTIONS(682), 1,
      anon_sym_DASH,
  [3272] = 1,
    ACTIONS(684), 1,
      anon_sym_RBRACE,
  [3276] = 1,
    ACTIONS(686), 1,
      anon_sym_LBRACK,
  [3280] = 1,
    ACTIONS(688), 1,
      sym_text,
  [3284] = 1,
    ACTIONS(690), 1,
      sym_text,
  [3288] = 1,
    ACTIONS(692), 1,
      sym_text,
  [3292] = 1,
    ACTIONS(694), 1,
      anon_sym_LPAREN,
  [3296] = 1,
    ACTIONS(696), 1,
      anon_sym_DASH,
  [3300] = 1,
    ACTIONS(329), 1,
      anon_sym_LBRACE,
  [3304] = 1,
    ACTIONS(698), 1,
      anon_sym_RBRACK_RBRACK,
  [3308] = 1,
    ACTIONS(700), 1,
      sym_text,
  [3312] = 1,
    ACTIONS(702), 1,
      anon_sym_RBRACK_RBRACK,
  [3316] = 1,
    ACTIONS(704), 1,
      anon_sym_RBRACE,
  [3320] = 1,
    ACTIONS(706), 1,
      ts_builtin_sym_end,
  [3324] = 1,
    ACTIONS(708), 1,
      anon_sym_LBRACK,
  [3328] = 1,
    ACTIONS(710), 1,
      sym_text,
  [3332] = 1,
    ACTIONS(712), 1,
      anon_sym_LBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 78,
  [SMALL_STATE(4)] = 155,
  [SMALL_STATE(5)] = 232,
  [SMALL_STATE(6)] = 309,
  [SMALL_STATE(7)] = 386,
  [SMALL_STATE(8)] = 463,
  [SMALL_STATE(9)] = 540,
  [SMALL_STATE(10)] = 617,
  [SMALL_STATE(11)] = 694,
  [SMALL_STATE(12)] = 768,
  [SMALL_STATE(13)] = 842,
  [SMALL_STATE(14)] = 916,
  [SMALL_STATE(15)] = 990,
  [SMALL_STATE(16)] = 1064,
  [SMALL_STATE(17)] = 1170,
  [SMALL_STATE(18)] = 1209,
  [SMALL_STATE(19)] = 1248,
  [SMALL_STATE(20)] = 1287,
  [SMALL_STATE(21)] = 1328,
  [SMALL_STATE(22)] = 1367,
  [SMALL_STATE(23)] = 1405,
  [SMALL_STATE(24)] = 1434,
  [SMALL_STATE(25)] = 1461,
  [SMALL_STATE(26)] = 1485,
  [SMALL_STATE(27)] = 1509,
  [SMALL_STATE(28)] = 1527,
  [SMALL_STATE(29)] = 1547,
  [SMALL_STATE(30)] = 1571,
  [SMALL_STATE(31)] = 1588,
  [SMALL_STATE(32)] = 1605,
  [SMALL_STATE(33)] = 1622,
  [SMALL_STATE(34)] = 1639,
  [SMALL_STATE(35)] = 1656,
  [SMALL_STATE(36)] = 1673,
  [SMALL_STATE(37)] = 1690,
  [SMALL_STATE(38)] = 1707,
  [SMALL_STATE(39)] = 1724,
  [SMALL_STATE(40)] = 1741,
  [SMALL_STATE(41)] = 1758,
  [SMALL_STATE(42)] = 1775,
  [SMALL_STATE(43)] = 1792,
  [SMALL_STATE(44)] = 1809,
  [SMALL_STATE(45)] = 1826,
  [SMALL_STATE(46)] = 1843,
  [SMALL_STATE(47)] = 1860,
  [SMALL_STATE(48)] = 1877,
  [SMALL_STATE(49)] = 1894,
  [SMALL_STATE(50)] = 1911,
  [SMALL_STATE(51)] = 1928,
  [SMALL_STATE(52)] = 1945,
  [SMALL_STATE(53)] = 1962,
  [SMALL_STATE(54)] = 1979,
  [SMALL_STATE(55)] = 1996,
  [SMALL_STATE(56)] = 2013,
  [SMALL_STATE(57)] = 2030,
  [SMALL_STATE(58)] = 2047,
  [SMALL_STATE(59)] = 2064,
  [SMALL_STATE(60)] = 2081,
  [SMALL_STATE(61)] = 2098,
  [SMALL_STATE(62)] = 2115,
  [SMALL_STATE(63)] = 2132,
  [SMALL_STATE(64)] = 2149,
  [SMALL_STATE(65)] = 2166,
  [SMALL_STATE(66)] = 2183,
  [SMALL_STATE(67)] = 2200,
  [SMALL_STATE(68)] = 2217,
  [SMALL_STATE(69)] = 2234,
  [SMALL_STATE(70)] = 2251,
  [SMALL_STATE(71)] = 2268,
  [SMALL_STATE(72)] = 2285,
  [SMALL_STATE(73)] = 2302,
  [SMALL_STATE(74)] = 2319,
  [SMALL_STATE(75)] = 2336,
  [SMALL_STATE(76)] = 2352,
  [SMALL_STATE(77)] = 2368,
  [SMALL_STATE(78)] = 2385,
  [SMALL_STATE(79)] = 2401,
  [SMALL_STATE(80)] = 2429,
  [SMALL_STATE(81)] = 2443,
  [SMALL_STATE(82)] = 2456,
  [SMALL_STATE(83)] = 2469,
  [SMALL_STATE(84)] = 2482,
  [SMALL_STATE(85)] = 2495,
  [SMALL_STATE(86)] = 2510,
  [SMALL_STATE(87)] = 2525,
  [SMALL_STATE(88)] = 2538,
  [SMALL_STATE(89)] = 2551,
  [SMALL_STATE(90)] = 2568,
  [SMALL_STATE(91)] = 2583,
  [SMALL_STATE(92)] = 2598,
  [SMALL_STATE(93)] = 2613,
  [SMALL_STATE(94)] = 2626,
  [SMALL_STATE(95)] = 2638,
  [SMALL_STATE(96)] = 2650,
  [SMALL_STATE(97)] = 2664,
  [SMALL_STATE(98)] = 2680,
  [SMALL_STATE(99)] = 2693,
  [SMALL_STATE(100)] = 2706,
  [SMALL_STATE(101)] = 2719,
  [SMALL_STATE(102)] = 2730,
  [SMALL_STATE(103)] = 2741,
  [SMALL_STATE(104)] = 2752,
  [SMALL_STATE(105)] = 2763,
  [SMALL_STATE(106)] = 2776,
  [SMALL_STATE(107)] = 2789,
  [SMALL_STATE(108)] = 2798,
  [SMALL_STATE(109)] = 2809,
  [SMALL_STATE(110)] = 2819,
  [SMALL_STATE(111)] = 2829,
  [SMALL_STATE(112)] = 2839,
  [SMALL_STATE(113)] = 2849,
  [SMALL_STATE(114)] = 2859,
  [SMALL_STATE(115)] = 2867,
  [SMALL_STATE(116)] = 2873,
  [SMALL_STATE(117)] = 2883,
  [SMALL_STATE(118)] = 2890,
  [SMALL_STATE(119)] = 2897,
  [SMALL_STATE(120)] = 2904,
  [SMALL_STATE(121)] = 2911,
  [SMALL_STATE(122)] = 2918,
  [SMALL_STATE(123)] = 2925,
  [SMALL_STATE(124)] = 2930,
  [SMALL_STATE(125)] = 2937,
  [SMALL_STATE(126)] = 2944,
  [SMALL_STATE(127)] = 2951,
  [SMALL_STATE(128)] = 2958,
  [SMALL_STATE(129)] = 2965,
  [SMALL_STATE(130)] = 2972,
  [SMALL_STATE(131)] = 2979,
  [SMALL_STATE(132)] = 2986,
  [SMALL_STATE(133)] = 2993,
  [SMALL_STATE(134)] = 3000,
  [SMALL_STATE(135)] = 3007,
  [SMALL_STATE(136)] = 3014,
  [SMALL_STATE(137)] = 3021,
  [SMALL_STATE(138)] = 3028,
  [SMALL_STATE(139)] = 3035,
  [SMALL_STATE(140)] = 3042,
  [SMALL_STATE(141)] = 3049,
  [SMALL_STATE(142)] = 3056,
  [SMALL_STATE(143)] = 3063,
  [SMALL_STATE(144)] = 3070,
  [SMALL_STATE(145)] = 3077,
  [SMALL_STATE(146)] = 3084,
  [SMALL_STATE(147)] = 3089,
  [SMALL_STATE(148)] = 3096,
  [SMALL_STATE(149)] = 3103,
  [SMALL_STATE(150)] = 3110,
  [SMALL_STATE(151)] = 3115,
  [SMALL_STATE(152)] = 3122,
  [SMALL_STATE(153)] = 3129,
  [SMALL_STATE(154)] = 3136,
  [SMALL_STATE(155)] = 3143,
  [SMALL_STATE(156)] = 3150,
  [SMALL_STATE(157)] = 3157,
  [SMALL_STATE(158)] = 3164,
  [SMALL_STATE(159)] = 3168,
  [SMALL_STATE(160)] = 3172,
  [SMALL_STATE(161)] = 3176,
  [SMALL_STATE(162)] = 3180,
  [SMALL_STATE(163)] = 3184,
  [SMALL_STATE(164)] = 3188,
  [SMALL_STATE(165)] = 3192,
  [SMALL_STATE(166)] = 3196,
  [SMALL_STATE(167)] = 3200,
  [SMALL_STATE(168)] = 3204,
  [SMALL_STATE(169)] = 3208,
  [SMALL_STATE(170)] = 3212,
  [SMALL_STATE(171)] = 3216,
  [SMALL_STATE(172)] = 3220,
  [SMALL_STATE(173)] = 3224,
  [SMALL_STATE(174)] = 3228,
  [SMALL_STATE(175)] = 3232,
  [SMALL_STATE(176)] = 3236,
  [SMALL_STATE(177)] = 3240,
  [SMALL_STATE(178)] = 3244,
  [SMALL_STATE(179)] = 3248,
  [SMALL_STATE(180)] = 3252,
  [SMALL_STATE(181)] = 3256,
  [SMALL_STATE(182)] = 3260,
  [SMALL_STATE(183)] = 3264,
  [SMALL_STATE(184)] = 3268,
  [SMALL_STATE(185)] = 3272,
  [SMALL_STATE(186)] = 3276,
  [SMALL_STATE(187)] = 3280,
  [SMALL_STATE(188)] = 3284,
  [SMALL_STATE(189)] = 3288,
  [SMALL_STATE(190)] = 3292,
  [SMALL_STATE(191)] = 3296,
  [SMALL_STATE(192)] = 3300,
  [SMALL_STATE(193)] = 3304,
  [SMALL_STATE(194)] = 3308,
  [SMALL_STATE(195)] = 3312,
  [SMALL_STATE(196)] = 3316,
  [SMALL_STATE(197)] = 3320,
  [SMALL_STATE(198)] = 3324,
  [SMALL_STATE(199)] = 3328,
  [SMALL_STATE(200)] = 3332,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_braces_repeat1, 2), SHIFT_REPEAT(11),
  [24] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_braces_repeat1, 2),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_braces_repeat1, 2), SHIFT_REPEAT(12),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_braces_repeat1, 2), SHIFT_REPEAT(16),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_braces_repeat1, 2), SHIFT_REPEAT(2),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_braces_repeat1, 2), SHIFT_REPEAT(125),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_braces_repeat1, 2), SHIFT_REPEAT(142),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_braces_repeat1, 2), SHIFT_REPEAT(89),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_braces_repeat1, 2), SHIFT_REPEAT(2),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__arg_repeat1, 2),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__arg_repeat1, 2), SHIFT_REPEAT(11),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__arg_repeat1, 2), SHIFT_REPEAT(12),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__arg_repeat1, 2), SHIFT_REPEAT(16),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__arg_repeat1, 2), SHIFT_REPEAT(3),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__arg_repeat1, 2), SHIFT_REPEAT(125),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__arg_repeat1, 2), SHIFT_REPEAT(142),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__arg_repeat1, 2), SHIFT_REPEAT(89),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__arg_repeat1, 2), SHIFT_REPEAT(3),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(11),
  [102] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(12),
  [105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(16),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [111] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(125),
  [114] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(142),
  [117] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(89),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_queries, 1),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [233] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_queries_repeat1, 2), SHIFT_REPEAT(199),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_queries_repeat1, 2),
  [238] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_queries_repeat1, 2), SHIFT_REPEAT(120),
  [241] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_queries_repeat1, 2), SHIFT_REPEAT(121),
  [244] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_queries_repeat1, 2), SHIFT_REPEAT(122),
  [247] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_queries_repeat1, 2), SHIFT_REPEAT(162),
  [250] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_queries_repeat1, 2), SHIFT_REPEAT(164),
  [253] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_queries_repeat1, 2), SHIFT_REPEAT(21),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ident, 2, .production_id = 1),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ident, 2, .production_id = 1),
  [264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ident_repeat1, 2),
  [270] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ident_repeat1, 2), SHIFT_REPEAT(15),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ident_repeat1, 2),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ident, 3, .production_id = 1),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ident, 3, .production_id = 1),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__arg, 3),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__arg, 3),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ident_with_method_calls, 4),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ident_with_method_calls, 4),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ident_with_method_calls_repeat1, 2),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ident_with_method_calls_repeat1, 2),
  [291] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ident_with_method_calls_repeat1, 2), SHIFT_REPEAT(29),
  [294] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ident_with_method_calls_repeat1, 2), SHIFT_REPEAT(29),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_display_math, 2),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_display_math, 2),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_strong, 3),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_strong, 3),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_markdown_link, 6, .production_id = 12),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_markdown_link, 6, .production_id = 12),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_tree, 5),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_tree, 5),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transclude, 5, .production_id = 10),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transclude, 5, .production_id = 10),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 5),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_export, 5),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 5),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import, 5),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fun_spec, 3, .production_id = 9),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fun_spec, 3, .production_id = 9),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__txt_arg, 3),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__txt_arg, 3),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_put, 4, .production_id = 7),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_put, 4, .production_id = 7),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 4),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_tex, 4),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_tex, 4),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 8, .production_id = 13),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 8, .production_id = 13),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta, 4),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_meta, 4),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fun_spec, 2, .production_id = 6),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fun_spec, 2, .production_id = 6),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 9, .production_id = 14),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_date, 9, .production_id = 14),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unlabeled_link, 3),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unlabeled_link, 3),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pre, 3),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pre, 3),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_blockquote, 3),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_blockquote, 3),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 3),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 3),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ol, 3),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ol, 3),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ul, 3),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ul, 3),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_li, 3),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_li, 3),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_em, 3),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_em, 3),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_math, 2),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_math, 2),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_p, 3),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_p, 3),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 3),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 3),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_patch, 9, .production_id = 15),
  [407] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_patch, 9, .production_id = 15),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 3),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_open, 3),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_get, 3),
  [415] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_get, 3),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_squares, 3),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_squares, 3),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parens, 3),
  [423] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parens, 3),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title, 3),
  [427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title, 3),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scope, 3),
  [431] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scope, 3),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_author, 3, .production_id = 2),
  [435] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_author, 3, .production_id = 2),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contributor, 3, .production_id = 3),
  [439] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_contributor, 3, .production_id = 3),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tex, 3),
  [443] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tex, 3),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 3, .production_id = 4),
  [447] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_date, 3, .production_id = 4),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3, .production_id = 5),
  [451] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 3, .production_id = 5),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let, 3),
  [455] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let, 3),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def, 3),
  [459] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_def, 3),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace, 3),
  [463] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace, 3),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alloc, 3),
  [467] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alloc, 3),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_taxon, 3),
  [471] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_taxon, 3),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [475] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__query_repeat1, 2),
  [477] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__query_repeat1, 2), SHIFT_REPEAT(77),
  [480] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__node, 1),
  [482] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__node, 1),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [502] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_meta, 2, .production_id = 11),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_meta, 2, .production_id = 11),
  [506] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_taxon, 2),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_taxon, 2),
  [510] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_or, 4),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_or, 4),
  [514] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_and, 4),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_and, 4),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_id_repeat1, 2),
  [520] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_id_repeat1, 2), SHIFT_REPEAT(85),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id, 1),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [527] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_author, 2),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_author, 2),
  [531] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_tag, 2),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_tag, 2),
  [535] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [537] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [539] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_object_repeat1, 2),
  [541] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_repeat1, 2), SHIFT_REPEAT(173),
  [544] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2), SHIFT_REPEAT(90),
  [547] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [549] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [553] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [563] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [571] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__query, 2),
  [573] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__query, 1),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [579] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ident_repeat1, 2), SHIFT_REPEAT(14),
  [582] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__query, 3),
  [584] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_prefix_repeat1, 2),
  [592] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_prefix_repeat1, 2), SHIFT_REPEAT(112),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fun_spec_repeat1, 2),
  [597] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fun_spec_repeat1, 2), SHIFT_REPEAT(183),
  [600] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_decl, 4, .production_id = 16),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_decl, 4, .production_id = 16),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_addr, 3, .production_id = 8),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prefix, 1),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fun_spec_repeat1, 3),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [626] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [628] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_day, 2),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_link, 1),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [706] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
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
