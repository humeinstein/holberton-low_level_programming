#include "holberton.h"

/**
 * _strlen - function
 *
 * @s: char s
 * Return: (length)
 */

void puts_half(char *str)
{
	int i;
	int length = 0;
	int n = (length - 1) / 2;

        while (str[length] != '\0')
        {
                length++;
        }
        if (length % 2 == 1)
	{
		for (i = 0 ; i <= length ; i++)
		{
			if (i > n)
			{
				_putchar(str[i]);
			}
		}
	}
	else
	{
		for (i = 0 ; i <= length ; i++)
		{
			if (i > (length - 1) / 2)
			{
				_putchar(str[i]);
			}
		}
	}
	_putchar('\n');
}
