#include "main.h"
/**
*_memset - Fills with a certain type and constant byte b till n bytes
*
*@s: pointer to memory
*@b: constant byte of a specific character
*@n: the first n bytes
*Return: s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
