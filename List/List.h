#ifndef List_H
#define List_H

typedef struct ln
{
    struct ln *prev;
    struct ln *next;
    void * value;
} ListNode;

void insertListNode(void *value)
{
}

void delListNode(bool (*fn)(void *), v)

#endif
