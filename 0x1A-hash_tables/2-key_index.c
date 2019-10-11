#include "hash_tables.h"
/**
* key_index - function that shows index of a key
* @key: pointer to value 
* @size: length of array for ht
* Return: index of array
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
    if (key == NULL)
        exit(1);
    if (size == 0)
        exit(1);
        
    return(hash_djb2(key) % size);`
}