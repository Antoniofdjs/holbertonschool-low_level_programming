#include "main.h"
/**
*_pow_recursion- x^(y)
*
*@x: base integer
*@y: power
* Return: x to the power of y
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	y--;
	return (x * _pow_recursion(x, y));
}
