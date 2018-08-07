module.exports = grammar({
  name: 'regex',
  extras: $ => [],
  rules: require('./regex.js')
})
