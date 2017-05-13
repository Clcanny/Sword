#ifndef SYMBOL_TABLE_H
#define SYMBOL_TABLE_H

#include "jsw_rbtree.h"
#include "syntax_tree.h"
#include "DebugMacro.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct jsw_rbtree Tree;

typedef struct ST
{
    Tree *symbols;
    struct ST *outerSymbolTable;
    struct ST *firstInnerSymbolTable;
    struct ST *nextSymbolTable;
} SymbolTable;

typedef struct
{
    char *name;
    AST_node *node;
} Symbol;

typedef struct STS
{
    SymbolTable *symbolTable;
    struct STS *last;
    struct STS *next;
} SymbolTableStack;

void initSymbolTableStack();
void cleanSymbolTableStack();

int addSymbol(char *name, AST_node *node);
int delSymbol(char *name);
AST_node *getASTNode(char *name);
void createInnerSymbolTable();
void gotoOuterSymbolTable();
void printGlobalSymbolTable();
void cleanSymbolTable();

#endif
