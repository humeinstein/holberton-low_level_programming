#include "holberton.h"
/**
* print_last_digit - fctn that prints the last digit of a num
* @n: value of last digitt
* Return: last digit of an int
*/
int print_last_digit(int n)
{
	n = n % 10;
	if (n < 0)
	{
		n = n * -1;
	}
	_putchar ('0' + n);
	return (n);
}
