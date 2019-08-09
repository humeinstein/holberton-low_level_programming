#include "holberton.h"
/**
 * get_bit - function that returns value of a bit at given index
 * @n: num to check
 * @index: index of bit
 * Return: value of bit or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int x;

	if (index < 64)
	{
		x = (n >> index) & 1;
		return (x);
	}
	return (-1);
}
