#include "main.h"
/**
**_strstr - str_str function
*
*@needle: String to find inside another
*@haystack: Original string
*Return: a string or nul depending if is true
*/

char *_strstr(char *haystack, char *needle)
{
	int j = 0;
	int i = 0;
	int k = 0, cutindex;
	char *NUL = '\0';

	while (needle[i] != '\0')
	{
		i++;
	}
	while (haystack[k] != '\0')
	{
		while (j <= i)
		{
			if (needle[j] == haystack[k])
			{
				cutindex = k;
				while (needle[j] == haystack[k])
				{
					j++;
					k++;
					if (j == i && needle[j] == haystack[k])
					{
						return (haystack + cutindex);
					}
					else if (j == i)
					{
						return (NUL);
					}
				}
			}
			else
			{
				j = 0;
				k++;
			}
			j = 0;
		}
	}
	return (NUL);
}
