#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * main - entry point
 *
 * Return: devolver el 1 as fail
 *
 */
int main(void)
{	char msg[]="and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write (STDERR_FILENO, msg,59);
	
	
	return (1);
}
