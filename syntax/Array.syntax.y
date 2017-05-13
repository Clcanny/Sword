/* Array */
ArrayType
    : Specifier LB Exp RB { $$ = new_parent_node("ArrayType", GROUP_5 + 1, 2, $1, $3); }
    ;
