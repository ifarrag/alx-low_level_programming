#include "main.h"
/**
 * *cap_string - capitalizes all words
 * @str: pointer to char
 * Return: (pointer to char)
 */
char *cap_string(char *str)
{
	char *s = str;
	char sep[] = "\n\t ,;.!?\"(){}";

	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
		{
			while (*sep)
			{
				if (*(str - 1) == *sep)
					*str = *str - 32;
				sep++;
			}
		}

		str++;
	}
	*str = '\0';

	return (s);
}
