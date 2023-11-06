#include <stdlib.h>
#include <string.h>
/**
*string_nconcat - concat string to another up to n bytes
*
*@s1: string to make concat to
*@s2: string to concat to s1
*@n: n bytes of s2(buffer)
*Return: pointer to concat strings
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, j;
	unsigned int size1 = 0, size2 = 0;

	if (s1 != NULL)
		size1 = strlen(s1);
	if (s2 != NULL)
		size2 = strlen(s2);
	if (n < size2)
		size2 = n;
	else
	{
		n = size2;
	}
	ptr = malloc(size1 + size2 + 1);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size1; i++)
		ptr[i] = s1[i];
	for (j = 0; j < size2; j++)
	{
		ptr[i] = s2[j];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);

}
