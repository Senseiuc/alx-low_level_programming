#include "main.h"
#include <stdlib.h>
/**
  *create_array - create an array in dynamic memory
  *@size:the size of the array to be created
  *@c: the character to fill the array
  *
  *Return: the address of the memory or null
  */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int j = 0;

	if (size < 1)
		return (NULL);

	arr = (char *) malloc(size * sizeof(char));
	if (arr != NULL)
	{
		while (j < size)
		{
			arr[j] = c;
			j++;
		}
		return (arr);
	}
	return (NULL);
}
