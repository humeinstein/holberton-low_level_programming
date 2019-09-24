#include "holberton.h"
/**
 * _strcmp - char s1 and char s2
 * @s1: string 1
 * @s2: string 2
 *
 * Return: s1 and combo
 *
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0 ; s1[i] == s2[i] && s1[i] == '\0' ; i++)
	{
	}
	if (s1[i] < s2[i])
	{
		return (s1[i] - s2[i]);
	}
	else if (s1[i] > s2[i])
	{
		return (s1[i] - s2[i]);
	}
	return (0);
}
