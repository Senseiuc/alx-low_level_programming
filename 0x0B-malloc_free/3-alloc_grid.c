#include "main.h"
#include <stdlib.h>


/**
  *alloc_grid - creates a two dimensional array
  *@width: the width of the array
  *@height: the heigth of the array
  *
  *Return: the address of the array created
  */

int **alloc_grid(int width, int height)
{
	int **arr;
	int i, j;

	if (width < 1 || height < 1)
	{
		return (NULL);
	}

	arr = (int **) malloc(height * sizeof(int *));
	for (i = 0; i < height; i++)
		arr[i] = (int *)malloc(width * sizeof(int));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			arr[i][j] = 0;
	}
	return (arr);
}
