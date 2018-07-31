const pattern = $ => choice(
  $.disjunction,
  $.term,
)

const disjunction = $ =>
  seq(optional($.term), repeat1(seq('|', optional($.term))))

const term = $ =>
  repeat1($.atom, optional($.quantifier))

const assertion = $ => choice(
  '^', '$', '\\b', '\\B',
  seq(
    '(?',
    choice('=', '!', '<=', '<!'),
    $.pattern,
    ')'
  )
)

const atom = $ =>
  choice(
    $.assertion,
    $.pattern_character,
    '.',
    // seq('\\', $.atom_escape),
    // $.character_class,
    // seq('(', /* $.group_specifier, */ $.pattern, ')'),
    $.non_capturing_group,
  )

const pattern_character = $ =>
  // Anything not a SYNTAX_CHAR
  new RegExp(`[^${SYNTAX_CHARS_ESCAPED}]`)

const non_capturing_group = $ =>
  seq('(?:', $.pattern, ')')

const quantifier = $ =>
  seq($.quantifier_prefix, optional('?'))

const quantifier_prefix = $ => choice(
  '*', '+', '?',
  // $.range_quantifier,
)

const atom_escape = $ => choice(
  // $.decimal_escape,
  $.character_class_escape,
  $.character_escape,
  // seq('k', $.group_name),
)

const character_class_escape = $ => /[dDsSwW]/

const character_escape = $ => choice(
  $.control_escape,
  seq('c', $.control_letter)
  // 0[lookahead ∉ DecimalDigit]
)

const control_escape = $ => /[fnrtv]/
const control_letter = $ => /[a-zA-Z]/

const SYNTAX_CHARS = [
  ...'^$\\.*+?()[]{}|'
]

const SYNTAX_CHARS_ESCAPED = SYNTAX_CHARS.map(
  char => `\\${char}`
).join('')

module.exports = grammar({
  name: 'regex',

  extras: $ => [],

  rules: {
    pattern,
    disjunction,      
    term,
    assertion,
    atom,
    non_capturing_group,
    pattern_character,
    quantifier,
    quantifier_prefix,

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

    atom_escape,
    character_class_escape,
    character_escape,
    control_escape,
    control_letter,

    //   // TODO: [+U]p{UnicodePropertyValueExpression}
    //   // TODO: [+U]P{UnicodePropertyValueExpression}
    //
    // // group_name: $ => seq('<')
    //
    // decimal_digits: $ => /[0-9]+/
  }
})
