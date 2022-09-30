#include "main.h"

/**
 * _strspn - finds substring
 *@s: an array of characters
 *@accept: a string of char
 *
 *Description: find substring
 *
 *Return: an unsigned integer
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j, k = 0, x = 0;

	while (s[i] != '\0')
	{
		j = 0;
		x = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				k++;
				x++;
			}
			j++;
		}
		if (x == 0)
			return (k);
		i++;
	}
	return (k);
}
