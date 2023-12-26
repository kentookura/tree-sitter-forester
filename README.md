# Forester tree-sitter grammar

[Forester](https://www.jonmsterling.com/jms-005P.xml)
[Menhir Grammar](https://git.sr.ht/~jonsterling/ocaml-forester/tree/main/item/lib/frontend/Grammar.mly)
[Lexer](https://git.sr.ht/~jonsterling/ocaml-forester/tree/main/item/lib/frontend/Lexer.mll)

The original parser is written with menhir. The goal of this parser is not
feature-parity with the original, but to play around with the niceties provided
by tree-sitter such as syntax highlighting, folding, and code navigation.

Everything is subject to change. Feel free to contribute any enhancements.

See also the [forester neovim plugin](https://github.com/kentookura/forester.nvim)
