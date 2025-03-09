# Contributing

## Developing tree-sitter-forester

### Prerequisites
```sh
nix develop
```

### Building
```sh
tree-sitter build
tree-sitter generate
```

### Testing
Before you can run the tests, you need to clone some trees that are used for testing:
```sh
./script/fetch-trees.sh
```

Then you can run these tests:
```sh
./script/generate-tests.sh
```
and
```sh
tree-sitter test
```
