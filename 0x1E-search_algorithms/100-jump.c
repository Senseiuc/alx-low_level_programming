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
	size_t a = 0, b = 0;

	if (!array)
		return (-1);
	while (array[b] < value && b < size)
	{
		printf("Value checked array[%lu] = [%d]\n", b, array[b]);
		a = b;
		b += sqrt(size);
	}

	printf("Value found between indexes [%lu] and [%lu]\n", a, b);
	printf("Value checked array[%lu] = [%d]\n", a, array[a]);	
	while (array[a] < value && a < size - 1 && a < b)
	{
		a++;
		printf("Value checked array[%lu] = [%d]\n", a, array[a]);
	}

	if (array[a] == value)
		return (a);
	return (-1);
}
