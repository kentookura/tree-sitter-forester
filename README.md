# [Forester](https://www.jonmsterling.com/jms-007N.xml) tree-sitter grammar

Coverage is pretty good, but not perfect: ![screenshot of syntax highlighting](./highlight.png)


I am working on highlighting in the repository for the [neovim plugin](https://github.com/kentookura/forester.nvim).

## References

- [Menhir Grammar](https://git.sr.ht/~jonsterling/ocaml-forester/tree/main/item/lib/frontend/Grammar.mly)

- [Lexer](https://git.sr.ht/~jonsterling/ocaml-forester/tree/main/item/lib/frontend/Lexer.mll)

- [objects](https://www.jonmsterling.com/jms-00EY.xml)

## Supported Syntax

See the [tests](./tests/corpus/statements.txt).

## Development

If you use [nix flakes](https://nixos.wiki/wiki/Flakes), run `nix develop` to enter a shell with all the dependencies.

```sh
tree-sitter generate
```

## Testing

```sh
tree-sitter test
```
