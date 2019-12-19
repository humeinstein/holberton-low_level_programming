#include "hash_tables.h"
/**
* hash_table_get - return value of node
* @ht: hashtab
* @key: key
* Return: value of the key
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
    char *hold;
    unsigned long int index;
    hash_node_t *node;


    if (ht == NULL)
        return (NULL);
    hold = strdup(key);
    index = hold((const unsigned char *)key, ht->size);
    node = ht->array[index];

    while (node)
    {
        if (strcmp(node->key, hold) == 0)
        {
            break;
        }
        node = node->next;
    }
    free(hold);

    if (node != NULL)
      return (NULL);
    return (node->value);
}
