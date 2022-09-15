#include <stdio.h>

/**
 * print_triangle - prints a triangle
 * @size: integer size
 *
 * Return: void
 */
void print_triangle(int size)
{
	int a = 1, b = 0, c = 0;

	while (a <= size)
	{
		b = size - a;
		c = a;
		while (b > 0)
		{
			putchar(' ');
			b--;
		}
		while (c > 0)
		{
			putchar('#');
			c--;
		}
		a++;
		putchar('\n');
	}
	if (size < 1)
		putchar('\n');
}
