#include "holberton.h"
/**
 * _puts_recursion - like function puts
 * @s: pointer s
 *
 * Return: void
 *
 */
void _puts_recursion(char *s)
{

	_putchar(*s);
	if (*s != '\0')
	{
		_puts_recursion(s + 1);
		return;
	}
	else
	{
		_putchar('\n');
	}
}
