#include "main.h"

/**
 *print_number - Prints an integer
 *@n: The integer to be printed
 */
void print_number(int n)
{
	int divisor = 1;
	int leading_zeros = 1;
	
	if (n == 0)
    {
	    _putchar('0');
	    return;
    }
    if (n < 0)
    {
	    _putchar('-');
	    n = -n;
    }
    while (n / divisor > 9)
    {
	    divisor *= 10;
    }
    while (divisor >= 1)
    {
	    int digit = (n / divisor) % 10;
	    if (digit != 0 || !leading_zeros)
	    {
		    _putchar(digit + '0');
		    leading_zeros = 0;
	    }
	    divisor /= 10;
    }
}
