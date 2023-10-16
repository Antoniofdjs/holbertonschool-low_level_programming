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

	for (num = 0; num <= 9; num++)
	{
		putchar('0' + num);
		if (num == 9)
			continue;

		putchar(',');
		putchar(' ');


}
	putchar('\n');
	return (0);
}
