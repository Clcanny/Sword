/* #include "SDTAction.h" */
/* #include "7.h" */

/* /1* ADT *1/ */
/* /1* ADTDef *1/ */
/* /1*     : ADTHeader %prec LOWER_THAN_ASSIGNOP SEMI { $$ = new_parent_node("ADTRef", GROUP_7 + 1, 1, $1); } *1/ */
/* /1*     | ADTHeader ASSIGNOP ConstructorDecList { $$ = new_parent_node("ADTHeader", GROUP_7 + 2, 2, $1, $3); } *1/ */
/* /1*     ; *1/ */
/* NSD(701) */
/*     D_child_1; */
/*     Dealloc(child_1->other_info); */
/* END */

/* NID(702) */
/*     if (childNum == 2) */
/*     { */
/*         D_child_1_info; */
/* 	Alloc(child->other_info, child_1_info); */
/*     } */
/* END */
/* NSD(702) */
/*     D_child_1; */
/*     Dealloc(child_1->other_info); */

/*     D_child_2; */
/*     Dealloc(child_2->other_info); */
/* END */

/* /1* ADTHeader *1/ */
/* /1*     : DATA TypeId ADTParamList { $$ = new_parent_node("ADTHeader", GROUP_7 + 3, 2, $2, $3); } *1/ */
/* /1*     ; *1/ */
/* NID(703) */
/*     if (childNum == 2) */
/*     { */
/*         D_child_1_info; */
/* 	Alloc(child->other_info, child_1_info); */
/*     } */
/* END */
/* NSD(703) */
/*     D_child_1; */
/*     D_child_1_info; */
/*     assert(child_1_info != NULL); */
/*     addSymbol((char *)child_1_info, child_1); */
/* #ifdef st_debug_print */
/*     printf("add TypeId: %s in symbol table. (SD(703))\n", (char *)child_1_info); */
/* #endif */

/*     Alloc(parent->other_info, child_1_info); */

/*     D_child_2; */
/*     Dealloc(child_2->other_info); */
/* END */

/* /1* ADTParamList *1/ */
/* /1*     : ADTParam ADTParamList { $$ = new_parent_node("ADTParamList", GROUP_7 + 4, 2, $1, $2); } *1/ */
/* /1*     | { $$ = new_parent_node("ADTParamList", GROUP_7 + 5, 0); } *1/ */
/* /1*     ; *1/ */
/* NID(704) */
/*     if (childNum ==  1 || childNum == 2) */
/*     { */
/* 	Alloc(child->other_info, parent->other_info); */
/*     } */
/* END */
/* NSD(704) */
/*     D_child_1_info; */
/*     D_child_1; */
/*     assert(child_1_info != NULL); */
/*     addSymbol((char *)child_1_info, child_1); */
/* #ifdef st_debug_print */
/*     printf("add ADTParam: %s in symbol table. (SD(704))\n", (char *)child_1_info); */
/* #endif */

/*     Noalloc(child_1->other_info); */

/*     D_child_2; */
/*     Dealloc(child_2->other_info); */
/* END */

/* /1* ADTParam *1/ */
/* /1*     : LOWERID { $$ = new_parent_node("ADTParam", GROUP_7 + 6, 1, $1); } *1/ */
/* /1*     ; *1/ */
/* NSD(706) */
/*     D_parent_info; */
/*     D_child_1; */
/*     /1* TypeId-ADTParam\0 *1/ */
/*     assert(parent_info != NULL); */
/*     int part1 = strlen((char *)parent_info); */
/*     int part2 = strlen(child_1->str + 4); */
/*     char *name = malloc((part1 + 1 + part2 + 1) * sizeof(char)); */
/*     strcpy(name, (char *)parent_info); */
/*     name[part1] = '-'; */
/*     strcpy(name + part1 + 1, child_1->str + 4); */
/*     /1* parent->other_info = name; *1/ */
/*     OverWrite(parent->other_info, name); */
/* END */

/* /1* ConstructorDecList *1/ */
/* /1*     : ConstructorDec { $$ = new_parent_node("ConstructorDecList", GROUP_7 + 7, 1, $1); } *1/ */
/* /1*     | ConstructorDec SEMI ConstructorDecList { $$ = new_parent_node("ConstructorDecList", GROUP_7 + 8, 2, $1, $3); } *1/ */ 
/* /1*     ; *1/ */
/* NID(707) */
/*     if (childNum == 1) */
/*     { */
/*         D_parent_info; */
/* 	Alloc(child->other_info, parent_info); */
/*     } */
/* END */
/* NSD(707) */
/*     D_child_1; */
/*     Dealloc(child_1->other_info); */
/* END */

/* NID(708) */
/*     if (childNum == 1 || childNum == 2) */
/*     { */
/*         D_parent_info; */
/* 	Alloc(child->other_info, parent_info); */
/*     } */
/* END */
/* NSD(708) */
/*     D_child_1; */
/*     Dealloc(child_1->other_info); */

/*     D_child_2; */
/*     Dealloc(child_2->other_info); */
/* END */

/* /1* ConstructorDec *1/ */
/* /1*     : ConstructorId TypeIdList { $$ = new_parent_node("ConstructorDec", GROUP_7 + 9, 2, $1, $2); } *1/ */
/* /1*     ; *1/ */
/* NID(709) */
/*     if (childNum == 2) */
/*     { */
/*         D_parent_info; */
/* 	Alloc(child->other_info, parent_info); */
/*     } */
/* END */
/* NSD(709) */
/*     D_child_1; */
/*     D_child_1_info; */
/*     assert(child_1_info != NULL); */
/*     addSymbol((char *)child_1_info, child_1); */
/* #ifdef st_debug_print */
/*     printf("add ConstructorId: %s in symbol table. (SD(709))\n", (char *)child_1_info); */
/* #endif */

/*     void *str = child_1_info; */
/*     D_child_2_info; */
/*     assert(child_2_info != NULL); */
/*     assert(child_2_info->typeKind == FunctionType); */
/*     assert(child_2_info->node != NULL); */
/*     OverWrite(child_1->other_info, child_2_info); */
/*     Noalloc(child_1->other_info); */
/*     Alloc(((TypeInfo *)child_1->other_info)->nextInfo, str); */
/*     Noalloc(((TypeInfo *)child_1->other_info)->nextInfo); */
/* #ifdef type_debug_print */
/*     printTypeInfo(child_1->other_info); */
/*     printf(" (SD(709))\n"); */
/* #endif */

/*     D_child_2; */
/*     Dealloc(child_2->other_info); */
/* END */

/* /1* ConstructorId *1/ */
/* /1*     : UPPERID { $$ = new_parent_node("ConstructorId", GROUP_7 + 10, 1, $1); } *1/ */
/* /1*     ; *1/ */
/* NSD(710) */
/*     D_child_1; */
/*     assert(parent->other_info == NULL); */
/*     /1* 分配的资源不回收直到语法树销毁 *1/ */
/*     allocPointer(); */
/*     noallocPointer(); */
/*     /1* parent->other_info = (void *)(child_1->str + 4); *1/ */
/*     Alloc(parent->other_info, child_1->str + 4); */
/* END */

/* /1* TypeIdList *1/ */
/* /1*     : Specifier TypeIdList { $$ = new_parent_node("TypeIdList", GROUP_7 + 11, 2, $1, $2); } *1/ */
/* /1*     | ADTParam TypeIdList { $$ = new_parent_node("TypeIdList", GROUP_7 + 12, 2, $1, $2); } *1/ */
/* /1*     | SEMI { $$ = new_parent_node("TypeIdList", GROUP_7 + 13, 0); } *1/ */
/* /1*     ; *1/ */
/* NID(711) */
/*     if (childNum == 2) */
/*     { */
/*         D_parent_info; */
/* 	Alloc(child->other_info, parent_info); */
/*     } */
/* END */
/* NSD(711) */
/*     D_child_1_info; */
/*     D_child_2_info; */
/*     TypeInfo *info; */
/*     /1* if (((FunctionNode *)child_2_info->node)->paramTypeInfo == NULL) *1/ */
/*     /1* { *1/ */
/*     /1*     ((FunctionNode *)child_2_info->node)->paramTypeInfo = child_1_info; *1/ */
/* 	/1* info = child_2_info; *1/ */
/*     /1* } *1/ */
/*     /1* else *1/ */
/*     /1* { *1/ */
/*     /1*     info = malloc(sizeof(TypeInfo)); *1/ */
/*     /1*     info->typeKind = FunctionType; *1/ */
/*     /1*     FunctionNode *node = malloc(sizeof(FunctionNode)); *1/ */
/*     /1*     node->paramTypeInfo = child_1_info; *1/ */
/*     /1*     node->returnTypeInfo = child_2_info; *1/ */
/*     /1*     info->node = node; *1/ */
/*     /1*     info->nextInfo = NULL; *1/ */
/*     /1* } *1/ */
/*     OverWrite(parent->other_info, info); */

/*     D_child_2; */
/*     Dealloc(child_2->other_info); */
/* END */

/* NID(712) */
/*     if (childNum == 1 || childNum == 2) */
/*     { */
/*         D_parent_info; */
/* 	Alloc(child->other_info, parent_info); */
/*     } */
/* END */
/* NSD(712) */
/*     D_child_1_info; */
/*     TypeInfo *i = (TypeInfo *)malloc(sizeof(TypeInfo)); */
/*     i->typeKind = GenericType; */
/*     GenericTypeNode *n = (GenericTypeNode *)malloc(sizeof(GenericTypeNode)); */
/*     n->genericTypeName = (char *)child_1_info; */
/*     i->node = n; */
/*     i->nextInfo = NULL; */

/*     D_child_2_info; */
/*     TypeInfo *info; */
/*     /1* if (((FunctionNode *)child_2_info->node)->paramTypeInfo == NULL) *1/ */
/*     /1* { *1/ */
/*     /1*     ((FunctionNode *)child_2_info->node)->paramTypeInfo = i; *1/ */
/* 	/1* info = child_2_info; *1/ */
/* 	/1* info->nextInfo = NULL; *1/ */
/*     /1* } *1/ */
/*     /1* else *1/ */
/*     /1* { *1/ */
/*     /1*     info = malloc(sizeof(TypeInfo)); *1/ */
/*     /1*     info->typeKind = FunctionType; *1/ */
/*     /1*     FunctionNode *node = malloc(sizeof(FunctionNode)); *1/ */
/*     /1*     node->paramTypeInfo = i; *1/ */
/*     /1*     node->returnTypeInfo = child_2_info; *1/ */
/*     /1*     info->node = node; *1/ */
/*     /1*     info->nextInfo = NULL; *1/ */
/*     /1* } *1/ */
/*     OverWrite(parent->other_info, info); */

/*     D_child_1; */
/*     Dealloc(child_1->other_info); */

/*     D_child_2; */
/*     Dealloc(child_2->other_info); */
/* END */

/* NSD(713) */
/*     /1* /2* info begin *2/ *1/ */
/*     /1* TypeInfo *info = (TypeInfo *)malloc(sizeof(TypeInfo)); *1/ */
/*     /1* /2* node begin *2/ *1/ */
/*     /1* FunctionNode *node = (FunctionNode *)malloc(sizeof(FunctionNode)); *1/ */
/*     /1* node->paramTypeInfo = NULL; *1/ */
/*     /1* /2* returnTypeInfo begin *2/ *1/ */
/*     /1* TypeInfo *returnTypeInfo = (TypeInfo *)malloc(sizeof(TypeInfo)); *1/ */
/*     /1* returnTypeInfo->typeKind = AlgebraicDataType; *1/ */
/*     /1* returnTypeInfo->node = (TypeInfo *)malloc(sizeof(AlgebraicDataTypeNode)); *1/ */
/*     /1* D_parent_info; *1/ */
/*     /1* ((AlgebraicDataTypeNode *)returnTypeInfo->node)->typeIdName = (char *)parent_info; *1/ */
/*     /1* returnTypeInfo->nextInfo = NULL; *1/ */
/*     /1* /2* returnTypeInfo end *2/ *1/ */
/*     /1* node->returnTypeInfo = returnTypeInfo; *1/ */
/*     /1* /2* node end *2/ *1/ */
/*     /1* info->typeKind = FunctionType; *1/ */
/*     /1* info->node = node; *1/ */
/*     /1* info->nextInfo = NULL; *1/ */
/*     /1* /2* info end *2/ *1/ */
/*     /1* parent->other_info = info; *1/ */
/* END */

/* /1* TypeId *1/ */ 
/* /1*     : UPPERID { $$ = new_parent_node("TypeId", GROUP_7 + 14, 1, $1); } *1/ */
/* /1*     ; *1/ */
/* NSD(714) */
/*     D_child_1; */
/*     Alloc(parent->other_info, child_1->str + 4); */
/*     Noalloc(parent->other_info); */
/* END */

/* /1* pattern matching *1/ */
/* /1* PatternMatching *1/ */
/* /1*     : LET LP ConstructorId PatternMatchingParamList RP ASSIGNOP VarDec { *1/ */ 
/* /1*         $$ = new_parent_node("PatternMatching", GROUP_7 + 15, 3, $3, $4, $7); *1/ */ 
/* /1*     } *1/ */
/* /1*     ; *1/ */
/* /1* PatternMatchingParamList *1/ */
/* /1*     : LOWERID PatternMatchingParamList { *1/ */ 
/* /1*         $$ = new_parent_node("PatternMatchingParamList", GROUP_7 + 16, 2, $1, $2); *1/ */
/* /1*     } *1/ */
/* /1*     | PLACEHOLDER PatternMatchingParamList { *1/ */ 
/* /1*         $$ = new_parent_node("PatternMatchingParamList", GROUP_7 + 17, 2, $1, $2); *1/ */ 
/* /1*     } *1/ */
/* /1*     | /2* empty *2/ { $$ = new_parent_node("PatternMatchingParamList", GROUP_7 + 18, 0); } *1/ */
/* /1*     ; *1/ */

/* void initActionTable7() */
/* { */
/*     IS(702, 703, 704, 707, 708, 709, 711, 712); */
/*     SS(701, 702, 703, 704, 706, 707, 708, 709, 710, 711, 712, 713, 714); */
/* } */
