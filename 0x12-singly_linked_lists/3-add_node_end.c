#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_node_end - Add New Node at the end of list
 * @head: the head of list
 * @str: String to duplicated into new Node
 * Return: *head (&The_new_node)
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));
	list_t **ptr = head;

	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	if (head == NULL)
	{
		free(new);
		return (NULL);
	}

	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new->str);
		free(new);
		return (NULL);
	}
	new->len = strlen(new->str);
	new->next = NULL;

	while (*ptr != NULL)
	{
		*ptr = ptr->next;
	}
	ptr = &new;
	return (*ptr);
}
