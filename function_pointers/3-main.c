#include <stdio.h>
#include "3-calc.h"
#include <strings.h>
#include <stdlib.h>
/**
 * main- Prints result of the operation in command line
 *
 * @argc: argument count
 * @argv: argment values
 */

int main(int argc, char *argv[])
{
	int num1 = 0, num2 = 0;
	int result = 0;
	char *operator;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}


	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = argv[2];

	result = (*get_op_func(operator))(num1, num2);

	printf("%d\n", result);

	return (0);
}
