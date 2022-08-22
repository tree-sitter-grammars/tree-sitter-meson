commands = [
  "if",
  "elseif",
  "else",
  "endif",
  "foreach",
  "endforeach",
  "while",
  "endwhile",
  "function",
  "endfunction",
  "macro",
  "endmacro",
];
module.exports = {
  ...commandNames(...commands),
};
function commandName(name) {
  return { [name]: (_) => iregex(name) };
}
function commandNames(...names) {
  return Object.assign({}, ...names.map(commandName));
}
