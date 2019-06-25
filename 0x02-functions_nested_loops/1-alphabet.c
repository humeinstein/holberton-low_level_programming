#include "holberton.h"

/**
 * print_alphabet - entry point
 *
 *
 * Return (0) always
 *
 */
void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
