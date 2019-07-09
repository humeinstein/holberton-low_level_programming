#include "holberton.h"
/**
 * _memset - char *s char b int n
 * @s: character array
 * @b: what char were add or replace
 * @n: unsign int for iterations
 *
 * Return: s always
 *
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0 ; x < n ; x++)
	{
		*(s + x) = b;
	}
	return (s);
}
