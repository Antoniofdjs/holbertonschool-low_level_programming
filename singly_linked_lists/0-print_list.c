#include <stdio.h>
#include "lists.h"

/**
 *print_list- Print list of sinlge linked list
 *
 *@h: head pointer of nodes
 *Return: number of total nodes
 */

size_t print_list(const list_t *h)
{
	int total_nodes = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] [%s]\n", h->len, h->str);

		total_nodes++;
		h = h->next;
	}

	return (total_nodes);
}
