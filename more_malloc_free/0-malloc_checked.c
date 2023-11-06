#include <stdlib.h>
/**
*malloc_checked- allocate using malloc, use exits
*
*@b: number of spaces to reserve
*Return: pointer to allocated memory
*/

void *malloc_checked(unsigned int b)
{
	char *ptr;

	if (b <= 0)
		exit(98);
	ptr = malloc(sizeof(char) * b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
