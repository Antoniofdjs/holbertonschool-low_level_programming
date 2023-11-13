#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index- finds match from array to cmp
 *
 * @array: array of nums
 * @size: size of array
 * @cmp: pointer function compares int and returns(0) if no match
 * Return: index match from array or -1 if no match
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL || cmp == NULL || size == 0)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if ((*cmp)(array[i]) != 0)
		{
			return (i);
		}
	}

	return (-1);
}
