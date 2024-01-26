#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 *
 * @h: a pointer to thelist header
 * @idx: node index
 * @n: an integer
 * Return: the new node or NULL is its failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp, *new;
	unsigned int i = 0;

	if (h == NULL)
		return (NULL);
	tmp = (*h);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	while (tmp)
	{
		if (i == idx)
		{
			new->n = n;
			new->prev = tmp->prev;
			new->next = tmp;
			tmp->prev = new;
			return (new);
		}

		tmp = tmp->next;
		i++;
	}
	free(new);
	return (NULL);
}
