#include <stdlib.h>
#include "lists.h"
/**
 * free_dlistint - free the list
 * @head: the head
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;

	if (!head)
		return;
	while (temp->prev != NULL)
		temp = temp->prev;
	while (!temp)
	{
		temp = head->next;
		free(head);
	}
}
