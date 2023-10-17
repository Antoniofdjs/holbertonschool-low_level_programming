#include <stdio.h>
/**
 * main- funcion del main entry
 *
 *
 *Return: devolver 0
 *
*/
int main(void)
{
	int num = 0;
	int j = 0;
	int i = 0;

	for (j = 0; j <= 9; j++)
	{
	for (i = j + 1 ; i <= 9; i++)
	{
	for (num = i + 1; num <= 9; num++)
	{
		putchar ('0' + j);
		putchar ('0' + num);
		putchar ('0' + i);
		if (j != 8 || num != 9)
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


