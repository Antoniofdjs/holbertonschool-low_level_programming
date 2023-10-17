#include <stdio.h>
#include <unistd.h>
/**
 *main - Entry point
 *
 *Return: 0
 */
int main(void)

{
	char letra = 'a';

	for(letra = 'a'; letra <= 'z'; letra++)
	{
		putchar(letra);
	}
	putchar('\n');
return (0);
}
