#include <stdio.h>

/**
 * print_square - prints diagonal
 * @n: integer n
 *
 * Return: void
 */
void print_square(int n)
{
	int a = 0, b = 0;

	while (a < n)
	{
		b = 0;
		while (b < n)
		{
			putchar('#');
			b++;
		}
		putchar('\n');
		a++;
	}
	if (a < 1)
		putchar('\n');
}
