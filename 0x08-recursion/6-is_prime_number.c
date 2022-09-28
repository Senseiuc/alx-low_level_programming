#include "main.h"

/**
 * is_a_prime - returns if a number is prime
 *@n: the int arguement
 *@w:a counter variable
 *
 * Return: int
 */

int is_a_prime(int n, int w);

int is_a_prime(int n, int w)
{
	if (w == 1)
		return (1);
	if (n % w == 0)
		return (0);
	return (is_a_prime(n, w - 1));
}

/**
 * is_prime_number - checks if a number is prime
 *@n: the int arguement
 *
 * Return: int
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_a_prime(n, n / 2));
}
