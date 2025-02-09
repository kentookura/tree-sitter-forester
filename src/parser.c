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
#define STATE_COUNT 161
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 120
#define ALIAS_COUNT 1
#define TOKEN_COUNT 61
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 10
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 9

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
  aux_sym_day_token1 = 18,
  aux_sym_day_token2 = 19,
  anon_sym_def = 20,
  anon_sym_alloc = 21,
  anon_sym_taxon = 22,
  anon_sym_meta = 23,
  anon_sym_import = 24,
  anon_sym_export = 25,
  anon_sym_namespace = 26,
  anon_sym_transclude = 27,
  anon_sym_let = 28,
  anon_sym_tex = 29,
  anon_sym_scope = 30,
  anon_sym_subtree = 31,
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
  anon_sym_LBRACE_RBRACE = 51,
  anon_sym__ = 52,
  anon_sym_LBRACK_LBRACK = 53,
  anon_sym_RBRACK_RBRACK = 54,
  aux_sym__whitespace_token1 = 55,
  sym__alpha = 56,
  sym__digit = 57,
  sym_text = 58,
  aux_sym__xml_base_ident_token1 = 59,
  anon_sym_COLON = 60,
  sym_source_file = 61,
  sym__node = 62,
  sym_braces = 63,
  sym_squares = 64,
  sym_parens = 65,
  sym_xml_tag = 66,
  sym_decl_xmlns = 67,
  sym_def = 68,
  sym_alloc = 69,
  sym_import = 70,
  sym_export = 71,
  sym_namespace = 72,
  sym_transclude = 73,
  sym_let = 74,
  sym_tex = 75,
  sym_scope = 76,
  sym_subtree = 77,
  sym_put = 78,
  sym_get = 79,
  sym_open = 80,
  sym_query_tree = 81,
  sym__default = 82,
  sym_object = 83,
  sym_patch = 84,
  sym_call = 85,
  sym__prim = 86,
  sym_inline_math = 87,
  sym_display_math = 88,
  sym_p = 89,
  sym_em = 90,
  sym_strong = 91,
  sym_li = 92,
  sym_ul = 93,
  sym_ol = 94,
  sym_code = 95,
  sym_blockquote = 96,
  sym_pre = 97,
  sym_method_decl = 98,
  sym_fun_spec = 99,
  sym_ident = 100,
  sym_ident_with_method_calls = 101,
  sym__arg = 102,
  sym__link = 103,
  sym_addr = 104,
  sym_markdown_link = 105,
  sym_unlabeled_link = 106,
  sym_external_link = 107,
  sym__whitespace = 108,
  sym__txt_arg = 109,
  sym__xml_base_ident = 110,
  sym__xml_qname = 111,
  aux_sym_source_file_repeat1 = 112,
  aux_sym_braces_repeat1 = 113,
  aux_sym_object_repeat1 = 114,
  aux_sym_fun_spec_repeat1 = 115,
  aux_sym_ident_repeat1 = 116,
  aux_sym_ident_with_method_calls_repeat1 = 117,
  aux_sym__arg_repeat1 = 118,
  aux_sym__xml_base_ident_repeat1 = 119,
  alias_sym_method_body = 120,
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
  [sym_xml_tag] = "xml_tag",
  [sym_decl_xmlns] = "decl_xmlns",
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
  [sym_xml_tag] = sym_xml_tag,
  [sym_decl_xmlns] = sym_decl_xmlns,
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
  [sym_xml_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_decl_xmlns] = {
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
  field_binder = 3,
  field_dest = 4,
  field_identifier = 5,
  field_key = 6,
  field_label = 7,
  field_object = 8,
  field_self = 9,
  field_value = 10,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_address] = "address",
  [field_argument] = "argument",
  [field_binder] = "binder",
  [field_dest] = "dest",
  [field_identifier] = "identifier",
  [field_key] = "key",
  [field_label] = "label",
  [field_object] = "object",
  [field_self] = "self",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 2},
  [3] = {.index = 4, .length = 3},
  [4] = {.index = 7, .length = 1},
  [5] = {.index = 8, .length = 6},
  [6] = {.index = 14, .length = 3},
  [7] = {.index = 17, .length = 4},
  [8] = {.index = 21, .length = 4},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_argument, 1},
    {field_identifier, 0},
  [2] =
    {field_argument, 3},
    {field_identifier, 2},
  [4] =
    {field_argument, 2},
    {field_binder, 1},
    {field_identifier, 0},
  [7] =
    {field_address, 3},
  [8] =
    {field_dest, 3},
    {field_dest, 4},
    {field_dest, 5},
    {field_label, 0},
    {field_label, 1},
    {field_label, 2},
  [14] =
    {field_self, 2},
    {field_self, 3},
    {field_self, 4},
  [17] =
    {field_object, 2},
    {field_self, 3},
    {field_self, 4},
    {field_self, 5},
  [21] =
    {field_key, 0},
    {field_key, 1},
    {field_key, 2},
    {field_value, 3},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [8] = {
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
  [7] = 7,
  [8] = 6,
  [9] = 7,
  [10] = 7,
  [11] = 6,
  [12] = 12,
  [13] = 13,
  [14] = 14,
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
  [79] = 20,
  [80] = 21,
  [81] = 81,
  [82] = 82,
  [83] = 22,
  [84] = 51,
  [85] = 46,
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
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 51,
  [107] = 107,
  [108] = 46,
  [109] = 109,
  [110] = 110,
  [111] = 28,
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
  [157] = 146,
  [158] = 158,
  [159] = 159,
  [160] = 160,
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
      if (eof) ADVANCE(36);
      ADVANCE_MAP(
        '#', 96,
        '%', 95,
        '(', 43,
        ')', 44,
        '-', 51,
        '/', 325,
        ':', 326,
        '>', 55,
        '[', 41,
        '\\', 46,
        ']', 42,
        '_', 127,
        'a', 184,
        'b', 177,
        'c', 136,
        'd', 134,
        'e', 185,
        'g', 163,
        'i', 187,
        'l', 164,
        'm', 166,
        'n', 133,
        'o', 138,
        'p', 100,
        'q', 233,
        'r', 161,
        's', 143,
        't', 131,
        'u', 178,
        '{', 38,
        '}', 39,
      );
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(57);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(58);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 1:
      if (lookahead == '#') ADVANCE(96);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(1);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(323);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(324);
      END_STATE();
    case 2:
      if (lookahead == ':') ADVANCE(326);
      if (lookahead == '>') ADVANCE(55);
      if (lookahead == '[') ADVANCE(40);
      if (lookahead == '{') ADVANCE(37);
      if (lookahead == '#' ||
          lookahead == '-' ||
          lookahead == '/') ADVANCE(325);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(239);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 3:
      if (lookahead == ':') ADVANCE(56);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '[', 40,
        '\\', 45,
        ']', 6,
        'b', 19,
        'c', 24,
        'e', 21,
        'l', 14,
        'o', 17,
        'p', 101,
        's', 31,
        'u', 18,
        '{', 38,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      END_STATE();
    case 5:
      if (lookahead == '[') ADVANCE(40);
      if (lookahead == '}') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(130);
      if (('\n' <= lookahead && lookahead <= '\r')) SKIP(5);
      END_STATE();
    case 6:
      if (lookahead == ']') ADVANCE(129);
      END_STATE();
    case 7:
      ADVANCE_MAP(
        'a', 283,
        'b', 277,
        'c', 244,
        'd', 256,
        'e', 284,
        'g', 257,
        'i', 286,
        'l', 268,
        'n', 241,
        'o', 245,
        'p', 99,
        'q', 318,
        's', 250,
        't', 258,
        'u', 278,
      );
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(7);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(240);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '%' &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(324);
      END_STATE();
    case 8:
      if (lookahead == 'c') ADVANCE(15);
      END_STATE();
    case 9:
      if (lookahead == 'd') ADVANCE(11);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(123);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(117);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(120);
      END_STATE();
    case 13:
      if (lookahead == 'g') ADVANCE(105);
      END_STATE();
    case 14:
      if (lookahead == 'i') ADVANCE(108);
      END_STATE();
    case 15:
      if (lookahead == 'k') ADVANCE(28);
      END_STATE();
    case 16:
      if (lookahead == 'l') ADVANCE(22);
      END_STATE();
    case 17:
      if (lookahead == 'l') ADVANCE(114);
      END_STATE();
    case 18:
      if (lookahead == 'l') ADVANCE(111);
      END_STATE();
    case 19:
      if (lookahead == 'l') ADVANCE(25);
      END_STATE();
    case 20:
      if (lookahead == 'm') ADVANCE(16);
      END_STATE();
    case 21:
      if (lookahead == 'm') ADVANCE(102);
      END_STATE();
    case 22:
      if (lookahead == 'n') ADVANCE(30);
      END_STATE();
    case 23:
      if (lookahead == 'n') ADVANCE(13);
      END_STATE();
    case 24:
      if (lookahead == 'o') ADVANCE(9);
      END_STATE();
    case 25:
      if (lookahead == 'o') ADVANCE(8);
      END_STATE();
    case 26:
      if (lookahead == 'o') ADVANCE(23);
      END_STATE();
    case 27:
      if (lookahead == 'o') ADVANCE(32);
      END_STATE();
    case 28:
      if (lookahead == 'q') ADVANCE(33);
      END_STATE();
    case 29:
      if (lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 30:
      if (lookahead == 's') ADVANCE(3);
      END_STATE();
    case 31:
      if (lookahead == 't') ADVANCE(29);
      END_STATE();
    case 32:
      if (lookahead == 't') ADVANCE(12);
      END_STATE();
    case 33:
      if (lookahead == 'u') ADVANCE(27);
      END_STATE();
    case 34:
      if (eof) ADVANCE(36);
      ADVANCE_MAP(
        '#', 97,
        '%', 95,
        '(', 43,
        ')', 44,
        '[', 41,
        '\\', 46,
        ']', 42,
        '{', 38,
        '}', 39,
      );
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(34);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(323);
      if (lookahead != 0) ADVANCE(324);
      END_STATE();
    case 35:
      if (eof) ADVANCE(36);
      ADVANCE_MAP(
        '#', 97,
        '%', 95,
        '(', 43,
        ')', 44,
        '[', 41,
        '\\', 46,
        ']', 42,
        '{', 37,
        '}', 39,
      );
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(35);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(323);
      if (lookahead != 0) ADVANCE(324);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '}') ADVANCE(126);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '[') ADVANCE(128);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '<') ADVANCE(54);
      if (lookahead == 'x') ADVANCE(20);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_title);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_author);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_contributor);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_date);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_tag);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_ref);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_BSLASH_LT);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_BSLASHxmlns_COLON);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_day_token1);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_day_token2);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_def);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_def);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(324);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_alloc);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_alloc);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(324);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_taxon);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_meta);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_import);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_import);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(324);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_export);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_export);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(324);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_namespace);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_namespace);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(324);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_transclude);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_transclude);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(324);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_let);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_let);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(324);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_tex);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_tex);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(324);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_scope);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_scope);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(324);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_subtree);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_subtree);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(324);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_put);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_put);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(324);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_get);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_get);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(324);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_open);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_open);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(324);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_query);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_query);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(324);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_object);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_object);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(324);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_patch);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_patch);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(324);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_call);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_call);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(324);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(95);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '#') ADVANCE(98);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_POUND_POUND);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_p);
      if (lookahead == 'a') ADVANCE(315);
      if (lookahead == 'r') ADVANCE(260);
      if (lookahead == 'u') ADVANCE(311);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(324);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_p);
      if (lookahead == 'a') ADVANCE(224);
      if (lookahead == 'r') ADVANCE(151);
      if (lookahead == 'u') ADVANCE(220);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_p);
      if (lookahead == 'r') ADVANCE(10);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_em);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_em);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_em);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(324);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_strong);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_strong);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_strong);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(324);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_li);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_li);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_li);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(324);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_ul);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_ul);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_ul);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(324);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_ol);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_ol);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_ol);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(324);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_code);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_code);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_code);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(324);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_blockquote);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_blockquote);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_blockquote);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(324);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_pre);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_pre);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_pre);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(324);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_LBRACE_RBRACE);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_LBRACK_LBRACK);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_RBRACK_RBRACK);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(130);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'a') ADVANCE(170);
      if (lookahead == 'e') ADVANCE(236);
      if (lookahead == 'i') ADVANCE(227);
      if (lookahead == 'r') ADVANCE(135);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'a') ADVANCE(64);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'a') ADVANCE(186);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'a') ADVANCE(229);
      if (lookahead == 'e') ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'a') ADVANCE(191);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'a') ADVANCE(180);
      if (lookahead == 'o') ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'a') ADVANCE(147);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'b') ADVANCE(175);
      if (lookahead == 'l') ADVANCE(115);
      if (lookahead == 'p') ADVANCE(150);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'b') ADVANCE(235);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'b') ADVANCE(228);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'c') ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'c') ADVANCE(61);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'c') ADVANCE(193);
      if (lookahead == 't') ADVANCE(211);
      if (lookahead == 'u') ADVANCE(140);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'c') ADVANCE(172);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'c') ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'c') ADVANCE(223);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'c') ADVANCE(158);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'd') ADVANCE(152);
      if (lookahead == 'n') ADVANCE(226);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'd') ADVANCE(160);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(188);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(118);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(50);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(215);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(79);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(69);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(121);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(71);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(169);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(207);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(218);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(219);
      if (lookahead == 'i') ADVANCE(109);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(146);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(225);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(157);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'f') ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'f') ADVANCE(53);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'g') ADVANCE(52);
      if (lookahead == 'x') ADVANCE(197);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'g') ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'h') ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'h') ADVANCE(198);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'i') ADVANCE(139);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'j') ADVANCE(165);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'k') ADVANCE(206);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'l') ADVANCE(192);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'l') ADVANCE(112);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'l') ADVANCE(93);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'l') ADVANCE(179);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'l') ADVANCE(232);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'l') ADVANCE(156);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'l') ADVANCE(194);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'l') ADVANCE(183);
      if (lookahead == 'u') ADVANCE(217);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'm') ADVANCE(103);
      if (lookahead == 'x') ADVANCE(202);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'm') ADVANCE(154);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'm') ADVANCE(205);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'n') ADVANCE(85);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'n') ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'n') ADVANCE(63);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'n') ADVANCE(216);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'o') ADVANCE(141);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'o') ADVANCE(204);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'o') ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'o') ADVANCE(189);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'o') ADVANCE(212);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'o') ADVANCE(190);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'o') ADVANCE(209);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'o') ADVANCE(210);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'o') ADVANCE(230);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'o') ADVANCE(214);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'p') ADVANCE(196);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'p') ADVANCE(137);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'p') ADVANCE(155);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'p') ADVANCE(201);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'q') ADVANCE(234);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'r') ADVANCE(237);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'r') ADVANCE(174);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'r') ADVANCE(48);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'r') ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'r') ADVANCE(195);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'r') ADVANCE(221);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'r') ADVANCE(167);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'r') ADVANCE(222);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 's') ADVANCE(203);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 's') ADVANCE(145);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 't') ADVANCE(173);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 't') ADVANCE(83);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 't') ADVANCE(73);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 't') ADVANCE(81);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 't') ADVANCE(67);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 't') ADVANCE(65);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 't') ADVANCE(89);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 't') ADVANCE(144);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 't') ADVANCE(132);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 't') ADVANCE(208);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 't') ADVANCE(182);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 't') ADVANCE(213);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 't') ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 't') ADVANCE(159);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 't') ADVANCE(199);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'u') ADVANCE(149);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'u') ADVANCE(162);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'u') ADVANCE(200);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'u') ADVANCE(231);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'x') ADVANCE(75);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'y') ADVANCE(87);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym__alpha);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym__digit);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(239);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_text);
      ADVANCE_MAP(
        'a', 283,
        'b', 277,
        'c', 244,
        'd', 256,
        'e', 284,
        'g', 257,
        'i', 286,
        'l', 268,
        'n', 241,
        'o', 245,
        'p', 99,
        'q', 318,
        's', 250,
        't', 258,
        'u', 278,
        '\t', 240,
        0x0b, 240,
        '\f', 240,
        ' ', 240,
      );
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(324);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a') ADVANCE(285);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(324);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a') ADVANCE(289);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(324);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a') ADVANCE(253);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(324);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a') ADVANCE(281);
      if (lookahead == 'o') ADVANCE(254);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(324);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'b') ADVANCE(275);
      if (lookahead == 'l') ADVANCE(116);
      if (lookahead == 'p') ADVANCE(259);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(324);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'b') ADVANCE(316);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(324);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'c') ADVANCE(276);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(324);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'c') ADVANCE(274);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(324);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'c') ADVANCE(62);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(324);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'c') ADVANCE(291);
      if (lookahead == 't') ADVANCE(303);
      if (lookahead == 'u') ADVANCE(246);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(324);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'c') ADVANCE(280);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(324);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'c') ADVANCE(314);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(324);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'c') ADVANCE(265);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(324);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'd') ADVANCE(261);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(324);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'd') ADVANCE(267);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(324);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(272);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(324);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(309);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(324);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(321);
      if (lookahead == 'r') ADVANCE(242);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(324);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(287);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(324);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(125);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(324);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(119);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(324);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(307);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(324);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(78);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(324);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(80);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(324);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(70);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(324);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(122);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(324);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(72);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(324);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(310);
      if (lookahead == 'i') ADVANCE(110);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(324);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(302);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(324);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(252);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(324);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(264);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(324);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'f') ADVANCE(60);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(324);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'g') ADVANCE(107);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(324);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'h') ADVANCE(92);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(324);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'j') ADVANCE(270);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(324);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'k') ADVANCE(301);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(324);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l') ADVANCE(290);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(324);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l') ADVANCE(113);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(324);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l') ADVANCE(94);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(324);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l') ADVANCE(320);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(324);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l') ADVANCE(279);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(324);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l') ADVANCE(293);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(324);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l') ADVANCE(282);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(324);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'm') ADVANCE(104);
      if (lookahead == 'x') ADVANCE(298);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(324);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'm') ADVANCE(262);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(324);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'm') ADVANCE(300);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(324);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'n') ADVANCE(86);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(324);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'n') ADVANCE(273);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(324);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'n') ADVANCE(308);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(324);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'o') ADVANCE(247);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(324);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'o') ADVANCE(299);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(324);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'o') ADVANCE(304);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(324);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'o') ADVANCE(249);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(324);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'o') ADVANCE(288);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(324);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'o') ADVANCE(317);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(324);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'o') ADVANCE(305);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(324);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'p') ADVANCE(243);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(324);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'p') ADVANCE(292);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(324);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'p') ADVANCE(263);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(324);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'p') ADVANCE(296);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(324);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'q') ADVANCE(319);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(324);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r') ADVANCE(322);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(324);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r') ADVANCE(294);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(324);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r') ADVANCE(312);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(324);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r') ADVANCE(313);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(324);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r') ADVANCE(271);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(324);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 's') ADVANCE(297);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(324);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 's') ADVANCE(251);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(324);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't') ADVANCE(84);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(324);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't') ADVANCE(74);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(324);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't') ADVANCE(82);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(324);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't') ADVANCE(68);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(324);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't') ADVANCE(66);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(324);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't') ADVANCE(90);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(324);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't') ADVANCE(248);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(324);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't') ADVANCE(306);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(324);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't') ADVANCE(266);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(324);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'u') ADVANCE(269);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(324);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'u') ADVANCE(295);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(324);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'u') ADVANCE(255);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(324);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'x') ADVANCE(76);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(324);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'y') ADVANCE(88);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(324);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(323);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(324);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_text);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(324);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym__xml_base_ident_token1);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 35},
  [2] = {.lex_state = 35},
  [3] = {.lex_state = 35},
  [4] = {.lex_state = 35},
  [5] = {.lex_state = 35},
  [6] = {.lex_state = 35},
  [7] = {.lex_state = 35},
  [8] = {.lex_state = 35},
  [9] = {.lex_state = 35},
  [10] = {.lex_state = 35},
  [11] = {.lex_state = 35},
  [12] = {.lex_state = 35},
  [13] = {.lex_state = 35},
  [14] = {.lex_state = 35},
  [15] = {.lex_state = 35},
  [16] = {.lex_state = 35},
  [17] = {.lex_state = 35},
  [18] = {.lex_state = 7},
  [19] = {.lex_state = 34},
  [20] = {.lex_state = 34},
  [21] = {.lex_state = 35},
  [22] = {.lex_state = 35},
  [23] = {.lex_state = 35},
  [24] = {.lex_state = 35},
  [25] = {.lex_state = 35},
  [26] = {.lex_state = 35},
  [27] = {.lex_state = 35},
  [28] = {.lex_state = 35},
  [29] = {.lex_state = 35},
  [30] = {.lex_state = 35},
  [31] = {.lex_state = 35},
  [32] = {.lex_state = 35},
  [33] = {.lex_state = 35},
  [34] = {.lex_state = 35},
  [35] = {.lex_state = 35},
  [36] = {.lex_state = 35},
  [37] = {.lex_state = 35},
  [38] = {.lex_state = 35},
  [39] = {.lex_state = 35},
  [40] = {.lex_state = 35},
  [41] = {.lex_state = 35},
  [42] = {.lex_state = 35},
  [43] = {.lex_state = 35},
  [44] = {.lex_state = 35},
  [45] = {.lex_state = 35},
  [46] = {.lex_state = 35},
  [47] = {.lex_state = 35},
  [48] = {.lex_state = 35},
  [49] = {.lex_state = 35},
  [50] = {.lex_state = 35},
  [51] = {.lex_state = 35},
  [52] = {.lex_state = 35},
  [53] = {.lex_state = 35},
  [54] = {.lex_state = 35},
  [55] = {.lex_state = 35},
  [56] = {.lex_state = 35},
  [57] = {.lex_state = 35},
  [58] = {.lex_state = 35},
  [59] = {.lex_state = 35},
  [60] = {.lex_state = 35},
  [61] = {.lex_state = 35},
  [62] = {.lex_state = 35},
  [63] = {.lex_state = 35},
  [64] = {.lex_state = 35},
  [65] = {.lex_state = 35},
  [66] = {.lex_state = 35},
  [67] = {.lex_state = 35},
  [68] = {.lex_state = 4},
  [69] = {.lex_state = 4},
  [70] = {.lex_state = 4},
  [71] = {.lex_state = 2},
  [72] = {.lex_state = 2},
  [73] = {.lex_state = 2},
  [74] = {.lex_state = 5},
  [75] = {.lex_state = 5},
  [76] = {.lex_state = 5},
  [77] = {.lex_state = 5},
  [78] = {.lex_state = 5},
  [79] = {.lex_state = 4},
  [80] = {.lex_state = 2},
  [81] = {.lex_state = 2},
  [82] = {.lex_state = 2},
  [83] = {.lex_state = 2},
  [84] = {.lex_state = 5},
  [85] = {.lex_state = 5},
  [86] = {.lex_state = 2},
  [87] = {.lex_state = 2},
  [88] = {.lex_state = 2},
  [89] = {.lex_state = 5},
  [90] = {.lex_state = 1},
  [91] = {.lex_state = 4},
  [92] = {.lex_state = 35},
  [93] = {.lex_state = 4},
  [94] = {.lex_state = 2},
  [95] = {.lex_state = 4},
  [96] = {.lex_state = 2},
  [97] = {.lex_state = 2},
  [98] = {.lex_state = 2},
  [99] = {.lex_state = 2},
  [100] = {.lex_state = 35},
  [101] = {.lex_state = 2},
  [102] = {.lex_state = 4},
  [103] = {.lex_state = 35},
  [104] = {.lex_state = 35},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 2},
  [107] = {.lex_state = 2},
  [108] = {.lex_state = 2},
  [109] = {.lex_state = 2},
  [110] = {.lex_state = 35},
  [111] = {.lex_state = 2},
  [112] = {.lex_state = 2},
  [113] = {.lex_state = 35},
  [114] = {.lex_state = 4},
  [115] = {.lex_state = 2},
  [116] = {.lex_state = 4},
  [117] = {.lex_state = 2},
  [118] = {.lex_state = 2},
  [119] = {.lex_state = 2},
  [120] = {.lex_state = 2},
  [121] = {.lex_state = 2},
  [122] = {.lex_state = 2},
  [123] = {.lex_state = 2},
  [124] = {.lex_state = 2},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 2},
  [127] = {.lex_state = 2},
  [128] = {.lex_state = 2},
  [129] = {.lex_state = 2},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 2},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 4},
  [137] = {.lex_state = 2},
  [138] = {.lex_state = 35},
  [139] = {.lex_state = 4},
  [140] = {.lex_state = 4},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 35},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 35},
  [147] = {.lex_state = 35},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 2},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 2},
  [155] = {.lex_state = 2},
  [156] = {.lex_state = 35},
  [157] = {.lex_state = 35},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 35},
  [160] = {.lex_state = 4},
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
    [sym_source_file] = STATE(158),
    [sym__node] = STATE(3),
    [sym_braces] = STATE(3),
    [sym_squares] = STATE(3),
    [sym_parens] = STATE(3),
    [sym_xml_tag] = STATE(3),
    [sym_decl_xmlns] = STATE(3),
    [sym_def] = STATE(3),
    [sym_alloc] = STATE(3),
    [sym_import] = STATE(3),
    [sym_export] = STATE(3),
    [sym_namespace] = STATE(3),
    [sym_transclude] = STATE(3),
    [sym_let] = STATE(3),
    [sym_tex] = STATE(3),
    [sym_scope] = STATE(3),
    [sym_subtree] = STATE(3),
    [sym_put] = STATE(3),
    [sym_get] = STATE(3),
    [sym_open] = STATE(3),
    [sym_query_tree] = STATE(3),
    [sym__default] = STATE(3),
    [sym_object] = STATE(3),
    [sym_patch] = STATE(3),
    [sym_call] = STATE(3),
    [sym__prim] = STATE(3),
    [sym_inline_math] = STATE(3),
    [sym_display_math] = STATE(3),
    [sym_p] = STATE(3),
    [sym_em] = STATE(3),
    [sym_strong] = STATE(3),
    [sym_li] = STATE(3),
    [sym_ul] = STATE(3),
    [sym_ol] = STATE(3),
    [sym_code] = STATE(3),
    [sym_blockquote] = STATE(3),
    [sym_pre] = STATE(3),
    [sym_ident] = STATE(3),
    [sym_ident_with_method_calls] = STATE(3),
    [sym__link] = STATE(3),
    [sym_markdown_link] = STATE(3),
    [sym_unlabeled_link] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
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
    STATE(2), 42,
      sym__node,
      sym_braces,
      sym_squares,
      sym_parens,
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
  [83] = 13,
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
      ts_builtin_sym_end,
    ACTIONS(64), 1,
      sym_comment,
    ACTIONS(66), 1,
      sym_text,
    STATE(4), 42,
      sym__node,
      sym_braces,
      sym_squares,
      sym_parens,
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
  [164] = 13,
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
    STATE(4), 42,
      sym__node,
      sym_braces,
      sym_squares,
      sym_parens,
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
  [245] = 13,
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
    STATE(5), 42,
      sym__node,
      sym_braces,
      sym_squares,
      sym_parens,
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
  [326] = 13,
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
    STATE(10), 42,
      sym__node,
      sym_braces,
      sym_squares,
      sym_parens,
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
  [407] = 13,
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
    ACTIONS(144), 1,
      anon_sym_RBRACE,
    ACTIONS(146), 1,
      sym_comment,
    ACTIONS(148), 1,
      sym_text,
    STATE(5), 42,
      sym__node,
      sym_braces,
      sym_squares,
      sym_parens,
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
  [488] = 13,
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
    ACTIONS(150), 1,
      anon_sym_RBRACE,
    ACTIONS(152), 1,
      sym_comment,
    ACTIONS(154), 1,
      sym_text,
    STATE(7), 42,
      sym__node,
      sym_braces,
      sym_squares,
      sym_parens,
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
  [569] = 13,
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
    ACTIONS(146), 1,
      sym_comment,
    ACTIONS(148), 1,
      sym_text,
    ACTIONS(156), 1,
      anon_sym_RBRACE,
    STATE(5), 42,
      sym__node,
      sym_braces,
      sym_squares,
      sym_parens,
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
  [650] = 13,
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
    ACTIONS(146), 1,
      sym_comment,
    ACTIONS(148), 1,
      sym_text,
    ACTIONS(158), 1,
      anon_sym_RBRACE,
    STATE(5), 42,
      sym__node,
      sym_braces,
      sym_squares,
      sym_parens,
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
  [731] = 13,
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
    ACTIONS(160), 1,
      anon_sym_RBRACE,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(164), 1,
      sym_text,
    STATE(9), 42,
      sym__node,
      sym_braces,
      sym_squares,
      sym_parens,
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
  [812] = 13,
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
    ACTIONS(166), 1,
      anon_sym_RPAREN,
    ACTIONS(168), 1,
      sym_comment,
    ACTIONS(170), 1,
      sym_text,
    STATE(2), 42,
      sym__node,
      sym_braces,
      sym_squares,
      sym_parens,
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
  [893] = 13,
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
    ACTIONS(168), 1,
      sym_comment,
    ACTIONS(170), 1,
      sym_text,
    ACTIONS(172), 1,
      anon_sym_RBRACE,
    STATE(2), 42,
      sym__node,
      sym_braces,
      sym_squares,
      sym_parens,
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
  [974] = 13,
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
    ACTIONS(168), 1,
      sym_comment,
    ACTIONS(170), 1,
      sym_text,
    ACTIONS(174), 1,
      anon_sym_RBRACK,
    STATE(2), 42,
      sym__node,
      sym_braces,
      sym_squares,
      sym_parens,
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
  [1055] = 12,
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
    STATE(13), 42,
      sym__node,
      sym_braces,
      sym_squares,
      sym_parens,
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
    ACTIONS(180), 1,
      sym_comment,
    ACTIONS(182), 1,
      sym_text,
    STATE(12), 42,
      sym__node,
      sym_braces,
      sym_squares,
      sym_parens,
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
  [1211] = 12,
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
    STATE(14), 42,
      sym__node,
      sym_braces,
      sym_squares,
      sym_parens,
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
  [1289] = 27,
    ACTIONS(188), 1,
      anon_sym_def,
    ACTIONS(190), 1,
      anon_sym_alloc,
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
      anon_sym_scope,
    ACTIONS(206), 1,
      anon_sym_subtree,
    ACTIONS(208), 1,
      anon_sym_put,
    ACTIONS(210), 1,
      anon_sym_get,
    ACTIONS(212), 1,
      anon_sym_open,
    ACTIONS(214), 1,
      anon_sym_query,
    ACTIONS(216), 1,
      anon_sym_object,
    ACTIONS(218), 1,
      anon_sym_patch,
    ACTIONS(220), 1,
      anon_sym_call,
    ACTIONS(222), 1,
      anon_sym_p,
    ACTIONS(224), 1,
      anon_sym_em,
    ACTIONS(226), 1,
      anon_sym_strong,
    ACTIONS(228), 1,
      anon_sym_li,
    ACTIONS(230), 1,
      anon_sym_ul,
    ACTIONS(232), 1,
      anon_sym_ol,
    ACTIONS(234), 1,
      anon_sym_code,
    ACTIONS(236), 1,
      anon_sym_blockquote,
    ACTIONS(238), 1,
      anon_sym_pre,
    ACTIONS(240), 1,
      sym_text,
  [1371] = 5,
    ACTIONS(246), 1,
      anon_sym_POUND,
    ACTIONS(248), 1,
      anon_sym_LBRACE_RBRACE,
    ACTIONS(242), 2,
      ts_builtin_sym_end,
      sym_text,
    STATE(22), 2,
      sym__arg,
      aux_sym_ident_repeat1,
    ACTIONS(244), 12,
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
  [1400] = 4,
    ACTIONS(248), 1,
      anon_sym_LBRACE_RBRACE,
    ACTIONS(242), 2,
      ts_builtin_sym_end,
      sym_text,
    STATE(22), 2,
      sym__arg,
      aux_sym_ident_repeat1,
    ACTIONS(244), 13,
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
  [1427] = 4,
    ACTIONS(252), 1,
      anon_sym_LBRACE,
    ACTIONS(250), 2,
      ts_builtin_sym_end,
      sym_text,
    STATE(21), 2,
      sym__arg,
      aux_sym_ident_repeat1,
    ACTIONS(255), 12,
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
  [1453] = 3,
    ACTIONS(257), 2,
      ts_builtin_sym_end,
      sym_text,
    STATE(21), 2,
      sym__arg,
      aux_sym_ident_repeat1,
    ACTIONS(259), 13,
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
  [1477] = 3,
    STATE(24), 1,
      aux_sym_ident_with_method_calls_repeat1,
    ACTIONS(261), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(263), 13,
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
  [1500] = 5,
    ACTIONS(265), 1,
      ts_builtin_sym_end,
    ACTIONS(269), 1,
      anon_sym_POUND,
    ACTIONS(272), 1,
      sym_text,
    STATE(24), 1,
      aux_sym_ident_with_method_calls_repeat1,
    ACTIONS(267), 12,
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
  [1527] = 2,
    ACTIONS(275), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(277), 13,
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
  [1547] = 2,
    ACTIONS(279), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(281), 13,
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
  [1567] = 2,
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
  [1587] = 2,
    ACTIONS(257), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(259), 13,
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
  [1607] = 2,
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
  [1627] = 2,
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
  [1647] = 2,
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
  [1667] = 2,
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
  [1687] = 2,
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
  [1707] = 2,
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
  [1727] = 2,
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
  [1747] = 2,
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
  [1767] = 2,
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
  [1787] = 2,
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
  [1807] = 2,
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
  [1827] = 2,
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
  [1847] = 2,
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
  [1867] = 2,
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
  [1887] = 2,
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
  [1907] = 2,
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
  [1927] = 2,
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
  [1947] = 2,
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
  [1967] = 2,
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
  [1987] = 2,
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
  [2007] = 2,
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
  [2027] = 2,
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
  [2047] = 2,
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
  [2067] = 2,
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
  [2087] = 2,
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
  [2107] = 2,
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
  [2127] = 2,
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
  [2147] = 2,
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
  [2167] = 2,
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
  [2187] = 2,
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
  [2207] = 2,
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
  [2227] = 2,
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
  [2247] = 2,
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
  [2267] = 2,
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
  [2287] = 2,
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
  [2307] = 2,
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
  [2327] = 2,
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
  [2347] = 2,
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
  [2367] = 3,
    ACTIONS(441), 1,
      anon_sym_RBRACK,
    ACTIONS(443), 1,
      sym_text,
    ACTIONS(439), 10,
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
  [2386] = 2,
    ACTIONS(445), 1,
      anon_sym_BSLASH,
    STATE(31), 10,
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
  [2402] = 2,
    ACTIONS(445), 1,
      anon_sym_BSLASH,
    STATE(29), 10,
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
  [2418] = 9,
    ACTIONS(222), 1,
      anon_sym_p,
    ACTIONS(447), 1,
      anon_sym_em,
    ACTIONS(449), 1,
      anon_sym_strong,
    ACTIONS(451), 1,
      anon_sym_li,
    ACTIONS(453), 1,
      anon_sym_ul,
    ACTIONS(455), 1,
      anon_sym_ol,
    ACTIONS(457), 1,
      anon_sym_code,
    ACTIONS(459), 1,
      anon_sym_blockquote,
    ACTIONS(461), 1,
      anon_sym_pre,
  [2446] = 3,
    STATE(71), 1,
      aux_sym__xml_base_ident_repeat1,
    ACTIONS(463), 3,
      anon_sym_LBRACE,
      anon_sym_GT,
      anon_sym_COLON,
    ACTIONS(465), 3,
      sym__alpha,
      sym__digit,
      aux_sym__xml_base_ident_token1,
  [2460] = 3,
    STATE(71), 1,
      aux_sym__xml_base_ident_repeat1,
    ACTIONS(468), 3,
      anon_sym_LBRACE,
      anon_sym_GT,
      anon_sym_COLON,
    ACTIONS(470), 3,
      sym__alpha,
      sym__digit,
      aux_sym__xml_base_ident_token1,
  [2474] = 3,
    STATE(72), 1,
      aux_sym__xml_base_ident_repeat1,
    ACTIONS(472), 3,
      anon_sym_LBRACE,
      anon_sym_GT,
      anon_sym_COLON,
    ACTIONS(474), 3,
      sym__alpha,
      sym__digit,
      aux_sym__xml_base_ident_token1,
  [2488] = 4,
    ACTIONS(476), 1,
      anon_sym_RBRACE,
    ACTIONS(478), 1,
      anon_sym_LBRACK,
    ACTIONS(480), 1,
      aux_sym__whitespace_token1,
    STATE(76), 3,
      sym_method_decl,
      sym__whitespace,
      aux_sym_object_repeat1,
  [2503] = 4,
    ACTIONS(478), 1,
      anon_sym_LBRACK,
    ACTIONS(480), 1,
      aux_sym__whitespace_token1,
    ACTIONS(482), 1,
      anon_sym_RBRACE,
    STATE(76), 3,
      sym_method_decl,
      sym__whitespace,
      aux_sym_object_repeat1,
  [2518] = 4,
    ACTIONS(484), 1,
      anon_sym_RBRACE,
    ACTIONS(486), 1,
      anon_sym_LBRACK,
    ACTIONS(489), 1,
      aux_sym__whitespace_token1,
    STATE(76), 3,
      sym_method_decl,
      sym__whitespace,
      aux_sym_object_repeat1,
  [2533] = 3,
    ACTIONS(478), 1,
      anon_sym_LBRACK,
    ACTIONS(492), 1,
      aux_sym__whitespace_token1,
    STATE(75), 3,
      sym_method_decl,
      sym__whitespace,
      aux_sym_object_repeat1,
  [2545] = 3,
    ACTIONS(478), 1,
      anon_sym_LBRACK,
    ACTIONS(494), 1,
      aux_sym__whitespace_token1,
    STATE(74), 3,
      sym_method_decl,
      sym__whitespace,
      aux_sym_object_repeat1,
  [2557] = 4,
    ACTIONS(242), 1,
      anon_sym_LBRACK,
    ACTIONS(244), 1,
      anon_sym_LBRACE,
    ACTIONS(496), 1,
      anon_sym_LBRACE_RBRACE,
    STATE(83), 2,
      sym__arg,
      aux_sym_ident_repeat1,
  [2571] = 3,
    ACTIONS(250), 1,
      anon_sym_LBRACK,
    ACTIONS(498), 1,
      anon_sym_LBRACE,
    STATE(80), 2,
      sym__arg,
      aux_sym_ident_repeat1,
  [2582] = 4,
    ACTIONS(501), 1,
      anon_sym_LBRACE,
    ACTIONS(503), 1,
      anon_sym_LBRACK,
    STATE(66), 1,
      sym__arg,
    STATE(82), 1,
      aux_sym_fun_spec_repeat1,
  [2595] = 4,
    ACTIONS(501), 1,
      anon_sym_LBRACE,
    ACTIONS(503), 1,
      anon_sym_LBRACK,
    STATE(48), 1,
      sym__arg,
    STATE(87), 1,
      aux_sym_fun_spec_repeat1,
  [2608] = 2,
    ACTIONS(257), 2,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
    STATE(80), 2,
      sym__arg,
      aux_sym_ident_repeat1,
  [2617] = 2,
    ACTIONS(375), 1,
      aux_sym__whitespace_token1,
    ACTIONS(377), 2,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
  [2625] = 2,
    ACTIONS(355), 1,
      aux_sym__whitespace_token1,
    ACTIONS(357), 2,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
  [2633] = 3,
    ACTIONS(505), 1,
      sym__alpha,
    STATE(125), 1,
      sym__xml_base_ident,
    STATE(132), 1,
      sym__xml_qname,
  [2643] = 3,
    ACTIONS(507), 1,
      anon_sym_LBRACE,
    ACTIONS(509), 1,
      anon_sym_LBRACK,
    STATE(87), 1,
      aux_sym_fun_spec_repeat1,
  [2653] = 3,
    ACTIONS(501), 1,
      anon_sym_LBRACE,
    ACTIONS(512), 1,
      anon_sym_LBRACK,
    STATE(56), 1,
      sym__arg,
  [2663] = 2,
    ACTIONS(516), 1,
      aux_sym__whitespace_token1,
    ACTIONS(514), 2,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
  [2671] = 3,
    ACTIONS(518), 1,
      anon_sym_POUND,
    ACTIONS(520), 1,
      sym_text,
    STATE(23), 1,
      aux_sym_ident_with_method_calls_repeat1,
  [2681] = 3,
    ACTIONS(522), 1,
      anon_sym_BSLASH,
    STATE(64), 1,
      sym_fun_spec,
    STATE(81), 1,
      sym_ident,
  [2691] = 2,
    ACTIONS(524), 1,
      sym_text,
    STATE(139), 2,
      sym_addr,
      sym_external_link,
  [2699] = 3,
    ACTIONS(522), 1,
      anon_sym_BSLASH,
    STATE(60), 1,
      sym_fun_spec,
    STATE(81), 1,
      sym_ident,
  [2709] = 2,
    ACTIONS(501), 1,
      anon_sym_LBRACE,
    STATE(33), 1,
      sym__arg,
  [2716] = 2,
    ACTIONS(526), 1,
      anon_sym_BSLASH,
    STATE(52), 1,
      sym_ident,
  [2723] = 2,
    ACTIONS(505), 1,
      sym__alpha,
    STATE(144), 1,
      sym__xml_base_ident,
  [2730] = 2,
    ACTIONS(505), 1,
      sym__alpha,
    STATE(123), 1,
      sym__xml_base_ident,
  [2737] = 2,
    ACTIONS(501), 1,
      anon_sym_LBRACE,
    STATE(49), 1,
      sym__arg,
  [2744] = 2,
    ACTIONS(501), 1,
      anon_sym_LBRACE,
    STATE(50), 1,
      sym__arg,
  [2751] = 2,
    ACTIONS(528), 1,
      sym_text,
    STATE(134), 1,
      sym_addr,
  [2758] = 2,
    ACTIONS(501), 1,
      anon_sym_LBRACE,
    STATE(63), 1,
      sym__arg,
  [2765] = 2,
    ACTIONS(526), 1,
      anon_sym_BSLASH,
    STATE(62), 1,
      sym_ident,
  [2772] = 2,
    ACTIONS(530), 1,
      sym_text,
    STATE(149), 1,
      sym_addr,
  [2779] = 2,
    ACTIONS(530), 1,
      sym_text,
    STATE(150), 1,
      sym_addr,
  [2786] = 1,
    ACTIONS(532), 2,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [2791] = 1,
    ACTIONS(375), 2,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
  [2796] = 2,
    ACTIONS(501), 1,
      anon_sym_LBRACE,
    STATE(65), 1,
      sym__arg,
  [2803] = 1,
    ACTIONS(355), 2,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
  [2808] = 2,
    ACTIONS(501), 1,
      anon_sym_LBRACE,
    STATE(61), 1,
      sym__arg,
  [2815] = 2,
    ACTIONS(530), 1,
      sym_text,
    STATE(152), 1,
      sym_addr,
  [2822] = 1,
    ACTIONS(257), 2,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
  [2827] = 2,
    ACTIONS(501), 1,
      anon_sym_LBRACE,
    STATE(25), 1,
      sym__arg,
  [2834] = 2,
    ACTIONS(530), 1,
      sym_text,
    STATE(153), 1,
      sym_addr,
  [2841] = 2,
    ACTIONS(522), 1,
      anon_sym_BSLASH,
    STATE(101), 1,
      sym_ident,
  [2848] = 2,
    ACTIONS(534), 1,
      anon_sym_LBRACE,
    STATE(89), 1,
      sym__arg,
  [2855] = 2,
    ACTIONS(526), 1,
      anon_sym_BSLASH,
    STATE(53), 1,
      sym_ident,
  [2862] = 2,
    ACTIONS(501), 1,
      anon_sym_LBRACE,
    STATE(47), 1,
      sym__arg,
  [2869] = 2,
    ACTIONS(536), 1,
      anon_sym_LBRACE,
    STATE(160), 1,
      sym__arg,
  [2876] = 2,
    ACTIONS(501), 1,
      anon_sym_LBRACE,
    STATE(26), 1,
      sym__arg,
  [2883] = 2,
    ACTIONS(501), 1,
      anon_sym_LBRACE,
    STATE(45), 1,
      sym__arg,
  [2890] = 1,
    ACTIONS(538), 2,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
  [2895] = 2,
    ACTIONS(501), 1,
      anon_sym_LBRACE,
    STATE(44), 1,
      sym__arg,
  [2902] = 2,
    ACTIONS(540), 1,
      anon_sym_LBRACE,
    STATE(59), 1,
      sym__txt_arg,
  [2909] = 2,
    ACTIONS(501), 1,
      anon_sym_LBRACE,
    STATE(37), 1,
      sym__arg,
  [2916] = 2,
    ACTIONS(542), 1,
      anon_sym_GT,
    ACTIONS(544), 1,
      anon_sym_COLON,
  [2923] = 2,
    ACTIONS(501), 1,
      anon_sym_LBRACE,
    STATE(32), 1,
      sym__arg,
  [2930] = 2,
    ACTIONS(501), 1,
      anon_sym_LBRACE,
    STATE(35), 1,
      sym__arg,
  [2937] = 2,
    ACTIONS(501), 1,
      anon_sym_LBRACE,
    STATE(38), 1,
      sym__arg,
  [2944] = 2,
    ACTIONS(501), 1,
      anon_sym_LBRACE,
    STATE(36), 1,
      sym__arg,
  [2951] = 1,
    ACTIONS(546), 1,
      anon_sym_RBRACK,
  [2955] = 1,
    ACTIONS(548), 1,
      anon_sym_LBRACE,
  [2959] = 1,
    ACTIONS(550), 1,
      anon_sym_GT,
  [2963] = 1,
    ACTIONS(552), 1,
      anon_sym_RBRACK,
  [2967] = 1,
    ACTIONS(554), 1,
      anon_sym_RPAREN,
  [2971] = 1,
    ACTIONS(554), 1,
      anon_sym_RPAREN,
  [2975] = 1,
    ACTIONS(532), 1,
      anon_sym_RBRACK_RBRACK,
  [2979] = 1,
    ACTIONS(556), 1,
      anon_sym_LBRACE,
  [2983] = 1,
    ACTIONS(558), 1,
      sym_text,
  [2987] = 1,
    ACTIONS(560), 1,
      anon_sym_RBRACK_RBRACK,
  [2991] = 1,
    ACTIONS(562), 1,
      anon_sym_LBRACK,
  [2995] = 1,
    ACTIONS(564), 1,
      anon_sym_RBRACK,
  [2999] = 1,
    ACTIONS(566), 1,
      anon_sym_RBRACE,
  [3003] = 1,
    ACTIONS(568), 1,
      sym_text,
  [3007] = 1,
    ACTIONS(570), 1,
      anon_sym_GT,
  [3011] = 1,
    ACTIONS(572), 1,
      anon_sym_LPAREN,
  [3015] = 1,
    ACTIONS(574), 1,
      sym_text,
  [3019] = 1,
    ACTIONS(576), 1,
      sym_text,
  [3023] = 1,
    ACTIONS(578), 1,
      anon_sym_RBRACK,
  [3027] = 1,
    ACTIONS(580), 1,
      anon_sym_RBRACK,
  [3031] = 1,
    ACTIONS(582), 1,
      anon_sym_RBRACE,
  [3035] = 1,
    ACTIONS(584), 1,
      anon_sym_LBRACE,
  [3039] = 1,
    ACTIONS(586), 1,
      anon_sym_RBRACE,
  [3043] = 1,
    ACTIONS(588), 1,
      anon_sym_RBRACE,
  [3047] = 1,
    ACTIONS(590), 1,
      anon_sym_LBRACE,
  [3051] = 1,
    ACTIONS(592), 1,
      anon_sym_LBRACE,
  [3055] = 1,
    ACTIONS(594), 1,
      sym_text,
  [3059] = 1,
    ACTIONS(596), 1,
      sym_text,
  [3063] = 1,
    ACTIONS(598), 1,
      ts_builtin_sym_end,
  [3067] = 1,
    ACTIONS(600), 1,
      sym_text,
  [3071] = 1,
    ACTIONS(602), 1,
      anon_sym_LBRACK,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 83,
  [SMALL_STATE(4)] = 164,
  [SMALL_STATE(5)] = 245,
  [SMALL_STATE(6)] = 326,
  [SMALL_STATE(7)] = 407,
  [SMALL_STATE(8)] = 488,
  [SMALL_STATE(9)] = 569,
  [SMALL_STATE(10)] = 650,
  [SMALL_STATE(11)] = 731,
  [SMALL_STATE(12)] = 812,
  [SMALL_STATE(13)] = 893,
  [SMALL_STATE(14)] = 974,
  [SMALL_STATE(15)] = 1055,
  [SMALL_STATE(16)] = 1133,
  [SMALL_STATE(17)] = 1211,
  [SMALL_STATE(18)] = 1289,
  [SMALL_STATE(19)] = 1371,
  [SMALL_STATE(20)] = 1400,
  [SMALL_STATE(21)] = 1427,
  [SMALL_STATE(22)] = 1453,
  [SMALL_STATE(23)] = 1477,
  [SMALL_STATE(24)] = 1500,
  [SMALL_STATE(25)] = 1527,
  [SMALL_STATE(26)] = 1547,
  [SMALL_STATE(27)] = 1567,
  [SMALL_STATE(28)] = 1587,
  [SMALL_STATE(29)] = 1607,
  [SMALL_STATE(30)] = 1627,
  [SMALL_STATE(31)] = 1647,
  [SMALL_STATE(32)] = 1667,
  [SMALL_STATE(33)] = 1687,
  [SMALL_STATE(34)] = 1707,
  [SMALL_STATE(35)] = 1727,
  [SMALL_STATE(36)] = 1747,
  [SMALL_STATE(37)] = 1767,
  [SMALL_STATE(38)] = 1787,
  [SMALL_STATE(39)] = 1807,
  [SMALL_STATE(40)] = 1827,
  [SMALL_STATE(41)] = 1847,
  [SMALL_STATE(42)] = 1867,
  [SMALL_STATE(43)] = 1887,
  [SMALL_STATE(44)] = 1907,
  [SMALL_STATE(45)] = 1927,
  [SMALL_STATE(46)] = 1947,
  [SMALL_STATE(47)] = 1967,
  [SMALL_STATE(48)] = 1987,
  [SMALL_STATE(49)] = 2007,
  [SMALL_STATE(50)] = 2027,
  [SMALL_STATE(51)] = 2047,
  [SMALL_STATE(52)] = 2067,
  [SMALL_STATE(53)] = 2087,
  [SMALL_STATE(54)] = 2107,
  [SMALL_STATE(55)] = 2127,
  [SMALL_STATE(56)] = 2147,
  [SMALL_STATE(57)] = 2167,
  [SMALL_STATE(58)] = 2187,
  [SMALL_STATE(59)] = 2207,
  [SMALL_STATE(60)] = 2227,
  [SMALL_STATE(61)] = 2247,
  [SMALL_STATE(62)] = 2267,
  [SMALL_STATE(63)] = 2287,
  [SMALL_STATE(64)] = 2307,
  [SMALL_STATE(65)] = 2327,
  [SMALL_STATE(66)] = 2347,
  [SMALL_STATE(67)] = 2367,
  [SMALL_STATE(68)] = 2386,
  [SMALL_STATE(69)] = 2402,
  [SMALL_STATE(70)] = 2418,
  [SMALL_STATE(71)] = 2446,
  [SMALL_STATE(72)] = 2460,
  [SMALL_STATE(73)] = 2474,
  [SMALL_STATE(74)] = 2488,
  [SMALL_STATE(75)] = 2503,
  [SMALL_STATE(76)] = 2518,
  [SMALL_STATE(77)] = 2533,
  [SMALL_STATE(78)] = 2545,
  [SMALL_STATE(79)] = 2557,
  [SMALL_STATE(80)] = 2571,
  [SMALL_STATE(81)] = 2582,
  [SMALL_STATE(82)] = 2595,
  [SMALL_STATE(83)] = 2608,
  [SMALL_STATE(84)] = 2617,
  [SMALL_STATE(85)] = 2625,
  [SMALL_STATE(86)] = 2633,
  [SMALL_STATE(87)] = 2643,
  [SMALL_STATE(88)] = 2653,
  [SMALL_STATE(89)] = 2663,
  [SMALL_STATE(90)] = 2671,
  [SMALL_STATE(91)] = 2681,
  [SMALL_STATE(92)] = 2691,
  [SMALL_STATE(93)] = 2699,
  [SMALL_STATE(94)] = 2709,
  [SMALL_STATE(95)] = 2716,
  [SMALL_STATE(96)] = 2723,
  [SMALL_STATE(97)] = 2730,
  [SMALL_STATE(98)] = 2737,
  [SMALL_STATE(99)] = 2744,
  [SMALL_STATE(100)] = 2751,
  [SMALL_STATE(101)] = 2758,
  [SMALL_STATE(102)] = 2765,
  [SMALL_STATE(103)] = 2772,
  [SMALL_STATE(104)] = 2779,
  [SMALL_STATE(105)] = 2786,
  [SMALL_STATE(106)] = 2791,
  [SMALL_STATE(107)] = 2796,
  [SMALL_STATE(108)] = 2803,
  [SMALL_STATE(109)] = 2808,
  [SMALL_STATE(110)] = 2815,
  [SMALL_STATE(111)] = 2822,
  [SMALL_STATE(112)] = 2827,
  [SMALL_STATE(113)] = 2834,
  [SMALL_STATE(114)] = 2841,
  [SMALL_STATE(115)] = 2848,
  [SMALL_STATE(116)] = 2855,
  [SMALL_STATE(117)] = 2862,
  [SMALL_STATE(118)] = 2869,
  [SMALL_STATE(119)] = 2876,
  [SMALL_STATE(120)] = 2883,
  [SMALL_STATE(121)] = 2890,
  [SMALL_STATE(122)] = 2895,
  [SMALL_STATE(123)] = 2902,
  [SMALL_STATE(124)] = 2909,
  [SMALL_STATE(125)] = 2916,
  [SMALL_STATE(126)] = 2923,
  [SMALL_STATE(127)] = 2930,
  [SMALL_STATE(128)] = 2937,
  [SMALL_STATE(129)] = 2944,
  [SMALL_STATE(130)] = 2951,
  [SMALL_STATE(131)] = 2955,
  [SMALL_STATE(132)] = 2959,
  [SMALL_STATE(133)] = 2963,
  [SMALL_STATE(134)] = 2967,
  [SMALL_STATE(135)] = 2971,
  [SMALL_STATE(136)] = 2975,
  [SMALL_STATE(137)] = 2979,
  [SMALL_STATE(138)] = 2983,
  [SMALL_STATE(139)] = 2987,
  [SMALL_STATE(140)] = 2991,
  [SMALL_STATE(141)] = 2995,
  [SMALL_STATE(142)] = 2999,
  [SMALL_STATE(143)] = 3003,
  [SMALL_STATE(144)] = 3007,
  [SMALL_STATE(145)] = 3011,
  [SMALL_STATE(146)] = 3015,
  [SMALL_STATE(147)] = 3019,
  [SMALL_STATE(148)] = 3023,
  [SMALL_STATE(149)] = 3027,
  [SMALL_STATE(150)] = 3031,
  [SMALL_STATE(151)] = 3035,
  [SMALL_STATE(152)] = 3039,
  [SMALL_STATE(153)] = 3043,
  [SMALL_STATE(154)] = 3047,
  [SMALL_STATE(155)] = 3051,
  [SMALL_STATE(156)] = 3055,
  [SMALL_STATE(157)] = 3059,
  [SMALL_STATE(158)] = 3063,
  [SMALL_STATE(159)] = 3067,
  [SMALL_STATE(160)] = 3071,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_braces_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [30] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_braces_repeat1, 2, 0, 0),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_braces_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_braces_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_braces_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_braces_repeat1, 2, 0, 0), SHIFT_REPEAT(86),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_braces_repeat1, 2, 0, 0), SHIFT_REPEAT(97),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_braces_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_braces_repeat1, 2, 0, 0), SHIFT_REPEAT(98),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_braces_repeat1, 2, 0, 0), SHIFT_REPEAT(99),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_braces_repeat1, 2, 0, 0), SHIFT_REPEAT(92),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_braces_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(86),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(97),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(98),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(99),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(92),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__arg_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__arg_repeat1, 2, 0, 0),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__arg_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [111] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__arg_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [114] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__arg_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [117] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__arg_repeat1, 2, 0, 0), SHIFT_REPEAT(86),
  [120] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__arg_repeat1, 2, 0, 0), SHIFT_REPEAT(97),
  [123] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__arg_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [126] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__arg_repeat1, 2, 0, 0), SHIFT_REPEAT(98),
  [129] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__arg_repeat1, 2, 0, 0), SHIFT_REPEAT(99),
  [132] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__arg_repeat1, 2, 0, 0), SHIFT_REPEAT(92),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__arg_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ident, 2, 0, 0),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ident, 2, 0, 0),
  [246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ident_repeat1, 2, 0, 0),
  [252] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ident_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ident_repeat1, 2, 0, 0),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ident, 3, 0, 0),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ident, 3, 0, 0),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ident_with_method_calls, 4, 0, 0),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ident_with_method_calls, 4, 0, 0),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ident_with_method_calls_repeat1, 2, 0, 0),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ident_with_method_calls_repeat1, 2, 0, 0),
  [269] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ident_with_method_calls_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [272] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ident_with_method_calls_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scope, 3, 0, 0),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scope, 3, 0, 0),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 3, 0, 0),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 3, 0, 0),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_tag, 3, 0, 0),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_tag, 3, 0, 0),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pre, 3, 0, 0),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pre, 3, 0, 0),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_patch, 9, 0, 7),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_patch, 9, 0, 7),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_blockquote, 3, 0, 0),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_blockquote, 3, 0, 0),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 3, 0, 0),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 3, 0, 0),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ol, 3, 0, 0),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ol, 3, 0, 0),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 8, 0, 6),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 8, 0, 6),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ul, 3, 0, 0),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ul, 3, 0, 0),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_li, 3, 0, 0),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_li, 3, 0, 0),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_strong, 3, 0, 0),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_strong, 3, 0, 0),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subtree, 6, 0, 0),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subtree, 6, 0, 0),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_markdown_link, 6, 0, 5),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_markdown_link, 6, 0, 5),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__txt_arg, 3, 0, 0),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__txt_arg, 3, 0, 0),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transclude, 5, 0, 4),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transclude, 5, 0, 4),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 5, 0, 0),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_export, 5, 0, 0),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 5, 0, 0),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import, 5, 0, 0),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_em, 3, 0, 0),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_em, 3, 0, 0),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_p, 3, 0, 0),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_p, 3, 0, 0),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__arg, 2, 0, 0),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__arg, 2, 0, 0),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_tree, 3, 0, 0),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_tree, 3, 0, 0),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fun_spec, 3, 0, 3),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fun_spec, 3, 0, 3),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_math, 2, 0, 0),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_math, 2, 0, 0),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_display_math, 2, 0, 0),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_display_math, 2, 0, 0),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__arg, 3, 0, 0),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__arg, 3, 0, 0),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 3, 0, 0),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_open, 3, 0, 0),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_get, 3, 0, 0),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_get, 3, 0, 0),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_braces, 3, 0, 0),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_braces, 3, 0, 0),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unlabeled_link, 3, 0, 0),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unlabeled_link, 3, 0, 0),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subtree, 3, 0, 0),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subtree, 3, 0, 0),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_squares, 3, 0, 0),
  [401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_squares, 3, 0, 0),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parens, 3, 0, 0),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parens, 3, 0, 0),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_xmlns, 3, 0, 0),
  [409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_xmlns, 3, 0, 0),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def, 3, 0, 0),
  [413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_def, 3, 0, 0),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tex, 3, 0, 0),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tex, 3, 0, 0),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alloc, 3, 0, 0),
  [421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alloc, 3, 0, 0),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_put, 4, 0, 2),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_put, 4, 0, 2),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let, 3, 0, 0),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let, 3, 0, 0),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace, 3, 0, 0),
  [433] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace, 3, 0, 0),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fun_spec, 2, 0, 1),
  [437] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fun_spec, 2, 0, 1),
  [439] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__node, 1, 0, 0),
  [441] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__node, 1, 0, 0),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__xml_base_ident_repeat1, 2, 0, 0),
  [465] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__xml_base_ident_repeat1, 2, 0, 0), SHIFT_REPEAT(71),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xml_base_ident, 2, 0, 0),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xml_base_ident, 1, 0, 0),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [476] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [478] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [482] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [484] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_object_repeat1, 2, 0, 0),
  [486] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_repeat1, 2, 0, 0), SHIFT_REPEAT(138),
  [489] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2, 0, 0), SHIFT_REPEAT(76),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [498] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ident_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fun_spec_repeat1, 2, 0, 0),
  [509] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fun_spec_repeat1, 2, 0, 0), SHIFT_REPEAT(156),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [514] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_decl, 4, 0, 8),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_decl, 4, 0, 8),
  [518] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_addr, 1, 0, 0),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fun_spec_repeat1, 3, 0, 0),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xml_qname, 1, 0, 0),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xml_qname, 3, 0, 0),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [598] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
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
