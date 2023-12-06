#include <stdio.h>
#include "hash_tables.h"
#include <string.h>
/**
 * hash_table_print - print all the hash table
 *
 * @ht: hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int size = 0;
	unsigned long int index, first_print = 1;
	hash_node_t *current_node;

	if (ht == NULL || ht->array == NULL)
	{
		return;
	}

	size = ht->size;

	printf("{");
	for (index = 0; index < size; index++)
	{
		current_node = ht->array[index];
		while (current_node) /* check if we still have nodes */
		{
			if (first_print == 0) /* dont print sep for first element */
				printf(", ");
			printf("\'%s\': \'%s\'", current_node->key, current_node->value);
			current_node = current_node->next;
			first_print = 0;/* after printing first element */
		}
	}
	printf("}\n");
}
