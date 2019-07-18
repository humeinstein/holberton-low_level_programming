#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string33_nconcat - functio
 * @s1: string
 * @s2: string2
 * Return: null or d if working
 *
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *d;
	unsigned int count, count2, x, p;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (count = 0 ; s1[count] != '\0' ; count++)
	{
	}
	for (count2 = 0 ; s2[count2] != '\0' ; count2++)
	{
	}
	if (n > count2)
	{
		n = count2;
	}
	d = malloc(sizeof(char) *  count + n + 1);
	if (d)
	{
		for (x = 0 ; x <= count ; x++)
		{
			d[x] = s1[x];
		}
		for (p = 0 ; p <= n ; p++)
		{
			d[count + p] = s2[p];
		}
		return (d);
	}
	return (NULL);
}
