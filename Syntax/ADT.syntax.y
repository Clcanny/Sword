/* ADTDef */
ADTDef
    : ADTHeader ASSIGNOP ConstructorDec ConstructorDecList { $$ = new_parent_node("ADTDef", GROUP_7 + 2, 3, $1, $3, $4); }
    ;
ADTHeader
    : DATA TypeParams TypeId { $$ = new_parent_node("ADTHeader", GROUP_7 + 3, 2, $2, $3); }
    ;
TypeId
    : UPPERID { $$ = new_parent_node("TypeId", GROUP_7 + 14, 1, $1); }
    ;
ConstructorDecList
    : SINGLEOR ConstructorDec ConstructorDecList { $$ = new_parent_node("ConstructorDecList", GROUP_7 + 7, 2, $2, $3); }
    | /* empty */ { $$ = NULL; }
    ;
ConstructorDec
    : ConstructorId ConstructorUseTypeList { $$ = new_parent_node("ConstructorDec", GROUP_7 + 9, 2, $1, $2); }
    ;
ConstructorId
    : UPPERID { $$ = new_parent_node("ConstructorId", GROUP_7 + 10, 1, $1); }
    ;
ConstructorUseTypeList
    : Specifier ConstructorUseTypeList { $$ = new_parent_node("ConstructorUseTypeList", GROUP_7 + 11, 2, $1, $2); }
    | TypeParam ConstructorUseTypeList { $$ = new_parent_node("ConstructorUseTypeList", GROUP_7 + 12, 2, $1, $2); }
    | /* empty */ { $$ = NULL; }
    ;

/* ADTType */
ADTType
    : TypeId LB ADTTypeUseList RB { $$ = new_parent_node("ADTType", GROUP_7 + 15, 2, $1, $3); }
    ;
ADTTypeUseList
    : Specifier ADTTypeUseList { $$ = new_parent_node("ADTTypeUseList", GROUP_7 + 16, 2, $1, $2); }
    | PLACEHOLDER ADTTypeUseList { $$ = new_parent_node("ADTTypeUseList", GROUP_7 + 17, 1, $2); }
    | /* empty */ { $$ = new_parent_node("ADTTypeUseList", GROUP_7 + 17, 0); }
    ;

/* pattern matching */
PatternMatching
    : LET LP ConstructorId PatternMatchingParamList RP ASSIGNOP VarDec {
        $$ = new_parent_node("PatternMatching", GROUP_7 + 15, 3, $3, $4, $7);
    }
    ;
PatternMatchingParamList
    : LOWERID PatternMatchingParamList {
        $$ = new_parent_node("PatternMatchingParamList", GROUP_7 + 16, 2, $1, $2);
    }
    | PLACEHOLDER PatternMatchingParamList {
        $$ = new_parent_node("PatternMatchingParamList", GROUP_7 + 17, 2, $1, $2);
    }
    | /* empty */ { $$ = new_parent_node("PatternMatchingParamList", GROUP_7 + 18, 0); }
    ;
