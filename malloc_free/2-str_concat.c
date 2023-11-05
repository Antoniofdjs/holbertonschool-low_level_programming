#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 *str_concat- a function that concatenates two strings
 *
 *@s1: pointer string 1
 *@s2: pointer string 2
 *Return: pointer to concat strings 1,2
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	unsigned int size, size1 = 0;
	unsigned int size2 = 0;

	if (s1 != NULL)
		size1 = strlen(s1);
	if (s2 != NULL)
		size2 = strlen(s2);
	size = size1 + size2;
	ptr = (char *)malloc((size + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	if (s1 != NULL)
		strcpy(ptr, s1);
	if (s2 != NULL)
		strcat(ptr, s2);
	return (ptr);
}
