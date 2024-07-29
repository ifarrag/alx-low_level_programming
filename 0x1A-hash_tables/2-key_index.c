#include "hash_tables.h"
/**
 * key_index - generate the key
 * @key: secret str
 * @size: size of the table
 * Return: key index of the **array
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int temp = 0;

	temp = hash_djb2(key) % size;
	return (temp);
}
