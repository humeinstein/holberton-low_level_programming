#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
/**
 *
 *
 *
 *
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}

void print_all(const char * const format, ...)
{
	va_list vl;
	int x = 0;
	char *s;
	char cvar;
	char per;
	va_start(vl, format);
	while (format[x] != '\0')
	{
		if (format[x] == '%')
		{
			switch(format[x + 1])
			{
			case 'c':
				cvar = va_arg(vl, int);
				write(STDOUT_FILENO, &cvar, 1);
				break;
			case 'i':
				printf ("%d", va_arg(vl, int));
				break;
			case 'f':
				printf ("%f", va_arg(vl, double));
				break;
			case 's':
				s = va_arg(vl, char*);
				write(STDOUT_FILENO, s, _strlen(s));
				break;
			case '%':
				per = '%';
				write(STDOUT_FILENO, &per, 1);
				break;
			default:
				break;
			}
			x++;
		}
		else
		{
			write(STDOUT_FILENO, &format[x], 1);
		}
		x++;
	}
	va_end(vl);
}
