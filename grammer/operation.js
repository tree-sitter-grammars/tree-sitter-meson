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
  );
}
