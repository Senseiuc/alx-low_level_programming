#include "main.h"
#include <stdlib.h>

/**
  *array_range - create a memory and fill it with a range of numbers
  *@min: the minimum num in the array
  *@max: the maximum num in the array 
  *
  *Return: the address of the memory or null
  */

int *array_range(int min, int max)
{
	int *arr;
	int i,j = 0;
	int size;

	if (min > max)
		return (NULL);
	size = (max - min) + 1;
	arr = malloc(size * sizeof(arr));
	if (arr != NULL)
	{
		for (i = min; i <= max; i++)
		{
			arr[j] = i;
			j++;
		}
		return (arr);
	}
	return (NULL);
}
