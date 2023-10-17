#include "main.h"
#include <stdio.h>
/**
 *print_alphabet - Print the alphabet
 *
 */
void print_alphabet(void)
{
	char letra = 'a';

	for (letra = 'a'; letra <= 'z'; letra++)
		_putchar(letra);
	_putchar('\n');
}
