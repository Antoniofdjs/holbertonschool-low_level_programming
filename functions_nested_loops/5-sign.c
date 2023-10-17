#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 *print_sign - Prints number with signs
 *
 *@n: stores return from is lower , 1 for lower
 *Return: c value
 */
int print_sign(int n)
{

	if (n > 0)
	{
	_putchar('+');
	n = 1;
	}
	else if (n < 0)
	{
	_putchar('-');
	n = -1;
	}
	else
	{
	 _putchar('0');
	n = 0;
	}

return (n);
}
