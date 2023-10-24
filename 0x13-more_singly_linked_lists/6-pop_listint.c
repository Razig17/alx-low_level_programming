#include "lists.h"


/**
 * pop_listint -  deletes the head node of a listint_t linked list
 *
 * @head: a pointer to thelist header
 *
 * Return: the data of the node or 0 if empty
 */

int pop_listint(listint_t **head)
{
	listint_t *ptr ;
	int data = 0;

	if (*head == NULL)
		return (0);
	ptr = (*head)->next;
	data = (*head)->n;
	free(*head);
	*head = ptr;
	return (data);

}
