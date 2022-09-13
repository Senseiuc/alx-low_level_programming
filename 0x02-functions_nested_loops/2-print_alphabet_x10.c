#include "main.h"

/**
 * print_alphabet_x10 - prints all alphabets
 *
 * Description: 'a function that prints alphabets,
 * and do not return anythig'
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	char c = 'a';
	int i = 0;

	while (i < 10)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		i++;
	}
}
