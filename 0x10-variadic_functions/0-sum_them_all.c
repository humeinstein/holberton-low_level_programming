#include "variadic_functions.h"
#include <stdarg.h>
/**
 *
 *
 *
 *
 *
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list vl;
	int sum = 0;
	unsigned int x;

	if(n == 0)
	{
		return (0);
	}
	va_start(vl, n);
	for (x = 0 ; x < n ; x++)
	{
		sum += va_arg(vl, int);
	}
	va_end(vl);
	return sum;
}
