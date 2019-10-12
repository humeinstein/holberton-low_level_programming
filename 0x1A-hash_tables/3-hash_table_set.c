#include "hash_tables.h"
/**
* hash_table_set - function that adds an element ot the hash table
* @ht: pointer to hash table
* @key: poiunter to key
* @value: pointer to value
* Return: 1 or 0 if fail
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    hash_node_t *htt;
    unsigned long int index, size;

    if (ht == NULL || key == NULL || value == NULL)
    {
        return (0);
    }

    size = ht->size;
    index = key_index((const unsigned char *)key, size);
    if (ht->array[index] != NULL)
    {
        ht->array[index]->value = strdup(value);
        return (1);
    }
    htt = malloc(sizeof(hash_node_t));
    if (htt == NULL)
        return (0);
    htt->key = strdup(key);
    htt->value = strdup(value);
    htt->next = ht->array[index];
    ht->array[index] = htt;
    return (1);
}