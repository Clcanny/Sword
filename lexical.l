%{
    #include <stdio.h>
    #include <stdlib.h>
    #include "syntax.tab.h"
    #include "syntax_tree.h"
    #include "DebugMacro.h"

    // 维护词法单元的位置信息
    int yycolumn = 1;
    #define YY_USER_ACTION \
    yylloc.first_line = yylloc.last_line = yylineno; \
    yylloc.first_column = yycolumn; \
    yylloc.last_column = yycolumn + yyleng - 1; \
    yycolumn += yyleng;

    void print_loc_info(char* name);
    void comment();
    enum RelopType
    {
        less = 0,
        more,
        less_equal,
        more_equal,
        equal,
        not_equal
    };
%}

%option yylineno
digit [0-9]
letter [a-zA-Z_]
uppercase [A-Z]
lowercase [a-z]
ws [ \t]

%%
{ws}+ { print_loc_info("find white spaces"); }
"/*" { comment(); }

\n { 
    yycolumn = 1;
    print_loc_info("SEMI");
    yylval.type_node = (void *)new_token_node(yylloc.first_line, yylloc.first_column, "SEMI");
    return SEMI;
}
"," {
    print_loc_info("COMMA");
    yylval.type_node = new_token_node(yylloc.first_line, yylloc.first_column, "COMMA");
    return COMMA;
}
":" {
    print_loc_info("COLON");
    yylval.type_node = new_token_node(yylloc.first_line, yylloc.first_column, "COLON");
    return COLON;
}
"|" {
    print_loc_info("SINGLEOR");
    yylval.type_node = new_token_node(yylloc.first_line, yylloc.first_column, "SINGLEOR");
    return SINGLEOR;
}
"_" {
    print_loc_info("PLACEHOLDER");
    yylval.type_node = new_token_node(yylloc.first_line, yylloc.first_column, "PLACEHOLDER");
    return PLACEHOLDER;
}

data {
    print_loc_info("DATA");
    yylval.type_node = new_token_node(yylloc.first_line, yylloc.first_column, "DATA");
    return DATA;
}
class {
    print_loc_info("CLASS");
    yylval.type_node = new_token_node(yylloc.first_line, yylloc.first_column, "CLASS");
    return CLASS;
}
instance {
    print_loc_info("INSTANCE");
    yylval.type_node = new_token_node(yylloc.first_line, yylloc.first_column, "INSTANCE");
    return INSTANCE;
}

"->" {
    print_loc_info("DEDUCT");
    yylval.type_node = new_token_node(yylloc.first_line, yylloc.first_column, "DEDUCT");
    return DEDUCT;
}
fn {
    print_loc_info("FUNC");
    yylval.type_node = new_token_node(yylloc.first_line, yylloc.first_column, "FUNC");
    return FUNC;
}

refer {
    print_loc_info("REFER");
    yylval.type_node = new_token_node(yylloc.first_line, yylloc.first_column, "REFER");
    return REFER;
}

"=" {
    print_loc_info("ASSIGNOP");
    yylval.type_node = new_token_node(yylloc.first_line, yylloc.first_column, "ASSIGNOP");
    return ASSIGNOP;
}
"<" {
    print_loc_info("RELOP-less");
    yylval.type_node = new_token_node(yylloc.first_line, yylloc.first_column, "RELOP");
    return RELOP;
}
">" {
    print_loc_info("RELOP-more");
    yylval.type_node = new_token_node(yylloc.first_line, yylloc.first_column, "RELOP");
    return RELOP;
}
"<=" {
    print_loc_info("RELOP-less_equal");
    yylval.type_node = new_token_node(yylloc.first_line, yylloc.first_column, "RELOP");
    return RELOP;
}
">=" {
    print_loc_info("RELOP-more_equal");
    yylval.type_node = new_token_node(yylloc.first_line, yylloc.first_column, "RELOP");
    return RELOP;
}
"==" {
    print_loc_info("RELOP-equal");
    yylval.type_node = new_token_node(yylloc.first_line, yylloc.first_column, "RELOP");
    return RELOP;
}
"!=" {
    print_loc_info("RELOP-not_equal");
    yylval.type_node = new_token_node(yylloc.first_line, yylloc.first_column, "RELOP");
    return RELOP;
}

"+" {
    print_loc_info("PLUS");
    yylval.type_node = new_token_node(yylloc.first_line, yylloc.first_column, "PLUS");
    return PLUS;
}
"-" {
    print_loc_info("MINUS");
    yylval.type_node = new_token_node(yylloc.first_line, yylloc.first_column, "MINUS");
    return MINUS;
}
"*" {
    print_loc_info("STAR");
    yylval.type_node = new_token_node(yylloc.first_line, yylloc.first_column, "STAR");
    return STAR;
}
"/" {
    print_loc_info("DIV");
    yylval.type_node = new_token_node(yylloc.first_line, yylloc.first_column, "DIV");
    return DIV;
}
"&&" {
    print_loc_info("AND");
    yylval.type_node = new_token_node(yylloc.first_line, yylloc.first_column, "AND");
    return AND;
}
"||" {
    print_loc_info("OR");
    yylval.type_node = new_token_node(yylloc.first_line, yylloc.first_column, "OR");
    return OR;
}
"." {
    print_loc_info("DOT");
    yylval.type_node = new_token_node(yylloc.first_line, yylloc.first_column, "DOT");
    return DOT;
}
"!" {
    print_loc_info("NOT");
    yylval.type_node = new_token_node(yylloc.first_line, yylloc.first_column, "NOT");
    return NOT;
}

let {
    print_loc_info("LET");
    yylval.type_node = new_token_node(yylloc.first_line, yylloc.first_column, "LET");
    return LET;
}
var {
    print_loc_info("VAR");
    yylval.type_node = new_token_node(yylloc.first_line, yylloc.first_column, "VAR");
    return VAR;
}
Int {
    print_loc_info("INT");
    yylval.type_node = new_token_node(yylloc.first_line, yylloc.first_column, "INT");
    return BUILDINTYPE;
}
Float {
    print_loc_info("INT");
    yylval.type_node = new_token_node(yylloc.first_line, yylloc.first_column, "FLOAT");
    return BUILDINTYPE;
}

"(" {
    print_loc_info("LP");
    yylval.type_node = new_token_node(yylloc.first_line, yylloc.first_column, "LP");
    return LP;
}
")" {
    print_loc_info("RP");
    yylval.type_node = new_token_node(yylloc.first_line, yylloc.first_column, "RP");
    return RP;
}
"[" {
    print_loc_info("LB");
    yylval.type_node = new_token_node(yylloc.first_line, yylloc.first_column, "LB");
    return LB;
}
"]" {
    print_loc_info("RB");
    yylval.type_node = new_token_node(yylloc.first_line, yylloc.first_column, "RB");
    return RB;
}
"{" {
    print_loc_info("LC");
    yylval.type_node = new_token_node(yylloc.first_line, yylloc.first_column, "LC");
    return LC;
}
"}" {
    print_loc_info("RC");
    yylval.type_node = new_token_node(yylloc.first_line, yylloc.first_column, "RC");
    return RC;
}

return {
    print_loc_info("RETURN");
    yylval.type_node = new_token_node(yylloc.first_line, yylloc.first_column, "RETURN");
    return RETURN;
}
if {
    print_loc_info("IF");
    yylval.type_node = new_token_node(yylloc.first_line, yylloc.first_column, "IF");
    return IF;
}
else {
    print_loc_info("ELSE");
    yylval.type_node = new_token_node(yylloc.first_line, yylloc.first_column, "ELSE");
    return ELSE;
}
while { 
    print_loc_info("WHILE");
    yylval.type_node = new_token_node(yylloc.first_line, yylloc.first_column, "WHILE");
    return WHILE;
}

0|[1-9]{digit}* { 
    //yylval=atoi(yytext);
    char print_output[50];
    int value = atoi(yytext);
    snprintf(print_output, sizeof(print_output), "%d", value);
    print_loc_info(print_output);
    yylval.type_node = new_token_node(yylloc.first_line, yylloc.first_column, print_output);
    return INT;
}
(({digit}*\.{digit}+)|({digit}+\.{digit}*))([Ee][+-]?[0-9]+)? {
    //yylval.type_node = atof(yytext);
    char print_output[50];
    float value = atof(yytext);
    snprintf(print_output, sizeof(print_output), "%f", value);
    print_loc_info(print_output);
    yylval.type_node = new_token_node(yylloc.first_line, yylloc.first_column, print_output);
    return FLOAT;
}

{lowercase}({letter}|{digit})* {
    char print_output[50];
    snprintf(print_output, sizeof(print_output), "%s", yytext);
    print_loc_info(print_output);
    yylval.type_node = new_token_node(yylloc.first_line, yylloc.first_column, print_output);
    return LOWERID;
}
{uppercase}({letter}|{digit})* {
    char print_output[50];
    snprintf(print_output, sizeof(print_output), "%s", yytext);
    print_loc_info(print_output);
    yylval.type_node = new_token_node(yylloc.first_line, yylloc.first_column, print_output);
    return UPPERID;
}

. {
    printf("Error Type A at line %d: ", yylloc.first_line);
    printf("Mysterious character \"%s\"\n", yytext);
    yyterminate();
}

%%

void print_loc_info(char* name)
{
#ifdef flex_debug_print
    printf("%s: line--%d; column--%d\n", name, yylloc.first_line, yylloc.first_column);
#endif
}

void comment()
{
    char c, c1;

loop:
    while ((c = input()) != '*' && c != 0)
    {
#ifdef flex_debug_print
        putchar(c);
#endif
    }

    if ((c1 = input()) != '/' && c != 0)
    {
#ifdef flex_debug_print
        unput(c1);
#endif
        goto loop;
    }

    if (c != 0)
    {
#ifdef flex_debug_print
        putchar(c1);
#endif
    }
}
