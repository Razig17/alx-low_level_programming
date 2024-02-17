#include "hash_tables.h"
/**
 * ash_table_delete - Deletes a hash table
 *
 * @ht: The hash table
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tmp, *head;
	unsigned long int i;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		head = ht->array[i];
		while (head)
		{
			tmp = head;
			head = head->next;
			free(tmp->key);
			free(tmp->value);
			free(tmp);
		}
	}
	free(ht->array);
	free(ht);
}
