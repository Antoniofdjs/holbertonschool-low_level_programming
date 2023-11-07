#include <stdlib.h>
#include <string.h>
/**
*array_range- array of min and max size
*
*@min: min int range
*@max: max int range
*Return: pointer to array min max range
*/
int *array_range(int min, int max)
{
	int *ptr;
	int i = 0;
	int totalnum = max - min + 1;

	if (min > max)
		return (NULL);
	ptr = malloc(totalnum * sizeof(int));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < totalnum; i++)
	{
		ptr[i] = min;
		min++;
	}
	return (ptr);
}
