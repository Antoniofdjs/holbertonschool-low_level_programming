#include "main.h"
/**
 * append_text_to_file - append text at the end of a file
 * @filename: name of the file
 * @text_content:  is a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int letters = 0, fd;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL) /* simply no append will happen */
		return (1);

	while (text_content[letters] != '\0') /* how many chars */
	{
		letters++;
	}

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	write(fd, text_content, letters);

	return (1);
}
