#include "main.h"
/**
 * rev_string - reverses a string
 * @s : pointer to string
 */
void rev_string(char *s)
{
	char* ss;
	int i;

	while (*s)
	{
		s++;
	}

	for (--s; s == &s[0]; s--)
	{
		ss[i] = s;
		i++;
	}

	s = ss;
}
