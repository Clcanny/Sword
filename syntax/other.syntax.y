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

/* 支持变量定义和变量使用的混合 */
/* 不再要求变量定义与变量使用分隔 */
/* StmtList & DefList */
DSList
    : Stmt DSList { $$ = new_parent_node("DSList", GROUP_2 + 1, 2, $1, $2); }
    | /* empty */ { $$ = new_parent_node("DSList", GROUP_2 + 2, 0); }
    ;

/* Array */
ArrayType
    : Specifier LB Exp RB { $$ = new_parent_node("ArrayType", GROUP_5 + 1, 2, $1, $3); }
    ;

/* REFER */
/* 指针 */
ReferType
    : REFER LP Specifier RP { $$ = new_parent_node("ReferType", GROUP_6 + 1, 1, $3); }
    ;
