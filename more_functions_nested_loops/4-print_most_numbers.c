#include "main.h"
#include <stdio.h>
/**
*print_most_numbers - Prints numbers from 0 - 9
*
*/
void print_most_numbers(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
	if (n != 2 && n != 4)
	{
		_putchar('0' + n);

	}

	}
	_putchar('\n');
}
