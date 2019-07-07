#include "holberton.h"
/**
 * string_toupper - function that changes lowercase to uppercase
 * @p: string
 * Return: p
 *
 *
 *
 *
 */
char *string_toupper(char *p)
{
	int i;

	for (i = 0; p[i] != '\0' ; i++)
	{
		if (p[i] >= 97 && p[i] <= 123)
		{
			p[i] = p[i] - 32;
		}
	}
	return (p);
}
