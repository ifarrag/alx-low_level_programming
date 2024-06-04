#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint_end - Add new node at the end
 * @head: the start of the list
 * @n: the new data
 * Return: The new node or (NULL)
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr = *head;
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	while (ptr != NULL)
	{
		ptr = ptr->next;
	}
	ptr = new;
	return (ptr)
}
