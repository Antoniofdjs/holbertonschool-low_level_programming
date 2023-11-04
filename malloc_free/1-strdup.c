#include <stdlib.h>
#include <string.h>
/**
*_strdup- create a pointer duplicate of a string
*
*@str: string to duplicate and point with malloc
*Return: ptr of array from malloc
*/
char *_strdup(char *str)
{
	unsigned int size = strlen(str);
	char *ptr = (char *)malloc(size * sizeof(char));
	unsigned int i;

	if ((ptr == NULL) || (size == 0))
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ptr[i] = str[i];
	}
	return (ptr);
}
