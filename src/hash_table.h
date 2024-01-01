#ifndef HASH_TABLE_H
#define HASH_TABLE_H 1
#include "linked_list.h"

typedef struct
{
    int size;
    LinkedList ** array;
} HashTable;

HashTable * HashTable_init();

void HashTable_insert(HashTable * table, char * key, char * value);
char * HashTable_get(HashTable * table, char * key);
int _HashTable_getHash(char * key, int table_size);
#endif