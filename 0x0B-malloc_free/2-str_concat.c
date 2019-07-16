#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - functio
 * @str: string
 * Return: null or d if working
 *
 */
char *str_concat(char *s1, char *s2)
{
	char *d;
	int count, count2, x, p;

	if (s1 == NULL)
	{
		s1 = '\0';
	}
	if (s2 == NULL)
        {
                s2 = '\0';
        }
	for (count = 0 ; s1[count] != '\0' ; count++)
	{
	}
	for (count2 = 0 ; s2[count2] != '\0' ; count2++)
	{
	}
	d = malloc(sizeof(char) *  s1[count] + s2[count2] + 1);
	if (d)
        {
		for (x = 0 ; x <= count ; x++)
		{
			d[x] = s1[x];
		}
		for (p = 0 ; p <= count2 ; p++)
		{
			d[count + p] = s2[p];
		}
		return (d);
	}
	return (NULL);
}
