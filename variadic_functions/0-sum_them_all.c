#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all- returns the sum of all its parameters
 * @n: number of arguments passed
 * Return: sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int total = 0;

	va_list my_args;/* my variable for va list */

	if (n == 0)
		return (0);

	va_start(my_args, n);/* initialize with n arguments */

	for (i = 0; i < n; i++)
		total = total + va_arg(my_args, int); /* sum every value */
	va_end(my_args);/* End my va list */

	return (total);
}

