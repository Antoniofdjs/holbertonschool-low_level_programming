#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node indicated by user
 *
 * @head: head of the list
 * @index: index of node to delete
 * Return: 1 on succes -1 failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	unsigned int count = 0;

	current = *head;
	while (current != NULL)
	{
		if (count == index)
		{
			if (current->prev == NULL) /* first node */
			{
				*head = current->next;
				if (current->next != NULL)
					current->next->prev = NULL;
			}
			else if (current->next == NULL) /* Last node */
			{
				current->prev->next = NULL;
			}
			else /* middle nodes */
			{
				current->prev->next = current->next;
				current->next->prev = current->prev;
			}
			free(current);
			return (1);
		}
		current = current->next;
		count++;
	}

	return (-1);
}
