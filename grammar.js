/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

/**
 * @param {RuleOrLiteral[]} ps
 */
function cmd(...ps) {
  return seq("\\", ...ps);
}

/**
 * @param {RuleOrLiteral} p
 */
function braces(p) {
  return seq("{", p, "}");
}

/**
 * @param {RuleOrLiteral} p
 */
function squares(p) {
  return seq("[", p, "]");
}

/**
 * @param {RuleOrLiteral} p
 */
function parens(p) {
  return seq("(", p, ")");
}

module.exports = grammar({
  name: "forester",

  word: $ => $.ident,
  externals: $ => [
    $._ident_path_start,
    $.verbatim
  ],

  rules: {
    source_file: $ => repeat($._node),

    //--- Node
    _node: $ =>
      choice(
        $.comment,

        $.command,
        $._builtin,

        $._link,
        $._math,
        $._object,
      ),

    //--- Trivia
    comment: _ => /%[^\r\n]*/,
    text: _ => /([^%#\\{}\[\]()\r\n]|\\\\%)+/,

    //--- Command {{{
    command: $ => cmd($._ident, repeat($._brace)),

    _ident: $ => prec.right(seq($.qualified_ident, field("method", repeat($.method_call)))),
    ident: _ => /[a-zA-Z][a-zA-Z0-9\-]*/,

    qualified_ident: $ => seq($.ident, field("path", repeat(seq($._ident_path_start, $.ident_path)))),
    ident_path: $ => seq("/", $.ident),

    method_call: $ => seq("#", $.ident),
    // }}}

    //---- Builtin {{{
    _builtin: $ => choice(
      $._meta,
      $._prim,
      $._fluid_binding,
      $._query,
      $._function,
      $._subtree,
    ),

    //--- Meta {{{
    _meta: $ => cmd(choice(
      $.ref,
      $.title,
      $.taxon,
      $.date,
      $.meta,
      $.author,
      $.contributor,
      $.parent,
      $.number,
      $.tag,
    )),
    ref: $ => seq("ref", $._brace),
    title: $ => seq("title", $._brace),
    taxon: $ => seq("taxon", $._brace),
    date: $ => seq("date", $._brace),
    meta: $ => seq("meta", $._brace, $._brace),
    author: $ => seq("author", $._brace),
    contributor: $ => seq("contributor", $._brace),
    parent: $ => seq("parent", $._brace),
    number: $ => seq("number", $._brace),
    tag: $ => seq("tag", $._brace),
    // }}}

    //--- Primitive {{{
    _prim: $ => cmd(choice(
      $.p,
      $.em,
      $.strong,
      $.li,
      $.ol,
      $.ul,
      $.code,
      $.blockquote,
      $.pre,
      $.figure,
      $.figcaption,
      $.transclude,
      $.tex,
    )),
    p: $ => seq("p", $._brace),
    em: $ => seq("em", $._brace),
    strong: $ => seq("strong", $._brace),
    li: $ => seq("li", $._brace),
    ol: $ => seq("ol", $._brace),
    ul: $ => seq("ul", $._brace),
    code: $ => seq("code", $._brace),
    blockquote: $ => seq("blockquote", $._brace),
    pre: $ => seq("pre", $._brace),
    figure: $ => seq("figure", $._brace),
    figcaption: $ => seq("figcaption", $._brace),
    transclude: $ => seq("transclude", $._brace),
    tex: $ => seq(
      "tex",
      field("preamble", $._verbatim_brace),
      field("body", $._verbatim_brace)
    ),
    // }}}

    //---- Query {{{
    _query: $ => cmd(choice(
      $.query,
      $._query_mode,
      $._query_polarity,
      $._query_relation,
    )),
    query: $ => seq("query", $._query_brace),

    //--- Query Mode {{{
    _query_mode: $ => prec(2, choice(
      $.query_edges,
      $.query_paths,
    )),
    query_edges: _ => seq("query/edges"),
    query_paths: _ => seq("query/paths"),
    // }}}

    //--- Query Polarity {{{
    _query_polarity: $ => prec(2, choice(
      $.query_incoming,
      $.query_outgoing,
    )),
    query_incoming: _ => seq("query/incoming"),
    query_outgoing: _ => seq("query/outgoing"),
    // }}}

    //--- Query Relation {{{
    _query_relation: $ => choice(
      $.query_rel,
      $.Query_union,
      $.query_isect,
      $.query_isect_fam,
      $.query_union_fam,
      $.query_isect_fam_rel,
      $.query_union_fam_rel,
      $.query_compl,
      $.query_tag,
      $.query_taxon,
      $.query_author,
      $.query_incoming,
      $.query_outgoing,
      $.query_edges,
      $.query_paths,
    ),
    query_rel: $ => seq("query/rel", $._brace, $._brace, $._brace, $._text_brace),
    //                               ^ mode    ^ pol     ^ rel     ^ addr
    Query_union: $ => seq("query/union", $._brace, $._brace, $._brace),
    query_isect: $ => seq("query/isect", $._brace, $._brace, $._brace),
    query_isect_fam: $ => seq("query/isect-fam", $._brace, $._brace),
    query_union_fam: $ => seq("query/union-fam", $._brace, $._brace),
    //                                           ^ qexpr   ^ qfamily
    query_isect_fam_rel: $ => seq("query/isect-fam-rel", $._brace, $._brace, $._brace, $._brace),
    query_union_fam_rel: $ => seq("query/union-fam-rel", $._brace, $._brace, $._brace, $._brace),
    //                                                   ^ qexpr   ^ mode    ^ pol     ^ rel
    query_compl: $ => seq("query/compl", $._brace),
    query_tag: $ => seq("query/tag", $._brace),
    query_taxon: $ => seq("query/taxon", $._brace),
    query_author: $ => seq("query/author", $._brace),
    // }}}
    // }}}

    //--- Fluid Binding {{{
    _fluid_binding: $ => choice(
      $.import,
      $.export,
      $.open,
    ),
    import: $ => cmd("import", $._text_brace),
    export: $ => cmd("export", $._text_brace),
    open: $ => cmd("open", seq("\\", $.qualified_ident)),
    // }}}

    //--- Function {{{
    _function: $ => choice(
      $.def,
      $.let,
    ),
    def: $ => cmd("def", $.fun_spec),
    let: $ => cmd("let", $.fun_spec),

    fun_spec: $ => seq(
      "\\",
      field("ident", $.qualified_ident),
      field("binder", repeat($._ident_square)),
      field("body", $._brace)
    ),
    // }}}

    //--- Subtree {{{
    _subtree: $ => choice(
      $.subtree,
    ),
    subtree: $ => cmd(
      "subtree",
      field("addr", optional($._text_square)),
      field("body", braces(repeat($._node)))
    ),
    // }}}

    //--- Link {{{
    _link: $ => choice(
      $.markdown_link,
      $.unlabeled_link,
    ),
    markdown_link: $ =>
      seq(
        field("label", squares($._textual_node)),
        field("dest", parens($.text)),
      ),
    unlabeled_link: $ => seq("[[", $._textual_node, "]]"),
    // }}}

    //--- Math {{{
    _math: $ => choice(
      $.inline_math,
      $.display_math,
    ),
    inline_math: $ => seq("#", $._verbatim_brace),
    display_math: $ => seq("##", $._verbatim_brace),

    // }}}

    //--- Object {{{
    _object: $ => choice(
      $.object,
      $.patch,
    ),
    object: $ => cmd(
      "object",
      field("self", optional($._ident_square)),
      braces(field("method", repeat($.method_decl)))
    ),

    patch: $ => cmd(
      "patch",
      braces(cmd($.qualified_ident)),
      field("self", optional($._ident_square)),
      braces(field("method", repeat($.method_decl)))
    ),

    method_decl: $ => seq($._ident_square, $._verbatim_brace),
    // }}}

    _textual_node: $ => choice($.text, $._node),
    _brace: $ => braces(repeat($._textual_node)),
    _text_brace: $ => braces(repeat($.text)),
    _verbatim_brace: $ => braces($.verbatim),
    _ident_square: $ => squares(repeat($.ident)),
    _text_square: $ => squares(repeat($.text)),
  },
});
