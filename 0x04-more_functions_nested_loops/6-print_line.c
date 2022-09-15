#include <stdio.h>

/**
 * print_line - prints a straight line
 * @n: integer n
 *
 * Return: void
 */
void print_line(int n)
{

	while (n > 0)
	{
		putchar('_');
		n--;
	}
	putchar('\n');
}
