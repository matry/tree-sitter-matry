extern crate tree_sitter;
extern crate matry_grammar;

fn main() {
  println!("Hello World!");

  let mut parser = tree_sitter::Parser::new();

  let language = matry_grammar.language();
  parser.set_language(language);

  println!("Parser language: {:?}", language);
}
