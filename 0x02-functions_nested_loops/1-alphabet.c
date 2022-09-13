#include "main.h"

/**
 * print_alphabet - prints all alphabets
 *
 * Description: 'a function that prints alphabets,
 * and do not return anythig'
 *
 * Return: void
 */

void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
