#include "main.h"
/**
 * rev_string - reverses a string
 * @s : pointer to string
 */
void rev_string(char *s)
{
	char *rev;
	char *s_0 = s;
	int i;

	while (*s)
	{
		s++;
	}

	s--;
	for (i = 0; s >= s_0; s--)
	{
		*(rev + i) = s;
	}
	s = rev;
}
