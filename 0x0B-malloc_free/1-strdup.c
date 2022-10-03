#include "main.h"
#include <stdlib.h>
/**
  *_strdup - create a copy of string using malloc
  *@str: the string to be copied
  *
  *Return: the address of the memory or null
  */

char *_strdup(char *str)
{
	char *arr;
	int j = 0;

	if (str == NULL)
		return (NULL);
	while (str[j] != '\0')
		j++;
	arr = (char *) malloc((j + 1) * sizeof(char));
	if (arr != NULL)
	{
		while (j >= 0)
		{
			arr[j] = str[j];
			j--;
		}
		return (arr);
	}
	return (NULL);
}
