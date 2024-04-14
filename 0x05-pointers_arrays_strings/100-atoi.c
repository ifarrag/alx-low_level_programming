#include "main.h"
/**
 * _atoi - convert a string to an integer
 * @s: pointer to char parameter
 * Return: (num)
 */
int _atoi(char *s)
{
	int a = 0;
	short int i = 1;

	while (*s)
	{
		if (*s == 45)
			i = -i;

		if (*s >= 48 && *s <= 57)
		{
			a = (*s - 48) + (a * i);
			i = 10;
		}

	s++;
	}
	return (a);
}
