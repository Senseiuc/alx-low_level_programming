#include "main.h"
/**
 * puts_half - second half of a string
 * @s: takes a string as input
 *
 * Return: void
 */

void puts_half(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	len = len % 2 == 0 ? len / 2 : (len - 1) / 2;
	while (s[len] != '\0')
	{
		_putchar(s[len]);
		len++;
	}
	_putchar('\n');
}
