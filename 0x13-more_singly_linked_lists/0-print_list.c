#include "lists.h"

/**
 * print_listint - prints a list of integers
 *
 * @h: a pointer to the list header
 * Return: number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		printf("%d", h->n);
		h = h->next;
		count++;
	}
	return (count);

}
