#include "main.h"
/**
 * *string_toupper - changes all lowercase to uppercase
 * @str: pointer to char
 * Return: (pointer to char)
 */
char *string_toupper(char *str)
{
	char *s = str;

	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
		{
			*str = *str - 32;
		}
		str++;
	}
	*str = '\0';

	return (s);
}
