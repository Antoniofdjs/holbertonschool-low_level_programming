#include <stdlib.h>
/**
*_strdup- create a pointer duplicate of a string
*
*@str: string to duplicate and point with malloc
*Return: ptr of array from malloc
*/
char *_strdup(char *str)
{
	char *ptr = (char *)malloc(100 * sizeof(char));
	unsigned int i;

	if ((ptr == NULL) || (str[0] == '\0'))
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		ptr[i] = str[i];
	}
	return (ptr);
}
