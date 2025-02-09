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

function any_amount_of() {
  return repeat(seq(...arguments));
}

module.exports = grammar({
  name: "forester",

  rules: {
    source_file: ($) => any_amount_of($._node),
    _node: ($) =>
      choice(
        $.def,
        $.alloc,
        $.import,
        $.export,
        $.namespace,
        $.transclude,
        $.let,
        $.tex,
        $.ident_with_method_calls,
        $.scope,
        $.subtree,
        $.put,
        $._default,
        $.get,
        $.open,
        $.xml_tag,
        $.decl_xmlns,
        $.query_tree,
        $.object,
        $.patch,
        $.call,
        $._prim,
        $.inline_math,
        $.display_math,
        $._link,
        $._squares,
        $._parens,
        $._braces,
        $.text,
        $.comment,
      ),

    _braces: ($) => braces(repeat1($._node)),
    _squares: ($) => squares(repeat1($._node)),
    _parens: ($) => parens(repeat1($._node)),

    title: ($) => command("title", $._arg),
    author: ($) => field("author", command("author", $._txt_arg)),
    contributor: ($) =>
      field("contributor", command("contributor", $._txt_arg)),
    date: ($) =>
      field(
        "date",
        command(
          "date",
          choice(braces(seq($.year, "-", $.month, "-", $.day)), $._txt_arg),
        ),
      ),
    tag: ($) => field("tag", command("tag", $._txt_arg)),
    ref: ($) => field("ref", command("ref", $._arg)),

    xml_tag: ($) => seq("\\<", $._xml_qname, ">"),
    decl_xmlns: ($) => seq("\\xmlns:", $._xml_base_ident, $._txt_arg),

    year: ($) => /[0-9]{4}/,
    month: ($) => /(1[012]|0?[1-9])/,
    day: ($) => seq(/[0123]/, /[0-9]/),
    def: ($) => command("def", $.fun_spec),
    tex_package: ($) => command("tex_package", $._txt_arg),
    alloc: ($) => command("alloc", $.ident),
    taxon: ($) => command("taxon", $._txt_arg),
    meta: ($) => prec.left(command("meta", seq($._txt_arg, $._arg))),
    import: ($) => prec(2, command("import", braces($.addr))),
    export: ($) => prec(2, command("export", braces($.addr))),
    namespace: ($) => command("namespace", $._arg),
    transclude: ($) => command("transclude", braces(field("address", $.addr))),
    let: ($) => command("let", $.fun_spec),
    tex: ($) => command("tex", $._arg),
    scope: ($) => command("scope", $._arg),
    subtree: ($) =>
      prec.left(command("subtree", seq(optional(squares($.addr)), $._arg))),
    put: ($) =>
      command(
        "put",
        seq(field("identifier", $.ident), field("argument", $._arg)),
      ),
    get: ($) => command("get", $.ident),
    open: ($) => command("open", $.ident),
    query_tree: ($) => prec(2, command("query", $._arg)),
    _default: ($) => prec.left($.ident),
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
            field("object", $._arg),
            field("self", squares($.text)),
            braces(repeat1(choice($.method_decl, $._whitespace))),
          ),
        ),
      ),
    call: ($) => command("call", $._arg),
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
    inline_math: ($) => seq("#", $._arg),
    display_math: ($) => seq("##", $._arg),

    p: ($) => command("p", $._arg),
    em: ($) => command("em", $._arg),
    strong: ($) => command("strong", $._arg),
    li: ($) => command("li", $._arg),
    ul: ($) => command("ul", $._arg),
    ol: ($) => command("ol", $._arg),
    code: ($) => command("code", $._arg),
    blockquote: ($) => command("blockquote", $._prim),
    pre: ($) => command("pre", $._prim),

    method_decl: ($) =>
      seq(
        field("key", squares($.text)),
        field("value", alias($._arg, $.method_body)),
      ),
    fun_spec: ($) =>
      field(
        "function",
        seq(
          field("identifier", $.ident),
          choice(
            field("argument", $._arg),
            seq(
              field("binder", repeat1(squares($.text))),
              field("argument", $._arg),
            ),
          ),
        ),
      ),
    ident: ($) =>
      prec.left(seq("\\", $.text, optional(choice(repeat1($._arg), "{}")))),
    ident_with_method_calls: ($) =>
      prec(1, prec.left(seq("\\", $.text, "#", repeat1(choice("#", $.text))))),
    _arg: ($) => braces(optional(repeat1(choice($._node)))),
    _link: ($) => choice($.markdown_link, $.unlabeled_link),
    addr: ($) => prec(1, $.text),
    id: ($) => repeat1(choice($._alpha, $._digit, "-", "_")),
    prefix: ($) => repeat1($._alpha),
    markdown_link: ($) =>
      prec(
        2,
        seq(
          field("label", squares(choice($.text))),
          field("dest", parens(choice($.addr, $.text))),
        ),
      ),
    unlabeled_link: ($) => seq("[[", choice($.addr, $.external_link), "]]"),
    external_link: ($) => $.text,
    _whitespace: ($) => choice(/[ \t]+/),
    _alpha: ($) => /[a-zA-Z]+/,
    _digit: ($) => /[0-9]+/,
    text: ($) => /[^%#\\\{\}\[\]\(\)\r\n]+/,
    _txt_arg: ($) => braces($.text),
    _xml_base_ident: ($) =>
      seq($._alpha, repeat(choice($._alpha, $._digit, /[-/#]/))),
    _xml_qname: ($) =>
      choice(seq($._xml_base_ident, ":", $._xml_base_ident), $._xml_base_ident),
  },
});
