#include "main.h"
#include <stdlib.h>

/**
  *_calloc - create a memory and fill it with 0
  *@nmemb: the number of arrays
  *@size: the size of the  
  *
  *Return: the address of the memory or null
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	unsigned int i;

	if (nmemb < 1 || size < 1)
		return (NULL);
	arr = malloc(nmemb * size);
	if (arr != NULL)
	{
		for (i = 0; i < nmemb; i++)
			arr[i] = 0;
		return (arr);
	}
	return (NULL);
}
