#include "main.h"
/**
 * create_file - function that creates a file
 * @filename: name of file to create or may exist
 * @text_content:  is a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;/* field descriptor */
	int letters = 0;
	int my_write;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	while (text_content[letters] != '\0')
		letters++; /* char count */

	my_write = write(fd, text_content, letters); /*store int from write, also write into fd */

	if (my_write == -1)
		return (-1);

	close(fd);

	return (1);
}
