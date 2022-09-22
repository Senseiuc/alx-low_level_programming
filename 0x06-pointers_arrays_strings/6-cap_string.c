#include "main.h"
/**
 * cap_string - coverts strings to uppercase
 * @str: a string
 *
 * Return: char
 */

char *cap_string(char *str)
{
	int a = 0;
	char prev = '1';

	while (str[a] != '\0')
	{
		if (!((prev  >= 'a' && prev <= 'z') || (prev >= 'A' && prev <= 'Z')))
			if (str[a] >= 'a' && str[a] <= 'z')
				str[a] -= 32;
		prev = str[a];
		a++;
	}
	return (str);
}
