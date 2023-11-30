#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 *
 * @h: head of the list
 * @idx: index of the new node
 * @n: value of the new node
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *temp;
	unsigned int count = 0;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	if (*h == NULL && idx == 0)
	{
		new_node->next = *h;
		new_node->prev = NULL;
		*h = new_node;
		return (new_node);
	}
	temp = *h;
	while (temp != NULL)
	{
		if (count == idx)
		{
			if (idx == 0)
			{
				new_node->next = *h;
				new_node->prev = NULL;
				(*h)->prev = new_node;
				*h = new_node;
			return (new_node);
			}
			else
			{
				new_node->next = temp;
				new_node->prev = temp->prev;
				temp->prev = new_node;
			return (new_node);
			}
		}
		temp = temp->next;
		count++;
	}
	if (count + 1 == idx)
	{
		new_node->next = NULL;
		new_node->prev = temp;
		temp->next = new_node;
		return (new_node);
	}
	free(new_node);
	return (NULL);
}
