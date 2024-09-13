/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

/**
 * @param {RuleOrLiteral} p
 */
function cmd(p) {
  return seq("\\", p);
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
      ),

    //--- Trivia
    comment: _ => /%[^\r\n]*/,

    text: _ => /([^%#\\{}\[\]()\r\n]|\\\\%)+/,

    //--- Command {{{
    command: $ => cmd(seq($._ident, optional($.brace))),

    _ident: $ => seq($.qualified_ident, field("method", repeat($.method_call))),
    ident: _ => /[a-zA-Z][a-zA-Z0-9\-]*/,

    qualified_ident: $ => seq($.ident, seq($._ident_path_start, field("path", repeat1($.ident_path)))),
    ident_path: $ => seq("/", $.ident),

    method_call: $ => seq("#", choice($.qualified_ident, $.method_call)),
    // }}}

    //---- Builtin {{{
    _builtin: $ => choice(
      $._meta,
      $._prim,
      $._query,
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
    ref: $ => seq("ref", $.brace),
    title: $ => seq("title", $.brace),
    taxon: $ => seq("taxon", $.brace),
    date: $ => seq("date", $.brace),
    meta: $ => seq("meta", $.brace, $.brace),
    author: $ => seq("author", $.brace),
    contributor: $ => seq("contributor", $.brace),
    parent: $ => seq("parent", $.brace),
    number: $ => seq("number", $.brace),
    tag: $ => seq("tag", $.brace),
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
    p: $ => seq("p", $.brace),
    em: $ => seq("em", $.brace),
    strong: $ => seq("strong", $.brace),
    li: $ => seq("li", $.brace),
    ol: $ => seq("ol", $.brace),
    ul: $ => seq("ul", $.brace),
    code: $ => seq("code", $.brace),
    blockquote: $ => seq("blockquote", $.brace),
    pre: $ => seq("pre", $.brace),
    figure: $ => seq("figure", $.brace),
    figcaption: $ => seq("figcaption", $.brace),
    transclude: $ => seq("transclude", $.brace),
    // TODO(jinser): verbatim via external scanner
    tex: $ => seq("tex", braces($.verbatim), braces($.verbatim)),
    // }}}

    //--- Query {{{
    _query: $ => cmd(choice(
      // TODO:
      $.query
    )),
    query: $ => seq("query", $.brace),
    // }}}
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

    _textual_node: $ => choice($.text, $._node),
    brace: $ => braces(repeat($._textual_node)),
    square: $ => squares(repeat($._textual_node)),
    paren: $ => parens(repeat($._textual_node)),
  },
});
