#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 96
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 42
#define ALIAS_COUNT 0
#define TOKEN_COUNT 27
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 12

enum {
  aux_sym_normal_command_token1 = 1,
  anon_sym_LPAREN = 2,
  anon_sym_COMMA = 3,
  anon_sym_RPAREN = 4,
  anon_sym_true = 5,
  anon_sym_false = 6,
  anon_sym_SQUOTE = 7,
  aux_sym_string_token1 = 8,
  anon_sym_DQUOTE = 9,
  aux_sym_string_token2 = 10,
  anon_sym_SQUOTE_SQUOTE_SQUOTE = 11,
  aux_sym_string_token3 = 12,
  anon_sym_LBRACE = 13,
  anon_sym_RBRACE = 14,
  anon_sym_LBRACK = 15,
  anon_sym_RBRACK = 16,
  anon_sym_COLON = 17,
  sym_identifier = 18,
  anon_sym_POUND = 19,
  aux_sym_comment_token1 = 20,
  sym_number = 21,
  anon_sym_EQ = 22,
  anon_sym_PLUS = 23,
  anon_sym_DASH = 24,
  anon_sym_SLASH = 25,
  anon_sym_DOT = 26,
  sym_source_file = 27,
  sym_normal_command = 28,
  sym_bool = 29,
  sym_string = 30,
  sym_dictionaries = 31,
  sym_list = 32,
  sym_pair = 33,
  sym_comment = 34,
  sym_operatorunit = 35,
  sym_experession_statement = 36,
  aux_sym_source_file_repeat1 = 37,
  aux_sym_normal_command_repeat1 = 38,
  aux_sym_normal_command_repeat2 = 39,
  aux_sym_dictionaries_repeat1 = 40,
  aux_sym_list_repeat1 = 41,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_normal_command_token1] = "normal_command_token1",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_string_token1] = "string_token1",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token2] = "string_token2",
  [anon_sym_SQUOTE_SQUOTE_SQUOTE] = "'''",
  [aux_sym_string_token3] = "string_token3",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_COLON] = ":",
  [sym_identifier] = "identifier",
  [anon_sym_POUND] = "#",
  [aux_sym_comment_token1] = "comment_token1",
  [sym_number] = "number",
  [anon_sym_EQ] = "=",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_SLASH] = "/",
  [anon_sym_DOT] = ".",
  [sym_source_file] = "source_file",
  [sym_normal_command] = "normal_command",
  [sym_bool] = "bool",
  [sym_string] = "string",
  [sym_dictionaries] = "dictionaries",
  [sym_list] = "list",
  [sym_pair] = "pair",
  [sym_comment] = "comment",
  [sym_operatorunit] = "operatorunit",
  [sym_experession_statement] = "experession_statement",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_normal_command_repeat1] = "normal_command_repeat1",
  [aux_sym_normal_command_repeat2] = "normal_command_repeat2",
  [aux_sym_dictionaries_repeat1] = "dictionaries_repeat1",
  [aux_sym_list_repeat1] = "list_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_normal_command_token1] = aux_sym_normal_command_token1,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token2] = aux_sym_string_token2,
  [anon_sym_SQUOTE_SQUOTE_SQUOTE] = anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [aux_sym_string_token3] = aux_sym_string_token3,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_identifier] = sym_identifier,
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [sym_number] = sym_number,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_DOT] = anon_sym_DOT,
  [sym_source_file] = sym_source_file,
  [sym_normal_command] = sym_normal_command,
  [sym_bool] = sym_bool,
  [sym_string] = sym_string,
  [sym_dictionaries] = sym_dictionaries,
  [sym_list] = sym_list,
  [sym_pair] = sym_pair,
  [sym_comment] = sym_comment,
  [sym_operatorunit] = sym_operatorunit,
  [sym_experession_statement] = sym_experession_statement,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_normal_command_repeat1] = aux_sym_normal_command_repeat1,
  [aux_sym_normal_command_repeat2] = aux_sym_normal_command_repeat2,
  [aux_sym_dictionaries_repeat1] = aux_sym_dictionaries_repeat1,
  [aux_sym_list_repeat1] = aux_sym_list_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_normal_command_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE_SQUOTE_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token3] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_normal_command] = {
    .visible = true,
    .named = true,
  },
  [sym_bool] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_dictionaries] = {
    .visible = true,
    .named = true,
  },
  [sym_list] = {
    .visible = true,
    .named = true,
  },
  [sym_pair] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_operatorunit] = {
    .visible = true,
    .named = true,
  },
  [sym_experession_statement] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_normal_command_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_normal_command_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_dictionaries_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_list_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_function = 1,
  field_key = 2,
  field_object = 3,
  field_property = 4,
  field_value = 5,
  field_variable = 6,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_function] = "function",
  [field_key] = "key",
  [field_object] = "object",
  [field_property] = "property",
  [field_value] = "value",
  [field_variable] = "variable",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 2},
  [5] = {.index = 5, .length = 1},
  [6] = {.index = 6, .length = 2},
  [7] = {.index = 8, .length = 2},
  [8] = {.index = 10, .length = 2},
  [9] = {.index = 12, .length = 2},
  [10] = {.index = 14, .length = 2},
  [11] = {.index = 16, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_value, 2},
  [1] =
    {field_variable, 0},
  [2] =
    {field_value, 3},
  [3] =
    {field_key, 0},
    {field_value, 2},
  [5] =
    {field_variable, 1, .inherited = true},
  [6] =
    {field_variable, 0, .inherited = true},
    {field_variable, 1, .inherited = true},
  [8] =
    {field_object, 0},
    {field_property, 2},
  [10] =
    {field_function, 2},
    {field_object, 0},
  [12] =
    {field_function, 0},
    {field_property, 2},
  [14] =
    {field_function, 0},
    {field_function, 2},
  [16] =
    {field_value, 4},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(19);
      if (lookahead == '"') ADVANCE(30);
      if (lookahead == '#') ADVANCE(49);
      if (lookahead == '\'') ADVANCE(27);
      if (lookahead == '(') ADVANCE(21);
      if (lookahead == ')') ADVANCE(23);
      if (lookahead == '+') ADVANCE(63);
      if (lookahead == ',') ADVANCE(22);
      if (lookahead == '-') ADVANCE(64);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == '0') ADVANCE(53);
      if (lookahead == ':') ADVANCE(40);
      if (lookahead == '=') ADVANCE(62);
      if (lookahead == '[') ADVANCE(38);
      if (lookahead == ']') ADVANCE(39);
      if (lookahead == 'f') ADVANCE(41);
      if (lookahead == 't') ADVANCE(45);
      if (lookahead == '{') ADVANCE(36);
      if (lookahead == '}') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(50);
      if (lookahead != 0) ADVANCE(51);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(30);
      if (lookahead == '\'') ADVANCE(27);
      if (lookahead == '(') ADVANCE(21);
      if (lookahead == '+') ADVANCE(63);
      if (lookahead == '-') ADVANCE(64);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == '0') ADVANCE(53);
      if (lookahead == '=') ADVANCE(62);
      if (lookahead == '[') ADVANCE(38);
      if (lookahead == 'f') ADVANCE(41);
      if (lookahead == 't') ADVANCE(45);
      if (lookahead == '{') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(20);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(30);
      if (lookahead == '\'') ADVANCE(27);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == '0') ADVANCE(53);
      if (lookahead == '[') ADVANCE(38);
      if (lookahead == 'f') ADVANCE(41);
      if (lookahead == 't') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 4:
      if (lookahead == '\'') ADVANCE(33);
      END_STATE();
    case 5:
      if (lookahead == '\'') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      END_STATE();
    case 7:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(55);
      END_STATE();
    case 8:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(35);
      END_STATE();
    case 9:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(32);
      END_STATE();
    case 10:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(29);
      END_STATE();
    case 11:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(56);
      END_STATE();
    case 12:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      END_STATE();
    case 13:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      END_STATE();
    case 16:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(57);
      END_STATE();
    case 17:
      if (eof) ADVANCE(19);
      if (lookahead == '"') ADVANCE(30);
      if (lookahead == '#') ADVANCE(49);
      if (lookahead == '\'') ADVANCE(27);
      if (lookahead == ')') ADVANCE(23);
      if (lookahead == ',') ADVANCE(22);
      if (lookahead == '.') ADVANCE(66);
      if (lookahead == ':') ADVANCE(40);
      if (lookahead == ']') ADVANCE(39);
      if (lookahead == '}') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 18:
      if (eof) ADVANCE(19);
      if (lookahead == '#') ADVANCE(49);
      if (lookahead == '(') ADVANCE(21);
      if (lookahead == '.') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(20);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(18)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_normal_command_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\'') ADVANCE(4);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(29);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(32);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(32);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SQUOTE_SQUOTE);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(35);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(51);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_number);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(61);
      if (lookahead == '0') ADVANCE(58);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(7);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(6);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(11);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(16);
      if (lookahead == '_') ADVANCE(14);
      if (lookahead == 'n') ADVANCE(52);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(54);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(61);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(6);
      if (lookahead == '_') ADVANCE(12);
      if (lookahead == 'n') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(7);
      if (lookahead == 'n') ADVANCE(52);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(11);
      if (lookahead == 'n') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(16);
      if (lookahead == 'n') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(14);
      if (lookahead == 'n') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(6);
      if (lookahead == '_') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 17},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 17},
  [9] = {.lex_state = 17},
  [10] = {.lex_state = 17},
  [11] = {.lex_state = 17},
  [12] = {.lex_state = 17},
  [13] = {.lex_state = 17},
  [14] = {.lex_state = 17},
  [15] = {.lex_state = 17},
  [16] = {.lex_state = 17},
  [17] = {.lex_state = 17},
  [18] = {.lex_state = 17},
  [19] = {.lex_state = 17},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 17},
  [22] = {.lex_state = 18},
  [23] = {.lex_state = 17},
  [24] = {.lex_state = 17},
  [25] = {.lex_state = 18},
  [26] = {.lex_state = 18},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 17},
  [29] = {.lex_state = 18},
  [30] = {.lex_state = 18},
  [31] = {.lex_state = 17},
  [32] = {.lex_state = 17},
  [33] = {.lex_state = 17},
  [34] = {.lex_state = 17},
  [35] = {.lex_state = 17},
  [36] = {.lex_state = 17},
  [37] = {.lex_state = 17},
  [38] = {.lex_state = 17},
  [39] = {.lex_state = 17},
  [40] = {.lex_state = 17},
  [41] = {.lex_state = 17},
  [42] = {.lex_state = 17},
  [43] = {.lex_state = 17},
  [44] = {.lex_state = 17},
  [45] = {.lex_state = 17},
  [46] = {.lex_state = 17},
  [47] = {.lex_state = 17},
  [48] = {.lex_state = 17},
  [49] = {.lex_state = 17},
  [50] = {.lex_state = 17},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 17},
  [53] = {.lex_state = 17},
  [54] = {.lex_state = 17},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 17},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 17},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 17},
  [61] = {.lex_state = 17},
  [62] = {.lex_state = 17},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 17},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 17},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 8},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 9},
  [79] = {.lex_state = 10},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 5},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 1},
  [87] = {.lex_state = 5},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 10},
  [94] = {.lex_state = 9},
  [95] = {.lex_state = 8},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(91),
    [sym_normal_command] = STATE(28),
    [sym_comment] = STATE(28),
    [sym_operatorunit] = STATE(28),
    [aux_sym_source_file_repeat1] = STATE(28),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_identifier] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 12,
    ACTIONS(9), 1,
      aux_sym_normal_command_token1,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(25), 1,
      sym_number,
    STATE(6), 1,
      aux_sym_normal_command_repeat1,
    STATE(40), 1,
      sym_normal_command,
    ACTIONS(11), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(52), 5,
      sym_bool,
      sym_string,
      sym_dictionaries,
      sym_list,
      sym_experession_statement,
  [42] = 12,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      aux_sym_normal_command_token1,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(31), 1,
      sym_number,
    STATE(2), 1,
      aux_sym_normal_command_repeat1,
    STATE(43), 1,
      sym_normal_command,
    ACTIONS(11), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(45), 5,
      sym_bool,
      sym_string,
      sym_dictionaries,
      sym_list,
      sym_experession_statement,
  [84] = 12,
    ACTIONS(9), 1,
      aux_sym_normal_command_token1,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(31), 1,
      sym_number,
    STATE(6), 1,
      aux_sym_normal_command_repeat1,
    STATE(43), 1,
      sym_normal_command,
    ACTIONS(11), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(45), 5,
      sym_bool,
      sym_string,
      sym_dictionaries,
      sym_list,
      sym_experession_statement,
  [126] = 12,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      aux_sym_normal_command_token1,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(37), 1,
      sym_number,
    STATE(4), 1,
      aux_sym_normal_command_repeat1,
    STATE(39), 1,
      sym_normal_command,
    ACTIONS(11), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(58), 5,
      sym_bool,
      sym_string,
      sym_dictionaries,
      sym_list,
      sym_experession_statement,
  [168] = 3,
    ACTIONS(39), 1,
      aux_sym_normal_command_token1,
    STATE(6), 1,
      aux_sym_normal_command_repeat1,
    ACTIONS(42), 14,
      anon_sym_LPAREN,
      anon_sym_true,
      anon_sym_false,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym_identifier,
      sym_number,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
  [191] = 8,
    ACTIONS(46), 1,
      anon_sym_SQUOTE,
    ACTIONS(48), 1,
      anon_sym_DQUOTE,
    ACTIONS(50), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(52), 1,
      anon_sym_LBRACK,
    ACTIONS(54), 1,
      sym_identifier,
    ACTIONS(56), 1,
      sym_number,
    ACTIONS(44), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(72), 3,
      sym_bool,
      sym_string,
      sym_list,
  [219] = 7,
    ACTIONS(46), 1,
      anon_sym_SQUOTE,
    ACTIONS(48), 1,
      anon_sym_DQUOTE,
    ACTIONS(50), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(58), 1,
      anon_sym_COMMA,
    ACTIONS(60), 1,
      anon_sym_RBRACK,
    ACTIONS(62), 1,
      sym_identifier,
    STATE(12), 2,
      sym_string,
      aux_sym_list_repeat1,
  [242] = 2,
    ACTIONS(66), 1,
      anon_sym_SQUOTE,
    ACTIONS(64), 7,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_RBRACK,
      anon_sym_COLON,
      sym_identifier,
  [255] = 8,
    ACTIONS(46), 1,
      anon_sym_SQUOTE,
    ACTIONS(48), 1,
      anon_sym_DQUOTE,
    ACTIONS(50), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(68), 1,
      anon_sym_RBRACE,
    ACTIONS(70), 1,
      sym_identifier,
    STATE(18), 1,
      aux_sym_dictionaries_repeat1,
    STATE(81), 1,
      sym_string,
    STATE(85), 1,
      sym_pair,
  [280] = 7,
    ACTIONS(46), 1,
      anon_sym_SQUOTE,
    ACTIONS(48), 1,
      anon_sym_DQUOTE,
    ACTIONS(50), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(62), 1,
      sym_identifier,
    ACTIONS(72), 1,
      anon_sym_COMMA,
    ACTIONS(74), 1,
      anon_sym_RBRACK,
    STATE(12), 2,
      sym_string,
      aux_sym_list_repeat1,
  [303] = 6,
    ACTIONS(78), 1,
      anon_sym_SQUOTE,
    ACTIONS(81), 1,
      anon_sym_DQUOTE,
    ACTIONS(84), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(87), 1,
      sym_identifier,
    ACTIONS(76), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    STATE(12), 2,
      sym_string,
      aux_sym_list_repeat1,
  [324] = 8,
    ACTIONS(46), 1,
      anon_sym_SQUOTE,
    ACTIONS(48), 1,
      anon_sym_DQUOTE,
    ACTIONS(50), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(70), 1,
      sym_identifier,
    ACTIONS(90), 1,
      anon_sym_RBRACE,
    STATE(10), 1,
      aux_sym_dictionaries_repeat1,
    STATE(81), 1,
      sym_string,
    STATE(85), 1,
      sym_pair,
  [349] = 7,
    ACTIONS(46), 1,
      anon_sym_SQUOTE,
    ACTIONS(48), 1,
      anon_sym_DQUOTE,
    ACTIONS(50), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(62), 1,
      sym_identifier,
    ACTIONS(92), 1,
      anon_sym_COMMA,
    ACTIONS(94), 1,
      anon_sym_RBRACK,
    STATE(8), 2,
      sym_string,
      aux_sym_list_repeat1,
  [372] = 7,
    ACTIONS(46), 1,
      anon_sym_SQUOTE,
    ACTIONS(48), 1,
      anon_sym_DQUOTE,
    ACTIONS(50), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(62), 1,
      sym_identifier,
    ACTIONS(96), 1,
      anon_sym_COMMA,
    ACTIONS(98), 1,
      anon_sym_RBRACK,
    STATE(11), 2,
      sym_string,
      aux_sym_list_repeat1,
  [395] = 8,
    ACTIONS(46), 1,
      anon_sym_SQUOTE,
    ACTIONS(48), 1,
      anon_sym_DQUOTE,
    ACTIONS(50), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(100), 1,
      anon_sym_RPAREN,
    ACTIONS(102), 1,
      sym_identifier,
    STATE(21), 1,
      aux_sym_normal_command_repeat2,
    STATE(59), 1,
      sym_string,
    STATE(70), 1,
      sym_pair,
  [420] = 8,
    ACTIONS(46), 1,
      anon_sym_SQUOTE,
    ACTIONS(48), 1,
      anon_sym_DQUOTE,
    ACTIONS(50), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(104), 1,
      anon_sym_RPAREN,
    ACTIONS(106), 1,
      sym_identifier,
    STATE(23), 1,
      aux_sym_normal_command_repeat2,
    STATE(51), 1,
      sym_string,
    STATE(74), 1,
      sym_pair,
  [445] = 8,
    ACTIONS(108), 1,
      anon_sym_SQUOTE,
    ACTIONS(111), 1,
      anon_sym_DQUOTE,
    ACTIONS(114), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(117), 1,
      anon_sym_RBRACE,
    ACTIONS(119), 1,
      sym_identifier,
    STATE(18), 1,
      aux_sym_dictionaries_repeat1,
    STATE(81), 1,
      sym_string,
    STATE(85), 1,
      sym_pair,
  [470] = 4,
    ACTIONS(122), 1,
      ts_builtin_sym_end,
    ACTIONS(124), 1,
      sym_identifier,
    ACTIONS(127), 1,
      anon_sym_POUND,
    STATE(19), 4,
      sym_normal_command,
      sym_comment,
      sym_operatorunit,
      aux_sym_source_file_repeat1,
  [486] = 4,
    ACTIONS(130), 1,
      aux_sym_normal_command_token1,
    ACTIONS(132), 1,
      anon_sym_LPAREN,
    STATE(27), 1,
      aux_sym_normal_command_repeat1,
    ACTIONS(134), 4,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
  [502] = 7,
    ACTIONS(46), 1,
      anon_sym_SQUOTE,
    ACTIONS(48), 1,
      anon_sym_DQUOTE,
    ACTIONS(50), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(136), 1,
      sym_identifier,
    STATE(24), 1,
      aux_sym_normal_command_repeat2,
    STATE(55), 1,
      sym_string,
    STATE(71), 1,
      sym_pair,
  [524] = 6,
    ACTIONS(132), 1,
      anon_sym_LPAREN,
    ACTIONS(138), 1,
      ts_builtin_sym_end,
    ACTIONS(140), 1,
      aux_sym_normal_command_token1,
    ACTIONS(144), 1,
      anon_sym_DOT,
    STATE(57), 1,
      aux_sym_normal_command_repeat1,
    ACTIONS(142), 2,
      sym_identifier,
      anon_sym_POUND,
  [544] = 7,
    ACTIONS(46), 1,
      anon_sym_SQUOTE,
    ACTIONS(48), 1,
      anon_sym_DQUOTE,
    ACTIONS(50), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(102), 1,
      sym_identifier,
    STATE(24), 1,
      aux_sym_normal_command_repeat2,
    STATE(59), 1,
      sym_string,
    STATE(70), 1,
      sym_pair,
  [566] = 7,
    ACTIONS(146), 1,
      anon_sym_SQUOTE,
    ACTIONS(149), 1,
      anon_sym_DQUOTE,
    ACTIONS(152), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(155), 1,
      sym_identifier,
    STATE(24), 1,
      aux_sym_normal_command_repeat2,
    STATE(63), 1,
      sym_string,
    STATE(82), 1,
      sym_pair,
  [588] = 6,
    ACTIONS(132), 1,
      anon_sym_LPAREN,
    ACTIONS(140), 1,
      aux_sym_normal_command_token1,
    ACTIONS(144), 1,
      anon_sym_DOT,
    ACTIONS(158), 1,
      ts_builtin_sym_end,
    STATE(57), 1,
      aux_sym_normal_command_repeat1,
    ACTIONS(160), 2,
      sym_identifier,
      anon_sym_POUND,
  [608] = 6,
    ACTIONS(132), 1,
      anon_sym_LPAREN,
    ACTIONS(140), 1,
      aux_sym_normal_command_token1,
    ACTIONS(144), 1,
      anon_sym_DOT,
    ACTIONS(162), 1,
      ts_builtin_sym_end,
    STATE(57), 1,
      aux_sym_normal_command_repeat1,
    ACTIONS(164), 2,
      sym_identifier,
      anon_sym_POUND,
  [628] = 4,
    ACTIONS(9), 1,
      aux_sym_normal_command_token1,
    ACTIONS(166), 1,
      anon_sym_LPAREN,
    STATE(6), 1,
      aux_sym_normal_command_repeat1,
    ACTIONS(168), 4,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
  [644] = 4,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(170), 1,
      ts_builtin_sym_end,
    STATE(19), 4,
      sym_normal_command,
      sym_comment,
      sym_operatorunit,
      aux_sym_source_file_repeat1,
  [660] = 5,
    ACTIONS(132), 1,
      anon_sym_LPAREN,
    ACTIONS(140), 1,
      aux_sym_normal_command_token1,
    ACTIONS(172), 1,
      ts_builtin_sym_end,
    STATE(57), 1,
      aux_sym_normal_command_repeat1,
    ACTIONS(174), 2,
      sym_identifier,
      anon_sym_POUND,
  [677] = 5,
    ACTIONS(132), 1,
      anon_sym_LPAREN,
    ACTIONS(140), 1,
      aux_sym_normal_command_token1,
    ACTIONS(176), 1,
      ts_builtin_sym_end,
    STATE(57), 1,
      aux_sym_normal_command_repeat1,
    ACTIONS(178), 2,
      sym_identifier,
      anon_sym_POUND,
  [694] = 2,
    ACTIONS(182), 1,
      anon_sym_SQUOTE,
    ACTIONS(180), 5,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_RBRACK,
      sym_identifier,
  [705] = 2,
    ACTIONS(184), 1,
      anon_sym_SQUOTE,
    ACTIONS(117), 4,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_RBRACE,
      sym_identifier,
  [715] = 3,
    ACTIONS(186), 1,
      anon_sym_RPAREN,
    ACTIONS(188), 1,
      anon_sym_SQUOTE,
    ACTIONS(190), 3,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      sym_identifier,
  [727] = 3,
    ACTIONS(188), 1,
      anon_sym_SQUOTE,
    ACTIONS(192), 1,
      anon_sym_RPAREN,
    ACTIONS(190), 3,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      sym_identifier,
  [739] = 3,
    ACTIONS(188), 1,
      anon_sym_SQUOTE,
    ACTIONS(194), 1,
      anon_sym_RPAREN,
    ACTIONS(190), 3,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      sym_identifier,
  [751] = 1,
    ACTIONS(196), 4,
      ts_builtin_sym_end,
      sym_identifier,
      anon_sym_POUND,
      anon_sym_DOT,
  [758] = 1,
    ACTIONS(198), 4,
      ts_builtin_sym_end,
      sym_identifier,
      anon_sym_POUND,
      anon_sym_DOT,
  [765] = 1,
    ACTIONS(200), 4,
      ts_builtin_sym_end,
      sym_identifier,
      anon_sym_POUND,
      anon_sym_DOT,
  [772] = 2,
    ACTIONS(204), 1,
      anon_sym_DOT,
    ACTIONS(202), 3,
      ts_builtin_sym_end,
      sym_identifier,
      anon_sym_POUND,
  [781] = 2,
    ACTIONS(204), 1,
      anon_sym_DOT,
    ACTIONS(206), 3,
      ts_builtin_sym_end,
      sym_identifier,
      anon_sym_POUND,
  [790] = 1,
    ACTIONS(208), 4,
      ts_builtin_sym_end,
      sym_identifier,
      anon_sym_POUND,
      anon_sym_DOT,
  [797] = 2,
    ACTIONS(188), 1,
      anon_sym_SQUOTE,
    ACTIONS(190), 3,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      sym_identifier,
  [806] = 2,
    ACTIONS(204), 1,
      anon_sym_DOT,
    ACTIONS(210), 3,
      ts_builtin_sym_end,
      sym_identifier,
      anon_sym_POUND,
  [815] = 1,
    ACTIONS(212), 4,
      ts_builtin_sym_end,
      sym_identifier,
      anon_sym_POUND,
      anon_sym_DOT,
  [822] = 1,
    ACTIONS(210), 3,
      ts_builtin_sym_end,
      sym_identifier,
      anon_sym_POUND,
  [828] = 1,
    ACTIONS(214), 3,
      ts_builtin_sym_end,
      sym_identifier,
      anon_sym_POUND,
  [834] = 1,
    ACTIONS(216), 3,
      ts_builtin_sym_end,
      sym_identifier,
      anon_sym_POUND,
  [840] = 1,
    ACTIONS(64), 3,
      ts_builtin_sym_end,
      sym_identifier,
      anon_sym_POUND,
  [846] = 1,
    ACTIONS(218), 3,
      ts_builtin_sym_end,
      sym_identifier,
      anon_sym_POUND,
  [852] = 1,
    ACTIONS(220), 3,
      ts_builtin_sym_end,
      sym_identifier,
      anon_sym_POUND,
  [858] = 3,
    ACTIONS(100), 1,
      anon_sym_RPAREN,
    ACTIONS(222), 1,
      anon_sym_COMMA,
    ACTIONS(224), 1,
      anon_sym_COLON,
  [868] = 1,
    ACTIONS(206), 3,
      ts_builtin_sym_end,
      sym_identifier,
      anon_sym_POUND,
  [874] = 1,
    ACTIONS(226), 3,
      ts_builtin_sym_end,
      sym_identifier,
      anon_sym_POUND,
  [880] = 1,
    ACTIONS(228), 3,
      ts_builtin_sym_end,
      sym_identifier,
      anon_sym_POUND,
  [886] = 3,
    ACTIONS(192), 1,
      anon_sym_RPAREN,
    ACTIONS(224), 1,
      anon_sym_COLON,
    ACTIONS(230), 1,
      anon_sym_COMMA,
  [896] = 1,
    ACTIONS(232), 3,
      ts_builtin_sym_end,
      sym_identifier,
      anon_sym_POUND,
  [902] = 3,
    ACTIONS(9), 1,
      aux_sym_normal_command_token1,
    ACTIONS(166), 1,
      anon_sym_LPAREN,
    STATE(6), 1,
      aux_sym_normal_command_repeat1,
  [912] = 1,
    ACTIONS(202), 3,
      ts_builtin_sym_end,
      sym_identifier,
      anon_sym_POUND,
  [918] = 3,
    ACTIONS(186), 1,
      anon_sym_RPAREN,
    ACTIONS(224), 1,
      anon_sym_COLON,
    ACTIONS(234), 1,
      anon_sym_COMMA,
  [928] = 1,
    ACTIONS(236), 3,
      ts_builtin_sym_end,
      sym_identifier,
      anon_sym_POUND,
  [934] = 1,
    ACTIONS(238), 3,
      ts_builtin_sym_end,
      sym_identifier,
      anon_sym_POUND,
  [940] = 1,
    ACTIONS(240), 3,
      ts_builtin_sym_end,
      sym_identifier,
      anon_sym_POUND,
  [946] = 2,
    ACTIONS(224), 1,
      anon_sym_COLON,
    ACTIONS(242), 1,
      anon_sym_COMMA,
  [953] = 1,
    ACTIONS(226), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [958] = 1,
    ACTIONS(218), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [963] = 1,
    ACTIONS(214), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [968] = 2,
    ACTIONS(244), 1,
      sym_identifier,
    STATE(56), 1,
      sym_normal_command,
  [975] = 1,
    ACTIONS(240), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [980] = 2,
    ACTIONS(246), 1,
      sym_identifier,
    STATE(61), 1,
      sym_normal_command,
  [987] = 2,
    ACTIONS(186), 1,
      anon_sym_RPAREN,
    ACTIONS(234), 1,
      anon_sym_COMMA,
  [994] = 2,
    ACTIONS(192), 1,
      anon_sym_RPAREN,
    ACTIONS(230), 1,
      anon_sym_COMMA,
  [1001] = 1,
    ACTIONS(248), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1006] = 1,
    ACTIONS(220), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1011] = 2,
    ACTIONS(100), 1,
      anon_sym_RPAREN,
    ACTIONS(222), 1,
      anon_sym_COMMA,
  [1018] = 1,
    ACTIONS(250), 1,
      anon_sym_DQUOTE,
  [1022] = 1,
    ACTIONS(252), 1,
      aux_sym_string_token3,
  [1026] = 1,
    ACTIONS(254), 1,
      anon_sym_RBRACK,
  [1030] = 1,
    ACTIONS(256), 1,
      aux_sym_string_token2,
  [1034] = 1,
    ACTIONS(258), 1,
      aux_sym_string_token1,
  [1038] = 1,
    ACTIONS(260), 1,
      anon_sym_RBRACK,
  [1042] = 1,
    ACTIONS(224), 1,
      anon_sym_COLON,
  [1046] = 1,
    ACTIONS(242), 1,
      anon_sym_COMMA,
  [1050] = 1,
    ACTIONS(250), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [1054] = 1,
    ACTIONS(250), 1,
      anon_sym_SQUOTE,
  [1058] = 1,
    ACTIONS(262), 1,
      anon_sym_COMMA,
  [1062] = 1,
    ACTIONS(264), 1,
      aux_sym_comment_token1,
  [1066] = 1,
    ACTIONS(266), 1,
      anon_sym_SQUOTE,
  [1070] = 1,
    ACTIONS(266), 1,
      anon_sym_DQUOTE,
  [1074] = 1,
    ACTIONS(266), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [1078] = 1,
    ACTIONS(268), 1,
      anon_sym_RBRACK,
  [1082] = 1,
    ACTIONS(270), 1,
      ts_builtin_sym_end,
  [1086] = 1,
    ACTIONS(272), 1,
      anon_sym_RBRACK,
  [1090] = 1,
    ACTIONS(274), 1,
      aux_sym_string_token1,
  [1094] = 1,
    ACTIONS(276), 1,
      aux_sym_string_token2,
  [1098] = 1,
    ACTIONS(278), 1,
      aux_sym_string_token3,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 42,
  [SMALL_STATE(4)] = 84,
  [SMALL_STATE(5)] = 126,
  [SMALL_STATE(6)] = 168,
  [SMALL_STATE(7)] = 191,
  [SMALL_STATE(8)] = 219,
  [SMALL_STATE(9)] = 242,
  [SMALL_STATE(10)] = 255,
  [SMALL_STATE(11)] = 280,
  [SMALL_STATE(12)] = 303,
  [SMALL_STATE(13)] = 324,
  [SMALL_STATE(14)] = 349,
  [SMALL_STATE(15)] = 372,
  [SMALL_STATE(16)] = 395,
  [SMALL_STATE(17)] = 420,
  [SMALL_STATE(18)] = 445,
  [SMALL_STATE(19)] = 470,
  [SMALL_STATE(20)] = 486,
  [SMALL_STATE(21)] = 502,
  [SMALL_STATE(22)] = 524,
  [SMALL_STATE(23)] = 544,
  [SMALL_STATE(24)] = 566,
  [SMALL_STATE(25)] = 588,
  [SMALL_STATE(26)] = 608,
  [SMALL_STATE(27)] = 628,
  [SMALL_STATE(28)] = 644,
  [SMALL_STATE(29)] = 660,
  [SMALL_STATE(30)] = 677,
  [SMALL_STATE(31)] = 694,
  [SMALL_STATE(32)] = 705,
  [SMALL_STATE(33)] = 715,
  [SMALL_STATE(34)] = 727,
  [SMALL_STATE(35)] = 739,
  [SMALL_STATE(36)] = 751,
  [SMALL_STATE(37)] = 758,
  [SMALL_STATE(38)] = 765,
  [SMALL_STATE(39)] = 772,
  [SMALL_STATE(40)] = 781,
  [SMALL_STATE(41)] = 790,
  [SMALL_STATE(42)] = 797,
  [SMALL_STATE(43)] = 806,
  [SMALL_STATE(44)] = 815,
  [SMALL_STATE(45)] = 822,
  [SMALL_STATE(46)] = 828,
  [SMALL_STATE(47)] = 834,
  [SMALL_STATE(48)] = 840,
  [SMALL_STATE(49)] = 846,
  [SMALL_STATE(50)] = 852,
  [SMALL_STATE(51)] = 858,
  [SMALL_STATE(52)] = 868,
  [SMALL_STATE(53)] = 874,
  [SMALL_STATE(54)] = 880,
  [SMALL_STATE(55)] = 886,
  [SMALL_STATE(56)] = 896,
  [SMALL_STATE(57)] = 902,
  [SMALL_STATE(58)] = 912,
  [SMALL_STATE(59)] = 918,
  [SMALL_STATE(60)] = 928,
  [SMALL_STATE(61)] = 934,
  [SMALL_STATE(62)] = 940,
  [SMALL_STATE(63)] = 946,
  [SMALL_STATE(64)] = 953,
  [SMALL_STATE(65)] = 958,
  [SMALL_STATE(66)] = 963,
  [SMALL_STATE(67)] = 968,
  [SMALL_STATE(68)] = 975,
  [SMALL_STATE(69)] = 980,
  [SMALL_STATE(70)] = 987,
  [SMALL_STATE(71)] = 994,
  [SMALL_STATE(72)] = 1001,
  [SMALL_STATE(73)] = 1006,
  [SMALL_STATE(74)] = 1011,
  [SMALL_STATE(75)] = 1018,
  [SMALL_STATE(76)] = 1022,
  [SMALL_STATE(77)] = 1026,
  [SMALL_STATE(78)] = 1030,
  [SMALL_STATE(79)] = 1034,
  [SMALL_STATE(80)] = 1038,
  [SMALL_STATE(81)] = 1042,
  [SMALL_STATE(82)] = 1046,
  [SMALL_STATE(83)] = 1050,
  [SMALL_STATE(84)] = 1054,
  [SMALL_STATE(85)] = 1058,
  [SMALL_STATE(86)] = 1062,
  [SMALL_STATE(87)] = 1066,
  [SMALL_STATE(88)] = 1070,
  [SMALL_STATE(89)] = 1074,
  [SMALL_STATE(90)] = 1078,
  [SMALL_STATE(91)] = 1082,
  [SMALL_STATE(92)] = 1086,
  [SMALL_STATE(93)] = 1090,
  [SMALL_STATE(94)] = 1094,
  [SMALL_STATE(95)] = 1098,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_normal_command_repeat1, 2), SHIFT_REPEAT(6),
  [42] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_normal_command_repeat1, 2),
  [44] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [46] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2, .production_id = 6),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2, .production_id = 6), SHIFT_REPEAT(79),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2, .production_id = 6), SHIFT_REPEAT(78),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2, .production_id = 6), SHIFT_REPEAT(76),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2, .production_id = 6), SHIFT_REPEAT(31),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dictionaries_repeat1, 2), SHIFT_REPEAT(79),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dictionaries_repeat1, 2), SHIFT_REPEAT(78),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dictionaries_repeat1, 2), SHIFT_REPEAT(76),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dictionaries_repeat1, 2),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dictionaries_repeat1, 2), SHIFT_REPEAT(81),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(20),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(86),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operatorunit, 5, .production_id = 11),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operatorunit, 5, .production_id = 11),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [146] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_normal_command_repeat2, 2), SHIFT_REPEAT(79),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_normal_command_repeat2, 2), SHIFT_REPEAT(78),
  [152] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_normal_command_repeat2, 2), SHIFT_REPEAT(76),
  [155] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_normal_command_repeat2, 2), SHIFT_REPEAT(63),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operatorunit, 3, .production_id = 1),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operatorunit, 3, .production_id = 1),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operatorunit, 4, .production_id = 3),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operatorunit, 4, .production_id = 3),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_experession_statement, 3, .production_id = 7),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_experession_statement, 3, .production_id = 7),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_experession_statement, 3, .production_id = 9),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_experession_statement, 3, .production_id = 9),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 1, .production_id = 2),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 1, .production_id = 2),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_dictionaries_repeat1, 2),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_normal_command_repeat2, 2),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_normal_command_repeat2, 2),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_normal_command, 4),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_normal_command, 7),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_normal_command, 5),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operatorunit, 3),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operatorunit, 5),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_normal_command, 6),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operatorunit, 4),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_normal_command, 3),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3, .production_id = 5),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 4, .production_id = 5),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionaries, 2),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_experession_statement, 3, .production_id = 10),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionaries, 3),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_experession_statement, 3, .production_id = 8),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 3, .production_id = 4),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [270] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_meson(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
