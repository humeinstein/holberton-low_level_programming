#include "holberton.h"
/**
 * print_alphabet_x10 - entry
 * @a - number
 * @counter - the counter
 * function void print_alphabet voi
 */
void print_alphabet_x10(void)
{
	char a;
	char counter;

	for (counter = 0; counter <= 9; counter++)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
}
