#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name- prints name, using ptr of function
 *
 * @name: string of name to print
 * @f: function pointer that takes a char type to print
 */

void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
