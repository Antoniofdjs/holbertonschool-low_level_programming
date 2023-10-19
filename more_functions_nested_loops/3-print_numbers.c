#include "main.h"
#include <stdio.h>
/**
*print_numbers - Prints numbers from 0 - 9
*
*/
void print_numbers(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
	_putchar('0' + n);
	}
	_putchar('\n');
}
