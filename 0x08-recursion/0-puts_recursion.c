#include "holberton.h"
/**
 *
 *
 *
 *
 *
 */
void _puts_recursion(char *s)
{
	char *p1 = s;

	_putchar(*p1);
	if (*p1 != '\0')
	{
		_puts_recursion(p1 + 1);
	}
	if (*p1 == '\0')
	{
		_putchar('\n');
	}
}
