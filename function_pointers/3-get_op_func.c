#include <stdio.h>
#include "3-calc.h"
#include <string.h>
#include <stdlib.h>
/**
 * get_op_func- picks the function to perform operation asked by user.
 * @s: operator passed as argument + - * / % from argv[2]
 * Return: result of operation in int value
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};/*First extension is *op,(+ - ...), other extension is (*p)(int int)*/

	int i = 0;

	while (i < 5)
	{
		if (strcmp(s, ops[i].op) == 0)/*compares s and .op to match signs+- */
			return (ops[i].f);/* gets int from .(*p), .p has the funct to use */
		i++;
	}
	printf("Error\n");/* If no sign operator matched */
	exit(99);
}
