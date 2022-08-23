module.exports = {
  //_command_invocation: ($) =>
  //  choice(
  //    $.normal_command,
  //    $.if_condition,
  //    $.foreach_loop,
  //    $.while_loop,
  //    $.function_def,
  //    $.macro_def,
  //  ),
  // project(a)
  // find_program('git', native: true)
  // runcommand([a,b,c])
  normal_command: ($) =>
    command(
      field("command", $.identifier),
      optional(
        seq(
          optional($.comment),
          repeat(
            seq(
              choice(
                $.listitem,
                $.list,
                $.experession_statement,
                $.pair,
                $.variableunit,
              ),
              ",",
              optional($.comment),
            ),
          ),
          choice(
            $.listitem,
            $.list,
            $.experession_statement,
            $.pair,
            $.variableunit,
          ),
          optional(","),
          optional($.comment),
        ),
      ),
    ),
  bool: ($) =>
    choice(
      "true",
      "false",
    ),
  string: ($) =>
    choice(
      //'sss.ss'
      seq(
        "'",
        /[^']+/g,
        "'",
      ),
      //"ss.ss"
      seq(
        '"',
        /[^"]+/g,
        '"',
      ),
      seq(
        "'''",
        /[^''']+/g,
        "'''",
      ),
    ),
  dictionaries: ($) =>
    seq(
      "{",
      repeat(
        seq(
          $.pair,
          ",",
        ),
      ),
      "}",
    ),
  listitem: ($) =>
    seq(
      $.identifier,
      "[",
      field("index", $.number),
      "]",
    ),
  list: ($) =>
    seq(
      "[",
      optional(seq(
        repeat(
          seq(
            choice(
              $.number,
              $.string,
              $.list,
              field("variable", $.identifier),
              field("variable", $.experession_statement),
            ),
            ",",
            optional($.comment),
          ),
        ),
        seq(
          choice(
            $.number,
            $.string,
            $.list,
            field("variable", $.identifier),
            field("variable", $.experession_statement),
          ),
          optional(","),
          optional($.comment),
        ),
      )),
      "]",
    ),
  pair: ($) =>
    seq(
      field(
        "key",
        choice(
          $.identifier,
          $.string,
        ),
      ),
      ":",
      field(
        "value",
        choice(
          $.normal_command,
          $.number,
          $.identifier,
          $.list,
          $.string,
          $.bool,
          $.experession_statement,
        ),
      ),
    ),
  identifier: (_) => /[A-Za-z_][A-Za-z0-9_]*/,
  comment: (_) =>
    seq(
      "#",
      /[^\n]+/g,
    ),
  number: ($) => {
    const hex_literal = seq(
      choice("0x", "0X"),
      /[\da-fA-F](_?[\da-fA-F])*/,
    );

    const decimal_digits = /\d(_?\d)*/;
    const signed_integer = seq(optional(choice("-", "+")), decimal_digits);
    const exponent_part = seq(choice("e", "E"), signed_integer);

    const binary_literal = seq(choice("0b", "0B"), /[0-1](_?[0-1])*/);

    const octal_literal = seq(choice("0o", "0O"), /[0-7](_?[0-7])*/);

    const bigint_literal = seq(
      choice(hex_literal, binary_literal, octal_literal, decimal_digits),
      "n",
    );

    const decimal_integer_literal = choice(
      "0",
      seq(optional("0"), /[1-9]/, optional(seq(optional("_"), decimal_digits))),
    );

    const decimal_literal = choice(
      seq(
        decimal_integer_literal,
        ".",
        optional(decimal_digits),
        optional(exponent_part),
      ),
      seq(".", decimal_digits, optional(exponent_part)),
      seq(decimal_integer_literal, exponent_part),
      seq(decimal_digits),
    );

    return token(choice(
      hex_literal,
      decimal_literal,
      binary_literal,
      octal_literal,
      bigint_literal,
    ));
  },
};
function command(name_rule, arg_rule) {
  return seq(
    name_rule,
    //repeat(/[\t ]/),
    "(",
    arg_rule,
    ")",
  );
}
