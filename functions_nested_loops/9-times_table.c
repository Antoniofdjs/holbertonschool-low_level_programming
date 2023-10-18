#include "main.h"

/**
 * times_table - Prints multiplciation table up to 9
 *
 * Return: Nothing.
 */
void times_table(void)
{
	int row, col, n;

	for (row = 0; row <= 9; row++)
	{
		for (col = 0; col <= 9; col++)
		{
			n = row * col;

			if ((n / 10) == 0)
			{
				if (col != 0)
					_putchar(' ');
				_putchar(n + '0');

				if (col == 9)
					continue;
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
				if (col == 9)
					continue;
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
