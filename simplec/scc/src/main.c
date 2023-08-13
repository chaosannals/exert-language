#include <stdio.h>
#include "lexer.h"
#include "parser.h"

int main(int argc, char*argv[]) {
    lexer_t lexer;
    parser_t parser;
    
    if (argc >= 2) {
        FILE *fp = fopen(argv[1], "r");
        init_lexer(&lexer, fp);
    }
    else {
        init_lexer(&lexer, stdin);
    }
    return 0;
}