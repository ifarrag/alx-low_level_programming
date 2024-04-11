#include "main.h"
/**
 * _atoi - convert a string to an integer
 * @s: pointer to char parameter
 * Return: (num)
 */
int _atoi(char *s)
{
	int num = 0, i = 1, a = 0;

	while (*s)
	{
		if (*s == 45)
			i = -i;

		if (*s >= 48 && *s <= 57)
		{
			a = *s - 48;
			num = (num + a) * i;
			i = 10;
		}

	s++;
	}

	return (num);
}
