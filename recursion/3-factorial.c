#include "main.h"
/**
*factorial- Function for factorial !n
*
*@n: integer value
*
* Return: n*function(n + 1) called
*/

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
