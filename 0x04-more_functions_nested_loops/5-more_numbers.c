#include <stdio.h>

/**
 * more_numbers - prints all digits except 2 and 4
 *
 * Return: void
 */
void more_numbers(void)
{
	int a = 0, b = 0, c = 0;

	while (b < 10)
	{
		a = 0;
		while (a <= 14)
		{
			c = a;
			if (a > 9)
				c = 1;
			putchar(c + '0');
			if (a > 9)
				putchar((a % 10) + '0');
			a++;
		}
		putchar('\n');
		b++;
	}
}
