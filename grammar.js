module.exports = grammar({
  name: 'regex',
  extras: $ => ['\n'],
  inline: $ => [$._character_escape],
  rules: require('./regex.js')
})
