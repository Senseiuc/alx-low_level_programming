#include "main.h"
/**
 * _strcpy - second half of a string
 * @dest: takes an array input
 * @src: takes an array of char
 *
 * Return: char
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}
