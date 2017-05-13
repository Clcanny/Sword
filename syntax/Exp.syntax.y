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
