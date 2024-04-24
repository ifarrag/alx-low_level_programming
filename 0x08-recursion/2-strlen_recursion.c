#include "main.h"
/**
 * _strlen_recursion - get the length of string
 * @s: pointer to char
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (s - &s[0]);
	s++;
	_strlen_recursion(s);
}
