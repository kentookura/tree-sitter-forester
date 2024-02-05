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
#define STATE_COUNT 321
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 142
#define ALIAS_COUNT 1
#define TOKEN_COUNT 64
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 22
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 21

enum {
  anon_sym_BSLASH = 1,
  anon_sym_title = 2,
  anon_sym_tag = 3,
  anon_sym_author = 4,
  anon_sym_contributor = 5,
  anon_sym_ref = 6,
  anon_sym_date = 7,
  anon_sym_LBRACE = 8,
  anon_sym_DASH = 9,
  anon_sym_RBRACE = 10,
  sym_year = 11,
  sym_month = 12,
  aux_sym_day_token1 = 13,
  aux_sym_day_token2 = 14,
  anon_sym_def = 15,
  anon_sym_alloc = 16,
  anon_sym_taxon = 17,
  anon_sym_meta = 18,
  anon_sym_import = 19,
  anon_sym_export = 20,
  anon_sym_namespace = 21,
  anon_sym_transclude = 22,
  anon_sym_let = 23,
  anon_sym_tex = 24,
  anon_sym_iftex = 25,
  anon_sym_block = 26,
  anon_sym_scope = 27,
  anon_sym_put = 28,
  anon_sym_get = 29,
  anon_sym_open = 30,
  anon_sym_query = 31,
  anon_sym_object = 32,
  anon_sym_LBRACK = 33,
  anon_sym_RBRACK = 34,
  anon_sym_patch = 35,
  anon_sym_call = 36,
  sym_comment = 37,
  anon_sym_POUND = 38,
  anon_sym_POUND_POUND = 39,
  anon_sym_p = 40,
  anon_sym_em = 41,
  anon_sym_strong = 42,
  anon_sym_li = 43,
  anon_sym_ul = 44,
  anon_sym_ol = 45,
  anon_sym_code = 46,
  anon_sym_blockquote = 47,
  anon_sym_pre = 48,
  anon_sym_BSLASHquery_SLASHauthor = 49,
  anon_sym_BSLASHquery_SLASHtag = 50,
  anon_sym_BSLASHquery_SLASHtaxon = 51,
  anon_sym_BSLASHquery_SLASHand = 52,
  anon_sym_BSLASHquery_SLASHor = 53,
  anon_sym_LBRACE_RBRACE = 54,
  anon_sym__ = 55,
  anon_sym_LPAREN = 56,
  anon_sym_RPAREN = 57,
  anon_sym_LBRACK_LBRACK = 58,
  anon_sym_RBRACK_RBRACK = 59,
  aux_sym__whitespace_token1 = 60,
  sym__alpha = 61,
  sym__digit = 62,
  sym_text = 63,
  sym_source_file = 64,
  sym__head_node = 65,
  sym_title = 66,
  sym_tag = 67,
  sym_author = 68,
  sym_contributor = 69,
  sym_ref = 70,
  sym_date = 71,
  sym_day = 72,
  sym_def = 73,
  sym_alloc = 74,
  sym_taxon = 75,
  sym_meta = 76,
  sym_import = 77,
  sym_export = 78,
  sym_namespace = 79,
  sym_transclude = 80,
  sym_let = 81,
  sym_tex = 82,
  sym_if_tex = 83,
  sym_block = 84,
  sym_scope = 85,
  sym_put = 86,
  sym_get = 87,
  sym_open = 88,
  sym_query_tree = 89,
  sym__default = 90,
  sym_object = 91,
  sym_patch = 92,
  sym_call = 93,
  sym__prim = 94,
  sym_inline_math = 95,
  sym_display_math = 96,
  sym_p = 97,
  sym_em = 98,
  sym_strong = 99,
  sym_li = 100,
  sym_ul = 101,
  sym_ol = 102,
  sym_code = 103,
  sym_blockquote = 104,
  sym_pre = 105,
  sym_query = 106,
  sym_query0 = 107,
  sym_query_author = 108,
  sym_query_tag = 109,
  sym_query_taxon = 110,
  sym_query_and = 111,
  sym_query_or = 112,
  sym_query_meta = 113,
  sym_queries = 114,
  sym_method_decl = 115,
  sym_method = 116,
  sym_method_body = 117,
  sym_fun_spec = 118,
  sym_binder = 119,
  sym_ident = 120,
  sym_arg = 121,
  sym__textual_node = 122,
  sym__link = 123,
  sym_addr = 124,
  sym_id = 125,
  sym_prefix = 126,
  sym_markdown_link = 127,
  sym_link_label = 128,
  sym_link_dest = 129,
  sym_unlabeled_link = 130,
  sym_external_link = 131,
  sym__whitespace = 132,
  sym__txt_arg = 133,
  aux_sym_source_file_repeat1 = 134,
  aux_sym_object_repeat1 = 135,
  aux_sym_query_repeat1 = 136,
  aux_sym_queries_repeat1 = 137,
  aux_sym_binder_repeat1 = 138,
  aux_sym_arg_repeat1 = 139,
  aux_sym_id_repeat1 = 140,
  aux_sym_prefix_repeat1 = 141,
  anon_alias_sym_link_label = 142,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_BSLASH] = "\\",
  [anon_sym_title] = "title",
  [anon_sym_tag] = "tag",
  [anon_sym_author] = "author",
  [anon_sym_contributor] = "contributor",
  [anon_sym_ref] = "ref",
  [anon_sym_date] = "date",
  [anon_sym_LBRACE] = "{",
  [anon_sym_DASH] = "-",
  [anon_sym_RBRACE] = "}",
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
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
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
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACK_LBRACK] = "[[",
  [anon_sym_RBRACK_RBRACK] = "]]",
  [aux_sym__whitespace_token1] = "_whitespace_token1",
  [sym__alpha] = "_alpha",
  [sym__digit] = "_digit",
  [sym_text] = "text",
  [sym_source_file] = "source_file",
  [sym__head_node] = "_head_node",
  [sym_title] = "title",
  [sym_tag] = "tag",
  [sym_author] = "author",
  [sym_contributor] = "contributor",
  [sym_ref] = "ref",
  [sym_date] = "date",
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
  [sym_p] = "p",
  [sym_em] = "em",
  [sym_strong] = "strong",
  [sym_li] = "li",
  [sym_ul] = "ul",
  [sym_ol] = "ol",
  [sym_code] = "code",
  [sym_blockquote] = "blockquote",
  [sym_pre] = "pre",
  [sym_query] = "query",
  [sym_query0] = "query0",
  [sym_query_author] = "query_author",
  [sym_query_tag] = "query_tag",
  [sym_query_taxon] = "query_taxon",
  [sym_query_and] = "query_and",
  [sym_query_or] = "query_or",
  [sym_query_meta] = "query_meta",
  [sym_queries] = "queries",
  [sym_method_decl] = "method_decl",
  [sym_method] = "method",
  [sym_method_body] = "method_body",
  [sym_fun_spec] = "fun_spec",
  [sym_binder] = "binder",
  [sym_ident] = "ident",
  [sym_arg] = "arg",
  [sym__textual_node] = "_textual_node",
  [sym__link] = "_link",
  [sym_addr] = "addr",
  [sym_id] = "id",
  [sym_prefix] = "prefix",
  [sym_markdown_link] = "markdown_link",
  [sym_link_label] = "link_label",
  [sym_link_dest] = "link_dest",
  [sym_unlabeled_link] = "unlabeled_link",
  [sym_external_link] = "external_link",
  [sym__whitespace] = "_whitespace",
  [sym__txt_arg] = "_txt_arg",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_object_repeat1] = "object_repeat1",
  [aux_sym_query_repeat1] = "query_repeat1",
  [aux_sym_queries_repeat1] = "queries_repeat1",
  [aux_sym_binder_repeat1] = "binder_repeat1",
  [aux_sym_arg_repeat1] = "arg_repeat1",
  [aux_sym_id_repeat1] = "id_repeat1",
  [aux_sym_prefix_repeat1] = "prefix_repeat1",
  [anon_alias_sym_link_label] = "link_label",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [anon_sym_title] = anon_sym_title,
  [anon_sym_tag] = anon_sym_tag,
  [anon_sym_author] = anon_sym_author,
  [anon_sym_contributor] = anon_sym_contributor,
  [anon_sym_ref] = anon_sym_ref,
  [anon_sym_date] = anon_sym_date,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
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
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
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
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACK_LBRACK] = anon_sym_LBRACK_LBRACK,
  [anon_sym_RBRACK_RBRACK] = anon_sym_RBRACK_RBRACK,
  [aux_sym__whitespace_token1] = aux_sym__whitespace_token1,
  [sym__alpha] = sym__alpha,
  [sym__digit] = sym__digit,
  [sym_text] = sym_text,
  [sym_source_file] = sym_source_file,
  [sym__head_node] = sym__head_node,
  [sym_title] = sym_title,
  [sym_tag] = sym_tag,
  [sym_author] = sym_author,
  [sym_contributor] = sym_contributor,
  [sym_ref] = sym_ref,
  [sym_date] = sym_date,
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
  [sym_query] = sym_query,
  [sym_query0] = sym_query0,
  [sym_query_author] = sym_query_author,
  [sym_query_tag] = sym_query_tag,
  [sym_query_taxon] = sym_query_taxon,
  [sym_query_and] = sym_query_and,
  [sym_query_or] = sym_query_or,
  [sym_query_meta] = sym_query_meta,
  [sym_queries] = sym_queries,
  [sym_method_decl] = sym_method_decl,
  [sym_method] = sym_method,
  [sym_method_body] = sym_method_body,
  [sym_fun_spec] = sym_fun_spec,
  [sym_binder] = sym_binder,
  [sym_ident] = sym_ident,
  [sym_arg] = sym_arg,
  [sym__textual_node] = sym__textual_node,
  [sym__link] = sym__link,
  [sym_addr] = sym_addr,
  [sym_id] = sym_id,
  [sym_prefix] = sym_prefix,
  [sym_markdown_link] = sym_markdown_link,
  [sym_link_label] = sym_link_label,
  [sym_link_dest] = sym_link_dest,
  [sym_unlabeled_link] = sym_unlabeled_link,
  [sym_external_link] = sym_external_link,
  [sym__whitespace] = sym__whitespace,
  [sym__txt_arg] = sym__txt_arg,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_object_repeat1] = aux_sym_object_repeat1,
  [aux_sym_query_repeat1] = aux_sym_query_repeat1,
  [aux_sym_queries_repeat1] = aux_sym_queries_repeat1,
  [aux_sym_binder_repeat1] = aux_sym_binder_repeat1,
  [aux_sym_arg_repeat1] = aux_sym_arg_repeat1,
  [aux_sym_id_repeat1] = aux_sym_id_repeat1,
  [aux_sym_prefix_repeat1] = aux_sym_prefix_repeat1,
  [anon_alias_sym_link_label] = anon_alias_sym_link_label,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_title] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tag] = {
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
  [anon_sym_ref] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_date] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
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
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
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
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
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
  [sym__head_node] = {
    .visible = false,
    .named = true,
  },
  [sym_title] = {
    .visible = true,
    .named = true,
  },
  [sym_tag] = {
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
  [sym_ref] = {
    .visible = true,
    .named = true,
  },
  [sym_date] = {
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
  [sym_query] = {
    .visible = true,
    .named = true,
  },
  [sym_query0] = {
    .visible = true,
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
  [sym_method] = {
    .visible = true,
    .named = true,
  },
  [sym_method_body] = {
    .visible = true,
    .named = true,
  },
  [sym_fun_spec] = {
    .visible = true,
    .named = true,
  },
  [sym_binder] = {
    .visible = true,
    .named = true,
  },
  [sym_ident] = {
    .visible = true,
    .named = true,
  },
  [sym_arg] = {
    .visible = true,
    .named = true,
  },
  [sym__textual_node] = {
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
  [sym_link_label] = {
    .visible = true,
    .named = true,
  },
  [sym_link_dest] = {
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
  [aux_sym_object_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_query_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_queries_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_binder_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_arg_repeat1] = {
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
  [anon_alias_sym_link_label] = {
    .visible = true,
    .named = false,
  },
};

enum {
  field_arg = 1,
  field_argument = 2,
  field_author = 3,
  field_binder = 4,
  field_contributor = 5,
  field_date = 6,
  field_dest = 7,
  field_identifier = 8,
  field_k = 9,
  field_key = 10,
  field_link_label = 11,
  field_math = 12,
  field_object = 13,
  field_ref = 14,
  field_self = 15,
  field_tag = 16,
  field_title = 17,
  field_transclusion = 18,
  field_v = 19,
  field_value = 20,
  field_x = 21,
  field_y = 22,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_arg] = "arg",
  [field_argument] = "argument",
  [field_author] = "author",
  [field_binder] = "binder",
  [field_contributor] = "contributor",
  [field_date] = "date",
  [field_dest] = "dest",
  [field_identifier] = "identifier",
  [field_k] = "k",
  [field_key] = "key",
  [field_link_label] = "link_label",
  [field_math] = "math",
  [field_object] = "object",
  [field_ref] = "ref",
  [field_self] = "self",
  [field_tag] = "tag",
  [field_title] = "title",
  [field_transclusion] = "transclusion",
  [field_v] = "v",
  [field_value] = "value",
  [field_x] = "x",
  [field_y] = "y",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 3},
  [3] = {.index = 4, .length = 3},
  [4] = {.index = 7, .length = 3},
  [5] = {.index = 10, .length = 3},
  [6] = {.index = 13, .length = 3},
  [7] = {.index = 16, .length = 3},
  [8] = {.index = 19, .length = 1},
  [9] = {.index = 20, .length = 3},
  [10] = {.index = 23, .length = 2},
  [11] = {.index = 25, .length = 2},
  [12] = {.index = 27, .length = 2},
  [13] = {.index = 29, .length = 1},
  [14] = {.index = 30, .length = 3},
  [15] = {.index = 33, .length = 5},
  [16] = {.index = 38, .length = 2},
  [17] = {.index = 40, .length = 3},
  [18] = {.index = 43, .length = 9},
  [19] = {.index = 52, .length = 4},
  [20] = {.index = 56, .length = 4},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_math, 1},
  [1] =
    {field_title, 0},
    {field_title, 1},
    {field_title, 2},
  [4] =
    {field_tag, 0},
    {field_tag, 1},
    {field_tag, 2},
  [7] =
    {field_author, 0},
    {field_author, 1},
    {field_author, 2},
  [10] =
    {field_contributor, 0},
    {field_contributor, 1},
    {field_contributor, 2},
  [13] =
    {field_ref, 0},
    {field_ref, 1},
    {field_ref, 2},
  [16] =
    {field_date, 0},
    {field_date, 1},
    {field_date, 2},
  [19] =
    {field_arg, 2},
  [20] =
    {field_link_label, 0},
    {field_link_label, 1},
    {field_link_label, 2},
  [23] =
    {field_argument, 1},
    {field_identifier, 0},
  [25] =
    {field_x, 2},
    {field_y, 3},
  [27] =
    {field_argument, 3},
    {field_identifier, 2},
  [29] =
    {field_dest, 1},
  [30] =
    {field_argument, 2},
    {field_binder, 1},
    {field_identifier, 0},
  [33] =
    {field_transclusion, 0},
    {field_transclusion, 1},
    {field_transclusion, 2},
    {field_transclusion, 3},
    {field_transclusion, 4},
  [38] =
    {field_k, 0},
    {field_v, 1},
  [40] =
    {field_self, 2},
    {field_self, 3},
    {field_self, 4},
  [43] =
    {field_date, 0},
    {field_date, 1},
    {field_date, 2},
    {field_date, 3},
    {field_date, 4},
    {field_date, 5},
    {field_date, 6},
    {field_date, 7},
    {field_date, 8},
  [52] =
    {field_object, 2},
    {field_self, 3},
    {field_self, 4},
    {field_self, 5},
  [56] =
    {field_key, 0},
    {field_key, 1},
    {field_key, 2},
    {field_value, 3},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [9] = {
    [0] = anon_alias_sym_link_label,
    [1] = anon_alias_sym_link_label,
    [2] = anon_alias_sym_link_label,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 3,
  [5] = 3,
  [6] = 3,
  [7] = 7,
  [8] = 7,
  [9] = 7,
  [10] = 7,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 13,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 19,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 23,
  [26] = 22,
  [27] = 24,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 29,
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
  [59] = 40,
  [60] = 60,
  [61] = 30,
  [62] = 62,
  [63] = 63,
  [64] = 30,
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
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 33,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 54,
  [91] = 91,
  [92] = 63,
  [93] = 58,
  [94] = 53,
  [95] = 52,
  [96] = 51,
  [97] = 48,
  [98] = 68,
  [99] = 70,
  [100] = 47,
  [101] = 32,
  [102] = 71,
  [103] = 35,
  [104] = 72,
  [105] = 74,
  [106] = 77,
  [107] = 78,
  [108] = 46,
  [109] = 80,
  [110] = 45,
  [111] = 84,
  [112] = 91,
  [113] = 85,
  [114] = 44,
  [115] = 43,
  [116] = 42,
  [117] = 89,
  [118] = 88,
  [119] = 65,
  [120] = 120,
  [121] = 34,
  [122] = 69,
  [123] = 123,
  [124] = 87,
  [125] = 73,
  [126] = 83,
  [127] = 75,
  [128] = 82,
  [129] = 81,
  [130] = 123,
  [131] = 79,
  [132] = 41,
  [133] = 76,
  [134] = 39,
  [135] = 38,
  [136] = 37,
  [137] = 36,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 138,
  [142] = 142,
  [143] = 139,
  [144] = 140,
  [145] = 145,
  [146] = 145,
  [147] = 147,
  [148] = 147,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 24,
  [155] = 155,
  [156] = 156,
  [157] = 155,
  [158] = 153,
  [159] = 156,
  [160] = 24,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 167,
  [171] = 171,
  [172] = 164,
  [173] = 173,
  [174] = 174,
  [175] = 33,
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
  [191] = 190,
  [192] = 192,
  [193] = 183,
  [194] = 194,
  [195] = 174,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 194,
  [200] = 200,
  [201] = 196,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 197,
  [206] = 206,
  [207] = 176,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 206,
  [216] = 208,
  [217] = 210,
  [218] = 211,
  [219] = 212,
  [220] = 30,
  [221] = 214,
  [222] = 222,
  [223] = 223,
  [224] = 202,
  [225] = 222,
  [226] = 223,
  [227] = 200,
  [228] = 228,
  [229] = 180,
  [230] = 230,
  [231] = 203,
  [232] = 181,
  [233] = 182,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 209,
  [239] = 204,
  [240] = 177,
  [241] = 179,
  [242] = 184,
  [243] = 185,
  [244] = 186,
  [245] = 237,
  [246] = 189,
  [247] = 192,
  [248] = 198,
  [249] = 236,
  [250] = 234,
  [251] = 230,
  [252] = 228,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 260,
  [266] = 263,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 263,
  [273] = 273,
  [274] = 271,
  [275] = 253,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 277,
  [282] = 282,
  [283] = 278,
  [284] = 263,
  [285] = 279,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 280,
  [291] = 291,
  [292] = 282,
  [293] = 293,
  [294] = 262,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 267,
  [306] = 264,
  [307] = 254,
  [308] = 256,
  [309] = 255,
  [310] = 304,
  [311] = 298,
  [312] = 296,
  [313] = 301,
  [314] = 314,
  [315] = 268,
  [316] = 273,
  [317] = 297,
  [318] = 257,
  [319] = 269,
  [320] = 314,
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
      if (eof) ADVANCE(52);
      if (lookahead == '#') ADVANCE(120);
      if (lookahead == '%') ADVANCE(119);
      if (lookahead == '(') ADVANCE(156);
      if (lookahead == ')') ADVANCE(157);
      if (lookahead == '-') ADVANCE(68);
      if (lookahead == '[') ADVANCE(112);
      if (lookahead == '\\') ADVANCE(53);
      if (lookahead == ']') ADVANCE(114);
      if (lookahead == '_') ADVANCE(155);
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
      if (lookahead == 'p') ADVANCE(122);
      if (lookahead == 'q') ADVANCE(259);
      if (lookahead == 'r') ADVANCE(189);
      if (lookahead == 's') ADVANCE(172);
      if (lookahead == 't') ADVANCE(162);
      if (lookahead == 'u') ADVANCE(207);
      if (lookahead == '{') ADVANCE(67);
      if (lookahead == '}') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(73);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(74);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 1:
      if (lookahead == '#') ADVANCE(120);
      if (lookahead == '%') ADVANCE(119);
      if (lookahead == '[') ADVANCE(112);
      if (lookahead == '\\') ADVANCE(53);
      if (lookahead == '{') ADVANCE(67);
      if (lookahead == '}') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(373);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(1)
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ']') ADVANCE(379);
      END_STATE();
    case 2:
      if (lookahead == ')') ADVANCE(157);
      if (lookahead == '-') ADVANCE(68);
      if (lookahead == ']') ADVANCE(7);
      if (lookahead == '_') ADVANCE(155);
      if (lookahead == '}') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 3:
      if (lookahead == ')') ADVANCE(157);
      if (lookahead == '[') ADVANCE(111);
      if (lookahead == ']') ADVANCE(7);
      if (lookahead == 'b') ADVANCE(26);
      if (lookahead == 'c') ADVANCE(33);
      if (lookahead == 'e') ADVANCE(27);
      if (lookahead == 'l') ADVANCE(22);
      if (lookahead == 'o') ADVANCE(24);
      if (lookahead == 'p') ADVANCE(124);
      if (lookahead == 's') ADVANCE(45);
      if (lookahead == 'u') ADVANCE(25);
      if (lookahead == '{') ADVANCE(67);
      if (lookahead == '}') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(73);
      END_STATE();
    case 4:
      if (lookahead == '/') ADVANCE(10);
      END_STATE();
    case 5:
      if (lookahead == '0') ADVANCE(51);
      if (lookahead == '1') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(71);
      END_STATE();
    case 6:
      if (lookahead == '[') ADVANCE(111);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == '{') ADVANCE(66);
      if (lookahead == '}') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(160);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(6)
      END_STATE();
    case 7:
      if (lookahead == ']') ADVANCE(159);
      END_STATE();
    case 8:
      if (lookahead == ']') ADVANCE(113);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(74);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(321);
      if (lookahead == 'b') ADVANCE(314);
      if (lookahead == 'c') ADVANCE(274);
      if (lookahead == 'd') ADVANCE(272);
      if (lookahead == 'e') ADVANCE(322);
      if (lookahead == 'g') ADVANCE(300);
      if (lookahead == 'i') ADVANCE(306);
      if (lookahead == 'l') ADVANCE(301);
      if (lookahead == 'm') ADVANCE(303);
      if (lookahead == 'n') ADVANCE(269);
      if (lookahead == 'o') ADVANCE(276);
      if (lookahead == 'p') ADVANCE(123);
      if (lookahead == 'q') ADVANCE(367);
      if (lookahead == 'r') ADVANCE(297);
      if (lookahead == 's') ADVANCE(280);
      if (lookahead == 't') ADVANCE(270);
      if (lookahead == 'u') ADVANCE(315);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(268);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(9)
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '%' &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(379);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(28);
      if (lookahead == 'o') ADVANCE(40);
      if (lookahead == 't') ADVANCE(11);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(19);
      END_STATE();
    case 12:
      if (lookahead == 'c') ADVANCE(23);
      END_STATE();
    case 13:
      if (lookahead == 'd') ADVANCE(152);
      END_STATE();
    case 14:
      if (lookahead == 'd') ADVANCE(17);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(146);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(140);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(143);
      END_STATE();
    case 19:
      if (lookahead == 'g') ADVANCE(150);
      if (lookahead == 'x') ADVANCE(31);
      END_STATE();
    case 20:
      if (lookahead == 'g') ADVANCE(128);
      END_STATE();
    case 21:
      if (lookahead == 'h') ADVANCE(35);
      END_STATE();
    case 22:
      if (lookahead == 'i') ADVANCE(131);
      END_STATE();
    case 23:
      if (lookahead == 'k') ADVANCE(38);
      END_STATE();
    case 24:
      if (lookahead == 'l') ADVANCE(137);
      END_STATE();
    case 25:
      if (lookahead == 'l') ADVANCE(134);
      END_STATE();
    case 26:
      if (lookahead == 'l') ADVANCE(32);
      END_STATE();
    case 27:
      if (lookahead == 'm') ADVANCE(125);
      END_STATE();
    case 28:
      if (lookahead == 'n') ADVANCE(13);
      if (lookahead == 'u') ADVANCE(43);
      END_STATE();
    case 29:
      if (lookahead == 'n') ADVANCE(151);
      END_STATE();
    case 30:
      if (lookahead == 'n') ADVANCE(20);
      END_STATE();
    case 31:
      if (lookahead == 'o') ADVANCE(29);
      END_STATE();
    case 32:
      if (lookahead == 'o') ADVANCE(12);
      END_STATE();
    case 33:
      if (lookahead == 'o') ADVANCE(14);
      END_STATE();
    case 34:
      if (lookahead == 'o') ADVANCE(30);
      END_STATE();
    case 35:
      if (lookahead == 'o') ADVANCE(41);
      END_STATE();
    case 36:
      if (lookahead == 'o') ADVANCE(44);
      END_STATE();
    case 37:
      if (lookahead == 'q') ADVANCE(46);
      END_STATE();
    case 38:
      if (lookahead == 'q') ADVANCE(47);
      END_STATE();
    case 39:
      if (lookahead == 'r') ADVANCE(48);
      END_STATE();
    case 40:
      if (lookahead == 'r') ADVANCE(153);
      END_STATE();
    case 41:
      if (lookahead == 'r') ADVANCE(149);
      END_STATE();
    case 42:
      if (lookahead == 'r') ADVANCE(34);
      END_STATE();
    case 43:
      if (lookahead == 't') ADVANCE(21);
      END_STATE();
    case 44:
      if (lookahead == 't') ADVANCE(18);
      END_STATE();
    case 45:
      if (lookahead == 't') ADVANCE(42);
      END_STATE();
    case 46:
      if (lookahead == 'u') ADVANCE(15);
      END_STATE();
    case 47:
      if (lookahead == 'u') ADVANCE(36);
      END_STATE();
    case 48:
      if (lookahead == 'y') ADVANCE(4);
      END_STATE();
    case 49:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(374);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(49)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '%' &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(379);
      END_STATE();
    case 50:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(375);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(50)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(378);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '%' &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(379);
      END_STATE();
    case 51:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(71);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_title);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_title);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(379);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_tag);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_tag);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(379);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_author);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_author);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(379);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_contributor);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_contributor);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(379);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_ref);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_ref);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(379);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_date);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_date);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(379);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '}') ADVANCE(154);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_year);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(379);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_month);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_month);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(71);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_day_token1);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_day_token2);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_def);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_def);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(379);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_alloc);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_alloc);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(379);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_taxon);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_taxon);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(379);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_meta);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_meta);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(379);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_import);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_import);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(379);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_export);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_export);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(379);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_namespace);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_namespace);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(379);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_transclude);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_transclude);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(379);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_let);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_let);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(379);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_tex);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_tex);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(379);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_iftex);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_iftex);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(379);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_block);
      if (lookahead == 'q') ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_block);
      if (lookahead == 'q') ADVANCE(368);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(379);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_scope);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_scope);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(379);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_put);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_put);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(379);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_get);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_get);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(379);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_open);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_open);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(379);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_query);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_query);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(379);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_object);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_object);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(379);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '[') ADVANCE(158);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (lookahead == ']') ADVANCE(159);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_patch);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_patch);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(379);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_call);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_call);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(379);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(119);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '#') ADVANCE(121);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_POUND_POUND);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_p);
      if (lookahead == 'a') ADVANCE(250);
      if (lookahead == 'r') ADVANCE(180);
      if (lookahead == 'u') ADVANCE(246);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_p);
      if (lookahead == 'a') ADVANCE(358);
      if (lookahead == 'r') ADVANCE(288);
      if (lookahead == 'u') ADVANCE(354);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(379);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_p);
      if (lookahead == 'r') ADVANCE(16);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_em);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_em);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_em);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(379);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_strong);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_strong);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_strong);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(379);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_li);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_li);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_li);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(379);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_ul);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_ul);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_ul);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(379);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_ol);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_ol);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_ol);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(379);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_code);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_code);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_code);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(379);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_blockquote);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_blockquote);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_blockquote);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(379);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_pre);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_pre);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_pre);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(379);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_BSLASHquery_SLASHauthor);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_BSLASHquery_SLASHtag);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_BSLASHquery_SLASHtaxon);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_BSLASHquery_SLASHand);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_BSLASHquery_SLASHor);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_LBRACE_RBRACE);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_RPAREN);
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
      if (lookahead == 'a') ADVANCE(81);
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
      if (lookahead == 'l') ADVANCE(138);
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
      if (lookahead == 'c') ADVANCE(77);
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
      if (lookahead == 'e') ADVANCE(147);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(141);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(64);
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
      if (lookahead == 'e') ADVANCE(99);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(87);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(144);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(89);
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
      if (lookahead == 'i') ADVANCE(132);
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
      if (lookahead == 'f') ADVANCE(75);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'f') ADVANCE(62);
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
      if (lookahead == 'g') ADVANCE(56);
      if (lookahead == 'x') ADVANCE(225);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'g') ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'h') ADVANCE(115);
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
      if (lookahead == 'k') ADVANCE(97);
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
      if (lookahead == 'l') ADVANCE(135);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'l') ADVANCE(117);
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
      if (lookahead == 'm') ADVANCE(126);
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
      if (lookahead == 'n') ADVANCE(105);
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
      if (lookahead == 'n') ADVANCE(79);
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
      if (lookahead == 'r') ADVANCE(58);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'r') ADVANCE(60);
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
      if (lookahead == 't') ADVANCE(103);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 't') ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 't') ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 't') ADVANCE(85);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 't') ADVANCE(83);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 't') ADVANCE(109);
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
      if (lookahead == 'x') ADVANCE(93);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'x') ADVANCE(95);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'y') ADVANCE(107);
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
      if (!sym_text_character_set_1(lookahead)) ADVANCE(379);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym__digit);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(267);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a') ADVANCE(321);
      if (lookahead == 'b') ADVANCE(314);
      if (lookahead == 'c') ADVANCE(274);
      if (lookahead == 'd') ADVANCE(272);
      if (lookahead == 'e') ADVANCE(322);
      if (lookahead == 'g') ADVANCE(300);
      if (lookahead == 'i') ADVANCE(306);
      if (lookahead == 'l') ADVANCE(301);
      if (lookahead == 'm') ADVANCE(303);
      if (lookahead == 'n') ADVANCE(269);
      if (lookahead == 'o') ADVANCE(276);
      if (lookahead == 'p') ADVANCE(123);
      if (lookahead == 'q') ADVANCE(367);
      if (lookahead == 'r') ADVANCE(297);
      if (lookahead == 's') ADVANCE(280);
      if (lookahead == 't') ADVANCE(270);
      if (lookahead == 'u') ADVANCE(315);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(268);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(379);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a') ADVANCE(323);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(379);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a') ADVANCE(307);
      if (lookahead == 'e') ADVANCE(370);
      if (lookahead == 'i') ADVANCE(361);
      if (lookahead == 'r') ADVANCE(273);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(379);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a') ADVANCE(82);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(379);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a') ADVANCE(362);
      if (lookahead == 'e') ADVANCE(304);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(379);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a') ADVANCE(327);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(379);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a') ADVANCE(317);
      if (lookahead == 'o') ADVANCE(285);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(379);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a') ADVANCE(284);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(379);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'b') ADVANCE(312);
      if (lookahead == 'l') ADVANCE(139);
      if (lookahead == 'p') ADVANCE(287);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(379);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'b') ADVANCE(369);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(379);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'c') ADVANCE(313);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(379);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'c') ADVANCE(78);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(379);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'c') ADVANCE(329);
      if (lookahead == 't') ADVANCE(346);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(379);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'c') ADVANCE(309);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(379);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'c') ADVANCE(318);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(379);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'c') ADVANCE(357);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(379);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'c') ADVANCE(294);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(379);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'd') ADVANCE(289);
      if (lookahead == 'n') ADVANCE(360);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(379);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'd') ADVANCE(296);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(379);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(324);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(379);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(148);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(379);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(142);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(379);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(65);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(379);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(349);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(379);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(100);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(379);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(55);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(379);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(88);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(379);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(145);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(379);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(90);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(379);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(305);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(379);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(342);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(379);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(371);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(379);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(352);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(379);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(353);
      if (lookahead == 'i') ADVANCE(133);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(379);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(283);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(379);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(359);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(379);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'f') ADVANCE(76);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(379);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'f') ADVANCE(63);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(379);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'f') ADVANCE(363);
      if (lookahead == 'm') ADVANCE(341);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(379);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'g') ADVANCE(57);
      if (lookahead == 'x') ADVANCE(333);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(379);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'g') ADVANCE(130);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(379);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'h') ADVANCE(116);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(379);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'h') ADVANCE(334);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(379);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i') ADVANCE(277);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(379);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'j') ADVANCE(302);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(379);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'k') ADVANCE(98);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(379);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l') ADVANCE(328);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(379);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l') ADVANCE(136);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(379);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l') ADVANCE(118);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(379);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l') ADVANCE(316);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(379);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l') ADVANCE(366);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(379);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l') ADVANCE(293);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(379);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l') ADVANCE(330);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(379);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l') ADVANCE(320);
      if (lookahead == 'u') ADVANCE(351);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(379);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'm') ADVANCE(127);
      if (lookahead == 'x') ADVANCE(338);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(379);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'm') ADVANCE(291);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(379);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'n') ADVANCE(106);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(379);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'n') ADVANCE(308);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(379);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'n') ADVANCE(80);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(379);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'n') ADVANCE(350);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(379);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'o') ADVANCE(278);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(379);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'o') ADVANCE(340);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(379);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'o') ADVANCE(279);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(379);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'o') ADVANCE(325);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(379);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'o') ADVANCE(347);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(379);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'o') ADVANCE(326);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(379);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'o') ADVANCE(344);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(379);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'o') ADVANCE(345);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(379);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'o') ADVANCE(348);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(379);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'o') ADVANCE(364);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(379);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'p') ADVANCE(332);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(379);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'p') ADVANCE(275);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(379);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'p') ADVANCE(292);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(379);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'p') ADVANCE(336);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(379);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r') ADVANCE(372);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(379);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r') ADVANCE(311);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(379);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r') ADVANCE(59);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(379);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r') ADVANCE(61);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(379);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r') ADVANCE(331);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(379);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r') ADVANCE(355);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(379);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r') ADVANCE(356);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(379);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 's') ADVANCE(339);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(379);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 's') ADVANCE(282);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(379);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't') ADVANCE(310);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(379);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't') ADVANCE(104);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(379);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't') ADVANCE(92);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(379);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't') ADVANCE(102);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(379);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't') ADVANCE(86);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(379);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't') ADVANCE(84);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(379);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't') ADVANCE(110);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(379);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't') ADVANCE(281);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(379);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't') ADVANCE(271);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(379);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't') ADVANCE(343);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(379);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't') ADVANCE(319);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(379);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't') ADVANCE(290);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(379);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't') ADVANCE(299);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(379);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't') ADVANCE(295);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(379);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't') ADVANCE(335);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(379);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'u') ADVANCE(286);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(379);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'u') ADVANCE(298);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(379);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'u') ADVANCE(337);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(379);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'u') ADVANCE(365);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(379);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'x') ADVANCE(94);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(379);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'x') ADVANCE(96);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(379);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'y') ADVANCE(108);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(379);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(373);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(379);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(374);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(379);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(378);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(379);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_text);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(379);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_text);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(376);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(379);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_text);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(377);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(379);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_text);
      if (!sym_text_character_set_1(lookahead)) ADVANCE(379);
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
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 9},
  [14] = {.lex_state = 9},
  [15] = {.lex_state = 6},
  [16] = {.lex_state = 6},
  [17] = {.lex_state = 6},
  [18] = {.lex_state = 6},
  [19] = {.lex_state = 6},
  [20] = {.lex_state = 6},
  [21] = {.lex_state = 6},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 6},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 6},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 6},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 6},
  [56] = {.lex_state = 6},
  [57] = {.lex_state = 6},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 2},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 6},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 1},
  [66] = {.lex_state = 6},
  [67] = {.lex_state = 6},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 1},
  [70] = {.lex_state = 1},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 1},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 1},
  [86] = {.lex_state = 1},
  [87] = {.lex_state = 1},
  [88] = {.lex_state = 1},
  [89] = {.lex_state = 1},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 6},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 6},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 6},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 6},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 6},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 6},
  [139] = {.lex_state = 6},
  [140] = {.lex_state = 49},
  [141] = {.lex_state = 6},
  [142] = {.lex_state = 2},
  [143] = {.lex_state = 6},
  [144] = {.lex_state = 49},
  [145] = {.lex_state = 3},
  [146] = {.lex_state = 3},
  [147] = {.lex_state = 49},
  [148] = {.lex_state = 49},
  [149] = {.lex_state = 6},
  [150] = {.lex_state = 6},
  [151] = {.lex_state = 6},
  [152] = {.lex_state = 6},
  [153] = {.lex_state = 2},
  [154] = {.lex_state = 3},
  [155] = {.lex_state = 2},
  [156] = {.lex_state = 2},
  [157] = {.lex_state = 2},
  [158] = {.lex_state = 2},
  [159] = {.lex_state = 2},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 2},
  [162] = {.lex_state = 3},
  [163] = {.lex_state = 6},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 3},
  [166] = {.lex_state = 3},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 6},
  [169] = {.lex_state = 2},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 6},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 3},
  [176] = {.lex_state = 50},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 3},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 50},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 3},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 3},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 3},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 3},
  [258] = {.lex_state = 8},
  [259] = {.lex_state = 3},
  [260] = {.lex_state = 3},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 1},
  [263] = {.lex_state = 1},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 3},
  [266] = {.lex_state = 1},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 1},
  [269] = {.lex_state = 3},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 1},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 1},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 1},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 1},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 8},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 8},
  [294] = {.lex_state = 1},
  [295] = {.lex_state = 1},
  [296] = {.lex_state = 8},
  [297] = {.lex_state = 1},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 8},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 5},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 8},
  [313] = {.lex_state = 5},
  [314] = {.lex_state = 8},
  [315] = {.lex_state = 1},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 1},
  [318] = {.lex_state = 3},
  [319] = {.lex_state = 3},
  [320] = {.lex_state = 8},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [anon_sym_title] = ACTIONS(1),
    [anon_sym_tag] = ACTIONS(1),
    [anon_sym_author] = ACTIONS(1),
    [anon_sym_contributor] = ACTIONS(1),
    [anon_sym_ref] = ACTIONS(1),
    [anon_sym_date] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
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
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
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
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(1),
    [sym__alpha] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(302),
    [sym__head_node] = STATE(12),
    [sym_title] = STATE(12),
    [sym_tag] = STATE(12),
    [sym_author] = STATE(12),
    [sym_contributor] = STATE(12),
    [sym_ref] = STATE(12),
    [sym_date] = STATE(12),
    [sym_def] = STATE(12),
    [sym_alloc] = STATE(12),
    [sym_taxon] = STATE(12),
    [sym_meta] = STATE(12),
    [sym_import] = STATE(12),
    [sym_export] = STATE(12),
    [sym_namespace] = STATE(12),
    [sym_transclude] = STATE(12),
    [sym_let] = STATE(12),
    [sym_tex] = STATE(12),
    [sym_if_tex] = STATE(12),
    [sym_block] = STATE(12),
    [sym_scope] = STATE(12),
    [sym_put] = STATE(12),
    [sym_get] = STATE(12),
    [sym_open] = STATE(12),
    [sym_query_tree] = STATE(12),
    [sym__default] = STATE(12),
    [sym_object] = STATE(12),
    [sym_patch] = STATE(12),
    [sym_call] = STATE(12),
    [sym__prim] = STATE(12),
    [sym_inline_math] = STATE(12),
    [sym_display_math] = STATE(12),
    [sym_p] = STATE(12),
    [sym_em] = STATE(12),
    [sym_strong] = STATE(12),
    [sym_li] = STATE(12),
    [sym_ul] = STATE(12),
    [sym_ol] = STATE(12),
    [sym_code] = STATE(12),
    [sym_blockquote] = STATE(12),
    [sym_pre] = STATE(12),
    [sym_ident] = STATE(12),
    [sym__link] = STATE(12),
    [sym_markdown_link] = STATE(12),
    [sym_link_label] = STATE(209),
    [sym_unlabeled_link] = STATE(12),
    [aux_sym_source_file_repeat1] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_BSLASH] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [anon_sym_POUND] = ACTIONS(11),
    [anon_sym_POUND_POUND] = ACTIONS(13),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(15),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(17), 1,
      anon_sym_BSLASH,
    ACTIONS(20), 1,
      anon_sym_RBRACE,
    ACTIONS(22), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(28), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_POUND_POUND,
    ACTIONS(34), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(37), 1,
      sym_text,
    STATE(238), 1,
      sym_link_label,
    STATE(2), 46,
      sym__head_node,
      sym_title,
      sym_tag,
      sym_author,
      sym_contributor,
      sym_ref,
      sym_date,
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
      sym__textual_node,
      sym__link,
      sym_markdown_link,
      sym_unlabeled_link,
      aux_sym_arg_repeat1,
  [76] = 10,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(40), 1,
      anon_sym_BSLASH,
    ACTIONS(42), 1,
      anon_sym_RBRACE,
    ACTIONS(44), 1,
      sym_comment,
    ACTIONS(46), 1,
      anon_sym_POUND,
    ACTIONS(48), 1,
      anon_sym_POUND_POUND,
    ACTIONS(50), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(52), 1,
      sym_text,
    STATE(238), 1,
      sym_link_label,
    STATE(2), 46,
      sym__head_node,
      sym_title,
      sym_tag,
      sym_author,
      sym_contributor,
      sym_ref,
      sym_date,
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
      sym__textual_node,
      sym__link,
      sym_markdown_link,
      sym_unlabeled_link,
      aux_sym_arg_repeat1,
  [152] = 10,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(40), 1,
      anon_sym_BSLASH,
    ACTIONS(44), 1,
      sym_comment,
    ACTIONS(46), 1,
      anon_sym_POUND,
    ACTIONS(48), 1,
      anon_sym_POUND_POUND,
    ACTIONS(50), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(52), 1,
      sym_text,
    ACTIONS(54), 1,
      anon_sym_RBRACE,
    STATE(238), 1,
      sym_link_label,
    STATE(2), 46,
      sym__head_node,
      sym_title,
      sym_tag,
      sym_author,
      sym_contributor,
      sym_ref,
      sym_date,
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
      sym__textual_node,
      sym__link,
      sym_markdown_link,
      sym_unlabeled_link,
      aux_sym_arg_repeat1,
  [228] = 10,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(40), 1,
      anon_sym_BSLASH,
    ACTIONS(44), 1,
      sym_comment,
    ACTIONS(46), 1,
      anon_sym_POUND,
    ACTIONS(48), 1,
      anon_sym_POUND_POUND,
    ACTIONS(50), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(52), 1,
      sym_text,
    ACTIONS(56), 1,
      anon_sym_RBRACE,
    STATE(238), 1,
      sym_link_label,
    STATE(2), 46,
      sym__head_node,
      sym_title,
      sym_tag,
      sym_author,
      sym_contributor,
      sym_ref,
      sym_date,
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
      sym__textual_node,
      sym__link,
      sym_markdown_link,
      sym_unlabeled_link,
      aux_sym_arg_repeat1,
  [304] = 10,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(40), 1,
      anon_sym_BSLASH,
    ACTIONS(44), 1,
      sym_comment,
    ACTIONS(46), 1,
      anon_sym_POUND,
    ACTIONS(48), 1,
      anon_sym_POUND_POUND,
    ACTIONS(50), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(52), 1,
      sym_text,
    ACTIONS(58), 1,
      anon_sym_RBRACE,
    STATE(238), 1,
      sym_link_label,
    STATE(2), 46,
      sym__head_node,
      sym_title,
      sym_tag,
      sym_author,
      sym_contributor,
      sym_ref,
      sym_date,
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
      sym__textual_node,
      sym__link,
      sym_markdown_link,
      sym_unlabeled_link,
      aux_sym_arg_repeat1,
  [380] = 9,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(40), 1,
      anon_sym_BSLASH,
    ACTIONS(46), 1,
      anon_sym_POUND,
    ACTIONS(48), 1,
      anon_sym_POUND_POUND,
    ACTIONS(50), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(60), 1,
      sym_comment,
    ACTIONS(62), 1,
      sym_text,
    STATE(238), 1,
      sym_link_label,
    STATE(5), 46,
      sym__head_node,
      sym_title,
      sym_tag,
      sym_author,
      sym_contributor,
      sym_ref,
      sym_date,
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
      sym__textual_node,
      sym__link,
      sym_markdown_link,
      sym_unlabeled_link,
      aux_sym_arg_repeat1,
  [453] = 9,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(40), 1,
      anon_sym_BSLASH,
    ACTIONS(46), 1,
      anon_sym_POUND,
    ACTIONS(48), 1,
      anon_sym_POUND_POUND,
    ACTIONS(50), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(64), 1,
      sym_comment,
    ACTIONS(66), 1,
      sym_text,
    STATE(238), 1,
      sym_link_label,
    STATE(6), 46,
      sym__head_node,
      sym_title,
      sym_tag,
      sym_author,
      sym_contributor,
      sym_ref,
      sym_date,
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
      sym__textual_node,
      sym__link,
      sym_markdown_link,
      sym_unlabeled_link,
      aux_sym_arg_repeat1,
  [526] = 9,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(40), 1,
      anon_sym_BSLASH,
    ACTIONS(46), 1,
      anon_sym_POUND,
    ACTIONS(48), 1,
      anon_sym_POUND_POUND,
    ACTIONS(50), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(70), 1,
      sym_text,
    STATE(238), 1,
      sym_link_label,
    STATE(3), 46,
      sym__head_node,
      sym_title,
      sym_tag,
      sym_author,
      sym_contributor,
      sym_ref,
      sym_date,
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
      sym__textual_node,
      sym__link,
      sym_markdown_link,
      sym_unlabeled_link,
      aux_sym_arg_repeat1,
  [599] = 9,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(40), 1,
      anon_sym_BSLASH,
    ACTIONS(46), 1,
      anon_sym_POUND,
    ACTIONS(48), 1,
      anon_sym_POUND_POUND,
    ACTIONS(50), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(72), 1,
      sym_comment,
    ACTIONS(74), 1,
      sym_text,
    STATE(238), 1,
      sym_link_label,
    STATE(4), 46,
      sym__head_node,
      sym_title,
      sym_tag,
      sym_author,
      sym_contributor,
      sym_ref,
      sym_date,
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
      sym__textual_node,
      sym__link,
      sym_markdown_link,
      sym_unlabeled_link,
      aux_sym_arg_repeat1,
  [672] = 9,
    ACTIONS(76), 1,
      ts_builtin_sym_end,
    ACTIONS(78), 1,
      anon_sym_BSLASH,
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(87), 1,
      anon_sym_POUND,
    ACTIONS(90), 1,
      anon_sym_POUND_POUND,
    ACTIONS(93), 1,
      anon_sym_LBRACK_LBRACK,
    STATE(209), 1,
      sym_link_label,
    STATE(11), 45,
      sym__head_node,
      sym_title,
      sym_tag,
      sym_author,
      sym_contributor,
      sym_ref,
      sym_date,
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
      sym__link,
      sym_markdown_link,
      sym_unlabeled_link,
      aux_sym_source_file_repeat1,
  [744] = 9,
    ACTIONS(5), 1,
      anon_sym_BSLASH,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(13), 1,
      anon_sym_POUND_POUND,
    ACTIONS(15), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(96), 1,
      ts_builtin_sym_end,
    ACTIONS(98), 1,
      sym_comment,
    STATE(209), 1,
      sym_link_label,
    STATE(11), 45,
      sym__head_node,
      sym_title,
      sym_tag,
      sym_author,
      sym_contributor,
      sym_ref,
      sym_date,
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
      sym__link,
      sym_markdown_link,
      sym_unlabeled_link,
      aux_sym_source_file_repeat1,
  [816] = 36,
    ACTIONS(100), 1,
      anon_sym_title,
    ACTIONS(102), 1,
      anon_sym_tag,
    ACTIONS(104), 1,
      anon_sym_author,
    ACTIONS(106), 1,
      anon_sym_contributor,
    ACTIONS(108), 1,
      anon_sym_ref,
    ACTIONS(110), 1,
      anon_sym_date,
    ACTIONS(112), 1,
      anon_sym_def,
    ACTIONS(114), 1,
      anon_sym_alloc,
    ACTIONS(116), 1,
      anon_sym_taxon,
    ACTIONS(118), 1,
      anon_sym_meta,
    ACTIONS(120), 1,
      anon_sym_import,
    ACTIONS(122), 1,
      anon_sym_export,
    ACTIONS(124), 1,
      anon_sym_namespace,
    ACTIONS(126), 1,
      anon_sym_transclude,
    ACTIONS(128), 1,
      anon_sym_let,
    ACTIONS(130), 1,
      anon_sym_tex,
    ACTIONS(132), 1,
      anon_sym_iftex,
    ACTIONS(134), 1,
      anon_sym_block,
    ACTIONS(136), 1,
      anon_sym_scope,
    ACTIONS(138), 1,
      anon_sym_put,
    ACTIONS(140), 1,
      anon_sym_get,
    ACTIONS(142), 1,
      anon_sym_open,
    ACTIONS(144), 1,
      anon_sym_query,
    ACTIONS(146), 1,
      anon_sym_object,
    ACTIONS(148), 1,
      anon_sym_patch,
    ACTIONS(150), 1,
      anon_sym_call,
    ACTIONS(152), 1,
      anon_sym_p,
    ACTIONS(154), 1,
      anon_sym_em,
    ACTIONS(156), 1,
      anon_sym_strong,
    ACTIONS(158), 1,
      anon_sym_li,
    ACTIONS(160), 1,
      anon_sym_ul,
    ACTIONS(162), 1,
      anon_sym_ol,
    ACTIONS(164), 1,
      anon_sym_code,
    ACTIONS(166), 1,
      anon_sym_blockquote,
    ACTIONS(168), 1,
      anon_sym_pre,
    ACTIONS(170), 1,
      sym_text,
  [925] = 36,
    ACTIONS(172), 1,
      anon_sym_title,
    ACTIONS(174), 1,
      anon_sym_tag,
    ACTIONS(176), 1,
      anon_sym_author,
    ACTIONS(178), 1,
      anon_sym_contributor,
    ACTIONS(180), 1,
      anon_sym_ref,
    ACTIONS(182), 1,
      anon_sym_date,
    ACTIONS(184), 1,
      anon_sym_def,
    ACTIONS(186), 1,
      anon_sym_alloc,
    ACTIONS(188), 1,
      anon_sym_taxon,
    ACTIONS(190), 1,
      anon_sym_meta,
    ACTIONS(192), 1,
      anon_sym_import,
    ACTIONS(194), 1,
      anon_sym_export,
    ACTIONS(196), 1,
      anon_sym_namespace,
    ACTIONS(198), 1,
      anon_sym_transclude,
    ACTIONS(200), 1,
      anon_sym_let,
    ACTIONS(202), 1,
      anon_sym_tex,
    ACTIONS(204), 1,
      anon_sym_iftex,
    ACTIONS(206), 1,
      anon_sym_block,
    ACTIONS(208), 1,
      anon_sym_scope,
    ACTIONS(210), 1,
      anon_sym_put,
    ACTIONS(212), 1,
      anon_sym_get,
    ACTIONS(214), 1,
      anon_sym_open,
    ACTIONS(216), 1,
      anon_sym_query,
    ACTIONS(218), 1,
      anon_sym_object,
    ACTIONS(220), 1,
      anon_sym_patch,
    ACTIONS(222), 1,
      anon_sym_call,
    ACTIONS(224), 1,
      anon_sym_p,
    ACTIONS(226), 1,
      anon_sym_em,
    ACTIONS(228), 1,
      anon_sym_strong,
    ACTIONS(230), 1,
      anon_sym_li,
    ACTIONS(232), 1,
      anon_sym_ul,
    ACTIONS(234), 1,
      anon_sym_ol,
    ACTIONS(236), 1,
      anon_sym_code,
    ACTIONS(238), 1,
      anon_sym_blockquote,
    ACTIONS(240), 1,
      anon_sym_pre,
    ACTIONS(242), 1,
      sym_text,
  [1034] = 11,
    ACTIONS(244), 1,
      anon_sym_LBRACE,
    ACTIONS(247), 1,
      anon_sym_RBRACE,
    ACTIONS(249), 1,
      anon_sym_BSLASHquery_SLASHauthor,
    ACTIONS(252), 1,
      anon_sym_BSLASHquery_SLASHtag,
    ACTIONS(255), 1,
      anon_sym_BSLASHquery_SLASHtaxon,
    ACTIONS(258), 1,
      anon_sym_BSLASHquery_SLASHand,
    ACTIONS(261), 1,
      anon_sym_BSLASHquery_SLASHor,
    ACTIONS(264), 1,
      aux_sym__whitespace_token1,
    STATE(178), 1,
      sym__txt_arg,
    STATE(15), 3,
      sym_query0,
      sym__whitespace,
      aux_sym_queries_repeat1,
    STATE(67), 6,
      sym_query_author,
      sym_query_tag,
      sym_query_taxon,
      sym_query_and,
      sym_query_or,
      sym_query_meta,
  [1075] = 11,
    ACTIONS(267), 1,
      anon_sym_LBRACE,
    ACTIONS(269), 1,
      anon_sym_BSLASHquery_SLASHauthor,
    ACTIONS(271), 1,
      anon_sym_BSLASHquery_SLASHtag,
    ACTIONS(273), 1,
      anon_sym_BSLASHquery_SLASHtaxon,
    ACTIONS(275), 1,
      anon_sym_BSLASHquery_SLASHand,
    ACTIONS(277), 1,
      anon_sym_BSLASHquery_SLASHor,
    ACTIONS(279), 1,
      aux_sym__whitespace_token1,
    STATE(178), 1,
      sym__txt_arg,
    STATE(300), 1,
      sym_queries,
    STATE(18), 3,
      sym_query0,
      sym__whitespace,
      aux_sym_queries_repeat1,
    STATE(67), 6,
      sym_query_author,
      sym_query_tag,
      sym_query_taxon,
      sym_query_and,
      sym_query_or,
      sym_query_meta,
  [1116] = 11,
    ACTIONS(267), 1,
      anon_sym_LBRACE,
    ACTIONS(269), 1,
      anon_sym_BSLASHquery_SLASHauthor,
    ACTIONS(271), 1,
      anon_sym_BSLASHquery_SLASHtag,
    ACTIONS(273), 1,
      anon_sym_BSLASHquery_SLASHtaxon,
    ACTIONS(275), 1,
      anon_sym_BSLASHquery_SLASHand,
    ACTIONS(277), 1,
      anon_sym_BSLASHquery_SLASHor,
    ACTIONS(279), 1,
      aux_sym__whitespace_token1,
    STATE(178), 1,
      sym__txt_arg,
    STATE(303), 1,
      sym_queries,
    STATE(18), 3,
      sym_query0,
      sym__whitespace,
      aux_sym_queries_repeat1,
    STATE(67), 6,
      sym_query_author,
      sym_query_tag,
      sym_query_taxon,
      sym_query_and,
      sym_query_or,
      sym_query_meta,
  [1157] = 11,
    ACTIONS(267), 1,
      anon_sym_LBRACE,
    ACTIONS(269), 1,
      anon_sym_BSLASHquery_SLASHauthor,
    ACTIONS(271), 1,
      anon_sym_BSLASHquery_SLASHtag,
    ACTIONS(273), 1,
      anon_sym_BSLASHquery_SLASHtaxon,
    ACTIONS(275), 1,
      anon_sym_BSLASHquery_SLASHand,
    ACTIONS(277), 1,
      anon_sym_BSLASHquery_SLASHor,
    ACTIONS(281), 1,
      anon_sym_RBRACE,
    ACTIONS(283), 1,
      aux_sym__whitespace_token1,
    STATE(178), 1,
      sym__txt_arg,
    STATE(15), 3,
      sym_query0,
      sym__whitespace,
      aux_sym_queries_repeat1,
    STATE(67), 6,
      sym_query_author,
      sym_query_tag,
      sym_query_taxon,
      sym_query_and,
      sym_query_or,
      sym_query_meta,
  [1198] = 12,
    ACTIONS(267), 1,
      anon_sym_LBRACE,
    ACTIONS(269), 1,
      anon_sym_BSLASHquery_SLASHauthor,
    ACTIONS(271), 1,
      anon_sym_BSLASHquery_SLASHtag,
    ACTIONS(273), 1,
      anon_sym_BSLASHquery_SLASHtaxon,
    ACTIONS(275), 1,
      anon_sym_BSLASHquery_SLASHand,
    ACTIONS(277), 1,
      anon_sym_BSLASHquery_SLASHor,
    ACTIONS(285), 1,
      aux_sym__whitespace_token1,
    STATE(152), 1,
      sym_query0,
    STATE(178), 1,
      sym__txt_arg,
    STATE(280), 1,
      sym_query,
    STATE(21), 2,
      sym__whitespace,
      aux_sym_query_repeat1,
    STATE(67), 6,
      sym_query_author,
      sym_query_tag,
      sym_query_taxon,
      sym_query_and,
      sym_query_or,
      sym_query_meta,
  [1241] = 12,
    ACTIONS(267), 1,
      anon_sym_LBRACE,
    ACTIONS(269), 1,
      anon_sym_BSLASHquery_SLASHauthor,
    ACTIONS(271), 1,
      anon_sym_BSLASHquery_SLASHtag,
    ACTIONS(273), 1,
      anon_sym_BSLASHquery_SLASHtaxon,
    ACTIONS(275), 1,
      anon_sym_BSLASHquery_SLASHand,
    ACTIONS(277), 1,
      anon_sym_BSLASHquery_SLASHor,
    ACTIONS(285), 1,
      aux_sym__whitespace_token1,
    STATE(152), 1,
      sym_query0,
    STATE(178), 1,
      sym__txt_arg,
    STATE(290), 1,
      sym_query,
    STATE(21), 2,
      sym__whitespace,
      aux_sym_query_repeat1,
    STATE(67), 6,
      sym_query_author,
      sym_query_tag,
      sym_query_taxon,
      sym_query_and,
      sym_query_or,
      sym_query_meta,
  [1284] = 11,
    ACTIONS(267), 1,
      anon_sym_LBRACE,
    ACTIONS(269), 1,
      anon_sym_BSLASHquery_SLASHauthor,
    ACTIONS(271), 1,
      anon_sym_BSLASHquery_SLASHtag,
    ACTIONS(273), 1,
      anon_sym_BSLASHquery_SLASHtaxon,
    ACTIONS(275), 1,
      anon_sym_BSLASHquery_SLASHand,
    ACTIONS(277), 1,
      anon_sym_BSLASHquery_SLASHor,
    ACTIONS(287), 1,
      aux_sym__whitespace_token1,
    STATE(151), 1,
      sym_query0,
    STATE(178), 1,
      sym__txt_arg,
    STATE(28), 2,
      sym__whitespace,
      aux_sym_query_repeat1,
    STATE(67), 6,
      sym_query_author,
      sym_query_tag,
      sym_query_taxon,
      sym_query_and,
      sym_query_or,
      sym_query_meta,
  [1324] = 2,
    ACTIONS(289), 1,
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
  [1340] = 2,
    ACTIONS(289), 1,
      anon_sym_BSLASH,
    STATE(51), 10,
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
  [1356] = 5,
    ACTIONS(293), 1,
      anon_sym_LBRACE,
    ACTIONS(295), 1,
      anon_sym_LBRACE_RBRACE,
    ACTIONS(297), 1,
      sym_text,
    STATE(86), 1,
      sym_arg,
    ACTIONS(291), 7,
      anon_sym_BSLASH,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [1378] = 2,
    ACTIONS(299), 1,
      anon_sym_BSLASH,
    STATE(96), 10,
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
  [1394] = 2,
    ACTIONS(299), 1,
      anon_sym_BSLASH,
    STATE(97), 10,
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
  [1410] = 5,
    ACTIONS(301), 1,
      anon_sym_LBRACE,
    ACTIONS(303), 1,
      anon_sym_LBRACE_RBRACE,
    STATE(33), 1,
      sym_arg,
    ACTIONS(291), 2,
      anon_sym_LBRACK,
      anon_sym_POUND,
    ACTIONS(297), 5,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [1431] = 3,
    ACTIONS(307), 1,
      aux_sym__whitespace_token1,
    STATE(28), 2,
      sym__whitespace,
      aux_sym_query_repeat1,
    ACTIONS(305), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASHquery_SLASHauthor,
      anon_sym_BSLASHquery_SLASHtag,
      anon_sym_BSLASHquery_SLASHtaxon,
      anon_sym_BSLASHquery_SLASHand,
      anon_sym_BSLASHquery_SLASHor,
  [1448] = 9,
    ACTIONS(224), 1,
      anon_sym_p,
    ACTIONS(310), 1,
      anon_sym_em,
    ACTIONS(312), 1,
      anon_sym_strong,
    ACTIONS(314), 1,
      anon_sym_li,
    ACTIONS(316), 1,
      anon_sym_ul,
    ACTIONS(318), 1,
      anon_sym_ol,
    ACTIONS(320), 1,
      anon_sym_code,
    ACTIONS(322), 1,
      anon_sym_blockquote,
    ACTIONS(324), 1,
      anon_sym_pre,
  [1476] = 2,
    ACTIONS(328), 1,
      aux_sym__whitespace_token1,
    ACTIONS(326), 8,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_BSLASHquery_SLASHauthor,
      anon_sym_BSLASHquery_SLASHtag,
      anon_sym_BSLASHquery_SLASHtaxon,
      anon_sym_BSLASHquery_SLASHand,
      anon_sym_BSLASHquery_SLASHor,
  [1490] = 9,
    ACTIONS(152), 1,
      anon_sym_p,
    ACTIONS(330), 1,
      anon_sym_em,
    ACTIONS(332), 1,
      anon_sym_strong,
    ACTIONS(334), 1,
      anon_sym_li,
    ACTIONS(336), 1,
      anon_sym_ul,
    ACTIONS(338), 1,
      anon_sym_ol,
    ACTIONS(340), 1,
      anon_sym_code,
    ACTIONS(342), 1,
      anon_sym_blockquote,
    ACTIONS(344), 1,
      anon_sym_pre,
  [1518] = 2,
    ACTIONS(348), 1,
      sym_text,
    ACTIONS(346), 7,
      anon_sym_BSLASH,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [1531] = 2,
    ACTIONS(352), 2,
      anon_sym_LBRACK,
      anon_sym_POUND,
    ACTIONS(350), 6,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      anon_sym_LBRACE,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [1544] = 2,
    ACTIONS(356), 1,
      sym_text,
    ACTIONS(354), 7,
      anon_sym_BSLASH,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [1557] = 2,
    ACTIONS(360), 1,
      sym_text,
    ACTIONS(358), 7,
      anon_sym_BSLASH,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [1570] = 2,
    ACTIONS(364), 1,
      sym_text,
    ACTIONS(362), 7,
      anon_sym_BSLASH,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [1583] = 2,
    ACTIONS(368), 1,
      sym_text,
    ACTIONS(366), 7,
      anon_sym_BSLASH,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [1596] = 2,
    ACTIONS(372), 1,
      sym_text,
    ACTIONS(370), 7,
      anon_sym_BSLASH,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [1609] = 2,
    ACTIONS(376), 1,
      sym_text,
    ACTIONS(374), 7,
      anon_sym_BSLASH,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [1622] = 2,
    ACTIONS(380), 1,
      sym_text,
    ACTIONS(378), 7,
      anon_sym_BSLASH,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [1635] = 2,
    ACTIONS(384), 1,
      sym_text,
    ACTIONS(382), 7,
      anon_sym_BSLASH,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [1648] = 2,
    ACTIONS(388), 1,
      sym_text,
    ACTIONS(386), 7,
      anon_sym_BSLASH,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [1661] = 2,
    ACTIONS(392), 1,
      sym_text,
    ACTIONS(390), 7,
      anon_sym_BSLASH,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [1674] = 2,
    ACTIONS(396), 1,
      sym_text,
    ACTIONS(394), 7,
      anon_sym_BSLASH,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [1687] = 2,
    ACTIONS(400), 1,
      sym_text,
    ACTIONS(398), 7,
      anon_sym_BSLASH,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [1700] = 2,
    ACTIONS(404), 1,
      sym_text,
    ACTIONS(402), 7,
      anon_sym_BSLASH,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [1713] = 2,
    ACTIONS(408), 1,
      sym_text,
    ACTIONS(406), 7,
      anon_sym_BSLASH,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [1726] = 2,
    ACTIONS(412), 1,
      sym_text,
    ACTIONS(410), 7,
      anon_sym_BSLASH,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [1739] = 3,
    STATE(49), 1,
      aux_sym_id_repeat1,
    ACTIONS(417), 3,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_RBRACK_RBRACK,
    ACTIONS(414), 4,
      anon_sym_DASH,
      anon_sym__,
      sym__alpha,
      sym__digit,
  [1754] = 2,
    ACTIONS(421), 1,
      aux_sym__whitespace_token1,
    ACTIONS(419), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASHquery_SLASHauthor,
      anon_sym_BSLASHquery_SLASHtag,
      anon_sym_BSLASHquery_SLASHtaxon,
      anon_sym_BSLASHquery_SLASHand,
      anon_sym_BSLASHquery_SLASHor,
  [1767] = 2,
    ACTIONS(425), 1,
      sym_text,
    ACTIONS(423), 7,
      anon_sym_BSLASH,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [1780] = 2,
    ACTIONS(429), 1,
      sym_text,
    ACTIONS(427), 7,
      anon_sym_BSLASH,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [1793] = 2,
    ACTIONS(433), 1,
      sym_text,
    ACTIONS(431), 7,
      anon_sym_BSLASH,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [1806] = 2,
    ACTIONS(437), 1,
      sym_text,
    ACTIONS(435), 7,
      anon_sym_BSLASH,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [1819] = 2,
    ACTIONS(441), 1,
      aux_sym__whitespace_token1,
    ACTIONS(439), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASHquery_SLASHauthor,
      anon_sym_BSLASHquery_SLASHtag,
      anon_sym_BSLASHquery_SLASHtaxon,
      anon_sym_BSLASHquery_SLASHand,
      anon_sym_BSLASHquery_SLASHor,
  [1832] = 2,
    ACTIONS(445), 1,
      aux_sym__whitespace_token1,
    ACTIONS(443), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASHquery_SLASHauthor,
      anon_sym_BSLASHquery_SLASHtag,
      anon_sym_BSLASHquery_SLASHtaxon,
      anon_sym_BSLASHquery_SLASHand,
      anon_sym_BSLASHquery_SLASHor,
  [1845] = 2,
    ACTIONS(449), 1,
      aux_sym__whitespace_token1,
    ACTIONS(447), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASHquery_SLASHauthor,
      anon_sym_BSLASHquery_SLASHtag,
      anon_sym_BSLASHquery_SLASHtaxon,
      anon_sym_BSLASHquery_SLASHand,
      anon_sym_BSLASHquery_SLASHor,
  [1858] = 2,
    ACTIONS(453), 1,
      sym_text,
    ACTIONS(451), 7,
      anon_sym_BSLASH,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [1871] = 2,
    ACTIONS(378), 2,
      anon_sym_LBRACK,
      anon_sym_POUND,
    ACTIONS(380), 6,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      anon_sym_LBRACE,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [1884] = 3,
    STATE(49), 1,
      aux_sym_id_repeat1,
    ACTIONS(457), 3,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_RBRACK_RBRACK,
    ACTIONS(455), 4,
      anon_sym_DASH,
      anon_sym__,
      sym__alpha,
      sym__digit,
  [1899] = 2,
    ACTIONS(326), 2,
      anon_sym_LBRACK,
      anon_sym_POUND,
    ACTIONS(328), 6,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      anon_sym_LBRACE,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [1912] = 2,
    ACTIONS(461), 1,
      aux_sym__whitespace_token1,
    ACTIONS(459), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASHquery_SLASHauthor,
      anon_sym_BSLASHquery_SLASHtag,
      anon_sym_BSLASHquery_SLASHtaxon,
      anon_sym_BSLASHquery_SLASHand,
      anon_sym_BSLASHquery_SLASHor,
  [1925] = 2,
    ACTIONS(465), 1,
      sym_text,
    ACTIONS(463), 7,
      anon_sym_BSLASH,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [1938] = 2,
    ACTIONS(328), 1,
      sym_text,
    ACTIONS(326), 7,
      anon_sym_BSLASH,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [1951] = 2,
    ACTIONS(469), 1,
      sym_text,
    ACTIONS(467), 7,
      anon_sym_BSLASH,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [1964] = 2,
    ACTIONS(473), 1,
      aux_sym__whitespace_token1,
    ACTIONS(471), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASHquery_SLASHauthor,
      anon_sym_BSLASHquery_SLASHtag,
      anon_sym_BSLASHquery_SLASHtaxon,
      anon_sym_BSLASHquery_SLASHand,
      anon_sym_BSLASHquery_SLASHor,
  [1977] = 2,
    ACTIONS(477), 1,
      aux_sym__whitespace_token1,
    ACTIONS(475), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASHquery_SLASHauthor,
      anon_sym_BSLASHquery_SLASHtag,
      anon_sym_BSLASHquery_SLASHtaxon,
      anon_sym_BSLASHquery_SLASHand,
      anon_sym_BSLASHquery_SLASHor,
  [1990] = 2,
    ACTIONS(481), 1,
      sym_text,
    ACTIONS(479), 7,
      anon_sym_BSLASH,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2003] = 2,
    ACTIONS(485), 1,
      sym_text,
    ACTIONS(483), 7,
      anon_sym_BSLASH,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2016] = 2,
    ACTIONS(489), 1,
      sym_text,
    ACTIONS(487), 7,
      anon_sym_BSLASH,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2029] = 2,
    ACTIONS(493), 1,
      sym_text,
    ACTIONS(491), 7,
      anon_sym_BSLASH,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2042] = 2,
    ACTIONS(497), 1,
      sym_text,
    ACTIONS(495), 7,
      anon_sym_BSLASH,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2055] = 2,
    ACTIONS(501), 1,
      sym_text,
    ACTIONS(499), 7,
      anon_sym_BSLASH,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2068] = 2,
    ACTIONS(505), 1,
      sym_text,
    ACTIONS(503), 7,
      anon_sym_BSLASH,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2081] = 2,
    ACTIONS(509), 1,
      sym_text,
    ACTIONS(507), 7,
      anon_sym_BSLASH,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2094] = 2,
    ACTIONS(513), 1,
      sym_text,
    ACTIONS(511), 7,
      anon_sym_BSLASH,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2107] = 2,
    ACTIONS(517), 1,
      sym_text,
    ACTIONS(515), 7,
      anon_sym_BSLASH,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2120] = 2,
    ACTIONS(521), 1,
      sym_text,
    ACTIONS(519), 7,
      anon_sym_BSLASH,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2133] = 2,
    ACTIONS(525), 1,
      sym_text,
    ACTIONS(523), 7,
      anon_sym_BSLASH,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2146] = 2,
    ACTIONS(529), 1,
      sym_text,
    ACTIONS(527), 7,
      anon_sym_BSLASH,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2159] = 2,
    ACTIONS(533), 1,
      sym_text,
    ACTIONS(531), 7,
      anon_sym_BSLASH,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2172] = 2,
    ACTIONS(537), 1,
      sym_text,
    ACTIONS(535), 7,
      anon_sym_BSLASH,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2185] = 2,
    ACTIONS(541), 1,
      sym_text,
    ACTIONS(539), 7,
      anon_sym_BSLASH,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2198] = 2,
    ACTIONS(545), 1,
      sym_text,
    ACTIONS(543), 7,
      anon_sym_BSLASH,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2211] = 2,
    ACTIONS(549), 1,
      sym_text,
    ACTIONS(547), 7,
      anon_sym_BSLASH,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2224] = 2,
    ACTIONS(350), 1,
      sym_text,
    ACTIONS(352), 7,
      anon_sym_BSLASH,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2237] = 2,
    ACTIONS(553), 1,
      sym_text,
    ACTIONS(551), 7,
      anon_sym_BSLASH,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2250] = 2,
    ACTIONS(557), 1,
      sym_text,
    ACTIONS(555), 7,
      anon_sym_BSLASH,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2263] = 2,
    ACTIONS(561), 1,
      sym_text,
    ACTIONS(559), 7,
      anon_sym_BSLASH,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2276] = 2,
    ACTIONS(435), 2,
      anon_sym_LBRACK,
      anon_sym_POUND,
    ACTIONS(437), 5,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2288] = 5,
    ACTIONS(563), 1,
      anon_sym_RBRACE,
    ACTIONS(565), 1,
      anon_sym_LBRACK,
    ACTIONS(567), 1,
      aux_sym__whitespace_token1,
    STATE(168), 1,
      sym_method,
    STATE(120), 3,
      sym_method_decl,
      sym__whitespace,
      aux_sym_object_repeat1,
  [2306] = 2,
    ACTIONS(463), 2,
      anon_sym_LBRACK,
      anon_sym_POUND,
    ACTIONS(465), 5,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2318] = 2,
    ACTIONS(451), 2,
      anon_sym_LBRACK,
      anon_sym_POUND,
    ACTIONS(453), 5,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2330] = 2,
    ACTIONS(431), 2,
      anon_sym_LBRACK,
      anon_sym_POUND,
    ACTIONS(433), 5,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2342] = 2,
    ACTIONS(427), 2,
      anon_sym_LBRACK,
      anon_sym_POUND,
    ACTIONS(429), 5,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2354] = 2,
    ACTIONS(423), 2,
      anon_sym_LBRACK,
      anon_sym_POUND,
    ACTIONS(425), 5,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2366] = 2,
    ACTIONS(410), 2,
      anon_sym_LBRACK,
      anon_sym_POUND,
    ACTIONS(412), 5,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2378] = 2,
    ACTIONS(479), 2,
      anon_sym_LBRACK,
      anon_sym_POUND,
    ACTIONS(481), 5,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2390] = 2,
    ACTIONS(487), 2,
      anon_sym_LBRACK,
      anon_sym_POUND,
    ACTIONS(489), 5,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2402] = 2,
    ACTIONS(406), 2,
      anon_sym_LBRACK,
      anon_sym_POUND,
    ACTIONS(408), 5,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2414] = 2,
    ACTIONS(346), 2,
      anon_sym_LBRACK,
      anon_sym_POUND,
    ACTIONS(348), 5,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2426] = 2,
    ACTIONS(491), 2,
      anon_sym_LBRACK,
      anon_sym_POUND,
    ACTIONS(493), 5,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2438] = 2,
    ACTIONS(358), 2,
      anon_sym_LBRACK,
      anon_sym_POUND,
    ACTIONS(360), 5,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2450] = 2,
    ACTIONS(495), 2,
      anon_sym_LBRACK,
      anon_sym_POUND,
    ACTIONS(497), 5,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2462] = 2,
    ACTIONS(503), 2,
      anon_sym_LBRACK,
      anon_sym_POUND,
    ACTIONS(505), 5,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2474] = 2,
    ACTIONS(515), 2,
      anon_sym_LBRACK,
      anon_sym_POUND,
    ACTIONS(517), 5,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2486] = 2,
    ACTIONS(519), 2,
      anon_sym_LBRACK,
      anon_sym_POUND,
    ACTIONS(521), 5,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2498] = 2,
    ACTIONS(402), 2,
      anon_sym_LBRACK,
      anon_sym_POUND,
    ACTIONS(404), 5,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2510] = 2,
    ACTIONS(527), 2,
      anon_sym_LBRACK,
      anon_sym_POUND,
    ACTIONS(529), 5,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2522] = 2,
    ACTIONS(398), 2,
      anon_sym_LBRACK,
      anon_sym_POUND,
    ACTIONS(400), 5,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2534] = 2,
    ACTIONS(543), 2,
      anon_sym_LBRACK,
      anon_sym_POUND,
    ACTIONS(545), 5,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2546] = 5,
    ACTIONS(565), 1,
      anon_sym_LBRACK,
    ACTIONS(567), 1,
      aux_sym__whitespace_token1,
    ACTIONS(569), 1,
      anon_sym_RBRACE,
    STATE(168), 1,
      sym_method,
    STATE(120), 3,
      sym_method_decl,
      sym__whitespace,
      aux_sym_object_repeat1,
  [2564] = 2,
    ACTIONS(547), 2,
      anon_sym_LBRACK,
      anon_sym_POUND,
    ACTIONS(549), 5,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2576] = 2,
    ACTIONS(394), 2,
      anon_sym_LBRACK,
      anon_sym_POUND,
    ACTIONS(396), 5,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2588] = 2,
    ACTIONS(390), 2,
      anon_sym_LBRACK,
      anon_sym_POUND,
    ACTIONS(392), 5,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2600] = 2,
    ACTIONS(386), 2,
      anon_sym_LBRACK,
      anon_sym_POUND,
    ACTIONS(388), 5,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2612] = 2,
    ACTIONS(559), 2,
      anon_sym_LBRACK,
      anon_sym_POUND,
    ACTIONS(561), 5,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2624] = 2,
    ACTIONS(555), 2,
      anon_sym_LBRACK,
      anon_sym_POUND,
    ACTIONS(557), 5,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2636] = 2,
    ACTIONS(467), 2,
      anon_sym_LBRACK,
      anon_sym_POUND,
    ACTIONS(469), 5,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2648] = 5,
    ACTIONS(571), 1,
      anon_sym_RBRACE,
    ACTIONS(573), 1,
      anon_sym_LBRACK,
    ACTIONS(576), 1,
      aux_sym__whitespace_token1,
    STATE(168), 1,
      sym_method,
    STATE(120), 3,
      sym_method_decl,
      sym__whitespace,
      aux_sym_object_repeat1,
  [2666] = 2,
    ACTIONS(354), 2,
      anon_sym_LBRACK,
      anon_sym_POUND,
    ACTIONS(356), 5,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2678] = 2,
    ACTIONS(483), 2,
      anon_sym_LBRACK,
      anon_sym_POUND,
    ACTIONS(485), 5,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2690] = 5,
    ACTIONS(565), 1,
      anon_sym_LBRACK,
    ACTIONS(567), 1,
      aux_sym__whitespace_token1,
    ACTIONS(579), 1,
      anon_sym_RBRACE,
    STATE(168), 1,
      sym_method,
    STATE(120), 3,
      sym_method_decl,
      sym__whitespace,
      aux_sym_object_repeat1,
  [2708] = 2,
    ACTIONS(551), 2,
      anon_sym_LBRACK,
      anon_sym_POUND,
    ACTIONS(553), 5,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2720] = 2,
    ACTIONS(499), 2,
      anon_sym_LBRACK,
      anon_sym_POUND,
    ACTIONS(501), 5,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2732] = 2,
    ACTIONS(539), 2,
      anon_sym_LBRACK,
      anon_sym_POUND,
    ACTIONS(541), 5,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2744] = 2,
    ACTIONS(507), 2,
      anon_sym_LBRACK,
      anon_sym_POUND,
    ACTIONS(509), 5,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2756] = 2,
    ACTIONS(535), 2,
      anon_sym_LBRACK,
      anon_sym_POUND,
    ACTIONS(537), 5,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2768] = 2,
    ACTIONS(531), 2,
      anon_sym_LBRACK,
      anon_sym_POUND,
    ACTIONS(533), 5,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2780] = 5,
    ACTIONS(565), 1,
      anon_sym_LBRACK,
    ACTIONS(567), 1,
      aux_sym__whitespace_token1,
    ACTIONS(581), 1,
      anon_sym_RBRACE,
    STATE(168), 1,
      sym_method,
    STATE(120), 3,
      sym_method_decl,
      sym__whitespace,
      aux_sym_object_repeat1,
  [2798] = 2,
    ACTIONS(523), 2,
      anon_sym_LBRACK,
      anon_sym_POUND,
    ACTIONS(525), 5,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2810] = 2,
    ACTIONS(382), 2,
      anon_sym_LBRACK,
      anon_sym_POUND,
    ACTIONS(384), 5,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2822] = 2,
    ACTIONS(511), 2,
      anon_sym_LBRACK,
      anon_sym_POUND,
    ACTIONS(513), 5,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2834] = 2,
    ACTIONS(374), 2,
      anon_sym_LBRACK,
      anon_sym_POUND,
    ACTIONS(376), 5,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2846] = 2,
    ACTIONS(370), 2,
      anon_sym_LBRACK,
      anon_sym_POUND,
    ACTIONS(372), 5,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2858] = 2,
    ACTIONS(366), 2,
      anon_sym_LBRACK,
      anon_sym_POUND,
    ACTIONS(368), 5,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2870] = 2,
    ACTIONS(362), 2,
      anon_sym_LBRACK,
      anon_sym_POUND,
    ACTIONS(364), 5,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2882] = 4,
    ACTIONS(565), 1,
      anon_sym_LBRACK,
    ACTIONS(583), 1,
      aux_sym__whitespace_token1,
    STATE(168), 1,
      sym_method,
    STATE(91), 3,
      sym_method_decl,
      sym__whitespace,
      aux_sym_object_repeat1,
  [2897] = 4,
    ACTIONS(565), 1,
      anon_sym_LBRACK,
    ACTIONS(585), 1,
      aux_sym__whitespace_token1,
    STATE(168), 1,
      sym_method,
    STATE(123), 3,
      sym_method_decl,
      sym__whitespace,
      aux_sym_object_repeat1,
  [2912] = 5,
    ACTIONS(587), 1,
      sym__alpha,
    ACTIONS(589), 1,
      sym_text,
    STATE(161), 1,
      aux_sym_prefix_repeat1,
    STATE(261), 1,
      sym_prefix,
    STATE(265), 2,
      sym_addr,
      sym_external_link,
  [2929] = 4,
    ACTIONS(565), 1,
      anon_sym_LBRACK,
    ACTIONS(591), 1,
      aux_sym__whitespace_token1,
    STATE(168), 1,
      sym_method,
    STATE(112), 3,
      sym_method_decl,
      sym__whitespace,
      aux_sym_object_repeat1,
  [2944] = 3,
    STATE(60), 1,
      aux_sym_id_repeat1,
    STATE(162), 1,
      sym_id,
    ACTIONS(593), 4,
      anon_sym_DASH,
      anon_sym__,
      sym__alpha,
      sym__digit,
  [2957] = 4,
    ACTIONS(565), 1,
      anon_sym_LBRACK,
    ACTIONS(595), 1,
      aux_sym__whitespace_token1,
    STATE(168), 1,
      sym_method,
    STATE(130), 3,
      sym_method_decl,
      sym__whitespace,
      aux_sym_object_repeat1,
  [2972] = 5,
    ACTIONS(587), 1,
      sym__alpha,
    ACTIONS(589), 1,
      sym_text,
    STATE(161), 1,
      aux_sym_prefix_repeat1,
    STATE(261), 1,
      sym_prefix,
    STATE(260), 2,
      sym_addr,
      sym_external_link,
  [2989] = 5,
    ACTIONS(597), 1,
      anon_sym_LBRACE,
    ACTIONS(599), 1,
      anon_sym_LBRACK,
    STATE(46), 1,
      sym_arg,
    STATE(166), 1,
      aux_sym_binder_repeat1,
    STATE(190), 1,
      sym_binder,
  [3005] = 5,
    ACTIONS(599), 1,
      anon_sym_LBRACK,
    ACTIONS(601), 1,
      anon_sym_LBRACE,
    STATE(108), 1,
      sym_arg,
    STATE(166), 1,
      aux_sym_binder_repeat1,
    STATE(191), 1,
      sym_binder,
  [3021] = 5,
    ACTIONS(587), 1,
      sym__alpha,
    ACTIONS(603), 1,
      sym_text,
    STATE(161), 1,
      aux_sym_prefix_repeat1,
    STATE(261), 1,
      sym_prefix,
    STATE(271), 1,
      sym_addr,
  [3037] = 5,
    ACTIONS(587), 1,
      sym__alpha,
    ACTIONS(605), 1,
      sym_text,
    STATE(161), 1,
      aux_sym_prefix_repeat1,
    STATE(261), 1,
      sym_prefix,
    STATE(274), 1,
      sym_addr,
  [3053] = 3,
    ACTIONS(287), 1,
      aux_sym__whitespace_token1,
    ACTIONS(607), 1,
      anon_sym_RBRACE,
    STATE(28), 2,
      sym__whitespace,
      aux_sym_query_repeat1,
  [3064] = 3,
    ACTIONS(287), 1,
      aux_sym__whitespace_token1,
    ACTIONS(609), 1,
      anon_sym_RBRACE,
    STATE(28), 2,
      sym__whitespace,
      aux_sym_query_repeat1,
  [3075] = 3,
    ACTIONS(609), 1,
      anon_sym_RBRACE,
    ACTIONS(611), 1,
      aux_sym__whitespace_token1,
    STATE(149), 2,
      sym__whitespace,
      aux_sym_query_repeat1,
  [3086] = 3,
    ACTIONS(613), 1,
      anon_sym_RBRACE,
    ACTIONS(615), 1,
      aux_sym__whitespace_token1,
    STATE(150), 2,
      sym__whitespace,
      aux_sym_query_repeat1,
  [3097] = 4,
    ACTIONS(617), 1,
      sym__alpha,
    STATE(161), 1,
      aux_sym_prefix_repeat1,
    STATE(261), 1,
      sym_prefix,
    STATE(277), 1,
      sym_addr,
  [3110] = 4,
    ACTIONS(291), 1,
      anon_sym_LBRACE,
    ACTIONS(297), 1,
      anon_sym_LBRACK,
    ACTIONS(619), 1,
      anon_sym_LBRACE_RBRACE,
    STATE(175), 1,
      sym_arg,
  [3123] = 4,
    ACTIONS(617), 1,
      sym__alpha,
    STATE(161), 1,
      aux_sym_prefix_repeat1,
    STATE(261), 1,
      sym_prefix,
    STATE(285), 1,
      sym_addr,
  [3136] = 4,
    ACTIONS(617), 1,
      sym__alpha,
    STATE(161), 1,
      aux_sym_prefix_repeat1,
    STATE(261), 1,
      sym_prefix,
    STATE(278), 1,
      sym_addr,
  [3149] = 4,
    ACTIONS(617), 1,
      sym__alpha,
    STATE(161), 1,
      aux_sym_prefix_repeat1,
    STATE(261), 1,
      sym_prefix,
    STATE(279), 1,
      sym_addr,
  [3162] = 4,
    ACTIONS(617), 1,
      sym__alpha,
    STATE(161), 1,
      aux_sym_prefix_repeat1,
    STATE(261), 1,
      sym_prefix,
    STATE(281), 1,
      sym_addr,
  [3175] = 4,
    ACTIONS(617), 1,
      sym__alpha,
    STATE(161), 1,
      aux_sym_prefix_repeat1,
    STATE(261), 1,
      sym_prefix,
    STATE(283), 1,
      sym_addr,
  [3188] = 3,
    ACTIONS(291), 1,
      anon_sym_LBRACE,
    ACTIONS(303), 1,
      anon_sym_LBRACE_RBRACE,
    STATE(33), 1,
      sym_arg,
  [3198] = 3,
    ACTIONS(621), 1,
      anon_sym_DASH,
    ACTIONS(623), 1,
      sym__alpha,
    STATE(169), 1,
      aux_sym_prefix_repeat1,
  [3208] = 1,
    ACTIONS(625), 3,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_RBRACK_RBRACK,
  [3214] = 2,
    ACTIONS(629), 1,
      aux_sym__whitespace_token1,
    ACTIONS(627), 2,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
  [3222] = 3,
    ACTIONS(631), 1,
      anon_sym_BSLASH,
    STATE(109), 1,
      sym_fun_spec,
    STATE(146), 1,
      sym_ident,
  [3232] = 3,
    ACTIONS(633), 1,
      anon_sym_LBRACE,
    ACTIONS(635), 1,
      anon_sym_LBRACK,
    STATE(165), 1,
      aux_sym_binder_repeat1,
  [3242] = 3,
    ACTIONS(599), 1,
      anon_sym_LBRACK,
    ACTIONS(638), 1,
      anon_sym_LBRACE,
    STATE(165), 1,
      aux_sym_binder_repeat1,
  [3252] = 3,
    ACTIONS(631), 1,
      anon_sym_BSLASH,
    STATE(126), 1,
      sym_fun_spec,
    STATE(146), 1,
      sym_ident,
  [3262] = 2,
    ACTIONS(642), 1,
      aux_sym__whitespace_token1,
    ACTIONS(640), 2,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
  [3270] = 3,
    ACTIONS(644), 1,
      anon_sym_DASH,
    ACTIONS(646), 1,
      sym__alpha,
    STATE(169), 1,
      aux_sym_prefix_repeat1,
  [3280] = 3,
    ACTIONS(631), 1,
      anon_sym_BSLASH,
    STATE(83), 1,
      sym_fun_spec,
    STATE(145), 1,
      sym_ident,
  [3290] = 3,
    ACTIONS(649), 1,
      anon_sym_LBRACE,
    STATE(163), 1,
      sym_arg,
    STATE(173), 1,
      sym_method_body,
  [3300] = 3,
    ACTIONS(631), 1,
      anon_sym_BSLASH,
    STATE(80), 1,
      sym_fun_spec,
    STATE(145), 1,
      sym_ident,
  [3310] = 2,
    ACTIONS(653), 1,
      aux_sym__whitespace_token1,
    ACTIONS(651), 2,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
  [3318] = 2,
    ACTIONS(601), 1,
      anon_sym_LBRACE,
    STATE(115), 1,
      sym_arg,
  [3325] = 1,
    ACTIONS(350), 2,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
  [3330] = 2,
    ACTIONS(655), 1,
      sym_year,
    ACTIONS(657), 1,
      sym_text,
  [3337] = 2,
    ACTIONS(659), 1,
      anon_sym_LBRACE,
    STATE(127), 1,
      sym__txt_arg,
  [3344] = 2,
    ACTIONS(649), 1,
      anon_sym_LBRACE,
    STATE(50), 1,
      sym_arg,
  [3351] = 2,
    ACTIONS(659), 1,
      anon_sym_LBRACE,
    STATE(133), 1,
      sym__txt_arg,
  [3358] = 2,
    ACTIONS(661), 1,
      anon_sym_BSLASH,
    STATE(194), 1,
      sym_ident,
  [3365] = 2,
    ACTIONS(601), 1,
      anon_sym_LBRACE,
    STATE(195), 1,
      sym_arg,
  [3372] = 2,
    ACTIONS(601), 1,
      anon_sym_LBRACE,
    STATE(196), 1,
      sym_arg,
  [3379] = 2,
    ACTIONS(659), 1,
      anon_sym_LBRACE,
    STATE(197), 1,
      sym__txt_arg,
  [3386] = 2,
    ACTIONS(659), 1,
      anon_sym_LBRACE,
    STATE(131), 1,
      sym__txt_arg,
  [3393] = 2,
    ACTIONS(601), 1,
      anon_sym_LBRACE,
    STATE(129), 1,
      sym_arg,
  [3400] = 2,
    ACTIONS(663), 1,
      anon_sym_LBRACE,
    STATE(128), 1,
      sym__txt_arg,
  [3407] = 2,
    ACTIONS(649), 1,
      anon_sym_LBRACE,
    STATE(56), 1,
      sym_arg,
  [3414] = 2,
    ACTIONS(649), 1,
      anon_sym_LBRACE,
    STATE(57), 1,
      sym_arg,
  [3421] = 2,
    ACTIONS(665), 1,
      anon_sym_BSLASH,
    STATE(124), 1,
      sym_ident,
  [3428] = 2,
    ACTIONS(597), 1,
      anon_sym_LBRACE,
    STATE(39), 1,
      sym_arg,
  [3435] = 2,
    ACTIONS(601), 1,
      anon_sym_LBRACE,
    STATE(134), 1,
      sym_arg,
  [3442] = 2,
    ACTIONS(659), 1,
      anon_sym_LBRACE,
    STATE(113), 1,
      sym__txt_arg,
  [3449] = 2,
    ACTIONS(659), 1,
      anon_sym_LBRACE,
    STATE(205), 1,
      sym__txt_arg,
  [3456] = 2,
    ACTIONS(597), 1,
      anon_sym_LBRACE,
    STATE(42), 1,
      sym_arg,
  [3463] = 2,
    ACTIONS(597), 1,
      anon_sym_LBRACE,
    STATE(43), 1,
      sym_arg,
  [3470] = 2,
    ACTIONS(597), 1,
      anon_sym_LBRACE,
    STATE(44), 1,
      sym_arg,
  [3477] = 2,
    ACTIONS(597), 1,
      anon_sym_LBRACE,
    STATE(45), 1,
      sym_arg,
  [3484] = 2,
    ACTIONS(601), 1,
      anon_sym_LBRACE,
    STATE(111), 1,
      sym_arg,
  [3491] = 2,
    ACTIONS(601), 1,
      anon_sym_LBRACE,
    STATE(116), 1,
      sym_arg,
  [3498] = 2,
    ACTIONS(667), 1,
      anon_sym_BSLASH,
    STATE(72), 1,
      sym_ident,
  [3505] = 2,
    ACTIONS(601), 1,
      anon_sym_LBRACE,
    STATE(114), 1,
      sym_arg,
  [3512] = 2,
    ACTIONS(669), 1,
      anon_sym_LBRACE,
    STATE(319), 1,
      sym_arg,
  [3519] = 2,
    ACTIONS(671), 1,
      aux_sym_day_token1,
    STATE(292), 1,
      sym_day,
  [3526] = 2,
    ACTIONS(601), 1,
      anon_sym_LBRACE,
    STATE(125), 1,
      sym_arg,
  [3533] = 2,
    ACTIONS(601), 1,
      anon_sym_LBRACE,
    STATE(110), 1,
      sym_arg,
  [3540] = 2,
    ACTIONS(597), 1,
      anon_sym_LBRACE,
    STATE(52), 1,
      sym_arg,
  [3547] = 2,
    ACTIONS(673), 1,
      sym_year,
    ACTIONS(675), 1,
      sym_text,
  [3554] = 2,
    ACTIONS(597), 1,
      anon_sym_LBRACE,
    STATE(53), 1,
      sym_arg,
  [3561] = 2,
    ACTIONS(677), 1,
      anon_sym_LPAREN,
    STATE(122), 1,
      sym_link_dest,
  [3568] = 2,
    ACTIONS(597), 1,
      anon_sym_LBRACE,
    STATE(54), 1,
      sym_arg,
  [3575] = 2,
    ACTIONS(597), 1,
      anon_sym_LBRACE,
    STATE(58), 1,
      sym_arg,
  [3582] = 2,
    ACTIONS(597), 1,
      anon_sym_LBRACE,
    STATE(63), 1,
      sym_arg,
  [3589] = 2,
    ACTIONS(649), 1,
      anon_sym_LBRACE,
    STATE(55), 1,
      sym_arg,
  [3596] = 2,
    ACTIONS(597), 1,
      anon_sym_LBRACE,
    STATE(65), 1,
      sym_arg,
  [3603] = 2,
    ACTIONS(601), 1,
      anon_sym_LBRACE,
    STATE(95), 1,
      sym_arg,
  [3610] = 2,
    ACTIONS(601), 1,
      anon_sym_LBRACE,
    STATE(94), 1,
      sym_arg,
  [3617] = 2,
    ACTIONS(601), 1,
      anon_sym_LBRACE,
    STATE(90), 1,
      sym_arg,
  [3624] = 2,
    ACTIONS(601), 1,
      anon_sym_LBRACE,
    STATE(93), 1,
      sym_arg,
  [3631] = 2,
    ACTIONS(601), 1,
      anon_sym_LBRACE,
    STATE(92), 1,
      sym_arg,
  [3638] = 1,
    ACTIONS(328), 2,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
  [3643] = 2,
    ACTIONS(601), 1,
      anon_sym_LBRACE,
    STATE(119), 1,
      sym_arg,
  [3650] = 2,
    ACTIONS(601), 1,
      anon_sym_LBRACE,
    STATE(99), 1,
      sym_arg,
  [3657] = 2,
    ACTIONS(601), 1,
      anon_sym_LBRACE,
    STATE(102), 1,
      sym_arg,
  [3664] = 2,
    ACTIONS(669), 1,
      anon_sym_LBRACE,
    STATE(269), 1,
      sym_arg,
  [3671] = 2,
    ACTIONS(597), 1,
      anon_sym_LBRACE,
    STATE(70), 1,
      sym_arg,
  [3678] = 2,
    ACTIONS(597), 1,
      anon_sym_LBRACE,
    STATE(71), 1,
      sym_arg,
  [3685] = 2,
    ACTIONS(665), 1,
      anon_sym_BSLASH,
    STATE(104), 1,
      sym_ident,
  [3692] = 2,
    ACTIONS(665), 1,
      anon_sym_BSLASH,
    STATE(105), 1,
      sym_ident,
  [3699] = 2,
    ACTIONS(661), 1,
      anon_sym_BSLASH,
    STATE(199), 1,
      sym_ident,
  [3706] = 2,
    ACTIONS(601), 1,
      anon_sym_LBRACE,
    STATE(106), 1,
      sym_arg,
  [3713] = 2,
    ACTIONS(671), 1,
      aux_sym_day_token1,
    STATE(282), 1,
      sym_day,
  [3720] = 2,
    ACTIONS(601), 1,
      anon_sym_LBRACE,
    STATE(174), 1,
      sym_arg,
  [3727] = 2,
    ACTIONS(601), 1,
      anon_sym_LBRACE,
    STATE(201), 1,
      sym_arg,
  [3734] = 2,
    ACTIONS(601), 1,
      anon_sym_LBRACE,
    STATE(107), 1,
      sym_arg,
  [3741] = 1,
    ACTIONS(679), 2,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
  [3746] = 2,
    ACTIONS(597), 1,
      anon_sym_LBRACE,
    STATE(68), 1,
      sym_arg,
  [3753] = 2,
    ACTIONS(597), 1,
      anon_sym_LBRACE,
    STATE(32), 1,
      sym_arg,
  [3760] = 2,
    ACTIONS(681), 1,
      anon_sym_LPAREN,
    STATE(69), 1,
      sym_link_dest,
  [3767] = 2,
    ACTIONS(597), 1,
      anon_sym_LBRACE,
    STATE(73), 1,
      sym_arg,
  [3774] = 2,
    ACTIONS(683), 1,
      anon_sym_LBRACE,
    STATE(75), 1,
      sym__txt_arg,
  [3781] = 2,
    ACTIONS(683), 1,
      anon_sym_LBRACE,
    STATE(76), 1,
      sym__txt_arg,
  [3788] = 2,
    ACTIONS(683), 1,
      anon_sym_LBRACE,
    STATE(79), 1,
      sym__txt_arg,
  [3795] = 2,
    ACTIONS(597), 1,
      anon_sym_LBRACE,
    STATE(81), 1,
      sym_arg,
  [3802] = 2,
    ACTIONS(685), 1,
      anon_sym_LBRACE,
    STATE(82), 1,
      sym__txt_arg,
  [3809] = 2,
    ACTIONS(601), 1,
      anon_sym_LBRACE,
    STATE(101), 1,
      sym_arg,
  [3816] = 2,
    ACTIONS(667), 1,
      anon_sym_BSLASH,
    STATE(87), 1,
      sym_ident,
  [3823] = 2,
    ACTIONS(683), 1,
      anon_sym_LBRACE,
    STATE(85), 1,
      sym__txt_arg,
  [3830] = 2,
    ACTIONS(597), 1,
      anon_sym_LBRACE,
    STATE(84), 1,
      sym_arg,
  [3837] = 2,
    ACTIONS(601), 1,
      anon_sym_LBRACE,
    STATE(98), 1,
      sym_arg,
  [3844] = 2,
    ACTIONS(597), 1,
      anon_sym_LBRACE,
    STATE(78), 1,
      sym_arg,
  [3851] = 2,
    ACTIONS(597), 1,
      anon_sym_LBRACE,
    STATE(77), 1,
      sym_arg,
  [3858] = 2,
    ACTIONS(667), 1,
      anon_sym_BSLASH,
    STATE(74), 1,
      sym_ident,
  [3865] = 1,
    ACTIONS(687), 1,
      anon_sym_RBRACE,
  [3869] = 1,
    ACTIONS(689), 1,
      anon_sym_LBRACE,
  [3873] = 1,
    ACTIONS(691), 1,
      anon_sym_LBRACE,
  [3877] = 1,
    ACTIONS(693), 1,
      anon_sym_LBRACE,
  [3881] = 1,
    ACTIONS(695), 1,
      anon_sym_LBRACK,
  [3885] = 1,
    ACTIONS(697), 1,
      anon_sym_RBRACK,
  [3889] = 1,
    ACTIONS(699), 1,
      anon_sym_RBRACK_RBRACK,
  [3893] = 1,
    ACTIONS(701), 1,
      anon_sym_RBRACK_RBRACK,
  [3897] = 1,
    ACTIONS(703), 1,
      anon_sym_DASH,
  [3901] = 1,
    ACTIONS(705), 1,
      sym_text,
  [3905] = 1,
    ACTIONS(707), 1,
      sym_text,
  [3909] = 1,
    ACTIONS(709), 1,
      anon_sym_LBRACE,
  [3913] = 1,
    ACTIONS(711), 1,
      anon_sym_RBRACK_RBRACK,
  [3917] = 1,
    ACTIONS(713), 1,
      sym_text,
  [3921] = 1,
    ACTIONS(715), 1,
      anon_sym_LBRACE,
  [3925] = 1,
    ACTIONS(717), 1,
      sym_text,
  [3929] = 1,
    ACTIONS(719), 1,
      anon_sym_LBRACK,
  [3933] = 1,
    ACTIONS(721), 1,
      anon_sym_LPAREN,
  [3937] = 1,
    ACTIONS(723), 1,
      anon_sym_RPAREN,
  [3941] = 1,
    ACTIONS(725), 1,
      sym_text,
  [3945] = 1,
    ACTIONS(727), 1,
      anon_sym_DASH,
  [3949] = 1,
    ACTIONS(729), 1,
      anon_sym_RPAREN,
  [3953] = 1,
    ACTIONS(731), 1,
      anon_sym_RBRACE,
  [3957] = 1,
    ACTIONS(733), 1,
      sym_text,
  [3961] = 1,
    ACTIONS(735), 1,
      anon_sym_RBRACE,
  [3965] = 1,
    ACTIONS(737), 1,
      anon_sym_RBRACE,
  [3969] = 1,
    ACTIONS(739), 1,
      anon_sym_RBRACE,
  [3973] = 1,
    ACTIONS(741), 1,
      anon_sym_RBRACE,
  [3977] = 1,
    ACTIONS(743), 1,
      anon_sym_RBRACE,
  [3981] = 1,
    ACTIONS(745), 1,
      anon_sym_RBRACE,
  [3985] = 1,
    ACTIONS(747), 1,
      anon_sym_RBRACE,
  [3989] = 1,
    ACTIONS(749), 1,
      sym_text,
  [3993] = 1,
    ACTIONS(751), 1,
      anon_sym_RBRACE,
  [3997] = 1,
    ACTIONS(753), 1,
      sym_text,
  [4001] = 1,
    ACTIONS(755), 1,
      anon_sym_RBRACE,
  [4005] = 1,
    ACTIONS(757), 1,
      anon_sym_LBRACE,
  [4009] = 1,
    ACTIONS(759), 1,
      anon_sym_LBRACE,
  [4013] = 1,
    ACTIONS(761), 1,
      anon_sym_RBRACE,
  [4017] = 1,
    ACTIONS(763), 1,
      anon_sym_RBRACK,
  [4021] = 1,
    ACTIONS(765), 1,
      anon_sym_RBRACE,
  [4025] = 1,
    ACTIONS(767), 1,
      aux_sym_day_token2,
  [4029] = 1,
    ACTIONS(769), 1,
      sym_text,
  [4033] = 1,
    ACTIONS(771), 1,
      sym_text,
  [4037] = 1,
    ACTIONS(773), 1,
      anon_sym_RBRACK,
  [4041] = 1,
    ACTIONS(775), 1,
      sym_text,
  [4045] = 1,
    ACTIONS(777), 1,
      anon_sym_LBRACE,
  [4049] = 1,
    ACTIONS(779), 1,
      anon_sym_RBRACK,
  [4053] = 1,
    ACTIONS(781), 1,
      anon_sym_RBRACE,
  [4057] = 1,
    ACTIONS(783), 1,
      sym_month,
  [4061] = 1,
    ACTIONS(785), 1,
      ts_builtin_sym_end,
  [4065] = 1,
    ACTIONS(787), 1,
      anon_sym_RBRACE,
  [4069] = 1,
    ACTIONS(789), 1,
      anon_sym_DASH,
  [4073] = 1,
    ACTIONS(791), 1,
      anon_sym_LBRACE,
  [4077] = 1,
    ACTIONS(793), 1,
      anon_sym_LBRACE,
  [4081] = 1,
    ACTIONS(795), 1,
      anon_sym_LBRACE,
  [4085] = 1,
    ACTIONS(797), 1,
      anon_sym_LBRACE,
  [4089] = 1,
    ACTIONS(799), 1,
      anon_sym_LBRACE,
  [4093] = 1,
    ACTIONS(801), 1,
      anon_sym_DASH,
  [4097] = 1,
    ACTIONS(803), 1,
      anon_sym_LBRACE,
  [4101] = 1,
    ACTIONS(805), 1,
      anon_sym_RBRACK,
  [4105] = 1,
    ACTIONS(807), 1,
      sym_month,
  [4109] = 1,
    ACTIONS(809), 1,
      anon_sym_RBRACK,
  [4113] = 1,
    ACTIONS(811), 1,
      sym_text,
  [4117] = 1,
    ACTIONS(813), 1,
      anon_sym_DASH,
  [4121] = 1,
    ACTIONS(815), 1,
      sym_text,
  [4125] = 1,
    ACTIONS(817), 1,
      anon_sym_LBRACK,
  [4129] = 1,
    ACTIONS(819), 1,
      anon_sym_LBRACK,
  [4133] = 1,
    ACTIONS(821), 1,
      anon_sym_RBRACK,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 76,
  [SMALL_STATE(4)] = 152,
  [SMALL_STATE(5)] = 228,
  [SMALL_STATE(6)] = 304,
  [SMALL_STATE(7)] = 380,
  [SMALL_STATE(8)] = 453,
  [SMALL_STATE(9)] = 526,
  [SMALL_STATE(10)] = 599,
  [SMALL_STATE(11)] = 672,
  [SMALL_STATE(12)] = 744,
  [SMALL_STATE(13)] = 816,
  [SMALL_STATE(14)] = 925,
  [SMALL_STATE(15)] = 1034,
  [SMALL_STATE(16)] = 1075,
  [SMALL_STATE(17)] = 1116,
  [SMALL_STATE(18)] = 1157,
  [SMALL_STATE(19)] = 1198,
  [SMALL_STATE(20)] = 1241,
  [SMALL_STATE(21)] = 1284,
  [SMALL_STATE(22)] = 1324,
  [SMALL_STATE(23)] = 1340,
  [SMALL_STATE(24)] = 1356,
  [SMALL_STATE(25)] = 1378,
  [SMALL_STATE(26)] = 1394,
  [SMALL_STATE(27)] = 1410,
  [SMALL_STATE(28)] = 1431,
  [SMALL_STATE(29)] = 1448,
  [SMALL_STATE(30)] = 1476,
  [SMALL_STATE(31)] = 1490,
  [SMALL_STATE(32)] = 1518,
  [SMALL_STATE(33)] = 1531,
  [SMALL_STATE(34)] = 1544,
  [SMALL_STATE(35)] = 1557,
  [SMALL_STATE(36)] = 1570,
  [SMALL_STATE(37)] = 1583,
  [SMALL_STATE(38)] = 1596,
  [SMALL_STATE(39)] = 1609,
  [SMALL_STATE(40)] = 1622,
  [SMALL_STATE(41)] = 1635,
  [SMALL_STATE(42)] = 1648,
  [SMALL_STATE(43)] = 1661,
  [SMALL_STATE(44)] = 1674,
  [SMALL_STATE(45)] = 1687,
  [SMALL_STATE(46)] = 1700,
  [SMALL_STATE(47)] = 1713,
  [SMALL_STATE(48)] = 1726,
  [SMALL_STATE(49)] = 1739,
  [SMALL_STATE(50)] = 1754,
  [SMALL_STATE(51)] = 1767,
  [SMALL_STATE(52)] = 1780,
  [SMALL_STATE(53)] = 1793,
  [SMALL_STATE(54)] = 1806,
  [SMALL_STATE(55)] = 1819,
  [SMALL_STATE(56)] = 1832,
  [SMALL_STATE(57)] = 1845,
  [SMALL_STATE(58)] = 1858,
  [SMALL_STATE(59)] = 1871,
  [SMALL_STATE(60)] = 1884,
  [SMALL_STATE(61)] = 1899,
  [SMALL_STATE(62)] = 1912,
  [SMALL_STATE(63)] = 1925,
  [SMALL_STATE(64)] = 1938,
  [SMALL_STATE(65)] = 1951,
  [SMALL_STATE(66)] = 1964,
  [SMALL_STATE(67)] = 1977,
  [SMALL_STATE(68)] = 1990,
  [SMALL_STATE(69)] = 2003,
  [SMALL_STATE(70)] = 2016,
  [SMALL_STATE(71)] = 2029,
  [SMALL_STATE(72)] = 2042,
  [SMALL_STATE(73)] = 2055,
  [SMALL_STATE(74)] = 2068,
  [SMALL_STATE(75)] = 2081,
  [SMALL_STATE(76)] = 2094,
  [SMALL_STATE(77)] = 2107,
  [SMALL_STATE(78)] = 2120,
  [SMALL_STATE(79)] = 2133,
  [SMALL_STATE(80)] = 2146,
  [SMALL_STATE(81)] = 2159,
  [SMALL_STATE(82)] = 2172,
  [SMALL_STATE(83)] = 2185,
  [SMALL_STATE(84)] = 2198,
  [SMALL_STATE(85)] = 2211,
  [SMALL_STATE(86)] = 2224,
  [SMALL_STATE(87)] = 2237,
  [SMALL_STATE(88)] = 2250,
  [SMALL_STATE(89)] = 2263,
  [SMALL_STATE(90)] = 2276,
  [SMALL_STATE(91)] = 2288,
  [SMALL_STATE(92)] = 2306,
  [SMALL_STATE(93)] = 2318,
  [SMALL_STATE(94)] = 2330,
  [SMALL_STATE(95)] = 2342,
  [SMALL_STATE(96)] = 2354,
  [SMALL_STATE(97)] = 2366,
  [SMALL_STATE(98)] = 2378,
  [SMALL_STATE(99)] = 2390,
  [SMALL_STATE(100)] = 2402,
  [SMALL_STATE(101)] = 2414,
  [SMALL_STATE(102)] = 2426,
  [SMALL_STATE(103)] = 2438,
  [SMALL_STATE(104)] = 2450,
  [SMALL_STATE(105)] = 2462,
  [SMALL_STATE(106)] = 2474,
  [SMALL_STATE(107)] = 2486,
  [SMALL_STATE(108)] = 2498,
  [SMALL_STATE(109)] = 2510,
  [SMALL_STATE(110)] = 2522,
  [SMALL_STATE(111)] = 2534,
  [SMALL_STATE(112)] = 2546,
  [SMALL_STATE(113)] = 2564,
  [SMALL_STATE(114)] = 2576,
  [SMALL_STATE(115)] = 2588,
  [SMALL_STATE(116)] = 2600,
  [SMALL_STATE(117)] = 2612,
  [SMALL_STATE(118)] = 2624,
  [SMALL_STATE(119)] = 2636,
  [SMALL_STATE(120)] = 2648,
  [SMALL_STATE(121)] = 2666,
  [SMALL_STATE(122)] = 2678,
  [SMALL_STATE(123)] = 2690,
  [SMALL_STATE(124)] = 2708,
  [SMALL_STATE(125)] = 2720,
  [SMALL_STATE(126)] = 2732,
  [SMALL_STATE(127)] = 2744,
  [SMALL_STATE(128)] = 2756,
  [SMALL_STATE(129)] = 2768,
  [SMALL_STATE(130)] = 2780,
  [SMALL_STATE(131)] = 2798,
  [SMALL_STATE(132)] = 2810,
  [SMALL_STATE(133)] = 2822,
  [SMALL_STATE(134)] = 2834,
  [SMALL_STATE(135)] = 2846,
  [SMALL_STATE(136)] = 2858,
  [SMALL_STATE(137)] = 2870,
  [SMALL_STATE(138)] = 2882,
  [SMALL_STATE(139)] = 2897,
  [SMALL_STATE(140)] = 2912,
  [SMALL_STATE(141)] = 2929,
  [SMALL_STATE(142)] = 2944,
  [SMALL_STATE(143)] = 2957,
  [SMALL_STATE(144)] = 2972,
  [SMALL_STATE(145)] = 2989,
  [SMALL_STATE(146)] = 3005,
  [SMALL_STATE(147)] = 3021,
  [SMALL_STATE(148)] = 3037,
  [SMALL_STATE(149)] = 3053,
  [SMALL_STATE(150)] = 3064,
  [SMALL_STATE(151)] = 3075,
  [SMALL_STATE(152)] = 3086,
  [SMALL_STATE(153)] = 3097,
  [SMALL_STATE(154)] = 3110,
  [SMALL_STATE(155)] = 3123,
  [SMALL_STATE(156)] = 3136,
  [SMALL_STATE(157)] = 3149,
  [SMALL_STATE(158)] = 3162,
  [SMALL_STATE(159)] = 3175,
  [SMALL_STATE(160)] = 3188,
  [SMALL_STATE(161)] = 3198,
  [SMALL_STATE(162)] = 3208,
  [SMALL_STATE(163)] = 3214,
  [SMALL_STATE(164)] = 3222,
  [SMALL_STATE(165)] = 3232,
  [SMALL_STATE(166)] = 3242,
  [SMALL_STATE(167)] = 3252,
  [SMALL_STATE(168)] = 3262,
  [SMALL_STATE(169)] = 3270,
  [SMALL_STATE(170)] = 3280,
  [SMALL_STATE(171)] = 3290,
  [SMALL_STATE(172)] = 3300,
  [SMALL_STATE(173)] = 3310,
  [SMALL_STATE(174)] = 3318,
  [SMALL_STATE(175)] = 3325,
  [SMALL_STATE(176)] = 3330,
  [SMALL_STATE(177)] = 3337,
  [SMALL_STATE(178)] = 3344,
  [SMALL_STATE(179)] = 3351,
  [SMALL_STATE(180)] = 3358,
  [SMALL_STATE(181)] = 3365,
  [SMALL_STATE(182)] = 3372,
  [SMALL_STATE(183)] = 3379,
  [SMALL_STATE(184)] = 3386,
  [SMALL_STATE(185)] = 3393,
  [SMALL_STATE(186)] = 3400,
  [SMALL_STATE(187)] = 3407,
  [SMALL_STATE(188)] = 3414,
  [SMALL_STATE(189)] = 3421,
  [SMALL_STATE(190)] = 3428,
  [SMALL_STATE(191)] = 3435,
  [SMALL_STATE(192)] = 3442,
  [SMALL_STATE(193)] = 3449,
  [SMALL_STATE(194)] = 3456,
  [SMALL_STATE(195)] = 3463,
  [SMALL_STATE(196)] = 3470,
  [SMALL_STATE(197)] = 3477,
  [SMALL_STATE(198)] = 3484,
  [SMALL_STATE(199)] = 3491,
  [SMALL_STATE(200)] = 3498,
  [SMALL_STATE(201)] = 3505,
  [SMALL_STATE(202)] = 3512,
  [SMALL_STATE(203)] = 3519,
  [SMALL_STATE(204)] = 3526,
  [SMALL_STATE(205)] = 3533,
  [SMALL_STATE(206)] = 3540,
  [SMALL_STATE(207)] = 3547,
  [SMALL_STATE(208)] = 3554,
  [SMALL_STATE(209)] = 3561,
  [SMALL_STATE(210)] = 3568,
  [SMALL_STATE(211)] = 3575,
  [SMALL_STATE(212)] = 3582,
  [SMALL_STATE(213)] = 3589,
  [SMALL_STATE(214)] = 3596,
  [SMALL_STATE(215)] = 3603,
  [SMALL_STATE(216)] = 3610,
  [SMALL_STATE(217)] = 3617,
  [SMALL_STATE(218)] = 3624,
  [SMALL_STATE(219)] = 3631,
  [SMALL_STATE(220)] = 3638,
  [SMALL_STATE(221)] = 3643,
  [SMALL_STATE(222)] = 3650,
  [SMALL_STATE(223)] = 3657,
  [SMALL_STATE(224)] = 3664,
  [SMALL_STATE(225)] = 3671,
  [SMALL_STATE(226)] = 3678,
  [SMALL_STATE(227)] = 3685,
  [SMALL_STATE(228)] = 3692,
  [SMALL_STATE(229)] = 3699,
  [SMALL_STATE(230)] = 3706,
  [SMALL_STATE(231)] = 3713,
  [SMALL_STATE(232)] = 3720,
  [SMALL_STATE(233)] = 3727,
  [SMALL_STATE(234)] = 3734,
  [SMALL_STATE(235)] = 3741,
  [SMALL_STATE(236)] = 3746,
  [SMALL_STATE(237)] = 3753,
  [SMALL_STATE(238)] = 3760,
  [SMALL_STATE(239)] = 3767,
  [SMALL_STATE(240)] = 3774,
  [SMALL_STATE(241)] = 3781,
  [SMALL_STATE(242)] = 3788,
  [SMALL_STATE(243)] = 3795,
  [SMALL_STATE(244)] = 3802,
  [SMALL_STATE(245)] = 3809,
  [SMALL_STATE(246)] = 3816,
  [SMALL_STATE(247)] = 3823,
  [SMALL_STATE(248)] = 3830,
  [SMALL_STATE(249)] = 3837,
  [SMALL_STATE(250)] = 3844,
  [SMALL_STATE(251)] = 3851,
  [SMALL_STATE(252)] = 3858,
  [SMALL_STATE(253)] = 3865,
  [SMALL_STATE(254)] = 3869,
  [SMALL_STATE(255)] = 3873,
  [SMALL_STATE(256)] = 3877,
  [SMALL_STATE(257)] = 3881,
  [SMALL_STATE(258)] = 3885,
  [SMALL_STATE(259)] = 3889,
  [SMALL_STATE(260)] = 3893,
  [SMALL_STATE(261)] = 3897,
  [SMALL_STATE(262)] = 3901,
  [SMALL_STATE(263)] = 3905,
  [SMALL_STATE(264)] = 3909,
  [SMALL_STATE(265)] = 3913,
  [SMALL_STATE(266)] = 3917,
  [SMALL_STATE(267)] = 3921,
  [SMALL_STATE(268)] = 3925,
  [SMALL_STATE(269)] = 3929,
  [SMALL_STATE(270)] = 3933,
  [SMALL_STATE(271)] = 3937,
  [SMALL_STATE(272)] = 3941,
  [SMALL_STATE(273)] = 3945,
  [SMALL_STATE(274)] = 3949,
  [SMALL_STATE(275)] = 3953,
  [SMALL_STATE(276)] = 3957,
  [SMALL_STATE(277)] = 3961,
  [SMALL_STATE(278)] = 3965,
  [SMALL_STATE(279)] = 3969,
  [SMALL_STATE(280)] = 3973,
  [SMALL_STATE(281)] = 3977,
  [SMALL_STATE(282)] = 3981,
  [SMALL_STATE(283)] = 3985,
  [SMALL_STATE(284)] = 3989,
  [SMALL_STATE(285)] = 3993,
  [SMALL_STATE(286)] = 3997,
  [SMALL_STATE(287)] = 4001,
  [SMALL_STATE(288)] = 4005,
  [SMALL_STATE(289)] = 4009,
  [SMALL_STATE(290)] = 4013,
  [SMALL_STATE(291)] = 4017,
  [SMALL_STATE(292)] = 4021,
  [SMALL_STATE(293)] = 4025,
  [SMALL_STATE(294)] = 4029,
  [SMALL_STATE(295)] = 4033,
  [SMALL_STATE(296)] = 4037,
  [SMALL_STATE(297)] = 4041,
  [SMALL_STATE(298)] = 4045,
  [SMALL_STATE(299)] = 4049,
  [SMALL_STATE(300)] = 4053,
  [SMALL_STATE(301)] = 4057,
  [SMALL_STATE(302)] = 4061,
  [SMALL_STATE(303)] = 4065,
  [SMALL_STATE(304)] = 4069,
  [SMALL_STATE(305)] = 4073,
  [SMALL_STATE(306)] = 4077,
  [SMALL_STATE(307)] = 4081,
  [SMALL_STATE(308)] = 4085,
  [SMALL_STATE(309)] = 4089,
  [SMALL_STATE(310)] = 4093,
  [SMALL_STATE(311)] = 4097,
  [SMALL_STATE(312)] = 4101,
  [SMALL_STATE(313)] = 4105,
  [SMALL_STATE(314)] = 4109,
  [SMALL_STATE(315)] = 4113,
  [SMALL_STATE(316)] = 4117,
  [SMALL_STATE(317)] = 4121,
  [SMALL_STATE(318)] = 4125,
  [SMALL_STATE(319)] = 4129,
  [SMALL_STATE(320)] = 4133,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [17] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arg_repeat1, 2), SHIFT_REPEAT(14),
  [20] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arg_repeat1, 2),
  [22] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arg_repeat1, 2), SHIFT_REPEAT(286),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arg_repeat1, 2), SHIFT_REPEAT(2),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arg_repeat1, 2), SHIFT_REPEAT(236),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arg_repeat1, 2), SHIFT_REPEAT(237),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arg_repeat1, 2), SHIFT_REPEAT(140),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arg_repeat1, 2), SHIFT_REPEAT(2),
  [40] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [42] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [44] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [46] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [48] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [50] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(13),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(286),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(11),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(249),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(245),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(144),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(264),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(306),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(307),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(308),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(318),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [244] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_queries_repeat1, 2), SHIFT_REPEAT(262),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_queries_repeat1, 2),
  [249] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_queries_repeat1, 2), SHIFT_REPEAT(188),
  [252] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_queries_repeat1, 2), SHIFT_REPEAT(187),
  [255] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_queries_repeat1, 2), SHIFT_REPEAT(213),
  [258] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_queries_repeat1, 2), SHIFT_REPEAT(288),
  [261] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_queries_repeat1, 2), SHIFT_REPEAT(289),
  [264] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_queries_repeat1, 2), SHIFT_REPEAT(15),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(288),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_queries, 1),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ident, 2),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ident, 2),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_query_repeat1, 2),
  [307] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_repeat1, 2), SHIFT_REPEAT(28),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg, 3),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg, 3),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_display_math, 2, .production_id = 1),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_display_math, 2, .production_id = 1),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ident, 3, .production_id = 8),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ident, 3, .production_id = 8),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 8, .production_id = 17),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 8, .production_id = 17),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_tree, 5),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_tree, 5),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transclude, 5, .production_id = 15),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transclude, 5, .production_id = 15),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_export, 5),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 5),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import, 5),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 5),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fun_spec, 3, .production_id = 14),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fun_spec, 3, .production_id = 14),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__txt_arg, 3),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__txt_arg, 3),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_link_dest, 3, .production_id = 13),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_link_dest, 3, .production_id = 13),
  [386] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_put, 4, .production_id = 12),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_put, 4, .production_id = 12),
  [390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 4, .production_id = 11),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4, .production_id = 11),
  [394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_tex, 4),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_tex, 4),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_meta, 4),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta, 4),
  [402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fun_spec, 2, .production_id = 10),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fun_spec, 2, .production_id = 10),
  [406] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unlabeled_link, 3),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unlabeled_link, 3),
  [410] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pre, 3),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pre, 3),
  [414] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_id_repeat1, 2), SHIFT_REPEAT(49),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_id_repeat1, 2),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_meta, 2, .production_id = 16),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_meta, 2, .production_id = 16),
  [423] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_blockquote, 3),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_blockquote, 3),
  [427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 3),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 3),
  [431] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ol, 3),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ol, 3),
  [435] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ul, 3),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ul, 3),
  [439] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_taxon, 2),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_taxon, 2),
  [443] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_tag, 2),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_tag, 2),
  [447] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_author, 2),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_author, 2),
  [451] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_li, 3),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_li, 3),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id, 1),
  [459] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_and, 4),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_and, 4),
  [463] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_strong, 3),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_strong, 3),
  [467] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_em, 3),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_em, 3),
  [471] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_or, 4),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_or, 4),
  [475] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query0, 1),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query0, 1),
  [479] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_math, 2, .production_id = 1),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_math, 2, .production_id = 1),
  [483] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_markdown_link, 2),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_markdown_link, 2),
  [487] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_p, 3),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_p, 3),
  [491] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 3),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 3),
  [495] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_open, 3),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 3),
  [499] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title, 3, .production_id = 2),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title, 3, .production_id = 2),
  [503] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_get, 3),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_get, 3),
  [507] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 3, .production_id = 3),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3, .production_id = 3),
  [511] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_author, 3, .production_id = 4),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_author, 3, .production_id = 4),
  [515] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scope, 3),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scope, 3),
  [519] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tex, 3),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tex, 3),
  [523] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_contributor, 3, .production_id = 5),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contributor, 3, .production_id = 5),
  [527] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let, 3),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let, 3),
  [531] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ref, 3, .production_id = 6),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ref, 3, .production_id = 6),
  [535] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_date, 3, .production_id = 7),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 3, .production_id = 7),
  [539] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_def, 3),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def, 3),
  [543] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace, 3),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace, 3),
  [547] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_taxon, 3),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_taxon, 3),
  [551] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alloc, 3),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alloc, 3),
  [555] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_date, 9, .production_id = 18),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 9, .production_id = 18),
  [559] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_patch, 9, .production_id = 19),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_patch, 9, .production_id = 19),
  [563] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [565] = {.entry = {.count = 1, .reusable = false}}, SHIFT(295),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [569] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [571] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_object_repeat1, 2),
  [573] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_repeat1, 2), SHIFT_REPEAT(295),
  [576] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2), SHIFT_REPEAT(120),
  [579] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [581] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [587] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [589] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [603] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [605] = {.entry = {.count = 1, .reusable = false}}, SHIFT(274),
  [607] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query, 3),
  [609] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query, 2),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [613] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query, 1),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prefix, 1),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_addr, 3),
  [627] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_body, 1),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_body, 1),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_binder_repeat1, 2),
  [635] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_binder_repeat1, 2), SHIFT_REPEAT(276),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binder, 1),
  [640] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_decl, 1),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_decl, 1),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_prefix_repeat1, 2),
  [646] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_prefix_repeat1, 2), SHIFT_REPEAT(169),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [651] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method, 4, .production_id = 20),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method, 4, .production_id = 20),
  [655] = {.entry = {.count = 1, .reusable = false}}, SHIFT(316),
  [657] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [673] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [675] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_binder_repeat1, 3),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_link, 1),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_link_label, 3, .production_id = 9),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_day, 2),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [785] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
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
