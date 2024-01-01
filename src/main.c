#include "stdio.h"
#include "hash_table.h"

int main() 
{

    HashTable * table = HashTable_init();

    HashTable_insert(table, "test", "asads asd asdas");
    HashTable_insert(table, "b", "2");
    
    printf("aab: %s\n", HashTable_get(table, "test"));
    printf("aba: %s\n", HashTable_get(table, "b"));
    printf("aba: %s\n", HashTable_get(table, "c"));

    return 0;
}
