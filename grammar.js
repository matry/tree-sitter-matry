
module.exports = grammar({
  name: 'matry',

  rules: {
    source_file: $ => repeat(
      choice(
        $.single_line_comment,
        $.multi_line_comment,
        $.tokens_block,
        $.component_block,
        $.story_block,
      ),
    ),

    single_line_comment: $ => token(/\/\/[^\n]*/),
    multi_line_comment: $ => token(seq(
      '/*',
      /[^*]*\*+([^/*][^*]*\*+)*/,
      '/',
    )),
    spaced_identifier: $ => /[a-zA-Z0-9\s]+/,
    identifier: $ => /[a-zA-Z0-9][a-zA-Z0-9_-]+/i,
    _newlines: $ => /\n+/,
    conditional: $ => seq(
      /when/,
      $.token_reference,
      choice(
        $.positive_assertion,
        $.negative_assertion,
      ),
      choice($.identifier, $.keyword),
    ),
    positive_assertion: $ => /is/,
    negative_assertion: $ => /is not/,
    style_value: $ => choice(
      $.color,
      $.dimension,
      $.token_reference,
      $.url,
      $.keyword,
      $.arbitrary_text,
    ),

    dimension: $ => /[0-9]+(px|%|em|rem)?(\s[0-9]+(px|%|em|rem)?)*\s*/,
    color: $ => /\#[0-9a-zA-Z]*/,
    token_reference: $ => seq(
      '$',
      $.identifier
    ),
    url: $ => /\/[a-zA-Z0-9\/\._-]+/,
    keyword: $ => choice('on', 'off'),
    arbitrary_text: $ => /[^\n]*/,

    token_type: $ => choice(
      'color',
      'text',
      'number',
      'dimension',
      'range',
      'toggle',
      'switch',
      'asset',
    ),
    tokens_block: $ => seq(
      'tokens',
      optional(
        seq(
          $.identifier,
          optional($.conditional),
        ),
      ),
      '{',
      repeat(seq($.token_declaration, optional($._newlines))),
      '}',
      optional($._newlines),
    ),
    token_declaration: $ => seq(
      $.token_type,
      $.identifier,
      ':', 
      $.style_value,
    ),

    component_block: $ => seq(
      'component',
      $.identifier,
      '{',
      repeat(
        choice(
          $.elements_block,
          $.style_block,
          $.variants_block,
        ),
      ),
      '}',
    ),

    variants_block: $ => seq(
      'variants',
      '{',
      repeat($.variant_declaration),
      '}',
    ),
    variant_declaration: $ => seq(
      $.token_type,
      $.identifier,
      ':',
      $.style_value,
    ),

    element_type: $ => choice(
      'text',
      'shape',
      'image',
      'video',
    ),
    element_declaration: $ => seq(
      $.element_type,
      $.identifier,
      optional(
        seq('{', $.element_declaration, '}')
      ),
    ),
    elements_block: $ => seq(
      'elements',
      '{',
      repeat($.element_declaration),
      '}',
      optional($._newlines),
    ),

    style_block: $ => seq(
      'style',
      seq(
        $.identifier,
        optional($.conditional),
      ),
      '{',
      repeat(seq($.style_declaration, optional($._newlines))),
      '}',
      optional($._newlines),
    ),
    style_declaration: $ => seq(
      $.identifier,
      ':',
      $.style_value,
    ),

    story_block: $ => seq(
      'story',
      $.spaced_identifier,
      '{',
      repeat($.frame_block),
      '}',
      optional($._newlines),
    ),

    frame_block: $ => seq(
      'frame',
      $.spaced_identifier,
      '{',
      $.frame_component,
      '}',
      optional($._newlines),
    ),

    frame_component: $ => seq(
      $.identifier,
      '{',
      repeat($.frame_rule),
      '}',
    ),
    frame_rule: $ => seq(
      $.identifier,
      ':',
      choice(
        $.frame_component,
        $.style_value,
      ),
    ),

    frame_declaration: $ => seq(
      seq($.identifier, '{'),
      repeat(
        seq(
          $.identifier,
          ':',
          choice(
            seq($.style_value, $._newlines),
            $.frame_declaration,
          ),
          optional($._newlines),
        ),
      ),
      '}',
    ),

  },
});
