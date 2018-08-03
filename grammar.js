const pattern = $ => choice(
  $.disjunction,
  $.term,
)

const disjunction = $ =>
  seq(optional($.term), repeat1(seq('|', optional($.term))))

const term = $ =>
  repeat1(seq($.atom, optional($.quantifier)))

const atom = $ =>
  choice(
    $.assertion,
    $.pattern_character,
    $.character_class,
    '.',
    seq('\\', $.atom_escape),
    // seq('(', /* $.group_specifier, */ $.pattern, ')'),
    $.non_capturing_group,
  )

const assertion = $ => choice(
  '^', '$', '\\b', '\\B',
  seq(
    '(?',
    choice('=', '!', '<=', '<!'),
    $.pattern,
    ')'
  )
)

const pattern_character = $ =>
  // Anything not a SYNTAX_CHAR
  new RegExp(`[^${SYNTAX_CHARS_ESCAPED}]`)

const character_class = $ => seq(
  '[',
  optional('^'),
  repeat($.class_range),
  ']'
)

const class_range = $ =>
  seq($.class_atom, optional(seq('-', $.class_atom)))

const class_atom = $ =>
  // NOT: \ ] or -
  /[^\\\]\-]/

const non_capturing_group = $ =>
  seq('(?:', $.pattern, ')')

const quantifier = $ =>
  seq($.quantifier_prefix, alias(optional('?'), $.non_greedy))

const quantifier_prefix = $ => choice(
  '*', '+', '?',
  $.count_quantifier,
)

const count_quantifier = $ => seq(
  '{',
  seq($.decimal_digits, optional(seq(',', $.decimal_digits))),
  '}'
)

const atom_escape = $ => choice(
  $.decimal_escape,
  $.character_class_escape,
  $.character_escape,
  // seq('k', $.group_name),
)

const decimal_escape = $ => /[1-9][0-9]+/

const character_class_escape = $ => /[dDsSwW]/
  // TODO: [+U]p{UnicodePropertyValueExpression}
  // TODO: [+U]P{UnicodePropertyValueExpression}

const character_escape = $ => choice(
  $.control_escape,
  seq('c', $.control_letter)
)

// TODO: We should technically not accept \0 unless the
// lookahead is not also a digit.
// I think this has little bearing on the highlighting of
// correct regexes.
const control_escape = $ => /[fnrtv0]/

const control_letter = $ => /[a-zA-Z]/

const decimal_digits = $ => /[0-9]+/

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
    atom,
    non_capturing_group,
    assertion,
    character_class, class_range, class_atom,
    pattern_character,
    quantifier,
    quantifier_prefix,
    count_quantifier,
    atom_escape,
    decimal_escape,
    character_class_escape,
    character_escape,
    control_escape,
    control_letter,
    decimal_digits,

    //
    // // group_name: $ => seq('<')
    //
    //
  }
})
