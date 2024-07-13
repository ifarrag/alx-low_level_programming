#include <stdlib.h>
#include "lists.h"
/**
 * free_dlistint - free the list
 * @head: the head
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;

	if (!head || (*head) == NULL)
		return;
	while (!temp)
	{
		temp = head->next;
		free(head);
	}
}
