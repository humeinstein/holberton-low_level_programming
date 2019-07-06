#include "holberton.h"
/**
 * _strncpy - dest src n
 * @dest: to be returned
 * @src: src to use
 * @n: int value of what char
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n ; i++)
	{
		dest[i] = '\0';
	}
		return (dest);
}
