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
	unsigned long int index;
	hash_node_t *current_node, *temp;

	if (ht == NULL || ht->array == NULL)
		return;

	for (index = 0; index < ht->size; index++)
	{
		current_node = ht->array[index];
		while (current_node != NULL)
		{

			temp = current_node;
			current_node = current_node->next;
			free(temp->key);
			free(temp->value);
			free(temp);
		}
	}
	free(ht->array);
	free(ht);
}
