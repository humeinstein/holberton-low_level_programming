#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *
 *
 *
 *
 *
 */
char *_strdup(char *str)
{
	char *d;
	int count;

	if (str == NULL)
	{
		return (NULL);
	}
	for (count = 0 ; count < str[count] ; count++)
	{
	}
	d = malloc(sizeof(*d) * count + 1);
	if (d == NULL)
	{
		return (NULL);
	}
	for (count = 0 ; count < str[count] ; count++)
	{
		d[count] = str[count];
	}
	return (d);
}
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dg;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}
	dg = malloc(sizeof(dog_t));
	if (dg == NULL)
	{
		return (NULL);
	}
	dg->name = _strdup(name);
	dg->owner = _strdup(owner);
	dg->age = age;

	return (dg);
}
