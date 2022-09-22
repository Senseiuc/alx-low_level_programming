#include "main.h"

/**
 *rot13 - encodes letters
 *@str: a string argument
 *
 *Return: char
 */

char *rot13(char *str)
{
	int a = 0, b;

	char letters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char code[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (str[a] != '\0')
	{
		b = 0;
		while (b < 52)
		{
			if (str[a] == letters[b])
			{
				str[a] = code[b];
				break;
			}
			b++;
		}
		a++;
	}

	return (str);
}
