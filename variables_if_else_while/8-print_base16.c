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
	char letra = '0';
	int i = 0;

	while (i < 10)
	{
		putchar (letra);
		letra++;
		i++;
	}
	letra = 'a';
	i = 0;
	while (i < 6)
	{
		putchar (letra);
		letra++;
		i++;
	}
	putchar ('\n');
	return (0);
}
