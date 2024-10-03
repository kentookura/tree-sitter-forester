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
#define STATE_COUNT 158
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
  sym__braces = 63,
  sym__squares = 64,
  sym__parens = 65,
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
  aux_sym__braces_repeat1 = 113,
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
  [sym__braces] = "_braces",
  [sym__squares] = "_squares",
  [sym__parens] = "_parens",
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
  [aux_sym__braces_repeat1] = "_braces_repeat1",
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
  [sym__braces] = sym__braces,
  [sym__squares] = sym__squares,
  [sym__parens] = sym__parens,
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
  [aux_sym__braces_repeat1] = aux_sym__braces_repeat1,
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
  [sym__braces] = {
    .visible = false,
    .named = true,
  },
  [sym__squares] = {
    .visible = false,
    .named = true,
  },
  [sym__parens] = {
    .visible = false,
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
  [aux_sym__braces_repeat1] = {
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
  [8] = 5,
  [9] = 5,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 12,
  [15] = 12,
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
  [76] = 19,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 21,
  [82] = 22,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 25,
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
  [106] = 106,
  [107] = 107,
  [108] = 25,
  [109] = 109,
  [110] = 110,
  [111] = 40,
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
  [153] = 150,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
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
      if (eof) ADVANCE(35);
      ADVANCE_MAP(
        '#', 95,
        '%', 94,
        '(', 42,
        ')', 43,
        '-', 50,
        '/', 324,
        ':', 325,
        '>', 54,
        '[', 40,
        '\\', 45,
        ']', 41,
        '_', 126,
        'a', 183,
        'b', 176,
        'c', 135,
        'd', 133,
        'e', 184,
        'g', 162,
        'i', 186,
        'l', 163,
        'm', 165,
        'n', 132,
        'o', 137,
        'p', 99,
        'q', 232,
        'r', 160,
        's', 142,
        't', 130,
        'u', 177,
        '{', 37,
        '}', 38,
      );
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(56);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 1:
      if (lookahead == '#') ADVANCE(95);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(1);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(323);
      END_STATE();
    case 2:
      if (lookahead == ':') ADVANCE(325);
      if (lookahead == '>') ADVANCE(54);
      if (lookahead == '{') ADVANCE(36);
      if (lookahead == '#' ||
          lookahead == '-' ||
          lookahead == '/') ADVANCE(324);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(238);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 3:
      if (lookahead == ':') ADVANCE(55);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '[', 39,
        '\\', 44,
        ']', 6,
        'b', 19,
        'c', 24,
        'e', 21,
        'l', 14,
        'o', 17,
        'p', 100,
        's', 31,
        'u', 18,
        '{', 37,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      END_STATE();
    case 5:
      if (lookahead == '[') ADVANCE(39);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(129);
      if (('\n' <= lookahead && lookahead <= '\r')) SKIP(5);
      END_STATE();
    case 6:
      if (lookahead == ']') ADVANCE(128);
      END_STATE();
    case 7:
      ADVANCE_MAP(
        'a', 282,
        'b', 276,
        'c', 243,
        'd', 255,
        'e', 283,
        'g', 256,
        'i', 285,
        'l', 267,
        'n', 240,
        'o', 244,
        'p', 98,
        'q', 317,
        's', 249,
        't', 257,
        'u', 277,
      );
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(7);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(239);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '%' &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(323);
      END_STATE();
    case 8:
      if (lookahead == 'c') ADVANCE(15);
      END_STATE();
    case 9:
      if (lookahead == 'd') ADVANCE(11);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(122);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(116);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 13:
      if (lookahead == 'g') ADVANCE(104);
      END_STATE();
    case 14:
      if (lookahead == 'i') ADVANCE(107);
      END_STATE();
    case 15:
      if (lookahead == 'k') ADVANCE(28);
      END_STATE();
    case 16:
      if (lookahead == 'l') ADVANCE(22);
      END_STATE();
    case 17:
      if (lookahead == 'l') ADVANCE(113);
      END_STATE();
    case 18:
      if (lookahead == 'l') ADVANCE(110);
      END_STATE();
    case 19:
      if (lookahead == 'l') ADVANCE(25);
      END_STATE();
    case 20:
      if (lookahead == 'm') ADVANCE(16);
      END_STATE();
    case 21:
      if (lookahead == 'm') ADVANCE(101);
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
      if (eof) ADVANCE(35);
      ADVANCE_MAP(
        '#', 96,
        '%', 94,
        '(', 42,
        ')', 43,
        '[', 40,
        '\\', 45,
        ']', 41,
        '{', 37,
        '}', 38,
      );
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(34);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(322);
      if (lookahead != 0) ADVANCE(323);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '}') ADVANCE(125);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '[') ADVANCE(127);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '<') ADVANCE(53);
      if (lookahead == 'x') ADVANCE(20);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_title);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_author);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_contributor);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_date);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_tag);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_ref);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_BSLASH_LT);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_BSLASHxmlns_COLON);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_day_token1);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_day_token2);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_def);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_def);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(323);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_alloc);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_alloc);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(323);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_taxon);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_meta);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_import);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_import);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(323);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_export);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_export);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(323);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_namespace);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_namespace);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(323);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_transclude);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_transclude);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(323);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_let);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_let);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(323);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_tex);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_tex);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(323);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_scope);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_scope);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(323);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_subtree);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_subtree);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(323);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_put);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_put);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(323);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_get);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_get);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(323);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_open);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_open);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(323);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_query);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_query);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(323);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_object);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_object);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(323);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_patch);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_patch);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(323);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_call);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_call);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(323);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(94);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '#') ADVANCE(97);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_POUND_POUND);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_p);
      if (lookahead == 'a') ADVANCE(314);
      if (lookahead == 'r') ADVANCE(259);
      if (lookahead == 'u') ADVANCE(310);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(323);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_p);
      if (lookahead == 'a') ADVANCE(223);
      if (lookahead == 'r') ADVANCE(150);
      if (lookahead == 'u') ADVANCE(219);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_p);
      if (lookahead == 'r') ADVANCE(10);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_em);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_em);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_em);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(323);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_strong);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_strong);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_strong);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(323);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_li);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_li);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_li);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(323);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_ul);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_ul);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_ul);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(323);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_ol);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_ol);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_ol);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(323);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_code);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_code);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_code);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(323);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_blockquote);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_blockquote);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_blockquote);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(323);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_pre);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_pre);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_pre);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(323);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_LBRACE_RBRACE);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_LBRACK_LBRACK);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_RBRACK_RBRACK);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(129);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'a') ADVANCE(169);
      if (lookahead == 'e') ADVANCE(235);
      if (lookahead == 'i') ADVANCE(226);
      if (lookahead == 'r') ADVANCE(134);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'a') ADVANCE(63);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'a') ADVANCE(185);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'a') ADVANCE(228);
      if (lookahead == 'e') ADVANCE(167);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'a') ADVANCE(190);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'a') ADVANCE(179);
      if (lookahead == 'o') ADVANCE(147);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'a') ADVANCE(146);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'b') ADVANCE(174);
      if (lookahead == 'l') ADVANCE(114);
      if (lookahead == 'p') ADVANCE(149);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'b') ADVANCE(234);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'b') ADVANCE(227);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'c') ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'c') ADVANCE(60);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'c') ADVANCE(192);
      if (lookahead == 't') ADVANCE(210);
      if (lookahead == 'u') ADVANCE(139);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'c') ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'c') ADVANCE(180);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'c') ADVANCE(222);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'c') ADVANCE(157);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'd') ADVANCE(151);
      if (lookahead == 'n') ADVANCE(225);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'd') ADVANCE(159);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(187);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(214);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(76);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(46);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(68);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(120);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(206);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(217);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(218);
      if (lookahead == 'i') ADVANCE(108);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(145);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(224);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(156);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'f') ADVANCE(58);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'f') ADVANCE(52);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'g') ADVANCE(51);
      if (lookahead == 'x') ADVANCE(196);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'g') ADVANCE(105);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'h') ADVANCE(90);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'h') ADVANCE(197);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'i') ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'j') ADVANCE(164);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'k') ADVANCE(205);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'l') ADVANCE(191);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'l') ADVANCE(111);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'l') ADVANCE(92);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'l') ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'l') ADVANCE(231);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'l') ADVANCE(155);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'l') ADVANCE(193);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'l') ADVANCE(182);
      if (lookahead == 'u') ADVANCE(216);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'm') ADVANCE(102);
      if (lookahead == 'x') ADVANCE(201);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'm') ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'm') ADVANCE(204);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'n') ADVANCE(84);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'n') ADVANCE(170);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'n') ADVANCE(62);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'n') ADVANCE(215);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'o') ADVANCE(140);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'o') ADVANCE(203);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'o') ADVANCE(141);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'o') ADVANCE(188);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'o') ADVANCE(211);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'o') ADVANCE(189);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'o') ADVANCE(208);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'o') ADVANCE(209);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'o') ADVANCE(229);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'o') ADVANCE(213);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'p') ADVANCE(195);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'p') ADVANCE(136);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'p') ADVANCE(154);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'p') ADVANCE(200);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'q') ADVANCE(233);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'r') ADVANCE(236);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'r') ADVANCE(173);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'r') ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'r') ADVANCE(48);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'r') ADVANCE(194);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'r') ADVANCE(220);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'r') ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'r') ADVANCE(221);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 's') ADVANCE(202);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 's') ADVANCE(144);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 't') ADVANCE(172);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 't') ADVANCE(82);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 't') ADVANCE(72);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 't') ADVANCE(80);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 't') ADVANCE(66);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 't') ADVANCE(64);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 't') ADVANCE(88);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 't') ADVANCE(143);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 't') ADVANCE(131);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 't') ADVANCE(207);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 't') ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 't') ADVANCE(212);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 't') ADVANCE(152);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 't') ADVANCE(158);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 't') ADVANCE(198);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'u') ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'u') ADVANCE(161);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'u') ADVANCE(199);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'u') ADVANCE(230);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'x') ADVANCE(74);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'y') ADVANCE(86);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym__alpha);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym__digit);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(238);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_text);
      ADVANCE_MAP(
        'a', 282,
        'b', 276,
        'c', 243,
        'd', 255,
        'e', 283,
        'g', 256,
        'i', 285,
        'l', 267,
        'n', 240,
        'o', 244,
        'p', 98,
        'q', 317,
        's', 249,
        't', 257,
        'u', 277,
        '\t', 239,
        0x0b, 239,
        '\f', 239,
        ' ', 239,
      );
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(323);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a') ADVANCE(284);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(323);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a') ADVANCE(288);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(323);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a') ADVANCE(252);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(323);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a') ADVANCE(280);
      if (lookahead == 'o') ADVANCE(253);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(323);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'b') ADVANCE(274);
      if (lookahead == 'l') ADVANCE(115);
      if (lookahead == 'p') ADVANCE(258);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(323);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'b') ADVANCE(315);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(323);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'c') ADVANCE(275);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(323);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'c') ADVANCE(273);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(323);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'c') ADVANCE(61);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(323);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'c') ADVANCE(290);
      if (lookahead == 't') ADVANCE(302);
      if (lookahead == 'u') ADVANCE(245);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(323);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'c') ADVANCE(279);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(323);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'c') ADVANCE(313);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(323);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'c') ADVANCE(264);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(323);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'd') ADVANCE(260);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(323);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'd') ADVANCE(266);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(323);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(271);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(323);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(308);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(323);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(320);
      if (lookahead == 'r') ADVANCE(241);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(323);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(286);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(323);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(124);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(323);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(118);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(323);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(306);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(323);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(77);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(323);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(79);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(323);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(69);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(323);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(121);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(323);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(71);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(323);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(309);
      if (lookahead == 'i') ADVANCE(109);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(323);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(301);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(323);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(251);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(323);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(263);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(323);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'f') ADVANCE(59);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(323);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'g') ADVANCE(106);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(323);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'h') ADVANCE(91);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(323);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'j') ADVANCE(269);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(323);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'k') ADVANCE(300);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(323);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l') ADVANCE(289);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(323);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l') ADVANCE(112);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(323);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l') ADVANCE(93);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(323);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l') ADVANCE(319);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(323);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l') ADVANCE(278);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(323);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l') ADVANCE(292);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(323);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l') ADVANCE(281);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(323);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'm') ADVANCE(103);
      if (lookahead == 'x') ADVANCE(297);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(323);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'm') ADVANCE(261);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(323);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'm') ADVANCE(299);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(323);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'n') ADVANCE(85);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(323);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'n') ADVANCE(272);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(323);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'n') ADVANCE(307);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(323);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'o') ADVANCE(246);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(323);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'o') ADVANCE(298);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(323);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'o') ADVANCE(303);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(323);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'o') ADVANCE(248);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(323);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'o') ADVANCE(287);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(323);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'o') ADVANCE(316);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(323);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'o') ADVANCE(304);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(323);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'p') ADVANCE(242);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(323);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'p') ADVANCE(291);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(323);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'p') ADVANCE(262);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(323);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'p') ADVANCE(295);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(323);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'q') ADVANCE(318);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(323);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r') ADVANCE(321);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(323);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r') ADVANCE(293);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(323);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r') ADVANCE(311);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(323);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r') ADVANCE(312);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(323);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r') ADVANCE(270);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(323);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 's') ADVANCE(296);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(323);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 's') ADVANCE(250);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(323);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't') ADVANCE(83);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(323);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't') ADVANCE(73);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(323);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't') ADVANCE(81);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(323);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't') ADVANCE(67);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(323);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't') ADVANCE(65);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(323);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't') ADVANCE(89);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(323);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't') ADVANCE(247);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(323);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't') ADVANCE(305);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(323);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't') ADVANCE(265);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(323);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'u') ADVANCE(268);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(323);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'u') ADVANCE(294);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(323);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'u') ADVANCE(254);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(323);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'x') ADVANCE(75);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(323);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'y') ADVANCE(87);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(323);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(322);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(323);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_text);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(323);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym__xml_base_ident_token1);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 34},
  [2] = {.lex_state = 34},
  [3] = {.lex_state = 34},
  [4] = {.lex_state = 34},
  [5] = {.lex_state = 34},
  [6] = {.lex_state = 34},
  [7] = {.lex_state = 34},
  [8] = {.lex_state = 34},
  [9] = {.lex_state = 34},
  [10] = {.lex_state = 34},
  [11] = {.lex_state = 34},
  [12] = {.lex_state = 34},
  [13] = {.lex_state = 34},
  [14] = {.lex_state = 34},
  [15] = {.lex_state = 34},
  [16] = {.lex_state = 34},
  [17] = {.lex_state = 34},
  [18] = {.lex_state = 7},
  [19] = {.lex_state = 34},
  [20] = {.lex_state = 34},
  [21] = {.lex_state = 34},
  [22] = {.lex_state = 34},
  [23] = {.lex_state = 34},
  [24] = {.lex_state = 34},
  [25] = {.lex_state = 34},
  [26] = {.lex_state = 34},
  [27] = {.lex_state = 34},
  [28] = {.lex_state = 34},
  [29] = {.lex_state = 34},
  [30] = {.lex_state = 34},
  [31] = {.lex_state = 34},
  [32] = {.lex_state = 34},
  [33] = {.lex_state = 34},
  [34] = {.lex_state = 34},
  [35] = {.lex_state = 34},
  [36] = {.lex_state = 34},
  [37] = {.lex_state = 34},
  [38] = {.lex_state = 34},
  [39] = {.lex_state = 34},
  [40] = {.lex_state = 34},
  [41] = {.lex_state = 34},
  [42] = {.lex_state = 34},
  [43] = {.lex_state = 34},
  [44] = {.lex_state = 34},
  [45] = {.lex_state = 34},
  [46] = {.lex_state = 34},
  [47] = {.lex_state = 34},
  [48] = {.lex_state = 34},
  [49] = {.lex_state = 34},
  [50] = {.lex_state = 34},
  [51] = {.lex_state = 34},
  [52] = {.lex_state = 34},
  [53] = {.lex_state = 34},
  [54] = {.lex_state = 34},
  [55] = {.lex_state = 34},
  [56] = {.lex_state = 34},
  [57] = {.lex_state = 34},
  [58] = {.lex_state = 34},
  [59] = {.lex_state = 34},
  [60] = {.lex_state = 34},
  [61] = {.lex_state = 34},
  [62] = {.lex_state = 34},
  [63] = {.lex_state = 34},
  [64] = {.lex_state = 34},
  [65] = {.lex_state = 34},
  [66] = {.lex_state = 34},
  [67] = {.lex_state = 4},
  [68] = {.lex_state = 4},
  [69] = {.lex_state = 4},
  [70] = {.lex_state = 2},
  [71] = {.lex_state = 2},
  [72] = {.lex_state = 2},
  [73] = {.lex_state = 5},
  [74] = {.lex_state = 5},
  [75] = {.lex_state = 5},
  [76] = {.lex_state = 4},
  [77] = {.lex_state = 5},
  [78] = {.lex_state = 5},
  [79] = {.lex_state = 4},
  [80] = {.lex_state = 4},
  [81] = {.lex_state = 4},
  [82] = {.lex_state = 4},
  [83] = {.lex_state = 5},
  [84] = {.lex_state = 4},
  [85] = {.lex_state = 4},
  [86] = {.lex_state = 4},
  [87] = {.lex_state = 34},
  [88] = {.lex_state = 4},
  [89] = {.lex_state = 1},
  [90] = {.lex_state = 5},
  [91] = {.lex_state = 2},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 2},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 2},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 34},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 34},
  [107] = {.lex_state = 34},
  [108] = {.lex_state = 4},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 4},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 34},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 34},
  [117] = {.lex_state = 4},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 4},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 4},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 4},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 4},
  [127] = {.lex_state = 4},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 34},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 34},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 4},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 34},
  [143] = {.lex_state = 4},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 4},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 34},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 34},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 34},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 34},
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
    [sym_source_file] = STATE(149),
    [sym__node] = STATE(3),
    [sym__braces] = STATE(3),
    [sym__squares] = STATE(3),
    [sym__parens] = STATE(3),
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
      sym__braces,
      sym__squares,
      sym__parens,
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
      aux_sym__braces_repeat1,
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
      sym__braces,
      sym__squares,
      sym__parens,
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
      sym__braces,
      sym__squares,
      sym__parens,
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
    ACTIONS(103), 1,
      anon_sym_RBRACE,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(107), 1,
      sym_text,
    STATE(10), 42,
      sym__node,
      sym__braces,
      sym__squares,
      sym__parens,
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
    ACTIONS(109), 1,
      anon_sym_RPAREN,
    ACTIONS(111), 1,
      sym_comment,
    ACTIONS(113), 1,
      sym_text,
    STATE(2), 42,
      sym__node,
      sym__braces,
      sym__squares,
      sym__parens,
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
      aux_sym__braces_repeat1,
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
    ACTIONS(111), 1,
      sym_comment,
    ACTIONS(113), 1,
      sym_text,
    ACTIONS(115), 1,
      anon_sym_RBRACK,
    STATE(2), 42,
      sym__node,
      sym__braces,
      sym__squares,
      sym__parens,
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
      aux_sym__braces_repeat1,
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
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(107), 1,
      sym_text,
    ACTIONS(117), 1,
      anon_sym_RBRACE,
    STATE(10), 42,
      sym__node,
      sym__braces,
      sym__squares,
      sym__parens,
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
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(107), 1,
      sym_text,
    ACTIONS(119), 1,
      anon_sym_RBRACE,
    STATE(10), 42,
      sym__node,
      sym__braces,
      sym__squares,
      sym__parens,
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
    ACTIONS(121), 1,
      anon_sym_LBRACE,
    ACTIONS(124), 1,
      anon_sym_RBRACE,
    ACTIONS(126), 1,
      anon_sym_LBRACK,
    ACTIONS(129), 1,
      anon_sym_LPAREN,
    ACTIONS(132), 1,
      anon_sym_BSLASH,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LT,
    ACTIONS(138), 1,
      anon_sym_BSLASHxmlns_COLON,
    ACTIONS(141), 1,
      sym_comment,
    ACTIONS(144), 1,
      anon_sym_POUND,
    ACTIONS(147), 1,
      anon_sym_POUND_POUND,
    ACTIONS(150), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(153), 1,
      sym_text,
    STATE(10), 42,
      sym__node,
      sym__braces,
      sym__squares,
      sym__parens,
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
    ACTIONS(111), 1,
      sym_comment,
    ACTIONS(113), 1,
      sym_text,
    ACTIONS(156), 1,
      anon_sym_RBRACE,
    STATE(2), 42,
      sym__node,
      sym__braces,
      sym__squares,
      sym__parens,
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
      aux_sym__braces_repeat1,
  [812] = 12,
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
    ACTIONS(158), 1,
      sym_comment,
    ACTIONS(160), 1,
      sym_text,
    STATE(8), 42,
      sym__node,
      sym__braces,
      sym__squares,
      sym__parens,
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
  [890] = 12,
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
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(164), 1,
      sym_text,
    STATE(11), 42,
      sym__node,
      sym__braces,
      sym__squares,
      sym__parens,
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
      aux_sym__braces_repeat1,
  [968] = 12,
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
      sym_comment,
    ACTIONS(168), 1,
      sym_text,
    STATE(9), 42,
      sym__node,
      sym__braces,
      sym__squares,
      sym__parens,
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
  [1046] = 12,
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
      sym_comment,
    ACTIONS(172), 1,
      sym_text,
    STATE(5), 42,
      sym__node,
      sym__braces,
      sym__squares,
      sym__parens,
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
  [1124] = 12,
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
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(176), 1,
      sym_text,
    STATE(6), 42,
      sym__node,
      sym__braces,
      sym__squares,
      sym__parens,
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
      aux_sym__braces_repeat1,
  [1202] = 12,
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
    ACTIONS(178), 1,
      sym_comment,
    ACTIONS(180), 1,
      sym_text,
    STATE(7), 42,
      sym__node,
      sym__braces,
      sym__squares,
      sym__parens,
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
      aux_sym__braces_repeat1,
  [1280] = 27,
    ACTIONS(182), 1,
      anon_sym_def,
    ACTIONS(184), 1,
      anon_sym_alloc,
    ACTIONS(186), 1,
      anon_sym_import,
    ACTIONS(188), 1,
      anon_sym_export,
    ACTIONS(190), 1,
      anon_sym_namespace,
    ACTIONS(192), 1,
      anon_sym_transclude,
    ACTIONS(194), 1,
      anon_sym_let,
    ACTIONS(196), 1,
      anon_sym_tex,
    ACTIONS(198), 1,
      anon_sym_scope,
    ACTIONS(200), 1,
      anon_sym_subtree,
    ACTIONS(202), 1,
      anon_sym_put,
    ACTIONS(204), 1,
      anon_sym_get,
    ACTIONS(206), 1,
      anon_sym_open,
    ACTIONS(208), 1,
      anon_sym_query,
    ACTIONS(210), 1,
      anon_sym_object,
    ACTIONS(212), 1,
      anon_sym_patch,
    ACTIONS(214), 1,
      anon_sym_call,
    ACTIONS(216), 1,
      anon_sym_p,
    ACTIONS(218), 1,
      anon_sym_em,
    ACTIONS(220), 1,
      anon_sym_strong,
    ACTIONS(222), 1,
      anon_sym_li,
    ACTIONS(224), 1,
      anon_sym_ul,
    ACTIONS(226), 1,
      anon_sym_ol,
    ACTIONS(228), 1,
      anon_sym_code,
    ACTIONS(230), 1,
      anon_sym_blockquote,
    ACTIONS(232), 1,
      anon_sym_pre,
    ACTIONS(234), 1,
      sym_text,
  [1362] = 4,
    ACTIONS(240), 1,
      anon_sym_LBRACE_RBRACE,
    ACTIONS(236), 2,
      ts_builtin_sym_end,
      sym_text,
    STATE(22), 2,
      sym__arg,
      aux_sym_ident_repeat1,
    ACTIONS(238), 13,
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
  [1389] = 5,
    ACTIONS(240), 1,
      anon_sym_LBRACE_RBRACE,
    ACTIONS(242), 1,
      anon_sym_POUND,
    ACTIONS(236), 2,
      ts_builtin_sym_end,
      sym_text,
    STATE(22), 2,
      sym__arg,
      aux_sym_ident_repeat1,
    ACTIONS(238), 12,
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
  [1418] = 4,
    ACTIONS(246), 1,
      anon_sym_LBRACE,
    ACTIONS(244), 2,
      ts_builtin_sym_end,
      sym_text,
    STATE(21), 2,
      sym__arg,
      aux_sym_ident_repeat1,
    ACTIONS(249), 12,
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
  [1444] = 3,
    ACTIONS(251), 2,
      ts_builtin_sym_end,
      sym_text,
    STATE(21), 2,
      sym__arg,
      aux_sym_ident_repeat1,
    ACTIONS(253), 13,
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
  [1468] = 5,
    ACTIONS(255), 1,
      ts_builtin_sym_end,
    ACTIONS(259), 1,
      anon_sym_POUND,
    ACTIONS(262), 1,
      sym_text,
    STATE(23), 1,
      aux_sym_ident_with_method_calls_repeat1,
    ACTIONS(257), 12,
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
  [1495] = 3,
    STATE(23), 1,
      aux_sym_ident_with_method_calls_repeat1,
    ACTIONS(265), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(267), 13,
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
  [1518] = 2,
    ACTIONS(269), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(271), 13,
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
  [1538] = 2,
    ACTIONS(273), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(275), 13,
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
  [1558] = 2,
    ACTIONS(277), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(279), 13,
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
  [1578] = 2,
    ACTIONS(281), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(283), 13,
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
  [1598] = 2,
    ACTIONS(285), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(287), 13,
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
  [1618] = 2,
    ACTIONS(289), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(291), 13,
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
  [1638] = 2,
    ACTIONS(293), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(295), 13,
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
  [1658] = 2,
    ACTIONS(297), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(299), 13,
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
  [1678] = 2,
    ACTIONS(301), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(303), 13,
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
  [1698] = 2,
    ACTIONS(305), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(307), 13,
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
  [1718] = 2,
    ACTIONS(309), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(311), 13,
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
  [1738] = 2,
    ACTIONS(313), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(315), 13,
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
  [1758] = 2,
    ACTIONS(317), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(319), 13,
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
  [1778] = 2,
    ACTIONS(321), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(323), 13,
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
  [1798] = 2,
    ACTIONS(325), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(327), 13,
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
  [1818] = 2,
    ACTIONS(251), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(253), 13,
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
  [1838] = 2,
    ACTIONS(329), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(331), 13,
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
  [1858] = 2,
    ACTIONS(333), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(335), 13,
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
  [1878] = 2,
    ACTIONS(337), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(339), 13,
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
  [1898] = 2,
    ACTIONS(341), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(343), 13,
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
  [1918] = 2,
    ACTIONS(345), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(347), 13,
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
  [1938] = 2,
    ACTIONS(349), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(351), 13,
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
  [1958] = 2,
    ACTIONS(353), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(355), 13,
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
  [1978] = 2,
    ACTIONS(357), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(359), 13,
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
  [1998] = 2,
    ACTIONS(361), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(363), 13,
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
  [2018] = 2,
    ACTIONS(365), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(367), 13,
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
  [2038] = 2,
    ACTIONS(369), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(371), 13,
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
  [2058] = 2,
    ACTIONS(373), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(375), 13,
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
  [2078] = 2,
    ACTIONS(377), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(379), 13,
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
  [2098] = 2,
    ACTIONS(381), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(383), 13,
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
  [2118] = 2,
    ACTIONS(385), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(387), 13,
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
  [2138] = 2,
    ACTIONS(389), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(391), 13,
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
  [2158] = 2,
    ACTIONS(393), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(395), 13,
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
  [2178] = 2,
    ACTIONS(397), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(399), 13,
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
  [2198] = 2,
    ACTIONS(401), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(403), 13,
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
  [2218] = 2,
    ACTIONS(405), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(407), 13,
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
  [2238] = 2,
    ACTIONS(409), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(411), 13,
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
  [2258] = 2,
    ACTIONS(413), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(415), 13,
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
  [2278] = 2,
    ACTIONS(417), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(419), 13,
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
  [2298] = 2,
    ACTIONS(421), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(423), 13,
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
  [2318] = 2,
    ACTIONS(425), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(427), 13,
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
  [2338] = 3,
    ACTIONS(431), 1,
      anon_sym_RBRACK,
    ACTIONS(433), 1,
      sym_text,
    ACTIONS(429), 10,
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
  [2357] = 2,
    ACTIONS(435), 1,
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
  [2373] = 2,
    ACTIONS(435), 1,
      anon_sym_BSLASH,
    STATE(42), 10,
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
  [2389] = 9,
    ACTIONS(216), 1,
      anon_sym_p,
    ACTIONS(437), 1,
      anon_sym_em,
    ACTIONS(439), 1,
      anon_sym_strong,
    ACTIONS(441), 1,
      anon_sym_li,
    ACTIONS(443), 1,
      anon_sym_ul,
    ACTIONS(445), 1,
      anon_sym_ol,
    ACTIONS(447), 1,
      anon_sym_code,
    ACTIONS(449), 1,
      anon_sym_blockquote,
    ACTIONS(451), 1,
      anon_sym_pre,
  [2417] = 3,
    STATE(71), 1,
      aux_sym__xml_base_ident_repeat1,
    ACTIONS(453), 3,
      anon_sym_LBRACE,
      anon_sym_GT,
      anon_sym_COLON,
    ACTIONS(455), 3,
      sym__alpha,
      sym__digit,
      aux_sym__xml_base_ident_token1,
  [2431] = 3,
    STATE(71), 1,
      aux_sym__xml_base_ident_repeat1,
    ACTIONS(457), 3,
      anon_sym_LBRACE,
      anon_sym_GT,
      anon_sym_COLON,
    ACTIONS(459), 3,
      sym__alpha,
      sym__digit,
      aux_sym__xml_base_ident_token1,
  [2445] = 3,
    STATE(70), 1,
      aux_sym__xml_base_ident_repeat1,
    ACTIONS(462), 3,
      anon_sym_LBRACE,
      anon_sym_GT,
      anon_sym_COLON,
    ACTIONS(464), 3,
      sym__alpha,
      sym__digit,
      aux_sym__xml_base_ident_token1,
  [2459] = 4,
    ACTIONS(466), 1,
      anon_sym_RBRACE,
    ACTIONS(468), 1,
      anon_sym_LBRACK,
    ACTIONS(470), 1,
      aux_sym__whitespace_token1,
    STATE(74), 3,
      sym_method_decl,
      sym__whitespace,
      aux_sym_object_repeat1,
  [2474] = 4,
    ACTIONS(472), 1,
      anon_sym_RBRACE,
    ACTIONS(474), 1,
      anon_sym_LBRACK,
    ACTIONS(477), 1,
      aux_sym__whitespace_token1,
    STATE(74), 3,
      sym_method_decl,
      sym__whitespace,
      aux_sym_object_repeat1,
  [2489] = 4,
    ACTIONS(468), 1,
      anon_sym_LBRACK,
    ACTIONS(470), 1,
      aux_sym__whitespace_token1,
    ACTIONS(480), 1,
      anon_sym_RBRACE,
    STATE(74), 3,
      sym_method_decl,
      sym__whitespace,
      aux_sym_object_repeat1,
  [2504] = 4,
    ACTIONS(236), 1,
      anon_sym_LBRACK,
    ACTIONS(238), 1,
      anon_sym_LBRACE,
    ACTIONS(482), 1,
      anon_sym_LBRACE_RBRACE,
    STATE(82), 2,
      sym__arg,
      aux_sym_ident_repeat1,
  [2518] = 3,
    ACTIONS(468), 1,
      anon_sym_LBRACK,
    ACTIONS(484), 1,
      aux_sym__whitespace_token1,
    STATE(73), 3,
      sym_method_decl,
      sym__whitespace,
      aux_sym_object_repeat1,
  [2530] = 3,
    ACTIONS(468), 1,
      anon_sym_LBRACK,
    ACTIONS(486), 1,
      aux_sym__whitespace_token1,
    STATE(75), 3,
      sym_method_decl,
      sym__whitespace,
      aux_sym_object_repeat1,
  [2542] = 4,
    ACTIONS(488), 1,
      anon_sym_LBRACE,
    ACTIONS(490), 1,
      anon_sym_LBRACK,
    STATE(34), 1,
      sym__arg,
    STATE(84), 1,
      aux_sym_fun_spec_repeat1,
  [2555] = 4,
    ACTIONS(488), 1,
      anon_sym_LBRACE,
    ACTIONS(490), 1,
      anon_sym_LBRACK,
    STATE(36), 1,
      sym__arg,
    STATE(79), 1,
      aux_sym_fun_spec_repeat1,
  [2568] = 3,
    ACTIONS(244), 1,
      anon_sym_LBRACK,
    ACTIONS(492), 1,
      anon_sym_LBRACE,
    STATE(81), 2,
      sym__arg,
      aux_sym_ident_repeat1,
  [2579] = 2,
    ACTIONS(251), 2,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
    STATE(81), 2,
      sym__arg,
      aux_sym_ident_repeat1,
  [2588] = 2,
    ACTIONS(497), 1,
      aux_sym__whitespace_token1,
    ACTIONS(495), 2,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
  [2596] = 3,
    ACTIONS(499), 1,
      anon_sym_LBRACE,
    ACTIONS(501), 1,
      anon_sym_LBRACK,
    STATE(84), 1,
      aux_sym_fun_spec_repeat1,
  [2606] = 3,
    ACTIONS(504), 1,
      anon_sym_BSLASH,
    STATE(60), 1,
      sym_fun_spec,
    STATE(80), 1,
      sym_ident,
  [2616] = 3,
    ACTIONS(488), 1,
      anon_sym_LBRACE,
    ACTIONS(506), 1,
      anon_sym_LBRACK,
    STATE(59), 1,
      sym__arg,
  [2626] = 2,
    ACTIONS(508), 1,
      sym_text,
    STATE(145), 2,
      sym_addr,
      sym_external_link,
  [2634] = 3,
    ACTIONS(504), 1,
      anon_sym_BSLASH,
    STATE(64), 1,
      sym_fun_spec,
    STATE(80), 1,
      sym_ident,
  [2644] = 3,
    ACTIONS(510), 1,
      anon_sym_POUND,
    ACTIONS(512), 1,
      sym_text,
    STATE(24), 1,
      aux_sym_ident_with_method_calls_repeat1,
  [2654] = 2,
    ACTIONS(269), 1,
      aux_sym__whitespace_token1,
    ACTIONS(271), 2,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
  [2662] = 3,
    ACTIONS(514), 1,
      sym__alpha,
    STATE(120), 1,
      sym__xml_base_ident,
    STATE(135), 1,
      sym__xml_qname,
  [2672] = 2,
    ACTIONS(488), 1,
      anon_sym_LBRACE,
    STATE(61), 1,
      sym__arg,
  [2679] = 2,
    ACTIONS(488), 1,
      anon_sym_LBRACE,
    STATE(46), 1,
      sym__arg,
  [2686] = 2,
    ACTIONS(488), 1,
      anon_sym_LBRACE,
    STATE(47), 1,
      sym__arg,
  [2693] = 2,
    ACTIONS(514), 1,
      sym__alpha,
    STATE(141), 1,
      sym__xml_base_ident,
  [2700] = 2,
    ACTIONS(488), 1,
      anon_sym_LBRACE,
    STATE(48), 1,
      sym__arg,
  [2707] = 2,
    ACTIONS(514), 1,
      sym__alpha,
    STATE(115), 1,
      sym__xml_base_ident,
  [2714] = 2,
    ACTIONS(488), 1,
      anon_sym_LBRACE,
    STATE(49), 1,
      sym__arg,
  [2721] = 2,
    ACTIONS(488), 1,
      anon_sym_LBRACE,
    STATE(65), 1,
      sym__arg,
  [2728] = 2,
    ACTIONS(488), 1,
      anon_sym_LBRACE,
    STATE(50), 1,
      sym__arg,
  [2735] = 2,
    ACTIONS(516), 1,
      sym_text,
    STATE(133), 1,
      sym_addr,
  [2742] = 2,
    ACTIONS(488), 1,
      anon_sym_LBRACE,
    STATE(51), 1,
      sym__arg,
  [2749] = 2,
    ACTIONS(518), 1,
      anon_sym_LBRACE,
    STATE(139), 1,
      sym__arg,
  [2756] = 1,
    ACTIONS(520), 2,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [2761] = 2,
    ACTIONS(488), 1,
      anon_sym_LBRACE,
    STATE(52), 1,
      sym__arg,
  [2768] = 2,
    ACTIONS(522), 1,
      sym_text,
    STATE(156), 1,
      sym_addr,
  [2775] = 2,
    ACTIONS(522), 1,
      sym_text,
    STATE(152), 1,
      sym_addr,
  [2782] = 1,
    ACTIONS(269), 2,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
  [2787] = 2,
    ACTIONS(488), 1,
      anon_sym_LBRACE,
    STATE(29), 1,
      sym__arg,
  [2794] = 2,
    ACTIONS(488), 1,
      anon_sym_LBRACE,
    STATE(35), 1,
      sym__arg,
  [2801] = 1,
    ACTIONS(251), 2,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
  [2806] = 2,
    ACTIONS(524), 1,
      anon_sym_LBRACE,
    STATE(83), 1,
      sym__arg,
  [2813] = 2,
    ACTIONS(488), 1,
      anon_sym_LBRACE,
    STATE(63), 1,
      sym__arg,
  [2820] = 2,
    ACTIONS(522), 1,
      sym_text,
    STATE(155), 1,
      sym_addr,
  [2827] = 2,
    ACTIONS(526), 1,
      anon_sym_LBRACE,
    STATE(38), 1,
      sym__txt_arg,
  [2834] = 2,
    ACTIONS(522), 1,
      sym_text,
    STATE(154), 1,
      sym_addr,
  [2841] = 2,
    ACTIONS(528), 1,
      anon_sym_BSLASH,
    STATE(62), 1,
      sym_ident,
  [2848] = 2,
    ACTIONS(488), 1,
      anon_sym_LBRACE,
    STATE(45), 1,
      sym__arg,
  [2855] = 1,
    ACTIONS(530), 2,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
  [2860] = 2,
    ACTIONS(532), 1,
      anon_sym_GT,
    ACTIONS(534), 1,
      anon_sym_COLON,
  [2867] = 2,
    ACTIONS(504), 1,
      anon_sym_BSLASH,
    STATE(110), 1,
      sym_ident,
  [2874] = 2,
    ACTIONS(488), 1,
      anon_sym_LBRACE,
    STATE(53), 1,
      sym__arg,
  [2881] = 2,
    ACTIONS(488), 1,
      anon_sym_LBRACE,
    STATE(44), 1,
      sym__arg,
  [2888] = 2,
    ACTIONS(528), 1,
      anon_sym_BSLASH,
    STATE(54), 1,
      sym_ident,
  [2895] = 2,
    ACTIONS(488), 1,
      anon_sym_LBRACE,
    STATE(43), 1,
      sym__arg,
  [2902] = 2,
    ACTIONS(528), 1,
      anon_sym_BSLASH,
    STATE(56), 1,
      sym_ident,
  [2909] = 1,
    ACTIONS(536), 1,
      anon_sym_LBRACK,
  [2913] = 1,
    ACTIONS(538), 1,
      anon_sym_LBRACE,
  [2917] = 1,
    ACTIONS(540), 1,
      anon_sym_RBRACK,
  [2921] = 1,
    ACTIONS(542), 1,
      sym_text,
  [2925] = 1,
    ACTIONS(544), 1,
      anon_sym_LBRACE,
  [2929] = 1,
    ACTIONS(546), 1,
      anon_sym_RBRACK,
  [2933] = 1,
    ACTIONS(548), 1,
      anon_sym_RPAREN,
  [2937] = 1,
    ACTIONS(548), 1,
      anon_sym_RPAREN,
  [2941] = 1,
    ACTIONS(550), 1,
      anon_sym_GT,
  [2945] = 1,
    ACTIONS(552), 1,
      anon_sym_LBRACE,
  [2949] = 1,
    ACTIONS(554), 1,
      sym_text,
  [2953] = 1,
    ACTIONS(556), 1,
      anon_sym_RBRACE,
  [2957] = 1,
    ACTIONS(558), 1,
      anon_sym_LBRACK,
  [2961] = 1,
    ACTIONS(560), 1,
      anon_sym_RBRACK,
  [2965] = 1,
    ACTIONS(562), 1,
      anon_sym_GT,
  [2969] = 1,
    ACTIONS(564), 1,
      sym_text,
  [2973] = 1,
    ACTIONS(520), 1,
      anon_sym_RBRACK_RBRACK,
  [2977] = 1,
    ACTIONS(566), 1,
      anon_sym_LBRACE,
  [2981] = 1,
    ACTIONS(568), 1,
      anon_sym_RBRACK_RBRACK,
  [2985] = 1,
    ACTIONS(570), 1,
      anon_sym_LPAREN,
  [2989] = 1,
    ACTIONS(572), 1,
      anon_sym_LBRACE,
  [2993] = 1,
    ACTIONS(574), 1,
      sym_text,
  [2997] = 1,
    ACTIONS(576), 1,
      ts_builtin_sym_end,
  [3001] = 1,
    ACTIONS(578), 1,
      sym_text,
  [3005] = 1,
    ACTIONS(580), 1,
      anon_sym_RBRACK,
  [3009] = 1,
    ACTIONS(582), 1,
      anon_sym_RBRACK,
  [3013] = 1,
    ACTIONS(584), 1,
      sym_text,
  [3017] = 1,
    ACTIONS(586), 1,
      anon_sym_RBRACE,
  [3021] = 1,
    ACTIONS(588), 1,
      anon_sym_RBRACE,
  [3025] = 1,
    ACTIONS(590), 1,
      anon_sym_RBRACE,
  [3029] = 1,
    ACTIONS(592), 1,
      sym_text,
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
  [SMALL_STATE(13)] = 890,
  [SMALL_STATE(14)] = 968,
  [SMALL_STATE(15)] = 1046,
  [SMALL_STATE(16)] = 1124,
  [SMALL_STATE(17)] = 1202,
  [SMALL_STATE(18)] = 1280,
  [SMALL_STATE(19)] = 1362,
  [SMALL_STATE(20)] = 1389,
  [SMALL_STATE(21)] = 1418,
  [SMALL_STATE(22)] = 1444,
  [SMALL_STATE(23)] = 1468,
  [SMALL_STATE(24)] = 1495,
  [SMALL_STATE(25)] = 1518,
  [SMALL_STATE(26)] = 1538,
  [SMALL_STATE(27)] = 1558,
  [SMALL_STATE(28)] = 1578,
  [SMALL_STATE(29)] = 1598,
  [SMALL_STATE(30)] = 1618,
  [SMALL_STATE(31)] = 1638,
  [SMALL_STATE(32)] = 1658,
  [SMALL_STATE(33)] = 1678,
  [SMALL_STATE(34)] = 1698,
  [SMALL_STATE(35)] = 1718,
  [SMALL_STATE(36)] = 1738,
  [SMALL_STATE(37)] = 1758,
  [SMALL_STATE(38)] = 1778,
  [SMALL_STATE(39)] = 1798,
  [SMALL_STATE(40)] = 1818,
  [SMALL_STATE(41)] = 1838,
  [SMALL_STATE(42)] = 1858,
  [SMALL_STATE(43)] = 1878,
  [SMALL_STATE(44)] = 1898,
  [SMALL_STATE(45)] = 1918,
  [SMALL_STATE(46)] = 1938,
  [SMALL_STATE(47)] = 1958,
  [SMALL_STATE(48)] = 1978,
  [SMALL_STATE(49)] = 1998,
  [SMALL_STATE(50)] = 2018,
  [SMALL_STATE(51)] = 2038,
  [SMALL_STATE(52)] = 2058,
  [SMALL_STATE(53)] = 2078,
  [SMALL_STATE(54)] = 2098,
  [SMALL_STATE(55)] = 2118,
  [SMALL_STATE(56)] = 2138,
  [SMALL_STATE(57)] = 2158,
  [SMALL_STATE(58)] = 2178,
  [SMALL_STATE(59)] = 2198,
  [SMALL_STATE(60)] = 2218,
  [SMALL_STATE(61)] = 2238,
  [SMALL_STATE(62)] = 2258,
  [SMALL_STATE(63)] = 2278,
  [SMALL_STATE(64)] = 2298,
  [SMALL_STATE(65)] = 2318,
  [SMALL_STATE(66)] = 2338,
  [SMALL_STATE(67)] = 2357,
  [SMALL_STATE(68)] = 2373,
  [SMALL_STATE(69)] = 2389,
  [SMALL_STATE(70)] = 2417,
  [SMALL_STATE(71)] = 2431,
  [SMALL_STATE(72)] = 2445,
  [SMALL_STATE(73)] = 2459,
  [SMALL_STATE(74)] = 2474,
  [SMALL_STATE(75)] = 2489,
  [SMALL_STATE(76)] = 2504,
  [SMALL_STATE(77)] = 2518,
  [SMALL_STATE(78)] = 2530,
  [SMALL_STATE(79)] = 2542,
  [SMALL_STATE(80)] = 2555,
  [SMALL_STATE(81)] = 2568,
  [SMALL_STATE(82)] = 2579,
  [SMALL_STATE(83)] = 2588,
  [SMALL_STATE(84)] = 2596,
  [SMALL_STATE(85)] = 2606,
  [SMALL_STATE(86)] = 2616,
  [SMALL_STATE(87)] = 2626,
  [SMALL_STATE(88)] = 2634,
  [SMALL_STATE(89)] = 2644,
  [SMALL_STATE(90)] = 2654,
  [SMALL_STATE(91)] = 2662,
  [SMALL_STATE(92)] = 2672,
  [SMALL_STATE(93)] = 2679,
  [SMALL_STATE(94)] = 2686,
  [SMALL_STATE(95)] = 2693,
  [SMALL_STATE(96)] = 2700,
  [SMALL_STATE(97)] = 2707,
  [SMALL_STATE(98)] = 2714,
  [SMALL_STATE(99)] = 2721,
  [SMALL_STATE(100)] = 2728,
  [SMALL_STATE(101)] = 2735,
  [SMALL_STATE(102)] = 2742,
  [SMALL_STATE(103)] = 2749,
  [SMALL_STATE(104)] = 2756,
  [SMALL_STATE(105)] = 2761,
  [SMALL_STATE(106)] = 2768,
  [SMALL_STATE(107)] = 2775,
  [SMALL_STATE(108)] = 2782,
  [SMALL_STATE(109)] = 2787,
  [SMALL_STATE(110)] = 2794,
  [SMALL_STATE(111)] = 2801,
  [SMALL_STATE(112)] = 2806,
  [SMALL_STATE(113)] = 2813,
  [SMALL_STATE(114)] = 2820,
  [SMALL_STATE(115)] = 2827,
  [SMALL_STATE(116)] = 2834,
  [SMALL_STATE(117)] = 2841,
  [SMALL_STATE(118)] = 2848,
  [SMALL_STATE(119)] = 2855,
  [SMALL_STATE(120)] = 2860,
  [SMALL_STATE(121)] = 2867,
  [SMALL_STATE(122)] = 2874,
  [SMALL_STATE(123)] = 2881,
  [SMALL_STATE(124)] = 2888,
  [SMALL_STATE(125)] = 2895,
  [SMALL_STATE(126)] = 2902,
  [SMALL_STATE(127)] = 2909,
  [SMALL_STATE(128)] = 2913,
  [SMALL_STATE(129)] = 2917,
  [SMALL_STATE(130)] = 2921,
  [SMALL_STATE(131)] = 2925,
  [SMALL_STATE(132)] = 2929,
  [SMALL_STATE(133)] = 2933,
  [SMALL_STATE(134)] = 2937,
  [SMALL_STATE(135)] = 2941,
  [SMALL_STATE(136)] = 2945,
  [SMALL_STATE(137)] = 2949,
  [SMALL_STATE(138)] = 2953,
  [SMALL_STATE(139)] = 2957,
  [SMALL_STATE(140)] = 2961,
  [SMALL_STATE(141)] = 2965,
  [SMALL_STATE(142)] = 2969,
  [SMALL_STATE(143)] = 2973,
  [SMALL_STATE(144)] = 2977,
  [SMALL_STATE(145)] = 2981,
  [SMALL_STATE(146)] = 2985,
  [SMALL_STATE(147)] = 2989,
  [SMALL_STATE(148)] = 2993,
  [SMALL_STATE(149)] = 2997,
  [SMALL_STATE(150)] = 3001,
  [SMALL_STATE(151)] = 3005,
  [SMALL_STATE(152)] = 3009,
  [SMALL_STATE(153)] = 3013,
  [SMALL_STATE(154)] = 3017,
  [SMALL_STATE(155)] = 3021,
  [SMALL_STATE(156)] = 3025,
  [SMALL_STATE(157)] = 3029,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__braces_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [30] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__braces_repeat1, 2, 0, 0),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__braces_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__braces_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__braces_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__braces_repeat1, 2, 0, 0), SHIFT_REPEAT(91),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__braces_repeat1, 2, 0, 0), SHIFT_REPEAT(97),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__braces_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__braces_repeat1, 2, 0, 0), SHIFT_REPEAT(102),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__braces_repeat1, 2, 0, 0), SHIFT_REPEAT(105),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__braces_repeat1, 2, 0, 0), SHIFT_REPEAT(87),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__braces_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(91),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(97),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(102),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(105),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(87),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [121] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__arg_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__arg_repeat1, 2, 0, 0),
  [126] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__arg_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [129] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__arg_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [132] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__arg_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [135] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__arg_repeat1, 2, 0, 0), SHIFT_REPEAT(91),
  [138] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__arg_repeat1, 2, 0, 0), SHIFT_REPEAT(97),
  [141] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__arg_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [144] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__arg_repeat1, 2, 0, 0), SHIFT_REPEAT(102),
  [147] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__arg_repeat1, 2, 0, 0), SHIFT_REPEAT(105),
  [150] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__arg_repeat1, 2, 0, 0), SHIFT_REPEAT(87),
  [153] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__arg_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ident, 2, 0, 0),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ident, 2, 0, 0),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ident_repeat1, 2, 0, 0),
  [246] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ident_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ident_repeat1, 2, 0, 0),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ident, 3, 0, 0),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ident, 3, 0, 0),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ident_with_method_calls_repeat1, 2, 0, 0),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ident_with_method_calls_repeat1, 2, 0, 0),
  [259] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ident_with_method_calls_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [262] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ident_with_method_calls_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ident_with_method_calls, 4, 0, 0),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ident_with_method_calls, 4, 0, 0),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__arg, 3, 0, 0),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__arg, 3, 0, 0),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 5, 0, 0),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_export, 5, 0, 0),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_patch, 9, 0, 7),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_patch, 9, 0, 7),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 8, 0, 6),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 8, 0, 6),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subtree, 6, 0, 0),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subtree, 6, 0, 0),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_markdown_link, 6, 0, 5),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_markdown_link, 6, 0, 5),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__txt_arg, 3, 0, 0),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__txt_arg, 3, 0, 0),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transclude, 5, 0, 4),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transclude, 5, 0, 4),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 5, 0, 0),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import, 5, 0, 0),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fun_spec, 3, 0, 3),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fun_spec, 3, 0, 3),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_put, 4, 0, 2),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_put, 4, 0, 2),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fun_spec, 2, 0, 1),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fun_spec, 2, 0, 1),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unlabeled_link, 3, 0, 0),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unlabeled_link, 3, 0, 0),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_xmlns, 3, 0, 0),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_xmlns, 3, 0, 0),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_tag, 3, 0, 0),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_tag, 3, 0, 0),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pre, 3, 0, 0),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pre, 3, 0, 0),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_blockquote, 3, 0, 0),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_blockquote, 3, 0, 0),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 3, 0, 0),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 3, 0, 0),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ol, 3, 0, 0),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ol, 3, 0, 0),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ul, 3, 0, 0),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ul, 3, 0, 0),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_li, 3, 0, 0),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_li, 3, 0, 0),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_strong, 3, 0, 0),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_strong, 3, 0, 0),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_em, 3, 0, 0),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_em, 3, 0, 0),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_p, 3, 0, 0),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_p, 3, 0, 0),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 3, 0, 0),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 3, 0, 0),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_math, 2, 0, 0),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_math, 2, 0, 0),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_display_math, 2, 0, 0),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_display_math, 2, 0, 0),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_tree, 3, 0, 0),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_tree, 3, 0, 0),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 3, 0, 0),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_open, 3, 0, 0),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__braces, 3, 0, 0),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__braces, 3, 0, 0),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_get, 3, 0, 0),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_get, 3, 0, 0),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__squares, 3, 0, 0),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__squares, 3, 0, 0),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parens, 3, 0, 0),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__parens, 3, 0, 0),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subtree, 3, 0, 0),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subtree, 3, 0, 0),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def, 3, 0, 0),
  [407] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_def, 3, 0, 0),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scope, 3, 0, 0),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scope, 3, 0, 0),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alloc, 3, 0, 0),
  [415] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alloc, 3, 0, 0),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tex, 3, 0, 0),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tex, 3, 0, 0),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let, 3, 0, 0),
  [423] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let, 3, 0, 0),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace, 3, 0, 0),
  [427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace, 3, 0, 0),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__node, 1, 0, 0),
  [431] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__node, 1, 0, 0),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xml_base_ident, 2, 0, 0),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__xml_base_ident_repeat1, 2, 0, 0),
  [459] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__xml_base_ident_repeat1, 2, 0, 0), SHIFT_REPEAT(71),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xml_base_ident, 1, 0, 0),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [466] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [468] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [472] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_object_repeat1, 2, 0, 0),
  [474] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_repeat1, 2, 0, 0), SHIFT_REPEAT(137),
  [477] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2, 0, 0), SHIFT_REPEAT(74),
  [480] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [492] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ident_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [495] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_decl, 4, 0, 8),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_decl, 4, 0, 8),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fun_spec_repeat1, 2, 0, 0),
  [501] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fun_spec_repeat1, 2, 0, 0), SHIFT_REPEAT(157),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [510] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_addr, 1, 0, 0),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fun_spec_repeat1, 3, 0, 0),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xml_qname, 1, 0, 0),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xml_qname, 3, 0, 0),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [576] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
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
