
# Tree-sitter Matry

This repository contains the code used to parse the Matry language.
It uses Tree-sitter, which is tool for both generating parsers that can be applied incrementally.

The grammar produces bundles in both NodeJS and Rust.

## Environment setup

1. Clone this repo
2. [Download](https://tree-sitter.github.io/tree-sitter/creating-parsers) the tree-sitter CLI

## Generating the parser

The `/grammar.js` file provides the syntax definition for Matry.
To change the syntax, update `/grammar.js` and then run `tree-sitter generate` in the 

1. Update `/grammar.js`
2. Navigate to the repo in your terminal: `cd ./path/to/tree-sitter-matry`
3. Run the generate command: `tree-sitter generate`

## Testing the parser

All tests are located in `/corpus`.

1. Run the tests: `tree-sitter test`
2. Run a particular test: `tree-sitter test -f 'Your test name'`
