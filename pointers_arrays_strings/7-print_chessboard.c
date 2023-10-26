#include "main.h"
/**
 *print_chessboard- Prints board for chess game
 *
 *@a: stores board array
 */

void print_chessboard(char (*a)[8])
{
	char letra;
	int i, j;

	for (i = 0; i <= 7; i++)
	{
		for (j = 0; j <= 7; j++)
		{
			letra = a[i][j];
			_putchar(letra);
		}
		_putchar('\n');
	}
}
