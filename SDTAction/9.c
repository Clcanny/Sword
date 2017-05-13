#include "SDTAction.h"
#include "9.h"
#include <string.h>
#include "Assert.h"

/* Local Definitions */
/* VarDef */
/*     : Specifier DecList { $$ = new_parent_node("VarDef", GROUP_9 + 1, 2, $1, $2); } */
/*     | PatternMatching { $$ = new_parent_node("VarDef", GROUP_9 + 2, 1, $1); } */
/*     ; */
NID(901)
    if (childNum == 2)
    {
        D_child_1_info;
	AssertTypeInfo(child_1_info);
        assert(child_1_info->nextInfo == NULL);

	Alloc(child->other_info, child_1_info);
    }
}
NSD(901)
    D_child_1;
    Dealloc(child_1->other_info);
    /* child_1->other_info = NULL; */

    D_child_2;
    Dealloc(child_2->other_info);
}

/* DecList */
/*     : Dec { $$ = new_parent_node("DecList", GROUP_9 + 3, 1, $1); } */
/*     | Dec COMMA DecList { $$ = new_parent_node("DecList", GROUP_9 + 4, 2, $1, $3); } */
/*     ; */
NID(903)
    if (childNum == 1)
    {
        D_parent_info;
	AssertTypeInfo(parent_info);
        assert(parent_info->nextInfo == NULL);

	Alloc(child->other_info, parent_info);
    }
}
NSD(903)
    D_child_1;
    Dealloc(child_1->other_info);
}

NID(904)
    if (childNum == 1 | childNum == 2)
    {
        D_parent_info;
	AssertTypeInfo(parent_info);
        assert(parent_info->nextInfo == NULL);

	Alloc(child->other_info, parent_info);
    }
}
NSD(904)
    D_child_1;
    Dealloc(child_1->other_info);

    D_child_2;
    Dealloc(child_2->other_info);
}

/* Dec */
/*     : VarDec { $$ = new_parent_node("Dec", GROUP_9 + 5, 1, $1); } */
/*     | VarDec ASSIGNOP Exp { $$ = new_parent_node("Dec", GROUP_9 + 6, 2, $1, $3); } */
/*     ; */
NID(905)
    if (childNum == 1)
    {
        D_parent_info;
	AssertTypeInfo(parent_info);
        assert(parent_info->nextInfo == NULL);

	Alloc(child->other_info, parent_info);
	/* Noalloc(child->other_info); */
    }
}
SD(905)
{
    D_child_1;
    D_child_1_info;
    assert(child_1_info != NULL);
    addSymbol((char *)((TypeInfo *)child_1_info)->nextInfo, child_1);
#ifdef st_debug_print
    printf("add varDec: %s in symbol table. (SD(906))\n", (char *)((TypeInfo *)child_1_info)->nextInfo);
#endif
}

NID(906)
    if (childNum == 1)
    {
        D_parent_info;
	AssertTypeInfo(parent_info);
        assert(parent_info->nextInfo == NULL);

	Alloc(child->other_info, parent_info);
    }
}
SD(906)
{
    D_child_1;
    D_child_1_info;
    assert(child_1_info != NULL);
    addSymbol((char *)((TypeInfo *)child_1_info)->nextInfo, child_1);

    if (child_1_info->typeKind == BuildInType && (intptr_t)child_1_info->node == Let)
    {
        TypeInfo *info = (TypeInfo *)malloc(sizeof(TypeInfo));
        D_child_2_info;
        char *c = (char *)((TypeInfo *)child_1_info)->nextInfo;
        memcpy(info, child_2_info, sizeof(TypeInfo));
        info->nextInfo = c;
        child_1->other_info = info;
    }

#ifdef st_debug_print
    printf("add varDec: %s in symbol table. (SD(906))\n", (char *)((TypeInfo *)child_1_info)->nextInfo);
#endif
}

/* Declarators */
/* VarDec */
/*     : LOWERID { $$ = new_parent_node("VarDec", GROUP_9 + 7, 1, $1); } */
/*     ; */
NSD(907)
    D_parent_info;
    assert(parent_info != NULL);
    AssertTypeInfo(parent_info);
    assert(parent_info->nextInfo == NULL);

    D_child_1;

    TypeInfo *info = (TypeInfo *)malloc(sizeof(TypeInfo));
    memcpy(info, parent_info, sizeof(TypeInfo));
    info->nextInfo = child_1->str + 4;
    OverWrite(parent->other_info, info);
    Noalloc(parent->other_info);

#ifdef exp_type_debug_print
    printTypeInfo(parent_info);
    printf(" (VarDec: %s)", (char *)parent_info->nextInfo);
    printf(" (SD(907))\n");
#endif
}

/* Using Variables */
/* VarUse */
/*     : LOWERID { $$ = new_parent_node("VarUse", GROUP_9 + 8, 1, $1); } */
NSD(908)
    D_child_1;
    Alloc(parent->other_info, child_1->str + 4);
}

void initActionTable9()
{
    IS(901, 903, 904, 905, 906);
    SS(901, 903, 904, 905, 906, 907, 908);
}
