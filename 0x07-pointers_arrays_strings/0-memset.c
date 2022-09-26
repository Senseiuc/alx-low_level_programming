#include "main.h"

/**
 * _memset - prints the buffer
 *@s: an array of characters
 *@b: a character
 *@n: an unsigned integer
 *
 *Description: replace characters for n values
 *
 *Return: a pointerto the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
