#include <stdlib.h>
#include "lists.h"
/**
 * free_list - Free all list nodes
 * @head: The start of the list
 */
void free_list(list_t *head)
{
	list_t *temp = head;

	if (head == NULL)
		return;
	while (head != NULL)
	{
		temp = temp->next;
		free(head);
		head = temp;
	}
}
