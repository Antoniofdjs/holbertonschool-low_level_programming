#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 *main- function for adding positive numbers
 *
 *@argc: counter of total arguments in command line
 *@argv: values of specific argc index in the string prompt
 *Return: 0
 */
int main(int argc, char *argv[])
{
	int num;
	int result = 0;
	int i = 1, j;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	while (i < argc)/*loop for command prompts excluding name of exe*/
	{
		j = 0;/*Reset j index*/
		while (argv[i][j] != '\0')/*Loop for checking isdigit argv[][]*/
		{
			if (isdigit(argv[i][j]))
			{
			j++;/*move to the next argv[][j] character*/
			}
			else/* if argv[][] is not a digit*/
			{
				printf("Error\n");
				return (1);
			}
		}
			num = atoi(argv[i]);/*Puts current string into int and adds them */
			result = result + num;
			i++;/*Next string*/
	}
	printf("%d\n", result);
	return (0);
	}
