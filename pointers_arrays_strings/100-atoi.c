#include "main.h"
#include <stdio.h>
#include <limits.h>

/**
 *_atoi - takes strings of numbers an puts them in a int
 *
 *@s: stores string
 * Return: int value of string text
 */
int _atoi(char *s)
{
	int j = 0, i = 0;
	int signo = 1;
	int result = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	for (j = 0; j <= i; j++)
	{
		if (s[j] == '-')
	{
		signo *= -1;
	}
		if (s[j] >= '0' && s[j] <= '9')
	{

		if (result > INT_MAX / 10 || (result == INT_MAX / 10
					&& (s[j] - '0') > INT_MAX % 10))
		{
			if (signo == 1)
			{
				return (INT_MAX);
			}
			else
			{
				return (INT_MIN);
			}
		}
		result = result * 10 + (s[j] - '0');
		if (s[j + 1] < '0' || s[j + 1] > '9')
		{
			j = i + 1;
		}
	}
	}
	result = result * signo;
	return (result);
}
