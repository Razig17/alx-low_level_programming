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


/**
 * delete_dnodeint_at_index - deletes node at index of a dlistint_t linked list
 *
 * @head: a pointer to the list header
 * @index: node index
 *
 * Return: 1 or -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp;

	if (*head == NULL || head == NULL)
		return (-1);
	if (index == 0)
	{
		tmp = *head;

		*head = (*head)->next;
		if (*head == NULL)
			return (-1);
		(*head)->prev = NULL;
		free(tmp);
		return (1);
	}
	tmp = get_dnodeint_at_index(*head, index);
	if (tmp)
	{
		tmp->next->prev = tmp->prev;
		tmp->prev->next = tmp->next;
		free(tmp);
		return (1);
	}
	return (-1);
}
