/* add commands */
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

int n;
/* description */
srand(time(0));
n = rand() - RAND_MAX / 2;
p = n % 10
if (n % 10 > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, p);
}
if (n % 10 < 6 && n % 10 != 0)
{
printf("Last digit %d is %d less than 6 and is not 0\n", n, p);
}
else
{
printf("Last digit of %d is 0 and is 0\n", n);
}
return (0);
}
