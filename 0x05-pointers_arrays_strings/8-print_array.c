#include "main.h"
/**
 * print_array - second half of a string
 * @a: takes an array input
 * @n: takes an integer - array size
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int r = 0;

	while (r < n)
	{
		printf("%d", a[r]);
		if (r < n - 1)
			printf(", ");
		else
			printf("\n");
		r++;
	}
}
