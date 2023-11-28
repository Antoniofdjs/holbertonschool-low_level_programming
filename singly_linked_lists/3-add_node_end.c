#include <stdio.h>
#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 *add_node_end- Add a new node to th6e end of the link list
 *
 *@head: head pointer of nodes
 *@str: string6
 *Return: new_node adress
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;

	new_node = malloc(sizeof(list_t)); /* create node */
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str); /* assign values for .str */
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = strlen(str); /* assign value for .len */
	if (*head == NULL)
		*head = new_node;
	else
	{
		temp = *head; /* temporary *ptr for nodes */
		while (temp->next != NULL)/* finding last node */
			temp = temp->next;

		temp->next = new_node; /* found last node, point to new_node */
		new_node->next = NULL; /* Finally new_node points to null */
	}

	return (new_node);
}
