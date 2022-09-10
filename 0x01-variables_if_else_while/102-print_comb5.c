#include <stdio.h>

/**
 * main - prints all possible combinations of single digits triple
 *
 * Description: All digits must not repeat
 * Return: 0 always (Success)
 */
int main(void)
{
	int a = 0, b = 0, c = 0, d = 1;

	while (a < 10 && b < 10 && c < 10 && d < 10)
	{
		putchar(a + '0');
		putchar(b + '0');
		putchar(' ');
		putchar(c + '0');
		putchar(d + '0');
		if (!(a == 9 && b == 8 && c == 9 && d == 9))
		{
			putchar(',');
			putchar(' ');
		}
		if (c == 9 && d == 9)
		{
			b++;
			if ((b % 10) == 0)
			{
				a++, b = 0, c = a, d = b + 1;
			}
			else
			{
				if (((b + 1) % 10) == 0)
					c = a + 1, d = 0;
				else
					c = a, d = b + 1;
			}

		}
		else if (d == 9)
			c++, d = 0;
		else
			d++;
	}
	putchar('\n');
	return (0);
}
