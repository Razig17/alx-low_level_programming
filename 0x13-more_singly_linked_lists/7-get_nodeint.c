#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 *
 * @index: the index of the wanted node
 * @head: a pointer to the list header
 * Return: the nth node.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int  count = 0;

	if (head == NULL)
		return (0);
	while (head != NULL & count =< index)
	{
		head = head->next;
		count++;
	}
	if (head == NULL)
		return (NULL);
	return (head);

}
