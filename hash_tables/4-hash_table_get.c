#include <stdio.h>
#include "hash_tables.h"
#include <string.h>
/**
 * hash_table_get - finds a value associated to a key
 *
 * @key: unique key
 * @ht: hash table
 * Return: value associated to key
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int size = 0;
	unsigned long int index;
	hash_node_t *current_node;

	if (key == NULL || *key == '\0' || ht == NULL)
		return (NULL);

	size = ht->size;/* size of table array */
	index = (hash_djb2((const unsigned char *)key) % size);

	current_node = ht->array[index]; /* get current node from index */

	while (current_node) /* check if key exists in list */
	{
		if (strcmp(current_node->key, key) == 0) /* match key, get value */
		{
			return (current_node->value);
		}
		current_node = current_node->next;/* next node */
	}

	return (NULL);
}
