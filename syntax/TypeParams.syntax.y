%locations
%define parse.error verbose
%{
    /* #include "syntax_tree.h" */

    int has_error = 0;
    void yyerror(const char *msg);
    void yyerror_lineno(const char *msg, int lineno);
%}

%union {
    int type_int;
    void *type_node;
}

%token <type_node> SEMI COMMA COLON SINGLEOR PLACEHOLDER
%token <type_node> DATA
%token <type_node> DEDUCT FUNC
%token <type_node> REFER
%token <type_node> ASSIGNOP
%token <type_node> RELOP
%token <type_node> PLUS MINUS STAR DIV 
%token <type_node> AND OR NOT DOT
%token <type_node> LET VAR BUILDINTYPE
%token <type_node> LP RP LB RB LC RC
%token <type_node> RETURN IF ELSE WHILE
%token <type_node> INT FLOAT
%token <type_node> LOWERID UPPERID

%type <type_node> TypeParams TypeParamList TypeParam
%type <type_node> TypeClassList TypeClass

%%
TypeParams
    : LB RB
    | LB TypeParam COLON TypeClassList TypeParamList RB
    | LB TypeParam TypeParamList RB
    ;

TypeParamList
    : COMMA TypeParam COLON TypeClassList TypeParamList
    | COMMA TypeParam TypeParamList
    | /* empty */
    ;

TypeParam
    : UPPERID
    ;

TypeClassList
    : TypeClass TypeClassList
    | /* empty */
    ;

TypeClass
    : UPPERID
    ;
