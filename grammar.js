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
    //source_file: ($) => seq(choice($.head_node, $.whitespace)),
    source_file: ($) => repeat($.head_node),
    head_node: ($) =>
      choice(
        $.title,
        $.author,
        $.date,
        $.tex_package,
        $.taxon,
        $.import,
        $.export,
        $.inline_math,
        $.display_math,
        $.let_binding,
        $.tex,
        $.transclude,
        $.comment,
        $.prim,
        $.def,
        $.ident,
        $.link,
      ),
    author: ($) => command("author", $.txt_arg),
    inline_math: ($) => seq("#{", $.textual_expr, "}"),
    display_math: ($) => seq("##{", $.textual_expr, "}"),
    date: ($) =>
      command(
        "date",
        //token(/\d{4}\-(0?[1-9]|1[012])\-(0?[1-9]|[12][0-9]|3[01])/),
        braces(seq($.year, "-", $.month, "-", $.day)),
      ),
    year: ($) => /[0-9]{4}/,
    month: ($) => /(1[012]|0?[1-9])/,
    day: ($) => seq(/[0123]/, /[0-9]/),
    tex_package: ($) => command("tex_package", $.txt_arg),
    taxon: ($) => command("taxon", $.txt_arg),
    def: ($) => command("def", $.fun_spec),
    import: ($) => command("import", $.wstext),
    export: ($) => command("export", $.wstext),
    let_binding: ($) => command("let_binding", $.wstext),
    transclude: ($) => command("transclude", braces($.addr)),
    tex: ($) => command(/tex/, $.arg),
    comment: ($) => /%[^\r\n]*/,
    prim: ($) =>
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

    p: ($) => command("p", $.arg),
    em: ($) => command("em", $.arg),
    strong: ($) => command(/strong/, $.arg),
    li: ($) => command("li", $.arg),
    ul: ($) => command("ul", $.arg),
    ol: ($) => command("ol", $.arg),
    code: ($) => command("code", $.arg),
    blockquote: ($) => command("blockquote", $.prim),
    pre: ($) => command("pre", $.prim),

    code_expr: ($) => seq(choice($.head_node), $.whitespace),
    textual_expr: ($) => repeat1($.textual_node),
    //TODO
    method_decl: ($) =>
      seq(field("key", squares($.text), field("value", seq($.whitespace)))),
    xml_attr: ($) =>
      seq(field("key", squares($.text)), field("value", seq($.whitespace))),

    fun_spec: ($) =>
      seq(
        field("ident", $.ident),
        field("binder", repeat(squares($.text))),
        field("arg", $.arg),
      ),
    ident: ($) => seq("\\", repeat1(choice($.alpha, $.digit, /-\/#/))),

    arg: ($) => braces($.textual_expr),

    textual_node: ($) => choice($.text, $.whitespace, $.head_node),
    link: ($) => choice($.markdown_link, $.unlabeled_link),
    addr: ($) => seq($.prefix, "-", $.id),
    id: ($) => repeat1(choice($.alpha, $.digit, "-", "_")),
    prefix: ($) => repeat1($.alpha),
    //markdown_link: ($) => seq($.link_label, $.link_dest),
    markdown_link: ($) => seq($.link_label, $.link_dest),
    link_label: ($) => squares(field("label", $.wstext)),
    link_dest: ($) => parens(field("dest", $.wstext)),

    unlabeled_link: ($) => seq("[[", choice($.addr, $.external_link), "]]"),
    external_link: ($) => $.text,
    title: ($) => command("title", $.arg),
    whitespace: ($) => choice(/[ \t]+/),
    wstext: ($) => seq($.ws_or_text),
    ws_or_text: ($) => choice($.whitespace, $.text),
    alpha: ($) => /[a-zA-Z]/,
    digit: ($) => /[0-9]/,
    //text: ($) => /[^ ' ' '%' '#' '\\' '{' '}' '[' ']' '(' ')' '\r' '\n']+/,
    text: ($) => /[^ %\\\{\}\[\]\(\)\r\n]+/,
    txt_arg: ($) => braces($.wstext),
  },
});
