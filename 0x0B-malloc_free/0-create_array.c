#include <stdlib.h>
/**
 * create_array - Creates an array of chars
 * @size: The size of the array
 * @c: The char that fill the array
 * Return: (0)or pointer to array
 *
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str;

	str = malloc(sizeof(char) * size);
	if (!str || !size)
		return ('\0');
	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}
	return (str);
}
