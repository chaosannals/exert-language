#ifndef SIMPLE_C_TOKEN_H
#define SIMPLE_C_TOKEN_H

typedef enum token_e {
	TK_PLUS, // +
	TK_MINUS, // -
	TK_STAR, //*
	TK_SLASH, //  /
	TK_PERCENT, // %

	TK_ASSIGN, // =

	// 布尔运算
	TK_EQUAL, // ==
	TK_NOT_EQUAL, // !=
	TK_LT, // <
	TK_LEQ, // <=
	TK_GT, // >
	TK_GEQ, // >=
	TK_AND, // &&
	TK_OR, // ||

	TK_POINTER, // ->
	TK_DOT, // .

	// 位运算
	TK_BIT_AND_REF, // &
	TK_BIT_OR, // |

	// 括号
	TK_PA_L, // (
	TK_PA_R, // )
	TK_BR_L, // [
	TK_BR_L, // ]
	TK_BEGIN, // {
	TK_END, // }

	TK_COLON, // :
	TK_SEMICOLON, // ;
	TK_COMMA, // ,

	// 字面量
	TK_L_INT, // 整数
	TK_L_CHAR, // 字符 ''
	TK_L_STRING, // 字符串 ""

	TK_ID, // 标识符 

	// 关键字
	KW_CHAR, // char
	KW_SHORT, // short
	KW_INT, // int
	KW_VOID, //void
	KW_STRUCT, // struct
	KW_IF, // if
	KW_ELSE, // else
	KW_FOR, // for
	KW_CONTINUE, // continue
	KW_BREAK, // break
	KW_RETURN, //return
	KW_SIZEOF, // sizeof

	TK_EOF = -1,
} token_t;

#endif
