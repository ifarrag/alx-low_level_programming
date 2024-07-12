#include <stdio.h>
#include "lists.h"
/**
 * dlistint_len - number of elements
 * @h: the head
 * Return: num
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t num = 0;

	if (h == NULL)
		return (0);
	while (h->prev != NULL)
		h = h->prev;
	while (h)
	{
		num++;
		h = h->next;
	}
	return (num);
}
