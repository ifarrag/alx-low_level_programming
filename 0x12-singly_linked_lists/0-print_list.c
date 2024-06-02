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
	list_t ptr = *h;

	while(ptr->next != NULL)
	{
		size++;
		if(ptr->str != NULL)
		{
			printf("[%u] %s", ptr->len, ptr->str);
		}
		else
		{
			printf("[0] (nill)");
		}
		ptr = ptr->next;
	}
	return (size);
}
