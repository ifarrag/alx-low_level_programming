#include "lists.h"
/**
 * sum_listint - sum the data in the list
 * @head: the start
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL || *head == NULL)
		return (0);

	while (*head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
