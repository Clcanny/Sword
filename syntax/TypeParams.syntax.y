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

%token <type_node> LB RB UPPERID 
%token <type_node> COLON COMMA

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
