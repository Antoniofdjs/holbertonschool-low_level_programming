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
	unsigned int size;
	char *ptr;
	unsigned int i;

	if (str == NULL)
	{
		return (NULL);
	}
	size = 1 + strlen(str);
	ptr = (char *)malloc((size) * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ptr[i] = str[i];
	}
		return (ptr);
}
