#ifndef List_H
#define List_H

#include <malloc.h>
#include "Bool.h"

typedef struct structlistnode
{
    struct structlistnode *prev;
    struct structlistnode *next;
    void *data;
} ListNode;

typedef struct structlist {
    ListNode *begin;
    ListNode *end;
    bool (*cmp_f)(void *d1, void *d2);
    bool (*find_f)(void *data, void *key);
    void (*clean_f)(void *data);
} List;

List *newList(
	bool (*f1)(void *d1, void *d2),
	bool (*f2)(void *data, void *key),
	void (*f3)(void *data)
	)
{
    List *list = (List *)malloc(sizeof(List));
    list->cmp_f = f1;
    list->find_f = f2;
    list->clean_f = f3;
    list->begin = list->end = NULL;
    return list;
}

#endif
