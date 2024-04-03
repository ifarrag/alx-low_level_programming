#include "main.h"
/**
 * rev_string - reverses a string
 * @s : pointer to string
 */
void rev_string(char *s)
{
	while (*s)
	{
		s++
	}

	char **_s;
	int i = 0;

	for (--s; s == s[0]; s--)
	{
		_s[i] = s;
		i++;
	}
	
	s = _s;
}
