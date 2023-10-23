#include "main.h"
/**
 *puts2- Prints every other number
 *
 *@str: stores string
 *Return: prints string
 */

void puts2(char *str)
{
	int i = 0, j = 0;
	char letter;

	while (str[i] != '\0')
	{
		i++;
	}
	i = i - 1;
	while (j <= i)
	{
		letter = str[j];
		_putchar(letter);
		j = j + 2;
	}
_putchar('\n');
}
