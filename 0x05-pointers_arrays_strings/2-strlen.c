#include "main.h"
/**
 * _strlen - get the length of string
 * @s: pointer to string
 * Return: length of the string
 **/
int _strlen(char *s)
{
	char *start = &s;
	int length;

	while (*s)
	{
		s++;
	}
	length = s - start;
	return (length);
}
