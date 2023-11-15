#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include "variadic_functions.h"
/**
 * print_c - prints chars
 * @my_args: pointer to args
 */
void print_c(va_list *my_args)
{
	printf("%c", va_arg(*my_args, int));
}
/**
 * print_i - prints ints
 * @my_args: pointer to args
 */
void print_i(va_list *my_args)
{
	printf("%d", va_arg(*my_args, int));
}
/**
 * print_f - prints floats
 * @my_args: pointer to args
 */
void print_f(va_list *my_args)
{
	printf("%f", va_arg(*my_args, double));
}
/**
 * print_s - prints strings
 * @my_args: pointer to args
 */
void print_s(va_list *my_args)
{
	char *current_str;

	current_str = va_arg(*my_args, char *);
	if (current_str == NULL)
		current_str = "(nil)";
	printf("%s", current_str);
}
/**
 * print_all - prints everything
 * @format: constant format string
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	const char *ptr = format;
	int size, i = 0, j = 0;
	va_list my_args;
	data my_data[] = {
		{"c", print_c},
		{"i", print_i},
		{"f", print_f},
		{"s", print_s}
	};
	size = strlen(ptr);
	va_start(my_args, format);
	while (i < size)
	{
		j = 0;
		while (j < 4)
		{
			if (ptr[i] == my_data[j].type[0])
			{
				my_data[j].f(&my_args);
				if (i != size - 1)
					printf(", ");
			}
			j++;
		}
		i++;
	}
	va_end(my_args);
	printf("\n");
}
