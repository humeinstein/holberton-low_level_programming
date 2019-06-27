#include "holberton.h"
/**
 * print_diagonal - entry with int n
 * spaces: decide how many spaces by targeting m
 * m: printing the space to allow spaces to print \ and \n
 * @n: number dictacted
 */
void print_diagonal(int n)
{
	int spaces = 1;

	while (spaces > 0 && spaces <= n)
	{
		int m = 1;

		while (m < spaces)
		{
			_putchar(' ');
			m++;
		}
		_putchar('\\');
		_putchar('\n');
		spaces++;
	}
	if (n < 0)
	{
		_putchar('\n');
	}
}
