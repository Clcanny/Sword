TypeParams
    : LB RB { $$ = new_parent_node("TypeParams", GROUP_11 + 1, 0); }
    | LB TypeParam COLON TypeClassList TypeParamList RB { 
	$$ = new_parent_node("TypeParams", GROUP_11 + 2, 3, $2, $4, $5); 
    }
    | LB TypeParam TypeParamList RB { $$ = new_parent_node("TypeParams", GROUP_11 + 3, 2, $2, $3); }
    ;

TypeParamList
    : COMMA TypeParam COLON TypeClassList TypeParamList { $$ = new_parent_node("TypeParamList", GROUP_11 + 4, 3, $2, $4, $5); }
    | COMMA TypeParam TypeParamList { 
	$$ = new_parent_node("TypeParamList", GROUP_11 + 5, 2, $2, $3);
    }
    | /* empty */ { $$ = NULL; }
    ;

TypeParam
    : UPPERID { $$ = new_parent_node("TypeParam", GROUP_11 + 6, 1, $1); }
    ;

TypeClassList
    : TypeClassId TypeClassList { $$ = new_parent_node("TypeClassList", GROUP_11 + 7, 2, $1, $2); }
    | /* empty */ { $$ = NULL; }
    ;
