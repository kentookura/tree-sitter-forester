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
#define STATE_COUNT 168
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 124
#define ALIAS_COUNT 1
#define TOKEN_COUNT 61
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 12
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 10

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
  sym_id = 105,
  sym_prefix = 106,
  sym_markdown_link = 107,
  sym_unlabeled_link = 108,
  sym_external_link = 109,
  sym__whitespace = 110,
  sym__txt_arg = 111,
  sym__xml_base_ident = 112,
  sym__xml_qname = 113,
  aux_sym_source_file_repeat1 = 114,
  aux_sym__braces_repeat1 = 115,
  aux_sym_object_repeat1 = 116,
  aux_sym_fun_spec_repeat1 = 117,
  aux_sym_ident_repeat1 = 118,
  aux_sym_ident_with_method_calls_repeat1 = 119,
  aux_sym__arg_repeat1 = 120,
  aux_sym_id_repeat1 = 121,
  aux_sym_prefix_repeat1 = 122,
  aux_sym__xml_base_ident_repeat1 = 123,
  alias_sym_method_body = 124,
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
  [sym_p] = "paragraph",
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
  [sym_id] = "id",
  [sym_prefix] = "prefix",
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
  [aux_sym_id_repeat1] = "id_repeat1",
  [aux_sym_prefix_repeat1] = "prefix_repeat1",
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
  [sym_id] = sym_id,
  [sym_prefix] = sym_prefix,
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
  [aux_sym_id_repeat1] = aux_sym_id_repeat1,
  [aux_sym_prefix_repeat1] = aux_sym_prefix_repeat1,
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
  [aux_sym_id_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_prefix_repeat1] = {
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
  field_id = 5,
  field_identifier = 6,
  field_key = 7,
  field_label = 8,
  field_object = 9,
  field_prefix = 10,
  field_self = 11,
  field_value = 12,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_address] = "address",
  [field_argument] = "argument",
  [field_binder] = "binder",
  [field_dest] = "dest",
  [field_id] = "id",
  [field_identifier] = "identifier",
  [field_key] = "key",
  [field_label] = "label",
  [field_object] = "object",
  [field_prefix] = "prefix",
  [field_self] = "self",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 2},
  [3] = {.index = 4, .length = 2},
  [4] = {.index = 6, .length = 3},
  [5] = {.index = 9, .length = 1},
  [6] = {.index = 10, .length = 6},
  [7] = {.index = 16, .length = 3},
  [8] = {.index = 19, .length = 4},
  [9] = {.index = 23, .length = 4},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_argument, 1},
    {field_identifier, 0},
  [2] =
    {field_argument, 3},
    {field_identifier, 2},
  [4] =
    {field_id, 2},
    {field_prefix, 0},
  [6] =
    {field_argument, 2},
    {field_binder, 1},
    {field_identifier, 0},
  [9] =
    {field_address, 3},
  [10] =
    {field_dest, 3},
    {field_dest, 4},
    {field_dest, 5},
    {field_label, 0},
    {field_label, 1},
    {field_label, 2},
  [16] =
    {field_self, 2},
    {field_self, 3},
    {field_self, 4},
  [19] =
    {field_object, 2},
    {field_self, 3},
    {field_self, 4},
    {field_self, 5},
  [23] =
    {field_key, 0},
    {field_key, 1},
    {field_key, 2},
    {field_value, 3},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [9] = {
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
  [8] = 8,
  [9] = 4,
  [10] = 4,
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
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 71,
  [80] = 70,
  [81] = 78,
  [82] = 82,
  [83] = 19,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 22,
  [90] = 21,
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
  [102] = 30,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 30,
  [113] = 37,
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
  [157] = 103,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 152,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 158,
  [167] = 167,
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
      if (eof) ADVANCE(38);
      ADVANCE_MAP(
        '#', 98,
        '%', 97,
        '(', 45,
        ')', 46,
        '-', 53,
        '/', 329,
        ':', 330,
        '>', 57,
        '[', 43,
        '\\', 48,
        ']', 44,
        '_', 129,
        'a', 186,
        'b', 179,
        'c', 138,
        'd', 136,
        'e', 187,
        'g', 165,
        'i', 189,
        'l', 166,
        'm', 168,
        'n', 135,
        'o', 140,
        'p', 102,
        'q', 235,
        'r', 163,
        's', 145,
        't', 133,
        'u', 180,
        '{', 40,
        '}', 41,
      );
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(59);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(60);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 1:
      if (lookahead == '#') ADVANCE(98);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(1);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(326);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(328);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        ')', 46,
        '-', 53,
        '[', 42,
        '\\', 47,
        ']', 8,
        'b', 21,
        'c', 26,
        'e', 23,
        'l', 16,
        'o', 19,
        'p', 103,
        's', 33,
        'u', 20,
        '{', 40,
        '}', 41,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      END_STATE();
    case 3:
      if (lookahead == ')') ADVANCE(46);
      if (lookahead == '-') ADVANCE(53);
      if (lookahead == ']') ADVANCE(8);
      if (lookahead == '_') ADVANCE(129);
      if (lookahead == '}') ADVANCE(41);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(242);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(53);
      if (lookahead == ']') ADVANCE(44);
      if (lookahead == '_') ADVANCE(129);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(242);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 5:
      if (lookahead == ':') ADVANCE(330);
      if (lookahead == '>') ADVANCE(57);
      if (lookahead == '{') ADVANCE(39);
      if (lookahead == '#' ||
          lookahead == '-' ||
          lookahead == '/') ADVANCE(329);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(242);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 6:
      if (lookahead == ':') ADVANCE(58);
      END_STATE();
    case 7:
      if (lookahead == '[') ADVANCE(42);
      if (lookahead == '}') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(132);
      if (('\n' <= lookahead && lookahead <= '\r')) SKIP(7);
      END_STATE();
    case 8:
      if (lookahead == ']') ADVANCE(131);
      END_STATE();
    case 9:
      ADVANCE_MAP(
        'a', 286,
        'b', 280,
        'c', 247,
        'd', 259,
        'e', 287,
        'g', 260,
        'i', 289,
        'l', 271,
        'n', 244,
        'o', 248,
        'p', 101,
        'q', 321,
        's', 253,
        't', 261,
        'u', 281,
      );
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(9);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(243);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '%' &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(328);
      END_STATE();
    case 10:
      if (lookahead == 'c') ADVANCE(17);
      END_STATE();
    case 11:
      if (lookahead == 'd') ADVANCE(13);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(125);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(122);
      END_STATE();
    case 15:
      if (lookahead == 'g') ADVANCE(107);
      END_STATE();
    case 16:
      if (lookahead == 'i') ADVANCE(110);
      END_STATE();
    case 17:
      if (lookahead == 'k') ADVANCE(30);
      END_STATE();
    case 18:
      if (lookahead == 'l') ADVANCE(24);
      END_STATE();
    case 19:
      if (lookahead == 'l') ADVANCE(116);
      END_STATE();
    case 20:
      if (lookahead == 'l') ADVANCE(113);
      END_STATE();
    case 21:
      if (lookahead == 'l') ADVANCE(27);
      END_STATE();
    case 22:
      if (lookahead == 'm') ADVANCE(18);
      END_STATE();
    case 23:
      if (lookahead == 'm') ADVANCE(104);
      END_STATE();
    case 24:
      if (lookahead == 'n') ADVANCE(32);
      END_STATE();
    case 25:
      if (lookahead == 'n') ADVANCE(15);
      END_STATE();
    case 26:
      if (lookahead == 'o') ADVANCE(11);
      END_STATE();
    case 27:
      if (lookahead == 'o') ADVANCE(10);
      END_STATE();
    case 28:
      if (lookahead == 'o') ADVANCE(25);
      END_STATE();
    case 29:
      if (lookahead == 'o') ADVANCE(34);
      END_STATE();
    case 30:
      if (lookahead == 'q') ADVANCE(35);
      END_STATE();
    case 31:
      if (lookahead == 'r') ADVANCE(28);
      END_STATE();
    case 32:
      if (lookahead == 's') ADVANCE(6);
      END_STATE();
    case 33:
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 34:
      if (lookahead == 't') ADVANCE(14);
      END_STATE();
    case 35:
      if (lookahead == 'u') ADVANCE(29);
      END_STATE();
    case 36:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(36);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(327);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '%' &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < 'A' || ']' < lookahead) &&
          (lookahead < 'a' || '{' < lookahead) &&
          lookahead != '}') ADVANCE(328);
      END_STATE();
    case 37:
      if (eof) ADVANCE(38);
      ADVANCE_MAP(
        '#', 99,
        '%', 97,
        '(', 45,
        ')', 46,
        '[', 43,
        '\\', 48,
        ']', 44,
        '{', 40,
        '}', 41,
      );
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(37);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(326);
      if (lookahead != 0) ADVANCE(328);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '}') ADVANCE(128);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '[') ADVANCE(130);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '<') ADVANCE(56);
      if (lookahead == 'x') ADVANCE(22);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_title);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_author);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_contributor);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_date);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_tag);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_ref);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_BSLASH_LT);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_BSLASHxmlns_COLON);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_day_token1);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_day_token2);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_def);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_def);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(328);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_alloc);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_alloc);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(328);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_taxon);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_meta);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_import);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_import);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(328);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_export);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_export);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(328);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_namespace);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_namespace);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(328);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_transclude);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_transclude);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(328);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_let);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_let);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(328);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_tex);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_tex);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(328);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_scope);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_scope);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(328);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_subtree);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_subtree);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(328);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_put);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_put);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(328);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_get);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_get);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(328);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_open);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_open);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(328);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_query);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_query);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(328);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_object);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_object);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(328);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_patch);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_patch);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(328);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_call);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_call);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(328);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(97);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '#') ADVANCE(100);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_POUND_POUND);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_p);
      if (lookahead == 'a') ADVANCE(318);
      if (lookahead == 'r') ADVANCE(263);
      if (lookahead == 'u') ADVANCE(314);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(328);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_p);
      if (lookahead == 'a') ADVANCE(226);
      if (lookahead == 'r') ADVANCE(153);
      if (lookahead == 'u') ADVANCE(222);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_p);
      if (lookahead == 'r') ADVANCE(12);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_em);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_em);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_em);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(328);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_strong);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_strong);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_strong);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(328);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_li);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_li);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_li);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(328);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_ul);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_ul);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_ul);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(328);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_ol);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_ol);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_ol);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(328);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_code);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_code);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_code);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(328);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_blockquote);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_blockquote);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_blockquote);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(328);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_pre);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_pre);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_pre);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(328);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_LBRACE_RBRACE);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_LBRACK_LBRACK);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_RBRACK_RBRACK);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(132);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'a') ADVANCE(172);
      if (lookahead == 'e') ADVANCE(238);
      if (lookahead == 'i') ADVANCE(229);
      if (lookahead == 'r') ADVANCE(137);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'a') ADVANCE(66);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'a') ADVANCE(188);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'a') ADVANCE(231);
      if (lookahead == 'e') ADVANCE(170);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'a') ADVANCE(193);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'a') ADVANCE(182);
      if (lookahead == 'o') ADVANCE(150);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'a') ADVANCE(149);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'b') ADVANCE(177);
      if (lookahead == 'l') ADVANCE(117);
      if (lookahead == 'p') ADVANCE(152);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'b') ADVANCE(237);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'b') ADVANCE(230);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'c') ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'c') ADVANCE(63);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'c') ADVANCE(195);
      if (lookahead == 't') ADVANCE(213);
      if (lookahead == 'u') ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'c') ADVANCE(174);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'c') ADVANCE(183);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'c') ADVANCE(225);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'c') ADVANCE(160);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'd') ADVANCE(154);
      if (lookahead == 'n') ADVANCE(228);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'd') ADVANCE(162);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(190);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(126);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(120);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(52);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(217);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(79);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(81);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(71);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(73);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(209);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(220);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(221);
      if (lookahead == 'i') ADVANCE(111);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(227);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(159);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'f') ADVANCE(61);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'f') ADVANCE(55);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'g') ADVANCE(54);
      if (lookahead == 'x') ADVANCE(199);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'g') ADVANCE(108);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'h') ADVANCE(93);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'h') ADVANCE(200);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'i') ADVANCE(141);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'j') ADVANCE(167);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'k') ADVANCE(208);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'l') ADVANCE(194);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'l') ADVANCE(114);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'l') ADVANCE(95);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'l') ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'l') ADVANCE(234);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'l') ADVANCE(158);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'l') ADVANCE(196);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'l') ADVANCE(185);
      if (lookahead == 'u') ADVANCE(219);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'm') ADVANCE(105);
      if (lookahead == 'x') ADVANCE(204);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'm') ADVANCE(156);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'm') ADVANCE(207);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'n') ADVANCE(87);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'n') ADVANCE(173);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'n') ADVANCE(65);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'n') ADVANCE(218);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'o') ADVANCE(143);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'o') ADVANCE(206);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'o') ADVANCE(144);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'o') ADVANCE(191);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'o') ADVANCE(214);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'o') ADVANCE(192);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'o') ADVANCE(211);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'o') ADVANCE(212);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'o') ADVANCE(232);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'o') ADVANCE(216);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'p') ADVANCE(198);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'p') ADVANCE(139);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'p') ADVANCE(157);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'p') ADVANCE(203);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'q') ADVANCE(236);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'r') ADVANCE(239);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'r') ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'r') ADVANCE(50);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'r') ADVANCE(51);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'r') ADVANCE(197);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'r') ADVANCE(223);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'r') ADVANCE(169);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'r') ADVANCE(224);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 's') ADVANCE(205);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 's') ADVANCE(147);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 't') ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 't') ADVANCE(85);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 't') ADVANCE(75);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 't') ADVANCE(83);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 't') ADVANCE(69);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 't') ADVANCE(67);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 't') ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 't') ADVANCE(146);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 't') ADVANCE(134);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 't') ADVANCE(210);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 't') ADVANCE(184);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 't') ADVANCE(215);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 't') ADVANCE(155);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 't') ADVANCE(161);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 't') ADVANCE(201);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'u') ADVANCE(151);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'u') ADVANCE(164);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'u') ADVANCE(202);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'u') ADVANCE(233);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'x') ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'y') ADVANCE(89);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym__alpha);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym__alpha);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(328);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym__digit);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(242);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_text);
      ADVANCE_MAP(
        'a', 286,
        'b', 280,
        'c', 247,
        'd', 259,
        'e', 287,
        'g', 260,
        'i', 289,
        'l', 271,
        'n', 244,
        'o', 248,
        'p', 101,
        'q', 321,
        's', 253,
        't', 261,
        'u', 281,
        '\t', 243,
        0x0b, 243,
        '\f', 243,
        ' ', 243,
      );
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(328);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a') ADVANCE(288);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(328);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a') ADVANCE(292);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(328);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a') ADVANCE(256);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(328);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a') ADVANCE(284);
      if (lookahead == 'o') ADVANCE(257);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(328);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'b') ADVANCE(278);
      if (lookahead == 'l') ADVANCE(118);
      if (lookahead == 'p') ADVANCE(262);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(328);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'b') ADVANCE(319);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(328);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'c') ADVANCE(279);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(328);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'c') ADVANCE(277);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(328);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'c') ADVANCE(64);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(328);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'c') ADVANCE(294);
      if (lookahead == 't') ADVANCE(306);
      if (lookahead == 'u') ADVANCE(249);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(328);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'c') ADVANCE(283);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(328);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'c') ADVANCE(317);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(328);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'c') ADVANCE(268);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(328);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'd') ADVANCE(264);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(328);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'd') ADVANCE(270);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(328);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(275);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(328);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(312);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(328);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(324);
      if (lookahead == 'r') ADVANCE(245);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(328);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(290);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(328);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(127);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(328);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(121);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(328);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(310);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(328);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(80);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(328);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(82);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(328);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(72);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(328);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(124);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(328);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(74);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(328);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(313);
      if (lookahead == 'i') ADVANCE(112);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(328);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(305);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(328);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(255);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(328);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(267);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(328);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'f') ADVANCE(62);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(328);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'g') ADVANCE(109);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(328);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'h') ADVANCE(94);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(328);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'j') ADVANCE(273);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(328);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'k') ADVANCE(304);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(328);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l') ADVANCE(293);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(328);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l') ADVANCE(115);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(328);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l') ADVANCE(96);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(328);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l') ADVANCE(323);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(328);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l') ADVANCE(282);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(328);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l') ADVANCE(296);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(328);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l') ADVANCE(285);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(328);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'm') ADVANCE(106);
      if (lookahead == 'x') ADVANCE(301);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(328);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'm') ADVANCE(265);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(328);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'm') ADVANCE(303);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(328);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'n') ADVANCE(88);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(328);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'n') ADVANCE(276);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(328);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'n') ADVANCE(311);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(328);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'o') ADVANCE(250);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(328);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'o') ADVANCE(302);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(328);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'o') ADVANCE(307);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(328);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'o') ADVANCE(252);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(328);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'o') ADVANCE(291);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(328);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'o') ADVANCE(320);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(328);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'o') ADVANCE(308);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(328);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'p') ADVANCE(246);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(328);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'p') ADVANCE(295);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(328);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'p') ADVANCE(266);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(328);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'p') ADVANCE(299);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(328);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'q') ADVANCE(322);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(328);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r') ADVANCE(325);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(328);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r') ADVANCE(297);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(328);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r') ADVANCE(315);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(328);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r') ADVANCE(316);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(328);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r') ADVANCE(274);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(328);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 's') ADVANCE(300);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(328);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 's') ADVANCE(254);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(328);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't') ADVANCE(86);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(328);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't') ADVANCE(76);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(328);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't') ADVANCE(84);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(328);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't') ADVANCE(70);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(328);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't') ADVANCE(68);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(328);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't') ADVANCE(92);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(328);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't') ADVANCE(251);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(328);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't') ADVANCE(309);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(328);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't') ADVANCE(269);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(328);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'u') ADVANCE(272);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(328);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'u') ADVANCE(298);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(328);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'u') ADVANCE(258);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(328);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'x') ADVANCE(78);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(328);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'y') ADVANCE(90);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(328);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(326);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(328);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(327);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(328);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_text);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(328);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym__xml_base_ident_token1);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 37},
  [2] = {.lex_state = 37},
  [3] = {.lex_state = 37},
  [4] = {.lex_state = 37},
  [5] = {.lex_state = 37},
  [6] = {.lex_state = 37},
  [7] = {.lex_state = 37},
  [8] = {.lex_state = 37},
  [9] = {.lex_state = 37},
  [10] = {.lex_state = 37},
  [11] = {.lex_state = 37},
  [12] = {.lex_state = 37},
  [13] = {.lex_state = 37},
  [14] = {.lex_state = 37},
  [15] = {.lex_state = 37},
  [16] = {.lex_state = 37},
  [17] = {.lex_state = 37},
  [18] = {.lex_state = 9},
  [19] = {.lex_state = 37},
  [20] = {.lex_state = 37},
  [21] = {.lex_state = 37},
  [22] = {.lex_state = 37},
  [23] = {.lex_state = 37},
  [24] = {.lex_state = 37},
  [25] = {.lex_state = 37},
  [26] = {.lex_state = 37},
  [27] = {.lex_state = 37},
  [28] = {.lex_state = 37},
  [29] = {.lex_state = 37},
  [30] = {.lex_state = 37},
  [31] = {.lex_state = 37},
  [32] = {.lex_state = 37},
  [33] = {.lex_state = 37},
  [34] = {.lex_state = 37},
  [35] = {.lex_state = 37},
  [36] = {.lex_state = 37},
  [37] = {.lex_state = 37},
  [38] = {.lex_state = 37},
  [39] = {.lex_state = 37},
  [40] = {.lex_state = 37},
  [41] = {.lex_state = 37},
  [42] = {.lex_state = 37},
  [43] = {.lex_state = 37},
  [44] = {.lex_state = 37},
  [45] = {.lex_state = 37},
  [46] = {.lex_state = 37},
  [47] = {.lex_state = 37},
  [48] = {.lex_state = 37},
  [49] = {.lex_state = 37},
  [50] = {.lex_state = 37},
  [51] = {.lex_state = 37},
  [52] = {.lex_state = 37},
  [53] = {.lex_state = 37},
  [54] = {.lex_state = 37},
  [55] = {.lex_state = 37},
  [56] = {.lex_state = 37},
  [57] = {.lex_state = 37},
  [58] = {.lex_state = 37},
  [59] = {.lex_state = 37},
  [60] = {.lex_state = 37},
  [61] = {.lex_state = 37},
  [62] = {.lex_state = 37},
  [63] = {.lex_state = 37},
  [64] = {.lex_state = 37},
  [65] = {.lex_state = 37},
  [66] = {.lex_state = 37},
  [67] = {.lex_state = 2},
  [68] = {.lex_state = 2},
  [69] = {.lex_state = 2},
  [70] = {.lex_state = 3},
  [71] = {.lex_state = 3},
  [72] = {.lex_state = 5},
  [73] = {.lex_state = 5},
  [74] = {.lex_state = 5},
  [75] = {.lex_state = 7},
  [76] = {.lex_state = 7},
  [77] = {.lex_state = 36},
  [78] = {.lex_state = 3},
  [79] = {.lex_state = 4},
  [80] = {.lex_state = 4},
  [81] = {.lex_state = 3},
  [82] = {.lex_state = 7},
  [83] = {.lex_state = 2},
  [84] = {.lex_state = 36},
  [85] = {.lex_state = 7},
  [86] = {.lex_state = 7},
  [87] = {.lex_state = 3},
  [88] = {.lex_state = 2},
  [89] = {.lex_state = 2},
  [90] = {.lex_state = 2},
  [91] = {.lex_state = 3},
  [92] = {.lex_state = 3},
  [93] = {.lex_state = 3},
  [94] = {.lex_state = 2},
  [95] = {.lex_state = 2},
  [96] = {.lex_state = 3},
  [97] = {.lex_state = 1},
  [98] = {.lex_state = 3},
  [99] = {.lex_state = 2},
  [100] = {.lex_state = 2},
  [101] = {.lex_state = 2},
  [102] = {.lex_state = 7},
  [103] = {.lex_state = 2},
  [104] = {.lex_state = 3},
  [105] = {.lex_state = 7},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 2},
  [108] = {.lex_state = 3},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 2},
  [113] = {.lex_state = 2},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 2},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 2},
  [121] = {.lex_state = 2},
  [122] = {.lex_state = 2},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 3},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 37},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 37},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 37},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 37},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 2},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 37},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 37},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 2},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 2},
  [159] = {.lex_state = 2},
  [160] = {.lex_state = 2},
  [161] = {.lex_state = 37},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 2},
  [167] = {.lex_state = 0},
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
    [sym_source_file] = STATE(154),
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
      aux_sym_source_file_repeat1,
  [164] = 13,
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
    ACTIONS(68), 1,
      anon_sym_RBRACE,
    ACTIONS(70), 1,
      sym_comment,
    ACTIONS(72), 1,
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
  [245] = 13,
    ACTIONS(74), 1,
      anon_sym_LBRACE,
    ACTIONS(77), 1,
      anon_sym_RBRACE,
    ACTIONS(79), 1,
      anon_sym_LBRACK,
    ACTIONS(82), 1,
      anon_sym_LPAREN,
    ACTIONS(85), 1,
      anon_sym_BSLASH,
    ACTIONS(88), 1,
      anon_sym_BSLASH_LT,
    ACTIONS(91), 1,
      anon_sym_BSLASHxmlns_COLON,
    ACTIONS(94), 1,
      sym_comment,
    ACTIONS(97), 1,
      anon_sym_POUND,
    ACTIONS(100), 1,
      anon_sym_POUND_POUND,
    ACTIONS(103), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(106), 1,
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
    ACTIONS(117), 1,
      ts_builtin_sym_end,
    ACTIONS(119), 1,
      anon_sym_LBRACE,
    ACTIONS(122), 1,
      anon_sym_LBRACK,
    ACTIONS(125), 1,
      anon_sym_LPAREN,
    ACTIONS(128), 1,
      anon_sym_BSLASH,
    ACTIONS(131), 1,
      anon_sym_BSLASH_LT,
    ACTIONS(134), 1,
      anon_sym_BSLASHxmlns_COLON,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(140), 1,
      anon_sym_POUND,
    ACTIONS(143), 1,
      anon_sym_POUND_POUND,
    ACTIONS(146), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(149), 1,
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
      aux_sym_source_file_repeat1,
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
    ACTIONS(70), 1,
      sym_comment,
    ACTIONS(72), 1,
      sym_text,
    ACTIONS(152), 1,
      anon_sym_RBRACE,
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
    ACTIONS(70), 1,
      sym_comment,
    ACTIONS(72), 1,
      sym_text,
    ACTIONS(154), 1,
      anon_sym_RBRACE,
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
    STATE(21), 2,
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
    STATE(21), 2,
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
  [1418] = 3,
    ACTIONS(244), 2,
      ts_builtin_sym_end,
      sym_text,
    STATE(22), 2,
      sym__arg,
      aux_sym_ident_repeat1,
    ACTIONS(246), 13,
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
  [1442] = 4,
    ACTIONS(250), 1,
      anon_sym_LBRACE,
    ACTIONS(248), 2,
      ts_builtin_sym_end,
      sym_text,
    STATE(22), 2,
      sym__arg,
      aux_sym_ident_repeat1,
    ACTIONS(253), 12,
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
  [1468] = 3,
    STATE(24), 1,
      aux_sym_ident_with_method_calls_repeat1,
    ACTIONS(255), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(257), 13,
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
  [1491] = 5,
    ACTIONS(259), 1,
      ts_builtin_sym_end,
    ACTIONS(263), 1,
      anon_sym_POUND,
    ACTIONS(266), 1,
      sym_text,
    STATE(24), 1,
      aux_sym_ident_with_method_calls_repeat1,
    ACTIONS(261), 12,
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
    ACTIONS(244), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(246), 13,
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
  [1798] = 2,
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
  [1818] = 2,
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
    STATE(39), 10,
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
    STATE(38), 10,
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
      aux_sym_id_repeat1,
    ACTIONS(453), 3,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_RBRACK_RBRACK,
    ACTIONS(455), 4,
      anon_sym_DASH,
      anon_sym__,
      sym__alpha,
      sym__digit,
  [2432] = 3,
    STATE(71), 1,
      aux_sym_id_repeat1,
    ACTIONS(457), 3,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_RBRACK_RBRACK,
    ACTIONS(459), 4,
      anon_sym_DASH,
      anon_sym__,
      sym__alpha,
      sym__digit,
  [2447] = 3,
    STATE(74), 1,
      aux_sym__xml_base_ident_repeat1,
    ACTIONS(462), 3,
      anon_sym_LBRACE,
      anon_sym_GT,
      anon_sym_COLON,
    ACTIONS(464), 3,
      sym__alpha,
      sym__digit,
      aux_sym__xml_base_ident_token1,
  [2461] = 3,
    STATE(73), 1,
      aux_sym__xml_base_ident_repeat1,
    ACTIONS(466), 3,
      anon_sym_LBRACE,
      anon_sym_GT,
      anon_sym_COLON,
    ACTIONS(468), 3,
      sym__alpha,
      sym__digit,
      aux_sym__xml_base_ident_token1,
  [2475] = 3,
    STATE(73), 1,
      aux_sym__xml_base_ident_repeat1,
    ACTIONS(471), 3,
      anon_sym_LBRACE,
      anon_sym_GT,
      anon_sym_COLON,
    ACTIONS(473), 3,
      sym__alpha,
      sym__digit,
      aux_sym__xml_base_ident_token1,
  [2489] = 4,
    ACTIONS(475), 1,
      anon_sym_RBRACE,
    ACTIONS(477), 1,
      anon_sym_LBRACK,
    ACTIONS(480), 1,
      aux_sym__whitespace_token1,
    STATE(75), 3,
      sym_method_decl,
      sym__whitespace,
      aux_sym_object_repeat1,
  [2504] = 4,
    ACTIONS(483), 1,
      anon_sym_RBRACE,
    ACTIONS(485), 1,
      anon_sym_LBRACK,
    ACTIONS(487), 1,
      aux_sym__whitespace_token1,
    STATE(75), 3,
      sym_method_decl,
      sym__whitespace,
      aux_sym_object_repeat1,
  [2519] = 5,
    ACTIONS(489), 1,
      sym__alpha,
    ACTIONS(491), 1,
      sym_text,
    STATE(98), 1,
      aux_sym_prefix_repeat1,
    STATE(158), 1,
      sym_prefix,
    STATE(159), 2,
      sym_addr,
      sym_external_link,
  [2536] = 3,
    STATE(70), 1,
      aux_sym_id_repeat1,
    STATE(103), 1,
      sym_id,
    ACTIONS(493), 4,
      anon_sym_DASH,
      anon_sym__,
      sym__alpha,
      sym__digit,
  [2549] = 3,
    ACTIONS(457), 1,
      anon_sym_RBRACK,
    STATE(79), 1,
      aux_sym_id_repeat1,
    ACTIONS(495), 4,
      anon_sym_DASH,
      anon_sym__,
      sym__alpha,
      sym__digit,
  [2562] = 3,
    ACTIONS(453), 1,
      anon_sym_RBRACK,
    STATE(79), 1,
      aux_sym_id_repeat1,
    ACTIONS(498), 4,
      anon_sym_DASH,
      anon_sym__,
      sym__alpha,
      sym__digit,
  [2575] = 3,
    STATE(80), 1,
      aux_sym_id_repeat1,
    STATE(157), 1,
      sym_id,
    ACTIONS(500), 4,
      anon_sym_DASH,
      anon_sym__,
      sym__alpha,
      sym__digit,
  [2588] = 4,
    ACTIONS(485), 1,
      anon_sym_LBRACK,
    ACTIONS(487), 1,
      aux_sym__whitespace_token1,
    ACTIONS(502), 1,
      anon_sym_RBRACE,
    STATE(75), 3,
      sym_method_decl,
      sym__whitespace,
      aux_sym_object_repeat1,
  [2603] = 4,
    ACTIONS(236), 1,
      anon_sym_LBRACK,
    ACTIONS(238), 1,
      anon_sym_LBRACE,
    ACTIONS(504), 1,
      anon_sym_LBRACE_RBRACE,
    STATE(90), 2,
      sym__arg,
      aux_sym_ident_repeat1,
  [2617] = 5,
    ACTIONS(489), 1,
      sym__alpha,
    ACTIONS(506), 1,
      sym_text,
    STATE(98), 1,
      aux_sym_prefix_repeat1,
    STATE(144), 1,
      sym_addr,
    STATE(158), 1,
      sym_prefix,
  [2633] = 3,
    ACTIONS(485), 1,
      anon_sym_LBRACK,
    ACTIONS(508), 1,
      aux_sym__whitespace_token1,
    STATE(76), 3,
      sym_method_decl,
      sym__whitespace,
      aux_sym_object_repeat1,
  [2645] = 3,
    ACTIONS(485), 1,
      anon_sym_LBRACK,
    ACTIONS(510), 1,
      aux_sym__whitespace_token1,
    STATE(82), 3,
      sym_method_decl,
      sym__whitespace,
      aux_sym_object_repeat1,
  [2657] = 4,
    ACTIONS(512), 1,
      sym__alpha,
    STATE(98), 1,
      aux_sym_prefix_repeat1,
    STATE(162), 1,
      sym_addr,
    STATE(166), 1,
      sym_prefix,
  [2670] = 4,
    ACTIONS(514), 1,
      anon_sym_LBRACE,
    ACTIONS(516), 1,
      anon_sym_LBRACK,
    STATE(29), 1,
      sym__arg,
    STATE(100), 1,
      aux_sym_fun_spec_repeat1,
  [2683] = 3,
    ACTIONS(248), 1,
      anon_sym_LBRACK,
    ACTIONS(518), 1,
      anon_sym_LBRACE,
    STATE(89), 2,
      sym__arg,
      aux_sym_ident_repeat1,
  [2694] = 2,
    ACTIONS(244), 2,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
    STATE(89), 2,
      sym__arg,
      aux_sym_ident_repeat1,
  [2703] = 4,
    ACTIONS(512), 1,
      sym__alpha,
    STATE(98), 1,
      aux_sym_prefix_repeat1,
    STATE(158), 1,
      sym_prefix,
    STATE(164), 1,
      sym_addr,
  [2716] = 4,
    ACTIONS(512), 1,
      sym__alpha,
    STATE(98), 1,
      aux_sym_prefix_repeat1,
    STATE(158), 1,
      sym_prefix,
    STATE(165), 1,
      sym_addr,
  [2729] = 4,
    ACTIONS(512), 1,
      sym__alpha,
    STATE(98), 1,
      aux_sym_prefix_repeat1,
    STATE(158), 1,
      sym_prefix,
    STATE(167), 1,
      sym_addr,
  [2742] = 4,
    ACTIONS(514), 1,
      anon_sym_LBRACE,
    ACTIONS(516), 1,
      anon_sym_LBRACK,
    STATE(25), 1,
      sym__arg,
    STATE(88), 1,
      aux_sym_fun_spec_repeat1,
  [2755] = 3,
    ACTIONS(521), 1,
      anon_sym_BSLASH,
    STATE(62), 1,
      sym_fun_spec,
    STATE(94), 1,
      sym_ident,
  [2765] = 3,
    ACTIONS(523), 1,
      sym__alpha,
    STATE(117), 1,
      sym__xml_base_ident,
    STATE(163), 1,
      sym__xml_qname,
  [2775] = 3,
    ACTIONS(525), 1,
      anon_sym_POUND,
    ACTIONS(527), 1,
      sym_text,
    STATE(23), 1,
      aux_sym_ident_with_method_calls_repeat1,
  [2785] = 3,
    ACTIONS(529), 1,
      anon_sym_DASH,
    ACTIONS(531), 1,
      sym__alpha,
    STATE(104), 1,
      aux_sym_prefix_repeat1,
  [2795] = 3,
    ACTIONS(521), 1,
      anon_sym_BSLASH,
    STATE(44), 1,
      sym_fun_spec,
    STATE(94), 1,
      sym_ident,
  [2805] = 3,
    ACTIONS(533), 1,
      anon_sym_LBRACE,
    ACTIONS(535), 1,
      anon_sym_LBRACK,
    STATE(100), 1,
      aux_sym_fun_spec_repeat1,
  [2815] = 3,
    ACTIONS(514), 1,
      anon_sym_LBRACE,
    ACTIONS(538), 1,
      anon_sym_LBRACK,
    STATE(51), 1,
      sym__arg,
  [2825] = 2,
    ACTIONS(289), 1,
      aux_sym__whitespace_token1,
    ACTIONS(291), 2,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
  [2833] = 1,
    ACTIONS(540), 3,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_RBRACK_RBRACK,
  [2839] = 3,
    ACTIONS(542), 1,
      anon_sym_DASH,
    ACTIONS(544), 1,
      sym__alpha,
    STATE(104), 1,
      aux_sym_prefix_repeat1,
  [2849] = 2,
    ACTIONS(549), 1,
      aux_sym__whitespace_token1,
    ACTIONS(547), 2,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
  [2857] = 2,
    ACTIONS(514), 1,
      anon_sym_LBRACE,
    STATE(61), 1,
      sym__arg,
  [2864] = 1,
    ACTIONS(551), 2,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
  [2869] = 2,
    ACTIONS(523), 1,
      sym__alpha,
    STATE(111), 1,
      sym__xml_base_ident,
  [2876] = 2,
    ACTIONS(514), 1,
      anon_sym_LBRACE,
    STATE(49), 1,
      sym__arg,
  [2883] = 2,
    ACTIONS(514), 1,
      anon_sym_LBRACE,
    STATE(50), 1,
      sym__arg,
  [2890] = 2,
    ACTIONS(553), 1,
      anon_sym_LBRACE,
    STATE(34), 1,
      sym__txt_arg,
  [2897] = 1,
    ACTIONS(289), 2,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
  [2902] = 1,
    ACTIONS(244), 2,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
  [2907] = 2,
    ACTIONS(514), 1,
      anon_sym_LBRACE,
    STATE(31), 1,
      sym__arg,
  [2914] = 2,
    ACTIONS(514), 1,
      anon_sym_LBRACE,
    STATE(58), 1,
      sym__arg,
  [2921] = 2,
    ACTIONS(555), 1,
      anon_sym_BSLASH,
    STATE(54), 1,
      sym_ident,
  [2928] = 2,
    ACTIONS(557), 1,
      anon_sym_GT,
    ACTIONS(559), 1,
      anon_sym_COLON,
  [2935] = 2,
    ACTIONS(561), 1,
      anon_sym_LBRACE,
    STATE(105), 1,
      sym__arg,
  [2942] = 2,
    ACTIONS(514), 1,
      anon_sym_LBRACE,
    STATE(40), 1,
      sym__arg,
  [2949] = 2,
    ACTIONS(555), 1,
      anon_sym_BSLASH,
    STATE(53), 1,
      sym_ident,
  [2956] = 2,
    ACTIONS(521), 1,
      anon_sym_BSLASH,
    STATE(114), 1,
      sym_ident,
  [2963] = 2,
    ACTIONS(555), 1,
      anon_sym_BSLASH,
    STATE(64), 1,
      sym_ident,
  [2970] = 2,
    ACTIONS(514), 1,
      anon_sym_LBRACE,
    STATE(65), 1,
      sym__arg,
  [2977] = 2,
    ACTIONS(514), 1,
      anon_sym_LBRACE,
    STATE(63), 1,
      sym__arg,
  [2984] = 2,
    ACTIONS(514), 1,
      anon_sym_LBRACE,
    STATE(52), 1,
      sym__arg,
  [2991] = 2,
    ACTIONS(514), 1,
      anon_sym_LBRACE,
    STATE(57), 1,
      sym__arg,
  [2998] = 2,
    ACTIONS(514), 1,
      anon_sym_LBRACE,
    STATE(42), 1,
      sym__arg,
  [3005] = 2,
    ACTIONS(514), 1,
      anon_sym_LBRACE,
    STATE(26), 1,
      sym__arg,
  [3012] = 2,
    ACTIONS(514), 1,
      anon_sym_LBRACE,
    STATE(45), 1,
      sym__arg,
  [3019] = 2,
    ACTIONS(523), 1,
      sym__alpha,
    STATE(149), 1,
      sym__xml_base_ident,
  [3026] = 2,
    ACTIONS(514), 1,
      anon_sym_LBRACE,
    STATE(48), 1,
      sym__arg,
  [3033] = 2,
    ACTIONS(563), 1,
      anon_sym_LBRACE,
    STATE(148), 1,
      sym__arg,
  [3040] = 2,
    ACTIONS(514), 1,
      anon_sym_LBRACE,
    STATE(47), 1,
      sym__arg,
  [3047] = 2,
    ACTIONS(514), 1,
      anon_sym_LBRACE,
    STATE(32), 1,
      sym__arg,
  [3054] = 1,
    ACTIONS(565), 1,
      sym_text,
  [3058] = 1,
    ACTIONS(567), 1,
      anon_sym_RBRACK,
  [3062] = 1,
    ACTIONS(569), 1,
      anon_sym_LBRACE,
  [3066] = 1,
    ACTIONS(571), 1,
      anon_sym_LBRACE,
  [3070] = 1,
    ACTIONS(573), 1,
      anon_sym_LBRACE,
  [3074] = 1,
    ACTIONS(575), 1,
      sym_text,
  [3078] = 1,
    ACTIONS(577), 1,
      anon_sym_LBRACE,
  [3082] = 1,
    ACTIONS(579), 1,
      sym_text,
  [3086] = 1,
    ACTIONS(581), 1,
      anon_sym_RBRACK,
  [3090] = 1,
    ACTIONS(583), 1,
      anon_sym_RPAREN,
  [3094] = 1,
    ACTIONS(585), 1,
      anon_sym_RBRACK,
  [3098] = 1,
    ACTIONS(587), 1,
      sym_text,
  [3102] = 1,
    ACTIONS(589), 1,
      anon_sym_RBRACE,
  [3106] = 1,
    ACTIONS(591), 1,
      anon_sym_LBRACK,
  [3110] = 1,
    ACTIONS(593), 1,
      anon_sym_GT,
  [3114] = 1,
    ACTIONS(595), 1,
      sym_text,
  [3118] = 1,
    ACTIONS(597), 1,
      anon_sym_RBRACK,
  [3122] = 1,
    ACTIONS(599), 1,
      sym_text,
  [3126] = 1,
    ACTIONS(601), 1,
      anon_sym_LBRACE,
  [3130] = 1,
    ACTIONS(603), 1,
      ts_builtin_sym_end,
  [3134] = 1,
    ACTIONS(605), 1,
      anon_sym_LPAREN,
  [3138] = 1,
    ACTIONS(607), 1,
      anon_sym_LBRACK,
  [3142] = 1,
    ACTIONS(540), 1,
      anon_sym_RBRACK,
  [3146] = 1,
    ACTIONS(609), 1,
      anon_sym_DASH,
  [3150] = 1,
    ACTIONS(611), 1,
      anon_sym_RBRACK_RBRACK,
  [3154] = 1,
    ACTIONS(613), 1,
      anon_sym_RBRACK_RBRACK,
  [3158] = 1,
    ACTIONS(615), 1,
      sym_text,
  [3162] = 1,
    ACTIONS(617), 1,
      anon_sym_RBRACK,
  [3166] = 1,
    ACTIONS(619), 1,
      anon_sym_GT,
  [3170] = 1,
    ACTIONS(621), 1,
      anon_sym_RBRACE,
  [3174] = 1,
    ACTIONS(623), 1,
      anon_sym_RBRACE,
  [3178] = 1,
    ACTIONS(625), 1,
      anon_sym_DASH,
  [3182] = 1,
    ACTIONS(627), 1,
      anon_sym_RBRACE,
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
  [SMALL_STATE(22)] = 1442,
  [SMALL_STATE(23)] = 1468,
  [SMALL_STATE(24)] = 1491,
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
  [SMALL_STATE(71)] = 2432,
  [SMALL_STATE(72)] = 2447,
  [SMALL_STATE(73)] = 2461,
  [SMALL_STATE(74)] = 2475,
  [SMALL_STATE(75)] = 2489,
  [SMALL_STATE(76)] = 2504,
  [SMALL_STATE(77)] = 2519,
  [SMALL_STATE(78)] = 2536,
  [SMALL_STATE(79)] = 2549,
  [SMALL_STATE(80)] = 2562,
  [SMALL_STATE(81)] = 2575,
  [SMALL_STATE(82)] = 2588,
  [SMALL_STATE(83)] = 2603,
  [SMALL_STATE(84)] = 2617,
  [SMALL_STATE(85)] = 2633,
  [SMALL_STATE(86)] = 2645,
  [SMALL_STATE(87)] = 2657,
  [SMALL_STATE(88)] = 2670,
  [SMALL_STATE(89)] = 2683,
  [SMALL_STATE(90)] = 2694,
  [SMALL_STATE(91)] = 2703,
  [SMALL_STATE(92)] = 2716,
  [SMALL_STATE(93)] = 2729,
  [SMALL_STATE(94)] = 2742,
  [SMALL_STATE(95)] = 2755,
  [SMALL_STATE(96)] = 2765,
  [SMALL_STATE(97)] = 2775,
  [SMALL_STATE(98)] = 2785,
  [SMALL_STATE(99)] = 2795,
  [SMALL_STATE(100)] = 2805,
  [SMALL_STATE(101)] = 2815,
  [SMALL_STATE(102)] = 2825,
  [SMALL_STATE(103)] = 2833,
  [SMALL_STATE(104)] = 2839,
  [SMALL_STATE(105)] = 2849,
  [SMALL_STATE(106)] = 2857,
  [SMALL_STATE(107)] = 2864,
  [SMALL_STATE(108)] = 2869,
  [SMALL_STATE(109)] = 2876,
  [SMALL_STATE(110)] = 2883,
  [SMALL_STATE(111)] = 2890,
  [SMALL_STATE(112)] = 2897,
  [SMALL_STATE(113)] = 2902,
  [SMALL_STATE(114)] = 2907,
  [SMALL_STATE(115)] = 2914,
  [SMALL_STATE(116)] = 2921,
  [SMALL_STATE(117)] = 2928,
  [SMALL_STATE(118)] = 2935,
  [SMALL_STATE(119)] = 2942,
  [SMALL_STATE(120)] = 2949,
  [SMALL_STATE(121)] = 2956,
  [SMALL_STATE(122)] = 2963,
  [SMALL_STATE(123)] = 2970,
  [SMALL_STATE(124)] = 2977,
  [SMALL_STATE(125)] = 2984,
  [SMALL_STATE(126)] = 2991,
  [SMALL_STATE(127)] = 2998,
  [SMALL_STATE(128)] = 3005,
  [SMALL_STATE(129)] = 3012,
  [SMALL_STATE(130)] = 3019,
  [SMALL_STATE(131)] = 3026,
  [SMALL_STATE(132)] = 3033,
  [SMALL_STATE(133)] = 3040,
  [SMALL_STATE(134)] = 3047,
  [SMALL_STATE(135)] = 3054,
  [SMALL_STATE(136)] = 3058,
  [SMALL_STATE(137)] = 3062,
  [SMALL_STATE(138)] = 3066,
  [SMALL_STATE(139)] = 3070,
  [SMALL_STATE(140)] = 3074,
  [SMALL_STATE(141)] = 3078,
  [SMALL_STATE(142)] = 3082,
  [SMALL_STATE(143)] = 3086,
  [SMALL_STATE(144)] = 3090,
  [SMALL_STATE(145)] = 3094,
  [SMALL_STATE(146)] = 3098,
  [SMALL_STATE(147)] = 3102,
  [SMALL_STATE(148)] = 3106,
  [SMALL_STATE(149)] = 3110,
  [SMALL_STATE(150)] = 3114,
  [SMALL_STATE(151)] = 3118,
  [SMALL_STATE(152)] = 3122,
  [SMALL_STATE(153)] = 3126,
  [SMALL_STATE(154)] = 3130,
  [SMALL_STATE(155)] = 3134,
  [SMALL_STATE(156)] = 3138,
  [SMALL_STATE(157)] = 3142,
  [SMALL_STATE(158)] = 3146,
  [SMALL_STATE(159)] = 3150,
  [SMALL_STATE(160)] = 3154,
  [SMALL_STATE(161)] = 3158,
  [SMALL_STATE(162)] = 3162,
  [SMALL_STATE(163)] = 3166,
  [SMALL_STATE(164)] = 3170,
  [SMALL_STATE(165)] = 3174,
  [SMALL_STATE(166)] = 3178,
  [SMALL_STATE(167)] = 3182,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__braces_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [30] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__braces_repeat1, 2, 0, 0),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__braces_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__braces_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__braces_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__braces_repeat1, 2, 0, 0), SHIFT_REPEAT(96),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__braces_repeat1, 2, 0, 0), SHIFT_REPEAT(108),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__braces_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__braces_repeat1, 2, 0, 0), SHIFT_REPEAT(109),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__braces_repeat1, 2, 0, 0), SHIFT_REPEAT(110),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__braces_repeat1, 2, 0, 0), SHIFT_REPEAT(77),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__braces_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__arg_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__arg_repeat1, 2, 0, 0),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__arg_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__arg_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__arg_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__arg_repeat1, 2, 0, 0), SHIFT_REPEAT(96),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__arg_repeat1, 2, 0, 0), SHIFT_REPEAT(108),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__arg_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__arg_repeat1, 2, 0, 0), SHIFT_REPEAT(109),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__arg_repeat1, 2, 0, 0), SHIFT_REPEAT(110),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__arg_repeat1, 2, 0, 0), SHIFT_REPEAT(77),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__arg_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [125] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [128] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [131] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(96),
  [134] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(108),
  [137] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [140] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(109),
  [143] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(110),
  [146] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(77),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ident, 2, 0, 0),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ident, 2, 0, 0),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ident, 3, 0, 0),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ident, 3, 0, 0),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ident_repeat1, 2, 0, 0),
  [250] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ident_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ident_repeat1, 2, 0, 0),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ident_with_method_calls, 4, 0, 0),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ident_with_method_calls, 4, 0, 0),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ident_with_method_calls_repeat1, 2, 0, 0),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ident_with_method_calls_repeat1, 2, 0, 0),
  [263] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ident_with_method_calls_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [266] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ident_with_method_calls_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fun_spec, 2, 0, 1),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fun_spec, 2, 0, 1),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scope, 3, 0, 0),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scope, 3, 0, 0),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 5, 0, 0),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_export, 5, 0, 0),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 5, 0, 0),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import, 5, 0, 0),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fun_spec, 3, 0, 4),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fun_spec, 3, 0, 4),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__arg, 3, 0, 0),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__arg, 3, 0, 0),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_put, 4, 0, 2),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_put, 4, 0, 2),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace, 3, 0, 0),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace, 3, 0, 0),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unlabeled_link, 3, 0, 0),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unlabeled_link, 3, 0, 0),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_xmlns, 3, 0, 0),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_xmlns, 3, 0, 0),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_tag, 3, 0, 0),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_tag, 3, 0, 0),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_patch, 9, 0, 8),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_patch, 9, 0, 8),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pre, 3, 0, 0),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pre, 3, 0, 0),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_blockquote, 3, 0, 0),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_blockquote, 3, 0, 0),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 3, 0, 0),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 3, 0, 0),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__txt_arg, 3, 0, 0),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__txt_arg, 3, 0, 0),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_em, 3, 0, 0),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_em, 3, 0, 0),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_markdown_link, 6, 0, 6),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_markdown_link, 6, 0, 6),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let, 3, 0, 0),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let, 3, 0, 0),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tex, 3, 0, 0),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tex, 3, 0, 0),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transclude, 5, 0, 5),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transclude, 5, 0, 5),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_strong, 3, 0, 0),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_strong, 3, 0, 0),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subtree, 6, 0, 0),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subtree, 6, 0, 0),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_math, 2, 0, 0),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_math, 2, 0, 0),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_display_math, 2, 0, 0),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_display_math, 2, 0, 0),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subtree, 3, 0, 0),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subtree, 3, 0, 0),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_li, 3, 0, 0),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_li, 3, 0, 0),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_get, 3, 0, 0),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_get, 3, 0, 0),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 3, 0, 0),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_open, 3, 0, 0),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 8, 0, 7),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 8, 0, 7),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__braces, 3, 0, 0),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__braces, 3, 0, 0),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_p, 3, 0, 0),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_p, 3, 0, 0),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_tree, 3, 0, 0),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_tree, 3, 0, 0),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__squares, 3, 0, 0),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__squares, 3, 0, 0),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parens, 3, 0, 0),
  [407] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__parens, 3, 0, 0),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ul, 3, 0, 0),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ul, 3, 0, 0),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def, 3, 0, 0),
  [415] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_def, 3, 0, 0),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ol, 3, 0, 0),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ol, 3, 0, 0),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alloc, 3, 0, 0),
  [423] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alloc, 3, 0, 0),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 3, 0, 0),
  [427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 3, 0, 0),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__node, 1, 0, 0),
  [431] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__node, 1, 0, 0),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id, 1, 0, 0),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_id_repeat1, 2, 0, 0),
  [459] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_id_repeat1, 2, 0, 0), SHIFT_REPEAT(71),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xml_base_ident, 1, 0, 0),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__xml_base_ident_repeat1, 2, 0, 0),
  [468] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__xml_base_ident_repeat1, 2, 0, 0), SHIFT_REPEAT(73),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xml_base_ident, 2, 0, 0),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [475] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_object_repeat1, 2, 0, 0),
  [477] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_repeat1, 2, 0, 0), SHIFT_REPEAT(142),
  [480] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2, 0, 0), SHIFT_REPEAT(75),
  [483] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [485] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [489] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [491] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [495] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_id_repeat1, 2, 0, 0), SHIFT_REPEAT(79),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [502] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [506] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [518] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ident_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [525] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prefix, 1, 0, 0),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fun_spec_repeat1, 2, 0, 0),
  [535] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fun_spec_repeat1, 2, 0, 0), SHIFT_REPEAT(146),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_addr, 3, 0, 3),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_prefix_repeat1, 2, 0, 0),
  [544] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_prefix_repeat1, 2, 0, 0), SHIFT_REPEAT(104),
  [547] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_decl, 4, 0, 9),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_decl, 4, 0, 9),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fun_spec_repeat1, 3, 0, 0),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xml_qname, 1, 0, 0),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xml_qname, 3, 0, 0),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [603] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_link, 1, 0, 0),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
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
