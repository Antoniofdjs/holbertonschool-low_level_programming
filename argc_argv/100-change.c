#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 *help_change - print exact change needed
 *@total: value obtained from string prompts argv
 *
 * Return: 0
 */

int help_change(int total)
{
int change = 0, i = 0;
int coin[5] = {25, 10, 5, 2, 1};
for (i = 0; i < 5; i++)
	{
	if ((total % coin[i]) == 0)
	{
		printf("%d\n", change + (total / coin[i]));
		return (0);
	}
	if ((total / coin[i]) != 0)
	{
		change = change + (total / coin[i]);
		total = total % coin[i];
	}

	}
	return (1);
}

/**
 *main- function for adding positive numbers
 *
 *@argc: counter of total arguments in command line
 *@argv: values of specific argc index in the string prompt
 *Return: 0
 */
int main(int argc, char *argv[])
{
	int num = 0;
	int j, total = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	for (j = 0; argv[1][j] != '\0'; j++)
	{
		if (argv[1][j] == '-')
		{
			printf("0\n");
			return (0);
		}
		else if (!isdigit(argv[1][j]))
		{
			printf("Error\n");
			return (1);
		}
	}
	num = atoi(argv[1]);
	total = total + num;
	return (help_change(total));
}
