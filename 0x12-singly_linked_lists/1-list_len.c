#include "lists.h"

/**
 * list_len - finds the number of elements in a list
 *
 * @h: a pointer to thelist header
 * Return: number of elements.
 */

size_t list_len(const list_t *h)
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
