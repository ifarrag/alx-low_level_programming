#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
/**
 * hash_table_set - add new node in the array
 * if collisions add the node at the beginning
 *
 * @key: The key of the list
 * @value: the value /////
 * Return: 1 on Succ or 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node = NULL;
	unsigned long int idk = 0;

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = malloc(sizeof(char) * strlen(key) + 1);
	new_node->value = malloc(sizeof(char) * strlen(value) + 1);
	strcpy(new_node->key, key);
	strcpy(new_node->value, value);
	new_node->next = NULL;

	idk = key_index((unsigned char *)key, ht->size);

	if (ht->array[idk] == NULL)
	{
		ht->array[idk] = new_node;
	}
	else
	{
		new_node->next = ht->array[idk];
		ht->array[idk] = new_node;
	}
	return (1);
}
