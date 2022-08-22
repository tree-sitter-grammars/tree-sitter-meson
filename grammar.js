const base = require("./grammer/base");
const operation = require("./grammer/operation");
const closure = require("./grammer/closure");
module.exports = grammar({
  name: "meson",

  rules: {
    //source_file: ($) => repeat($._command_invocation),
    source_file: ($) =>
      repeat(
        $._unit,
      ),
    _unit: ($) =>
      choice(
        $.experession_statement,
        $.comment,
        $.normal_command,
        $.operatorunit,
        $.if_condition,
      ),
    ...base,
    ...operation,
    ...closure,
  },
});
