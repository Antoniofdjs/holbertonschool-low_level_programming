#include "main.h"
/**
 *rev_string - reverses the string
 *
 *@s: stores string
 *
 */

void rev_string(char *s)
{
	int i = 0, j = 0;
	int end;
	char temp[10];

	while (s[i] != '\0')
	{
		i++;
	}
	i = i - 1;
	end = i;
	while (i >= 0)
	{
		temp[j] = s[i];
		i--;
		j++;
	}
	i = 0;
	j = 0;
	while (i <= end )
	{
		s[i] = temp[j];
		i++;
		j++;
	}
}
