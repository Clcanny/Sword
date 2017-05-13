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
