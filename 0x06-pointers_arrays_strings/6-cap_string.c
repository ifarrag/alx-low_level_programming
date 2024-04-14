#include "main.h"
/**
 * *cap_string - capitalizes all words
 * @str: pointer to char
 * Return: (pointer to char)
 */
char *cap_string(char *str)
{
	int i = 0;
	char *s = str;
	char sep[] = "\n\t ,;.!?\"(){}";

	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
		{
			i = 0;
			while (sep[i] == '\0')
			{
				if (*(str - 1) == sep[i])
					*str = *str - 32;
				i++;
			}
		}

		str++;
	}
	*str = '\0';

	return (s);
}
