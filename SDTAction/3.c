/* #include "SDTAction.h" */
/* #include "9.h" */

/* /1* Statements *1/ */
/* /1* Stmt *1/ */
/* /1*     : Exp SEMI { $$ = new_parent_node("Stmt", GROUP_3 + 1, 1, $1); } *1/ */
/* /1*     | VarDef SEMI { $$ = new_parent_node("Stmt", GROUP_3 + 2, 1, $1); } *1/ */
/* /1*     | ADTDef { $$ = new_parent_node("Stmt", GROUP_3 + 3, 1, $1); } *1/ */
/* /1*     | CompSt { $$ = new_parent_node("Stmt", GROUP_3 + 4, 1, $1); } *1/ */
/* /1*     | RETURN Exp SEMI { $$ = new_parent_node("Stmt", GROUP_3 + 5, 1, $2); } *1/ */
/* /1*     | IF LP Exp RP Stmt %prec LOWER_THAN_ELSE { $$ = new_parent_node("Stmt", GROUP_3 + 6, 2, $3, $5); } *1/ */
/* /1*     | IF LP Exp RP Stmt ELSE Stmt { $$ = new_parent_node("Stmt", GROUP_3 + 7, 3, $3, $5, $7); } *1/ */
/* /1*     | WHILE LP Exp RP Stmt { $$ = new_parent_node("Stmt", GROUP_3 + 8, 3, $1, $3, $5); } *1/ */
/* /1*     | SEMI { $$ = new_parent_node("Stmt", GROUP_3 + 9, 0); } *1/ */
/* /1*     ; *1/ */

/* /1* CompSt *1/ */
/* /1*     : LC DSList RC { $$ = new_parent_node("Compst", GROUP_3 + 10, 1, $2); } *1/ */
/* /1*     ; *1/ */
/* ID(310) */
/* { */
/*     if (childNum == 0) */
/*     { */
/*         createInnerSymbolTable(); */
/*     } */
/* } */
/* SD(310) */
/* { */
/*     gotoOuterSymbolTable(); */
/* } */

/* void initActionTable3() */
/* { */
/*     /1* registerIAction(310, pro310IAction); *1/ */
/*     /1* registerSAction(310, pro310SAction); *1/ */
/*     IS(310); */
/*     SS(310); */
/* } */
