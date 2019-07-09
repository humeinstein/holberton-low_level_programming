#include "holberton.h"
/**
 * print_chessboard - function that prints a chessboard
 * @a: variable
 *
 *
 *
 *
 */
void print_chessboard(char (*a)[8])
{
	int x;
	int l;

	for (x = 0 ; x < 8 ; x++)
	{
		for (l = 0 ; l < 8 ; l++)
		{
			_putchar(a[x][l]);
		}
		_putchar('\n');
	}
}
