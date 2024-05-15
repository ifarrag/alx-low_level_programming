#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - S1 + (n) of S2 = (sum)
 * @s1: S1
 * @s2: S2
 * @n: first (n) of S2
 * Return: ptr (pointer to (sum)
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int t1 = 0, t2 = 0, i = 0, x = 0;
	char *ptr;

	if (s1 != NULL)
	{
		while (s1[t1] != '\0')
			t1++;
	}
	if (s2 != NULL)
	{
		while (s2[t2] != '\0')
			t2++;
	}

	if (n >= t2)
		n = t2;

	ptr = malloc(sizeof(char) * (t1 + n + 1));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < t1; i++)
	{
		ptr[i] = s1[i];
	}
	for (x = 0; x < n; x++)
	{
		ptr[i] = s2[x];
		i++;
	}
	ptr[i] = '\0';

	return (ptr);
}
