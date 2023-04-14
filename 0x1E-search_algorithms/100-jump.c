#include "search_algos.h"
#include <math.h>
/**
 * jump_search - a function that searches for a value
 * in an array of integers using
 * the jump search algorithm
 * @array: a pointer to the array
 * @size: the size of the array
 * @value: the value to be found
 *
 * Return: an integer
 */

int jump_search(int *array, size_t size, int value)
{
	size_t b = 0, a = sqrt(size);

	if (!array)
		return (-1);
	while (array[b] < value && b < size)
	{
		printf("Value checked array[%lu] = [%d]\n", b, array[b]);
		b += a;
	}
	b -= a;
	printf("Value found between indexes [%lu] and [%lu]\n", b, b + a);
	printf("Value checked array[%lu] = [%d]\n", b, array[b]);
	while (array[b] < value && b < size - 1 && b < b + a)
	{
		b++;
		printf("Value checked array[%lu] = [%d]\n", b, array[b]);
	}

	if (array[b] == value)
		return (b);
	return (-1);
}
