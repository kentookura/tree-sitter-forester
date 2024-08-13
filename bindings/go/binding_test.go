package tree_sitter_forester_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-forester"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_forester.Language())
	if language == nil {
		t.Errorf("Error loading Forester grammar")
	}
}
