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
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		arr[i] = (int *)malloc(width * sizeof(int));

		if (arr[i] == NULL || arr == NULL)
		{
			j = i;
			while (j - 1 >= 0)
			{
				free(arr[j - 1]);
				j--;
			}
			free(arr);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			arr[i][j] = 0;
	}
	return (arr);
}
