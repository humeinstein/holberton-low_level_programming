#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_iterator - function that executes a func param each ele of array
 * @array: array
 * @size: d
 * @action: funct name
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int d;

	for (d = 0 ; d < size ; d++)
	{
		action(array[d]);
	}
}
