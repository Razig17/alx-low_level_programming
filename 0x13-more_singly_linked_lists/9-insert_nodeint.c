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
	listint_t *tmp, *ptr;
	unsigned int  count = 0;

	ptr = malloc(sizeof(listint_t));
	if (head == NULL || ptr == NULL)
		return (NULL);
	tmp = *head;
	ptr->n = n;
	if (idx == 0)
	{
		ptr->next = tmp;
		*head = ptr;
		return (ptr);
	}
	while (tmp != NULL && count < idx - 1)
	{
		tmp = tmp->next;
		count++;
	}
	if (tmp == NULL)
		return (NULL);
	ptr->next = tmp->next;
	tmp->next = ptr;
	return (ptr);

}
