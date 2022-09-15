#include <stdio.h>

/**
 * print_diagonal - prints diagonal
 * @n: integer n
 *
 * Return: void
 */
void print_diagonal(int n)
{

	int w = 0, x = 0;

	while (x < n)
	{
		w = x;
		while (w > 0)
		{
			putchar(' ');
			w--;
		}
		putchar('\\');
		putchar('\n');
		x++;
	}
	if (n < 1)
		putchar('\n');
}
