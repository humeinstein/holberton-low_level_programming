#include "holberton.h"
/**
 * _isalpha - entry
 * (int c) - parameter to see if lowercase or uppercase
 * @c: number variable
 * Return: 1 if c is = to letter, uppercase or lowercase
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
