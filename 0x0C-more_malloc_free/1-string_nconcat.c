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
	unsigned int (t1, t2) = 0, i, ii;
	char *ptr;

	while (!*s1)
		t1++;

	while (!s2)
		t2++;

	if (n >= t2)
		n = t2;

	ptr = malloc(sizeof(char) * (t1 + n + 1));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; *s1 != NULL; i++)
		ptr[i] = s1[i];

	for (ii = 0;ii <= n; ii++)
		ptr[i] = s2[ii];
	i++;
	ptr[i] = '\0';

	return (ptr);
}
