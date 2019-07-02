#include "holberton.h"

/**
 * _strlen - function
 *
 * @s: char s
 * Return: (length)
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
