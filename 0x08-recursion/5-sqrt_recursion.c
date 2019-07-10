#include "holberton.h"
/**
 * _teeth - add variable
 * @n: orig
 * @x: incre
 * Return: -1 , x , n, 1
 */
int _teeth(int n, int x)
{
	if (x * x < n)
	{
		return (_teeth(n, x + 1));
	}
	else if (x * x == n)
	{
		return (x);
	}
	else
	{
		return (-1);
	}
}
/**
 * _sqrt_recursion - get sqrt
 * @n: int
 * Return: _teeth n,1 , -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_teeth(n, 1));
}
