
# Tree-sitter Matry

This repository contains the code used to parse the Matry language.
It uses [tree-sitter](https://tree-sitter.github.io/tree-sitter/), which is tool for generating both parsers and highlighters that can be applied incrementally.

The grammar produces bundles in both NodeJS and Rust.

## Environment setup

1. Clone this repo
2. [Download](https://tree-sitter.github.io/tree-sitter/creating-parsers) the tree-sitter CLI

## Generating the parser

The `/grammar.js` file provides the syntax definition for Matry.
To update the syntax...

1. Update `/grammar.js`
2. Navigate to the repo in your terminal: `cd /local/path/to/tree-sitter-matry`
3. Run the generate command: `tree-sitter generate`

## Testing the parser

All tests are located in `/corpus`.
Documentation for tree-sitter tests can be found [here](https://tree-sitter.github.io/tree-sitter/creating-parsers#command-test).

1. Run the tests: `tree-sitter test`
2. Run a particular test: `tree-sitter test -f 'Your test name'`

## Building

Matry is intended to be exported as a WASM module.

1. Run the build command: `tree-sitter build-wasm`
2. You should see a new `tree-sitter-matry.wasm` file in the root directory - do NOT commit this file.
3. Copy it into your project and use according to general WASM documentation.
