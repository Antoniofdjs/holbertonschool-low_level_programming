#include "main.h"
/**
 *_puts - swap pointer variables
 *
 *@str: stores string to determine length
 *Return: prints string
 */

void _puts(char *str)
{
	int i = 0;
	char letter;

	while (str[i] != '\0')
	{
		letter = str[i];
		_putchar(letter);
		i++;
	}
_putchar('\n');
}
