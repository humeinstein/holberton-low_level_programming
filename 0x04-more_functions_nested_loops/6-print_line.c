#include "holberton.h"
/**
 * print_line - entry with int n
 * @n: number of times line should
 *  the line itself
 * no return
 */

void print_line(int n)
{
	int l;

	for (l = 0 ; l < n ; l++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		_putchar(95);
	}
	_putchar('\n');
}
