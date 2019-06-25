#include "holberton.h"

/**
 * _islower - entry
 * (int c ) - parameter to see if lower
 * @c - number variable
 * @counter - the counter
 * function void print_alphabet void
 * Return: (0) - always
 **/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
