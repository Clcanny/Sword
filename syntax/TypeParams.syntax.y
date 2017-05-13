TypeParams
    : LB RB
    | LB TypeParam COLON TypeClassList TypeParamList RB
    | LB TypeParam TypeParamList RB
    ;

TypeParamList
    : COMMA TypeParam COLON TypeClassList TypeParamList
    | COMMA TypeParam TypeParamList
    | /* empty */
    ;

TypeParam
    : UPPERID
    ;

TypeClassList
    : TypeClassId TypeClassList
    | /* empty */
    ;
