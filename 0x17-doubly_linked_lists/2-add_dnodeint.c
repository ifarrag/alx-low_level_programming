#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_dnodeint - add node at the begin
 * @head: the head
 * @n: the value in node
 * Return: new begin list
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	(*head->)prev = new;
	new->prev = NULL;
	new->next = *head;
	*head = new;
	return (new);
}
