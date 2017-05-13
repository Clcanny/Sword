%%
/* High-level Definitions */
Program
    : DSList {
        $$ = new_parent_node("Program", GROUP_1 + 1, 1, $1);
    #ifdef syntax_debug_print
        print_child_node($$, 0);
    #endif
        initActionTable();
        initSymbolTableStack();
        traversalTreePerformAction($$);
    #ifdef pointer_debug
    	printPointerLog();
    #endif
        cleanActionTable();
    #ifdef st_debug_print
        printGlobalSymbolTable();
    #endif
        /* clean_up_syntax_tree($$); */
        /* cleanUpSymbolTable(); */
    }
    ;

/* 支持变量定义和变量使用的混合 */
/* 不再要求变量定义与变量使用分隔 */
/* StmtList & DefList */
DSList
    : Stmt DSList { $$ = new_parent_node("DSList", GROUP_2 + 1, 2, $1, $2); }
    | /* empty */ { $$ = new_parent_node("DSList", GROUP_2 + 2, 0); }
    ;

/* Statements */
Stmt
    : Exp SEMI { $$ = new_parent_node("Stmt", GROUP_3 + 1, 1, $1); }
    | VarDef SEMI { $$ = new_parent_node("Stmt", GROUP_3 + 2, 1, $1); }
    /* 为避免不明原因引起的冲突，把ADTDef后跟的SEMI移到下层产生式 */
    | ADTDef SEMI { $$ = new_parent_node("Stmt", GROUP_3 + 3, 1, $1); }
    | CompSt { $$ = new_parent_node("Stmt", GROUP_3 + 4, 1, $1); }
    | RETURN Exp SEMI { $$ = new_parent_node("Stmt", GROUP_3 + 5, 1, $2); }
    | IF LP Exp RP Stmt %prec LOWER_THAN_ELSE { $$ = new_parent_node("Stmt", GROUP_3 + 6, 2, $3, $5); }
    | IF LP Exp RP Stmt ELSE Stmt { $$ = new_parent_node("Stmt", GROUP_3 + 7, 3, $3, $5, $7); }
    | WHILE LP Exp RP Stmt { $$ = new_parent_node("Stmt", GROUP_3 + 8, 3, $1, $3, $5); }
    | SEMI { $$ = new_parent_node("Stmt", GROUP_3 + 9, 0); }
    ;
CompSt
    : LC DSList RC { $$ = new_parent_node("Compst", GROUP_3 + 10, 1, $2); }
    ;

/* Function */
/* 函数类型 */
FuncParamType
    : Specifier DEDUCT FuncParamType { 
        $$ = new_parent_node("FuncType", GROUP_4 + 1, 2, $1, $3); 
        $$ = new_parent_node("Specifier", GROUP_8 + 6, 1, $$);
    }
    | Specifier { $$ = $1; }
    ;
FuncType
    : FUNC LP FuncParamType RP { 
        if (strcmp(((AST_node *)(((AST_node *)$3)->first_child))->str, "FuncType"))
        {
            $$ = new_parent_node("FuncType", GROUP_4 + 2, 1, $3);
            $$ = new_parent_node("Specifier", GROUP_8 + 6, 1, $$);
        }
        else 
        {
            $$ = $3;
        }
    }
    ;
/* 函数体的定义 */
FuncDec
    : LP VarList RP DEDUCT Specifier { $$ = new_parent_node("FuncDec", GROUP_4 + 3, 2, $2, $5); }
    | LP RP DEDUCT Specifier { $$ = new_parent_node("FuncDec", GROUP_4 + 4, 1, $4); }
    ;
VarList
    : ParamDec COMMA VarList { $$ = new_parent_node("VarList", GROUP_4 + 5, 2, $1, $3); }
    | ParamDec { $$ = new_parent_node("VarList", GROUP_4 + 6, 1, $1); }
    ;
ParamDec
    : Specifier VarDec { $$ = new_parent_node("ParamDec", GROUP_4 + 7, 2, $1, $2); }
    ;
FuncBody
    : FuncDec CompSt { $$ = new_parent_node("FuncBody", GROUP_4 + 8, 2, $1, $2); }
    ;
/* 函数调用 */
FuncCall
    : Exp LP RP { $$ = new_parent_node("FuncCall", GROUP_4 + 9, 1, $1); }
    | Exp LP Args RP { $$ = new_parent_node("FuncCall", GROUP_4 + 10, 2, $1, $3); }
    ;
Args
    : Exp COMMA Args { $$ = new_parent_node("Args", GROUP_4 + 11, 2, $1, $3); }
    | PLACEHOLDER COMMA Args { $$ = new_parent_node("Args", GROUP_4 + 12, 2, $1, $3); }
    | Exp { $$ = new_parent_node("Args", GROUP_4 + 13, 0); }
    ;

/* Array */
ArrayType
    : Specifier LB Exp RB { $$ = new_parent_node("ArrayType", GROUP_5 + 1, 2, $1, $3); }
    ;

/* REFER */
/* 指针 */
ReferType
    : REFER LP Specifier RP { $$ = new_parent_node("ReferType", GROUP_6 + 1, 1, $3); }
    ;

/* ADT */
ADTDef
    : ADTHeader ASSIGNOP ConstructorDec ConstructorDecList { $$ = new_parent_node("ADTDef", GROUP_7 + 2, 3, $1, $3, $4); }
    ;
ADTHeader
    : DATA TypeId ADTParamList { $$ = new_parent_node("ADTHeader", GROUP_7 + 3, 2, $2, $3); }
    ;
ADTParamList
    : ADTParam ADTParamList { $$ = new_parent_node("ADTParamList", GROUP_7 + 4, 2, $1, $2); }
    | /* empty */ { $$ = new_parent_node("ADTParamList", GROUP_7 + 5, 0); }
    ;
ADTParam
    : LOWERID { $$ = new_parent_node("ADTParam", GROUP_7 + 6, 1, $1); }
    ;
ConstructorDecList
    : SINGLEOR ConstructorDec ConstructorDecList { $$ = new_parent_node("ConstructorDecList", GROUP_7 + 7, 2, $2, $3); } 
    | /* empty */ { $$ = new_parent_node("ConstructorDecList", GROUP_7 + 8, 0); }
    ;
ConstructorDec
    : ConstructorId ConstructorUseTypeList { $$ = new_parent_node("ConstructorDec", GROUP_7 + 9, 2, $1, $2); }
    ;
ConstructorId
    : UPPERID { $$ = new_parent_node("ConstructorId", GROUP_7 + 10, 1, $1); }
    ;
ConstructorUseTypeList
    : Specifier ConstructorUseTypeList { $$ = new_parent_node("ConstructorUseTypeList", GROUP_7 + 11, 2, $1, $2); }
    | ADTParam ConstructorUseTypeList { $$ = new_parent_node("ConstructorUseTypeList", GROUP_7 + 12, 2, $1, $2); }
    | /* empty */ { $$ = new_parent_node("ConstructorUseTypeList", GROUP_7 + 13, 0); }
    ;
TypeId
    : UPPERID { $$ = new_parent_node("TypeId", GROUP_7 + 14, 1, $1); }
    ;
/* ADT类型的使用 */
ADTType
    : TypeId LB SpecifierList RB { $$ = new_parent_node("ADTType", GROUP_7 + 15, 2, $1, $3); }
    ;
SpecifierList
    : Specifier SpecifierList { $$ = new_parent_node("SpecifierList", GROUP_7 + 16, 2, $1, $2); }
    | /* empty */ { $$ = new_parent_node("SpecifierList", GROUP_7 + 17, 0); }
    ;
/* pattern matching */
PatternMatching
    : LET LP ConstructorId PatternMatchingParamList RP ASSIGNOP VarDec { 
        $$ = new_parent_node("PatternMatching", GROUP_7 + 15, 3, $3, $4, $7); 
    }
    ;
PatternMatchingParamList
    : LOWERID PatternMatchingParamList { 
        $$ = new_parent_node("PatternMatchingParamList", GROUP_7 + 16, 2, $1, $2);
    }
    | PLACEHOLDER PatternMatchingParamList { 
        $$ = new_parent_node("PatternMatchingParamList", GROUP_7 + 17, 2, $1, $2); 
    }
    | /* empty */ { $$ = new_parent_node("PatternMatchingParamList", GROUP_7 + 18, 0); }
    ;

/* Specifiers */
Specifier
    : BUILDINTYPE { $$ = new_parent_node("Specifier", GROUP_8 + 1, 1, $1); }
    | LET { $$ = new_parent_node("Specifier", GROUP_8 + 2, 1, $1); }
    /* | TypeId { $$ = new_parent_node("Specifier", GROUP_8 + 3, 1, $1); } */
    | ArrayType { $$ = new_parent_node("Specifier", GROUP_8 + 4, 1, $1); }
    | ReferType { $$ = new_parent_node("Specifier", GROUP_8 + 5, 1, $1); }
    /* 为了照顾函数类型定义的一种语法糖，不得不这样写 */
    | FuncType { $$ = $1; }
    | ADTType { $$ = new_parent_node("Specifier", GROUP_8 + 7, 1, $1); }
    ;

/* Local Definitions */
VarDef
    : Specifier DecList { $$ = new_parent_node("VarDef", GROUP_9 + 1, 2, $1, $2); }
    /* 模式匹配也可看成是一种特殊的变量定义 */
    | PatternMatching { $$ = new_parent_node("VarDef", GROUP_9 + 2, 1, $1); }
    ;
DecList
    : Dec { $$ = new_parent_node("DecList", GROUP_9 + 3, 1, $1); }
    | Dec COMMA DecList { $$ = new_parent_node("DecList", GROUP_9 + 4, 2, $1, $3); }
    ;
Dec
    : VarDec { $$ = new_parent_node("Dec", GROUP_9 + 5, 1, $1); }
    | VarDec ASSIGNOP Exp { $$ = new_parent_node("Dec", GROUP_9 + 6, 2, $1, $3); }
    ;
/* Declarators */
VarDec
    : LOWERID { $$ = new_parent_node("VarDec", GROUP_9 + 7, 1, $1); }
    ;
/* Using Variables */
VarUse
    : LOWERID { $$ = new_parent_node("VarUse", GROUP_9 + 8, 1, $1); }

/* Expressions */
Exp
    : Exp ASSIGNOP Exp {$$ = new_parent_node("Exp", GROUP_10 + 1, 2, $1, $3); }
    /* 关系运算表达式／逻辑表达式／算数表达式 */
    | Exp RELOP Exp { $$ = new_parent_node("Exp", GROUP_10 + 2, 3, $1, $2, $3); }
    | Exp AND Exp { $$ = new_parent_node("Exp", GROUP_10 + 3, 2, $1, $3); }
    | Exp OR Exp { $$ = new_parent_node("Exp", GROUP_10 + 4, 2, $1, $3); }
    | NOT Exp { $$ = new_parent_node("Exp", GROUP_10 + 5, 1, $2); }
    | Exp PLUS Exp { $$ = new_parent_node("Exp", GROUP_10 + 6, 2, $1, $3); }
    | Exp MINUS Exp { $$ = new_parent_node("Exp", GROUP_10 + 7, 2, $1, $3); }
    | Exp STAR Exp { $$ = new_parent_node("Exp", GROUP_10 + 8, 2, $1, $3); }
    | Exp DIV Exp { $$ = new_parent_node("Exp", GROUP_10 + 9, 2, $1, $3); }
    | MINUS Exp { $$ = new_parent_node("Exp", GROUP_10 + 10, 1, $2); }
    /* 加上括号改变优先级 */
    | LP Exp RP { $$ = new_parent_node("Exp", GROUP_10 + 11, 1, $2); }
    /* 函数调用 */
    | FuncCall { $$ = new_parent_node("Exp", GROUP_10 + 12, 1, $1); }
    /* DEFER相关表达式 */
    | REFER LP Exp RP { $$ = new_parent_node("Exp", GROUP_10 + 13, 2, $1, $3); }
    | DEFER LP Exp RP { $$ = new_parent_node("Exp", GROUP_10 + 14, 2, $1, $3); }
    /* 从ADT中取数据 */
    | Exp DOT INT { $$ = new_parent_node("Exp", GROUP_10 + 15, 2, $1, $3); }
    /* Exp building block */
    | VarUse { $$ = new_parent_node("Exp", GROUP_10 + 16, 1, $1); }
    | INT { $$ = new_parent_node("Exp", GROUP_10 + 17, 1, $1); }
    | FLOAT { $$ = new_parent_node("Exp", GROUP_10 + 18, 1, $1); }
    | FuncBody { $$ = new_parent_node("Exp", GROUP_10 + 19, 1, $1); }
    ;
