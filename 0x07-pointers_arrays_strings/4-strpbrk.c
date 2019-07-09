#include "holberton.h"
/**
 *
 *
 *
 *
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
