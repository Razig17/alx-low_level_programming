#include "hash_tables.h"

/**
 * shash_table_create - A function that creates a sorted hash table.
 *
 * @size: The size of hash table
 *
 * Return: A pointer to the hash table or NULL if failed
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *table;
	unsigned int i = 0;

	if (size <= 0)
		return (NULL);
	table = (shash_table_t *)malloc(sizeof(shash_table_t));
	if (table == NULL)
		return (NULL);
	table->size = size;
	table->array = (shash_node_t **)calloc(size, sizeof(shash_node_t *));
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}

	for (i = 0; i < table->size; i++)
	{
		table->array[i] = NULL;
	}
	table->shead = NULL;
	table->stail = NULL;

	return (table);
}

/**
 * shash_table_set - Adds an element to the hash table.
 *
 * @ht: The hash table
 * @key: The key
 * @value: Value is the value associated with the key
 *
 * Return: 1 if it succeeded, 0 otherwise
 */

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *node, *tmp;
	unsigned int hash;

	if (key == NULL || value == NULL || strlen(key) == 0 ||
	    strlen(value) == 0 || ht == NULL)
		return (0);
	hash = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[hash];

	while (tmp && strcmp(tmp->key, key) != 0)
		tmp = tmp->next;
	if (tmp)
	{
		free(tmp->value);
		tmp->value = strdup(value);
		if (tmp->value)
			return (1);
		return (0);
	}
	node = malloc(sizeof(shash_node_t));
	if (node == NULL)
		return (0);
	node->value = strdup(value);
	node->key = strdup(key);
	if (node->key == NULL || node->value == NULL)
	{
		if (node->value)
			free(node->value);
		free(node);
		return (0);
	}
	node->next = ht->array[hash];
	ht->array[hash] = node;
	soreted_set(ht, node);

	return (1);
}
/**
 * soreted_set - Inserts the node to the Sorted linked list
 * @ht: The hash table
 * @node: The node
 *
 *
 */

void soreted_set(shash_table_t *ht, shash_node_t *node)
{
	shash_node_t *tmp;

	if (ht->shead == NULL && ht->stail == NULL)
	{
		ht->shead = node;
		ht->stail = node;
		node->snext = NULL;
		node->sprev = NULL;
		return;
	}
	tmp = ht->shead;
	while (tmp)
	{
		if (strcmp(node->key, tmp->key) <= 0)
		{

			node->sprev = tmp->sprev;
			node->snext = tmp;
			if (tmp->sprev)
				tmp->sprev->snext = node;
			else
				ht->shead = node;
			tmp->sprev = node;
			return;
		}
		tmp = tmp->snext;
	}
	node->sprev = ht->stail;
	node->snext = NULL;
	ht->stail->snext = node;
	ht->stail = node;
}

/**
 * shash_table_get - Retrieves a value associated with a key
 *
 * @ht: The hash table
 * @key: The key
 *
 * Return: Value associated with the element or NULL if key couldn’t be found
 */

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned int hash;
	shash_node_t *tmp;

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

/**
 * shash_table_print - Prints a sorted hash table.
 *
 * @ht: A pointer to the hash table
 *
 */

void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *tmp;
	char *sep;

	if (ht == NULL)
		return;
	sep = "";
	printf("{");
	tmp = ht->shead;
	while (tmp)
	{
		printf("%s'%s': '%s'", sep, tmp->key, tmp->value);
		sep = ", ";
		tmp = tmp->snext;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - Prints a sorted hash table in reverse.
 *
 * @ht: A pointer to the hash table
 *
 */

void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *tmp;
	char *sep;

	if (ht == NULL)
		return;
	sep = "";
	printf("{");
	tmp = ht->stail;
	while (tmp)
	{
		printf("%s'%s': '%s'", sep, tmp->key, tmp->value);
		sep = ", ";
		tmp = tmp->sprev;
	}
	printf("}\n");
}

/**
 * shash_table_delete - Deletes a hash table
 *
 * @ht: The hash table
 */

void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *tmp, *head;
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
