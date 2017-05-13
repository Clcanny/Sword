%locations
%define parse.error verbose
%{
    #include "syntax_tree.h"
    #include "SDTAction.h"
    #include "symbol_table.h"
    #include "DebugMacro.h"
    #include "Pointer.h"

    #define GROUP_1 100
    #define GROUP_2 200
    #define GROUP_3 300
    #define GROUP_4 400
    #define GROUP_5 500
    #define GROUP_6 600
    #define GROUP_7 700
    #define GROUP_8 800
    #define GROUP_9 900
    #define GROUP_10 1000

    int has_error = 0;
    void yyerror(const char *msg);
    void yyerror_lineno(const char *msg, int lineno);
%}

%union {
    int type_int;
    void *type_node;
}

%token <type_node> DEFER REFER
%token <type_node> SINGLEOR DATA PLACEHOLDER
%token <type_node> LOWERID UPPERID
%token <type_node> FUNC DEDUCT
%token <type_node> LET
%token <type_node> ASSIGNOP RELOP AND OR NOT
%token <type_node> PLUS MINUS STAR DIV
%token <type_node> BUILDINTYPE STRUCT INT FLOAT
%token <type_node> IF ELSE WHILE RETURN
%token <type_node> SEMI COMMA DOT
%token <type_node> LP RP LB RB LC RC

%type <type_node> ArrayType ReferType FuncCall ADTType SpecifierList
%type <type_node> ADTHeader ADTParamList ADTParam PatternMatching PatternMatchingParamList
%type <type_node> ConstructorId TypeId ConstructorUseTypeList ConstructorDec ConstructorDecList ADTDef
%type <type_node> FuncType FuncParamType FuncBody
%type <type_node> DSList
%type <type_node> Program
%type <type_node> Specifier
%type <type_node> VarDec FuncDec VarList ParamDec VarUse
