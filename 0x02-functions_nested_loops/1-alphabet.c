#include "main.h"

/**
 * print_alphabeth - prints all alphabets
 *
 * Description: a function that prints alphabets,
 * and do not return anythig
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
