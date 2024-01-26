#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 *
 * @head: a pointer to thelist header
 * @index: node index
 *
 * Return: the node at index.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	tmp = head;

	while (tmp)
	{
		if (i == index)
			return (tmp);

		tmp = tmp->next;
		i++;
	}

	return (NULL);
}
