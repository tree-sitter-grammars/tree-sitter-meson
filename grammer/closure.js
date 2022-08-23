module.exports = {
  //...commandNames(...commands),
  if_condition: ($) =>
    seq(
      $.if_command,
      repeat($.elseif_command),
      optional($.else_command),
      "endif",
    ),
  if_command: ($) =>
    seq(
      "if",
      //repeat(/[\t ]/),

      $.condition_unit,
      optional(
        repeat(
          $._unit,
        ),
      ),
    ),
  elseif_command: ($) =>
    seq(
      "elif",
      //repeat(/[\t ]/),
      $.condition_unit,
      optional(
        repeat(
          $._unit,
        ),
      ),
    ),
  else_command: ($) =>
    seq(
      "else",
      //repeat(/[\t ]/),
      optional(
        repeat(
          $._unit,
        ),
      ),
    ),
};
