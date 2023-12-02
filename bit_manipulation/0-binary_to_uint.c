#include <stdio.h>
#include "main.h"

/**
 *binary_to_uint- convert binary str to unsigned int
 *
 *@b: str containing binary
 *Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int total = 0;
	unsigned int dec_val = 1; /*value after 2^pwr based on position*/
	unsigned int sizelen = 0;

	if (b != NULL) /* if b null will return 0 */
	{
		sizelen = strlen(b);
		for (i = sizelen - 1 ; i >= 0; i--)
		{
			if (b[i] != '0' && b[i] != '1')
				return (0);

			if (b[i] == '1')
				total = total + dec_val;

			dec_val = dec_val * 2;
		}
	}
	return (total);
}
