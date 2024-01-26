#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 *
 * @head: a pointer to the list header
 * @n: an integer
 * Return: the address of the new element, or NULL if it failed.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *ptr, *tmp = *head;

	if (head == NULL)
		return (NULL);

	ptr = malloc(sizeof(dlistint_t));
	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = NULL;
	if (!*head)
	{
		ptr->prev = NULL;
		*head = ptr;
		return (ptr);
	}
	while (tmp->next)
	{
		tmp = tmp->next;
	}
	ptr->prev = tmp;
	tmp->next = ptr;
	return (ptr);
}
