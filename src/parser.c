#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
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
#define STATE_COUNT 182
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 129
#define ALIAS_COUNT 1
#define TOKEN_COUNT 63
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 16
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 16

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
  anon_sym_BSLASH_LT = 15,
  anon_sym_GT = 16,
  anon_sym_BSLASHxmlns_COLON = 17,
  sym_year = 18,
  sym_month = 19,
  aux_sym_day_token1 = 20,
  aux_sym_day_token2 = 21,
  anon_sym_def = 22,
  anon_sym_alloc = 23,
  anon_sym_taxon = 24,
  anon_sym_meta = 25,
  anon_sym_import = 26,
  anon_sym_export = 27,
  anon_sym_namespace = 28,
  anon_sym_transclude = 29,
  anon_sym_let = 30,
  anon_sym_tex = 31,
  anon_sym_scope = 32,
  anon_sym_subtree = 33,
  anon_sym_put = 34,
  anon_sym_get = 35,
  anon_sym_open = 36,
  anon_sym_query = 37,
  anon_sym_object = 38,
  anon_sym_patch = 39,
  anon_sym_call = 40,
  sym_comment = 41,
  anon_sym_POUND = 42,
  anon_sym_POUND_POUND = 43,
  anon_sym_p = 44,
  anon_sym_em = 45,
  anon_sym_strong = 46,
  anon_sym_li = 47,
  anon_sym_ul = 48,
  anon_sym_ol = 49,
  anon_sym_code = 50,
  anon_sym_blockquote = 51,
  anon_sym_pre = 52,
  anon_sym_LBRACE_RBRACE = 53,
  anon_sym__ = 54,
  anon_sym_LBRACK_LBRACK = 55,
  anon_sym_RBRACK_RBRACK = 56,
  aux_sym__whitespace_token1 = 57,
  sym__alpha = 58,
  sym__digit = 59,
  sym_text = 60,
  aux_sym__xml_base_ident_token1 = 61,
  anon_sym_COLON = 62,
  sym_source_file = 63,
  sym__node = 64,
  sym_braces = 65,
  sym_squares = 66,
  sym_parens = 67,
  sym_title = 68,
  sym_author = 69,
  sym_contributor = 70,
  sym_date = 71,
  sym_tag = 72,
  sym_ref = 73,
  sym_xml_tag = 74,
  sym_decl_xmlns = 75,
  sym_day = 76,
  sym_def = 77,
  sym_alloc = 78,
  sym_import = 79,
  sym_export = 80,
  sym_namespace = 81,
  sym_transclude = 82,
  sym_let = 83,
  sym_tex = 84,
  sym_scope = 85,
  sym_subtree = 86,
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
  sym_method_decl = 107,
  sym_fun_spec = 108,
  sym_ident = 109,
  sym_ident_with_method_calls = 110,
  sym__arg = 111,
  sym__link = 112,
  sym_addr = 113,
  sym_markdown_link = 114,
  sym_unlabeled_link = 115,
  sym_external_link = 116,
  sym__whitespace = 117,
  sym__txt_arg = 118,
  sym__xml_base_ident = 119,
  sym__xml_qname = 120,
  aux_sym_source_file_repeat1 = 121,
  aux_sym_braces_repeat1 = 122,
  aux_sym_object_repeat1 = 123,
  aux_sym_fun_spec_repeat1 = 124,
  aux_sym_ident_repeat1 = 125,
  aux_sym_ident_with_method_calls_repeat1 = 126,
  aux_sym__arg_repeat1 = 127,
  aux_sym__xml_base_ident_repeat1 = 128,
  alias_sym_method_body = 129,
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
  [anon_sym_BSLASH_LT] = "\\<",
  [anon_sym_GT] = ">",
  [anon_sym_BSLASHxmlns_COLON] = "\\xmlns:",
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
  [anon_sym_LBRACE_RBRACE] = "{}",
  [anon_sym__] = "_",
  [anon_sym_LBRACK_LBRACK] = "[[",
  [anon_sym_RBRACK_RBRACK] = "]]",
  [aux_sym__whitespace_token1] = "_whitespace_token1",
  [sym__alpha] = "_alpha",
  [sym__digit] = "_digit",
  [sym_text] = "text",
  [aux_sym__xml_base_ident_token1] = "_xml_base_ident_token1",
  [anon_sym_COLON] = ":",
  [sym_source_file] = "source_file",
  [sym__node] = "_node",
  [sym_braces] = "braces",
  [sym_squares] = "squares",
  [sym_parens] = "parens",
  [sym_title] = "title",
  [sym_author] = "author",
  [sym_contributor] = "contributor",
  [sym_date] = "date",
  [sym_tag] = "tag",
  [sym_ref] = "ref",
  [sym_xml_tag] = "xml_tag",
  [sym_decl_xmlns] = "decl_xmlns",
  [sym_day] = "day",
  [sym_def] = "def",
  [sym_alloc] = "alloc",
  [sym_import] = "import",
  [sym_export] = "export",
  [sym_namespace] = "namespace",
  [sym_transclude] = "transclude",
  [sym_let] = "let",
  [sym_tex] = "tex",
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
  [sym_p] = "p",
  [sym_em] = "em",
  [sym_strong] = "strong",
  [sym_li] = "li",
  [sym_ul] = "ul",
  [sym_ol] = "ol",
  [sym_code] = "code",
  [sym_blockquote] = "blockquote",
  [sym_pre] = "pre",
  [sym_method_decl] = "method_decl",
  [sym_fun_spec] = "fun_spec",
  [sym_ident] = "ident",
  [sym_ident_with_method_calls] = "ident_with_method_calls",
  [sym__arg] = "_arg",
  [sym__link] = "_link",
  [sym_addr] = "addr",
  [sym_markdown_link] = "markdown_link",
  [sym_unlabeled_link] = "unlabeled_link",
  [sym_external_link] = "external_link",
  [sym__whitespace] = "_whitespace",
  [sym__txt_arg] = "_txt_arg",
  [sym__xml_base_ident] = "_xml_base_ident",
  [sym__xml_qname] = "_xml_qname",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_braces_repeat1] = "braces_repeat1",
  [aux_sym_object_repeat1] = "object_repeat1",
  [aux_sym_fun_spec_repeat1] = "fun_spec_repeat1",
  [aux_sym_ident_repeat1] = "ident_repeat1",
  [aux_sym_ident_with_method_calls_repeat1] = "ident_with_method_calls_repeat1",
  [aux_sym__arg_repeat1] = "_arg_repeat1",
  [aux_sym__xml_base_ident_repeat1] = "_xml_base_ident_repeat1",
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
  [anon_sym_BSLASH_LT] = anon_sym_BSLASH_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_BSLASHxmlns_COLON] = anon_sym_BSLASHxmlns_COLON,
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
  [anon_sym_LBRACE_RBRACE] = anon_sym_LBRACE_RBRACE,
  [anon_sym__] = anon_sym__,
  [anon_sym_LBRACK_LBRACK] = anon_sym_LBRACK_LBRACK,
  [anon_sym_RBRACK_RBRACK] = anon_sym_RBRACK_RBRACK,
  [aux_sym__whitespace_token1] = aux_sym__whitespace_token1,
  [sym__alpha] = sym__alpha,
  [sym__digit] = sym__digit,
  [sym_text] = sym_text,
  [aux_sym__xml_base_ident_token1] = aux_sym__xml_base_ident_token1,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_source_file] = sym_source_file,
  [sym__node] = sym__node,
  [sym_braces] = sym_braces,
  [sym_squares] = sym_squares,
  [sym_parens] = sym_parens,
  [sym_title] = sym_title,
  [sym_author] = sym_author,
  [sym_contributor] = sym_contributor,
  [sym_date] = sym_date,
  [sym_tag] = sym_tag,
  [sym_ref] = sym_ref,
  [sym_xml_tag] = sym_xml_tag,
  [sym_decl_xmlns] = sym_decl_xmlns,
  [sym_day] = sym_day,
  [sym_def] = sym_def,
  [sym_alloc] = sym_alloc,
  [sym_import] = sym_import,
  [sym_export] = sym_export,
  [sym_namespace] = sym_namespace,
  [sym_transclude] = sym_transclude,
  [sym_let] = sym_let,
  [sym_tex] = sym_tex,
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
  [sym_method_decl] = sym_method_decl,
  [sym_fun_spec] = sym_fun_spec,
  [sym_ident] = sym_ident,
  [sym_ident_with_method_calls] = sym_ident_with_method_calls,
  [sym__arg] = sym__arg,
  [sym__link] = sym__link,
  [sym_addr] = sym_addr,
  [sym_markdown_link] = sym_markdown_link,
  [sym_unlabeled_link] = sym_unlabeled_link,
  [sym_external_link] = sym_external_link,
  [sym__whitespace] = sym__whitespace,
  [sym__txt_arg] = sym__txt_arg,
  [sym__xml_base_ident] = sym__xml_base_ident,
  [sym__xml_qname] = sym__xml_qname,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_braces_repeat1] = aux_sym_braces_repeat1,
  [aux_sym_object_repeat1] = aux_sym_object_repeat1,
  [aux_sym_fun_spec_repeat1] = aux_sym_fun_spec_repeat1,
  [aux_sym_ident_repeat1] = aux_sym_ident_repeat1,
  [aux_sym_ident_with_method_calls_repeat1] = aux_sym_ident_with_method_calls_repeat1,
  [aux_sym__arg_repeat1] = aux_sym__arg_repeat1,
  [aux_sym__xml_base_ident_repeat1] = aux_sym__xml_base_ident_repeat1,
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
  [anon_sym_BSLASH_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHxmlns_COLON] = {
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
  [aux_sym__xml_base_ident_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__node] = {
    .visible = false,
    .named = true,
  },
  [sym_braces] = {
    .visible = true,
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
  [sym_ref] = {
    .visible = true,
    .named = true,
  },
  [sym_xml_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_decl_xmlns] = {
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
  [sym__xml_base_ident] = {
    .visible = false,
    .named = true,
  },
  [sym__xml_qname] = {
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
  [aux_sym__xml_base_ident_repeat1] = {
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
  field_identifier = 8,
  field_key = 9,
  field_label = 10,
  field_object = 11,
  field_ref = 12,
  field_self = 13,
  field_tag = 14,
  field_title = 15,
  field_value = 16,
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
  [field_identifier] = "identifier",
  [field_key] = "key",
  [field_label] = "label",
  [field_object] = "object",
  [field_ref] = "ref",
  [field_self] = "self",
  [field_tag] = "tag",
  [field_title] = "title",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 3},
  [2] = {.index = 3, .length = 3},
  [3] = {.index = 6, .length = 3},
  [4] = {.index = 9, .length = 3},
  [5] = {.index = 12, .length = 3},
  [6] = {.index = 15, .length = 3},
  [7] = {.index = 18, .length = 2},
  [8] = {.index = 20, .length = 2},
  [9] = {.index = 22, .length = 3},
  [10] = {.index = 25, .length = 1},
  [11] = {.index = 26, .length = 6},
  [12] = {.index = 32, .length = 3},
  [13] = {.index = 35, .length = 9},
  [14] = {.index = 44, .length = 4},
  [15] = {.index = 48, .length = 4},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_title, 0},
    {field_title, 1},
    {field_title, 2},
  [3] =
    {field_author, 0},
    {field_author, 1},
    {field_author, 2},
  [6] =
    {field_contributor, 0},
    {field_contributor, 1},
    {field_contributor, 2},
  [9] =
    {field_date, 0},
    {field_date, 1},
    {field_date, 2},
  [12] =
    {field_tag, 0},
    {field_tag, 1},
    {field_tag, 2},
  [15] =
    {field_ref, 0},
    {field_ref, 1},
    {field_ref, 2},
  [18] =
    {field_argument, 1},
    {field_identifier, 0},
  [20] =
    {field_argument, 3},
    {field_identifier, 2},
  [22] =
    {field_argument, 2},
    {field_binder, 1},
    {field_identifier, 0},
  [25] =
    {field_address, 3},
  [26] =
    {field_dest, 3},
    {field_dest, 4},
    {field_dest, 5},
    {field_label, 0},
    {field_label, 1},
    {field_label, 2},
  [32] =
    {field_self, 2},
    {field_self, 3},
    {field_self, 4},
  [35] =
    {field_date, 0},
    {field_date, 1},
    {field_date, 2},
    {field_date, 3},
    {field_date, 4},
    {field_date, 5},
    {field_date, 6},
    {field_date, 7},
    {field_date, 8},
  [44] =
    {field_object, 2},
    {field_self, 3},
    {field_self, 4},
    {field_self, 5},
  [48] =
    {field_key, 0},
    {field_key, 1},
    {field_key, 2},
    {field_value, 3},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [15] = {
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
  [5] = 5,
  [6] = 6,
  [7] = 3,
  [8] = 3,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 6,
  [14] = 6,
  [15] = 15,
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
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 20,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 21,
  [89] = 22,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 40,
  [98] = 98,
  [99] = 99,
  [100] = 46,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
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
  [119] = 40,
  [120] = 120,
  [121] = 46,
  [122] = 122,
  [123] = 123,
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
  [134] = 49,
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
  [178] = 171,
  [179] = 179,
  [180] = 180,
  [181] = 181,
};

static TSCharacterRange sym_text_character_set_1[] = {
  {0, '\t'}, {0x0b, '\f'}, {0x0e, '"'}, {'$', '$'}, {'&', '\''}, {'*', 'Z'}, {'^', 'z'}, {'|', '|'},
  {'~', 0x10ffff},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(40);
      ADVANCE_MAP(
        '#', 109,
        '%', 108,
        '(', 47,
        ')', 48,
        '-', 59,
        '/', 362,
        ':', 363,
        '>', 65,
        '[', 45,
        '\\', 50,
        ']', 46,
        '_', 140,
        'a', 197,
        'b', 190,
        'c', 149,
        'd', 147,
        'e', 198,
        'g', 176,
        'i', 200,
        'l', 177,
        'm', 179,
        'n', 146,
        'o', 151,
        'p', 113,
        'q', 246,
        'r', 174,
        's', 156,
        't', 144,
        'u', 191,
        '{', 42,
        '}', 43,
      );
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(70);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(71);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 1:
      if (lookahead == '#') ADVANCE(109);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(1);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(356);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(361);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '-', 59,
        '[', 44,
        '\\', 49,
        ']', 7,
        'b', 20,
        'c', 25,
        'e', 22,
        'l', 15,
        'o', 18,
        'p', 114,
        's', 32,
        'u', 19,
        '{', 42,
      );
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(70);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      END_STATE();
    case 3:
      if (lookahead == '0') ADVANCE(37);
      if (lookahead == '1') ADVANCE(69);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(68);
      END_STATE();
    case 4:
      if (lookahead == ':') ADVANCE(363);
      if (lookahead == '>') ADVANCE(65);
      if (lookahead == '[') ADVANCE(44);
      if (lookahead == '{') ADVANCE(41);
      if (lookahead == '#' ||
          lookahead == '-' ||
          lookahead == '/') ADVANCE(362);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(252);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 5:
      if (lookahead == ':') ADVANCE(66);
      END_STATE();
    case 6:
      if (lookahead == '[') ADVANCE(44);
      if (lookahead == '}') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(143);
      if (('\n' <= lookahead && lookahead <= '\r')) SKIP(6);
      END_STATE();
    case 7:
      if (lookahead == ']') ADVANCE(142);
      END_STATE();
    case 8:
      ADVANCE_MAP(
        'a', 305,
        'b', 298,
        'c', 258,
        'd', 256,
        'e', 306,
        'g', 285,
        'i', 308,
        'l', 286,
        'n', 255,
        'o', 260,
        'p', 112,
        'q', 351,
        'r', 283,
        's', 265,
        't', 254,
        'u', 299,
      );
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(8);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(253);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '%' &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(361);
      END_STATE();
    case 9:
      if (lookahead == 'c') ADVANCE(16);
      END_STATE();
    case 10:
      if (lookahead == 'd') ADVANCE(12);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(136);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(130);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(133);
      END_STATE();
    case 14:
      if (lookahead == 'g') ADVANCE(118);
      END_STATE();
    case 15:
      if (lookahead == 'i') ADVANCE(121);
      END_STATE();
    case 16:
      if (lookahead == 'k') ADVANCE(29);
      END_STATE();
    case 17:
      if (lookahead == 'l') ADVANCE(23);
      END_STATE();
    case 18:
      if (lookahead == 'l') ADVANCE(127);
      END_STATE();
    case 19:
      if (lookahead == 'l') ADVANCE(124);
      END_STATE();
    case 20:
      if (lookahead == 'l') ADVANCE(26);
      END_STATE();
    case 21:
      if (lookahead == 'm') ADVANCE(17);
      END_STATE();
    case 22:
      if (lookahead == 'm') ADVANCE(115);
      END_STATE();
    case 23:
      if (lookahead == 'n') ADVANCE(31);
      END_STATE();
    case 24:
      if (lookahead == 'n') ADVANCE(14);
      END_STATE();
    case 25:
      if (lookahead == 'o') ADVANCE(10);
      END_STATE();
    case 26:
      if (lookahead == 'o') ADVANCE(9);
      END_STATE();
    case 27:
      if (lookahead == 'o') ADVANCE(24);
      END_STATE();
    case 28:
      if (lookahead == 'o') ADVANCE(33);
      END_STATE();
    case 29:
      if (lookahead == 'q') ADVANCE(34);
      END_STATE();
    case 30:
      if (lookahead == 'r') ADVANCE(27);
      END_STATE();
    case 31:
      if (lookahead == 's') ADVANCE(5);
      END_STATE();
    case 32:
      if (lookahead == 't') ADVANCE(30);
      END_STATE();
    case 33:
      if (lookahead == 't') ADVANCE(13);
      END_STATE();
    case 34:
      if (lookahead == 'u') ADVANCE(28);
      END_STATE();
    case 35:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(35);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(360);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '%' &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(361);
      END_STATE();
    case 36:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(36);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(71);
      END_STATE();
    case 37:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(68);
      END_STATE();
    case 38:
      if (eof) ADVANCE(40);
      ADVANCE_MAP(
        '#', 110,
        '%', 108,
        '(', 47,
        ')', 48,
        '[', 45,
        '\\', 50,
        ']', 46,
        '{', 42,
        '}', 43,
      );
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(38);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(356);
      if (lookahead != 0) ADVANCE(361);
      END_STATE();
    case 39:
      if (eof) ADVANCE(40);
      ADVANCE_MAP(
        '#', 110,
        '%', 108,
        '(', 47,
        ')', 48,
        '[', 45,
        '\\', 50,
        ']', 46,
        '{', 41,
        '}', 43,
      );
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(39);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(356);
      if (lookahead != 0) ADVANCE(361);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '}') ADVANCE(139);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '[') ADVANCE(141);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '<') ADVANCE(64);
      if (lookahead == 'x') ADVANCE(21);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_title);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_title);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(361);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_author);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_author);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(361);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_contributor);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_contributor);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(361);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_date);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_date);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(361);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_tag);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_tag);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(361);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_ref);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_ref);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(361);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_BSLASH_LT);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_BSLASHxmlns_COLON);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_year);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(361);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_month);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_month);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(68);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_day_token1);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_day_token2);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_def);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_def);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(361);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_alloc);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_alloc);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(361);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_taxon);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_meta);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_import);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_import);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(361);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_export);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_export);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(361);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_namespace);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_namespace);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(361);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_transclude);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_transclude);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(361);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_let);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_let);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(361);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_tex);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_tex);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(361);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_scope);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_scope);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(361);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_subtree);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_subtree);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(361);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_put);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_put);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(361);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_get);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_get);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(361);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_open);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_open);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(361);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_query);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_query);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(361);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_object);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_object);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(361);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_patch);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_patch);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(361);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_call);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_call);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(361);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(108);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '#') ADVANCE(111);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_POUND_POUND);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_p);
      if (lookahead == 'a') ADVANCE(343);
      if (lookahead == 'r') ADVANCE(273);
      if (lookahead == 'u') ADVANCE(339);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(361);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_p);
      if (lookahead == 'a') ADVANCE(237);
      if (lookahead == 'r') ADVANCE(164);
      if (lookahead == 'u') ADVANCE(233);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_p);
      if (lookahead == 'r') ADVANCE(11);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_em);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_em);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_em);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(361);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_strong);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_strong);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_strong);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(361);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_li);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_li);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_li);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(361);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_ul);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_ul);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_ul);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(361);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_ol);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_ol);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_ol);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(361);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_code);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_code);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_code);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(361);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_blockquote);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_blockquote);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_blockquote);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(361);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_pre);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_pre);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_pre);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(361);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_LBRACE_RBRACE);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_LBRACK_LBRACK);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_RBRACK_RBRACK);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(143);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'a') ADVANCE(183);
      if (lookahead == 'e') ADVANCE(249);
      if (lookahead == 'i') ADVANCE(240);
      if (lookahead == 'r') ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'a') ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'a') ADVANCE(199);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'a') ADVANCE(242);
      if (lookahead == 'e') ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'a') ADVANCE(204);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'a') ADVANCE(193);
      if (lookahead == 'o') ADVANCE(161);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'a') ADVANCE(160);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'b') ADVANCE(188);
      if (lookahead == 'l') ADVANCE(128);
      if (lookahead == 'p') ADVANCE(163);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'b') ADVANCE(248);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'b') ADVANCE(241);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'c') ADVANCE(189);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'c') ADVANCE(74);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'c') ADVANCE(206);
      if (lookahead == 't') ADVANCE(224);
      if (lookahead == 'u') ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'c') ADVANCE(185);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'c') ADVANCE(194);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'c') ADVANCE(236);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'c') ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'd') ADVANCE(165);
      if (lookahead == 'n') ADVANCE(239);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'd') ADVANCE(173);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(201);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(137);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(131);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(228);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(90);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(51);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(92);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(82);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(134);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(84);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(182);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(220);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(231);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(232);
      if (lookahead == 'i') ADVANCE(122);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(159);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(238);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(170);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'f') ADVANCE(72);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'f') ADVANCE(62);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'g') ADVANCE(60);
      if (lookahead == 'x') ADVANCE(210);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'g') ADVANCE(119);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'h') ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'h') ADVANCE(211);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'i') ADVANCE(152);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'j') ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'k') ADVANCE(219);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'l') ADVANCE(205);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'l') ADVANCE(125);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'l') ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'l') ADVANCE(192);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'l') ADVANCE(245);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'l') ADVANCE(169);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'l') ADVANCE(207);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'l') ADVANCE(196);
      if (lookahead == 'u') ADVANCE(230);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'm') ADVANCE(116);
      if (lookahead == 'x') ADVANCE(215);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'm') ADVANCE(167);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'm') ADVANCE(218);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'n') ADVANCE(98);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'n') ADVANCE(184);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'n') ADVANCE(76);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'n') ADVANCE(229);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'o') ADVANCE(154);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'o') ADVANCE(217);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'o') ADVANCE(155);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'o') ADVANCE(202);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'o') ADVANCE(225);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'o') ADVANCE(203);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'o') ADVANCE(222);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'o') ADVANCE(223);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'o') ADVANCE(243);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'o') ADVANCE(227);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'p') ADVANCE(209);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'p') ADVANCE(150);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'p') ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'p') ADVANCE(214);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'q') ADVANCE(247);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'r') ADVANCE(250);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'r') ADVANCE(187);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'r') ADVANCE(53);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'r') ADVANCE(55);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'r') ADVANCE(208);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'r') ADVANCE(234);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'r') ADVANCE(180);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'r') ADVANCE(235);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 's') ADVANCE(216);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 's') ADVANCE(158);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 't') ADVANCE(186);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 't') ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 't') ADVANCE(86);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 't') ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 't') ADVANCE(80);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 't') ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 't') ADVANCE(102);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 't') ADVANCE(157);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 't') ADVANCE(145);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 't') ADVANCE(221);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 't') ADVANCE(195);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 't') ADVANCE(226);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 't') ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 't') ADVANCE(172);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 't') ADVANCE(212);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'u') ADVANCE(162);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'u') ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'u') ADVANCE(213);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'u') ADVANCE(244);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'x') ADVANCE(88);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'y') ADVANCE(100);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym__alpha);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym__digit);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(252);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_text);
      ADVANCE_MAP(
        'a', 305,
        'b', 298,
        'c', 258,
        'd', 256,
        'e', 306,
        'g', 285,
        'i', 308,
        'l', 286,
        'n', 255,
        'o', 260,
        'p', 112,
        'q', 351,
        'r', 283,
        's', 265,
        't', 254,
        'u', 299,
        '\t', 253,
        0x0b, 253,
        '\f', 253,
        ' ', 253,
      );
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(361);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a') ADVANCE(291);
      if (lookahead == 'e') ADVANCE(354);
      if (lookahead == 'i') ADVANCE(345);
      if (lookahead == 'r') ADVANCE(257);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(361);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a') ADVANCE(307);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(361);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a') ADVANCE(347);
      if (lookahead == 'e') ADVANCE(289);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(361);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a') ADVANCE(311);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(361);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a') ADVANCE(301);
      if (lookahead == 'o') ADVANCE(270);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(361);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a') ADVANCE(269);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(361);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'b') ADVANCE(296);
      if (lookahead == 'l') ADVANCE(129);
      if (lookahead == 'p') ADVANCE(272);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(361);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'b') ADVANCE(353);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(361);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'b') ADVANCE(346);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(361);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'c') ADVANCE(297);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(361);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'c') ADVANCE(75);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(361);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'c') ADVANCE(313);
      if (lookahead == 't') ADVANCE(330);
      if (lookahead == 'u') ADVANCE(262);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(361);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'c') ADVANCE(293);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(361);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'c') ADVANCE(302);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(361);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'c') ADVANCE(342);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(361);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'c') ADVANCE(280);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(361);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'd') ADVANCE(274);
      if (lookahead == 'n') ADVANCE(344);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(361);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'd') ADVANCE(282);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(361);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(309);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(361);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(138);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(361);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(132);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(361);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(58);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(361);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(334);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(361);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(91);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(361);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(52);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(361);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(93);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(361);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(83);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(361);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(135);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(361);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(85);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(361);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(290);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(361);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(326);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(361);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(337);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(361);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(338);
      if (lookahead == 'i') ADVANCE(123);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(361);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(268);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(361);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(279);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(361);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'f') ADVANCE(73);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(361);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'f') ADVANCE(63);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(361);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'g') ADVANCE(61);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(361);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'g') ADVANCE(120);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(361);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'h') ADVANCE(105);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(361);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'h') ADVANCE(317);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(361);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i') ADVANCE(261);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(361);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'j') ADVANCE(287);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(361);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'k') ADVANCE(325);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(361);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l') ADVANCE(312);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(361);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l') ADVANCE(126);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(361);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l') ADVANCE(107);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(361);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l') ADVANCE(300);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(361);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l') ADVANCE(350);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(361);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l') ADVANCE(278);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(361);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l') ADVANCE(314);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(361);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l') ADVANCE(304);
      if (lookahead == 'u') ADVANCE(336);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(361);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'm') ADVANCE(117);
      if (lookahead == 'x') ADVANCE(322);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(361);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'm') ADVANCE(276);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(361);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'm') ADVANCE(324);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(361);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'n') ADVANCE(99);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(361);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'n') ADVANCE(292);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(361);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'n') ADVANCE(335);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(361);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'o') ADVANCE(263);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(361);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'o') ADVANCE(323);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(361);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'o') ADVANCE(264);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(361);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'o') ADVANCE(310);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(361);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'o') ADVANCE(331);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(361);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'o') ADVANCE(328);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(361);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'o') ADVANCE(329);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(361);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'o') ADVANCE(348);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(361);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'o') ADVANCE(332);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(361);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'p') ADVANCE(259);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(361);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'p') ADVANCE(316);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(361);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'p') ADVANCE(277);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(361);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'p') ADVANCE(320);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(361);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'q') ADVANCE(352);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(361);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r') ADVANCE(355);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(361);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r') ADVANCE(295);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(361);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r') ADVANCE(54);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(361);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r') ADVANCE(56);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(361);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r') ADVANCE(315);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(361);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r') ADVANCE(340);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(361);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r') ADVANCE(341);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(361);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r') ADVANCE(288);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(361);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 's') ADVANCE(321);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(361);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 's') ADVANCE(267);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(361);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't') ADVANCE(294);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(361);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't') ADVANCE(97);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(361);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't') ADVANCE(87);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(361);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't') ADVANCE(95);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(361);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't') ADVANCE(81);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(361);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't') ADVANCE(79);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(361);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't') ADVANCE(103);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(361);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't') ADVANCE(266);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(361);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't') ADVANCE(327);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(361);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't') ADVANCE(303);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(361);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't') ADVANCE(333);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(361);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't') ADVANCE(275);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(361);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't') ADVANCE(281);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(361);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't') ADVANCE(318);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(361);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'u') ADVANCE(271);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(361);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'u') ADVANCE(284);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(361);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'u') ADVANCE(319);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(361);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'u') ADVANCE(349);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(361);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'x') ADVANCE(89);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(361);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'y') ADVANCE(101);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(361);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(356);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(361);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(360);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(361);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_text);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(361);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_text);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(358);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(361);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_text);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(359);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(361);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_text);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(361);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym__xml_base_ident_token1);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 39},
  [2] = {.lex_state = 39},
  [3] = {.lex_state = 39},
  [4] = {.lex_state = 39},
  [5] = {.lex_state = 39},
  [6] = {.lex_state = 39},
  [7] = {.lex_state = 39},
  [8] = {.lex_state = 39},
  [9] = {.lex_state = 39},
  [10] = {.lex_state = 39},
  [11] = {.lex_state = 39},
  [12] = {.lex_state = 39},
  [13] = {.lex_state = 39},
  [14] = {.lex_state = 39},
  [15] = {.lex_state = 39},
  [16] = {.lex_state = 39},
  [17] = {.lex_state = 39},
  [18] = {.lex_state = 8},
  [19] = {.lex_state = 38},
  [20] = {.lex_state = 38},
  [21] = {.lex_state = 39},
  [22] = {.lex_state = 39},
  [23] = {.lex_state = 39},
  [24] = {.lex_state = 39},
  [25] = {.lex_state = 39},
  [26] = {.lex_state = 39},
  [27] = {.lex_state = 39},
  [28] = {.lex_state = 39},
  [29] = {.lex_state = 39},
  [30] = {.lex_state = 39},
  [31] = {.lex_state = 39},
  [32] = {.lex_state = 39},
  [33] = {.lex_state = 39},
  [34] = {.lex_state = 39},
  [35] = {.lex_state = 39},
  [36] = {.lex_state = 39},
  [37] = {.lex_state = 39},
  [38] = {.lex_state = 39},
  [39] = {.lex_state = 39},
  [40] = {.lex_state = 39},
  [41] = {.lex_state = 39},
  [42] = {.lex_state = 39},
  [43] = {.lex_state = 39},
  [44] = {.lex_state = 39},
  [45] = {.lex_state = 39},
  [46] = {.lex_state = 39},
  [47] = {.lex_state = 39},
  [48] = {.lex_state = 39},
  [49] = {.lex_state = 39},
  [50] = {.lex_state = 39},
  [51] = {.lex_state = 39},
  [52] = {.lex_state = 39},
  [53] = {.lex_state = 39},
  [54] = {.lex_state = 39},
  [55] = {.lex_state = 39},
  [56] = {.lex_state = 39},
  [57] = {.lex_state = 39},
  [58] = {.lex_state = 39},
  [59] = {.lex_state = 39},
  [60] = {.lex_state = 39},
  [61] = {.lex_state = 39},
  [62] = {.lex_state = 39},
  [63] = {.lex_state = 39},
  [64] = {.lex_state = 39},
  [65] = {.lex_state = 39},
  [66] = {.lex_state = 39},
  [67] = {.lex_state = 39},
  [68] = {.lex_state = 39},
  [69] = {.lex_state = 39},
  [70] = {.lex_state = 39},
  [71] = {.lex_state = 39},
  [72] = {.lex_state = 39},
  [73] = {.lex_state = 39},
  [74] = {.lex_state = 39},
  [75] = {.lex_state = 2},
  [76] = {.lex_state = 2},
  [77] = {.lex_state = 2},
  [78] = {.lex_state = 4},
  [79] = {.lex_state = 4},
  [80] = {.lex_state = 4},
  [81] = {.lex_state = 6},
  [82] = {.lex_state = 6},
  [83] = {.lex_state = 6},
  [84] = {.lex_state = 2},
  [85] = {.lex_state = 6},
  [86] = {.lex_state = 6},
  [87] = {.lex_state = 4},
  [88] = {.lex_state = 4},
  [89] = {.lex_state = 4},
  [90] = {.lex_state = 4},
  [91] = {.lex_state = 1},
  [92] = {.lex_state = 2},
  [93] = {.lex_state = 2},
  [94] = {.lex_state = 4},
  [95] = {.lex_state = 4},
  [96] = {.lex_state = 4},
  [97] = {.lex_state = 6},
  [98] = {.lex_state = 39},
  [99] = {.lex_state = 6},
  [100] = {.lex_state = 6},
  [101] = {.lex_state = 4},
  [102] = {.lex_state = 4},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 4},
  [105] = {.lex_state = 4},
  [106] = {.lex_state = 4},
  [107] = {.lex_state = 4},
  [108] = {.lex_state = 4},
  [109] = {.lex_state = 4},
  [110] = {.lex_state = 4},
  [111] = {.lex_state = 4},
  [112] = {.lex_state = 4},
  [113] = {.lex_state = 39},
  [114] = {.lex_state = 39},
  [115] = {.lex_state = 4},
  [116] = {.lex_state = 4},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 4},
  [119] = {.lex_state = 4},
  [120] = {.lex_state = 4},
  [121] = {.lex_state = 4},
  [122] = {.lex_state = 4},
  [123] = {.lex_state = 4},
  [124] = {.lex_state = 2},
  [125] = {.lex_state = 2},
  [126] = {.lex_state = 35},
  [127] = {.lex_state = 2},
  [128] = {.lex_state = 39},
  [129] = {.lex_state = 4},
  [130] = {.lex_state = 4},
  [131] = {.lex_state = 4},
  [132] = {.lex_state = 4},
  [133] = {.lex_state = 4},
  [134] = {.lex_state = 4},
  [135] = {.lex_state = 39},
  [136] = {.lex_state = 2},
  [137] = {.lex_state = 4},
  [138] = {.lex_state = 39},
  [139] = {.lex_state = 2},
  [140] = {.lex_state = 4},
  [141] = {.lex_state = 4},
  [142] = {.lex_state = 4},
  [143] = {.lex_state = 4},
  [144] = {.lex_state = 4},
  [145] = {.lex_state = 39},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 2},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 4},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 39},
  [156] = {.lex_state = 3},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 36},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 2},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 39},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 39},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 4},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 2},
  [171] = {.lex_state = 39},
  [172] = {.lex_state = 39},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 2},
  [175] = {.lex_state = 2},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 2},
  [178] = {.lex_state = 39},
  [179] = {.lex_state = 4},
  [180] = {.lex_state = 4},
  [181] = {.lex_state = 4},
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
    [anon_sym_BSLASH_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_BSLASHxmlns_COLON] = ACTIONS(1),
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
    [aux_sym__xml_base_ident_token1] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(169),
    [sym__node] = STATE(9),
    [sym_braces] = STATE(9),
    [sym_squares] = STATE(9),
    [sym_parens] = STATE(9),
    [sym_title] = STATE(9),
    [sym_author] = STATE(9),
    [sym_contributor] = STATE(9),
    [sym_date] = STATE(9),
    [sym_tag] = STATE(9),
    [sym_ref] = STATE(9),
    [sym_xml_tag] = STATE(9),
    [sym_decl_xmlns] = STATE(9),
    [sym_def] = STATE(9),
    [sym_alloc] = STATE(9),
    [sym_import] = STATE(9),
    [sym_export] = STATE(9),
    [sym_namespace] = STATE(9),
    [sym_transclude] = STATE(9),
    [sym_let] = STATE(9),
    [sym_tex] = STATE(9),
    [sym_scope] = STATE(9),
    [sym_subtree] = STATE(9),
    [sym_put] = STATE(9),
    [sym_get] = STATE(9),
    [sym_open] = STATE(9),
    [sym_query_tree] = STATE(9),
    [sym__default] = STATE(9),
    [sym_object] = STATE(9),
    [sym_patch] = STATE(9),
    [sym_call] = STATE(9),
    [sym__prim] = STATE(9),
    [sym_inline_math] = STATE(9),
    [sym_display_math] = STATE(9),
    [sym_p] = STATE(9),
    [sym_em] = STATE(9),
    [sym_strong] = STATE(9),
    [sym_li] = STATE(9),
    [sym_ul] = STATE(9),
    [sym_ol] = STATE(9),
    [sym_code] = STATE(9),
    [sym_blockquote] = STATE(9),
    [sym_pre] = STATE(9),
    [sym_ident] = STATE(9),
    [sym_ident_with_method_calls] = STATE(9),
    [sym__link] = STATE(9),
    [sym_markdown_link] = STATE(9),
    [sym_unlabeled_link] = STATE(9),
    [aux_sym_source_file_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_BSLASH] = ACTIONS(11),
    [anon_sym_BSLASH_LT] = ACTIONS(13),
    [anon_sym_BSLASHxmlns_COLON] = ACTIONS(15),
    [sym_comment] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(19),
    [anon_sym_POUND_POUND] = ACTIONS(21),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(23),
    [sym_text] = ACTIONS(25),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(32), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(38), 1,
      anon_sym_BSLASH,
    ACTIONS(41), 1,
      anon_sym_BSLASH_LT,
    ACTIONS(44), 1,
      anon_sym_BSLASHxmlns_COLON,
    ACTIONS(47), 1,
      sym_comment,
    ACTIONS(50), 1,
      anon_sym_POUND,
    ACTIONS(53), 1,
      anon_sym_POUND_POUND,
    ACTIONS(56), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(59), 1,
      sym_text,
    ACTIONS(30), 3,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
    STATE(2), 48,
      sym__node,
      sym_braces,
      sym_squares,
      sym_parens,
      sym_title,
      sym_author,
      sym_contributor,
      sym_date,
      sym_tag,
      sym_ref,
      sym_xml_tag,
      sym_decl_xmlns,
      sym_def,
      sym_alloc,
      sym_import,
      sym_export,
      sym_namespace,
      sym_transclude,
      sym_let,
      sym_tex,
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
  [89] = 13,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_BSLASH,
    ACTIONS(13), 1,
      anon_sym_BSLASH_LT,
    ACTIONS(15), 1,
      anon_sym_BSLASHxmlns_COLON,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      anon_sym_POUND_POUND,
    ACTIONS(23), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(62), 1,
      anon_sym_RBRACE,
    ACTIONS(64), 1,
      sym_comment,
    ACTIONS(66), 1,
      sym_text,
    STATE(5), 48,
      sym__node,
      sym_braces,
      sym_squares,
      sym_parens,
      sym_title,
      sym_author,
      sym_contributor,
      sym_date,
      sym_tag,
      sym_ref,
      sym_xml_tag,
      sym_decl_xmlns,
      sym_def,
      sym_alloc,
      sym_import,
      sym_export,
      sym_namespace,
      sym_transclude,
      sym_let,
      sym_tex,
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
  [176] = 13,
    ACTIONS(68), 1,
      ts_builtin_sym_end,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(73), 1,
      anon_sym_LBRACK,
    ACTIONS(76), 1,
      anon_sym_LPAREN,
    ACTIONS(79), 1,
      anon_sym_BSLASH,
    ACTIONS(82), 1,
      anon_sym_BSLASH_LT,
    ACTIONS(85), 1,
      anon_sym_BSLASHxmlns_COLON,
    ACTIONS(88), 1,
      sym_comment,
    ACTIONS(91), 1,
      anon_sym_POUND,
    ACTIONS(94), 1,
      anon_sym_POUND_POUND,
    ACTIONS(97), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(100), 1,
      sym_text,
    STATE(4), 48,
      sym__node,
      sym_braces,
      sym_squares,
      sym_parens,
      sym_title,
      sym_author,
      sym_contributor,
      sym_date,
      sym_tag,
      sym_ref,
      sym_xml_tag,
      sym_decl_xmlns,
      sym_def,
      sym_alloc,
      sym_import,
      sym_export,
      sym_namespace,
      sym_transclude,
      sym_let,
      sym_tex,
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
  [263] = 13,
    ACTIONS(103), 1,
      anon_sym_LBRACE,
    ACTIONS(106), 1,
      anon_sym_RBRACE,
    ACTIONS(108), 1,
      anon_sym_LBRACK,
    ACTIONS(111), 1,
      anon_sym_LPAREN,
    ACTIONS(114), 1,
      anon_sym_BSLASH,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LT,
    ACTIONS(120), 1,
      anon_sym_BSLASHxmlns_COLON,
    ACTIONS(123), 1,
      sym_comment,
    ACTIONS(126), 1,
      anon_sym_POUND,
    ACTIONS(129), 1,
      anon_sym_POUND_POUND,
    ACTIONS(132), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(135), 1,
      sym_text,
    STATE(5), 48,
      sym__node,
      sym_braces,
      sym_squares,
      sym_parens,
      sym_title,
      sym_author,
      sym_contributor,
      sym_date,
      sym_tag,
      sym_ref,
      sym_xml_tag,
      sym_decl_xmlns,
      sym_def,
      sym_alloc,
      sym_import,
      sym_export,
      sym_namespace,
      sym_transclude,
      sym_let,
      sym_tex,
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
  [350] = 13,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_BSLASH,
    ACTIONS(13), 1,
      anon_sym_BSLASH_LT,
    ACTIONS(15), 1,
      anon_sym_BSLASHxmlns_COLON,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      anon_sym_POUND_POUND,
    ACTIONS(23), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(138), 1,
      anon_sym_RBRACE,
    ACTIONS(140), 1,
      sym_comment,
    ACTIONS(142), 1,
      sym_text,
    STATE(7), 48,
      sym__node,
      sym_braces,
      sym_squares,
      sym_parens,
      sym_title,
      sym_author,
      sym_contributor,
      sym_date,
      sym_tag,
      sym_ref,
      sym_xml_tag,
      sym_decl_xmlns,
      sym_def,
      sym_alloc,
      sym_import,
      sym_export,
      sym_namespace,
      sym_transclude,
      sym_let,
      sym_tex,
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
  [437] = 13,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_BSLASH,
    ACTIONS(13), 1,
      anon_sym_BSLASH_LT,
    ACTIONS(15), 1,
      anon_sym_BSLASHxmlns_COLON,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      anon_sym_POUND_POUND,
    ACTIONS(23), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(64), 1,
      sym_comment,
    ACTIONS(66), 1,
      sym_text,
    ACTIONS(144), 1,
      anon_sym_RBRACE,
    STATE(5), 48,
      sym__node,
      sym_braces,
      sym_squares,
      sym_parens,
      sym_title,
      sym_author,
      sym_contributor,
      sym_date,
      sym_tag,
      sym_ref,
      sym_xml_tag,
      sym_decl_xmlns,
      sym_def,
      sym_alloc,
      sym_import,
      sym_export,
      sym_namespace,
      sym_transclude,
      sym_let,
      sym_tex,
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
  [524] = 13,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_BSLASH,
    ACTIONS(13), 1,
      anon_sym_BSLASH_LT,
    ACTIONS(15), 1,
      anon_sym_BSLASHxmlns_COLON,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      anon_sym_POUND_POUND,
    ACTIONS(23), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(64), 1,
      sym_comment,
    ACTIONS(66), 1,
      sym_text,
    ACTIONS(146), 1,
      anon_sym_RBRACE,
    STATE(5), 48,
      sym__node,
      sym_braces,
      sym_squares,
      sym_parens,
      sym_title,
      sym_author,
      sym_contributor,
      sym_date,
      sym_tag,
      sym_ref,
      sym_xml_tag,
      sym_decl_xmlns,
      sym_def,
      sym_alloc,
      sym_import,
      sym_export,
      sym_namespace,
      sym_transclude,
      sym_let,
      sym_tex,
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
  [611] = 13,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_BSLASH,
    ACTIONS(13), 1,
      anon_sym_BSLASH_LT,
    ACTIONS(15), 1,
      anon_sym_BSLASHxmlns_COLON,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      anon_sym_POUND_POUND,
    ACTIONS(23), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(148), 1,
      ts_builtin_sym_end,
    ACTIONS(150), 1,
      sym_comment,
    ACTIONS(152), 1,
      sym_text,
    STATE(4), 48,
      sym__node,
      sym_braces,
      sym_squares,
      sym_parens,
      sym_title,
      sym_author,
      sym_contributor,
      sym_date,
      sym_tag,
      sym_ref,
      sym_xml_tag,
      sym_decl_xmlns,
      sym_def,
      sym_alloc,
      sym_import,
      sym_export,
      sym_namespace,
      sym_transclude,
      sym_let,
      sym_tex,
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
  [698] = 13,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_BSLASH,
    ACTIONS(13), 1,
      anon_sym_BSLASH_LT,
    ACTIONS(15), 1,
      anon_sym_BSLASHxmlns_COLON,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      anon_sym_POUND_POUND,
    ACTIONS(23), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(154), 1,
      anon_sym_RBRACE,
    ACTIONS(156), 1,
      sym_comment,
    ACTIONS(158), 1,
      sym_text,
    STATE(2), 48,
      sym__node,
      sym_braces,
      sym_squares,
      sym_parens,
      sym_title,
      sym_author,
      sym_contributor,
      sym_date,
      sym_tag,
      sym_ref,
      sym_xml_tag,
      sym_decl_xmlns,
      sym_def,
      sym_alloc,
      sym_import,
      sym_export,
      sym_namespace,
      sym_transclude,
      sym_let,
      sym_tex,
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
  [785] = 13,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_BSLASH,
    ACTIONS(13), 1,
      anon_sym_BSLASH_LT,
    ACTIONS(15), 1,
      anon_sym_BSLASHxmlns_COLON,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      anon_sym_POUND_POUND,
    ACTIONS(23), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(156), 1,
      sym_comment,
    ACTIONS(158), 1,
      sym_text,
    ACTIONS(160), 1,
      anon_sym_RBRACK,
    STATE(2), 48,
      sym__node,
      sym_braces,
      sym_squares,
      sym_parens,
      sym_title,
      sym_author,
      sym_contributor,
      sym_date,
      sym_tag,
      sym_ref,
      sym_xml_tag,
      sym_decl_xmlns,
      sym_def,
      sym_alloc,
      sym_import,
      sym_export,
      sym_namespace,
      sym_transclude,
      sym_let,
      sym_tex,
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
  [872] = 13,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_BSLASH,
    ACTIONS(13), 1,
      anon_sym_BSLASH_LT,
    ACTIONS(15), 1,
      anon_sym_BSLASHxmlns_COLON,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      anon_sym_POUND_POUND,
    ACTIONS(23), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(156), 1,
      sym_comment,
    ACTIONS(158), 1,
      sym_text,
    ACTIONS(162), 1,
      anon_sym_RPAREN,
    STATE(2), 48,
      sym__node,
      sym_braces,
      sym_squares,
      sym_parens,
      sym_title,
      sym_author,
      sym_contributor,
      sym_date,
      sym_tag,
      sym_ref,
      sym_xml_tag,
      sym_decl_xmlns,
      sym_def,
      sym_alloc,
      sym_import,
      sym_export,
      sym_namespace,
      sym_transclude,
      sym_let,
      sym_tex,
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
  [959] = 13,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_BSLASH,
    ACTIONS(13), 1,
      anon_sym_BSLASH_LT,
    ACTIONS(15), 1,
      anon_sym_BSLASHxmlns_COLON,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      anon_sym_POUND_POUND,
    ACTIONS(23), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(164), 1,
      anon_sym_RBRACE,
    ACTIONS(166), 1,
      sym_comment,
    ACTIONS(168), 1,
      sym_text,
    STATE(8), 48,
      sym__node,
      sym_braces,
      sym_squares,
      sym_parens,
      sym_title,
      sym_author,
      sym_contributor,
      sym_date,
      sym_tag,
      sym_ref,
      sym_xml_tag,
      sym_decl_xmlns,
      sym_def,
      sym_alloc,
      sym_import,
      sym_export,
      sym_namespace,
      sym_transclude,
      sym_let,
      sym_tex,
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
  [1046] = 13,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_BSLASH,
    ACTIONS(13), 1,
      anon_sym_BSLASH_LT,
    ACTIONS(15), 1,
      anon_sym_BSLASHxmlns_COLON,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      anon_sym_POUND_POUND,
    ACTIONS(23), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(170), 1,
      anon_sym_RBRACE,
    ACTIONS(172), 1,
      sym_comment,
    ACTIONS(174), 1,
      sym_text,
    STATE(3), 48,
      sym__node,
      sym_braces,
      sym_squares,
      sym_parens,
      sym_title,
      sym_author,
      sym_contributor,
      sym_date,
      sym_tag,
      sym_ref,
      sym_xml_tag,
      sym_decl_xmlns,
      sym_def,
      sym_alloc,
      sym_import,
      sym_export,
      sym_namespace,
      sym_transclude,
      sym_let,
      sym_tex,
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
  [1133] = 12,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_BSLASH,
    ACTIONS(13), 1,
      anon_sym_BSLASH_LT,
    ACTIONS(15), 1,
      anon_sym_BSLASHxmlns_COLON,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      anon_sym_POUND_POUND,
    ACTIONS(23), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(178), 1,
      sym_text,
    STATE(11), 48,
      sym__node,
      sym_braces,
      sym_squares,
      sym_parens,
      sym_title,
      sym_author,
      sym_contributor,
      sym_date,
      sym_tag,
      sym_ref,
      sym_xml_tag,
      sym_decl_xmlns,
      sym_def,
      sym_alloc,
      sym_import,
      sym_export,
      sym_namespace,
      sym_transclude,
      sym_let,
      sym_tex,
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
  [1217] = 12,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_BSLASH,
    ACTIONS(13), 1,
      anon_sym_BSLASH_LT,
    ACTIONS(15), 1,
      anon_sym_BSLASHxmlns_COLON,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      anon_sym_POUND_POUND,
    ACTIONS(23), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(180), 1,
      sym_comment,
    ACTIONS(182), 1,
      sym_text,
    STATE(12), 48,
      sym__node,
      sym_braces,
      sym_squares,
      sym_parens,
      sym_title,
      sym_author,
      sym_contributor,
      sym_date,
      sym_tag,
      sym_ref,
      sym_xml_tag,
      sym_decl_xmlns,
      sym_def,
      sym_alloc,
      sym_import,
      sym_export,
      sym_namespace,
      sym_transclude,
      sym_let,
      sym_tex,
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
  [1301] = 12,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_BSLASH,
    ACTIONS(13), 1,
      anon_sym_BSLASH_LT,
    ACTIONS(15), 1,
      anon_sym_BSLASHxmlns_COLON,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      anon_sym_POUND_POUND,
    ACTIONS(23), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(184), 1,
      sym_comment,
    ACTIONS(186), 1,
      sym_text,
    STATE(10), 48,
      sym__node,
      sym_braces,
      sym_squares,
      sym_parens,
      sym_title,
      sym_author,
      sym_contributor,
      sym_date,
      sym_tag,
      sym_ref,
      sym_xml_tag,
      sym_decl_xmlns,
      sym_def,
      sym_alloc,
      sym_import,
      sym_export,
      sym_namespace,
      sym_transclude,
      sym_let,
      sym_tex,
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
  [1385] = 33,
    ACTIONS(188), 1,
      anon_sym_title,
    ACTIONS(190), 1,
      anon_sym_author,
    ACTIONS(192), 1,
      anon_sym_contributor,
    ACTIONS(194), 1,
      anon_sym_date,
    ACTIONS(196), 1,
      anon_sym_tag,
    ACTIONS(198), 1,
      anon_sym_ref,
    ACTIONS(200), 1,
      anon_sym_def,
    ACTIONS(202), 1,
      anon_sym_alloc,
    ACTIONS(204), 1,
      anon_sym_import,
    ACTIONS(206), 1,
      anon_sym_export,
    ACTIONS(208), 1,
      anon_sym_namespace,
    ACTIONS(210), 1,
      anon_sym_transclude,
    ACTIONS(212), 1,
      anon_sym_let,
    ACTIONS(214), 1,
      anon_sym_tex,
    ACTIONS(216), 1,
      anon_sym_scope,
    ACTIONS(218), 1,
      anon_sym_subtree,
    ACTIONS(220), 1,
      anon_sym_put,
    ACTIONS(222), 1,
      anon_sym_get,
    ACTIONS(224), 1,
      anon_sym_open,
    ACTIONS(226), 1,
      anon_sym_query,
    ACTIONS(228), 1,
      anon_sym_object,
    ACTIONS(230), 1,
      anon_sym_patch,
    ACTIONS(232), 1,
      anon_sym_call,
    ACTIONS(234), 1,
      anon_sym_p,
    ACTIONS(236), 1,
      anon_sym_em,
    ACTIONS(238), 1,
      anon_sym_strong,
    ACTIONS(240), 1,
      anon_sym_li,
    ACTIONS(242), 1,
      anon_sym_ul,
    ACTIONS(244), 1,
      anon_sym_ol,
    ACTIONS(246), 1,
      anon_sym_code,
    ACTIONS(248), 1,
      anon_sym_blockquote,
    ACTIONS(250), 1,
      anon_sym_pre,
    ACTIONS(252), 1,
      sym_text,
  [1485] = 5,
    ACTIONS(258), 1,
      anon_sym_POUND,
    ACTIONS(260), 1,
      anon_sym_LBRACE_RBRACE,
    ACTIONS(254), 2,
      ts_builtin_sym_end,
      sym_text,
    STATE(21), 2,
      sym__arg,
      aux_sym_ident_repeat1,
    ACTIONS(256), 12,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASHxmlns_COLON,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [1514] = 4,
    ACTIONS(260), 1,
      anon_sym_LBRACE_RBRACE,
    ACTIONS(254), 2,
      ts_builtin_sym_end,
      sym_text,
    STATE(21), 2,
      sym__arg,
      aux_sym_ident_repeat1,
    ACTIONS(256), 13,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASHxmlns_COLON,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [1541] = 3,
    ACTIONS(262), 2,
      ts_builtin_sym_end,
      sym_text,
    STATE(22), 2,
      sym__arg,
      aux_sym_ident_repeat1,
    ACTIONS(264), 13,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASHxmlns_COLON,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [1565] = 4,
    ACTIONS(268), 1,
      anon_sym_LBRACE,
    ACTIONS(266), 2,
      ts_builtin_sym_end,
      sym_text,
    STATE(22), 2,
      sym__arg,
      aux_sym_ident_repeat1,
    ACTIONS(271), 12,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASHxmlns_COLON,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [1591] = 5,
    ACTIONS(273), 1,
      ts_builtin_sym_end,
    ACTIONS(277), 1,
      anon_sym_POUND,
    ACTIONS(280), 1,
      sym_text,
    STATE(23), 1,
      aux_sym_ident_with_method_calls_repeat1,
    ACTIONS(275), 12,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASHxmlns_COLON,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [1618] = 3,
    STATE(23), 1,
      aux_sym_ident_with_method_calls_repeat1,
    ACTIONS(283), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(285), 13,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASHxmlns_COLON,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [1641] = 2,
    ACTIONS(287), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(289), 13,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASHxmlns_COLON,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [1661] = 2,
    ACTIONS(291), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(293), 13,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASHxmlns_COLON,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [1681] = 2,
    ACTIONS(295), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(297), 13,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASHxmlns_COLON,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [1701] = 2,
    ACTIONS(299), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(301), 13,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASHxmlns_COLON,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [1721] = 2,
    ACTIONS(303), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(305), 13,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASHxmlns_COLON,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [1741] = 2,
    ACTIONS(307), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(309), 13,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASHxmlns_COLON,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [1761] = 2,
    ACTIONS(311), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(313), 13,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASHxmlns_COLON,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [1781] = 2,
    ACTIONS(315), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(317), 13,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASHxmlns_COLON,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [1801] = 2,
    ACTIONS(319), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(321), 13,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASHxmlns_COLON,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [1821] = 2,
    ACTIONS(323), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(325), 13,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASHxmlns_COLON,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [1841] = 2,
    ACTIONS(327), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(329), 13,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASHxmlns_COLON,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [1861] = 2,
    ACTIONS(331), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(333), 13,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASHxmlns_COLON,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [1881] = 2,
    ACTIONS(335), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(337), 13,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASHxmlns_COLON,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [1901] = 2,
    ACTIONS(339), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(341), 13,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASHxmlns_COLON,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [1921] = 2,
    ACTIONS(343), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(345), 13,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASHxmlns_COLON,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [1941] = 2,
    ACTIONS(347), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(349), 13,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASHxmlns_COLON,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [1961] = 2,
    ACTIONS(351), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(353), 13,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASHxmlns_COLON,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [1981] = 2,
    ACTIONS(355), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(357), 13,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASHxmlns_COLON,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2001] = 2,
    ACTIONS(359), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(361), 13,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASHxmlns_COLON,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2021] = 2,
    ACTIONS(363), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(365), 13,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASHxmlns_COLON,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2041] = 2,
    ACTIONS(367), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(369), 13,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASHxmlns_COLON,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2061] = 2,
    ACTIONS(371), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(373), 13,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASHxmlns_COLON,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2081] = 2,
    ACTIONS(375), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(377), 13,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASHxmlns_COLON,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2101] = 2,
    ACTIONS(379), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(381), 13,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASHxmlns_COLON,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2121] = 2,
    ACTIONS(262), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(264), 13,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASHxmlns_COLON,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2141] = 2,
    ACTIONS(383), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(385), 13,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASHxmlns_COLON,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2161] = 2,
    ACTIONS(387), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(389), 13,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASHxmlns_COLON,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2181] = 2,
    ACTIONS(391), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(393), 13,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASHxmlns_COLON,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2201] = 2,
    ACTIONS(395), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(397), 13,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASHxmlns_COLON,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2221] = 2,
    ACTIONS(399), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(401), 13,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASHxmlns_COLON,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2241] = 2,
    ACTIONS(403), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(405), 13,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASHxmlns_COLON,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2261] = 2,
    ACTIONS(407), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(409), 13,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASHxmlns_COLON,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2281] = 2,
    ACTIONS(411), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(413), 13,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASHxmlns_COLON,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2301] = 2,
    ACTIONS(415), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(417), 13,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASHxmlns_COLON,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2321] = 2,
    ACTIONS(419), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(421), 13,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASHxmlns_COLON,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2341] = 2,
    ACTIONS(423), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(425), 13,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASHxmlns_COLON,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2361] = 2,
    ACTIONS(427), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(429), 13,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASHxmlns_COLON,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2381] = 2,
    ACTIONS(431), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(433), 13,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASHxmlns_COLON,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2401] = 2,
    ACTIONS(435), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(437), 13,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASHxmlns_COLON,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2421] = 2,
    ACTIONS(439), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(441), 13,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASHxmlns_COLON,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2441] = 2,
    ACTIONS(443), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(445), 13,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASHxmlns_COLON,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2461] = 2,
    ACTIONS(447), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(449), 13,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASHxmlns_COLON,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2481] = 2,
    ACTIONS(451), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(453), 13,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASHxmlns_COLON,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2501] = 2,
    ACTIONS(455), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(457), 13,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASHxmlns_COLON,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2521] = 2,
    ACTIONS(459), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(461), 13,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASHxmlns_COLON,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2541] = 2,
    ACTIONS(463), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(465), 13,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASHxmlns_COLON,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2561] = 2,
    ACTIONS(467), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(469), 13,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASHxmlns_COLON,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2581] = 2,
    ACTIONS(471), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(473), 13,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASHxmlns_COLON,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2601] = 2,
    ACTIONS(475), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(477), 13,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASHxmlns_COLON,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2621] = 3,
    ACTIONS(481), 1,
      anon_sym_RBRACK,
    ACTIONS(483), 1,
      sym_text,
    ACTIONS(479), 10,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_BSLASH,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASHxmlns_COLON,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2640] = 2,
    ACTIONS(485), 1,
      anon_sym_BSLASH,
    STATE(50), 10,
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
  [2656] = 2,
    ACTIONS(485), 1,
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
  [2672] = 9,
    ACTIONS(234), 1,
      anon_sym_p,
    ACTIONS(487), 1,
      anon_sym_em,
    ACTIONS(489), 1,
      anon_sym_strong,
    ACTIONS(491), 1,
      anon_sym_li,
    ACTIONS(493), 1,
      anon_sym_ul,
    ACTIONS(495), 1,
      anon_sym_ol,
    ACTIONS(497), 1,
      anon_sym_code,
    ACTIONS(499), 1,
      anon_sym_blockquote,
    ACTIONS(501), 1,
      anon_sym_pre,
  [2700] = 3,
    STATE(79), 1,
      aux_sym__xml_base_ident_repeat1,
    ACTIONS(503), 3,
      anon_sym_LBRACE,
      anon_sym_GT,
      anon_sym_COLON,
    ACTIONS(505), 3,
      sym__alpha,
      sym__digit,
      aux_sym__xml_base_ident_token1,
  [2714] = 3,
    STATE(80), 1,
      aux_sym__xml_base_ident_repeat1,
    ACTIONS(507), 3,
      anon_sym_LBRACE,
      anon_sym_GT,
      anon_sym_COLON,
    ACTIONS(509), 3,
      sym__alpha,
      sym__digit,
      aux_sym__xml_base_ident_token1,
  [2728] = 3,
    STATE(80), 1,
      aux_sym__xml_base_ident_repeat1,
    ACTIONS(511), 3,
      anon_sym_LBRACE,
      anon_sym_GT,
      anon_sym_COLON,
    ACTIONS(513), 3,
      sym__alpha,
      sym__digit,
      aux_sym__xml_base_ident_token1,
  [2742] = 4,
    ACTIONS(516), 1,
      anon_sym_RBRACE,
    ACTIONS(518), 1,
      anon_sym_LBRACK,
    ACTIONS(520), 1,
      aux_sym__whitespace_token1,
    STATE(82), 3,
      sym_method_decl,
      sym__whitespace,
      aux_sym_object_repeat1,
  [2757] = 4,
    ACTIONS(522), 1,
      anon_sym_RBRACE,
    ACTIONS(524), 1,
      anon_sym_LBRACK,
    ACTIONS(527), 1,
      aux_sym__whitespace_token1,
    STATE(82), 3,
      sym_method_decl,
      sym__whitespace,
      aux_sym_object_repeat1,
  [2772] = 4,
    ACTIONS(518), 1,
      anon_sym_LBRACK,
    ACTIONS(520), 1,
      aux_sym__whitespace_token1,
    ACTIONS(530), 1,
      anon_sym_RBRACE,
    STATE(82), 3,
      sym_method_decl,
      sym__whitespace,
      aux_sym_object_repeat1,
  [2787] = 4,
    ACTIONS(254), 1,
      anon_sym_LBRACK,
    ACTIONS(256), 1,
      anon_sym_LBRACE,
    ACTIONS(532), 1,
      anon_sym_LBRACE_RBRACE,
    STATE(88), 2,
      sym__arg,
      aux_sym_ident_repeat1,
  [2801] = 3,
    ACTIONS(518), 1,
      anon_sym_LBRACK,
    ACTIONS(534), 1,
      aux_sym__whitespace_token1,
    STATE(83), 3,
      sym_method_decl,
      sym__whitespace,
      aux_sym_object_repeat1,
  [2813] = 3,
    ACTIONS(518), 1,
      anon_sym_LBRACK,
    ACTIONS(536), 1,
      aux_sym__whitespace_token1,
    STATE(81), 3,
      sym_method_decl,
      sym__whitespace,
      aux_sym_object_repeat1,
  [2825] = 4,
    ACTIONS(538), 1,
      anon_sym_LBRACE,
    ACTIONS(540), 1,
      anon_sym_LBRACK,
    STATE(43), 1,
      sym__arg,
    STATE(90), 1,
      aux_sym_fun_spec_repeat1,
  [2838] = 2,
    ACTIONS(262), 2,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
    STATE(89), 2,
      sym__arg,
      aux_sym_ident_repeat1,
  [2847] = 3,
    ACTIONS(266), 1,
      anon_sym_LBRACK,
    ACTIONS(542), 1,
      anon_sym_LBRACE,
    STATE(89), 2,
      sym__arg,
      aux_sym_ident_repeat1,
  [2858] = 4,
    ACTIONS(538), 1,
      anon_sym_LBRACE,
    ACTIONS(540), 1,
      anon_sym_LBRACK,
    STATE(38), 1,
      sym__arg,
    STATE(96), 1,
      aux_sym_fun_spec_repeat1,
  [2871] = 3,
    ACTIONS(545), 1,
      anon_sym_POUND,
    ACTIONS(547), 1,
      sym_text,
    STATE(24), 1,
      aux_sym_ident_with_method_calls_repeat1,
  [2881] = 3,
    ACTIONS(549), 1,
      anon_sym_BSLASH,
    STATE(55), 1,
      sym_fun_spec,
    STATE(87), 1,
      sym_ident,
  [2891] = 3,
    ACTIONS(549), 1,
      anon_sym_BSLASH,
    STATE(32), 1,
      sym_fun_spec,
    STATE(87), 1,
      sym_ident,
  [2901] = 3,
    ACTIONS(551), 1,
      sym__alpha,
    STATE(103), 1,
      sym__xml_base_ident,
    STATE(176), 1,
      sym__xml_qname,
  [2911] = 3,
    ACTIONS(538), 1,
      anon_sym_LBRACE,
    ACTIONS(553), 1,
      anon_sym_LBRACK,
    STATE(68), 1,
      sym__arg,
  [2921] = 3,
    ACTIONS(555), 1,
      anon_sym_LBRACE,
    ACTIONS(557), 1,
      anon_sym_LBRACK,
    STATE(96), 1,
      aux_sym_fun_spec_repeat1,
  [2931] = 2,
    ACTIONS(347), 1,
      aux_sym__whitespace_token1,
    ACTIONS(349), 2,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
  [2939] = 2,
    ACTIONS(560), 1,
      sym_text,
    STATE(174), 2,
      sym_addr,
      sym_external_link,
  [2947] = 2,
    ACTIONS(564), 1,
      aux_sym__whitespace_token1,
    ACTIONS(562), 2,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
  [2955] = 2,
    ACTIONS(371), 1,
      aux_sym__whitespace_token1,
    ACTIONS(373), 2,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
  [2963] = 2,
    ACTIONS(566), 1,
      anon_sym_LBRACE,
    STATE(67), 1,
      sym__txt_arg,
  [2970] = 2,
    ACTIONS(538), 1,
      anon_sym_LBRACE,
    STATE(52), 1,
      sym__arg,
  [2977] = 2,
    ACTIONS(568), 1,
      anon_sym_GT,
    ACTIONS(570), 1,
      anon_sym_COLON,
  [2984] = 2,
    ACTIONS(538), 1,
      anon_sym_LBRACE,
    STATE(56), 1,
      sym__arg,
  [2991] = 2,
    ACTIONS(538), 1,
      anon_sym_LBRACE,
    STATE(57), 1,
      sym__arg,
  [2998] = 2,
    ACTIONS(538), 1,
      anon_sym_LBRACE,
    STATE(65), 1,
      sym__arg,
  [3005] = 2,
    ACTIONS(538), 1,
      anon_sym_LBRACE,
    STATE(60), 1,
      sym__arg,
  [3012] = 2,
    ACTIONS(551), 1,
      sym__alpha,
    STATE(147), 1,
      sym__xml_base_ident,
  [3019] = 2,
    ACTIONS(538), 1,
      anon_sym_LBRACE,
    STATE(61), 1,
      sym__arg,
  [3026] = 2,
    ACTIONS(538), 1,
      anon_sym_LBRACE,
    STATE(66), 1,
      sym__arg,
  [3033] = 2,
    ACTIONS(538), 1,
      anon_sym_LBRACE,
    STATE(69), 1,
      sym__arg,
  [3040] = 2,
    ACTIONS(538), 1,
      anon_sym_LBRACE,
    STATE(73), 1,
      sym__arg,
  [3047] = 2,
    ACTIONS(572), 1,
      sym_text,
    STATE(152), 1,
      sym_addr,
  [3054] = 2,
    ACTIONS(574), 1,
      sym_text,
    STATE(154), 1,
      sym_addr,
  [3061] = 2,
    ACTIONS(538), 1,
      anon_sym_LBRACE,
    STATE(54), 1,
      sym__arg,
  [3068] = 2,
    ACTIONS(538), 1,
      anon_sym_LBRACE,
    STATE(42), 1,
      sym__arg,
  [3075] = 1,
    ACTIONS(576), 2,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [3080] = 2,
    ACTIONS(578), 1,
      anon_sym_LBRACE,
    STATE(170), 1,
      sym__arg,
  [3087] = 1,
    ACTIONS(347), 2,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
  [3092] = 2,
    ACTIONS(538), 1,
      anon_sym_LBRACE,
    STATE(59), 1,
      sym__arg,
  [3099] = 1,
    ACTIONS(371), 2,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
  [3104] = 2,
    ACTIONS(566), 1,
      anon_sym_LBRACE,
    STATE(25), 1,
      sym__txt_arg,
  [3111] = 2,
    ACTIONS(538), 1,
      anon_sym_LBRACE,
    STATE(58), 1,
      sym__arg,
  [3118] = 2,
    ACTIONS(580), 1,
      anon_sym_BSLASH,
    STATE(48), 1,
      sym_ident,
  [3125] = 2,
    ACTIONS(580), 1,
      anon_sym_BSLASH,
    STATE(41), 1,
      sym_ident,
  [3132] = 2,
    ACTIONS(582), 1,
      sym_year,
    ACTIONS(584), 1,
      sym_text,
  [3139] = 2,
    ACTIONS(549), 1,
      anon_sym_BSLASH,
    STATE(116), 1,
      sym_ident,
  [3146] = 2,
    ACTIONS(574), 1,
      sym_text,
    STATE(167), 1,
      sym_addr,
  [3153] = 2,
    ACTIONS(538), 1,
      anon_sym_LBRACE,
    STATE(29), 1,
      sym__arg,
  [3160] = 2,
    ACTIONS(538), 1,
      anon_sym_LBRACE,
    STATE(33), 1,
      sym__arg,
  [3167] = 2,
    ACTIONS(551), 1,
      sym__alpha,
    STATE(122), 1,
      sym__xml_base_ident,
  [3174] = 2,
    ACTIONS(538), 1,
      anon_sym_LBRACE,
    STATE(30), 1,
      sym__arg,
  [3181] = 1,
    ACTIONS(586), 2,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
  [3186] = 1,
    ACTIONS(262), 2,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
  [3191] = 2,
    ACTIONS(574), 1,
      sym_text,
    STATE(148), 1,
      sym_addr,
  [3198] = 2,
    ACTIONS(588), 1,
      aux_sym_day_token1,
    STATE(159), 1,
      sym_day,
  [3205] = 2,
    ACTIONS(538), 1,
      anon_sym_LBRACE,
    STATE(45), 1,
      sym__arg,
  [3212] = 2,
    ACTIONS(574), 1,
      sym_text,
    STATE(150), 1,
      sym_addr,
  [3219] = 2,
    ACTIONS(580), 1,
      anon_sym_BSLASH,
    STATE(53), 1,
      sym_ident,
  [3226] = 2,
    ACTIONS(566), 1,
      anon_sym_LBRACE,
    STATE(26), 1,
      sym__txt_arg,
  [3233] = 2,
    ACTIONS(538), 1,
      anon_sym_LBRACE,
    STATE(72), 1,
      sym__arg,
  [3240] = 2,
    ACTIONS(566), 1,
      anon_sym_LBRACE,
    STATE(71), 1,
      sym__txt_arg,
  [3247] = 2,
    ACTIONS(590), 1,
      anon_sym_LBRACE,
    STATE(99), 1,
      sym__arg,
  [3254] = 2,
    ACTIONS(592), 1,
      anon_sym_LBRACE,
    STATE(70), 1,
      sym__txt_arg,
  [3261] = 1,
    ACTIONS(594), 1,
      sym_text,
  [3265] = 1,
    ACTIONS(596), 1,
      anon_sym_RBRACK,
  [3269] = 1,
    ACTIONS(598), 1,
      anon_sym_GT,
  [3273] = 1,
    ACTIONS(600), 1,
      anon_sym_RBRACE,
  [3277] = 1,
    ACTIONS(602), 1,
      anon_sym_DASH,
  [3281] = 1,
    ACTIONS(604), 1,
      anon_sym_RBRACE,
  [3285] = 1,
    ACTIONS(606), 1,
      anon_sym_RPAREN,
  [3289] = 1,
    ACTIONS(606), 1,
      anon_sym_RPAREN,
  [3293] = 1,
    ACTIONS(608), 1,
      anon_sym_LBRACE,
  [3297] = 1,
    ACTIONS(610), 1,
      anon_sym_RBRACK,
  [3301] = 1,
    ACTIONS(612), 1,
      sym_text,
  [3305] = 1,
    ACTIONS(614), 1,
      sym_month,
  [3309] = 1,
    ACTIONS(616), 1,
      anon_sym_RBRACK,
  [3313] = 1,
    ACTIONS(618), 1,
      aux_sym_day_token2,
  [3317] = 1,
    ACTIONS(620), 1,
      anon_sym_RBRACE,
  [3321] = 1,
    ACTIONS(622), 1,
      anon_sym_RBRACK,
  [3325] = 1,
    ACTIONS(624), 1,
      anon_sym_DASH,
  [3329] = 1,
    ACTIONS(626), 1,
      anon_sym_RBRACK,
  [3333] = 1,
    ACTIONS(628), 1,
      sym_text,
  [3337] = 1,
    ACTIONS(630), 1,
      anon_sym_RBRACE,
  [3341] = 1,
    ACTIONS(632), 1,
      anon_sym_RBRACE,
  [3345] = 1,
    ACTIONS(634), 1,
      sym_text,
  [3349] = 1,
    ACTIONS(636), 1,
      anon_sym_RBRACE,
  [3353] = 1,
    ACTIONS(638), 1,
      anon_sym_LBRACE,
  [3357] = 1,
    ACTIONS(640), 1,
      ts_builtin_sym_end,
  [3361] = 1,
    ACTIONS(642), 1,
      anon_sym_LBRACK,
  [3365] = 1,
    ACTIONS(644), 1,
      sym_text,
  [3369] = 1,
    ACTIONS(646), 1,
      sym_text,
  [3373] = 1,
    ACTIONS(648), 1,
      anon_sym_LPAREN,
  [3377] = 1,
    ACTIONS(650), 1,
      anon_sym_RBRACK_RBRACK,
  [3381] = 1,
    ACTIONS(576), 1,
      anon_sym_RBRACK_RBRACK,
  [3385] = 1,
    ACTIONS(652), 1,
      anon_sym_GT,
  [3389] = 1,
    ACTIONS(654), 1,
      anon_sym_LBRACK,
  [3393] = 1,
    ACTIONS(656), 1,
      sym_text,
  [3397] = 1,
    ACTIONS(658), 1,
      anon_sym_LBRACE,
  [3401] = 1,
    ACTIONS(660), 1,
      anon_sym_LBRACE,
  [3405] = 1,
    ACTIONS(662), 1,
      anon_sym_LBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 89,
  [SMALL_STATE(4)] = 176,
  [SMALL_STATE(5)] = 263,
  [SMALL_STATE(6)] = 350,
  [SMALL_STATE(7)] = 437,
  [SMALL_STATE(8)] = 524,
  [SMALL_STATE(9)] = 611,
  [SMALL_STATE(10)] = 698,
  [SMALL_STATE(11)] = 785,
  [SMALL_STATE(12)] = 872,
  [SMALL_STATE(13)] = 959,
  [SMALL_STATE(14)] = 1046,
  [SMALL_STATE(15)] = 1133,
  [SMALL_STATE(16)] = 1217,
  [SMALL_STATE(17)] = 1301,
  [SMALL_STATE(18)] = 1385,
  [SMALL_STATE(19)] = 1485,
  [SMALL_STATE(20)] = 1514,
  [SMALL_STATE(21)] = 1541,
  [SMALL_STATE(22)] = 1565,
  [SMALL_STATE(23)] = 1591,
  [SMALL_STATE(24)] = 1618,
  [SMALL_STATE(25)] = 1641,
  [SMALL_STATE(26)] = 1661,
  [SMALL_STATE(27)] = 1681,
  [SMALL_STATE(28)] = 1701,
  [SMALL_STATE(29)] = 1721,
  [SMALL_STATE(30)] = 1741,
  [SMALL_STATE(31)] = 1761,
  [SMALL_STATE(32)] = 1781,
  [SMALL_STATE(33)] = 1801,
  [SMALL_STATE(34)] = 1821,
  [SMALL_STATE(35)] = 1841,
  [SMALL_STATE(36)] = 1861,
  [SMALL_STATE(37)] = 1881,
  [SMALL_STATE(38)] = 1901,
  [SMALL_STATE(39)] = 1921,
  [SMALL_STATE(40)] = 1941,
  [SMALL_STATE(41)] = 1961,
  [SMALL_STATE(42)] = 1981,
  [SMALL_STATE(43)] = 2001,
  [SMALL_STATE(44)] = 2021,
  [SMALL_STATE(45)] = 2041,
  [SMALL_STATE(46)] = 2061,
  [SMALL_STATE(47)] = 2081,
  [SMALL_STATE(48)] = 2101,
  [SMALL_STATE(49)] = 2121,
  [SMALL_STATE(50)] = 2141,
  [SMALL_STATE(51)] = 2161,
  [SMALL_STATE(52)] = 2181,
  [SMALL_STATE(53)] = 2201,
  [SMALL_STATE(54)] = 2221,
  [SMALL_STATE(55)] = 2241,
  [SMALL_STATE(56)] = 2261,
  [SMALL_STATE(57)] = 2281,
  [SMALL_STATE(58)] = 2301,
  [SMALL_STATE(59)] = 2321,
  [SMALL_STATE(60)] = 2341,
  [SMALL_STATE(61)] = 2361,
  [SMALL_STATE(62)] = 2381,
  [SMALL_STATE(63)] = 2401,
  [SMALL_STATE(64)] = 2421,
  [SMALL_STATE(65)] = 2441,
  [SMALL_STATE(66)] = 2461,
  [SMALL_STATE(67)] = 2481,
  [SMALL_STATE(68)] = 2501,
  [SMALL_STATE(69)] = 2521,
  [SMALL_STATE(70)] = 2541,
  [SMALL_STATE(71)] = 2561,
  [SMALL_STATE(72)] = 2581,
  [SMALL_STATE(73)] = 2601,
  [SMALL_STATE(74)] = 2621,
  [SMALL_STATE(75)] = 2640,
  [SMALL_STATE(76)] = 2656,
  [SMALL_STATE(77)] = 2672,
  [SMALL_STATE(78)] = 2700,
  [SMALL_STATE(79)] = 2714,
  [SMALL_STATE(80)] = 2728,
  [SMALL_STATE(81)] = 2742,
  [SMALL_STATE(82)] = 2757,
  [SMALL_STATE(83)] = 2772,
  [SMALL_STATE(84)] = 2787,
  [SMALL_STATE(85)] = 2801,
  [SMALL_STATE(86)] = 2813,
  [SMALL_STATE(87)] = 2825,
  [SMALL_STATE(88)] = 2838,
  [SMALL_STATE(89)] = 2847,
  [SMALL_STATE(90)] = 2858,
  [SMALL_STATE(91)] = 2871,
  [SMALL_STATE(92)] = 2881,
  [SMALL_STATE(93)] = 2891,
  [SMALL_STATE(94)] = 2901,
  [SMALL_STATE(95)] = 2911,
  [SMALL_STATE(96)] = 2921,
  [SMALL_STATE(97)] = 2931,
  [SMALL_STATE(98)] = 2939,
  [SMALL_STATE(99)] = 2947,
  [SMALL_STATE(100)] = 2955,
  [SMALL_STATE(101)] = 2963,
  [SMALL_STATE(102)] = 2970,
  [SMALL_STATE(103)] = 2977,
  [SMALL_STATE(104)] = 2984,
  [SMALL_STATE(105)] = 2991,
  [SMALL_STATE(106)] = 2998,
  [SMALL_STATE(107)] = 3005,
  [SMALL_STATE(108)] = 3012,
  [SMALL_STATE(109)] = 3019,
  [SMALL_STATE(110)] = 3026,
  [SMALL_STATE(111)] = 3033,
  [SMALL_STATE(112)] = 3040,
  [SMALL_STATE(113)] = 3047,
  [SMALL_STATE(114)] = 3054,
  [SMALL_STATE(115)] = 3061,
  [SMALL_STATE(116)] = 3068,
  [SMALL_STATE(117)] = 3075,
  [SMALL_STATE(118)] = 3080,
  [SMALL_STATE(119)] = 3087,
  [SMALL_STATE(120)] = 3092,
  [SMALL_STATE(121)] = 3099,
  [SMALL_STATE(122)] = 3104,
  [SMALL_STATE(123)] = 3111,
  [SMALL_STATE(124)] = 3118,
  [SMALL_STATE(125)] = 3125,
  [SMALL_STATE(126)] = 3132,
  [SMALL_STATE(127)] = 3139,
  [SMALL_STATE(128)] = 3146,
  [SMALL_STATE(129)] = 3153,
  [SMALL_STATE(130)] = 3160,
  [SMALL_STATE(131)] = 3167,
  [SMALL_STATE(132)] = 3174,
  [SMALL_STATE(133)] = 3181,
  [SMALL_STATE(134)] = 3186,
  [SMALL_STATE(135)] = 3191,
  [SMALL_STATE(136)] = 3198,
  [SMALL_STATE(137)] = 3205,
  [SMALL_STATE(138)] = 3212,
  [SMALL_STATE(139)] = 3219,
  [SMALL_STATE(140)] = 3226,
  [SMALL_STATE(141)] = 3233,
  [SMALL_STATE(142)] = 3240,
  [SMALL_STATE(143)] = 3247,
  [SMALL_STATE(144)] = 3254,
  [SMALL_STATE(145)] = 3261,
  [SMALL_STATE(146)] = 3265,
  [SMALL_STATE(147)] = 3269,
  [SMALL_STATE(148)] = 3273,
  [SMALL_STATE(149)] = 3277,
  [SMALL_STATE(150)] = 3281,
  [SMALL_STATE(151)] = 3285,
  [SMALL_STATE(152)] = 3289,
  [SMALL_STATE(153)] = 3293,
  [SMALL_STATE(154)] = 3297,
  [SMALL_STATE(155)] = 3301,
  [SMALL_STATE(156)] = 3305,
  [SMALL_STATE(157)] = 3309,
  [SMALL_STATE(158)] = 3313,
  [SMALL_STATE(159)] = 3317,
  [SMALL_STATE(160)] = 3321,
  [SMALL_STATE(161)] = 3325,
  [SMALL_STATE(162)] = 3329,
  [SMALL_STATE(163)] = 3333,
  [SMALL_STATE(164)] = 3337,
  [SMALL_STATE(165)] = 3341,
  [SMALL_STATE(166)] = 3345,
  [SMALL_STATE(167)] = 3349,
  [SMALL_STATE(168)] = 3353,
  [SMALL_STATE(169)] = 3357,
  [SMALL_STATE(170)] = 3361,
  [SMALL_STATE(171)] = 3365,
  [SMALL_STATE(172)] = 3369,
  [SMALL_STATE(173)] = 3373,
  [SMALL_STATE(174)] = 3377,
  [SMALL_STATE(175)] = 3381,
  [SMALL_STATE(176)] = 3385,
  [SMALL_STATE(177)] = 3389,
  [SMALL_STATE(178)] = 3393,
  [SMALL_STATE(179)] = 3397,
  [SMALL_STATE(180)] = 3401,
  [SMALL_STATE(181)] = 3405,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_braces_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [30] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_braces_repeat1, 2, 0, 0),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_braces_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_braces_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_braces_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_braces_repeat1, 2, 0, 0), SHIFT_REPEAT(94),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_braces_repeat1, 2, 0, 0), SHIFT_REPEAT(131),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_braces_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_braces_repeat1, 2, 0, 0), SHIFT_REPEAT(123),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_braces_repeat1, 2, 0, 0), SHIFT_REPEAT(120),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_braces_repeat1, 2, 0, 0), SHIFT_REPEAT(98),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_braces_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(94),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(131),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(123),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(120),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(98),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__arg_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__arg_repeat1, 2, 0, 0),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__arg_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [111] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__arg_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [114] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__arg_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [117] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__arg_repeat1, 2, 0, 0), SHIFT_REPEAT(94),
  [120] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__arg_repeat1, 2, 0, 0), SHIFT_REPEAT(131),
  [123] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__arg_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [126] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__arg_repeat1, 2, 0, 0), SHIFT_REPEAT(123),
  [129] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__arg_repeat1, 2, 0, 0), SHIFT_REPEAT(120),
  [132] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__arg_repeat1, 2, 0, 0), SHIFT_REPEAT(98),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__arg_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ident, 2, 0, 0),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ident, 2, 0, 0),
  [258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ident, 3, 0, 0),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ident, 3, 0, 0),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ident_repeat1, 2, 0, 0),
  [268] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ident_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ident_repeat1, 2, 0, 0),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ident_with_method_calls_repeat1, 2, 0, 0),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ident_with_method_calls_repeat1, 2, 0, 0),
  [277] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ident_with_method_calls_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [280] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ident_with_method_calls_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ident_with_method_calls, 4, 0, 0),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ident_with_method_calls, 4, 0, 0),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_xmlns, 3, 0, 0),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_xmlns, 3, 0, 0),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contributor, 3, 0, 3),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_contributor, 3, 0, 3),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_patch, 9, 0, 14),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_patch, 9, 0, 14),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 9, 0, 13),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_date, 9, 0, 13),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scope, 3, 0, 0),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scope, 3, 0, 0),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tex, 3, 0, 0),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tex, 3, 0, 0),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 8, 0, 12),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 8, 0, 12),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let, 3, 0, 0),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let, 3, 0, 0),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subtree, 6, 0, 0),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subtree, 6, 0, 0),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_markdown_link, 6, 0, 11),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_markdown_link, 6, 0, 11),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transclude, 5, 0, 10),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transclude, 5, 0, 10),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 5, 0, 0),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_export, 5, 0, 0),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 5, 0, 0),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import, 5, 0, 0),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fun_spec, 3, 0, 9),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fun_spec, 3, 0, 9),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__txt_arg, 3, 0, 0),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__txt_arg, 3, 0, 0),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__arg, 3, 0, 0),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__arg, 3, 0, 0),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_get, 3, 0, 0),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_get, 3, 0, 0),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_put, 4, 0, 8),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_put, 4, 0, 8),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fun_spec, 2, 0, 7),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fun_spec, 2, 0, 7),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unlabeled_link, 3, 0, 0),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unlabeled_link, 3, 0, 0),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace, 3, 0, 0),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace, 3, 0, 0),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__arg, 2, 0, 0),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__arg, 2, 0, 0),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_tag, 3, 0, 0),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_tag, 3, 0, 0),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 3, 0, 0),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_open, 3, 0, 0),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pre, 3, 0, 0),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pre, 3, 0, 0),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_blockquote, 3, 0, 0),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_blockquote, 3, 0, 0),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_tree, 3, 0, 0),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_tree, 3, 0, 0),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alloc, 3, 0, 0),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alloc, 3, 0, 0),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 3, 0, 0),
  [401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 3, 0, 0),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def, 3, 0, 0),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_def, 3, 0, 0),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 3, 0, 0),
  [409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 3, 0, 0),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ol, 3, 0, 0),
  [413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ol, 3, 0, 0),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_math, 2, 0, 0),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_math, 2, 0, 0),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_display_math, 2, 0, 0),
  [421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_display_math, 2, 0, 0),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ul, 3, 0, 0),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ul, 3, 0, 0),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_li, 3, 0, 0),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_li, 3, 0, 0),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_braces, 3, 0, 0),
  [433] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_braces, 3, 0, 0),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_squares, 3, 0, 0),
  [437] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_squares, 3, 0, 0),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parens, 3, 0, 0),
  [441] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parens, 3, 0, 0),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title, 3, 0, 1),
  [445] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title, 3, 0, 1),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_strong, 3, 0, 0),
  [449] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_strong, 3, 0, 0),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_author, 3, 0, 2),
  [453] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_author, 3, 0, 2),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subtree, 3, 0, 0),
  [457] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subtree, 3, 0, 0),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_em, 3, 0, 0),
  [461] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_em, 3, 0, 0),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 3, 0, 4),
  [465] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_date, 3, 0, 4),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3, 0, 5),
  [469] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 3, 0, 5),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ref, 3, 0, 6),
  [473] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ref, 3, 0, 6),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_p, 3, 0, 0),
  [477] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_p, 3, 0, 0),
  [479] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__node, 1, 0, 0),
  [481] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__node, 1, 0, 0),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xml_base_ident, 1, 0, 0),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xml_base_ident, 2, 0, 0),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__xml_base_ident_repeat1, 2, 0, 0),
  [513] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__xml_base_ident_repeat1, 2, 0, 0), SHIFT_REPEAT(80),
  [516] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [518] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [522] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_object_repeat1, 2, 0, 0),
  [524] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_repeat1, 2, 0, 0), SHIFT_REPEAT(155),
  [527] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2, 0, 0), SHIFT_REPEAT(82),
  [530] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [542] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ident_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [545] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fun_spec_repeat1, 2, 0, 0),
  [557] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fun_spec_repeat1, 2, 0, 0), SHIFT_REPEAT(166),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [562] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_decl, 4, 0, 15),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_decl, 4, 0, 15),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xml_qname, 1, 0, 0),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_addr, 1, 0, 0),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [582] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [584] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fun_spec_repeat1, 3, 0, 0),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xml_qname, 3, 0, 0),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_day, 2, 0, 0),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [640] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_forester(void) {
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
