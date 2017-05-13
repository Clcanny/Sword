Test
    : TypeParams SEMI Test {
	$$ = new_parent_node("Test", 0, 1, $1);
	print_child_node($$, 0);
    }
    | VarDef SEMI Test {
	$$ = new_parent_node("Test", 0, 1, $1);
    }
    | SEMI { $$ = NULL; }
    | /* empty */ { $$ = NULL; }
    ;
