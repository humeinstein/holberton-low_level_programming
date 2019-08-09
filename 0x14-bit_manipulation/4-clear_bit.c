#include "holberton.h"
/**
 *
 *
 *
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index < 64)
	{
		*n = *n & ~(1 << index);
	}
	return (-1);
}
