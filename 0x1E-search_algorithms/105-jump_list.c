#include "search_algos.h"
#include <math.h>

/**
 * jump_list - Searches for a value in a sorted list of integers using the
 *             Jump search algorithm.
 *
 * @list: Pointer to the head of the list to search in.
 * @size: Number of nodes in list.
 * @value: Value to search for.
 *
 * Return: A pointer to the first node where value is located, or NULL if value
 *         is not present in list or if head is NULL.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t jump, i;
	listint_t *current, *prev;

	if (list == NULL || size == 0)
		return (NULL);

	jump = sqrt(size);
	current = list;
	while (current->n < value)
	{
		prev = current;
		for (i = 0; current->next && i < jump; i++)
			current = current->next;
		printf("Value checked at index [%lu] = [%d]\n",
		       current->index, current->n);
		if (current->next == NULL)
			break;
	}
	printf("Value found between indexes [%lu] and [%lu]\n",
	       prev->index, current->index);

	while (prev->n < value)
	{
		printf("Value checked at index [%lu] = [%d]\n",
		       prev->index, prev->n);
		if (prev == current)
			return (NULL);
		prev = prev->next;
	}
	if (prev->n == value)
	{
		printf("Value checked at index [%lu] = [%d]\n",
		       prev->index, prev->n);
		return (prev);
	}
	return (NULL);
}
