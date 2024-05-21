#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array of integers
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
int binary_search(int *array, size_t size, int value)
{
	size_t i = value, left = 0, right = size - 1, med = size / 2;

	if (array == NULL)
		return (-1);

	i = med;
	while (left <= right)
	{
		med = (right + left) / 2;
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%i, ", array[i]);
		printf("%i\n", array[i]);
		if (array[med] > value)
			right = med - 1;
		else if (array[med] < value)
			left = med + 1;
		else
			return (med);
	}
	return (-1);
}
