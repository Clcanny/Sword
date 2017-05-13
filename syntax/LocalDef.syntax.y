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
