#include <string.h>
#include "main.h"
/**
 * _print_rev_recursion - Reverse a string
 * @s: pointer to char
 */
void _print_rev_recursion(char *s)
{
	char a;

	int str = strlen(s);

	if (*s != '\0')
	{
		s++;
		_print_rev_recursion(s);
	}
	else 
		return;
	s--;
	str = str - 1;
	a = *s;
	*s = *(s + str);
	*(s + str)  = a;
}
