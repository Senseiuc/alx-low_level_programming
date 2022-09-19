#include "main.h"
/**
 * rev_string - reverses a string
 * @s: takes a string as input
 *
 * Return: void
 */

void rev_string(char *s)
{
	int len = 0, j, k;
	char temp;

	while (s[len] != '\0')
	{
		len++;
	}

	j = len - 1;
	k = 0;
	while (j + k == len - 1 && j != k)
	{
		temp = s[j];
		s[j] = s[k];
		s[k] = temp;
		j--;
		k++;
	}

}
