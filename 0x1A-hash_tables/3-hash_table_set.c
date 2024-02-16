#include "hash_tables.h"
#include <string.h>
/**
 * hash_table_set - Adds an element to the hash table.
 *
 * @ht: The hash table
 * @key: The key
 * @value: Value is the value associated with the key
 *
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
        hash_node_t *node, *tmp;
        unsigned int hash;

        if (key == NULL || value == NULL || strlen(key) == 0 || strlen(value) == 0 || ht == NULL)
                return (0);
        hash = key_index(key, ht->size);
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
        node = malloc(sizeof(hash_node_t));
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

        return (1);
}
