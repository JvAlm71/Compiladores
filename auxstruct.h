#ifndef AUXSTRUCT_H
#define AUXSTRUCT_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_BUF_SIZE 256
#define TABLE_SIZE 100


typedef struct TokenInfo {
    char identificador[MAX_BUF_SIZE];  
    char token[MAX_BUF_SIZE];
    int token_enum;
    int state;
    bool final;
} TokenInfo;


typedef struct {
    Node *table[TABLE_SIZE];
} Table;


typedef enum {
    TOKEN_IDENT,     // identificador
    TOKEN_NUMBER,    // número
    TOKEN_PLUS,      // +
    TOKEN_MINUS,     // -
    TOKEN_TIMES,     // *
    TOKEN_SLASH,     // /
    TOKEN_ODD,       // odd
    TOKEN_EQL,       // =
    TOKEN_NEQ,       // <>
    TOKEN_LSS,       // <
    TOKEN_LEQ,       // <=
    TOKEN_GTR,       // >
    TOKEN_GEQ,       // >=
    TOKEN_LPAREN,    // (
    TOKEN_RPAREN,    // )
    TOKEN_COMMA,     // ,
    TOKEN_SEMICOLON, // ;
    TOKEN_PERIOD,    // .
    TOKEN_ASSIGN,    // :=
    TOKEN_BEGIN,     // begin
    TOKEN_END,       // end
    TOKEN_IF,        // if
    TOKEN_THEN,      // then
    TOKEN_WHILE,     // while
    TOKEN_DO,        // do
    TOKEN_CALL,      // call
    TOKEN_CONST,     // const
    TOKEN_VAR,       // var
    TOKEN_PROCEDURE, // procedure
    TOKEN_ERROR,     // erro léxico
    TOKEN_EOF        // fim de arquivo
} TokenType;


#endif
