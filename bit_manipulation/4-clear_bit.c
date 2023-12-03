#include <stdio.h>
#include "main.h"

/**
 *clear_bit- set bit value to 0 at given index
 *
 *@n: number decimal value
 *@index: index to assign a 0
 *
 *Return: 1 if succes.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index <= 63)
	{
		*n &= ~(1UL << index);/* it shifts the 1 to assign at indx */
		return (1);
	}

	return (-1);
}
