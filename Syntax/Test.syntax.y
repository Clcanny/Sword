Test
    : TypeParams SEMI Test {
	$$ = new_parent_node("Test", 0, 1, $1);
	print_child_node($$, 0);
    }
    | VarDef SEMI Test {
	$$ = new_parent_node("Test", 0, 1, $1);
	print_child_node($$, 0);
    }
    | TypeClassDef SEMI Test {
	$$ = new_parent_node("Test", 0, 1, $1);
	print_child_node($$, 0);
    }
    | FuncType SEMI Test {
	$$ = new_parent_node("Test", 1, 1, $1);
	print_child_node($$, 0);
	initActionTable();
	traversalTreePerformAction($$);
    }
    | FuncDec SEMI Test {
	$$ = new_parent_node("Test", 0, 1, $1);
	print_child_node($$, 0);
	initActionTable();
	traversalTreePerformAction($$);
    }
    | ADTDef SEMI Test {
	$$ = new_parent_node("Test", 0, 1, $1);	
	print_child_node($$, 0);
    }
    | FuncType SEMI Test {
	$$ = new_parent_node("Test", 0, 1, $1);
	initActionTable();
	traversalTreePerformAction($$);
    }
    | SEMI { $$ = NULL; }
    | /* empty */ { $$ = NULL; }
    ;
