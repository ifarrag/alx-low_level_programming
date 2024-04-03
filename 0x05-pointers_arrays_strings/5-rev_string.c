#include <string.h>
#include "main.h"
/**
 * rev_string - reverses a string
 * @s : pointer to string
 */
void rev_string(char *s)
{
	int i, len = strlen(s);
	char *sa, *sz, c;

	sa = s;
	sz = s;


	while (*s)
	{
		s++;
		sz++;
	}
	sz--;
	for (i = 0; i < len / 2; i++)
	{
		c = *sa;
		*sa = *sz;
		*sz = c;
		sa++;
		sz--;
	}

}
