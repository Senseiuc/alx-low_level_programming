#include "main.h"

/**
 * _strchr - finds a char
 *@s: an array of characters
 *@c: a character
 *
 *Description: find a character
 *
 *Return: a pointer to the memory area s
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}
	if (i != 0)
		return (NULL);
	return s;
}
