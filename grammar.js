module.exports = grammar({
  name: "forester",

  rules: {
    source_file: ($) => repeat(choice($.command, $.comment)),
    command: ($) => seq(/\\/, field("ident", $.ident), /\{/, $.content, /\}/),
    content: ($) => repeat1(choice($.text, $.inline_math, $.display_math)),
    text: ($) => /[0-9a-zA-Z -]+/,
    ident: ($) => /[0-9a-zA-Z -]+/,
    inline_math: ($) => seq(/\#\{/, $.text, /\}/),
    display_math: ($) => seq(/\#\#\{/, $.text, /\}/),
    comment: ($) => /%[^\r\n]*/,
    //inline_math: $ => seq(/#{/, /[^}+/, /}/),
    //display_math: $ => seq(/##{/, /[^}+/, /}/),
  },
  /*
  rules: {
    source_file: ($) => repeat($.head_node),
    head_node: ($) => choice($.paragraph, $.title, $.author, $.date),

    text_content: ($) => seq("{", field("text", $.text), "}"),

    paragraph: ($) =>
      seq(field("command", choice("\\p")), field("content", $.text_content)),

    title: ($) =>
      seq(
        field("command", choice("\\title")),
        field("content", $.text_content),
      ),

    author: ($) =>
      seq(
        field("command", choice("\\author")),
        field("content", $.text_content),
      ),

    date: ($) =>
      seq(field("command", choice("\\date")), field("content", $.text_content)),

    text: ($) => prec.right(repeat1($.word)),

    word: ($) => /[^\s\\%\{\},\$\[\]\(\)=\#_\^\-\+\/\*]+/,
    //text: ($) => /[^}]+/,
    //textual_node: ($) => choice($.text, $.head_node),
    //textual_expr: ($) => repeat1($.textual_node),
  },
  */
});
