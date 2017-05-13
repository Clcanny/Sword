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
