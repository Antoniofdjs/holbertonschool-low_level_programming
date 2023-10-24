#include <stdio.h>
#include "main.h"
/**
 * print_array*- Prints array of numbers
 *
 *@a: pointer
 *@n: numbers to be printedi
 *Return: prints string
 */

void print_array(int *a, int n)
{
	int num, i = 0;

	while (i < n && a[i] != '\0')
	{
		num = a[i];
		printf("%d", num);
		if ( i != n - 1)
		{
			printf(",");
			printf(" ");
		}
		i++;
	}
printf("\n");
}
