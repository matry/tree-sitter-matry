
module.exports = grammar({
  name: 'matry',

  /*
  NOTE:
  The following rules are arranged alphabetically, except for the source_file rule.
  Since it defines the root of any matry file, it belongs at the top.
  */
  rules: {
    source_file: $ => repeat(
      choice(
        $.tokens_block,
        $.single_line_comment,
        $.multi_line_comment,
      ),
    ),

    _newlines: $ => /\n+/,

    // This weirdness is necessary so that we don't capture the quotes themselves in the AST
    _string: $ => seq(
      /"/,
      $.string,
      /"/,
    ),

    _token_body: $ => repeat1(
      choice(
        seq(
          $.token_declaration,
          $._newlines,
        ),
        $.conditional_token_block,
        $.child_token_block,
      ),
    ),

    asset_path: $ => /\/[a-zA-Z0-9\/\._-]+/,

    asterisk: $ => '*',

    child_token_block: $ => seq(
      $.identifier,
      '{',
      $._token_body,
      '}',
    ),

    conditional_token_block: $ => seq(
      'when',
      $.token_reference,
      choice(
        $.negative_assertion,
        $.positive_assertion,
      ),
      $.identifier,
      '{',
      repeat(
        seq(
          $.token_assignment,
          $._newlines,
        ),
      ),
      '}',
    ),

    dimension: $ => seq(
      $.number,
      optional($.dimensional_unit),
    ),

    dimensional_unit: $ => /(px|%|em|rem|in|pt|cm|mm|pc|ch|ex|vw|vh|vmin|vmax|dvh|dvw)/,

    hex: $ => /\#[0-9a-zA-Z]*/,

    identifier: $ => /[a-zA-Z][a-zA-Z0-9_-]+/i,

    multi_line_comment: $ => token(seq(
      '/*',
      /[^*]*\*+([^/*][^*]*\*+)*/,
      '/',
    )),

    negative_assertion: $ => /is not/,

    number: $ => /-?\d+(\.\d+)?/,

    positive_assertion: $ => /is/,

    ref_identifier: $ => /[a-zA-Z][a-zA-Z0-9_.-]+/i,

    single_line_comment: $ => token(/\/\/[^\n]*/),

    string: $ => /[^\\n^"]*/,

    switch: $ => seq(
      seq(
        $.identifier,
        optional($.asterisk),
      ),
      repeat1(
        seq(
          ',',
          $.identifier,
          optional($.asterisk),
        ),
      ),
    ),

    token_assignment: $ => seq(
      $.identifier,
      ':',
      $.token_value,
    ),

    tokens_block: $ => seq(
      'tokens',
      optional($.identifier),
      /\{/,
      $._token_body,
      /\}/,
    ),

    token_declaration: $ => seq(
      $.token_type,
      $.identifier,
      ':',
      $.token_value,
    ),

    token_reference: $ => seq(
      '$',
      $.ref_identifier,
    ),

    token_type: $ => choice(
      'text',
      'color',
      'asset',
      'switch',
      'dimension',
      'range',
    ),

    token_value: $ => choice(
      $.dimension,
      $.hex,
      $.token_reference,
      $._string,
      $.asset_path,
      $.switch,
    ),

  },
});
