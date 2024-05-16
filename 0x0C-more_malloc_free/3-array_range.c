#include "main.h"
#include <stdlib.h>
/**
 * array_range - Allocate (max - min + 1)
 * @max: max number in arr
 * @min: min number in arr
 * Return: pointer to int (New alloc memo)
 */
int *array_range(int min, int max)
{
	int *ptr, i, mini = min;

	if (min > max)
		return ('\0');
	ptr = malloc(sizeof(int) * (max - min + 1));
	if (ptr == 0)
		return ('\0');

	for (i = 0; i <= (max - min); i++)
	{
		ptr[i] = mini;
		mini++;
	}
	return (ptr);
}
