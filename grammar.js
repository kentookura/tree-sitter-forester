function command(rule, arg) {
  return seq("\\", rule, "{", arg, "}");
}

function braces(p) {
  return seq(/\{/, p, /\}/);
}

function squares(p) {
  return seq(/[/, p, /]/);
}

function parens(p) {
  return;
  seq(/\(/, p, /\)/);
}

module.exports = grammar({
  name: "forester",

  rules: {
    //source_file: ($) => seq(choice($.head_node, $.whitespace)),
    source_file: ($) => repeat($.head_node),
    head_node: ($) =>
      choice(
        $.prim,
        $.title,
        $.author,
        $.date,
        $.tex_package,
        $.taxon,
        $.definition,
        $.import,
        $.export,
        $.paragraph,
        $.inline_math,
        $.display_math,
        $.markdown_link,
        $.let_binding,
        $.tex,
        $.transclude,
        $.comment,
      ),
    title: ($) => command("title", $.textual_expr),
    author: ($) => command("author", $.wstext),
    date: ($) =>
      command(
        "date",
        token(/\d{4}\-(0?[1-9]|1[012])\-(0?[1-9]|[12][0-9]|3[01])/),
      ),
    tex_package: ($) => command("tex_package", $.wstext),
    taxon: ($) => command("taxon", $.wstext),
    definition: ($) => command("definition", $.wstext),
    import: ($) => command("import", $.wstext),
    export: ($) => command("export", $.wstext),
    paragraph: ($) => command("paragraph", $.wstext),
    inline_math: ($) => seq("#{", $.text, "}"),
    display_math: ($) => seq("##{", $.text, "}"),
    markdown_link: ($) => command("markdown_link", $.wstext),
    let_binding: ($) => command("let_binding", $.wstext),
    transclude: ($) => command("transclude", $.wstext),
    tex: ($) => command(/tex/, $.wstext),
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

    p: ($) => command("p", $.textual_expr),
    em: ($) => command("em", $.textual_expr),
    strong: ($) => command(/strong/, $.textual_expr),
    li: ($) => command("li", $.textual_expr),
    ul: ($) => command("ul", $.textual_expr),
    ol: ($) => command("ol", $.textual_expr),
    code: ($) => command("code", $.prim),
    blockquote: ($) => command("blockquote", $.prim),
    pre: ($) => command("pre", $.prim),

    code_expr: ($) => seq(choice($.head_node), $.whitespace),
    textual_expr: ($) => repeat1($.textual_node),
    method_decl: ($) =>
      seq(field("key", squares($.text), field("value", seq($.whitespace)))),
    xml_attr: ($) =>
      seq(field("key", squares($.text)), field("value", seq($.whitespace))),
    //txt_arg: ($) => braces($.wstext),
    //fun: ($) => seq($.ident, $.binder, $.arg),
    textual_node: ($) => choice($.text, $.whitespace, $.head_node),
    whitespace: ($) => choice(/[ \t]+/),
    wstext: ($) => seq($.ws_or_text),
    ws_or_text: ($) => choice($.whitespace, $.text),
    ident: ($) => seq(/\\/, $.alpha, seq(choice($.alpha, $.digit, /-\/#/))),
    alpha: ($) => /[a-zA-Z]/,
    digit: ($) => /[0-9]/,
    //addr: ($) => seq($.alpha, seq(choice($.alpha, $.digit, /_/, /-/))),
    text: ($) => /[^ ' ' '%' '#' '\\' '{' '}' '[' ']' '(' ')' '\r' '\n']+/,
    binder: ($) => seq(squares($.text)),
    txt_arg: ($) => braces($.wstext),
  },
});
