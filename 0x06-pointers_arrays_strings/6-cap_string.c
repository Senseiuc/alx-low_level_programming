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
	char sep[] = " \t\n,;.!?(){}";
	int i = 0;

	while (sep[i] != '\0')
	{
		if (sep[i] == c || c == '"')
			return (1);
		i++;
	}
	return (0);
}

/**
 * is_lower - check if it's lowercase'
 * @a: a char as argument
 *
 * Return: 1 or 0
 */

int is_lower(char a);

int is_lower(char a)
{
	if (a >= 'a' && a <= 'z')
		return (1);
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

	while (str[a] != '\0')
	{
		if (a == 0 && is_lower(str[a]) == 1)
			str[a] -= 32;
		if (is_seperator(str[a]) == 1)
		{
			if (is_lower(str[a + 1]) == 1)
				str[a + 1] -= 32;
		}
		a++;
	}
	return (str);
}
