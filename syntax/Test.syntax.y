Test
    : TypeParams SEMI Test {
	$$ = new_parent_node("Test", 0, 2, $1, $2);
	print_child_node($$, 0);
    }
    | SEMI { $$ = new_parent_node("Test", 0, 0); }
    ;
