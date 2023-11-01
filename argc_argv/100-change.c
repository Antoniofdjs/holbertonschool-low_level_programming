#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 *help_change - print exact change needed from main
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
	if ((total % coin[i]) == 0)/*if coin can devide the total with no residue*/
	{
		printf("%d\n", change + (total / coin[i]));
		return (0);
	}
	if ((total / coin[i]) != 0)/* devide total and keep the #coins used*/
	{
		change = change + (total / coin[i]);/*coins used so far*/
		total = total % coin[i];/*Keeps residue of dividing by coin*/
	}

	}
	return (1);
}

/**
 *main- Takes amount of cents to find change for it in coins
 *
 *@argc: counter of total arguments in command line
 *@argv: values of specific argc index in the string prompt
 *Return: 0
 */
int main(int argc, char *argv[])
{
	int num = 0;
	int j, total = 0;

	if (argc != 2)/*Only 2 arg counts allowed*/
	{
		printf("Error\n");
		return (1);
	}
	for (j = 0; argv[1][j] != '\0'; j++)/*Loop for traveling[][j] index*/
	{
		if (argv[1][j] == '-')/*Finds - */
		{
			printf("0\n");
			return (0);
		}
		else if (!isdigit(argv[1][j]))/*if char [j] is not digit error*/
		{
			printf("Error\n");
			return (1);
		}
	}
	num = atoi(argv[1]);/*assign total of cents to an int*/
	total = total + num;
	return (help_change(total));/*Call helper function*/
}
