#include <stdlib.h>
#include <lists.h>
/**
 *
 *
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;

	if (!head || !*head)
		return;
	while (!temp)
	{
		temp = head->next;
		free(head);
	}
}
