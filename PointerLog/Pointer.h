#ifndef Pointer_H
#define Pointer_H

#include <stdarg.h>
#include "SDTAction.h"

#define Alloc(p1, p2) assert((p1) == NULL); alloc(proNum, allocatorRole, (void **)&(p1), (void *)(p2))
#define OverWrite(p1, p2) overwrite(proNum, allocatorRole, (void **)&(p1), (void *)(p2))
#define Noalloc(p) noalloc(proNum, (void **)&(p), parent)
#define Dealloc(p) assert((p) != NULL); dealloc(proNum, (void **)&(p), parent)
#define AssignFieldOf(p, field, value) assignFieldOf(proNum, (void **)&(p)); (p)->field = value;

typedef enum {true, false} bool;
typedef enum {IRole, SRole} AllocatorRole;
#define UNALLOC 0
#define OVERWRITE 1
#define NOALLOC 2

void alloc(int proNum, AllocatorRole role, void **pointer, void *value);
void overwrite(int proNum, AllocatorRole role, void **pointer, void *value);
void noalloc(int proNum, void **pointer, AST_node *parent);
void dealloc(int proNum, void **pointer, AST_node *parent);
void assignFieldOf(int proNum, void **pointer);
void printPointerLog();

#endif
