#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * int_index - func for int
 * @array: array w ele
 * @size: # of ele
 * @cmp: callback func
 * Return: -1 if no ele match
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (size <= 0)
	{
		return (-1);
	}
	while (x = 0 ; x < size)
	{
		x++;
		cmp(array[x];
		    if (cmp(array[x]) != 0)
		{
			return (x);
		}
	}
	return (-1);

}
