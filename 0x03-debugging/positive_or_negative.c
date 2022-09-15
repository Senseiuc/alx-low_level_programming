#include "main.h"
/**
 * main - prints random numbers
 *
 * Return: Always 0 (Success)
 */
void positive_or_negative(int i)
{
	if (i == 0)
		printf("%d is zero\n", i);
	else
		i > 0 ? printf("%d is positive\n", i) : printf("%d is negative\n", i);
}
