const base = require("./grammar/base");
const operation = require("./grammar/operation");
const closure = require("./grammar/closure");
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
    [$.pair, $.variableunit, $._logic_unit],
    [$.operatorunit, $.variableunit, $._logic_unit],
    [$.normal_command, $.variableunit, $._logic_unit],
    [$.pair, $._logic_unit],
    [$.listitem, $.experession_statement],
    [$.list, $.variableunit],
    [$.listitem, $.variableunit],
    [$.listitem, $._logic_unit],
    [$.normal_command, $.experession_statement],
    [$._logic_unit],
    [$.var_unit],
    [$.normal_command, $.pair, $.variableunit, $._logic_unit],
    [$.listitem, $.pair, $.variableunit, $._logic_unit],
  ],
  rules: {
    //source_file: ($) => repeat($._command_invocation),
    source_file: ($) => repeat($._unit),
    _unit: ($) =>
      seq(
        choice(
          $.experession_statement,
          $.comment,
          $.normal_command,
          $.operatorunit,
          $.if_condition,
          $.foreach_command
        )
      ),
    ...base,
    ...operation,
    ...closure,
  },
});
