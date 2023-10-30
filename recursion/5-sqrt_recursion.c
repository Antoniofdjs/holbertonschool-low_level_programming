#include "main.h"
/**
*help_sqrt - Helps find base of root square
*
*@n: integer to find sqr root
*@base: base of sqr root for n
*
*Return: Same function to do recursion
*/
int help_sqrt(int n, int base)
{

	if (base * base == n)
		return (base);
	if (base * base > n)
		return (-1);
	return (help_sqrt(n, base + 1));
}
/**
*_sqrt_recursion- sqr root of number
*
*@n: integer to find sqr root
*Return: sqr root of n
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (0);
	}
	return (help_sqrt(n, 1));

}
