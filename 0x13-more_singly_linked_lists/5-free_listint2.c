#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2 - Free all list
 * @head: The start point
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	temp = *head;
	while (*head != NULL)
	{
		temp = temp->next;
		free(*head);
		*head = temp;
	}
}
