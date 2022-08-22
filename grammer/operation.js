module.exports = {
  operatorunit: ($) =>
    seq(
      $.identifier,
      repeat(/[\t ]/),
      operators(),
      repeat(/[\t ]/),
      choice(
        $.dictionaries,
        $.list,
        $.string,
        $.bool,
        $.normal_command,
        $.number,
        $.experession_statement,
        field("value", $.identifier),
      ),
    ),
  _logic_unit: ($) =>
    choice(
      $.string,
      $.bool,
      $.normal_command,
      $.number,
      $.experession_statement,
      field("value", $.identifier),
    ),
  condition_unit: ($) =>
    seq(
      repeat(
        seq(
          optional("not"),
          $._logic_unit,
          logics(),
        ),
      ),
      optional("not"),
      $._logic_unit,
    ),
  experession_statement: ($) =>
    seq(
      choice(
        field("object", $.identifier),
        field("function", $.normal_command),
      ),
      ".",
      choice(
        field("function", $.normal_command),
        field("property", $.identifier),
      ),
    ),
};
function operators() {
  return choice(
    "=",
    "+",
    "-",
    "/",
    "+=",
  );
}
function logics() {
  return choice(
    "==",
    "and",
    "or",
  );
}
