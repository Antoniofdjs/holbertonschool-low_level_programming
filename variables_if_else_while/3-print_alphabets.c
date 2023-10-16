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
	char Letra = 'A';
	char letra = 'a';
	int i = 0;

	while (i < 26)
	{
		putchar (letra);
		letra++;
		i++;
	}
	i = 0;
	while (i < 26)
	{
		putchar (Letra);
		Letra++;
		i++;
	}
	putchar ('\n');
	return (0);
}
