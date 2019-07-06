#include "holberton.h"
/**
 * _strcpy - char dest and src
 * @dest: be identical to source
 * @src: be identical to dest
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
