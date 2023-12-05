#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* main - program that copies the content of a file to another file
* @argc: num argument
* @argv: string argument
* Return: 0
*/

int main(int argc, char *argv[])
{
int source, dest;
int num1 = 1024, num2 = 0;
char buf[1024];

if (argc != 3)
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
source = open(argv[1], O_RDONLY); /* open source, read */
if (source == -1)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
	exit(98);
}
dest = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR
	| S_IRGRP | S_IWGRP | S_IROTH);/* create dest if it doesnt exist, open */
if (dest == -1)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
	close(source);
	exit(99);
}
while (num1 == 1024)
{
	num1 = read(source, buf, 1024);/* size of read from source */
	if (num1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	num2 = write(dest, buf, num1);/* size of write to dest */
	if (num2 < num1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
}

if (close(source) == -1)
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", source), exit(100);

if (close(dest) == -1)
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", dest), exit(100);

return (0);
}
