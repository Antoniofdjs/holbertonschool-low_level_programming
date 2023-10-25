#include "main.h"
/**
*_memcpy - Fills with a certain type and constant byte b till n bytes
*
*@src: pointer string
*@dest: pointer string destination
*@n: n bytes from memory
*Return: dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
