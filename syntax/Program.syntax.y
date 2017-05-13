/* High-level Definitions */
Program
    : DSList {
        $$ = new_parent_node("Program", GROUP_1 + 1, 1, $1);
    #ifdef syntax_debug_print
        print_child_node($$, 0);
    #endif
        initActionTable();
        initSymbolTableStack();
        traversalTreePerformAction($$);
    #ifdef pointer_debug
    	printPointerLog();
    #endif
        cleanActionTable();
    #ifdef st_debug_print
        printGlobalSymbolTable();
    #endif
        /* clean_up_syntax_tree($$); */
        /* cleanUpSymbolTable(); */
    }
    ;
