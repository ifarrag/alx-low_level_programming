#include <stdio.h>
/**
 * array_iterator - Execute sized array by fun point par
 * @array: Array to execute
 * @size: size of the array
 * @action: put an address of Function here
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i = 0;

	while (i < size && *action != NULL)
	{
		(*action)(array[i]);
		i++;
	}
}
