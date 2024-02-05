function command(rule, arg) {
  return seq("\\", rule, arg);
}

function braces(p) {
  return seq("{", p, "}");
}

function squares(p) {
  return seq("[", p, "]");
}

function parens(p) {
  return seq("(", p, ")");
}

function drop_sigil(char, str) {
  return str.split(char)[0];
}

function any_amount_of() {
  return repeat(seq(...arguments));
}

function one_or_more() {
  return repeat1(seq(...arguments));
}

function list_of(match, sep, trailing) {
  return trailing
    ? seq(match, any_amount_of(sep, match), optional(sep))
    : seq(match, any_amount_of(sep, match));
}

module.exports = grammar({
  name: "forester",

  rules: {
    source_file: ($) => repeat($._head_node),
    _head_node: ($) =>
      prec(
        3,
        choice(
          $.title,
          $.author,
          $.contributor,
          $.date,
          $.def,
          $.alloc,
          $.taxon,
          $.meta,
          $.import,
          $.export,
          $.tag,
          $.namespace,
          $.transclude,
          $.let,
          $.tex,
          $.if_tex,
          $.block,
          // $.ident_with_method_calls,
          $.scope,
          $.put,
          $._default,
          $.get,
          $.open,
          $.query_tree,
          //$.xml_tag,
          $.object,
          $.patch,
          $.call,
          $._prim,
          $.ref,
          $.inline_math,
          $.display_math,
          // $.ident,
          $._link,
          // $.braces,
          // $.squares,
          // $.parens,
          $.comment,
        ),
      ),

    title: ($) => field("title", command("title", $.arg)),
    tag: ($) => field("tag", command("tag", $._txt_arg)),
    author: ($) => prec(1, field("author", command("author", $._txt_arg))),
    contributor: ($) =>
      field("contributor", command("contributor", $._txt_arg)),
    ref: ($) => field("ref", command("ref", $.arg)),
    date: ($) =>
      field(
        "date",
        command(
          "date",
          choice(braces(seq($.year, "-", $.month, "-", $.day)), $._txt_arg),
        ),
      ),
    year: ($) => /[0-9]{4}/,
    month: ($) => /(1[012]|0?[1-9])/,
    day: ($) => seq(/[0123]/, /[0-9]/),
    def: ($) => command("def", $.fun_spec),
    tex_package: ($) => command("tex_package", $._txt_arg),
    alloc: ($) => command("alloc", $.ident),
    taxon: ($) => command("taxon", $._txt_arg),
    meta: ($) => prec.left(command("meta", seq($._txt_arg, $.arg))),
    import: ($) => prec(2, command("import", braces($.addr))),
    export: ($) => prec(2, command("export", braces($.addr))),
    namespace: ($) => command("namespace", $.arg),
    transclude: ($) =>
      field("transclusion", command("transclude", braces($.addr))),
    let: ($) => command("let", $.fun_spec),
    tex: ($) => command("tex", $.arg),
    if_tex: ($) => command("iftex", seq($.arg, $.arg)),
    block: ($) => command("block", seq(field("x", $.arg), field("y", $.arg))),
    scope: ($) => command("scope", $.arg),
    put: ($) =>
      command(
        "put",
        seq(field("identifier", $.ident), field("argument", $.arg)),
      ),
    get: ($) => command("get", $.ident),
    open: ($) => command("open", $.ident),
    query_tree: ($) => prec(2, command("query", braces($.query))),
    _default: ($) => prec.left($.ident),
    //xml_tag: ($) => seq($.arg, repeat($._xml_attr), $.arg),
    object: ($) =>
      prec.left(
        command(
          "object",
          seq(
            field("self", squares($.text)),
            braces(repeat1(choice($.method_decl, $._whitespace))),
          ),
        ),
      ),

    patch: ($) =>
      prec.left(
        command(
          "patch",
          seq(
            field("object", $.arg),
            field("self", squares($.text)),
            braces(repeat1(choice($.method_decl, $._whitespace))),
          ),
        ),
      ),
    call: ($) => command("call", $.arg),
    comment: ($) => /%[^\r\n]*/,
    _prim: ($) =>
      choice(
        $.p,
        $.em,
        $.strong,
        $.li,
        $.ul,
        $.ol,
        $.code,
        $.blockquote,
        $.pre,
      ),
    inline_math: ($) => seq("#", $.arg),
    display_math: ($) => seq("##", $.arg),

    p: ($) => command("p", $.arg),
    em: ($) => command("em", $.arg),
    strong: ($) => command("strong", $.arg),
    li: ($) => command("li", $.arg),
    ul: ($) => command("ul", $.arg),
    ol: ($) => command("ol", $.arg),
    code: ($) => command("code", $.arg),
    blockquote: ($) => command("blockquote", $._prim),
    pre: ($) => command("pre", $._prim),

    query: ($) => seq(repeat($._whitespace), $.query0, repeat($._whitespace)),
    query0: ($) =>
      choice(
        $.query_author,
        $.query_tag,
        $.query_taxon,
        $.query_and,
        $.query_or,
        $.query_meta,
      ),
    query_author: ($) => seq("\\query/author", $.arg),
    query_tag: ($) => seq("\\query/tag", $.arg),
    query_taxon: ($) => seq("\\query/taxon", $.arg),
    query_and: ($) => seq("\\query/and", braces($.queries)),
    query_or: ($) => seq("\\query/or", braces($.queries)),
    query_meta: ($) => seq(field("k", $._txt_arg), field("v", $.arg)),
    queries: ($) => repeat1(choice($._whitespace, $.query0)),

    // code_expr: ($) => repeat1(choice($._head_node)),
    _textual_expr: ($) => repeat1($._textual_node),

    method_decl: ($) =>
      seq(field("key", squares($.text)), field("value", $.method_body)),
    method_body: ($) => $.arg,

    //seq(field("key", squares($.text)), field("value", $.arg)),
    //method_key: ($) => squares($.text),
    //method_value: ($) => fiel($.arg,

    //_xml_attr: ($) =>
    //  seq(field("key", squares($.text)), field("value", seq($._whitespace))),

    fun_spec: ($) =>
      field(
        "function",
        seq(
          field("identifier", $.ident),
          choice(
            field("argument", $.arg),
            seq(field("binder", $.binder), field("argument", $.arg)),
          ),
        ),
      ),

    binder: ($) => repeat1(squares($.text)),

    ident: ($) =>
      prec.left(seq("\\", $.text, optional(field("arg", choice($.arg, "{}"))))),
    // label: ($) => repeat1(choice($._alpha, $._digit, /[-\/#]+/)),

    // ident_with_method_calls: ($) => seq($.ident, ) ,

    arg: ($) => braces(repeat1($._textual_node)),
    // _arg: ($) => braces($._textual_expr),
    _textual_node: ($) => choice($.text, $._head_node),
    _link: ($) => choice($.markdown_link, $.unlabeled_link),
    addr: ($) => seq($.prefix, "-", $.id),
    id: ($) => repeat1(choice($._alpha, $._digit, "-", "_")),
    prefix: ($) => repeat1($._alpha),
    //markdown_link: ($) => seq($.link_label, $.link_dest),
    markdown_link: ($) => seq($.link_label, $.link_dest),
    link_label: ($) =>
      field("link_label", alias(squares($.text, $.label), "link_label")),
    link_dest: ($) => parens(field("dest", choice($.addr, $.text))),

    unlabeled_link: ($) => seq("[[", choice($.addr, $.external_link), "]]"),
    external_link: ($) => $.text,
    _whitespace: ($) => choice(/[ \t]+/),
    // _wstext: ($) => repeat1($._ws_or_text),
    // _ws_or_text: ($) => prec(1, choice($._whitespace, $.text)),
    _alpha: ($) => /[a-zA-Z]+/,
    _digit: ($) => /[0-9]+/,
    //text: ($) => /[^ ' ' '%' '#' '\\' '{' '}' '[' ']' '(' ')' '\r' '\n']+/,
    text: ($) => /[^%#\\\{\}\[\]\(\)\r\n]+/,
    _txt_arg: ($) => braces($.text),
    braces: ($) => braces($._textual_expr),
    squares: ($) => squares($._textual_expr),
    parens: ($) => parens($._textual_expr),
  },
});
