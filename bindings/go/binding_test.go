package tree_sitter_meson_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_meson "github.com/tree-sitter/tree-sitter-meson/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_meson.Language())
	if language == nil {
		t.Errorf("Error loading Meson grammar")
	}
}
