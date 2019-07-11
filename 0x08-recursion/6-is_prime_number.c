#include "holberton.h"
/**
 * _teeth -
 * @n: given n
 * @x: use
 * Return: 0 or 1
 */
int _teeth(int n, int x)
{
	if (n % x != 0 && x < 10)
	{
		return (_teeth(n, x + 1));
	}
	else if (n % x == 0 || n == 1)
	{
		return (0);
	}
	return (1);
}
/**
 * is_prime_number - find if prime number or not
 * @n: n
 * Return: _teeth(n, 2)
 */
int is_prime_number(int n)
{
	if (n <= 0)
	{
		return (0);
	}
	return (_teeth(n, 2));
}
