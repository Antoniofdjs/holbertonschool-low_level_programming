#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len- Number of elements(nodes)
 *
 * @h: header pointing to dlist
 * Return: Number of elements (nodes)
 */

size_t dlistint_len(const dlistint_t *h)
{
	int total_nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		total_nodes++;
	}
	return (total_nodes);
}
