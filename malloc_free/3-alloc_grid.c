#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 *alloc_grid- fuction so store 2d array in pointer
 *
 *@width: size of dimension 1
 *@height: size of dimension 2
 *Return: pointer to 2d array
 */
int **alloc_grid(int width, int height)
{
	int **ptr;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	ptr = (int **)malloc(width * sizeof(int *));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < width; i++)
	{
	ptr[i] = (int *)malloc(height * sizeof(int));
	if (ptr[i] == NULL)
	{
		for (j = 0; j < i; j++)
		{
			free(ptr[j]);
		}

		free(ptr);
		return (NULL);
	}
	}
	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
			ptr[i][j] = 0;
	}
	return (ptr);
}
