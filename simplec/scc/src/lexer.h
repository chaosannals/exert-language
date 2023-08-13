#ifndef SIMPLE_C_LEXER_H
#define SIMPLE_C_LEXER_H

typedef struct lexer_s {
    int row;
    int column;
    int last_char;
    FILE* stream;
    int buffer[256];
} lexer_t;

void init_lexer(lexer_t* lexer, FILE* stream);

int get_token(lexer_t *lexer);

#endif
