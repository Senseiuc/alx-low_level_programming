#include <stdio.h>

/**
 * main - fizzbuzz
 *
 * Description: prints fizz for %3 buzz for %5
 * and fizzbuzz for both
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);
		printf(" ");
		i++;
	}
	printf("\n");
	return (0);
}

