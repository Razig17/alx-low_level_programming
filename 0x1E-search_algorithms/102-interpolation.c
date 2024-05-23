#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a sorted array of integers
 * using the Interpolation search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: index where value is located or -1 if value is not present
 */
int interpolation_search(int *array, size_t size, int value)
{
	if (!array || size == 0)
		return (-1);
	return (interpolation_helper(array, 0, size - 1, value));
}

/**
 * interpolation_helper - Helper function to perform interpolation search
 * @array: pointer to the first element of the array to search in
 * @low: the starting index in the array to search from
 * @high: the ending index in the array to search to
 * @value: the value to search for
 *
 *
 * Return: index where value is located or -1 if value is not present
 */
int interpolation_helper(int *array, size_t low, size_t high, int value)
{
	size_t pos;

	if (low > high || value < array[low])
		return (-1);
	pos = low + (((double)(high - low) / (array[high] - array[low]))
	* (value - array[low]));
	if (pos > high)
	{
		printf("Value checked array[%lu] is out of range\n", pos);
		return (-1);
	}
	else if (array[pos] == value)
	{
		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
		return (pos);
	}
	else if (array[pos] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
		return (interpolation_helper(array, pos + 1, high, value));
	}
	else
	{
		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
		return (interpolation_helper(array, low, pos - 1, value));
	}
	return (-1);
}
