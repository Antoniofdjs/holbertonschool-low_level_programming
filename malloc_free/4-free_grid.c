#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 *free_grid- fuction to free incoming array from malloc
 *
 *@grid: ptr of array 2d from malloc
 *@height: size of dimension 2
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
