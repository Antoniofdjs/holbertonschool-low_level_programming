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
	unsigned int size = 1 + strlen(str);
	char *ptr;
	unsigned int i;

	if (str == NULL)
	{
		return (NULL);
	}
	if (size == 1)
	{
		ptr = (char *)malloc(1 * sizeof(char));
		if (ptr == NULL)
		{
			return (NULL);
		}
		ptr[0] = '\0';
		return (ptr);
	}
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
