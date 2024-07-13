#include <stdlib.h>
#include "lists.h"
/**
 * add_dnodeint_end - add node at the end
 * @head: the head
 * @n: new value
 * Return: new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;

	if (!head)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	if (*head)
	{
		while ((*head)->next != NULL)
		{
			*head = (*head)->next;
		}
		(*head)->next = new;
	}
	new->n = n;
	new->next = NULL;
	new->prev = *head;
	*head = new;
	return (new);
}
