#include "main.h"
/**
 *times_table- Prints a multiplication table
 */
void times_table(void)
{
int row, col, r;

for (row = 0; row < 10; row++)
{
	for (col = 0; col < 10; col++)
	{
		r = row * col;
		_putchar('0' + (r / 10));
		_putchar('0' + (r % 10));
		if (col != 9)
		{
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
		}
	}
	_putchar('\n');
	}
}
