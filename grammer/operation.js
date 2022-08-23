module.exports = {
  operatorunit: ($) =>
    seq(
      $.identifier,
      //repeat(/[\t ]/),
      operators(),
      //repeat(/[\t ]/),
      choice(
        //$.stringunit,
        $.listitem,
        $.dictionaries,
        $.list,
        $.variableunit,
        $.bool,
        $.normal_command,
        $.number,
        $.experession_statement,
				$.ternaryoperator,
        //field("value", $.identifier),
      ),
    ),
  variableunit: ($) =>
    seq(
      choice(
        $.string,
        field("value", $.identifier),
      ),
      optional(
        repeat(seq(
          "+",
          choice(
            $.identifier,
            $.string,
          ),
        )),
      ),
    ),
  ternaryoperator: ($) =>
    seq(
      $.condition_unit,
      "?",
      $.condition_unit,
      ":",
      $.condition_unit,
    ),
  _logic_unit: ($) =>
    choice(
      $.string,
      $.bool,
      $.normal_command,
      $.number,
      $.experession_statement,
      seq(
        "(",
        $.condition_unit,
        ")",
      ),
      field("value", $.identifier),
    ),
  condition_unit: ($) =>
    seq(
      repeat(
        seq(
          // not true
          optional("not"),
          $._logic_unit,
          // for example not in
          optional("not"),
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
//function combineoperators() {
//  return choice(
//    "+",
//    "/",
//    "-",
//  );
//}
function operators() {
  return choice(
    "=",
    "+=",
    "-=",
    "/=",
  );
}
function logics() {
  return choice(
    "==",
    "!=",
    "and",
    "or",
    "in",
  );
}
