#include "main.h"
/**
 * reverse_array - reverses an array of integers
 * @a: an array of integers
 * @n: an integer rep the number of int in the array
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int k = 0, temp;

	while (k < (n / 2))
	{
		temp = a[k];
		a[k] = a[n - 1 - k];
		a[n - 1 - k] = temp;
		k++;
	}
}
