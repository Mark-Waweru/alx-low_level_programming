Script/file description

0-preprocessor file runs a C file through the preprocessor and save the result into another file.
The C file name will be saved in the variable $CFILE
The output will be saved in the file c

1-compiler file compiles a C file but does not link
The C file will be saved in the variable $CFILE
The output file is named as the same as the C file, but with the extension .o instead of .c
	Example:If the C file is main.c, the output file will be main.o

2-assembler file generates the assembly code of a C code and save it in an output file
The C file name will be saved in the variable $CFILE
The output file will be named the same as the C file, but with the extension .s instead of .c
	Example:if the C file is main.c, the output file should be main.s

3-name file compiles a C file and creates an executable named cisfun
The C file name will be saved in the variable $CFILE

4-puts.c file is a C program that prints exactly "Programming is like building a multilingual puzzle" followed by a new line.

5-printf.c  is a C program that prints exactly "with proper grammer, but the outcome is a piece of art" followed by a new line.

6-size.c is a C program that prints the size of various types on the computer it is compiled and run on.
