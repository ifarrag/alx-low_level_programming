#include <stdio.h>
#include "lists.h"
/**
 * print_dlistint - print n
 * @h: the head of list
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t num = 0;
	if (h == NULL)
		return (NULL);
	while (h->prev != NULL)
	{
		h = h->prev;
	}
	while (*h)
	{
		printf("%d\n", h->n);
		num++
		h = h->next;
	}
	return (num);
}
