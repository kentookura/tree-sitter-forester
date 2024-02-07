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
    source_file: ($) => any_amount_of($._node),
    _node: ($) =>
      choice(
        $.author,
        $.contributor,
        $.title,
        $.date,
        $.tag,
        //repeat($._head_node),
        $.def,
        $.alloc,
        $.taxon,
        $.meta,
        $.import,
        $.export,
        // $.tag,
        $.namespace,
        $.transclude,
        $.let,
        $.tex,
        $.if_tex,
        $.block,
        $.ident_with_method_calls,
        $.scope,
        $.subtree,
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
        // $.ref,
        $.inline_math,
        $.display_math,
        // $.ident,
        $._link,
        // $.braces,
        $.squares,
        $.parens,
        $.text,
        $.comment,
      ),

    braces: ($) => braces(repeat1($._node)),
    squares: ($) => squares(repeat1($._node)),
    parens: ($) => parens(repeat1($._node)),

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

    // _title: ($) => field("title", command("title", $._arg)),
    // author: ($) => prec(1, field("author", command("author", $._txt_arg))),
    // contributor: ($) =>
    //   field("contributor", command("contributor", $._txt_arg)),
    // date: ($) =>
    //   field(
    //     "date",
    //     command(
    //       "date",
    //       choice(braces(seq($.year, "-", $.month, "-", $.day)), $._txt_arg),
    //     ),
    //   ),
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
    if_tex: ($) => command("iftex", seq($._arg, $._arg)),
    block: ($) => command("block", seq($._arg, $._arg)),
    scope: ($) => command("scope", $._arg),
    subtree: ($) => command("subtree", $._arg),
    put: ($) =>
      command(
        "put",
        seq(field("identifier", $.ident), field("argument", $._arg)),
      ),
    get: ($) => command("get", $.ident),
    open: ($) => command("open", $.ident),
    query_tree: ($) => prec(2, command("query", braces($._query))),
    _default: ($) => prec.left($.ident),
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
        alias($.p, $.paragraph),
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

    _query: ($) => seq(repeat($._whitespace), $._query0, repeat($._whitespace)),
    _query0: ($) =>
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
    queries: ($) => repeat1(choice($._whitespace, $._query0)),
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
      prec.left(
        seq(
          "\\",
          field("label", $.text),
          optional(choice(repeat1($._arg), "{}")),
        ),
      ),
    ident_with_method_calls: ($) =>
      prec(1, prec.left(seq("\\", $.text, "#", repeat1(choice("#", $.text))))),
    _arg: ($) => braces(repeat1(choice($._node))),
    _link: ($) => choice($.markdown_link, $.unlabeled_link),
    addr: ($) => seq(field("prefix", $.prefix), "-", field("id", $.id)),
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
  },
});
