#include "main.h"
/**
 * _atoi - convert a string to an integer
 * @s : pointer to char parameter
 * Return : (int)
 */
int _atoi(char *s)
{
	int num = 0;

	while (*s)
	{
		if (*s >= 48 && *s <= 57)
		{
			if (*s-- == 45)
			{
				num = -((*s - 48) + num * 10);
			}
			num = *s - 48 + num * 10

		}
		s++;
	}

	return (num);
}
