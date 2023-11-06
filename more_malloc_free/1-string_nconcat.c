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
	unsigned int size1, size2;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	if (s1 == NULL)
		size1 = 1;
	else
	{
		size1 = strlen(s1) + 1;
	}
	if (s2 == NULL)
		size2 = 1;
	else
	{
		size2 = strlen(s2) + 1;
	}
	if (n < size2)
	{
		size2 = n + 1;
	}
	ptr = malloc(size1 + size2);
	if (ptr == NULL)
		return (NULL);
	strcpy(ptr, s1);
	strncat(ptr, s2, n);
	return (ptr);

}
