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

void append(List *list, void *data)
{
    ListNode *node = (ListNode *)malloc(sizeof(ListNode));
    node->prev = list->end;
    node->next = NULL;
    node->data = data;
    list->end->next = node;
    list->end = node;
}

void cancat(List *l1, List *l2)
{
    l1->end->next = l2->begin;
    l2->begin->prev = l1->end;
    l1->end = l2->end;
}

void *getFirst(List *list)
{
    return list->begin->data;
}

void *getLast(List *list)
{
    return list->end->data;
}

void *rest(List *list, bool destory)
{
    if (list->begin == list->end)
    {
	if (destory)
	{
	    free(list->begin->data);
	}
	free(list->begin);
	list->begin = list->end = NULL;
    }
    else
    {
	ListNode *next = list->begin->next;
	next->prev = NULL;
	if (destory)
	{
	    free(list->begin->data);
	}
	free(list->begin);
	list->begin = next;
    }
}

void *findByKey(List *list, void *key)
{
    ListNode *it = list->begin;
    while (it != NULL)
    {
	if (list->find_f(it->data, key))
	{
	    return it->data;
	}
    }
    return NULL;
}

bool findByData(List *list, void *data)
{
    ListNode *it = list->begin;
    while (it != NULL)
    {
	if (list->cmp_f(it->data, data))
	{
	    return true;
	}
    }
    return false;
}

void traversal(List *list, void (*action)(void *data))
{
    ListNode *it = list->begin;
    while (it != NULL)
    {
	action(it->data);
    }
}

#endif
