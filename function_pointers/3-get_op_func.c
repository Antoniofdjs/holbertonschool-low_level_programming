#include <stdio.h>
#include "3-calc.h"
#include <string.h>
#include <stdlib.h>
/**
 * get_op_func- picks the function to perform operation asked by user.
 * @s: operator passed as argument + - * / %
 * Return: result of operation followed by new line
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
	};
	int i;

	while (i < 5)
	{
		printf("While indice %d\n", i);
		if (*s == ops[i].op[0])
			return (ops[i].f);
		i++;
	}
	printf("Error\n");
	exit(99);
}
