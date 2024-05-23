#include <math.h>
#include <stdio.h>
#include "search_algos.h"
/**
 * jump_search - searches for a value in a sorted array of integers
 * using the Jump search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: index where value is located or -1 if value is not present
 */
int jump_search(int *array, size_t size, int value)
{
	size_t jump, i = 0, j = 0;

	if (!array || size == 0)
		return (-1);
	jump = sqrt(size);
	while (array[j] < value && j < size)
	{
		printf("Value checked array[%lu] = [%d]\n", j, array[j]);

		i = j;
		j += jump;
		if (array[i] == value)
			return (i);
	}

	printf("Value found between indexes [%lu] and [%lu]\n", i, j);

	if (j >= size)
		j = size - 1;
	while (i <= j)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			return (-1);
		i++;
	}

	return (-1);
}
