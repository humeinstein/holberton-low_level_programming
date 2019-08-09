#include "holberton.h"
/**
 * set_bit - function that activates bit
 * @n: num
 * @index: index of bit to change
 * Return: 1 or -1 if fail
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index < 64)
	{
		*n |= (1 << index);
		return (1);
	}
	return (-1);
}
