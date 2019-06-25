#include "holberton.h"
/*Our new headfile*/


int main(void) {

int c[9] = {72, 111, 108, 98, 101, 114, 116, 111, 110};
int d;

	for (d = 0; d < 9; d++)
	{
		_putchar(c[d]);
	}
	_putchar ('\n');
	return (0);
}
