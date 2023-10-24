#include "lists.h"

/**
 * print_listint - prints a list of integers
 *
 * @h: a pointer to the list header
 * Return: number of nodes.
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);

}
