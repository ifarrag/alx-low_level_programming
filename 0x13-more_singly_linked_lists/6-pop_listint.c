#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - Delete the first node
 * @head: address of first node
 * Return: The deleted node data
 */
int pop_listint(listint_t **head)
{
	int n = 0;
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return (0);
	temp = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = temp;
	return (n);
}
