#include "main.h"
#include <stdlib.h>

int get_string_count(char *str);
char *concat_string(char *str, char *str2, int a, int b);
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
 *concat_string - create a copy of string using malloc
 *@str: the string to be added to
 *@str2: the string to be added
 *@a: length of str
 *@b: length of str2
 *
 *Return: the address of the memory or null
 */

char *concat_string(char *str, char *str2, int a, int b)
{
	char *arr;
	int j = 0;

	arr = (char *) malloc((a + b + 1) * sizeof(char));

	if (arr != NULL)
	{
		while (str[j] != '\0')
		{
			arr[j] = str[j];
			j++;
		}
		while (j < (a + b))
		{
			arr[j] = str2[j - a];
			 j++;
		}
		return (arr);
	}
	return (NULL);
}

/**
  *str_concat - concatenate two strings
  *@s1: the string to be added to
  *@s2: the string to be added
  *
  *Return: the address of the memory or null
  */

char *str_concat(char *s1, char *s2)
{
	char *arr, *a = "";
	int j = 0;
	int k = 0;

	if (s1 == NULL && s2 == NULL)
	{
		arr = (char *) malloc(sizeof(char));
		arr[0] = '\0';
		return (arr);
	}
	else if (s1 == NULL)
	{
		j = get_string_count(s2);
		return (concat_string(a, s2, 0, j));
	}
	else if (s2 == NULL)
	{
		j = get_string_count(s1);
		return (concat_string(a, s1, 0, j));
	}
	else
	{
		j = get_string_count(s1);
		k = get_string_count(s2);
		return (concat_string(s1, s2, j, k));
	}
	return (NULL);
}
