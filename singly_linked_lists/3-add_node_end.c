#include <stdio.h>
#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 *add_node_end- Add a new node to the end of the link list
 *
 *@head: head pointer of nodes
 *@str: string
 *Return: new_node adress
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = strlen(str);
	if (*head == NULL)
		*head = new_node;
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new_node;
		new_node->next = NULL;
	}

	return (new_node);
}
