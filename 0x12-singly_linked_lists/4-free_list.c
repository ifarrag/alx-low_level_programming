#include <stdlib.h>
#include "lists.h"
/**
 * free_list - Free all list nodes
 * @head: The start of the list
 */
void free_list(list_t *head)
{
	if (head == NULL)
	{
		return;
	}

	head = head->next;
	free_list(head);
	free(head);
	head = NULL;
}
