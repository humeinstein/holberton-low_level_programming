#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_strings - print strings
 *
 * @separator: input args
 *
 * @n: Return the sum
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list vl;
	unsigned int d;
	char *s;

	va_start(vl, n);
	for (d = 0; d < n; d++)
	{
		s = va_arg(vl, char *);
		if (s != NULL)
		{
			printf("%s", s);
		}
		else
		{
			printf("(nil)");
		}
		if (separator != NULL && d < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(vl);
}
