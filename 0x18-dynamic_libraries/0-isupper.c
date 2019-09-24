#include "holberton.h"

/**
 * _isupper - entry to program
 * @c: variable c is int
 * Return: 1 - if uppercase letter. else 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
