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
    $._builtin_start,
  ],

  rules: {
    source_file: $ => repeat($._node),

    //--- Node
    _node: $ =>
      choice(
        $.comment,

        $._cmd,
        $._syntax,
      ),

    _cmd: $ => cmd(choice(
      $.command,
      seq($._builtin_start, $._builtin),
    )),

    //--- Trivia
    comment: _ => /%[^\r\n]*/,
    text: _ => /([^%#\\{}\[\]()\r\n]|\\\\%)+/,

    //--- Command {{{
    command: $ => seq($._ident, repeat($._brace)),

    _ident: $ => prec.right(seq($.qualified_ident, field("method", repeat($.method_call)))),
    ident: _ => /[a-zA-Z][a-zA-Z0-9\-]*/,
    lazy_ident: $ => seq("~", $.ident),

    qualified_ident: $ => seq($.ident, field("path", repeat(seq($._ident_path_start, $.ident_path)))),
    ident_path: $ => seq("/", $.ident),

    method_call: $ => seq("#", $.ident),
    // }}}

    //--- Builtin {{{
    _builtin: $ => choice(
      $._meta,
      $._prim,
      $._fluid_binding,
      $._query,
      $._function,
      $._scope,
      $._object,
    ),

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
    p: $ => seq("p", $._arg),
    em: $ => seq("em", $._arg),
    strong: $ => seq("strong", $._arg),
    li: $ => seq("li", $._arg),
    ol: $ => seq("ol", $._arg),
    ul: $ => seq("ul", $._arg),
    code: $ => seq("code", $._arg),
    blockquote: $ => seq("blockquote", $._arg),
    pre: $ => seq("pre", $._arg),
    figure: $ => seq("figure", $._arg),
    figcaption: $ => seq("figcaption", $._arg),
    transclude: $ => seq("transclude", $._arg),
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
    query: $ => seq("query", $._arg),
    // }}}

    //-- Fluid Binding {{{
    _fluid_binding: $ => choice(
      $.import,
      $.export,
      $.open,
    ),
    import: $ => seq("import", $._arg),
    export: $ => seq("export", $._arg),
    open: $ => seq("open", seq("\\", $.qualified_ident)),
    // }}}

    //-- Function {{{
    _function: $ => choice(
      $.def,
      $.let,
      $.fun,
    ),
    def: $ => seq("def", $.fun_spec),
    let: $ => seq("let", $.fun_spec),
    fun: $ => seq("fun", $.lambda_spec, repeat($._brace)),

    fun_spec: $ => seq(
      "\\",
      field("identifier", $.qualified_ident),
      field("binder", repeat(choice(
        $._ident_square,
        squares($.lazy_ident),
      ))),
      field("body", $._verbatim_brace)
    ),
    lambda_spec: $ => seq(
      field("binder", repeat(choice(
        $._ident_square,
        squares($.lazy_ident),
      ))),
      field("body", $._verbatim_brace)
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
    scope: $ => seq("scope", $._arg),
    put: $ => seq("put", $._cmd),
    get: $ => seq("get", $._cmd),
    default: $ => seq("put?", $._cmd),
    alloc: $ => seq("alloc", $._cmd),
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
        field("dest", parens(alias($._text_without_parentheses, $.text))),
      ),
    unlabeled_link: $ => seq("[[", $._textual_node, "]]"),
    _text_without_parentheses: _ => /([^%#\\{}\[\]()\r\n]|\\\\%)+/,
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

    _arg: $ => prec(2, choice($._brace, $._cmd, $._syntax)),
    _textual_node: $ => choice($.text, $._node),
    _brace: $ => braces(repeat($._textual_node)),
    _text_brace: $ => braces(repeat($.text)),
    _node_brace: $ => braces(repeat($._node)),
    _verbatim_brace: $ => braces($.verbatim),
    _ident_square: $ => squares($.ident),
    _text_square: $ => squares(repeat($.text)),
  },
});
