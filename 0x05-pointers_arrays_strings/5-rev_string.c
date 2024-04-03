#include "main.h"
/**
 * rev_string - reverses a string
 * @s : pointer to string
 */
void rev_string(char *s)
{
	char *sa, *sz, i;
	sa = s;
	sz = s;

	while (*s)
	{
		s++;
		sz++;
	}

	for (s; s == &s[0]; s--)
	{
		i = *sa;
		*sa = *sz;
		*sz = i;
		sa++;
		sz--;
	}

}
