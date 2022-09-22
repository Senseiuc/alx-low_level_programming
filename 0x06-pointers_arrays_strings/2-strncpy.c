#include "main.h"

/**
 * _strncpy - copy one string into another
 * @dest: a string arg
 * @src: a string arg
 * @n: an integer rep byte
 *
 * Return: char
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
