#include "main.h"
/**
 * _strlen_recursion - get the length of string
 * @s: pointer to char
 */
int _strlen_recursion(char *s)
{
	int i = 0;
	if (*s == '\0')
		return (i);

	s++;
	_strlen_recursion(s);
	i++;
	return (0);
}
