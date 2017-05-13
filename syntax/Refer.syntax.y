/* REFER */
/* 指针 */
ReferType
    : REFER LP Specifier RP { $$ = new_parent_node("ReferType", GROUP_6 + 1, 1, $3); }
    ;
