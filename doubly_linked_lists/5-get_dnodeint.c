#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * get_dnodeint_at_index- get node of index specified
 *
 *@head: head pointer of nodes
 *@index: index of node that we look for
 * Return: nth node matching index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int match_index = 0;

	while (head != NULL)
	{

		if (match_index == index)
			return (head);
		head = head->next;
		match_index++;
	}

	return (NULL);
}
