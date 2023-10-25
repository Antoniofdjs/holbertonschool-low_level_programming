#include "main.h"
/**
**_strchr - Fills with a certain type and constant byte b till n bytes
*
*@s: points string
*@c: character
*Return: dest
*/

char *_strchr(char *s, char c)
{
	char *NUL = '\0';

	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
	{
		return (s);
	}
	return (NUL);
}
