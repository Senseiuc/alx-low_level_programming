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
  *strtow - split a string into multiple strings
  *@str: the string to be split
  *
  *Return: the address of the memory of the new array or null
  */

char **strtow(char *str)
{
	char **newArray;
	int j, k = 0, found = 0, l, m, wc = 0, length = get_string_count(str);

	if (str[0] == '\0' || str == NULL)
	{
		return (NULL);
	}
	for (j = 0; j <= length; j++)/* calculate the number of words*/
	{                      /* in the string given*/
		if ((str[j] == ' ' || str[j] == '\0') && found == 1)
		{
			k++;
			found = 0;
		}
		else if (str[j] != ' ' && str[j] != '\0')
			found = 1;
		else
			found = 0;
	}
	newArray = (char **) malloc((k + 1) * sizeof(char *));
	if (newArray == NULL || k == 0)
		return (NULL);
	k = 0; /* for iterating the array of pointers*/
	found = 0;
	for (j = 0; j <= length; j++) /* iterate through the string to create*/
	{                            /* arrays of strings seperated by space*/
		if (str[j] != ' ' && str[j] != '\0')
		{
			found = 1;
			wc++;
		}
		else if ((str[j] == ' ' || str[j] == '\0') && found == 1)
		{
			newArray[k] = (char *)malloc((wc + 1) * sizeof(char));
			l = 0;
			m = j - wc;
			while (m < j)
			{
				newArray[k][l] = str[m];
				l++;
				m++;
			}
			newArray[k][wc] = '\0';
			found = 0;
			wc = 0;
			k++;
		}
		else
		{
			found = 0;
			wc = 0;
		}

	}
	newArray[k] = NULL;
	return (newArray);
}
