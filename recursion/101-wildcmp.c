#include "main.h"
#include <string.h>

/**
*wildcmp- determine if strings are identical even with * special char
*
*@s1: pointer to string
*@s2: pointer to string with special
*Return: 1 if strings are identical
*/

int wildcmp(char *s1, char *s2)
{
	if (s1[0] == '\0' && s2[0] == '\0')
		return (1);
	if (s1[0] == '\0' && s2[0] != '\0')
		return (0);
	if (s1[0] != '\0' && s2[0] == '\0')
		return (0);
	if (*s1 != *s2 && *s2 == '*' && *(s2 + 1) != '*')
	{
		if (*(s1 + 1) == *(s2 + 1))
		{
			return (wildcmp(s1 + 1, s2 + 1));
		}
		else
		return (wildcmp(s1 + 1, s2));
	}

	if (*s1 == *s2)
	return (wildcmp(s1 + 1, s2 + 1));

	return (0);
}
