
module.exports = grammar({
  name: 'matry',

  rules: {
    source_file: $ => repeat(
      choice(
        $.single_line_comment,
        $.tokens_block,
        $.component_block,
        $.story_block,
      ),
    ),

    spaced_identifier: $ => /[a-zA-Z0-9\s]+/,
    identifier: $ => /[a-zA-Z0-9][a-zA-Z0-9_-]+/i,
    _newlines: $ => /\n+/,
    value: $ => choice(
      $.dimension,
      $.token_reference,
      $.url,
      $.keyword,
      $.arbitrary_text,
    ),
    single_line_comment: $ => /\/\/[^\n]*/,

    dimension: $ => /[0-9]+(px|%|em|rem)?(\s[0-9]+(px|%|em|rem)?)*\s*/,
    token_reference: $ => seq(
      '$',
      $.identifier
    ),
    url: $ => /\/[a-zA-Z0-9\/\._-]+/,
    keyword: $ => choice('on', 'off'),
    arbitrary_text: $ => /[^\n]*/,

    tokens_block: $ => seq(
      'tokens',
      '{',
      repeat(seq($.token_declaration, optional($._newlines))),
      '}',
      optional($._newlines),
    ),
    token_declaration: $ => seq(
      $.identifier,
      ':', 
      $.value,
    ),

    component_block: $ => seq(
      'component',
      $.identifier,
      '{',
      repeat(
        choice(
          $.elements_block,
          $.style_block,
        ),
      ),
      '}',
    ),

    elements_block: $ => seq(
      'elements',
      '{',
      repeat(seq($.identifier, optional($._newlines))),
      '}',
      optional($._newlines),
    ),

    style_block: $ => seq(
      'style',
      $.identifier,
      '{',
      repeat(seq($.style_declaration, optional($._newlines))),
      '}',
      optional($._newlines),
    ),
    style_declaration: $ => seq(
      $.identifier,
      ':',
      $.value,
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
      'render',
      $.identifier,
      '}',
      optional($._newlines),
    ),

  },
});


    


    // kv_pair: $ => seq(
    //   '{',
    //   repeat(
    //     seq(
    //       $.key,
    //       ':',
    //       $.value,
    //     ),
    //   ),
    //   '}',
    // ),
    // value: $ => choice(
    //   $.list,
    //   $.dimension,
    //   $.url,
    //   $.arbitrary_text,
    // ),

    // key: $ => /[a-zA-Z0-9]+/,
    // _newlines: $ =>  /\n+/,

    // dimension: $ => /[0-9]+(px|%|em|rem)?(\s[0-9]+(px|%|em|rem)?)*\s*/,
    // url: $ => /\/[a-zA-Z0-9\/\._-]+/,
    // arbitrary_text: $ => /[^\n]*/,
















