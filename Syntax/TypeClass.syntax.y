TypeClassDef
    : CLASS TypeParams TypeClassId LC VarDefs RC { 
	$$ = new_parent_node("TypeClassDef", GROUP_12 + 1, 3, $2, $3, $5); 
    }
    ;

VarDefs
    : VarDef VarDefs { $$ = new_parent_node("VarDefs", GROUP_12 + 2, 2, $1, $2); }
    | SEMI VarDefs { $$ = $2; }
    | /* empty */ { $$ = NULL; }
    ;

TypeClassId
    : UPPERID { $$ = new_parent_node("TypeClassId", GROUP_12 + 3, 1, $1); }
    ;

InstanceDef
    : INSTANCE TypeParams TypeClassId TypeArgs LC VarDefs RC {
	$$ = new_parent_node("InstanceDef", GROUP_12 + 4, 4, $2, $3, $4, $6);
    }
    ;
