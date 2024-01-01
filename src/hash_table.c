#include "stdlib.h"
#include "stdio.h"
#include "string.h"
#include "hash_table.h"
#include "linked_list.h"

int _HashTable_getHash(char * key, int table_size) {
    int result = 0;

    for (int i = 0; i < strlen(key); i++)
    {
        result += key[i];
    }

    return result % table_size;
}

HashTable * HashTable_init() {
    HashTable  * table = NULL;
    table = malloc(sizeof(HashTable));

    table->size = 50;
    table->array = malloc(table->size * sizeof(LinkedList));
    
    return table;
}

void HashTable_insert(HashTable * table, char * key, char * value) 
{
    int index = _HashTable_getHash(key, table->size);

    if (table->array[index] == NULL) {
        table->array[index] = LinkedList_create(key, value, NULL);
    } else {
        LinkedList_push(table->array[index], key, value);
    }
}

char * HashTable_get(HashTable * table, char * key) 
{
    int index = _HashTable_getHash(key, table->size);

    if (table->array[index] == NULL) {
        return NULL;
    } else {
        return LinkedList_get(table->array[index], key);
    }
}