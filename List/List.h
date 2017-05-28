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
	);

void append(List *list, void *data);

void cancat(List *l1, List *l2);

void *getFirst(List *list);

void *getLast(List *list);

void *rest(List *list, bool destory);

void *findByKey(List *list, void *key);

bool findByData(List *list, void *data);

void traversal(List *list, void (*action)(void *data));

#endif
