#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2 - Free all list
 * @head: The start point
 */
void free_listint2(listint_t **head)
{
	listint_t **temp = head;

	if (head == NULL)
		return;
	while (head != NULL && *head != NULL)
	{
		temp = &(*temp)->next;
		free(*head);
		head = temp;
	}
}
