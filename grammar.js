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
          $.date,
          $.def,
          $.tex_package,
          $.alloc,
          $.taxon,
          $.meta,
          $.import,
          $.export,
          $.namespace,
          $.transclude,
          $.tex,
          $.let,
          $.if_tex,
          $.block,
          // missing: ident_with_method_calls
          $.scope,
          $.put,
          $.get,
          $.open,
          $.query_tree,
          //$.xml_tag,
          $.object,
          $.patch,
          $.call,
          $._prim,
          $.inline_math,
          $.display_math,
          $.comment,
          $.ident,
          $._link,
          $.default,
        ),
      ),

    title: ($) => command("title", $._arg),
    author: ($) => prec(1, command("author", $._txt_arg)),
    date: ($) =>
      command(
        "date",
        choice(braces(seq($.year, "-", $.month, "-", $.day)), $._txt_arg),
      ),
    year: ($) => /[0-9]{4}/,
    month: ($) => /(1[012]|0?[1-9])/,
    day: ($) => seq(/[0123]/, /[0-9]/),
    def: ($) => command("def", $.fun_spec),
    tex_package: ($) => command("tex_package", $._txt_arg),
    alloc: ($) => command("alloc", $.ident),
    taxon: ($) => command("taxon", $._txt_arg),
    meta: ($) => command("meta", $._txt_arg),
    import: ($) => prec(2, command("import", braces($.addr))),
    export: ($) => prec(2, command("export", braces($.addr))),
    namespace: ($) => seq($.ident, braces($.code_expr)),
    transclude: ($) => command("transclude", braces($.addr)),
    let: ($) => command("let", $.fun_spec),
    tex: ($) => command("tex", $._arg),
    if_tex: ($) => command("iftex", seq($._arg, $._arg)),
    block: ($) => command("block", seq(field("x", $._arg), field("y", $._arg))),
    scope: ($) => command("scope", $._arg),
    put: ($) =>
      command(
        "put",
        seq(field("identifier", $.ident), field("argument", $._arg)),
      ),
    get: ($) => command("get", $.ident),
    open: ($) => command("open", $.ident),
    query_tree: ($) => prec(2, command("query", braces($.query))),
    default: ($) => seq($.ident, $._arg),
    //xml_tag: ($) => seq($._arg, repeat($._xml_attr), $._arg),
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
            field("object", braces($.code_expr)),
            field("self", squares($.text)),
            braces(repeat1(choice($.method_decl, $._whitespace))),
          ),
        ),
      ),
    call: ($) => seq(braces($.code_expr), $._txt_arg),
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
    inline_math: ($) => seq("#{", field("math", $._textual_expr), "}"),
    display_math: ($) => seq("##{", field("math", $._textual_expr), "}"),

    p: ($) => command("p", $._arg),
    em: ($) => command("em", $._arg),
    strong: ($) => command(/strong/, $._arg),
    li: ($) => command("li", $._arg),
    ul: ($) => command("ul", $._arg),
    ol: ($) => command("ol", $._arg),
    code: ($) => command("code", $._arg),
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
    query_author: ($) => seq("\\query/author", $._arg),
    query_tag: ($) => seq("\\query/tag", $._arg),
    query_taxon: ($) => seq("\\query/taxon", $._arg),
    query_and: ($) => seq("\\query/and", braces($.queries)),
    query_or: ($) => seq("\\query/or", braces($.queries)),
    query_meta: ($) => seq(field("k", $._txt_arg), field("v", $._arg)),
    queries: ($) => repeat1(choice($._whitespace, $.query0)),

    code_expr: ($) => repeat1(choice($._head_node, $._whitespace)),
    _textual_expr: ($) => repeat1($._textual_node),

    method_decl: ($) => $.method, //seq(field("key", squares($.text)), $._arg),
    method: ($) =>
      seq(field("key", squares($.text)), field("value", $.method_body)),
    method_body: ($) => $._arg,

    //seq(field("key", squares($.text)), field("value", $._arg)),
    //method_key: ($) => squares($.text),
    //method_value: ($) => fiel($._arg,

    //_xml_attr: ($) =>
    //  seq(field("key", squares($.text)), field("value", seq($._whitespace))),

    fun_spec: ($) =>
      seq(
        field("identifier", $.ident),
        choice(
          field("argument", $._arg),
          seq(field("binder", $.binder), field("argument", $._arg)),
        ),
      ),

    binder: ($) => repeat1(squares($.text)),

    ident: ($) => seq("\\", field("identifier", $._ident_label)),
    _ident_label: ($) => repeat1(choice($._alpha, $._digit, /[-\/#]/)),

    _arg: ($) => braces($._textual_expr),
    _textual_node: ($) => prec(1, choice($.text, $._whitespace, $._head_node)),
    _link: ($) => choice($.markdown_link, $.unlabeled_link),
    addr: ($) => seq($.prefix, "-", $.id),
    id: ($) => repeat1(choice($._alpha, $._digit, "-", "_")),
    prefix: ($) => repeat1($._alpha),
    //markdown_link: ($) => seq($.link_label, $.link_dest),
    markdown_link: ($) => seq($.link_label, $.link_dest),
    link_label: ($) => squares(field("label", $._wstext)),
    link_dest: ($) => parens(field("dest", choice($.addr, $._wstext))),

    unlabeled_link: ($) => seq("[[", choice($.addr, $.external_link), "]]"),
    external_link: ($) => $.text,
    _whitespace: ($) => choice(/[ \t]+/),
    _wstext: ($) => repeat1($._ws_or_text),
    _ws_or_text: ($) => prec(1, choice($._whitespace, $.text)),
    _alpha: ($) => /[a-zA-Z]/,
    _digit: ($) => /[0-9]/,
    //text: ($) => /[^ ' ' '%' '#' '\\' '{' '}' '[' ']' '(' ')' '\r' '\n']+/,
    text: ($) => /[^ %\\\{\}\[\]\(\)\r\n]+/,
    _txt_arg: ($) => braces($._wstext),
  },
});
