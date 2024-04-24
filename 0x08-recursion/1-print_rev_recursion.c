#include <string.h>
#include "main.h"
/**
 * _print_rev_recursion - Reverse a string
 * @s: pointer to char
 */
void _print_rev_recursion(char *s)
{
	char a, *str = &s[0];
	int len0 = strlen(str), len = strlen(s);

	a = *s;
	*s = *(str[len - 1]);
	*(str[len - 1])  = a;
	s++;

	if (len > (len0 / 2) && len0 % 2 == 0)
	{
		_print_rev_recursion(s);
	}
	if (len > (len0 + 1) / 2 && len0 % 2 != 0)
	{
		_print_rev_recursion(s);
	}
}
