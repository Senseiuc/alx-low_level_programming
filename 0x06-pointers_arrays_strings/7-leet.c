#include "main.h"

/**
 *leet- encodes letters
 *@str: a string argument
 *
 *Return: char
 */

char *leet(char *str)
{
	int a = 0, b;

	char letters[] = "aeotlAEOTL";
	char code[] = "4307143071";

	while (str[a] != '\0')
	{
		b = 0;
		while (b < 10)
		{
			if (str[a] == letters[b])
				str[a] = code[b];
			b++;
		}
		a++;
	}

	return (str);
}
