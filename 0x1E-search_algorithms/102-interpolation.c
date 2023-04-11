#include "search_algos.h"
/**
 * interpolation_search - An algorithm that searches  a list
 * to get a value using interpolation
 * @array: given array of ints
 * @size: size of array
 * @value: value to be searched for
 *
 * Return: index (int)
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, pos;

	if (array == NULL)
		return (-1);
	pos = low + (((double)(high - low) / (array[high] - array[low]))
			* (value - array[low]));
	while (pos < size)
	{
		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		else if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
		pos = low + (((double)(high - low) / (array[high] - array[low]))
				* (value - array[low]));
	}
	printf("Value checked array[%lu] is out of range\n", pos);
	return (-1);
}
