#include "SDTAction.h"
#include "ForEach.h"
#include "11.h"

/* TypeParam */
/*     : UPPERID { $$ = new_parent_node("TypeParam", GROUP_11 + 6, 1, $1); } */
/*     ; */
NSD(1106)
    D_child_1;
    Alloc(parent->other_info, child_1->str);
    Noalloc(parent->other_info);
}

/* TypeClassList */
/*     : TypeClassId TypeClassList { $$ = new_parent_node("TypeClassList", GROUP_11 + 7, 2, $1, $2); } */
/*     | /1* empty *1/ { $$ = NULL; } */
/*     ; */


/* NSD(1102) */
/* D_child_1; */
/* D_child_1_info; */
/* AssertNoNull(child_1_info); */
/* addSymbol(child_1_info, child_1); */
/* END */

/* NSD(1103) */
/* D_child_1; */
/* D_child_1_info; */
/* AssertNoNull(child_1_info); */
/* addSymbol(child_1_info, child_1); */
/* END */

/* NSD(1106) */
/* D_child_1; */
/* D_type_info; */
/* type_info->typeKind = TypeParam; */
/* type_info->node = child_1->str; */
/* type_info->nextInfo = NULL; */
/* Alloc(parent->other_info, type_info); */
/* END */

void initActionTable11()
{
    SS(1106);
}
