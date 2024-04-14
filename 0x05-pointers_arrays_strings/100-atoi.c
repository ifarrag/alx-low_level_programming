#include "main.h"
/**
 * _atoi - convert a string to an integer
 * @s: pointer to char parameter
 * Return: (num)
 */
int _atoi(char *s)
{
	unsigned int a = 0;
	short int i = 1, ten = 0;

	while (*s)
	{
		if (*s == 45)
			i = -i;

		if (*s >= 48 && *s <= 57)
		{
			a = (*s - 48) + (a * ten);
			ten = 10;
		}
		while (*s == ';')
		{
			break;
		}

	s++;
	}

	if (i == 1)
		return (a);
	else
		return (-a);
}
