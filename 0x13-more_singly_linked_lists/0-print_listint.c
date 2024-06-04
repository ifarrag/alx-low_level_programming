#include "lists.h"
#include <stdio.h>
/**
 * print_listint - Print list data
 * @h: pointer to the start
 */
size_t print_listint(const listint_t *h)
{
	unsigned int sum = 0;

	while (h != NULL)
	{
		sum++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (sum);
}
