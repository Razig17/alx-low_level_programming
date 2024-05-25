#include "search_algos.h"

/**
 * advanced_binary - Searches for a value in a sorted array of integers
 *                 using the Binary search algorithm.
 *
 * @array: A pointer to the first element of the array to search in.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The index where value is located.
 *         If value is not present in array or if array is NULL, the function
 *         returns -1.
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);

	return (advanced_helper(array, 0, size - 1, value, -1));
}

/**
 * advanced_helper - Helper function to perform advanced binary search
 * @array: pointer to the first element of the array to search in
 * @left: the starting index in the array to search from
 * @right: the ending index in the array to search to
 * @value: the value to search for
 * @found: the index of the value it is found
 *
 * Return: The index where value is  frist located.
 *         If value is not present in array or if array is NULL, the function
 *         returns -1
 */
int advanced_helper(int *array, size_t left, size_t right, int value,
		    int found)
{
	size_t i, med = (right + left) / 2;

	if (left > right)
	{
		if (found == -1)
			return (-1);
		return (found);
	}
	if (array[med] == value)
		found = med;
	printf("Searching in array: ");
	for (i = left; i < right; i++)
		printf("%i, ", array[i]);
	printf("%i\n", array[i]);
	if (array[med] > value)
		return (advanced_helper(array, left, med - 1, value, found));
	else if (array[med] < value)
		return (advanced_helper(array, med + 1, right, value, found));

	else if (array[med - 1] == value)
		return (advanced_helper(array, left, med, value, found));
	return (med);
}
