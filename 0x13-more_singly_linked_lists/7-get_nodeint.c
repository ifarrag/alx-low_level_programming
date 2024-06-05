#include "lists.h"
/**
 * get_nodeint_at_index - point to specific node
 * @head: the start
 * @index: the specific node number
 * Return: pointer to that node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (i < index)
	{
		head = head->next;
		i++;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
