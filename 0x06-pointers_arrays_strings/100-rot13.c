#include "main.h"
/**
 * *rot13 - encodes a string using rot13
 * @str: pointer to chars
 * Return: (s)
 */
char *rot13(char *str)
{
	short int sign = 1;
	char *s = str;

	while (*str)
	{
		while ((*str >= 48 && *str <= 57) || (*str >= 65 && *str <= 122))
		{
			if ((*str >= 'n' && *str <= 'z') || (*str >= 'N' && *str <= 'Z'))
				sign = -1;
			*str = *str + (13 * sign);
		}
		sign = 1;

		str++;
	}

	return (s);
}
