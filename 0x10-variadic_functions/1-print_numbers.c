#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * print_numbers - print numbers
 * @seperator: , and space
 * @n: int n
 * Return: void;
 */
void print_numbers(const char *seperator, const unsigned int n, ...)
{
	va_list vl;
	unsigned int x;
	const char *y;

	if (seperator == NULL)
		y  = " ";
	else
		y = seperator;

	va_start(vl, n);

	for (x = 0 ; x < n ; x++)
	{
		printf("%d", va_arg(vl, int));
		if (x < n - 1)
			printf("%s", y);
	else
		printf("\n");
	}
	va_end(vl);
}
