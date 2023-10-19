#include "main.h"
#include <stdio.h>
/**
*more_numbers - Prints numbers from 0 to 14 x10 times
*
*/
void more_numbers(void)
{
	int n, i, p;

	for (i = 0; i < 10; i++)
	{
	for (n = 0; n < 15; n++)
	{
		if (n / 10 == 0)
		{
			p = 1;
		}
		else
			p = 10;

	_putchar('0' + (n / p));
	if (n >= 10)
	{
	_putchar('0' + (n % 10));
	}

	}
	_putchar('\n');
	}
}
