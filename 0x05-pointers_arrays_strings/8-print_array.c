#include <stdio.h>
#include "main.h"
/**
 * print_array - in sorting
 * @a : point to array
 * @n : array elements
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
