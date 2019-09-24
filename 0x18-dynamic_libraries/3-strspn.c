#include "holberton.h"
/**
 * _strspn - function
 * @s: string
 * @accept: acceptable parts of string
 *
 * Return: count3 always
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count;
	unsigned int count2;
	unsigned int count3 = 0;

	for (count = 0; *(s + count) != '\0' ; count++)
	{
		if (count3 != count)
		{
			break;
		}
		for (count2 = 0; *(accept + count2) != '\0' ; count2++)
		{
			if (*(s + count) == *(accept + count2))
			{
				count3++;
			}
		}
	}
	return (count3);
}
