#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup - duplicate string
 * @str: string to duplicate
 * Return: d(duplicated string)
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
		free(d);
		return (NULL);
	}
	for (count = 0 ; count < str[count] ; count++)
	{
		d[count] = str[count];
	}
	d[count] = 0;
	return (d);
}
/**
 * new_dog - name age own
 * @name: name
 * @age: age
 * @owner: owner
 * Return: dg
 */
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
		free(dg);
		return (NULL);
	}
	dg->name = _strdup(name);
	if (dg->name == NULL)
	{
		free(dg);
		return (NULL);
	}
	dg->owner = _strdup(owner);
	if (dg->owner == NULL)
	{
		free(dg);
		return (NULL);
	}
	dg->age = age;
	return (dg);
}
