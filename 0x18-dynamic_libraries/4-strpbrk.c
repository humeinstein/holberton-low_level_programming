#include "holberton.h"
/**
 * _strpbrk - char s char accept
 * @s: string
 * @accept: string containing acceptable bytes
 * Return: s or null if not found
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int p;

	for (; *s != '\0' ; s++)
	{
		for (p = 0 ; *(accept + p) != '\0' ; p++)
		{
			if (*s == *(accept + p))
			{
				return (s);
			}
		}
	}
	return ('\0');
}
