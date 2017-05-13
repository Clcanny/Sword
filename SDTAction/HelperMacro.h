#ifndef HelperMacro_H
#define HelperMacro_H

#define D_type_info TypeInfo *type_info = (TypeInfo *)malloc(sizeof(TypeInfo));
#define D_parent_info TypeInfo *parent_info = (TypeInfo *)parent->other_info;
#define D_child_info \
    TypeInfo *child_info = (TypeInfo *) \
    child->other_info;
#define D_child_1_info \
    TypeInfo *child_1_info = (TypeInfo *) \
    parent->first_child->other_info;
#define D_child_2_info \
    TypeInfo *child_2_info = (TypeInfo *) \
    parent->first_child->next_brother->other_info;
#define D_child_3_info \
    TypeInfo *child_3_info = (TypeInfo *) \
    parent->first_child->next_brother->next_brother->other_info;

#define D_child_1 \
    AST_node *child_1 = parent->first_child;
#define D_child_2 \
    AST_node *child_2 = parent->first_child->next_brother;
#define D_child_3 \
    AST_node *child_3 = parent->first_child->next_brother->next_brother;

#endif
