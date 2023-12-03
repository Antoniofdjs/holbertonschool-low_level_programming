#include <stdio.h>
#include "main.h"

/**
 *set_bit- set bit value to 1 at given index
 *
 *@n: number decimal value
 *@index: index to assign a 1
 *
 *Return: 1 if succes.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index <= 63)
	{
		*n |= (1UL << index);/* it shifts the 1 to assign at indx */
		return (1);
	}

	return (-1);
}
