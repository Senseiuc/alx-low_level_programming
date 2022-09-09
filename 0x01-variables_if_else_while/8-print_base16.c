#include <stdio.h>

/**
 * main - prints all digits
 *
 * Return: 0 always (Success)
 */
int main(void)
{
	int a = 0;
	char c;

	c = 'a';
	while (a < 16)
	{
		if (a < 10)
			putchar(a + '0');
		else
			putchar(c + (a % 10));
		a++;
	}
	putchar('\n');
	return (0);
}
