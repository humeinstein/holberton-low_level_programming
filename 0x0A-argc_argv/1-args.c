#include <stdio.h>
/**
 * main - argc argv print # of arguments passed
 * @argc: # of arg
 * @argv: void
 * Return: 0
 *
 */
int main(int argc, char *argv[])
{

	printf("%d\n", argc - 1);
	(void)argv;
	return (0);
}
