/* FuncType */
FuncType
    : FUNC TypeParams LP FuncParamType RP { 
	$$ = new_parent_node("FuncType", GROUP_4 + 1, 2, $2, $4);
    }
    ;
FuncParamType
    : Specifier DEDUCT FuncParamType { 
	$$ = new_parent_node("FuncParamType", GROUP_4 + 2, 2, $1, $3);
    }
    | TypeParam DEDUCT FuncParamType {
	$$ = new_parent_node("FuncParamType", GROUP_4 + 3, 2, $1, $3);
    }
    | Specifier {
	$$ = new_parent_node("FuncParamType", GROUP_4 + 4, 1, $1);
    }
    | TypeParam {
	$$ = new_parent_node("FuncParamType", GROUP_4 + 5, 1, $1);
    }
    ;

/* 函数体的定义 */
FuncDec
    : LP VarList RP DEDUCT Specifier { $$ = new_parent_node("FuncDec", GROUP_4 + 6, 2, $2, $5); }
    | LP RP DEDUCT Specifier { $$ = new_parent_node("FuncDec", GROUP_4 + 7, 1, $4); }
    ;
VarList
    : VarDef COMMA VarList { $$ = new_parent_node("VarList", GROUP_4 + 8, 2, $1, $3); }
    | VarDef { $$ = new_parent_node("VarList", GROUP_4 + 9, 1, $1); }
    ;
FuncBody
    : FuncDec CompSt { $$ = new_parent_node("FuncBody", GROUP_4 + 10, 2, $1, $2); }
    ;

/* 函数调用 */
FuncCall
    : Exp LP RP { $$ = new_parent_node("FuncCall", GROUP_4 + 11, 1, $1); }
    | Exp LP Args RP { $$ = new_parent_node("FuncCall", GROUP_4 + 12, 2, $1, $3); }
    ;
Args
    : Exp COMMA Args { $$ = new_parent_node("Args", GROUP_4 + 13, 2, $1, $3); }
    | PLACEHOLDER COMMA Args { $$ = new_parent_node("Args", GROUP_4 + 14, 2, $1, $3); }
    | Exp { $$ = new_parent_node("Args", GROUP_4 + 15, 0); }
    ;
