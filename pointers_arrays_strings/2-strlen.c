#include "main.h"
/**
 *_strlen - swap pointer variables
 *
 *@s: stores string to determine length
 *Return: value of string length
 */

int _strlen(char *s)
{
	int i = 1;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
