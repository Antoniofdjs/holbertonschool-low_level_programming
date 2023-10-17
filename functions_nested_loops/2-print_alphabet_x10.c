#include "main.h"

/**
 *print_alphabet_x10 - Print the alphabet 10x times
 *
 */
void print_alphabet_x10(void)
{
	char letra = 'a';
	int i = 0;

	for (i = 0; i <= 9; i++)
	{
	for (letra = 'a'; letra <= 'z'; letra++)
	{
		_putchar(letra);
	}
	_putchar('\n');
	}
}
