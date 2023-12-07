#include <stdio.h>
#include "hash_tables.h"
#include <string.h>
/**
 * hash_table_delete - delete the table
 *
 * @ht: hash table
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int size = 0;
	unsigned long int index;
	hash_node_t *current_node, *next_node;

	if (ht == NULL || ht->array == NULL)
	{
		return;
	}

	size = ht->size;

	for (index = 0; index < size; index++)
	{
		current_node = ht->array[index];
		while (current_node)
		{

			next_node = current_node->next;
			free(current_node->key);
			free(current_node->value);
			free(current_node);
			current_node = next_node;
		}
	}
	free(ht->array);
	free(ht);
}
