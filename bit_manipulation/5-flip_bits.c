#include <stdio.h>
#include "main.h"

/**
 *flip_bits- bits to flip to match both numbers
 *
 *@n: number decimal value
 *@m: number of another decimal to compare
 *
 *Return: Number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int indx, flips = 0;
	unsigned long int tmp_n, tmp_m; /* temps */

	for (indx = 63; indx >= 0; indx--)/* 64 bits to check */
	{
		tmp_n = n;/* reset values */
		tmp_m = m;

		tmp_n &= (1UL << indx);/* & to check if bit is 1 or 0 */
		tmp_m &= (1UL << indx);
		if (tmp_n != tmp_m)
			flips++;/* count of bits to flip */
	}
	return (flips);
}
