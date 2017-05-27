/* #include "SDTAction.h" */
/* #include "4.h" */

/* /1* FuncType *1/ */
/* /1*     : FUNC TypeParams LP FuncParamType RP { *1/ */ 
/* /1* 	$$ = new_parent_node("FuncType", GROUP_4 + 1, 2, $2, $4); *1/ */
/* /1*     } *1/ */
/* /1*     ; *1/ */
/* /1* FuncParamType *1/ */
/* /1*     : Specifier DEDUCT FuncParamType { *1/ */ 
/* /1* 	$$ = new_parent_node("FuncParamType", GROUP_4 + 2, 2, $1, $3); *1/ */
/* /1*     } *1/ */
/* /1*     | TypeParam DEDUCT FuncParamType { *1/ */
/* /1* 	$$ = new_parent_node("FuncParamType", GROUP_4 + 3, 2, $1, $3); *1/ */
/* /1*     } *1/ */
/* /1*     | Specifier { *1/ */
/* /1* 	$$ = new_parent_node("FuncParamType", GROUP_4 + 4, 1, $1); *1/ */
/* /1*     } *1/ */
/* /1*     | TypeParam { *1/ */
/* /1* 	$$ = new_parent_node("FuncParamType", GROUP_4 + 4, 1, $1); *1/ */
/* /1*     } *1/ */
/* /1*     ; *1/ */
/* NSDS(402, 403, 404, */
/* D_child_1_info; */
/* AssertTypeInfo(child_1_info); */
/* AssertNoNull(getASTNode((char *)child_1_info->node)); */
/* AssertNextInfoNull(child_1_info); */
/* if (parent->other_info == NULL) */
/* { */
/*     Alloc(parent->other_info, child_1_info); */
/* } */
/* else */
/* { */
/*     D_parent_info; */
/*     TypeInfo *tmp = parent_info; */
/*     while (tmp->nextInfo != NULL) */
/*     { */
/* 	tmp = tmp->nextInfo; */
/*     } */
/*     tmp->nextInfo = child_1_info; */
/* } */
/* ) */

/* /1* NSD(403) *1/ */
/* /1* D_child_1_info; *1/ */
/* /1* AssertTypeInfo(child_1_info); *1/ */
/* /1* AssertNextInfoNull(child_1_info); *1/ */
/* /1* if (parent->other_info == NULL) *1/ */
/* /1* { *1/ */
/* /1*     Alloc(parent->other_info, child_1_info); *1/ */
/* /1* } *1/ */
/* /1* else *1/ */
/* /1* { *1/ */
/* /1*     D_parent_info; *1/ */
/* /1*     TypeInfo *tmp = parent_info; *1/ */
/* /1*     while (tmp->nextInfo != NULL) *1/ */
/* /1*     { *1/ */
/* /1* 	tmp = tmp->nextInfo; *1/ */
/* /1*     } *1/ */
/* /1*     tmp->nextInfo = child_1_info; *1/ */
/* /1* } *1/ */
/* /1* END *1/ */

/* /1* NSD(404) *1/ */
/* /1* D_child_1_info; *1/ */
/* /1* AssertTypeInfo(child_1_info); *1/ */
/* /1* AssertNoNull(getASTNode((char *)child_1_info->node)); *1/ */
/* /1* AssertNextInfoNull(child_1_info); *1/ */
/* /1* if (parent->other_info == NULL) *1/ */
/* /1* { *1/ */
/* /1*     Alloc(parent->other_info, child_1_info); *1/ */
/* /1* } *1/ */
/* /1* else *1/ */
/* /1* { *1/ */
/* /1*     D_parent_info; *1/ */
/* /1*     TypeInfo *tmp = parent_info; *1/ */
/* /1*     while (tmp->nextInfo != NULL) *1/ */
/* /1*     { *1/ */
/* /1* 	tmp = tmp->nextInfo; *1/ */
/* /1*     } *1/ */
/* /1*     tmp->nextInfo = child_1_info; *1/ */
/* /1* } *1/ */
/* /1* END *1/ */
/* /1* FuncParamType *1/ */
/* /1*     : Specifier DEDUCT FuncParamType { *1/ */ 
/* /1*         $$ = new_parent_node("FuncType", GROUP_4 + 1, 2, $1, $3); *1/ */ 
/* /1*         $$ = new_parent_node("Specifier", GROUP_8 + 6, 1, $$); *1/ */
/* /1*     } *1/ */
/* /1*     | Specifier { $$ = $1; } *1/ */
/* /1*     ; *1/ */
/* /1* 由于要兼容不同写法的函数类型 *1/ */
/* /1* 真正的语法树稍有调整，不再有FuncParam这种节点 *1/ */
/* /1* NSD(401) *1/ */
/* /1*     D_child_1; *1/ */
/* /1*     D_child_2; *1/ */
/* /1*     D_child_1_info; *1/ */
/* /1*     D_child_2_info; *1/ */

/* /1*     assert(parent->other_info == NULL); *1/ */
/* /1*     /2* type begin *2/ *1/ */
/* /1*     D_type_info; *1/ */
/* /1*     type_info->typeKind = FunctionType; *1/ */
/* /1*     /2* node begin *2/ *1/ */
/* /1*     AssertTypeInfo(child_1_info); *1/ */
/* /1*     AssertTypeInfo(child_2_info); *1/ */
/* /1*     FunctionNode *node = (FunctionNode *)malloc(sizeof(FunctionNode)); *1/ */
/* /1*     node->paramTypeInfo = child_1_info; *1/ */
/* /1*     node->returnTypeInfo = child_2_info; *1/ */
/* /1*     /2* node end *2/ *1/ */
/* /1*     type_info->node = node; *1/ */
/* /1*     type_info->nextInfo = NULL; *1/ */
/* /1*     /2* type end *2/ *1/ */

/* /1*     Alloc(parent->other_info, type_info); *1/ */
/* /1*     Noalloc(parent->other_info); *1/ */

/* /1* #ifdef function_type_debug_print *1/ */
/* /1*     D_parent_info; *1/ */
/* /1*     printTypeInfo(parent_info); *1/ */
/* /1*     printf("\n"); *1/ */
/* /1* #endif *1/ */
/* /1* END *1/ */

/* /1* /2* FuncType *2/ *1/ */
/* /1* /2*     : FUNC LP FuncParamType RP { *2/ *1/ */ 
/* /1* /2*         if (strcmp(((AST_node *)(((AST_node *)$3)->first_child))->str, "FuncType")) *2/ *1/ */
/* /1* /2*         { *2/ *1/ */
/* /1* /2*             $$ = new_parent_node("FuncType", GROUP_4 + 2, 1, $3); *2/ *1/ */
/* /1* /2*             $$ = new_parent_node("Specifier", GROUP_8 + 6, 1, $$); *2/ *1/ */
/* /1* /2*         } *2/ *1/ */
/* /1* /2*         else *2/ *1/ */ 
/* /1* /2*         { *2/ *1/ */
/* /1* /2*             $$ = $3; *2/ *1/ */
/* /1* /2*         } *2/ *1/ */
/* /1* /2*     } *2/ *1/ */
/* /1* /2*     ; *2/ *1/ */
/* /1* /2* 由于要兼容不同写法的函数类型 *2/ *1/ */
/* /1* /2* 真正的语法树稍有调整，不再有FuncParam这种节点 *2/ *1/ */
/* /1* /2* SD(402) *2/ *1/ */
/* /1* /2* { *2/ *1/ */
/* /1* NSD(402) *1/ */
/* /1*     /2* type begin *2/ *1/ */
/* /1*     D_type_info; *1/ */
/* /1*     type_info->typeKind = FunctionType; *1/ */
/* /1*     /2* node begin *2/ *1/ */
/* /1*     FunctionNode *node = (FunctionNode *)malloc(sizeof(FunctionNode)); *1/ */
/* /1*     node->paramTypeInfo = NULL; *1/ */
/* /1*     D_child_1_info; *1/ */
/* /1*     AssertTypeInfo(child_1_info); *1/ */
/* /1*     assert(child_1_info->nextInfo == NULL); *1/ */
/* /1*     node->returnTypeInfo = child_1_info; *1/ */
/* /1*     /2* node end *2/ *1/ */
/* /1*     type_info->node = node; *1/ */
/* /1*     type_info->nextInfo = NULL; *1/ */
/* /1*     /2* type end *2/ *1/ */

/* /1*     Alloc(parent->other_info, type_info); *1/ */
/* /1*     Noalloc(parent->other_info); *1/ */

/* /1* #ifdef function_type_debug_print *1/ */
/* /1*     D_parent_info; *1/ */
/* /1*     printTypeInfo(parent_info); *1/ */
/* /1*     printf("\n"); *1/ */
/* /1* #endif *1/ */
/* /1* END *1/ */

/* /1* /2* FuncDec *2/ *1/ */
/* /1* /2*     : LP VarList RP DEDUCT Specifier { $$ = new_parent_node("FuncDec", GROUP_4 + 3, 2, $2, $5); } *2/ *1/ */
/* /1* /2*     | LP RP DEDUCT Specifier { $$ = new_parent_node("FuncDec", GROUP_4 + 4, 1, $4); } *2/ *1/ */
/* /1* /2*     ; *2/ *1/ */
/* /1* NSD(403) *1/ */
/* /1*     D_child_1_info; *1/ */

/* /1*     TypeInfo *returnTypeInfo = child_1_info; *1/ */
/* /1*     assert(returnTypeInfo != NULL); *1/ */
/* /1*     TypeInfo *n = (TypeInfo *)((FunctionNode *)returnTypeInfo->node)->returnTypeInfo; *1/ */
/* /1*     for (; n != NULL; *1/ */ 
/* /1*          returnTypeInfo = n, n = (TypeInfo *)((FunctionNode *)n->node)->returnTypeInfo) *1/ */
/* /1*     { *1/ */
/* /1* 	AssertFunctionTypeInfo(returnTypeInfo); *1/ */
/* /1*         assert(returnTypeInfo->nextInfo == NULL); *1/ */
/* /1*     } *1/ */

/* /1*     D_child_2_info; *1/ */
/* /1*     AssertTypeInfo(child_2_info); *1/ */
/* /1*     assert(child_2_info->nextInfo == NULL); *1/ */
/* /1*     ((FunctionNode *)(returnTypeInfo->node))->returnTypeInfo = child_2_info; *1/ */

/* /1*     Alloc(parent->other_info, child_1_info); *1/ */

/* /1*     D_child_1; *1/ */
/* /1*     Dealloc(child_1->other_info); *1/ */
/* /1* END *1/ */

/* /1* NSD(404) *1/ */
/* /1*     /2* type begin *2/ *1/ */
/* /1*     D_type_info; *1/ */
/* /1*     type_info->typeKind = FunctionType; *1/ */
/* /1*     /2* node begin *2/ *1/ */
/* /1*     FunctionNode *node = (FunctionNode *)malloc(sizeof(FunctionNode)); *1/ */
/* /1*     node->paramTypeInfo = NULL; *1/ */
/* /1*     D_child_1_info; *1/ */
/* /1*     AssertTypeInfo(child_1_info); *1/ */
/* /1*     assert(child_1_info->nextInfo == NULL); *1/ */
/* /1*     node->returnTypeInfo = child_1_info; *1/ */
/* /1*     /2* node end *2/ *1/ */
/* /1*     type_info->node = node; *1/ */
/* /1*     type_info->nextInfo = NULL; *1/ */
/* /1*     /2* type end *2/ *1/ */

/* /1*     Alloc(parent->other_info, type_info); *1/ */
/* /1* END *1/ */

/* /1* /2* VarList *2/ *1/ */
/* /1* /2*     : ParamDec COMMA VarList { $$ = new_parent_node("VarList", GROUP_4 + 5, 2, $1, $3); } *2/ *1/ */
/* /1* /2*     | ParamDec { $$ = new_parent_node("VarList", GROUP_4 + 6, 1, $1); } *2/ *1/ */
/* /1* /2*     ; *2/ *1/ */
/* /1* NSD(405) *1/ */
/* /1*     D_child_1_info; *1/ */
/* /1*     AssertTypeInfo(child_1_info); *1/ */
/* /1*     /2* assert(child_1_info->nextInfo == NULL); *2/ *1/ */

/* /1*     D_child_2_info; *1/ */
/* /1*     AssertFunctionTypeInfo(child_2_info); *1/ */
/* /1*     FunctionNode *node = (FunctionNode *)child_2_info->node; *1/ */
/* /1*     assert(node != NULL); *1/ */
/* /1*     assert(node->paramTypeInfo != NULL); *1/ */
/* /1*     /2* 不好进行判断，两种情况都有可能 *2/ *1/ */
/* /1*     /2* assert(node->returnTypeInfo == NULL); *2/ *1/ */
/* /1*     assert(child_2_info->nextInfo == NULL); *1/ */

/* /1*     /2* type begin *2/ *1/ */
/* /1*     D_type_info; *1/ */
/* /1*     type_info->typeKind = FunctionType; *1/ */
/* /1*     /2* node begin *2/ *1/ */
/* /1*     FunctionNode *fnode = (FunctionNode *)malloc(sizeof(FunctionNode)); *1/ */
/* /1*     fnode->paramTypeInfo = child_1_info; *1/ */
/* /1*     fnode->returnTypeInfo = child_2_info; *1/ */
/* /1*     /2* node end *2/ *1/ */
/* /1*     type_info->node = fnode; *1/ */
/* /1*     type_info->nextInfo = NULL; *1/ */
/* /1*     /2* type end *2/ *1/ */

/* /1*     Alloc(parent->other_info, type_info); *1/ */

/* /1*     D_child_1; *1/ */
/* /1*     Dealloc(child_1->other_info); *1/ */
/* /1* END *1/ */

/* /1* NSD(406) *1/ */
/* /1*     D_parent_info; *1/ */

/* /1*     D_child_1_info; *1/ */
/* /1*     AssertTypeInfo(child_1_info); *1/ */
/* /1*     /2* assert(child_1_info->nextInfo == NULL); *2/ *1/ */

/* /1*     /2* type begin *2/ *1/ */
/* /1*     D_type_info; *1/ */
/* /1*     type_info->typeKind = FunctionType; *1/ */
/* /1*     /2* node begin *2/ *1/ */
/* /1*     FunctionNode *node = (FunctionNode *)malloc(sizeof(FunctionNode)); *1/ */
/* /1*     node->paramTypeInfo = child_1_info; *1/ */
/* /1*     /2* returnTypeInfo是整个函数的返回值，交给上层产生式填写 *2/ *1/ */
/* /1*     /2* 至此，形参列表的递归推导结束 *2/ *1/ */
/* /1*     node->returnTypeInfo = NULL; *1/ */
/* /1*     /2* node end *2/ *1/ */
/* /1*     type_info->node = node; *1/ */
/* /1*     type_info->nextInfo = NULL; *1/ */
/* /1*     /2* type end *2/ *1/ */

/* /1*     Alloc(parent->other_info, type_info); *1/ */

/* /1*     D_child_1; *1/ */
/* /1*     Dealloc(child_1->other_info); *1/ */
/* /1* END *1/ */

/* /1* /2* ParamDec *2/ *1/ */
/* /1* /2*     : Specifier VarDec { $$ = new_parent_node("ParamDec", GROUP_4 + 7, 2, $1, $2); } *2/ *1/ */
/* /1* /2*     ; *2/ *1/ */
/* /1* NID(407) *1/ */
/* /1*     if (childNum == 2) *1/ */
/* /1*     { *1/ */
/* /1*         D_child_1_info; *1/ */
/* /1* 	AssertTypeInfo(child_1_info); *1/ */

/* /1* 	Alloc(child->other_info, child_1_info); *1/ */
/* /1* 	/2* Noalloc(child->other_info); *2/ *1/ */
/* /1*     } *1/ */
/* /1* END *1/ */
/* /1* NSD(407) *1/ */
/* /1*     D_child_1_info; *1/ */
/* /1*     AssertTypeInfo(child_1_info); *1/ */
/* /1*     /2* 由于Specifer->other_info与VarDec->other_info共享同一块内存 *2/ *1/ */
/* /1*     /2* 所以当VarDec->other_in->nextInfofo被赋予变量名称时，Specifier->other_info->nextInfo也不再为空 *2/ *1/ */
/* /1*     Alloc(parent->other_info, child_1_info); *1/ */

/* /1*     D_child_2; *1/ */
/* /1*     D_child_2_info; *1/ */
/* /1*     assert(child_2_info != NULL); *1/ */
/* /1*     addSymbol((char *)((TypeInfo *)child_2_info)->nextInfo, child_2); *1/ */
/* /1* #ifdef st_debug_print *1/ */
/* /1*     printf("add VarDec: %s in symbol table. (SD(407))\n", (char *)((TypeInfo *)child_2_info)->nextInfo); *1/ */
/* /1* #endif *1/ */
/* /1* END *1/ */

/* /1* /2* FuncBody *2/ *1/ */
/* /1* /2*     : FuncDec CompSt { $$ = new_parent_node("FuncBody", GROUP_4 + 8, 2, $1, $2); } *2/ *1/ */
/* /1* /2*     ; *2/ *1/ */
/* /1* ID(408) *1/ */
/* /1* { *1/ */
/* /1*     if (childNum == 0) *1/ */
/* /1*     { *1/ */
/* /1*         createInnerSymbolTable(); *1/ */
/* /1*     } *1/ */
/* /1* } *1/ */
/* /1* NSD(408) *1/ */
/* /1*     gotoOuterSymbolTable(); *1/ */

/* /1*     D_child_1_info; *1/ */
/* /1*     AssertFunctionTypeInfo(child_1_info); *1/ */
/* /1*     FunctionNode *node = (FunctionNode *)child_1_info->node; *1/ */
/* /1*     assert(node->returnTypeInfo != NULL); *1/ */
/* /1*     assert(child_1_info->nextInfo == NULL); *1/ */

/* /1*     Alloc(parent->other_info, child_1_info); *1/ */
/* /1*     Noalloc(parent->other_info); *1/ */

/* /1*     D_child_1; *1/ */
/* /1*     Dealloc(child_1->other_info); *1/ */

/* /1* #ifdef function_type_debug_print *1/ */
/* /1*     D_parent_info; *1/ */
/* /1*     printTypeInfo(parent_info); *1/ */
/* /1*     printf("\n"); *1/ */
/* /1* #endif *1/ */
/* /1* END *1/ */

/* /1* /2* FuncCall *2/ *1/ */
/* /1* /2*     : Exp LP RP { $$ = new_parent_node("FuncCall", GROUP_4 + 9, 1, $1); } *2/ *1/ */
/* /1* /2*     | Exp LP Args RP { $$ = new_parent_node("FuncCall", GROUP_4 + 10, 2, $1, $3); } *2/ *1/ */
/* /1* /2*     ; *2/ *1/ */
/* /1* NSD(409) *1/ */
/* /1*     D_child_1_info; *1/ */
/* /1*     /2* assert(child_1_info->typeKind == FunctionType); *2/ *1/ */
/* /1*     AssertFunctionTypeInfo(child_1_info); *1/ */
/* /1*     FunctionNode *node = (FunctionNode *)child_1_info->node; *1/ */
/* /1*     if (node->paramTypeInfo == NULL) *1/ */
/* /1*     { *1/ */
/* /1* 	Alloc(parent->other_info, node->returnTypeInfo); *1/ */
/* /1*     } *1/ */
/* /1*     else *1/ */
/* /1*     { *1/ */
/* /1* 	Alloc(parent->other_info, child_1_info); *1/ */
/* /1*     } *1/ */
/* /1* #ifdef exp_type_debug_print *1/ */
/* /1*     printTypeInfo(parent->other_info); *1/ */
/* /1*     printf("\n"); *1/ */
/* /1* #endif *1/ */
/* /1* END *1/ */

/* /1* NID(410) *1/ */
/* /1*     if (childNum == 2) *1/ */
/* /1*     { *1/ */
/* /1*         D_child_1_info; *1/ */
/* /1* 	Alloc(child->other_info, child_1_info); *1/ */
/* /1*     } *1/ */
/* /1* END *1/ */
/* /1* NSD(410) *1/ */
/* /1*     D_child_2_info; *1/ */
/* /1*     Alloc(parent->other_info, child_2_info); *1/ */
/* /1* #ifdef function_type_debug_print *1/ */
/* /1*     printTypeInfo(parent->other_info); *1/ */
/* /1*     printf(" (SD(410))\n"); *1/ */
/* /1* #endif *1/ */
/* /1* END *1/ */

/* /1* /2* Args *2/ *1/ */
/* /1* /2*     : Exp COMMA Args { $$ = new_parent_node("Args", GROUP_4 + 11, 2, $1, $3); } *2/ *1/ */
/* /1* /2*     | PLACEHOLDER COMMA Args { $$ = new_parent_node("Args", GROUP_4 + 12, 2, $1, $3); } *2/ *1/ */
/* /1* /2*     | Exp { $$ = new_parent_node("Args", GROUP_4 + 13, 0); } *2/ *1/ */
/* /1* /2*     ; *2/ *1/ */

/* /1* NID(411) *1/ */
/* /1*     if (childNum == 2) *1/ */
/* /1*     { *1/ */
/* /1*         D_parent_info; *1/ */
/* /1* 	Alloc(child->other_info, ((FunctionNode *)parent_info->node)->returnTypeInfo); *1/ */
/* /1*     } *1/ */
/* /1* END *1/ */
/* /1* NSD(411) *1/ */
/* /1*     D_child_2_info; *1/ */
/* /1*     OverWrite(parent->other_info, child_2_info); *1/ */
/* /1* END *1/ */

/* /1* NID(412) *1/ */
/* /1*     if (childNum == 2) *1/ */
/* /1*     { *1/ */
/* /1*         D_parent_info; *1/ */
/* /1* 	AssertFunctionTypeInfo(parent_info); *1/ */

/* /1*         FunctionNode *fn = parent_info->node; *1/ */
/* /1*         TypeInfo *paramTypeInfo = fn->paramTypeInfo; *1/ */
/* /1*         TypeInfo *returnTypeInfo = fn->returnTypeInfo; *1/ */
/* /1*         TypeInfo *realReturnTypeInfo = ((FunctionNode *)returnTypeInfo->node)->returnTypeInfo; *1/ */
/* /1*         while (realReturnTypeInfo->typeKind == FunctionType) *1/ */
/* /1*         { *1/ */
/* /1*             returnTypeInfo = realReturnTypeInfo; *1/ */
/* /1*             realReturnTypeInfo = ((FunctionNode *)realReturnTypeInfo->node)->returnTypeInfo; *1/ */
/* /1*         } *1/ */
/* /1*         FunctionNode *node = malloc(sizeof(FunctionNode)); *1/ */
/* /1*         node->paramTypeInfo = paramTypeInfo; *1/ */
/* /1*         node->returnTypeInfo = realReturnTypeInfo; *1/ */ 
/* /1*         TypeInfo *info = malloc(sizeof(TypeInfo)); *1/ */
/* /1*         info->typeKind = FunctionType; *1/ */
/* /1*         info->node = node; *1/ */
/* /1*         info->nextInfo = NULL; *1/ */
/* /1*         ((FunctionNode *)returnTypeInfo->node)->returnTypeInfo = info; *1/ */

/* /1* 	Alloc(child->other_info, ((FunctionNode *)parent_info->node)->returnTypeInfo); *1/ */
/* /1* #ifdef function_type_debug_print *1/ */
/* /1*         printTypeInfo(child->other_info); *1/ */
/* /1*         printf(" (ID(412))\n"); *1/ */
/* /1* #endif *1/ */
/* /1*     } *1/ */
/* /1* END *1/ */
/* /1* NSD(412) *1/ */
/* /1*     D_child_2_info; *1/ */
/* /1*     OverWrite(parent->other_info, child_2_info); *1/ */
/* /1* END *1/ */

/* /1* NSD(413) *1/ */
/* /1*     D_parent_info; *1/ */
/* /1*     OverWrite(parent->other_info, ((FunctionNode *)parent_info->node)->returnTypeInfo); *1/ */
/* /1* END *1/ */

/* void initActionTable4() */
/* { */
/*     /1* IS(407, 408, 410, 411, 412); *1/ */
/*     /1* SS(401, 402, 403, 404, 405, 406, 407, 408, 409, 410, 411, 412, 413); *1/ */
/* } */
