#include "main.h"

/**
 * _memcpy - copy using pointers
 *@dest: an array of characters
 *@src: a character
 *@n: an unsigned integer
 *
 *Description: copy n characters
 *
 *Return: a pointer to the memory area dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
