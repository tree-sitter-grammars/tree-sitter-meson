const base = require("./grammer/base");
const operation = require("./grammer/operation");
const closure = require("./grammer/closure");
module.exports = grammar({
  name: "meson",
  conflicts: ($) => [
    [$._logic_unit, $.normal_command],
    [$.variableunit, $._logic_unit],
    [$.operatorunit, $._logic_unit],
    [$.normal_command, $.variableunit],
    [$.normal_command, $.operatorunit],
    [$.variableunit, $.operatorunit],
    [$.variableunit, $.pair],
    [$.experession_statement],
    [$.variableunit],
  ],
  rules: {
    //source_file: ($) => repeat($._command_invocation),
    source_file: ($) =>
      repeat(
        $._unit,
      ),
    _unit: ($) =>
      seq(
        choice(
          $.experession_statement,
          $.comment,
          $.normal_command,
          $.operatorunit,
          $.if_condition,
          $.foreach_command,
        ),
      ),
    ...base,
    ...operation,
    ...closure,
  },
});
