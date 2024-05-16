#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocate array
 * @nmemb: NUmber bytes
 * @size: sizeof(type)
 * Return: void pointer to new alloc
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;

	if (!nmemb || !size)
		return ('\0');
	ptr = malloc(nmemb * size);
	if (ptr == 0)
		return ('\0');

	for (i = 0; i < nmemb * size; i++)
	       ptr[i] = '\0';
	return (ptr)	;
}
