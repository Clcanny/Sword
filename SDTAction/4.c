#include "SDTAction.h"
#include "4.h"
#include "ForEach.h"

/* FuncType */
/*     : FUNC TypeParams LP FuncParamType RP { */ 
/* 	$$ = new_parent_node("FuncType", GROUP_4 + 1, 2, $2, $4); */
/*     } */
/*     ; */
/* FuncParamType */
/*     : Specifier DEDUCT FuncParamType { */ 
/* 	$$ = new_parent_node("FuncParamType", GROUP_4 + 2, 2, $1, $3); */
/*     } */
/*     | TypeParam DEDUCT FuncParamType { */
/* 	$$ = new_parent_node("FuncParamType", GROUP_4 + 3, 2, $1, $3); */
/*     } */
/*     | Specifier { */
/* 	$$ = new_parent_node("FuncParamType", GROUP_4 + 4, 1, $1); */
/*     } */
/*     | TypeParam { */
/* 	$$ = new_parent_node("FuncParamType", GROUP_4 + 4, 1, $1); */
/*     } */
/*     ; */
NSDS(402, 403, 404,
D_child_1_info;
AssertTypeInfo(child_1_info);
AssertNoNull(getASTNode((char *)child_1_info->node));
AssertNextInfoNull(child_1_info);
if (parent->other_info == NULL)
{
    Alloc(parent->other_info, child_1_info);
}
else
{
    D_parent_info;
    TypeInfo *tmp = parent_info;
    while (tmp->nextInfo != NULL)
    {
	tmp = tmp->nextInfo;
    }
    tmp->nextInfo = child_1_info;
}
)

/* NSD(403) */
/* D_child_1_info; */
/* AssertTypeInfo(child_1_info); */
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
/* END */

/* NSD(404) */
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
/* END */
/* FuncParamType */
/*     : Specifier DEDUCT FuncParamType { */ 
/*         $$ = new_parent_node("FuncType", GROUP_4 + 1, 2, $1, $3); */ 
/*         $$ = new_parent_node("Specifier", GROUP_8 + 6, 1, $$); */
/*     } */
/*     | Specifier { $$ = $1; } */
/*     ; */
/* 由于要兼容不同写法的函数类型 */
/* 真正的语法树稍有调整，不再有FuncParam这种节点 */
/* NSD(401) */
/*     D_child_1; */
/*     D_child_2; */
/*     D_child_1_info; */
/*     D_child_2_info; */

/*     assert(parent->other_info == NULL); */
/*     /1* type begin *1/ */
/*     D_type_info; */
/*     type_info->typeKind = FunctionType; */
/*     /1* node begin *1/ */
/*     AssertTypeInfo(child_1_info); */
/*     AssertTypeInfo(child_2_info); */
/*     FunctionNode *node = (FunctionNode *)malloc(sizeof(FunctionNode)); */
/*     node->paramTypeInfo = child_1_info; */
/*     node->returnTypeInfo = child_2_info; */
/*     /1* node end *1/ */
/*     type_info->node = node; */
/*     type_info->nextInfo = NULL; */
/*     /1* type end *1/ */

/*     Alloc(parent->other_info, type_info); */
/*     Noalloc(parent->other_info); */

/* #ifdef function_type_debug_print */
/*     D_parent_info; */
/*     printTypeInfo(parent_info); */
/*     printf("\n"); */
/* #endif */
/* END */

/* /1* FuncType *1/ */
/* /1*     : FUNC LP FuncParamType RP { *1/ */ 
/* /1*         if (strcmp(((AST_node *)(((AST_node *)$3)->first_child))->str, "FuncType")) *1/ */
/* /1*         { *1/ */
/* /1*             $$ = new_parent_node("FuncType", GROUP_4 + 2, 1, $3); *1/ */
/* /1*             $$ = new_parent_node("Specifier", GROUP_8 + 6, 1, $$); *1/ */
/* /1*         } *1/ */
/* /1*         else *1/ */ 
/* /1*         { *1/ */
/* /1*             $$ = $3; *1/ */
/* /1*         } *1/ */
/* /1*     } *1/ */
/* /1*     ; *1/ */
/* /1* 由于要兼容不同写法的函数类型 *1/ */
/* /1* 真正的语法树稍有调整，不再有FuncParam这种节点 *1/ */
/* /1* SD(402) *1/ */
/* /1* { *1/ */
/* NSD(402) */
/*     /1* type begin *1/ */
/*     D_type_info; */
/*     type_info->typeKind = FunctionType; */
/*     /1* node begin *1/ */
/*     FunctionNode *node = (FunctionNode *)malloc(sizeof(FunctionNode)); */
/*     node->paramTypeInfo = NULL; */
/*     D_child_1_info; */
/*     AssertTypeInfo(child_1_info); */
/*     assert(child_1_info->nextInfo == NULL); */
/*     node->returnTypeInfo = child_1_info; */
/*     /1* node end *1/ */
/*     type_info->node = node; */
/*     type_info->nextInfo = NULL; */
/*     /1* type end *1/ */

/*     Alloc(parent->other_info, type_info); */
/*     Noalloc(parent->other_info); */

/* #ifdef function_type_debug_print */
/*     D_parent_info; */
/*     printTypeInfo(parent_info); */
/*     printf("\n"); */
/* #endif */
/* END */

/* /1* FuncDec *1/ */
/* /1*     : LP VarList RP DEDUCT Specifier { $$ = new_parent_node("FuncDec", GROUP_4 + 3, 2, $2, $5); } *1/ */
/* /1*     | LP RP DEDUCT Specifier { $$ = new_parent_node("FuncDec", GROUP_4 + 4, 1, $4); } *1/ */
/* /1*     ; *1/ */
/* NSD(403) */
/*     D_child_1_info; */

/*     TypeInfo *returnTypeInfo = child_1_info; */
/*     assert(returnTypeInfo != NULL); */
/*     TypeInfo *n = (TypeInfo *)((FunctionNode *)returnTypeInfo->node)->returnTypeInfo; */
/*     for (; n != NULL; */ 
/*          returnTypeInfo = n, n = (TypeInfo *)((FunctionNode *)n->node)->returnTypeInfo) */
/*     { */
/* 	AssertFunctionTypeInfo(returnTypeInfo); */
/*         assert(returnTypeInfo->nextInfo == NULL); */
/*     } */

/*     D_child_2_info; */
/*     AssertTypeInfo(child_2_info); */
/*     assert(child_2_info->nextInfo == NULL); */
/*     ((FunctionNode *)(returnTypeInfo->node))->returnTypeInfo = child_2_info; */

/*     Alloc(parent->other_info, child_1_info); */

/*     D_child_1; */
/*     Dealloc(child_1->other_info); */
/* END */

/* NSD(404) */
/*     /1* type begin *1/ */
/*     D_type_info; */
/*     type_info->typeKind = FunctionType; */
/*     /1* node begin *1/ */
/*     FunctionNode *node = (FunctionNode *)malloc(sizeof(FunctionNode)); */
/*     node->paramTypeInfo = NULL; */
/*     D_child_1_info; */
/*     AssertTypeInfo(child_1_info); */
/*     assert(child_1_info->nextInfo == NULL); */
/*     node->returnTypeInfo = child_1_info; */
/*     /1* node end *1/ */
/*     type_info->node = node; */
/*     type_info->nextInfo = NULL; */
/*     /1* type end *1/ */

/*     Alloc(parent->other_info, type_info); */
/* END */

/* /1* VarList *1/ */
/* /1*     : ParamDec COMMA VarList { $$ = new_parent_node("VarList", GROUP_4 + 5, 2, $1, $3); } *1/ */
/* /1*     | ParamDec { $$ = new_parent_node("VarList", GROUP_4 + 6, 1, $1); } *1/ */
/* /1*     ; *1/ */
/* NSD(405) */
/*     D_child_1_info; */
/*     AssertTypeInfo(child_1_info); */
/*     /1* assert(child_1_info->nextInfo == NULL); *1/ */

/*     D_child_2_info; */
/*     AssertFunctionTypeInfo(child_2_info); */
/*     FunctionNode *node = (FunctionNode *)child_2_info->node; */
/*     assert(node != NULL); */
/*     assert(node->paramTypeInfo != NULL); */
/*     /1* 不好进行判断，两种情况都有可能 *1/ */
/*     /1* assert(node->returnTypeInfo == NULL); *1/ */
/*     assert(child_2_info->nextInfo == NULL); */

/*     /1* type begin *1/ */
/*     D_type_info; */
/*     type_info->typeKind = FunctionType; */
/*     /1* node begin *1/ */
/*     FunctionNode *fnode = (FunctionNode *)malloc(sizeof(FunctionNode)); */
/*     fnode->paramTypeInfo = child_1_info; */
/*     fnode->returnTypeInfo = child_2_info; */
/*     /1* node end *1/ */
/*     type_info->node = fnode; */
/*     type_info->nextInfo = NULL; */
/*     /1* type end *1/ */

/*     Alloc(parent->other_info, type_info); */

/*     D_child_1; */
/*     Dealloc(child_1->other_info); */
/* END */

/* NSD(406) */
/*     D_parent_info; */

/*     D_child_1_info; */
/*     AssertTypeInfo(child_1_info); */
/*     /1* assert(child_1_info->nextInfo == NULL); *1/ */

/*     /1* type begin *1/ */
/*     D_type_info; */
/*     type_info->typeKind = FunctionType; */
/*     /1* node begin *1/ */
/*     FunctionNode *node = (FunctionNode *)malloc(sizeof(FunctionNode)); */
/*     node->paramTypeInfo = child_1_info; */
/*     /1* returnTypeInfo是整个函数的返回值，交给上层产生式填写 *1/ */
/*     /1* 至此，形参列表的递归推导结束 *1/ */
/*     node->returnTypeInfo = NULL; */
/*     /1* node end *1/ */
/*     type_info->node = node; */
/*     type_info->nextInfo = NULL; */
/*     /1* type end *1/ */

/*     Alloc(parent->other_info, type_info); */

/*     D_child_1; */
/*     Dealloc(child_1->other_info); */
/* END */

/* /1* ParamDec *1/ */
/* /1*     : Specifier VarDec { $$ = new_parent_node("ParamDec", GROUP_4 + 7, 2, $1, $2); } *1/ */
/* /1*     ; *1/ */
/* NID(407) */
/*     if (childNum == 2) */
/*     { */
/*         D_child_1_info; */
/* 	AssertTypeInfo(child_1_info); */

/* 	Alloc(child->other_info, child_1_info); */
/* 	/1* Noalloc(child->other_info); *1/ */
/*     } */
/* END */
/* NSD(407) */
/*     D_child_1_info; */
/*     AssertTypeInfo(child_1_info); */
/*     /1* 由于Specifer->other_info与VarDec->other_info共享同一块内存 *1/ */
/*     /1* 所以当VarDec->other_in->nextInfofo被赋予变量名称时，Specifier->other_info->nextInfo也不再为空 *1/ */
/*     Alloc(parent->other_info, child_1_info); */

/*     D_child_2; */
/*     D_child_2_info; */
/*     assert(child_2_info != NULL); */
/*     addSymbol((char *)((TypeInfo *)child_2_info)->nextInfo, child_2); */
/* #ifdef st_debug_print */
/*     printf("add VarDec: %s in symbol table. (SD(407))\n", (char *)((TypeInfo *)child_2_info)->nextInfo); */
/* #endif */
/* END */

/* /1* FuncBody *1/ */
/* /1*     : FuncDec CompSt { $$ = new_parent_node("FuncBody", GROUP_4 + 8, 2, $1, $2); } *1/ */
/* /1*     ; *1/ */
/* ID(408) */
/* { */
/*     if (childNum == 0) */
/*     { */
/*         createInnerSymbolTable(); */
/*     } */
/* } */
/* NSD(408) */
/*     gotoOuterSymbolTable(); */

/*     D_child_1_info; */
/*     AssertFunctionTypeInfo(child_1_info); */
/*     FunctionNode *node = (FunctionNode *)child_1_info->node; */
/*     assert(node->returnTypeInfo != NULL); */
/*     assert(child_1_info->nextInfo == NULL); */

/*     Alloc(parent->other_info, child_1_info); */
/*     Noalloc(parent->other_info); */

/*     D_child_1; */
/*     Dealloc(child_1->other_info); */

/* #ifdef function_type_debug_print */
/*     D_parent_info; */
/*     printTypeInfo(parent_info); */
/*     printf("\n"); */
/* #endif */
/* END */

/* /1* FuncCall *1/ */
/* /1*     : Exp LP RP { $$ = new_parent_node("FuncCall", GROUP_4 + 9, 1, $1); } *1/ */
/* /1*     | Exp LP Args RP { $$ = new_parent_node("FuncCall", GROUP_4 + 10, 2, $1, $3); } *1/ */
/* /1*     ; *1/ */
/* NSD(409) */
/*     D_child_1_info; */
/*     /1* assert(child_1_info->typeKind == FunctionType); *1/ */
/*     AssertFunctionTypeInfo(child_1_info); */
/*     FunctionNode *node = (FunctionNode *)child_1_info->node; */
/*     if (node->paramTypeInfo == NULL) */
/*     { */
/* 	Alloc(parent->other_info, node->returnTypeInfo); */
/*     } */
/*     else */
/*     { */
/* 	Alloc(parent->other_info, child_1_info); */
/*     } */
/* #ifdef exp_type_debug_print */
/*     printTypeInfo(parent->other_info); */
/*     printf("\n"); */
/* #endif */
/* END */

/* NID(410) */
/*     if (childNum == 2) */
/*     { */
/*         D_child_1_info; */
/* 	Alloc(child->other_info, child_1_info); */
/*     } */
/* END */
/* NSD(410) */
/*     D_child_2_info; */
/*     Alloc(parent->other_info, child_2_info); */
/* #ifdef function_type_debug_print */
/*     printTypeInfo(parent->other_info); */
/*     printf(" (SD(410))\n"); */
/* #endif */
/* END */

/* /1* Args *1/ */
/* /1*     : Exp COMMA Args { $$ = new_parent_node("Args", GROUP_4 + 11, 2, $1, $3); } *1/ */
/* /1*     | PLACEHOLDER COMMA Args { $$ = new_parent_node("Args", GROUP_4 + 12, 2, $1, $3); } *1/ */
/* /1*     | Exp { $$ = new_parent_node("Args", GROUP_4 + 13, 0); } *1/ */
/* /1*     ; *1/ */

/* NID(411) */
/*     if (childNum == 2) */
/*     { */
/*         D_parent_info; */
/* 	Alloc(child->other_info, ((FunctionNode *)parent_info->node)->returnTypeInfo); */
/*     } */
/* END */
/* NSD(411) */
/*     D_child_2_info; */
/*     OverWrite(parent->other_info, child_2_info); */
/* END */

/* NID(412) */
/*     if (childNum == 2) */
/*     { */
/*         D_parent_info; */
/* 	AssertFunctionTypeInfo(parent_info); */

/*         FunctionNode *fn = parent_info->node; */
/*         TypeInfo *paramTypeInfo = fn->paramTypeInfo; */
/*         TypeInfo *returnTypeInfo = fn->returnTypeInfo; */
/*         TypeInfo *realReturnTypeInfo = ((FunctionNode *)returnTypeInfo->node)->returnTypeInfo; */
/*         while (realReturnTypeInfo->typeKind == FunctionType) */
/*         { */
/*             returnTypeInfo = realReturnTypeInfo; */
/*             realReturnTypeInfo = ((FunctionNode *)realReturnTypeInfo->node)->returnTypeInfo; */
/*         } */
/*         FunctionNode *node = malloc(sizeof(FunctionNode)); */
/*         node->paramTypeInfo = paramTypeInfo; */
/*         node->returnTypeInfo = realReturnTypeInfo; */ 
/*         TypeInfo *info = malloc(sizeof(TypeInfo)); */
/*         info->typeKind = FunctionType; */
/*         info->node = node; */
/*         info->nextInfo = NULL; */
/*         ((FunctionNode *)returnTypeInfo->node)->returnTypeInfo = info; */

/* 	Alloc(child->other_info, ((FunctionNode *)parent_info->node)->returnTypeInfo); */
/* #ifdef function_type_debug_print */
/*         printTypeInfo(child->other_info); */
/*         printf(" (ID(412))\n"); */
/* #endif */
/*     } */
/* END */
/* NSD(412) */
/*     D_child_2_info; */
/*     OverWrite(parent->other_info, child_2_info); */
/* END */

/* NSD(413) */
/*     D_parent_info; */
/*     OverWrite(parent->other_info, ((FunctionNode *)parent_info->node)->returnTypeInfo); */
/* END */

void initActionTable4()
{
    /* IS(407, 408, 410, 411, 412); */
    /* SS(401, 402, 403, 404, 405, 406, 407, 408, 409, 410, 411, 412, 413); */
}
