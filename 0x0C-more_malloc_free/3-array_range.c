#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - f unction tht creates array of integer
 * @min: min value
 * @max: max value
 * Return: d or null
 *
 */
int *array_range(int min, int max)
{
	int *d;
	int x;
	int p;

	if (min > max)
	{
		return (NULL);
	}
	d = malloc(sizeof(int) * (max - min + 1));
	if (d == NULL)
	{
		return (NULL);
	}
	for (x = 0 ; x < (max - min + 1) ; x++)
	{
		d[x] = p;
		p++;
	}
	return (d);
}
