#ifndef DefineMacro_H
#define DefineMacro_H

#include "for_each.h"

#define I(proNum) registerIAction(proNum, pro##proNum##IAction);
#define IS(...) FOR_EACH(I, __VA_ARGS__)

#define S(proNum) registerSAction(proNum, pro##proNum##SAction);
#define SS(...) FOR_EACH(S, __VA_ARGS__)

#define ID(proNum) \
    void pro##proNum##IAction(AST_node *parent, AST_node *child, int childNum)
#define AssociateHelperI(p1, p2) SDTIAction pro##p2##IAction = pro##p1##IAction;
#define IDS(proNum, ...) \
    void pro##proNum##IAction(AST_node *parent, AST_node *child, int childNum); \
    FOR_EACH_2(AssociateHelperI, proNum, __VA_ARGS__) \
    void pro##proNum##IAction(AST_node *parent, AST_node *child, int childNum)

#define SD(proNum) \
    void pro##proNum##SAction(AST_node *parent)
#define AssociateHelperS(p1, p2) SDTSAction pro##p2##SAction = pro##p1##SAction;
#define SDS(proNum, ...) \
    void pro##proNum##SAction(AST_node *parent); \
    FOR_EACH_2(AssociateHelperS, proNum, __VA_ARGS__) \
    void pro##proNum##SAction(AST_node *parent)

#define NID(n) \
    ID(n) { \
	int proNum = n; \
	AllocatorRole allocatorRole = IRole;

#define NSD(n) \
    SD(n) { \
	int proNum = n; \
	AllocatorRole allocatorRole = SRole;

#define END }

#endif
