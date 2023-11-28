#include <stdio.h>
#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 *add_node- Add a new node to the start of the link list
 *
 *@head: head pointer of nodes
 *@str: string
 *Return: new_node adress
 */

list_t *add_node(list_t **head, const char *str)
{
	char *copy_str = strdup(str);
	int i = 0; /* Len of str */
	list_t *new_node;

	while (copy_str[i] != '\0')
		i++; /* len of str */

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = copy_str;
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = i;
	new_node->next = *head;/*coges el adress del que era primer node */
	*head = new_node;/* head ahora empieza en new node */

	return (new_node);
}
