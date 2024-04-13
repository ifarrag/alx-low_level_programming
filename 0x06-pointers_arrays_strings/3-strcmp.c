#include "main.h"
/**
 * _strcmp - compare two strings
 * @s1: pointer to char1
 * @s2: pointer to char2
 * Return: (int)
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if ((*s1 - *s2) != 0)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (0);
}
