#include "holberton.h"

/**
 * print_most_numbers - print numbers except for 2 ands 4
 *
 * void
 */

void print_most_numbers(void)
{
	char a;

	for (a = '0' ; a <= '9' ; a++)
	{
		if (a != '2' && a != '4')
		{
			_putchar(a);
		}
	}
	_putchar('\n');
}
