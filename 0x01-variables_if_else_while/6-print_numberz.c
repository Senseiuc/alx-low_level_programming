#include <stdio.h>

/**
 * main - prints all digits
 *
 * Return: 0 always (Success)
 */
int main(void)
{
	int a = 0;

	while (a < 10)
	{
		putchar(a + '0');
		a++;
	}
	putchar('\n');
	return (0);
}
