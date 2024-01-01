#ifndef LINKED_LIST_H
#define LINKED_LIST_H 1
typedef struct node
{
    char * key;
    char * value;
    struct node * next;
} LinkedList;

LinkedList * LinkedList_create(char *key, char *value, LinkedList *next);
LinkedList * LinkedList_push(LinkedList *head, char *key, char *value);
char * LinkedList_get(LinkedList *head, char *key);
#endif