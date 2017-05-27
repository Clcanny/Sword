Test
    : TypeParams SEMI Test {
	$$ = new_parent_node("Test", 1, 1, $1);
	print_child_node($$, 1);
    }
    | VarDef SEMI Test {
	$$ = new_parent_node("Test", 1, 1, $1);
	print_child_node($$, 1);
    }
    | TypeClassDef SEMI Test {
	$$ = new_parent_node("Test", 1, 1, $1);
	print_child_node($$, 1);
    }
    | FuncType SEMI Test {
	$$ = new_parent_node("Test", 1, 1, $1);
	print_child_node($$, 1);
	initActionTable();
	traversalTreePerformAction($$);
    }
    | FuncDec SEMI Test {
	$$ = new_parent_node("Test", 1, 1, $1);
	print_child_node($$, 1);
	initActionTable();
	traversalTreePerformAction($$);
    }
    | ADTDef SEMI Test {
	$$ = new_parent_node("Test", 1, 1, $1);	
	print_child_node($$, 1);
    }
    | FuncType SEMI Test {
	$$ = new_parent_node("Test", 1, 1, $1);
	initActionTable();
	traversalTreePerformAction($$);
    }
    | SEMI { $$ = NULL; }
    | /* empty */ { $$ = NULL; }
    ;
