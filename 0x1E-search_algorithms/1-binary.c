#include "search_algos.h"
/**
 * binary_search - a function that searches for a value
 * in an array of integers using
 * the binary search algorithm
 * @array: a pointer to the array
 * @size: the size of the array
 * @value: the value to be found
 *
 * Return: an integer
 */

int binary_search(int *array, size_t size, int value)
{
	size_t mid = 0, left = 0, right = size - 1;

	if (!array)
		return (-1);
	while (left <= right)
	{
		print_array(array, left, right);
		mid = (left + right) / 2;
		if (array[mid] == value)
			return (mid);
		else if (array[mid] > value)
			right = mid - 1;
		else
			left = mid + 1;
	}

	return (-1);
}

/**
 * print_array - prints array
 * @array: array to be printed
 * @left: left index of original array
 * @right: right index of original array
 *
 * Return: Void
 */
void print_array(int *array, size_t left, size_t right)
{
	size_t i = left;

	printf("Searching in array: ");
	while (i < right)
	{
		printf("%d, ", array[i]);
		i++;
	}
	printf("%d\n", array[i]);
}

