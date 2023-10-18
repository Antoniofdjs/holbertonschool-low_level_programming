#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 *print_last_digit- Prints last digit of a number
 *
 *@r: stores value from %>>>> r % 10
 *Return: r value
 */
int print_last_digit(int r)
{
	r = r % 10;
	if (r < 0)
	{
		r = -r;
		_putchar('0' + r);
	}
	else
		_putchar('0' + r);
return (r);
}
