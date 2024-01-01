#include "linked_list.h"
#include "stdlib.h"
#include "stdio.h"
#include "string.h"

LinkedList * LinkedList_create(char *key, char *value, LinkedList *next)
{
    LinkedList * node = NULL;
    node = malloc(sizeof(LinkedList));

    node->key = key;
    node->value = value;
    node->next = next;

    return node;
}

LinkedList * LinkedList_push(LinkedList *head, char *key, char *value)
{
    LinkedList * current = head;

    if (current->next == NULL) {
        current->next = LinkedList_create(key, value, NULL);
    } else {
        LinkedList_push(head->next, key, value);
    }

    return current;
}

char * LinkedList_get(LinkedList * head, char * key) {
    if (strcmp(head->key, key) == 0) {
        return head->value;
    } else {
        if (head->next == NULL) {
            return NULL;
        } else {
            LinkedList_get(head->next, key);
        }
    }
}
