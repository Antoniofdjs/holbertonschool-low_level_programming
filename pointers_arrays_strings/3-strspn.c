#include "main.h"
/**
*_strspn - strspn function
*
*@accept: string to compare bytes to original
*@s: string original
*Return: int
*/

unsigned int _strspn(char *s, char *accept)
{
	int j = 0;
	int i = 0;
	int k = 0;
	unsigned int count = 0;

	while (accept[i] != '\0')
	{
		i++;
	}
	while (s[k] != '\0')
	{
		if (accept[j] == s[k])
		{
			count++;
			k++;
			j = 0;
		}
		else if (j == i)
		{
			return (count);
		}
		else
		{
			j++;
		}
	}
return (count);
}
