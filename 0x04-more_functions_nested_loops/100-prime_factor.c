#include <stdio.h>

/**
 * main - prints prime numbers
 *
 * Return: 0
 */
int main(void)
{
	unsigned long int a = 612852475143;
	int l_p_f = 2, i = 2;

	while (a != 1)
	{
		while (a % i == 0)
		{
			a = a / i;
			l_p_f = i;
		}
		i++;
	}
	printf("%d\n", l_p_f);
	return (0);
}
