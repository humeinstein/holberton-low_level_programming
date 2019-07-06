#include "holberton.h"
/**
 * _strcpy - char dest and src
 * @a: starts 0 and incrememnts through both strings
 *
 *
 * Return: dest which should be exact copy
 */
char *_strcpy(char *dest, char *src)
{
	int a = 0;

	while (src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	return (dest);
}
