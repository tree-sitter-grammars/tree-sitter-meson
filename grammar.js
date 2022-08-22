const base = require("./grammer/base");
const operation = require("./grammer/operation");

module.exports = grammar({
  name: "meson",

  rules: {
    //source_file: ($) => repeat($._command_invocation),
    source_file: ($) =>
      repeat(
        choice(
          $.normal_command,
          $.operatorunit,
        ),
      ),


    ...base,
    ...operation,
  },
});

