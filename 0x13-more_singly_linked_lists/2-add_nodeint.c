#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint - Add new node at start
 * @head: The start
 * @n: the data
 * Return: pointer to new start(*head)
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}
