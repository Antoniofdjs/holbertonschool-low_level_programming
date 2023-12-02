#include <stdio.h>
#include "main.h"

/**
 *print_binary- prints a binary representation of number
 *
 *@n: contains number decimal
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);/* devide by 2 do recursion first */
	putchar((n & 1) + '0'); /* if number is not 1, change to 0 */
}
