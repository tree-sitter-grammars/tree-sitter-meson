module.exports = {
  operatorunit: ($) =>
    seq(
      $.identifier,
      //repeat(/[\t ]/),
      operators(),
      //repeat(/[\t ]/),
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
	// TODO instead of choice?
  variableunit: ($) =>
    seq(
      choice(
        field("value", $.identifier),
        $.normal_command,
        $.number,
        $.experession_statement,
        $.string,
        $.bool,
        $.list,
      ),
      optional(
        seq(
          combineoperators(),
          choice(
            field("value", $.identifier),
            $.normal_command,
            $.number,
            $.experession_statement,
            $.string,
            $.bool,
            $.list,
          ),
        ),
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
        field("object", $.string),
        field("function", $.normal_command),
      ),
      ".",
      choice(
        field("function", $.normal_command),
        field("function", $.experession_statement),
        field("property", $.identifier),
      ),
    ),
};
function combineoperators() {
  return choice(
    "+",
    "/",
    "-",
  );
}
function operators() {
  return choice(
    "=",
    "+=",
    "-=",
    "/=",
    "+=",
  );
}
function logics() {
  return choice(
    "==",
    "!=",
    "and",
    "or",
  );
}
