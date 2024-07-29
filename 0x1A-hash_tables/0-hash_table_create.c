#include "hash_tables.h"
#include <stdlib.h>
/**
 * hash_table_create - create new hash table
 * @size: the size of the table
 * Return: pointer to the new table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ptr = NULL;
	hash_node_t **array = NULL;
	unsigned long int i = 0;

	if (size == 0) return NULL;
	ptr = malloc(sizeof(hash_table_t));
	if (ptr == NULL) return NULL;

	for (i = 0; i < size; i++)
	{
		array[i] = malloc(sizeof(ptr));
	}
	array[size] = NULL;

	ptr->size = size;
	ptr->array = array;

	return ptr;
}
