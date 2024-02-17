#include "hash_tables.h"
/**
 * hash_table_print - Prints a hash table.
 *
 * @ht: A pointer to the hash table
 *
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tmp;
	unsigned long int i;
	char *sep;

	    if (ht == NULL) 
	    	return;
	sep = "";
	printf("{");
	
	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp)
		{
			printf("%s'%s': '%s'",sep , tmp->key, tmp->value);
			sep = ", ";
			tmp = tmp->next;
		}
	}
	printf("}\n");
}
