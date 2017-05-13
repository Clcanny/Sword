/* ADT */
ADTDef
    : ADTHeader ASSIGNOP ConstructorDec ConstructorDecList { $$ = new_parent_node("ADTDef", GROUP_7 + 2, 3, $1, $3, $4); }
    ;

/* ADTHeader begin */
ADTHeader
    : DATA TypeId LB ADTParamList RB { $$ = new_parent_node("ADTHeader", GROUP_7 + 3, 2, $2, $3); }
    ;
TypeId
    : UPPERID { $$ = new_parent_node("TypeId", GROUP_7 + 14, 1, $1); }
    ;
ADTParamList
    : ADTParam TypeClassList COMMA ADTParamList { $$ = new_parent_node("ADTParamList", GROUP_7 + 4, 2, $1, $2); }
    | /* empty */ { $$ = new_parent_node("ADTParamList", GROUP_7 + 5, 0); }
    ;
ADTParam
    : UPPERID { $$ = new_parent_node("ADTParam", GROUP_7 + 6, 1, $1); }
    ;
TypeParamList
    : TypeParam COLON TypeClassList
TypeClassList
    : TypeClass TypeClassList { $$ = new_parent_node("TypeClassList", GROUP_7 + 7, 2, $1, $2); }
    | /* empty */ { $$ = new_parent_node("TypeClassList", GROUP_7 + 7, 0); }
    ;
/* ADTHeader end */

/* ConstructorDecList begin */
ConstructorDecList
    : SINGLEOR ConstructorDec ConstructorDecList { $$ = new_parent_node("ConstructorDecList", GROUP_7 + 7, 2, $2, $3); } 
    | /* empty */ { $$ = new_parent_node("ConstructorDecList", GROUP_7 + 8, 0); }
    ;
ConstructorDec
    : ConstructorId ConstructorUseTypeList { $$ = new_parent_node("ConstructorDec", GROUP_7 + 9, 2, $1, $2); }
    ;
ConstructorId
    : UPPERID { $$ = new_parent_node("ConstructorId", GROUP_7 + 10, 1, $1); }
    ;
ConstructorUseList
    : Specifier ConstructorUseList { $$ = new_parent_node("ConstructorUseList", GROUP_7 + 11, 2, $1, $2); }
    | ADTParam ConstructorUseList { $$ = new_parent_node("ConstructorUseList", GROUP_7 + 12, 2, $1, $2); }
    | /* empty */ { $$ = new_parent_node("ConstructorUseList", GROUP_7 + 13, 0); }
    ;
/* ConstructorDecList end */

/* ADTType begin */
ADTType
    : TypeId LB SpecifierList RB { $$ = new_parent_node("ADTType", GROUP_7 + 15, 2, $1, $3); }
    ;
ADTTypeUseList
    : Specifier ADTTypeUseList { $$ = new_parent_node("SpecifierList", GROUP_7 + 16, 2, $1, $2); }
    | PLACEHOLDER ADTTypeUseList { $$ = new_parent_node("ADTTypeUseList", GROUP_7 + 17, 1, $2); }
    | /* empty */ { $$ = new_parent_node("SpecifierList", GROUP_7 + 17, 0); }
    ;
/* ADTType end */

/* PatternMatching begin */
PatternMatching
    : LET LP ConstructorId PatternMatchingParamList RP ASSIGNOP Exp { 
        $$ = new_parent_node("PatternMatching", GROUP_7 + 15, 3, $3, $4, $7); 
    }
    ;
PatternMatchingParamList
    : LOWERID PatternMatchingParamList { 
        $$ = new_parent_node("PatternMatchingParamList", GROUP_7 + 16, 2, $1, $2);
    }
    | PLACEHOLDER PatternMatchingParamList { $$ = new_parent_node("PatternMatchingParamList", GROUP_7 + 16, 1, $2); }
    ;
/* PatternMatching end */
