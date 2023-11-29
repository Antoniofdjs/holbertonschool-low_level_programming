#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * add_dnodeint_end- Add node to the end of Dlists
 *
 * @n: int from struct
 * @head: pointer to nodes or null
 * Return: Adress of new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *temp_head;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		printf(" Memory failed to allocate\n");
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
	}
	else
	{
		temp_head = *head;
		while (temp_head->next != NULL)
			temp_head = temp_head->next;
		new_node->prev = temp_head; /* new node point to null at prev */
		temp_head->next = new_node;
	}

	return (new_node);
}
