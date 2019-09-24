#include "holberton.h"
/**
 * _strcat - concatenate 2 strings together
 * @dest: string that needs src appended
 * @src: string to append to dest
 * Return: dest the full concat string
 */
char *_strcat(char *dest, char *src)
{
	int a = 0;
	int t = 0;

	while (dest[a] != '\0')
	{
		a++;
	}
	while (src[t] > '\0')
	{
		dest[a + t] = src[t];
		t++;
	}
	return (dest);
}
