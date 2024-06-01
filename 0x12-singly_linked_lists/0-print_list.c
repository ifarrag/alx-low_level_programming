#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_list - print data of nodes
 * @h: pointer to list_t
 * Return: size of nodes
 */
size_t print_list(const list_t *h)
{
	unsigned int size = 0;

	while(h->next != NULL)
	{
		size++;
		if(h->str != NULL)
		{
			printf("[%u] %s", h->len, h->str);
		}
		else
		{
			printf("[0] (nill)");
		}
		h = h->next;
	}
	return (size);
}
