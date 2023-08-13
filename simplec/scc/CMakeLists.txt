add_executable(scc)

target_sources(
	scc
	PRIVATE
	"src/lexer.c"
	"src/parser.c"
	"src/main.c"
 "src/token.h")