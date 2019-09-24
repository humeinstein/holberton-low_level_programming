#include "holberton.h"
/**
 * _memcpy - function that copies src to dest based on n
 * @dest: destination
 * @src: source
 * @n: int n
 *
 * Return: dest always
 *
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0 ; x < n ; x++)
	{
		*(dest + x) = *(src + x);
	}
	return (dest);
}
