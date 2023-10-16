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
	char letra = 'a';
	int i = 0;

	while (i < 26)
	{
		putchar (letra);
		letra++;
		i++;
	}
	putchar ('\n');
	return (0);
}
