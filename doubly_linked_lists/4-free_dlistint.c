#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 *free_dlistint- free previous list int
 *
 *@head: head pointer of nodes
 */

void free_dlistint(dlistint_t *head)
{

	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
