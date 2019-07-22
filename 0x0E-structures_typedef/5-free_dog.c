#include "dog.h"
#include <stdio.h>
/**
 * free_dog - set him free
 * @d: the dog to be freed
 * Return: void
 *
 */
void free_dog(dog_t *d)
{
	free(d);
}
