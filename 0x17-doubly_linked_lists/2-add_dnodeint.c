#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 *
 * @head: a pointer to the list header
 * @n: an integer
 * Return: the address of the new element, or NULL if it failed.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *ptr;

	if (head == NULL)
		return (NULL);

	ptr = malloc(sizeof(dlistint_t));
	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->prev = NULL;
	ptr->next = *head;
	if (*head)
		(*head)->prev = ptr;
	*head = ptr;
	return (ptr);
}
