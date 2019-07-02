#include "holberton.h"
#include <stdlib.h>

/**
 * swap_int - function with int *a, int *b
 * @b: variable used
 * @a: variable used
 *
 */

void swap_int(int *a, int *b)
{
	int box;

	box = *a;
	*a = *b;
	*b = box;
}
