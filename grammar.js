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
      $._scope,
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
    )),
    query: $ => seq("query", $._brace),
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

    //--- Scope {{{
    _scope: $ => choice(
      $.subtree,
      $.scope,
      $.put,
      $.get,
      $.default,
      $.alloc,
    ),
    subtree: $ => cmd(
      "subtree",
      field("addr", optional($._text_square)),
      field("body", $._node_brace)
    ),
    scope: $ => cmd("scope", $._node_brace),
    put: $ => cmd("put", $.command,),
    get: $ => cmd("get", $.command,),
    default: $ => cmd("put?", $.command,),
    alloc: $ => cmd("alloc", $.command,),
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
    _node_brace: $ => braces(repeat($._node)),
    _verbatim_brace: $ => braces($.verbatim),
    _ident_square: $ => squares(repeat($.ident)),
    _text_square: $ => squares(repeat($.text)),
  },
});
