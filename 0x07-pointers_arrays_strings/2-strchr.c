#include "holberton.h"
/**
 *
 *
 *
 *
 *
 *
 *
 */
char *_strchr(char *s, char c)
{

	for (; *s != '\0' ; s++)
	{
		if (*s == c)
		{
			return (s);
		}
		if (*s != c && *s >= c)
		{
			return ('\0');
		}
	}
	return (s);
}
