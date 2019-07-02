#include "holberton.h"
/**
 * puts2 - print one char out of 2
 * @str: string
 *
 *
 *
 */
void puts2(char *str)
{
	int coun;

	coun = 0;

	while (str[coun] != '\0')
	{
		if (coun % 2 == 0)
		{
			_putchar (str[coun]);
		}
		coun++;
	}
	_putchar('\n');
}
