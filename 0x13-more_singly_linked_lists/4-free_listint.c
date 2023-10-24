#include "lists.h"

/**
 * free_listint - frees a listint_t list
 *
 * @head: a pointer to the list header
 * Return: nothing.
 */

void free_listint(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
	free(head);
}
