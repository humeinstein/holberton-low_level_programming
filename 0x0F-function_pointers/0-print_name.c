#include "function_pointers.h"
/**
 * print_name - char
 * @name: ponter
 * @f: f
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (f)
	{
		f(name);
	}
}
