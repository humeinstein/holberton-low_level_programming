#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiple 2 arguments
 * @argc: args
 * @argv: storage
 *
 * Return: 0 if 2 to multiply and 1 for else
 */
int main(int argc, char *argv[])
{
	int i, x;

	if (argc == 3)
	{
		i = atoi(argv[1]);
		x = atoi(argv[2]);
		i = i * x;
		printf("%d\n", i);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
