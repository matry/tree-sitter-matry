
module.exports = grammar({
  name: 'matry',

  /*
  NOTE:
  The following rules are arranged alphabetically, except for the source_file rule.
  Since it defines the root of any matry file, it belongs at the top.
  */
  rules: {

    file: $ => repeat(
      choice(
        $._tokens,
        $.variants,
        $.single_line_comment,
        $.multi_line_comment,
      ),
    ),

    _tokens: $ => seq(
      'tokens',
      alias($.block, $.tokens),
    ),

    variants: $ => seq(
      'variants',
      '{',
      repeat1(
        $.var,
      ),
      '}',
    ),

    var: $ => seq(
      $.type,
      $.id,
      ':',
      $.base,
    ),

    base: $ => choice(
      $.dimension,
      $.num,
      $._str,
      $.func,
      $.hex,
      $._ref,
      $.asset,
      $.switch,
    ),

    block: $ => seq(
      optional(
        alias($.id, $.block_id),
      ),
      '{',
      repeat1(
        choice(
          $.def,
          $.block,
          $.cond,
        ),
      ),
      '}',
    ),

    def: $ => seq(
      $.type,
      alias($.id, $.def_id),
      ':',
      alias($._exp, $.exp),
    ),

    id: $ => /[a-zA-Z][a-zA-Z0-9_-]+/i,

    type: $ => choice(
      'text',
      'color',
      'asset',
      'switch',
      'dimension',
      'range',
    ),

    _exp: $ => choice(
      $.dimension,
      $.num,
      $._str,
      $._func,
      $.hex,
      $._ref,
      $.asset,
      $.arithmetic,
    ),

    _newlines: $ => /\n+/,

    // This weirdness is necessary so that we don't capture the quotes themselves in the AST
    _str: $ => seq(
      /"/,
      $.str,
      /"/,
    ),

    asset: $ => /\/[a-zA-Z0-9\/\._-]+/,

    asterisk: $ => '*',

    bool: $ => seq(
      choice(
        $.neg,
        $.pos,
      ),
      $.id,
    ),

    assertion: $ => seq(
      $.bool,
      '{',
      repeat1(
        seq(
          $.set,
          $._newlines,
        ),
      ),
      '}',
    ),

    cond: $ => seq(
      'when',
      $._ref,
      choice(
        seq(
          '{',
          repeat1($.assertion),
          '}',
        ),
        $.assertion,
      ),
    ),

    decimal_range: $ => /(0(\.\d+)?|1(\.0+)?)/,

    dimension: $ => seq(
      $.num,
      $.unit,
    ),

    unit: $ => token.immediate(/(px|%|em|rem|in|pt|cm|mm|pc|ch|ex|vw|vh|vmin|vmax|dvh|dvw|deg|ms|s)/),

    hex: $ => seq(
      '#',
      choice(
        /[0-9a-fA-F]{3}/,
        /[0-9a-fA-F]{4}/,
        /[0-9a-fA-F]{6}/,
        /[0-9a-fA-F]{8}/,
      ),
    ),

    multi_line_comment: $ => token(seq(
      '/*',
      /[^*]*\*+([^/*][^*]*\*+)*/,
      '/',
    )),

    neg: $ => /is not/,

    num: $ => /-?\d+(\.\d+)?/,

    arithmetic: $ => seq(
      choice(
        $.dimension,
        $._str,
        $._func,
        $.hex,
        $._ref,
      ),
      repeat1(
        seq(
          $.op,
          choice(
            $.dimension,
            $._str,
            $._func,
            $.hex,
            $._ref,
          ),
        ),
      ),
    ),

    func: $ => seq(
      $.func_id,
      $.params,
    ),

    _func: $ => seq(
      $.func,
      repeat(
        seq(
          '.',
          $.func,
        ),
      ),
    ),

    func_id: $ => /[a-zA-Z][a-zA-Z0-9]+/,

    params: $ => seq(
      '(',
      optional(
        seq(
          $._exp,
          repeat(
            seq(
              ',',
              $._exp,
            ),
          ),
        ),
      ),
      ')',
    ),

    op: $ => choice(
      '+',
      '-',
      '*',
      '/',
      '%',
    ),

    pos: $ => /is/,

    ref: $ => /[a-zA-Z][a-zA-Z0-9_.-]+/i,

    single_line_comment: $ => token(/\/\/[^\n]*/),

    str: $ => /[^\\n^"]*/,

    switch: $ => seq(
      seq(
        $.id,
        optional($.asterisk),
      ),
      repeat1(
        seq(
          ',',
          $.id,
          optional($.asterisk),
        ),
      ),
    ),

    set: $ => seq(
      alias($.id, $.set_id),
      ':',
      alias($._exp, $.exp),
    ),

    _ref: $ => seq(
      '$',
      $.ref,
    ),

  },
});
