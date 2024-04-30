#include "main.h"
/**
 * _strlen_recursion - get the length of string
 * @s: pointer to char
 * Return: string length
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s == '\0')
		return (0);

	s++;
	i++;
	return (i + _strlen_recursion(s));
}
