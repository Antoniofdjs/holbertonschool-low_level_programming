#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - Prints all strings with separator
 * @n: number of strings passed
 * @separator: string to be printed between strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list my_args;/* my variable for va list */
	char *current_str_ptr;

	va_start(my_args, n);/* initialize with n arguments */

	for (i = 0; i < n; i++)
	{
		current_str_ptr = va_arg(my_args, char *);/* Gets the new string each time */

		if (separator != NULL && i != n - 1)/* Print if != null and not last str */
		{
			if (current_str_ptr != NULL)
				printf("%s%s", current_str_ptr, separator);
			else
				printf("(nil)%s", separator);
		}
		else
		{
			if (current_str_ptr != NULL)/*sperator null and we are on last string*/
				printf("%s", current_str_ptr);
			else
				printf("(nil)");
		}
	}

	va_end(my_args);/* End my va list */
	printf("\n");
}
