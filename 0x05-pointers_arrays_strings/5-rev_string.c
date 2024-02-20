#include "main.h"
/**
 * rev_string - reverses a string
 * @s : pointer to string
 */
void rev_string(char *s)
{
	char reversed[];
	char *s0 = s;
	int i;

	while (*s)
	{
		s++;
	}

	--s;

	for (i = 0; s >= s0; s--)
	{
		reversed[i] = *s;
		i++;
	}
	s = reversed[];
}
