#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 *argstostr- fuction to concat all arguments of program
 *
 *@ac: argc count
 *@av: argv [i][j]
 *Return: ptr
 */
char *argstostr(int ac, char **av)
{
	char *ptr;
	int size = 0;
	int ntotal = ac;
	unsigned int j = 0;
	int k = 0, i = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
		size = size + strlen(av[i]);/*space for strings in arguments*/
	ptr = malloc(size + ntotal + 1);
	if (ptr == NULL)
		return (NULL);
	for (k = 0; k < ac; k++)
	{
		for (j = 0; j < strlen(av[k]); j++)
		{	if(av[k][j] != '\0')
				ptr[i] = av[k][j];
			i++;
		}
		ptr[i] = '\n';
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
