#include "main.h"
/**
 * _atoi - convert a string to an integer
 * @s: pointer to char parameter
 * Return: (num)
 */
int _atoi(char *s)
{
	int num = 0, i = 0;
	int *_num = &num;

	while (*s)
	{
		if (*s >= 48 && *s <= 57)
		{
			if (*s-- == 45 && *(s - 2) == 43)
			{
				*_num = -((*s - 48) + *_num * (i * 10));
			}

			else
			{
				*_num = (*s - 48) + *_num * (i * 10);
			}
			i = 1;
		}

		s++;
	}

	return (*_num);
}
