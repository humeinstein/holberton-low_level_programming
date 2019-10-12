#include "hash_tables.h"
/**
* hash_table_create - functiont to create a hash table
* @size: size of array
* Return: pointer to new hash | null
*
*/
hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *ht;

    if (size == 0)
    {
        return (NULL);
    }

    ht = malloc(sizeof(hash_table_t));
    if (ht == NULL)
    {
        return (NULL);
    }

    ht->size = size;
    ht->array = malloc(sizeof(hash_node_t *) *size);
    if (ht->array == NULL)
    {
        return (NULL);
    }
    for(; size; size--)
    {
        ht->array[size - 1] = NULL;
    }
    return(ht);
}   