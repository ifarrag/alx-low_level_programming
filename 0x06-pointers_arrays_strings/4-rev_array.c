#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers
 * @a: pointer to int
 * @n: number of elements
 */
void reverse_array(int *a, int n)
{
	int i = 0, m = n - 1, r = 0;

	while (i < n)
	{
		r = *a[i];
		*a[i] = *a[m];
		*a[m] = r;
		m--;
		i++;
	}
}
