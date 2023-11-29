#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint- prints all elements of dlist
 *
 *@h: header pointing to dlist
 *Return: Number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int total_nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		total_nodes++;
	}
	return (total_nodes);
}
