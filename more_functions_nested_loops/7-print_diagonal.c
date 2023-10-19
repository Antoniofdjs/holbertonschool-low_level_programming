#include "main.h"
#include <stdio.h>
/**
*print_diagonal - Prints diagonal line on screen
*
*@n: number of diagonal lines to print
*/
void print_diagonal(int n)
{
	int x = 0, i, spc;
	int j = n - 1, k = 0;

	if (n <= 0)
	{
		_putchar('\n');
	}
	for (i = 0; i <= n; i++)/* Number of lines to makee*/
	{
		for (; j >= x; x++) /*Number of times to make white spaces before the \ */
		{
			for (; spc < k; spc++)/*loop for putting number of spaces in the line \ */
			{
				if (k == 0)
				{
				_putchar('\\');
				}
				else
					if ( k != 0)
						_putchar(' ');
			}
				_putchar('\\');
				_putchar('\n');
				spc = 0;/* Resets counts of white spaces */
				k++;/* Increases limit of white spc in a line*/
		}


	}
	
}
