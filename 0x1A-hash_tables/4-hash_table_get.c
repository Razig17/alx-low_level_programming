
#include "hash_tables.h"
#include <string.h>
/**
 * hash_table_get - Retrieves a value associated with a key
 *
 * @ht: The hash table
 * @key: The key
 *
 * Return: Value associated with the element, or NULL if key couldn’t be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned int hash;
	hash_node_t *tmp;

	if (ht == NULL || key == NULL)
		return (NULL);
	hash = key_index((const unsigned char*)key, ht->size);
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

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	hash_table_t *ht;
	char *value;

	ht = hash_table_create(1024);
	hash_table_set(ht, "c", "fun");
	hash_table_set(ht, "python", "awesome");
	hash_table_set(ht, "Bob", "and Kris love asm");
	hash_table_set(ht, "N", "queens");
	hash_table_set(ht, "Asterix", "Obelix");
	hash_table_set(ht, "Betty", "Cool");
	hash_table_set(ht, "98", "Battery Street");
	hash_table_set(ht, "c", "isfun");

	value = hash_table_get(ht, "python");
	printf("%s:%s\n", "python", value);
	value = hash_table_get(ht, "Bob");
	printf("%s:%s\n", "Bob", value);
	value = hash_table_get(ht, "N");
	printf("%s:%s\n", "N", value);
	value = hash_table_get(ht, "Asterix");
	printf("%s:%s\n", "Asterix", value);
	value = hash_table_get(ht, "Betty");
	printf("%s:%s\n", "Betty", value);
	value = hash_table_get(ht, "98");
	printf("%s:%s\n", "98", value);
	value = hash_table_get(ht, "c");
	printf("%s:%s\n", "c", value);
	value = hash_table_get(ht, "javascript");
	printf("%s:%s\n", "javascript", value);
	return (EXIT_SUCCESS);
}