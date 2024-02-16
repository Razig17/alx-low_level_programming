
#include "hash_tables.h"
#include <string.h>
/**
 * hash_table_get - Retrieves a value associated with a key
 *
 * @ht: The hash table
 * @key: The key
 *
 * Return: Value associated with the element or NULL if key couldn’t be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned int hash;
	hash_node_t *tmp;

	if (ht == NULL || key == NULL)
		return (NULL);
	hash = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[hash];
	while (tmp && strcmp(tmp->key, key) != 0)
		tmp = tmp->next;

	if (tmp)
	{
		if (tmp->value)
			return (tmp->value);
		return (NULL);
	}
	return (NULL);
}
