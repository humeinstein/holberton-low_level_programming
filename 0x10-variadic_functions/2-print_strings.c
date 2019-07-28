#include "variadic_functions.h"
#include <stdargs.h>
/**
 * print_strings - print strings
 * @separator: separator char
 * @n: iterator thru the string index
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list vl;
	unsigned int x;
	char *b;

	va_start(vl, n);
	for (x = 0; x < n; x++)
	{
		b = va_arg(vl, char*);
		if (b != NULL)
			printf("%s", b);
		else
			printf("%p", b);
		if (separator != NULL && x < n - 1)
			printf("%s%s", separator, s);
	}
	printf("\n");
	va_end(vl);
}
