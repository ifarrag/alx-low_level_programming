#include "main.h"
#include <stdlib.h>
/**
 *
 */
int *array_range(int min, int max)
{
	int *ptr, i;

	if (min > max)
		return ('\0');
	ptr = malloc(sizeof(int) * (max - min + 1));
	if (ptr == 0)
		return ('\0');

	for (i = 0; i <= (max - min); i++)
	{
		ptr[i] = min;
		min++;
	}
	return (ptr);
}
