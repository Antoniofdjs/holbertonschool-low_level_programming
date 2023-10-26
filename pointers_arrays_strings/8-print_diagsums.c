#include "main.h"
#include <stdio.h>
/**
 *print_diagsums - Adds the diagonal of the matrix
 *
 *@a: pointer to size
 *@size: size of matrix
 */

void print_diagsums(int *a, int size)
{
	int result = 0, result2 = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		result += *(a + (i * size + i));
		result2 += *(a + (i * size + (size - i - 1)));
	}
	printf("%d, %d\n", result, result2);
}
