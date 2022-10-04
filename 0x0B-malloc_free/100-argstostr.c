#include "main.h"
#include <stdlib.h>

int get_string_count(char *str);
/**
 *get_string_count - gets the length of a string
 *@str: the string to be counted
 *
 *Return: the address of the memory or null
 */

int get_string_count(char *str)
{
	int j = 0;

	while (str[j] != '\0')
		j++;
	return (j);
}

/**
  *argstostr - concatenate multiple strings with newline
  *@ac: the number of arguments
  *@av: an array of arguments
  *
  *Return: the address of the memory of the new string or null
  */

char *argstostr(int ac, char **av)
{
	char *newArray;
	int j, k, w = 0, length = 0;

	if (ac < 1 || av == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < ac; j++)
	{
		length += get_string_count(av[j]);
	}
	newArray = (char *) malloc((length * sizeof(char)) + ac + 1);
	for (j = 0; j < ac; j++)
	{
		k = 0;
		while (av[j][k] != '\0')
		{
			newArray[w] = av[j][k];
			k++;
			w++;
		}
		newArray[w] = '\n';
		w++;
	}
	return (newArray);
}
