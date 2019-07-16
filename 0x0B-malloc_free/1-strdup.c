#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - functio
 * @str: string
 * Return: null or d if working
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
	for (count = 0 ; count < str[count] ; count++)
	{
		d[count] = str[count];
	}
	return (d);
}
