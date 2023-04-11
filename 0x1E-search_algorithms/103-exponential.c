#include "search_algos.h"
/**
 * binary_search2 - a function that searches for a value
 * in an array of integers using
 * the binary search algorithm
 * @array: a pointer to the array
 * @left: the left index of the array
 * @right: the right index of the array
 * @value: the value to be found
 *
 * Return: an integer
 */

int binary_search2(int *array, size_t left, size_t right, int value)
{
	size_t mid = 0;

	if (!array)
		return (-1);
	while (left < right)
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


/**
 * exponential_search - Searches for a value in a sorted array
 *  of integers using exponential search.
 * @array: A pointer to the first element of the array to search.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The index or -1 (int)
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t i = 0, right;

	if (!array)
		return (-1);

	if (array[0] != value)
	{
		for (i = 1; i < size && array[i] <= value; i = i * 2)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}

	right = i < size ? i : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", i / 2, right);
	return (binary_search2(array, i / 2, right, value));
}
