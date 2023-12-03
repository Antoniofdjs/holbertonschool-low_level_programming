#include <stdio.h>
#include "main.h"

/**
 *get_bit- return value of of bit at index
 *
 *@n: decimal int number
 *@index: index to find value at
 *Return: value of bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_value = 0;

	if (index > 63) /* more than 64 bit spaces */
		return (-1);

	bit_value = ((n >> index) & 1); /* index spaces to the right */

/*
 * example, index = 1
 * num = 6
 * 1 (1) 0 in binary, at index 1
 * checks 1 & 1, its = 1
 */
	return (bit_value);
}
