#include "holberton.h"

int print_last_digit(int n)
{

	if(n < 0)
	{
		n = n % 10 * -1;
	}
	else
	{
	_putchar(n + '0');
	}
	return (n);
}
