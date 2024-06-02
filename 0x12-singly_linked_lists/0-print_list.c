#include <stdio.h>
#include "lists.h"
/**
 * print_list - print data of nodes
 * @h: pointer to list_t
 * Return: size of nodes
 */
size_t print_list(const list_t *h)
{
	unsigned int size = 0;

	while(h != NULL)
	{
		size++;
		if(h->str != NULL)
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		h = h->next;
	}
	return (size);
}
