#include "main.h"
/**
 * _atoi - convert a string to an integer
 * @s : pointer to char parameter
 * Return : (int)
 */
int _atoi(char *s)
{
	int num = 0, i = 0;

	while (*s)
	{
		if (*s >= 48 && *s <= 57)
		{
			if (*s-- == 45 && *(s - 2) == 43)
			{
				num = -((*s - 48) + num * (i * 10));
			}

			else
			{
				num = (*s - 48) + num *(i * 10);
			}
			i = 1;
		}

		s++;
	}

	return (num);
}
