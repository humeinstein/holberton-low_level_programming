#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates an array
 * @size: how many
 * @c: char
 * Return: NULL or d
 *
 *
 */
char *create_array(unsigned int size, char c)
{
	char *d;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	d = malloc(sizeof(*d) * size);
	for (i = 0 ; i < size ; i++)
	{
		d[i] = c;
	}
	if (d == NULL)
	{
		return (NULL);
	}
	return (d);
}
