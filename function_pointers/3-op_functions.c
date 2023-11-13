#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>

/**
 * op_add- adds two ints together
 * @a: first int
 * @b: second int
 * Return: returns sums of ints
 */

int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub- substract a - b
 *@a: first int
 * @b: second int
 * Return: returns substraction of ints
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul- multiply a*b
 *@a: first int
 * @b: second int
 * Return: returns result of a*b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div- devide a/b
 *@a: first int
 * @b: second int
 * Return: returns result of a/b
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod- modulo a%b
 *@a: first int
 * @b: second int
 * Return: returns result of a%b
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
