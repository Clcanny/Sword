#/bin/bash
flex lexical.l
bison -d -t -v $1.syntax.y
gcc -std=c99 -I$(pwd) $(find .. -maxdepth 1 -name "*.c") $1.syntax.tab.c lex.yy.c -o parser
