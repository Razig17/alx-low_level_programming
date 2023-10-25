#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 *
 * @head: a pointer to the list header
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *tmp;

	if (*head == NULL)
		return (*head);
	prev = NULL;
	while (*head != NULL)
	{
		tmp = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = tmp;
	}
	return (*head);

}
