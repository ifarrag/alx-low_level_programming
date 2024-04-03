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

	for (s; sa = sz; s--)
	{
		i = *sa;
		*sa = *sz;
		*sz = i;
		sa++;
		sz--;
	}

}
