#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - Prints all numbers including separator
 * @n: number of ints passed
 * @separator: string to be printed between numbers
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list my_args;/* my variable for va list */

	va_start(my_args, n);/* initialize with n arguments */

	for (i = 0; i < n; i++)
	{
		if (separator != NULL && i != n - 1)/* Print if != null and not last num */
		{
				printf("%d%s", va_arg(my_args, int), separator);
		}
		else
			printf("%d", va_arg(my_args, int));/* Prints only the numbers */
	}
	va_end(my_args);/* End my va list */
	printf("\n");
}
