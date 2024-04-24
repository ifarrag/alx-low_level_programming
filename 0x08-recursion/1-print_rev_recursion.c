#include <string.h>
#include "main.h"
/**
 * _print_rev_recursion - Reverse a string
 * @s: pointer to char
 */
void _print_rev_recursion(char *s)
{
	char a;
	int len0 = strlen(&s[0]), len = strlen(s);

	if ((len0 % 2 == 0 && len == len0 / 2) || (len0 % 2 != 0 && len == (len0 + 1) / 2))
	{
		return;
	}

	a = *s;
	*s = *(&s[0] + (len - 1));
	*(&s[0] + (len - 1))  = a;
	s++;

	_print_rev_recursion(s);
}
