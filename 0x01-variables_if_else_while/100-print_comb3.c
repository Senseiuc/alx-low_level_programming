#include <stdio.h>

/**
 * main - prints all possible combinations of single digits double
 *
 * Description: All digits must not repeat
 * Return: 0 always (Success)
 */
int main(void)
{
	int a = 0;
	int b = 1;

	while (a < 9)
	{
		putchar(a + '0');
		putchar(b + '0');
		if (a != 8)
		{
			putchar(',');
			putchar(' ');
		}
		if (b == 9)
		{
			a++;
			b = a + 1;
		}
		else
		{
			b++;
		}
	}
	putchar('\n');
	return (0);
}
