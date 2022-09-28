#include "main.h"

/**
 * factorial - calculates the factorial of a number
 *@n: takes an integer
 *
 * Return: int
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n < 2)
		return (1);

	return (n * factorial(n - 1));
}
