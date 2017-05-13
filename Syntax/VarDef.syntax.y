/* Local Definitions */
VarDef
    : LET VarDec ASSIGNOP Exp { $$ = new_parent_node("VarDef", GROUP_9 + 1, 3, $1, $2, $3); }
    | LET VarDec COLON Specifier ASSIGNOP Exp { $$ = new_parent_node("VarDef", GROUP_9 + 2, 4, $1, $2, $4, $6); }
    | VAR VarDec { $$ = new_parent_node("VarDef", GROUP_9 + 3, 2, $1, $2); }
    | VAR VarDec COLON Specifier { $$ = new_parent_node("VarDef", GROUP_9 + 4, 3, $1, $2, $4); }
    | VAR VarDec ASSIGNOP Exp { $$ = new_parent_node("VarDef", GROUP_9 + 5, 3, $1, $2, $4); }
    | VAR VarDec COLON Specifier ASSIGNOP Exp { $$ = new_parent_node("VarDec", GROUP_9 + 6, 4, $1, $2, $4, $6); }
    | PatternMatching { $$ = new_parent_node("VarDef", GROUP_9 + 2, 1, $1); }
    ;
/* Declarators */
VarDec
    : LOWERID { $$ = new_parent_node("VarDec", GROUP_9 + 7, 1, $1); }
    ;
/* Using Variables */
VarUse
    : LOWERID { $$ = new_parent_node("VarUse", GROUP_9 + 8, 1, $1); }
