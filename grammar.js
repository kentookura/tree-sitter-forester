function command(rule, arg) {
  return seq("\\", field("command_name", rule), arg);
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
          $.xml_tag,
          $.object,
          $.patch,
          $.call,
          $.prim,
          $.inline_math,
          $.display_math,
          $.comment,
          $.ident,
          $.link,
          $.default,
        ),
      ),

    title: ($) => command("title", $.arg),
    author: ($) => command("author", $.txt_arg),
    date: ($) => command("date", braces(seq($.year, "-", $.month, "-", $.day))),
    year: ($) => /[0-9]{4}/,
    month: ($) => /(1[012]|0?[1-9])/,
    day: ($) => seq(/[0123]/, /[0-9]/),
    def: ($) => command("def", $.fun_spec),
    tex_package: ($) => command("tex_package", $.txt_arg),
    alloc: ($) => command("alloc", $.ident),
    taxon: ($) => command("taxon", $.txt_arg),
    meta: ($) => command("meta", $.txt_arg),
    import: ($) => command("import", $.wstext),
    export: ($) => command("export", $.wstext),
    namespace: ($) => seq($.ident, braces($.code_expr)),
    transclude: ($) => command("transclude", braces($.addr)),
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
    query_tree: ($) => command("query", braces($.query)),
    default: ($) => seq($.ident, $.arg),
    xml_tag: ($) => seq($.arg, repeat($.xml_attr), $.arg),
    object: ($) =>
      seq(
        field(
          "self",
          squares($.bvar),
          field("methods", braces(repeat(choice($.method_decl, $.whitespace)))),
        ),
      ),
    patch: ($) =>
      seq(
        field("obj", braces($.code_expr)),
        field("self", squares($.bvar)),
        field("methods", braces(repeat(choice($.method_decl, $.whitespace)))),
      ),
    call: ($) => seq(braces($.code_expr), $.txt_arg),
    comment: ($) => /%[^\r\n]*/,
    prim: ($) =>
      prec(
        3,
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
      ),
    inline_math: ($) => seq("#{", $.textual_expr, "}"),
    display_math: ($) => seq("##{", $.textual_expr, "}"),

    p: ($) => command("p", $.arg),
    em: ($) => command("em", $.arg),
    strong: ($) => command(/strong/, $.arg),
    li: ($) => command("li", $.arg),
    ul: ($) => command("ul", $.arg),
    ol: ($) => command("ol", $.arg),
    code: ($) => command("code", $.arg),
    blockquote: ($) => command("blockquote", $.prim),
    pre: ($) => command("pre", $.prim),

    query: ($) => seq(repeat($.whitespace), $.query0, repeat($.whitespace)),
    query0: ($) =>
      choice(
        $.query_author,
        $.query_tag,
        $.query_taxon,
        $.query_and,
        $.query_or,
        $.query_meta,
      ),
    query_author: ($) => seq("/author", $.arg),
    query_tag: ($) => seq("/tag", $.arg),
    query_taxon: ($) => seq("/taxon", $.arg),
    query_and: ($) => seq("/and", braces($.queries)),
    query_or: ($) => seq("/or", braces($.queries)),
    query_meta: ($) => seq(field("k", $.txt_arg), field("v", $.arg)),
    queries: ($) => repeat1(choice($.whitespace, $.query0)),

    code_expr: ($) => repeat1(choice($.head_node, $.whitespace)),
    textual_expr: ($) => repeat1($.textual_node),
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

    ident: (
      $, //command(repeat1(choice($.alpha, $.digit, /[-\/#]/))),
    ) =>
      seq(
        "\\",
        field("identifier", repeat1(choice($.alpha, $.digit, /[-\/#]/))),
      ),

    arg: ($) => braces($.textual_expr),
    bvar: ($) => $.text,
    textual_node: ($) => prec(2, choice($.text, $.whitespace, $.head_node)),
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
    whitespace: ($) => choice(/[ \t]+/),
    wstext: ($) => seq($.ws_or_text),
    ws_or_text: ($) => prec(2, choice($.whitespace, $.text)),
    alpha: ($) => /[a-zA-Z]/,
    digit: ($) => /[0-9]/,
    //text: ($) => /[^ ' ' '%' '#' '\\' '{' '}' '[' ']' '(' ')' '\r' '\n']+/,
    text: ($) => /[^ %\\\{\}\[\]\(\)\r\n]+/,
    txt_arg: ($) => braces($.wstext),
  },
});
