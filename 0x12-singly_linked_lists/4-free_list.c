#include "lists.h"

/**
 * free_list - frees a list_t list
 *
 * @head: a pointer to the list header
 * Return: nothing.
 */

void free_list(list_t *head)
{
	lits_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
	        free(temp->str);
		free(temp);
        }
	free(head);
}
