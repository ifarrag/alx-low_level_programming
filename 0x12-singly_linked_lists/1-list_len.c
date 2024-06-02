#include "lists.h"
/**
 * list_len - sum the nodes
 * @h: The head node pointer
 * Return: sum of the nodes
 */
size_t list_len(const list_t *h)
{
	unsigned int sum = 0;

	while (h != NULL)
	{
		sum++;
		h = h->next;
	}
	return (sum);
}
