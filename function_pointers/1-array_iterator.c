#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator- executes function given  on elements of array.
 *
 * @array: array of nums
 * @size: szie of array
 * @action: pointer function to print ints or hex
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array == NULL || action == NULL || size == 0)
		return;
	for (i = 0; i < size; i++)
		(*action)(array[i]);
}
