#include "holberton.h"
/**
 * cap_string - function that captializes all words
 * @s: string
 * Return: s
 *
 *
 *
 *
 */
char *cap_string(char *s)
{
	char p[] = " ,;.!?\"(){}\t\n";
	int a;
	int b;

	for (a = 0 ; s[a] != '\0' ; a++)
	{
		for (b = 0 ; s[a] < 'z' && s[a] > 'a' && p[b] != '\0' ; b++)
		{
			if (s[a - 1] == p[b] || s[a] == s[0])
			{
				s[a] = s[a] - 32;
			}
		}
	}
	return (s);
}
