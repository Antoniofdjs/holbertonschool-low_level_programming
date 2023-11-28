#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 *free_list- free previous list
 *
 *@head: head pointer of nodes
 */

void free_list(list_t *head)
{

	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		free(temp->str);
		free(temp);
		head = head->next;
	}
}
