#include "holberton.h"
/**
 * reverse_array - reverses an array
 * @a: is array
 * @n: number of array to be reversed
 *
 *
 *
 */
void reverse_array(int *a, int n)
{
	int temp;
	int b = 0;
	int d = n - 1;

	while (b < d)
	{
		temp = a[b];
		a[b] = a[d];
		a[d] = temp;
		b++;
		d--;

	}
}
