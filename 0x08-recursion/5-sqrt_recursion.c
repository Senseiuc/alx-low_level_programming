#include "main.h"

/**
 * _find_root - returns the natural square root of a number.
 *@n: the int arguement
 *@w:a counter variable
 *
 * Return: int
 */

int _find_root(int n, int w);

int _find_root(int n, int w)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (w);
	return (_find_root((n - ((2 * w) + 1)), w + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 *@n: the int arguement
 *
 * Return: int
 */

int _sqrt_recursion(int n)
{
	return (_find_root(n, 0));
}
