#include "main.h"
#include <stdlib.h>
/**
 * _realloc - reallocate memo with new size
 * @ptr: pointer to allocate memo
 * @old_size: old size of ptr
 * @new_size: New size allocation
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *str;
	unsigned int i;

	if (new_size == 0)
	{
		free(ptr);
		return ('\0');
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	str = malloc(new_size);
	if (str == 0)
	{
		free(ptr);
		return ('\0');
	}

	for (i = 0; ptr != 0 && i < old_size; i++)
	{
		str[i] = ptr[i];
	}
	free(ptr);
	return ((void *)str);
}
