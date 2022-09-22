#include "main.h"
/**
 * is_seperator - checks if a character is a seperator
 * @c:takes a character as arguement
 *
 * Return: 1 for true, 0 for false
 */

int is_seperator(char c);

int is_seperator(char c)
{
	char sep[] = ",;.!?\"(){} \t\n";
	int i = 0;

	while (sep[i] != '\0')
	{
		if (sep[i] == c)
			return (1);
		i++;
	}
	return (0);
}

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
		if (is_seperator(prev) == 1)
			if (str[a] >= 'a' && str[a] <= 'z')
				str[a] -= 32;
		prev = str[a];
		a++;
	}
	return (str);
}
