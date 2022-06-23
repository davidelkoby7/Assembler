compileProgram: assembler.c
	gcc -ansi -Wall -pedantic assembler.c file_handling.h file_handling.c -o assembler
