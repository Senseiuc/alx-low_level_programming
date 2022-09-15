#include <stdio.h>

/**
 * print_numbers - prints all digits
 *
 * Return: void
 */
void print_numbers(void)
{
	int a = 0;

	while (a < 10)
	{
		putchar(a + '0');
		a++;
	}
	putchar('\n');
}
