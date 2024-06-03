#include <stdlib.h>
#include "lists.h"
/**
 * free_list - Free all list nodes
 * @head: The start of the list
 */
void free_list(list_t *head)
{
	list_t **ptr = &head;

	if (ptr == NULL)
	{
		return;
	}
	if ((*ptr)->next == NULL)
	{
		return;
	}
	*ptr = (*ptr)->next;
	free_list(*ptr);
	free(ptr);
}
