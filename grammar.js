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
    $.verbatim,
    $.herald_start,
    $.herald_stop,
    $.custom_verbatim,
    $.legacy_verbatim,
  ],

  rules: {
    source_file: $ => repeat($._node),

    //--- Node
    _node: $ =>
      choice(
        $.comment,

        $.command,
        $._builtin,
        $._syntax,
      ),

    //--- Trivia
    comment: _ => /%[^\r\n]*/,
    text: _ => /([^%#\\{}\[\]()\r\n]|\\\\%)+/,

    //--- Command {{{
    command: $ => cmd($._ident, repeat($._brace)),

    _ident: $ => prec.right(seq($.qualified_ident, field("method", repeat($.method_call)))),
    ident: _ => /[a-zA-Z][a-zA-Z0-9\-]*/,
    lazy_ident: $ => seq("~", $.ident),

    qualified_ident: $ => seq($.ident, field("path", repeat(seq($._ident_path_start, $.ident_path)))),
    ident_path: $ => seq("/", $.ident),

    method_call: $ => seq("#", $.ident),
    // }}}

    //--- Builtin {{{
    _builtin: $ => cmd(choice(
      $._meta,
      $._prim,
      $._fluid_binding,
      $._query,
      $._function,
      $._scope,
      $._object,
    )),

    //-- Meta {{{
    _meta: $ => choice(
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
    ),
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

    //-- Primitive {{{
    _prim: $ => choice(
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
    ),
    p: $ => seq("p", optional($._brace)),
    em: $ => seq("em", optional($._brace)),
    strong: $ => seq("strong", optional($._brace)),
    li: $ => seq("li", optional($._brace)),
    ol: $ => seq("ol", optional($._brace)),
    ul: $ => seq("ul", optional($._brace)),
    code: $ => seq("code", optional($._brace)),
    blockquote: $ => seq("blockquote", optional($._brace)),
    pre: $ => seq("pre", optional($._brace)),
    figure: $ => seq("figure", optional($._brace)),
    figcaption: $ => seq("figcaption", optional($._brace)),
    transclude: $ => seq("transclude", optional($._brace)),
    tex: $ => seq(
      "tex",
      field("preamble", $._verbatim_brace),
      field("body", $._verbatim_brace)
    ),
    // }}}

    //-- Query {{{
    _query: $ => choice(
      $.query,
    ),
    query: $ => seq("query", $._brace),
    // }}}

    //-- Fluid Binding {{{
    _fluid_binding: $ => choice(
      $.import,
      $.export,
      $.open,
    ),
    import: $ => seq("import", $._text_brace),
    export: $ => seq("export", $._text_brace),
    open: $ => seq("open", seq("\\", $.qualified_ident)),
    // }}}

    //-- Function {{{
    _function: $ => choice(
      $.def,
      $.let,
    ),
    def: $ => seq("def", $.fun_spec),
    let: $ => seq("let", $.fun_spec),

    fun_spec: $ => seq(
      "\\",
      field("identifier", $.qualified_ident),
      field("binder", choice(
        repeat($._ident_square),
        repeat(squares($.lazy_ident)),
      )),
      field("body", $._brace)
    ),
    // }}}

    //-- Scope {{{
    _scope: $ => choice(
      $.subtree,
      $.scope,
      $.put,
      $.get,
      $.default,
      $.alloc,
    ),
    subtree: $ => seq(
      "subtree",
      field("addr", optional($._text_square)),
      field("body", $._node_brace)
    ),
    scope: $ => seq("scope", $._node_brace),
    put: $ => seq("put", $.command,),
    get: $ => seq("get", $.command,),
    default: $ => seq("put?", $.command,),
    alloc: $ => seq("alloc", $.command,),
    // }}}

    //-- Object {{{
    _object: $ => choice(
      $.object,
      $.patch,
    ),
    object: $ => seq(
      "object",
      field("self", optional($._ident_square)),
      braces(field("method", repeat($.method_decl)))
    ),

    patch: $ => seq(
      "patch",
      braces(cmd($.qualified_ident)),
      field("self", optional($._ident_square)),
      braces(field("method", repeat($.method_decl)))
    ),

    method_decl: $ => seq($._ident_square, $._verbatim_brace),
    // }}}
    // }}}

    //--- Syntax {{{
    _syntax: $ => choice(
      $._link,
      $._math,
      $._verb,
      $._xml,
    ),
    //-- Link {{{
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

    //-- Math {{{
    _math: $ => choice(
      $.inline_math,
      $.display_math,
    ),
    inline_math: $ => seq("#", $._verbatim_brace),
    display_math: $ => seq("##", $._verbatim_brace),

    // }}}

    //-- Verbatim {{{
    _verb: $ => choice(
      $.verb,
      $.legacy_verb,
    ),
    verb: $ => cmd(
      "verb",
      $.herald_start,
      $.herald_sep,
      alias($.custom_verbatim, $.verbatim),
      $.herald_stop
    ),
    herald_sep: _ => "|",

    legacy_verb: $ => cmd("startverb", alias($.legacy_verbatim, $.verbatim), "\\stopverb"),
    // }}}

    //-- XML {{{
    _xml: $ => choice(
      $.xmlns_decl,
      $.xml_tag,
    ),
    xmlns_decl: $ => cmd("xmlns", ":", field("prefix", $._xml_base_ident), field("xmlns", $._text_brace)),
    xml_tag: $ => cmd(
      "<",
      $._xml_qname,
      ">",
      repeat($.xml_attrs),
      field("body", $._brace)
    ),
    xml_attrs: $ => seq(field("name", $._ident_square), field("value", $._brace)),
    _xml_qname: $ => choice(
      seq(field("prefix", $._xml_base_ident), ":", field("uname", $._xml_base_ident)),
      $._xml_base_ident,
    ),
    _xml_base_ident: $ => alias(/[a-zA-Z][a-zA-Z0-9\-_]*/, $.ident),
    // }}}
    // }}}
    _textual_node: $ => choice($.text, $._node),
    _brace: $ => braces(repeat($._textual_node)),
    _text_brace: $ => braces(repeat($.text)),
    _node_brace: $ => braces(repeat($._node)),
    _verbatim_brace: $ => braces($.verbatim),
    _ident_square: $ => squares($.ident),
    _text_square: $ => squares(repeat($.text)),
  },
});
