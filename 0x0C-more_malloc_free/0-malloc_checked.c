#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocate bytes of memo
 * @b: number of bytes to allocate
 * Return: void pointer
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
