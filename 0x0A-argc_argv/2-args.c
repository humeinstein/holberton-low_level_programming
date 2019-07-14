#include <stdio.h>
/**
 * main - argc argv print all arguments received
 * @argc: arguments given
 * @argv: string value to be printed
 * Return: always 0
 *
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0 ; i < argc ; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
