/* 支持变量定义和变量使用的混合 */
/* 不再要求变量定义与变量使用分隔 */
/* StmtList & DefList */
DSList
    : Stmt DSList { $$ = new_parent_node("DSList", GROUP_2 + 1, 2, $1, $2); }
    | /* empty */ { $$ = new_parent_node("DSList", GROUP_2 + 2, 0); }
    ;
