#include "lists.h"
#include <string.h>

/**
 *_strlen -findes the length of a string
 *
 *@s: the string
 *
 *Return: returens the length of the string
*/
int _strlen(const char *s)
{
	int i;
	int len = 0;

	for (i = 0; *(s + i) != '\0'; i++)
		len += 1;
	return (len);
}


/**
 * add_node_end - adds a new node at the end of a list_t list.
 *
 * @head: a pointer to thelist header
 * @str: a pointer to a string
 * Return: the address of the new element, or NULL if it failed.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *current, *ptr = malloc(sizeof(list_t));

	if (ptr == NULL)
		return (NULL);
	ptr->str = strdup(str);
	ptr->len = _strlen(str);
	ptr->next = NULL;

	if (*head == NULL)
	{
		*head = ptr;
		return (ptr);
	}
	else
	{
		current = *head;
		while (current->next != NULL)
			current = current->next;
		current->next = ptr;
		return (ptr);
	}
	return (NULL);

}
