#include "main.h"
#include <stdio.h>
/**
*main - Prints biggest prime factor for a number
*
*/
void main(void)
{
	long long int n = 612852475143;
	long long int factor;
	long long int big_prime;
	int i = 2;

	factor = n;
	while (factor != i)
	{
		if (factor % i == 0)
		{
			factor = factor / i;
			i == 2;
		}
		else
			i++;
	}
	big_prime = factor;
	printf("%lld\n", big_prime);
}
