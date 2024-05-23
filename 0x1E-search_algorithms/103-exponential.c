#include "search_algos.h"
#include <math.h>

/**
 * exponential_search - searches for a value in a sorted array of integers
 * using the Exponential search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: index where value is located or -1 if value is not present
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t high = 1, i = 0, j = 0;
	int k;

	if (!array || size == 0)
		return (-1);
	while (high < size && array[high] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", high, array[high]);
		high *= 2;
	}
	i = high / 2;
	if (high < size)
		j = high;
	else
		j = size - 1;

	printf("Value found between indexes [%lu] and [%lu]\n", i, j);
	k = binary_search(array + i, j - i + 1, value);
	if (k != -1)
		return (k + i);
	return (-1);
}

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
