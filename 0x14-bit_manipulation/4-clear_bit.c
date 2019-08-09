#include "holberton.h"
/**
 * clear_bit - function that clears bit at index
 * @n: int
 * @index: index of where to clear bit
 * Return: -1 if fail
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index < 64)
	{
		*n &= ~(1 << index);
		return (1);
	}
	return (-1);
}
