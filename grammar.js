module.exports = grammar({
  name: 'regex',
  extras: $ => ['\n'],
  rules: require('./regex.js')
})
