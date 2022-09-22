#include "main.h"
/**
 * string_toupper - coverts strings to uppercase
 * @str: a string
 *
 * Return: char
 */

char *string_toupper(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		if (str[a] >= 'a' && str[a] <= 'z')
			str[a] -= 32;
		a++;
	}
	return (str);
}
