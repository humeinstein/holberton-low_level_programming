#include "holberton.h"

/**
 *
 *
 *
 *
 */

void more_numbers(void)
{
	char counter;
	char number;

	for (counter = '0' ; counter <= '9' ; counter++)
	{
		for (number = 0 ; number < 15 ; number++)
		{
			if (number > 9)
			{
				_putchar((number / 10) + '0');
			}
			_putchar((number % 10) + '0');
		}
		_putchar('\n');
	}
}
