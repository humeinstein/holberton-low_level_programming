#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: int nmemb is memory for an array
 * @size: size needed
 * Return: NULL or d the pointer to the space
 *
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *d;
	unsigned int x;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	d = malloc(nmemb * size);
	if (d == NULL)
	{
		return (NULL);
	}
	for (x = 0 ; x < nmemb * size ; x++)
	{
		d[x] = 0;
	}
	if (d == NULL)
	{
		return (NULL);
	}
	return (d);
}
