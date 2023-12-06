#include <stdio.h>
#include "hash_tables.h"
#include <string.h>
/**
 * hash_table_set - set a node at the given index
 *
 * @value: value of key
 * @key: unique key
 * @ht: hash table
 * Return: index of of the key
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int size = 0;
	unsigned long int index;
	hash_node_t *new_node;

	if (key == NULL || *key == '\0')
		return (0);

	size = ht->size;
	index = (hash_djb2((const unsigned char *)key) % size);

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->value = strdup(value);
	new_node->key = strdup(key);
	new_node = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
