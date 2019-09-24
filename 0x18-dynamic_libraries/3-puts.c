#include "holberton.h"
/**
 * _puts - function
 * @str: pointer str
 *
 *
 *
 */
void _puts(char *str)
{

	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
