/* Function */
/* 函数类型 */
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
FuncParamType
    : Specifier DEDUCT FuncParamType { 
        $$ = new_parent_node("FuncType", GROUP_4 + 1, 2, $1, $3); 
        $$ = new_parent_node("Specifier", GROUP_8 + 6, 1, $$);
    }
    | Specifier { $$ = $1; }
    ;

/* 函数体的定义 */
FuncDec
    : LP VarList RP DEDUCT Specifier { $$ = new_parent_node("FuncDec", GROUP_4 + 3, 2, $2, $5); }
    | LP RP DEDUCT Specifier { $$ = new_parent_node("FuncDec", GROUP_4 + 4, 1, $4); }
    ;
VarList
    : VarDef COMMA VarList { $$ = new_parent_node("VarList", GROUP_4 + 5, 2, $1, $3); }
    | VarDef { $$ = new_parent_node("VarList", GROUP_4 + 6, 1, $1); }
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
