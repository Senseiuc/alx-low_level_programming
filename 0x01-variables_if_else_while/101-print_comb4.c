#include <stdio.h>

/**
 * main - prints all possible combinations of single digits triple
 *
 * Description: All digits must not repeat
 * Return: 0 always (Success)
 */
int main(void)
{
	int a = 0;
	int b = 1;
	int c = 2;

	while (a < 8)
	{
		putchar(a + '0');
		putchar(b + '0');
		putchar(c + '0');
		if (a != 7)
		{
			putchar(',');
			putchar(' ');
		}
		if (b == 8)
		{
			a++;
			b = a + 1;
			c = b + 1;
		}
		else if (c == 9)
		{
			b++;
			c = b + 1;
		}
		else
		{
			c++;
		}
	}
	putchar('\n');
	return (0);
}
