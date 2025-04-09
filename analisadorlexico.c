#include "analisadorlexico.h"


void tabelapalavrasreservadas(Table *table){
    initialize_table(table);
    insert_table(table, "CONST", "TOKEN_CONST", TOKEN_CONST);
    insert_table(table, "VAR", "TOKEN_VAR", TOKEN_VAR);
    insert_table(table, "PROCEDURE", "TOKEN_PROCEDURE", TOKEN_PROCEDURE);
    insert_table(table, "BEGIN", "TOKEN_BEGIN", TOKEN_BEGIN);
    insert_table(table, "END", "TOKEN_END", TOKEN_END);
    insert_table(table, "CALL", "TOKEN_CALL", TOKEN_CALL);
    insert_table(table, "IF", "TOKEN_IF", TOKEN_IF);
    insert_table(table, "THEN", "TOKEN_THEN", TOKEN_THEN);
    insert_table(table, "WHILE", "TOKEN_WHILE", TOKEN_WHILE);
    insert_table(table, "DO", "TOKEN_DO", TOKEN_DO);
    insert_table(table, "ODD", "TOKEN_ODD", TOKEN_ODD);
    insert_table(table, "+", "TOKEN_PLUS", TOKEN_PLUS);
    insert_table(table, "-", "TOKEN_MINUS", TOKEN_MINUS);
    insert_table(table, "*", "TOKEN_TIMES", TOKEN_TIMES);
    insert_table(table, "/", "TOKEN_SLASH", TOKEN_SLASH);
    insert_table(table, "=", "TOKEN_EQL", TOKEN_EQL);
    insert_table(table, "<>", "TOKEN_NEQ", TOKEN_NEQ);
    insert_table(table, "<", "TOKEN_LSS", TOKEN_LSS);
    insert_table(table, "<=", "TOKEN_LEQ", TOKEN_LEQ);
    insert_table(table, ">", "TOKEN_GTR", TOKEN_GTR);
    insert_table(table, ">=", "TOKEN_GEQ", TOKEN_GEQ);
    insert_table(table, ":=", "TOKEN_ASSIGN", TOKEN_ASSIGN);
    insert_table(table, "(", "TOKEN_LPAREN", TOKEN_LPAREN);
    insert_table(table, ")", "TOKEN_RPAREN", TOKEN_RPAREN);
    insert_table(table, ",", "TOKEN_COMMA", TOKEN_COMMA);
    insert_table(table, ";", "TOKEN_SEMICOLON", TOKEN_SEMICOLON);
    insert_table(table, ".", "TOKEN_PERIOD", TOKEN_PERIOD);
}