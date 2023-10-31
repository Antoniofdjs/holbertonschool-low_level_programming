#include "main.h"
#include <stdio.h>
/**
 *main- function for printing number of arguments in promtp line
 *
 *@argc: counter of total arguments in prompt line
 *@argv: values of specific argc index in the string prompt
 *Return: 0
 */
int main(int argc, char *argv[])
{
	(void) *argv;
	printf("%d\n", argc - 1);
	return (0);
}
