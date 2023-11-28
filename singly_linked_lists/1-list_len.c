#include <stdio.h>
#include "lists.h"

/**
 *list_len- Total elements in linked list
 *
 *@h: head pointer of nodes
 *Return: number of total elements
 */

size_t list_len(const list_t *h)
{
	int total_elemts = 0;

	while (h != NULL)
	{
		total_elemts++;
		h = h->next;
	}

	return (total_elemts);
}
