#include "holberton.h"

/**
 * print_numbers - fcn to print numbers
 * : character to check
 *
 */
void print_numbers(void)
{
	char a;

	for (a = '0' ; a <= '9' ; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
