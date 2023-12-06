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
	hash_node_t *new_node, *current_node;

	if (key == NULL || *key == '\0' || value == NULL || ht == NULL)
		return (-1);

	size = ht->size;
	index = (hash_djb2((const unsigned char *)key) % size);

	current_node = ht->array[index]; /* get current node from index */

	while (current_node) /* check if key exists in list */
	{
		if (strcmp(current_node->key, key) == 0) /* match key, update new value */
		{
			current_node->value = strdup(value);
			return (0);
		}
		current_node = current_node->next;/* next node */
	}

	new_node = malloc(sizeof(hash_node_t)); /* create new node*/
	if (new_node == NULL)
		return (-1);

	/*
	 * assign all values for node
	 */

	new_node->value = strdup(value);
	new_node->key = strdup(key);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
