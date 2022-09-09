#include <stdio.h>

/**
 * main - prints all alphabets in reverse
 *
 * Return: 0 always (Success)
 */
int main(void)
{
	char c;

	c = 'z';
	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
