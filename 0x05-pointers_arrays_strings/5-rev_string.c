#include "main.h"
/**
 * rev_string - reverses a string
 * @s : pointer to string
 */
void rev_string(char *s)
{
	char *rev;
	char *s_0 = s;

	while (*s)
	{
		s++;
	}

	for (s--; s >= s_0; s--)
	{
		rev = s;
	}
	s = rev;
}
