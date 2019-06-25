#include "holberton.h"
/**
 * _isalpha - entry
 * (int c) - parameter to see if lower
 * @c - number variable
 * function void print_alphabet void
 * Return: (0) - always
 **/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
