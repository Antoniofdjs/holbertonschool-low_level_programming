#include "main.h"
/**
 * print_rev - reverses the string
 *
 *@s: stores string
 *
 */

void print_rev(char *s)
{
	int i = 0;
	char letra;

	while (s[i] != '\0')
	{
		i++;
	}
	i = i - 1;
	while (i >= 0)
	{
		letra = s[i];
		_putchar(letra);
		i--;
	}
	_putchar('\n');

}
