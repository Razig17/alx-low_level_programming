#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 *
 * @head: a pointer to the list header
 * Return: nothing.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
	free(head);
}
