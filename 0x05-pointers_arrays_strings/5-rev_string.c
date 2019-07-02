#include "holberton.h"
/**
 * rev_string - reverses string
 * string_length - finds length of the string
 * @s: s str
 *
 * string_length - (char *pointer)
 */
void rev_string(char *s)
{
	int string_length(char *);
	int length, c;
	char *begin, *end, temp;

	length = string_length(s);
	begin = s;
	end = s;

	for (c = 0 ; c < length - 1 ; c++)
	{
		end++;
	}
	for (c = 0 ; c < length / 2 ; c++)
	{
		temp = *end;
		*end = *begin;
		*begin = temp;

		begin++;
		end--;
	}
}

int string_length(char *pointer)
{
	int c = 0;

	while (*(pointer + c) != '\0')
	{
		c++;
	}
	return (c);
}
