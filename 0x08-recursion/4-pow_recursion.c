#include "holberton.h"
/**
 * _pow_recursion - power using recur
 * @x: to be raised to power of y
 * @y: raise x by
 * Return: -1 . 1 . x * _pr
 *
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, --y));
}
