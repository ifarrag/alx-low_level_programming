#include "hash_tables.h"
#include <stdlib.h>
/**
 * hash_table_create - create new hash table
 * @size: the size of the table
 * Return: pointer to the new table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i = 0;
	hash_table_t *ptr = NULL;

	if (size == 0)
		return (NULL);
	ptr = malloc(sizeof(hash_table_t));
	if (ptr == NULL)
		return (NULL);

	ptr->size = size;
	ptr->array = malloc(sizeof(ptr) * size);
	for (i = 0; i < size; i++)
	{
		ptr->array[i] = NULL;
	}

	return (ptr);
}
