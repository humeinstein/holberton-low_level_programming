#include "holberton.h"
/**
 * print_square - entry
 * @size: size of square for example size by size (4x4)
 *
 *
 */
void print_square(int size)
{
	int rows;
	int col;

	for (rows = 1 ; rows <= size ; rows++)
	{
		for (col = 1 ; col <= size ; col++)
		{
			_putchar('#');
		}
		_putchar('\n');
		if (size <= 0)
		{
			_putchar('\n');
		}
	}
}
