#include "main.h"
#include <stdio.h>
/**
 *main- function for printing its own funct name
 *
 *@argc: counter of total arguments in prompt line
 *@argv: values of specific argc index in the string prompt
 */
int main(int argc, char *argv[])
{
	(void) argc;
	
	while (*argv)
	{
	printf("%s\n", *argv);
	argv++;
	}
	return (0);
}
