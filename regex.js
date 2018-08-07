const pattern = $ => choice(
  $.disjunction,
  $.term,
)

const disjunction = $ =>
  seq(optional($.term), repeat1(seq('|', optional($.term))))

const term = $ =>
  repeat1(seq(
    choice(
      $.start_assertion,
      $.end_assertion,
      $.boundary_assertion,
      $.non_boundary_assertion,
      $.lookahead_assertion,
      $.pattern_character,
      $.character_class,
      $.any_character,
      $.decimal_escape,
      $.character_class_escape,
      $._character_escape,
      $.backreference_escape,
      $.anonymous_capturing_group,
      $.named_capturing_group,
      $.non_capturing_group,
    ),
    optional(choice(
      $.zero_or_more,
      $.one_or_more,
      $.optional,
      $.count_quantifier,
    ))
  ))

const any_character = $ => '.'

const start_assertion = $ => '^'
const end_assertion = $ => '$'
const boundary_assertion = $ => '\\b'
const non_boundary_assertion = $ => '\\B'
const lookahead_assertion = $ =>
  seq(
    '(?',
    choice('=', '!', '<=', '<!'),
    $.pattern,
    ')'
  )

const pattern_character = $ =>
  // Anything not a SYNTAX_CHAR
  new RegExp(`[^${SYNTAX_CHARS_ESCAPED}\\n]`)

const character_class = $ => seq(
  '[',
  optional('^'),
  repeat($.class_range),
  ']'
)

const class_range = $ => prec.right(
  seq($.class_atom, optional(seq('-', $.class_atom)))
)

const class_atom = $ => choice(
  '-',
  // NOT: \ ] or -
  /[^\\\]\-]/,
  choice(
    alias('\\-', $.identity_escape),
    $.character_class_escape,
    $._character_escape,
  )
)

const anonymous_capturing_group = $ =>
  seq('(', $.pattern, ')')

const named_capturing_group = $ =>
  seq('(?<', $.group_name, '>', $.pattern, ')')

const non_capturing_group = $ =>
  seq('(?:', $.pattern, ')')

const quantifierRule = prefix => $ => seq(
  prefix($),
  optional(alias('?', $.lazy))
)

const zero_or_more = quantifierRule($ => '*')
const one_or_more = quantifierRule($ => '+')
const optional_quantifier = quantifierRule($ => '?')
const count_quantifier = quantifierRule($ => seq(
  '{',
  seq($.decimal_digits, optional(seq(',', $.decimal_digits))),
  '}'
))

const backreference_escape = $ => seq('\\k', $.group_name)

const decimal_escape = $ => /\\[1-9][0-9]+/

const character_class_escape = $ => seq('\\', choice(
  /[dDsSwW]/,
  seq(/[pP]/, '{', $.unicode_property_value_expression, '}')
))

const unicode_property_value_expression = $ => seq(
  optional(seq(alias($.unicode_property, $.unicode_property_name), '=')),
  alias($.unicode_property, $.unicode_property_value)
)

const unicode_property = $ => /[a-zA-Z_0-9]+/

const _character_escape = $ => choice(
  $.control_escape,
  $.control_letter_escape,
  $.identity_escape
)

const identity_escape = $ => new RegExp(`\\\\[${SYNTAX_CHARS_ESCAPED}]`)

// TODO: We should technically not accept \0 unless the
// lookahead is not also a digit.
// I think this has little bearing on the highlighting of
// correct regexes.
const control_escape = $ => /\\[bfnrtv0]/

const control_letter_escape = $ => /\\c[a-zA-Z]/

// TODO: This is an approximation of RegExpIdentifierName in the
// formal grammar, which allows for Unicode names through
// the following mechanism:
//
// RegExpIdentifierName[U]::
//   RegExpIdentifierStart[?U]
//   RegExpIdentifierName[?U]RegExpIdentifierPart[?U]
//
// RegExpIdentifierStart[U]::
//   UnicodeIDStart
//   $
//   _
//   \RegExpUnicodeEscapeSequence[?U]
//
// RegExpIdentifierPart[U]::
//   UnicodeIDContinue
//   $
//   \RegExpUnicodeEscapeSequence[?U]
//   <ZWNJ> <ZWJ>
// RegExpUnicodeEscapeSequence[U]::
//   [+U]uLeadSurrogate\uTrailSurrogate
//   [+U]uLeadSurrogate
//   [+U]uTrailSurrogate
//   [+U]uNonSurrogate
//   [~U]uHex4Digits
//   [+U]u{CodePoint}
const group_name = $ => /[A-Za-z0-9]+/

const decimal_digits = $ => /\d+/

const SYNTAX_CHARS = [
  ...'^$\\.*+?()[]{}|'
]

const SYNTAX_CHARS_ESCAPED = SYNTAX_CHARS.map(
  char => `\\${char}`
).join('')

module.exports = {
  pattern,
  disjunction,
  term,
  any_character,
  non_capturing_group,
  start_assertion,
  end_assertion,
  boundary_assertion,
  non_boundary_assertion,
  lookahead_assertion,
  character_class, class_range, class_atom,
  pattern_character,
  zero_or_more,
  one_or_more,
  optional: optional_quantifier,
  count_quantifier,
  decimal_escape,
  character_class_escape,
  _character_escape,
  backreference_escape,
  decimal_escape,
  character_class_escape,
  unicode_property_value_expression,
  unicode_property,
  identity_escape,
  control_escape,
  control_letter_escape,
  anonymous_capturing_group,
  named_capturing_group,
  group_name,
  decimal_digits,
}
