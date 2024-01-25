#include "lists.h"

/**
 * dlistint_len - finds the number of elements in a list
 *
 * @h: a pointer to thelist header
 * Return: number of elements.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
