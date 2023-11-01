#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *main- function for printing its every argument
 *
 *@argc: counter of total arguments in command line
 *@argv: values of specific argc index in the string prompt
 *Return: 0
 */
int main(int argc, char *argv[])
{
	int num, num2;
	int result = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
	num = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num * num2;
	printf("%d\n", result);
	return (0);
	}
}
