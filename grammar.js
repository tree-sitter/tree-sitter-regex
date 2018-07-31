const syntaxChars = [
  ...'^$\\.*+?()[]{}|'
]

const escapedSyntaxChars = syntaxChars.map(
  char => `\\${char}`
).join('')

module.exports = grammar({
  name: 'regex',

  extras: $ => [],

  rules: {
    pattern: $ => choice(
      $.term,
      $.disjunction
    ),

    disjunction: $ => seq(
      optional($.term), '|', optional($.term)
    ),
      // prec.left(0, seq(
      //   $.term,
      //   repeat(seq(
      //     '|',
      //     $.term   // FIXME: Should be optional?
      //   ))
      // )),

    // alternative: $ => $.term,

    term: $ =>
      // FIXME: should be allowed to be empty
      prec.left(0, repeat1($.atom, optional($.quantifier))),

    assertion: $ => choice(
      '^', '$', '\\b', '\\B',
      seq(
        '(?',
        choice('=', '!', '<=', '<!'),
        $.pattern,
        ')'
      )
    ),

    atom: $ =>
    choice(
      $.assertion,
      $.pattern_character,
      '.',
      // seq('\\', $.atom_escape),
      // $.character_class,
      // seq('(', /* $.group_specifier, */ $.pattern, ')'),
      $.non_capturing_group,
    ),

    non_capturing_group: $ => seq('(?:', $.pattern, ')'),

    pattern_character: $ => new RegExp(`[^${escapedSyntaxChars}]`),

    quantifier: $ => seq(
      $.quantifier_prefix, optional('?')
    ),

    quantifier_prefix: $ => choice(
      '*', '+', '?',
      // $.range_quantifier,
    ),

    //
    // quantifier: $ => seq(
    //   $.quantifier_prefix, optional('?')
    // ),
    //
    // quantifier_prefix: $ => choice(
    //   '*', '+', '?',
    //   $.range_quantifier,
    // ),
    //
    // range_quantifier: $ => seq(
    //   '{',
    //   seq($.decimal_digits, optional(',', $.decimal_digits)),
    //   '}'
    // ),
    //
    //
    // character_class: $ => seq(
    //   '[',
    //   optional('^'),
    //   optional($.class_ranges),
    //   ']'
    // ),
    //
    // class_ranges: $ => seq(
    //   $.class_atom,
    //   seq('-', $.class_atom),
    // ),
    //
    // class_atom: $ => /[^\\\]\-]/,
    //
    atom_escape: $ => choice(
      // $.decimal_escape,
      $.character_class_escape,
      $.character_escape,
      // seq('k', $.group_name),
    ),

    character_class_escape: $ => /[dDsSwW]/,

    character_escape: $ => choice(
      $.control_escape,
      seq('c', $.control_letter)
      // 0[lookahead ∉ DecimalDigit]
    ),

    control_escape: $ => /[fnrtv]/,
    control_letter: $ => /[a-zA-Z]/,

    //   // TODO: [+U]p{UnicodePropertyValueExpression}
    //   // TODO: [+U]P{UnicodePropertyValueExpression}
    //
    // // group_name: $ => seq('<')
    //
    // decimal_digits: $ => /[0-9]+/
  }
})
