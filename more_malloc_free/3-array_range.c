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

	if (min > max)
		return (NULL);
	if (min == max)
	{
		ptr = malloc(sizeof(int));
		if (ptr == NULL)
			return (NULL);
		ptr[i] = max;
		return (ptr);
	}
	ptr = malloc((max - min + 1) * sizeof(int));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; min <= (max - min + 1); i++)
	{
		ptr[i] = min;
		min++;
	}
	return (ptr);
}
