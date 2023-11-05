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
	unsigned int size, size1, size2;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	size1 = strlen(s1);
	size2 = strlen(s2);
	size = size1 + size2;
	ptr = (char *)malloc((size + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	strcpy(ptr, s1);
	strcat(ptr, s2);
	return (ptr);
}
