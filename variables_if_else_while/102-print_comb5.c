#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
int i, j, k;

for (i = 0; i <= 9; i++)
{
	for (j = 0; j <= 9; j++)
	{
		for (k = 0; k <= 9; k++)
		{
			if (i * 10 + j < k)
			{
				putchar('0' + i);
				putchar('0' + j);
				putchar(' ');
				putchar('0' + k);
				if (!(i == 9 && j == 8 && k == 9))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
}
putchar('\n');
return (0);
}
