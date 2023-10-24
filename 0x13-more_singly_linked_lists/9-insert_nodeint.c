#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 *
 * @idx: the index
 * @head: a pointer to the list header
 * @n: an integer
 * Return: address of the new node or NULL.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp, *ptr = malloc(sizeof(listint_t));
	unsigned int  count = 0;

	if (head == NULL || ptr == NULL)
		return (NULL);
	tmp = *head;
	while (tmp != NULL && count < idx - 1)
	{
		tmp = tmp->next;
		count++;
	}
	if (tmp == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = tmp->next;
	tmp->next = ptr;
	return (ptr);

}
