#include "main.h"
/**
 **string_toupper - Changes lower letters to upper
 *
 * @str: poins to a string
 * Return: the string with upper
 */

char *string_toupper(char *str)
{
	int i = 0, j = 0;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	i--;
	for (; i >= 0; i--)
	{
	if (str[j] >= 'a' && str[j] <= 'z')
	{
		str[j] = str[j] - 32;
	}
	j++;
	}
	return (str);

}
