#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 94
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 39
#define ALIAS_COUNT 0
#define TOKEN_COUNT 25
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
  sym_number = 19,
  anon_sym_EQ = 20,
  anon_sym_PLUS = 21,
  anon_sym_DASH = 22,
  anon_sym_SLASH = 23,
  anon_sym_DOT = 24,
  sym_source_file = 25,
  sym_normal_command = 26,
  sym_bool = 27,
  sym_string = 28,
  sym_dictionaries = 29,
  sym_list = 30,
  sym_pair = 31,
  sym_operatorunit = 32,
  sym_experession_statement = 33,
  aux_sym_source_file_repeat1 = 34,
  aux_sym_normal_command_repeat1 = 35,
  aux_sym_normal_command_repeat2 = 36,
  aux_sym_dictionaries_repeat1 = 37,
  aux_sym_list_repeat1 = 38,
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
      if (eof) ADVANCE(18);
      if (lookahead == '"') ADVANCE(29);
      if (lookahead == '\'') ADVANCE(26);
      if (lookahead == '(') ADVANCE(20);
      if (lookahead == ')') ADVANCE(22);
      if (lookahead == '+') ADVANCE(59);
      if (lookahead == ',') ADVANCE(21);
      if (lookahead == '-') ADVANCE(60);
      if (lookahead == '.') ADVANCE(63);
      if (lookahead == '/') ADVANCE(61);
      if (lookahead == '0') ADVANCE(49);
      if (lookahead == ':') ADVANCE(39);
      if (lookahead == '=') ADVANCE(58);
      if (lookahead == '[') ADVANCE(37);
      if (lookahead == ']') ADVANCE(38);
      if (lookahead == 'f') ADVANCE(40);
      if (lookahead == 't') ADVANCE(44);
      if (lookahead == '{') ADVANCE(35);
      if (lookahead == '}') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(50);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(29);
      if (lookahead == '\'') ADVANCE(26);
      if (lookahead == '(') ADVANCE(20);
      if (lookahead == '+') ADVANCE(59);
      if (lookahead == '-') ADVANCE(60);
      if (lookahead == '.') ADVANCE(12);
      if (lookahead == '/') ADVANCE(61);
      if (lookahead == '0') ADVANCE(49);
      if (lookahead == '=') ADVANCE(58);
      if (lookahead == '[') ADVANCE(37);
      if (lookahead == 'f') ADVANCE(40);
      if (lookahead == 't') ADVANCE(44);
      if (lookahead == '{') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(1)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(50);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(29);
      if (lookahead == '\'') ADVANCE(26);
      if (lookahead == '.') ADVANCE(12);
      if (lookahead == '0') ADVANCE(49);
      if (lookahead == '[') ADVANCE(37);
      if (lookahead == 'f') ADVANCE(40);
      if (lookahead == 't') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(50);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 3:
      if (lookahead == '\'') ADVANCE(32);
      END_STATE();
    case 4:
      if (lookahead == '\'') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      END_STATE();
    case 6:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(51);
      END_STATE();
    case 7:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(34);
      END_STATE();
    case 8:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(31);
      END_STATE();
    case 9:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(28);
      END_STATE();
    case 10:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(52);
      END_STATE();
    case 11:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(50);
      END_STATE();
    case 12:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      END_STATE();
    case 13:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(53);
      END_STATE();
    case 16:
      if (eof) ADVANCE(18);
      if (lookahead == '"') ADVANCE(29);
      if (lookahead == '\'') ADVANCE(26);
      if (lookahead == ')') ADVANCE(22);
      if (lookahead == ',') ADVANCE(21);
      if (lookahead == '.') ADVANCE(62);
      if (lookahead == ':') ADVANCE(39);
      if (lookahead == ']') ADVANCE(38);
      if (lookahead == '}') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 17:
      if (eof) ADVANCE(18);
      if (lookahead == '(') ADVANCE(20);
      if (lookahead == '.') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(17)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym_normal_command_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\'') ADVANCE(3);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(28);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(31);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SQUOTE_SQUOTE);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(34);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_number);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(57);
      if (lookahead == '0') ADVANCE(54);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(6);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(5);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(10);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(15);
      if (lookahead == '_') ADVANCE(13);
      if (lookahead == 'n') ADVANCE(48);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(50);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(57);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(5);
      if (lookahead == '_') ADVANCE(11);
      if (lookahead == 'n') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(6);
      if (lookahead == 'n') ADVANCE(48);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(10);
      if (lookahead == 'n') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(15);
      if (lookahead == 'n') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(13);
      if (lookahead == 'n') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(5);
      if (lookahead == '_') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 16},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 16},
  [9] = {.lex_state = 16},
  [10] = {.lex_state = 16},
  [11] = {.lex_state = 16},
  [12] = {.lex_state = 16},
  [13] = {.lex_state = 16},
  [14] = {.lex_state = 16},
  [15] = {.lex_state = 16},
  [16] = {.lex_state = 16},
  [17] = {.lex_state = 16},
  [18] = {.lex_state = 16},
  [19] = {.lex_state = 16},
  [20] = {.lex_state = 16},
  [21] = {.lex_state = 16},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 16},
  [25] = {.lex_state = 17},
  [26] = {.lex_state = 17},
  [27] = {.lex_state = 17},
  [28] = {.lex_state = 17},
  [29] = {.lex_state = 16},
  [30] = {.lex_state = 16},
  [31] = {.lex_state = 16},
  [32] = {.lex_state = 16},
  [33] = {.lex_state = 16},
  [34] = {.lex_state = 16},
  [35] = {.lex_state = 17},
  [36] = {.lex_state = 16},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 16},
  [39] = {.lex_state = 16},
  [40] = {.lex_state = 16},
  [41] = {.lex_state = 16},
  [42] = {.lex_state = 16},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 16},
  [47] = {.lex_state = 16},
  [48] = {.lex_state = 16},
  [49] = {.lex_state = 16},
  [50] = {.lex_state = 16},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 16},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 16},
  [59] = {.lex_state = 16},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 16},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 16},
  [64] = {.lex_state = 16},
  [65] = {.lex_state = 16},
  [66] = {.lex_state = 16},
  [67] = {.lex_state = 16},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 16},
  [71] = {.lex_state = 16},
  [72] = {.lex_state = 16},
  [73] = {.lex_state = 16},
  [74] = {.lex_state = 7},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 8},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 4},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 9},
  [85] = {.lex_state = 4},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 9},
  [92] = {.lex_state = 8},
  [93] = {.lex_state = 7},
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
    [sym_number] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(83),
    [sym_normal_command] = STATE(30),
    [sym_operatorunit] = STATE(30),
    [aux_sym_source_file_repeat1] = STATE(30),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_identifier] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 12,
    ACTIONS(7), 1,
      aux_sym_normal_command_token1,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(23), 1,
      sym_number,
    STATE(6), 1,
      aux_sym_normal_command_repeat1,
    STATE(42), 1,
      sym_normal_command,
    ACTIONS(9), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(71), 5,
      sym_bool,
      sym_string,
      sym_dictionaries,
      sym_list,
      sym_experession_statement,
  [42] = 12,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      aux_sym_normal_command_token1,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(29), 1,
      sym_number,
    STATE(2), 1,
      aux_sym_normal_command_repeat1,
    STATE(48), 1,
      sym_normal_command,
    ACTIONS(9), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(52), 5,
      sym_bool,
      sym_string,
      sym_dictionaries,
      sym_list,
      sym_experession_statement,
  [84] = 12,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      aux_sym_normal_command_token1,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(35), 1,
      sym_number,
    STATE(5), 1,
      aux_sym_normal_command_repeat1,
    STATE(38), 1,
      sym_normal_command,
    ACTIONS(9), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(64), 5,
      sym_bool,
      sym_string,
      sym_dictionaries,
      sym_list,
      sym_experession_statement,
  [126] = 12,
    ACTIONS(7), 1,
      aux_sym_normal_command_token1,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(29), 1,
      sym_number,
    STATE(6), 1,
      aux_sym_normal_command_repeat1,
    STATE(48), 1,
      sym_normal_command,
    ACTIONS(9), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(52), 5,
      sym_bool,
      sym_string,
      sym_dictionaries,
      sym_list,
      sym_experession_statement,
  [168] = 3,
    ACTIONS(37), 1,
      aux_sym_normal_command_token1,
    STATE(6), 1,
      aux_sym_normal_command_repeat1,
    ACTIONS(40), 14,
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
    ACTIONS(44), 1,
      anon_sym_SQUOTE,
    ACTIONS(46), 1,
      anon_sym_DQUOTE,
    ACTIONS(48), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(50), 1,
      anon_sym_LBRACK,
    ACTIONS(52), 1,
      sym_identifier,
    ACTIONS(54), 1,
      sym_number,
    ACTIONS(42), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(54), 3,
      sym_bool,
      sym_string,
      sym_list,
  [219] = 7,
    ACTIONS(44), 1,
      anon_sym_SQUOTE,
    ACTIONS(46), 1,
      anon_sym_DQUOTE,
    ACTIONS(48), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(56), 1,
      anon_sym_COMMA,
    ACTIONS(58), 1,
      anon_sym_RBRACK,
    ACTIONS(60), 1,
      sym_identifier,
    STATE(12), 2,
      sym_string,
      aux_sym_list_repeat1,
  [242] = 7,
    ACTIONS(44), 1,
      anon_sym_SQUOTE,
    ACTIONS(46), 1,
      anon_sym_DQUOTE,
    ACTIONS(48), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(60), 1,
      sym_identifier,
    ACTIONS(62), 1,
      anon_sym_COMMA,
    ACTIONS(64), 1,
      anon_sym_RBRACK,
    STATE(18), 2,
      sym_string,
      aux_sym_list_repeat1,
  [265] = 8,
    ACTIONS(44), 1,
      anon_sym_SQUOTE,
    ACTIONS(46), 1,
      anon_sym_DQUOTE,
    ACTIONS(48), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(66), 1,
      anon_sym_RBRACE,
    ACTIONS(68), 1,
      sym_identifier,
    STATE(14), 1,
      aux_sym_dictionaries_repeat1,
    STATE(75), 1,
      sym_string,
    STATE(89), 1,
      sym_pair,
  [290] = 8,
    ACTIONS(44), 1,
      anon_sym_SQUOTE,
    ACTIONS(46), 1,
      anon_sym_DQUOTE,
    ACTIONS(48), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(68), 1,
      sym_identifier,
    ACTIONS(70), 1,
      anon_sym_RBRACE,
    STATE(10), 1,
      aux_sym_dictionaries_repeat1,
    STATE(75), 1,
      sym_string,
    STATE(89), 1,
      sym_pair,
  [315] = 7,
    ACTIONS(44), 1,
      anon_sym_SQUOTE,
    ACTIONS(46), 1,
      anon_sym_DQUOTE,
    ACTIONS(48), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(60), 1,
      sym_identifier,
    ACTIONS(72), 1,
      anon_sym_COMMA,
    ACTIONS(74), 1,
      anon_sym_RBRACK,
    STATE(13), 2,
      sym_string,
      aux_sym_list_repeat1,
  [338] = 6,
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
    STATE(13), 2,
      sym_string,
      aux_sym_list_repeat1,
  [359] = 8,
    ACTIONS(90), 1,
      anon_sym_SQUOTE,
    ACTIONS(93), 1,
      anon_sym_DQUOTE,
    ACTIONS(96), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(99), 1,
      anon_sym_RBRACE,
    ACTIONS(101), 1,
      sym_identifier,
    STATE(14), 1,
      aux_sym_dictionaries_repeat1,
    STATE(75), 1,
      sym_string,
    STATE(89), 1,
      sym_pair,
  [384] = 8,
    ACTIONS(44), 1,
      anon_sym_SQUOTE,
    ACTIONS(46), 1,
      anon_sym_DQUOTE,
    ACTIONS(48), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(104), 1,
      anon_sym_RPAREN,
    ACTIONS(106), 1,
      sym_identifier,
    STATE(19), 1,
      aux_sym_normal_command_repeat2,
    STATE(45), 1,
      sym_string,
    STATE(53), 1,
      sym_pair,
  [409] = 8,
    ACTIONS(44), 1,
      anon_sym_SQUOTE,
    ACTIONS(46), 1,
      anon_sym_DQUOTE,
    ACTIONS(48), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(108), 1,
      anon_sym_RPAREN,
    ACTIONS(110), 1,
      sym_identifier,
    STATE(21), 1,
      aux_sym_normal_command_repeat2,
    STATE(43), 1,
      sym_string,
    STATE(68), 1,
      sym_pair,
  [434] = 2,
    ACTIONS(114), 1,
      anon_sym_SQUOTE,
    ACTIONS(112), 7,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_RBRACK,
      anon_sym_COLON,
      sym_identifier,
  [447] = 7,
    ACTIONS(44), 1,
      anon_sym_SQUOTE,
    ACTIONS(46), 1,
      anon_sym_DQUOTE,
    ACTIONS(48), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(60), 1,
      sym_identifier,
    ACTIONS(116), 1,
      anon_sym_COMMA,
    ACTIONS(118), 1,
      anon_sym_RBRACK,
    STATE(13), 2,
      sym_string,
      aux_sym_list_repeat1,
  [470] = 7,
    ACTIONS(44), 1,
      anon_sym_SQUOTE,
    ACTIONS(46), 1,
      anon_sym_DQUOTE,
    ACTIONS(48), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(120), 1,
      sym_identifier,
    STATE(20), 1,
      aux_sym_normal_command_repeat2,
    STATE(37), 1,
      sym_string,
    STATE(69), 1,
      sym_pair,
  [492] = 7,
    ACTIONS(122), 1,
      anon_sym_SQUOTE,
    ACTIONS(125), 1,
      anon_sym_DQUOTE,
    ACTIONS(128), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(131), 1,
      sym_identifier,
    STATE(20), 1,
      aux_sym_normal_command_repeat2,
    STATE(56), 1,
      sym_string,
    STATE(81), 1,
      sym_pair,
  [514] = 7,
    ACTIONS(44), 1,
      anon_sym_SQUOTE,
    ACTIONS(46), 1,
      anon_sym_DQUOTE,
    ACTIONS(48), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(106), 1,
      sym_identifier,
    STATE(20), 1,
      aux_sym_normal_command_repeat2,
    STATE(45), 1,
      sym_string,
    STATE(53), 1,
      sym_pair,
  [536] = 4,
    ACTIONS(134), 1,
      aux_sym_normal_command_token1,
    ACTIONS(136), 1,
      anon_sym_LPAREN,
    STATE(23), 1,
      aux_sym_normal_command_repeat1,
    ACTIONS(138), 4,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
  [552] = 4,
    ACTIONS(7), 1,
      aux_sym_normal_command_token1,
    ACTIONS(140), 1,
      anon_sym_LPAREN,
    STATE(6), 1,
      aux_sym_normal_command_repeat1,
    ACTIONS(142), 4,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
  [568] = 2,
    ACTIONS(146), 1,
      anon_sym_SQUOTE,
    ACTIONS(144), 5,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_RBRACK,
      sym_identifier,
  [579] = 6,
    ACTIONS(136), 1,
      anon_sym_LPAREN,
    ACTIONS(148), 1,
      ts_builtin_sym_end,
    ACTIONS(150), 1,
      aux_sym_normal_command_token1,
    ACTIONS(152), 1,
      sym_identifier,
    ACTIONS(154), 1,
      anon_sym_DOT,
    STATE(44), 1,
      aux_sym_normal_command_repeat1,
  [598] = 6,
    ACTIONS(136), 1,
      anon_sym_LPAREN,
    ACTIONS(150), 1,
      aux_sym_normal_command_token1,
    ACTIONS(154), 1,
      anon_sym_DOT,
    ACTIONS(156), 1,
      ts_builtin_sym_end,
    ACTIONS(158), 1,
      sym_identifier,
    STATE(44), 1,
      aux_sym_normal_command_repeat1,
  [617] = 6,
    ACTIONS(136), 1,
      anon_sym_LPAREN,
    ACTIONS(150), 1,
      aux_sym_normal_command_token1,
    ACTIONS(154), 1,
      anon_sym_DOT,
    ACTIONS(160), 1,
      ts_builtin_sym_end,
    ACTIONS(162), 1,
      sym_identifier,
    STATE(44), 1,
      aux_sym_normal_command_repeat1,
  [636] = 5,
    ACTIONS(136), 1,
      anon_sym_LPAREN,
    ACTIONS(150), 1,
      aux_sym_normal_command_token1,
    ACTIONS(164), 1,
      ts_builtin_sym_end,
    ACTIONS(166), 1,
      sym_identifier,
    STATE(44), 1,
      aux_sym_normal_command_repeat1,
  [652] = 3,
    ACTIONS(168), 1,
      anon_sym_RPAREN,
    ACTIONS(170), 1,
      anon_sym_SQUOTE,
    ACTIONS(172), 3,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      sym_identifier,
  [664] = 3,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(174), 1,
      ts_builtin_sym_end,
    STATE(34), 3,
      sym_normal_command,
      sym_operatorunit,
      aux_sym_source_file_repeat1,
  [676] = 3,
    ACTIONS(170), 1,
      anon_sym_SQUOTE,
    ACTIONS(176), 1,
      anon_sym_RPAREN,
    ACTIONS(172), 3,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      sym_identifier,
  [688] = 2,
    ACTIONS(178), 1,
      anon_sym_SQUOTE,
    ACTIONS(99), 4,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_RBRACE,
      sym_identifier,
  [698] = 3,
    ACTIONS(170), 1,
      anon_sym_SQUOTE,
    ACTIONS(180), 1,
      anon_sym_RPAREN,
    ACTIONS(172), 3,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      sym_identifier,
  [710] = 3,
    ACTIONS(182), 1,
      ts_builtin_sym_end,
    ACTIONS(184), 1,
      sym_identifier,
    STATE(34), 3,
      sym_normal_command,
      sym_operatorunit,
      aux_sym_source_file_repeat1,
  [722] = 5,
    ACTIONS(136), 1,
      anon_sym_LPAREN,
    ACTIONS(150), 1,
      aux_sym_normal_command_token1,
    ACTIONS(187), 1,
      ts_builtin_sym_end,
    ACTIONS(189), 1,
      sym_identifier,
    STATE(44), 1,
      aux_sym_normal_command_repeat1,
  [738] = 2,
    ACTIONS(170), 1,
      anon_sym_SQUOTE,
    ACTIONS(172), 3,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      sym_identifier,
  [747] = 3,
    ACTIONS(176), 1,
      anon_sym_RPAREN,
    ACTIONS(191), 1,
      anon_sym_COMMA,
    ACTIONS(193), 1,
      anon_sym_COLON,
  [757] = 2,
    ACTIONS(197), 1,
      anon_sym_DOT,
    ACTIONS(195), 2,
      ts_builtin_sym_end,
      sym_identifier,
  [765] = 1,
    ACTIONS(199), 3,
      ts_builtin_sym_end,
      sym_identifier,
      anon_sym_DOT,
  [771] = 1,
    ACTIONS(201), 3,
      ts_builtin_sym_end,
      sym_identifier,
      anon_sym_DOT,
  [777] = 1,
    ACTIONS(203), 3,
      ts_builtin_sym_end,
      sym_identifier,
      anon_sym_DOT,
  [783] = 2,
    ACTIONS(197), 1,
      anon_sym_DOT,
    ACTIONS(205), 2,
      ts_builtin_sym_end,
      sym_identifier,
  [791] = 3,
    ACTIONS(104), 1,
      anon_sym_RPAREN,
    ACTIONS(193), 1,
      anon_sym_COLON,
    ACTIONS(207), 1,
      anon_sym_COMMA,
  [801] = 3,
    ACTIONS(7), 1,
      aux_sym_normal_command_token1,
    ACTIONS(140), 1,
      anon_sym_LPAREN,
    STATE(6), 1,
      aux_sym_normal_command_repeat1,
  [811] = 3,
    ACTIONS(168), 1,
      anon_sym_RPAREN,
    ACTIONS(193), 1,
      anon_sym_COLON,
    ACTIONS(209), 1,
      anon_sym_COMMA,
  [821] = 1,
    ACTIONS(211), 3,
      ts_builtin_sym_end,
      sym_identifier,
      anon_sym_DOT,
  [827] = 1,
    ACTIONS(213), 3,
      ts_builtin_sym_end,
      sym_identifier,
      anon_sym_DOT,
  [833] = 2,
    ACTIONS(197), 1,
      anon_sym_DOT,
    ACTIONS(215), 2,
      ts_builtin_sym_end,
      sym_identifier,
  [841] = 1,
    ACTIONS(217), 2,
      ts_builtin_sym_end,
      sym_identifier,
  [846] = 2,
    ACTIONS(219), 1,
      sym_identifier,
    STATE(65), 1,
      sym_normal_command,
  [853] = 1,
    ACTIONS(221), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [858] = 1,
    ACTIONS(215), 2,
      ts_builtin_sym_end,
      sym_identifier,
  [863] = 2,
    ACTIONS(168), 1,
      anon_sym_RPAREN,
    ACTIONS(209), 1,
      anon_sym_COMMA,
  [870] = 1,
    ACTIONS(223), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [875] = 1,
    ACTIONS(225), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [880] = 2,
    ACTIONS(193), 1,
      anon_sym_COLON,
    ACTIONS(227), 1,
      anon_sym_COMMA,
  [887] = 1,
    ACTIONS(229), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [892] = 1,
    ACTIONS(112), 2,
      ts_builtin_sym_end,
      sym_identifier,
  [897] = 1,
    ACTIONS(231), 2,
      ts_builtin_sym_end,
      sym_identifier,
  [902] = 1,
    ACTIONS(233), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [907] = 1,
    ACTIONS(229), 2,
      ts_builtin_sym_end,
      sym_identifier,
  [912] = 1,
    ACTIONS(217), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [917] = 1,
    ACTIONS(225), 2,
      ts_builtin_sym_end,
      sym_identifier,
  [922] = 1,
    ACTIONS(195), 2,
      ts_builtin_sym_end,
      sym_identifier,
  [927] = 1,
    ACTIONS(235), 2,
      ts_builtin_sym_end,
      sym_identifier,
  [932] = 1,
    ACTIONS(237), 2,
      ts_builtin_sym_end,
      sym_identifier,
  [937] = 1,
    ACTIONS(239), 2,
      ts_builtin_sym_end,
      sym_identifier,
  [942] = 2,
    ACTIONS(104), 1,
      anon_sym_RPAREN,
    ACTIONS(207), 1,
      anon_sym_COMMA,
  [949] = 2,
    ACTIONS(176), 1,
      anon_sym_RPAREN,
    ACTIONS(191), 1,
      anon_sym_COMMA,
  [956] = 1,
    ACTIONS(221), 2,
      ts_builtin_sym_end,
      sym_identifier,
  [961] = 1,
    ACTIONS(205), 2,
      ts_builtin_sym_end,
      sym_identifier,
  [966] = 2,
    ACTIONS(241), 1,
      sym_identifier,
    STATE(67), 1,
      sym_normal_command,
  [973] = 1,
    ACTIONS(233), 2,
      ts_builtin_sym_end,
      sym_identifier,
  [978] = 1,
    ACTIONS(243), 1,
      aux_sym_string_token3,
  [982] = 1,
    ACTIONS(193), 1,
      anon_sym_COLON,
  [986] = 1,
    ACTIONS(245), 1,
      aux_sym_string_token2,
  [990] = 1,
    ACTIONS(247), 1,
      anon_sym_RBRACK,
  [994] = 1,
    ACTIONS(249), 1,
      anon_sym_RBRACK,
  [998] = 1,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
  [1002] = 1,
    ACTIONS(251), 1,
      anon_sym_DQUOTE,
  [1006] = 1,
    ACTIONS(227), 1,
      anon_sym_COMMA,
  [1010] = 1,
    ACTIONS(251), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [1014] = 1,
    ACTIONS(253), 1,
      ts_builtin_sym_end,
  [1018] = 1,
    ACTIONS(255), 1,
      aux_sym_string_token1,
  [1022] = 1,
    ACTIONS(257), 1,
      anon_sym_SQUOTE,
  [1026] = 1,
    ACTIONS(257), 1,
      anon_sym_DQUOTE,
  [1030] = 1,
    ACTIONS(257), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [1034] = 1,
    ACTIONS(259), 1,
      anon_sym_RBRACK,
  [1038] = 1,
    ACTIONS(261), 1,
      anon_sym_COMMA,
  [1042] = 1,
    ACTIONS(263), 1,
      anon_sym_RBRACK,
  [1046] = 1,
    ACTIONS(265), 1,
      aux_sym_string_token1,
  [1050] = 1,
    ACTIONS(267), 1,
      aux_sym_string_token2,
  [1054] = 1,
    ACTIONS(269), 1,
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
  [SMALL_STATE(10)] = 265,
  [SMALL_STATE(11)] = 290,
  [SMALL_STATE(12)] = 315,
  [SMALL_STATE(13)] = 338,
  [SMALL_STATE(14)] = 359,
  [SMALL_STATE(15)] = 384,
  [SMALL_STATE(16)] = 409,
  [SMALL_STATE(17)] = 434,
  [SMALL_STATE(18)] = 447,
  [SMALL_STATE(19)] = 470,
  [SMALL_STATE(20)] = 492,
  [SMALL_STATE(21)] = 514,
  [SMALL_STATE(22)] = 536,
  [SMALL_STATE(23)] = 552,
  [SMALL_STATE(24)] = 568,
  [SMALL_STATE(25)] = 579,
  [SMALL_STATE(26)] = 598,
  [SMALL_STATE(27)] = 617,
  [SMALL_STATE(28)] = 636,
  [SMALL_STATE(29)] = 652,
  [SMALL_STATE(30)] = 664,
  [SMALL_STATE(31)] = 676,
  [SMALL_STATE(32)] = 688,
  [SMALL_STATE(33)] = 698,
  [SMALL_STATE(34)] = 710,
  [SMALL_STATE(35)] = 722,
  [SMALL_STATE(36)] = 738,
  [SMALL_STATE(37)] = 747,
  [SMALL_STATE(38)] = 757,
  [SMALL_STATE(39)] = 765,
  [SMALL_STATE(40)] = 771,
  [SMALL_STATE(41)] = 777,
  [SMALL_STATE(42)] = 783,
  [SMALL_STATE(43)] = 791,
  [SMALL_STATE(44)] = 801,
  [SMALL_STATE(45)] = 811,
  [SMALL_STATE(46)] = 821,
  [SMALL_STATE(47)] = 827,
  [SMALL_STATE(48)] = 833,
  [SMALL_STATE(49)] = 841,
  [SMALL_STATE(50)] = 846,
  [SMALL_STATE(51)] = 853,
  [SMALL_STATE(52)] = 858,
  [SMALL_STATE(53)] = 863,
  [SMALL_STATE(54)] = 870,
  [SMALL_STATE(55)] = 875,
  [SMALL_STATE(56)] = 880,
  [SMALL_STATE(57)] = 887,
  [SMALL_STATE(58)] = 892,
  [SMALL_STATE(59)] = 897,
  [SMALL_STATE(60)] = 902,
  [SMALL_STATE(61)] = 907,
  [SMALL_STATE(62)] = 912,
  [SMALL_STATE(63)] = 917,
  [SMALL_STATE(64)] = 922,
  [SMALL_STATE(65)] = 927,
  [SMALL_STATE(66)] = 932,
  [SMALL_STATE(67)] = 937,
  [SMALL_STATE(68)] = 942,
  [SMALL_STATE(69)] = 949,
  [SMALL_STATE(70)] = 956,
  [SMALL_STATE(71)] = 961,
  [SMALL_STATE(72)] = 966,
  [SMALL_STATE(73)] = 973,
  [SMALL_STATE(74)] = 978,
  [SMALL_STATE(75)] = 982,
  [SMALL_STATE(76)] = 986,
  [SMALL_STATE(77)] = 990,
  [SMALL_STATE(78)] = 994,
  [SMALL_STATE(79)] = 998,
  [SMALL_STATE(80)] = 1002,
  [SMALL_STATE(81)] = 1006,
  [SMALL_STATE(82)] = 1010,
  [SMALL_STATE(83)] = 1014,
  [SMALL_STATE(84)] = 1018,
  [SMALL_STATE(85)] = 1022,
  [SMALL_STATE(86)] = 1026,
  [SMALL_STATE(87)] = 1030,
  [SMALL_STATE(88)] = 1034,
  [SMALL_STATE(89)] = 1038,
  [SMALL_STATE(90)] = 1042,
  [SMALL_STATE(91)] = 1046,
  [SMALL_STATE(92)] = 1050,
  [SMALL_STATE(93)] = 1054,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_normal_command_repeat1, 2), SHIFT_REPEAT(6),
  [40] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_normal_command_repeat1, 2),
  [42] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [44] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [52] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2, .production_id = 6),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2, .production_id = 6), SHIFT_REPEAT(84),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2, .production_id = 6), SHIFT_REPEAT(76),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2, .production_id = 6), SHIFT_REPEAT(74),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2, .production_id = 6), SHIFT_REPEAT(24),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dictionaries_repeat1, 2), SHIFT_REPEAT(84),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dictionaries_repeat1, 2), SHIFT_REPEAT(76),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dictionaries_repeat1, 2), SHIFT_REPEAT(74),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dictionaries_repeat1, 2),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dictionaries_repeat1, 2), SHIFT_REPEAT(75),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_normal_command_repeat2, 2), SHIFT_REPEAT(84),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_normal_command_repeat2, 2), SHIFT_REPEAT(76),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_normal_command_repeat2, 2), SHIFT_REPEAT(74),
  [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_normal_command_repeat2, 2), SHIFT_REPEAT(56),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 1, .production_id = 2),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 1, .production_id = 2),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operatorunit, 5, .production_id = 11),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operatorunit, 5, .production_id = 11),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operatorunit, 4, .production_id = 3),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operatorunit, 4, .production_id = 3),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operatorunit, 3, .production_id = 1),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operatorunit, 3, .production_id = 1),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_experession_statement, 3, .production_id = 7),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_experession_statement, 3, .production_id = 7),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_normal_command_repeat2, 2),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_normal_command_repeat2, 2),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_dictionaries_repeat1, 2),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [184] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(22),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_experession_statement, 3, .production_id = 9),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_experession_statement, 3, .production_id = 9),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operatorunit, 3),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_normal_command, 3),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_normal_command, 7),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_normal_command, 6),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operatorunit, 5),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_normal_command, 4),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_normal_command, 5),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operatorunit, 4),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 4, .production_id = 5),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 3, .production_id = 4),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3, .production_id = 5),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionaries, 3),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_experession_statement, 3, .production_id = 8),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionaries, 2),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_experession_statement, 3, .production_id = 10),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [253] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
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
