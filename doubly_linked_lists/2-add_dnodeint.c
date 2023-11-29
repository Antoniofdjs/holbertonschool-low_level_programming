#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * add_dnodeint- Add to the start a Dlinked node
 *
 * @n: int from struct
 * @head: pointer to nodes or null
 * Return: Adress of new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	int copy_n;
	dlistint_t *temp_head;
	dlistint_t *new_node;

	copy_n = n;
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		printf(" Memory failed to allocate\n");
		return (NULL);
	}

	new_node->n = copy_n;
	new_node->next = *head;
	if(*head == NULL)
		new_node->prev = NULL;
	else
	{
		temp_head = *head;
		new_node->prev = temp_head->prev;
	}
	
	*head = new_node;

	return (new_node);
}
