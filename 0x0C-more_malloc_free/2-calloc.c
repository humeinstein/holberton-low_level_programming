#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *
 *
 *
 *
 *
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *d;
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
		d[x] = nmemb;
	}
	if (d == NULL)
	{
		return (NULL);
	}
	return (d);
}
