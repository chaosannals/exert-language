#ifndef SIMPLE_C_PARSER_H
#define SIMPLE_C_PARSER_H

typedef struct parser_s {
    int last_token;
} parser_t;

void program(parser_t parser);

#endif
