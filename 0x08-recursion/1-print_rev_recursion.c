#include <string.h>
#include "main.h"
/**
 * _print_rev_recursion - Reverse a string
 * @s: pointer to char
 */
void _print_rev_recursion(char *s)
{
	char a;

	int str = strlen(&s[0]), i = 0;

	if (*s != '\0' && i == 0)
	{
		s++;
		_print_rev_recursion(s);
	}
	i++;
	s--;

	a = *s;
	*s = *(s - str);
	*(s - str)  = a;
	return;
}
