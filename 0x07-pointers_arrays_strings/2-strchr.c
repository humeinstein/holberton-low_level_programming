#include "holberton.h"
/**
 * _strchr - char s char c
 * @s: string
 * @c: char
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
