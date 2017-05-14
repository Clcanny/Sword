/* ADT */
ADTDef
    : ADTHeader ASSIGNOP ConstructorDec ConstructorDecList { $$ = new_parent_node("ADTDef", GROUP_7 + 2, 3, $1, $3, $4); }
    ;
ADTHeader
    : DATA TypeParams TypeId { $$ = new_parent_node("ADTHeader", GROUP_7 + 3, 2, $2, $3); }
    ;
ADTParamList
    : ADTParam ADTParamList { $$ = new_parent_node("ADTParamList", GROUP_7 + 4, 2, $1, $2); }
    /* | /1* empty *1/ { $$ = new_parent_node("ADTParamList", GROUP_7 + 5, 0); } */
    | /* empty */ { $$ = NULL; }
    ;
ADTParam
    : UPPERID { $$ = new_parent_node("ADTParam", GROUP_7 + 6, 1, $1); }
    ;
ConstructorDecList
    : SINGLEOR ConstructorDec ConstructorDecList { $$ = new_parent_node("ConstructorDecList", GROUP_7 + 7, 2, $2, $3); }
    /* | /1* empty *1/ { $$ = new_parent_node("ConstructorDecList", GROUP_7 + 8, 0); } */
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
    | ADTParam ConstructorUseTypeList { $$ = new_parent_node("ConstructorUseTypeList", GROUP_7 + 12, 2, $1, $2); }
    /* | /1* empty *1/ { $$ = new_parent_node("ConstructorUseTypeList", GROUP_7 + 13, 0); } */
    | /* empty */ { $$ = NULL; }
    ;
TypeId
    : UPPERID { $$ = new_parent_node("TypeId", GROUP_7 + 14, 1, $1); }
    ;

/* ADT类型的使用 */
ADTType
    : TypeId LB SpecifierList RB { $$ = new_parent_node("ADTType", GROUP_7 + 15, 2, $1, $3); }
    ;
SpecifierList
    : Specifier SpecifierList { $$ = new_parent_node("SpecifierList", GROUP_7 + 16, 2, $1, $2); }
    | /* empty */ { $$ = new_parent_node("SpecifierList", GROUP_7 + 17, 0); }
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
