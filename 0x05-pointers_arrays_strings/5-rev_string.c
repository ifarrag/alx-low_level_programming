#include "main.h"
/**
 * rev_string - reverses a string
 * @s : pointer to string
 */
void rev_string(char *s)
{
	char rev[] = *s;
	char *s_0 = s;
	int i;

	while (*s)
	{
		s++;
	}

	for (s--, i = 0; s >= s_0; s--, i++)
	{
		*(rev + i) = *s;
	}
	s = &rev[];
}
