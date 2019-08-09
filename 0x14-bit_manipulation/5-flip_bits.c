#include "holberton.h"
/**
 * flip_bits - function that returns # of bits flipped form 1 to another
 * @n: int
 * @m: int
 * Return: # of flips
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int differences = n ^ m;
	unsigned long int x, y, numb = 0;

	for (x = 0; differences != 0; x++)
	{
		y = differences & 1;
		differences >>= 1;
		if (y == 1)
		{
			numb++;
		}
	}
	return (numb);
}
