#include <ctype.h>
#include <stdio.h>
#include "token.h"
#include "lexer.h"

int get_char(lexer_t* lexer) {
	lexer->last_char = getc(lexer->stream);
	if (lexer->last_char == '\n') {
		++lexer->row;
		lexer->column = 1;
	}
	else {
		++lexer->column;
	}
	return lexer->last_char;
}

void init_lexer(lexer_t* lexer, FILE* stream) {
	lexer->column = 1;
	lexer->row = 1;
	lexer->last_char = -1;
	lexer->stream = stream;
}

int get_token(lexer_t *lexer) {
	get_char(lexer);
	switch (lexer->last_char) {
		case '.':
			return TK_DOT;
		case '-':
			get_char(lexer);
			if (lexer->last_char == '>') {
				return TK_POINTER;
			}
			if (lexer->last_char == '=') {
				return TK_EQUAL;
			}
			return TK_ASSIGN;
	}


}