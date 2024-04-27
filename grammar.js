
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
        $.config,
        $._tokens,
        $.variants,
        $.single_line_comment,
        $.multi_line_comment,
      ),
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

    _ref: $ => seq(
      '$',
      $.ref,
    ),

    _tokens: $ => seq(
      'tokens',
      alias($.block, $.tokens),
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

    config: $ => seq(
      'config',
      '{',
      repeat(
        choice(
          $.config_def,
          $.config_block,
        ),
      ),
      '}',
    ),

    config_block: $ => seq(
      $.id,
      '{',
      repeat(
        $.config_def,
      ),
      '}',
    ),

    config_def: $ => seq(
      $.id,
      ':',
      choice(
        $._str,
        $.num,
      ),
    ),

    def: $ => seq(
      $.type,
      alias($.id, $.def_id),
      ':',
      alias($._exp, $.exp),
    ),

    id: $ => /[a-zA-Z][a-zA-Z0-9_-]+/i,

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

    func: $ => seq(
      $.func_id,
      $.params,
    ),

    func_id: $ => /[a-zA-Z][a-zA-Z0-9]+/,

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

    op: $ => choice(
      '+',
      '-',
      '*',
      '/',
      '%',
    ),

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

    pos: $ => /is/,

    ref: $ => /[a-zA-Z][a-zA-Z0-9_.-]+/i,

    set: $ => seq(
      alias($.id, $.set_id),
      ':',
      alias($._exp, $.exp),
    ),

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

    type: $ => choice(
      'text',
      'color',
      'asset',
      'switch',
      'dimension',
      'range',
    ),

    unit: $ => token.immediate(/(px|%|em|rem|in|pt|cm|mm|pc|ch|ex|vw|vh|vmin|vmax|dvh|dvw|deg|ms|s)/),

    var: $ => seq(
      $.type,
      $.id,
      ':',
      $.base,
    ),

    variants: $ => seq(
      'variants',
      '{',
      repeat1(
        $.var,
      ),
      '}',
    ),

  },
});
