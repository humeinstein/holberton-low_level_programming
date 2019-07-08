#include "holberton.h"
/**
 *
 *
 *
 *
 *
 */
char *rot13(char *z)
{
	int x = 0;
	int y;
	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (z[x] != '\0')
	{
		x++;
		for (y = 0 ; y < 58 ; y++)
		{
			if (z[x] == a[y])
			{
				z[x] = b[y];
				break;
			}
		}
	}
	return (z);
}
