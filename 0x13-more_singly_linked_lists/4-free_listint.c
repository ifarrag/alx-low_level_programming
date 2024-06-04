#include <stdlib.h>
/**
 * free_listint - Free all the list
 * @head: The start point
 */
void free_listint(listint_t *head)
{
	listint_t *temp = head;

	while (head != NULL)
	{
		temp = temp->next;
		free(head);
		head = temp;
	}
}
