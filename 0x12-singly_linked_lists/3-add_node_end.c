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
	list_t *ptr = malloc(sizeof(list_t));

	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (head == NULL)
	{
		free(ptr);
		return (NULL);
	}

	ptr->str = strdup(str);
	if (ptr->str == NULL)
	{
		free(ptr->str);
		free(ptr);
		return (NULL);
	}
	ptr->len = strlen(ptr->str);
	ptr->next = NULL;

	while (*head != NULL)
	{
		*head = *head->next;
	}
	*head = ptr;
	return (head);
}
