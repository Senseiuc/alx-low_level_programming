#include "main.h"

/**
 * _strcmp - compares one string to another
 * @s1: a string arg
 * @s2: a string arg
 *
 * Return: int
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		else
			i++;
	}
	if (s1[i] == '\0' && s2[i] != '\0')
		return (0 - s2[i]);
	else if (s1[i] != '\0' && s2[i] == '\0')
		return (s1[i] - 0);
	return (0);
}
