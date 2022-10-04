#include "main.h"
#include <stdlib.h>


/**
  *free_grid - frees a two dimensional array
  *@grid: the 2-D array to be freed
  *@height: the heigth of the array
  *
  *Return: the address of the array created
  */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
