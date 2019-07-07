#include "holberton.h"
/**
 * leet - function
 * @a: string to convert
 *
 * Return: a always
 *
 *
 */
char *leet(char *a)
{
	int x;
	int y;

	char b[] = "aAeEoOtTlL";
	char c[] = "4433007711";

	for (x = 0 ; a[x] != '\0' ; x++)
	{
		for (y = 0 ; b[y] != '\0' ; y++)
		{
			if (a[x] == b[y])
			{
				a[x] = c[y];
			}
		}
	}
	return (a);
}
