package tree_sitter_regex_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_regex "github.com/tree-sitter/tree-sitter-regex/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_regex.Language())
	if language == nil {
		t.Errorf("Error loading Regex grammar")
	}
}
