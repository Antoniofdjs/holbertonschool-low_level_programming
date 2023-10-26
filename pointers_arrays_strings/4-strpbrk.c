#include "main.h"
/**
**_strpbrk - strpbrk function
*
*@accept: String to find inside another
*@s: Original string
*Return: a string or nul depending if is true
*/

char *_strpbrk(char *s, char *accept)
{
	int j = 0;
	int i = 0;
	int k = 0;
	char *NUL = '\0';

	while (accept[i] != '\0')
	{
		i++;
	}
	while (s[k] != '\0')
	{
		while (j <= i)
		{
			if (accept[j] == s[k])
			{
			return (s + k);
			}
			j++;
		}
		j = 0;
		k++;
	}
	return (NUL);
}
