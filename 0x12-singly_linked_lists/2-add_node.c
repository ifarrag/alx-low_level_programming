#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_node - Add new node at the head
 * @head: Pointer to the head of the list
 * @str: A string to duplicate in str
 * Return: Pointer to THe NEw list_t (head)
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr = malloc(sizeof(list_t));

	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (head == NULL)
		return (NULL);
	ptr->str = strdup(str);
	if (ptr->str == NULL)
	{
		free(ptr->str);
		free(ptr);
		return (NULL);
	}
	ptr->len = strlen(ptr->str);
	ptr->next = *head;
	*head = ptr;
	return (*head);
}
