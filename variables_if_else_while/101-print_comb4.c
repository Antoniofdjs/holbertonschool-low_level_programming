#include <stdio.h>
/**
 * main- Prints all combinations of 3 digits with 0-9
 *
 *
 *Return: devolver 0
 *
*/
int main(void)
{
	int num = 0, num2;
	int j = 0;

	for (j = 0; j <= 7; j++)
	{
	for (num = j + 1; num <= 8; num++)
	{
		for (num2 = num + 1; num2 <= 9; num2++)
		{
			putchar('0' + j);
			putchar ('0' + num);
			putchar('0' + num2);
			if (j != 7 || num != 8 || num != 9)
			{
			putchar(',');
			putchar(' ');
			}
		}
	}
	}
	putchar('\n');
	return (0);
}


