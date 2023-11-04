#include <stdlib.h>
/**
*create_array- create char array, and init it with a specific char.
*
*@size: size of array to make(int)
*@c: char to initialize array
*Return: ptr of array from malloc
*/
char *create_array(unsigned int size, char c)
{
	char *ptr = (char *)malloc(size * sizeof(char));
	unsigned int i;

	if (ptr == NULL) || (size == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
