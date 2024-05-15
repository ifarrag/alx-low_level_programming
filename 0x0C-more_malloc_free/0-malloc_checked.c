#include <stdlib.h>
/**
 * malloc_checked - 
 * @b: number of bytes to allocate
 * REturn: void pointer
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	if (b < 0)
		exit (98);
	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
