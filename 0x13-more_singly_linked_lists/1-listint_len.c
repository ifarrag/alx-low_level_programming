#include <stdio.h>
#include "lists.h"
/**
 * listint_len - Calculate the number of nodes
 * @h: The start point
 * Return: Number of Nodes (sum)
 */
size_t listint_len(const listint_t *h)
{
	unsigned int sum = 0;

	while (h != NULL)
	{
		sum++;
		h = h->next;
	}
	return (sum);
}
