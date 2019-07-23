#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - set him free
 * @d: the dog to be freed
 * Return: void
 *
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
