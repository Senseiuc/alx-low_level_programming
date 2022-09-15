#include <stdio.h>

/**
 * print_most_numbers - prints all digits except 2 and 4
 *
 * Return: void
 */
void print_most_numbers(void)
{
	int a = 0;

	while (a < 10)
	{
		if (a != 2 && a != 4)
			putchar(a + '0');
		a++;
	}
	putchar('\n');
}
