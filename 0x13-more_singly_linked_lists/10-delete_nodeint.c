#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a new node at a given position
 *
 * @index: the index
 * @head: a pointer to the list header
 * Return: 1 or -1 if failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *ptr;
	unsigned int  count = 0;

	if (head == NULL)
		return (-1);
	tmp = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free (tmp);
		return (1);
	}
	while (tmp != NULL && count < index - 1)
	{
		tmp = tmp->next;
		count++;
	}
	if (tmp == NULL)
		return (-1);
		ptr = tmp->next;
		tmp->next = tmp->next->next;
		free(ptr);
	return (1);

}
