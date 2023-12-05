#include "main.h"
/**
 * read_textfile - function that reads text file and
 * prints it to the POSIX STDIO.
 * @filename: file name
 * @letters:Number of letters is should read and print
 * Return:actual number of letters it could read or print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t my_open, my_read;
	char *ptr;

	ptr = malloc(letters + 1);/* Making space for the content */

	if (ptr == NULL)
	{
		return (0);
	}

	if (filename == NULL)
	{
		return (0);
	}


	my_open = open(filename, O_RDONLY); /* open file and save it */

	if (my_open == -1)
	{
		free(ptr);
		return (0);
	}
	my_read = read(my_open, ptr, letters); /* save my read */

	ptr[letters] = '\0';

	write(STDOUT_FILENO, ptr, my_read); /* write to std out */

	close(my_open); /* close file before ending */
	free(ptr);

	return (my_read);
}
