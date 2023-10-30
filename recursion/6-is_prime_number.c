#include "main.h"
/**
*help_div_prime- Helps find base of root square
*
*@n: integer to determine if its prime
*@div: divisor
*
*Return: Same helper until 1 for prime or 0 if not
*/
int help_div_prime(int n, int div)
{
	if (n == div)
		return (1);
	if (n % div == 0)
		return (0);
	return (help_div_prime(n, div + 1));
}
/**
*is_prime_number- determine if number is prime
*
*@n: integer to determine if its prime
*Return: Help function to determine if its prime
*/
int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
		return (0);
	return (help_div_prime(n, div));

}
