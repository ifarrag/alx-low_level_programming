#include "main.h"
/**
 * *leet - not for the elite
 * @str: pointer to char
 * Return: (pointer to char)
 */
char *leet(char *str)
{
	int *s = str, i = 0;
	char *letter = "aAeEoOtTlL";
	char *num = "4433007711";

	while (*str)
	{
		while (letter[i] != '\0')
		{
			if (*str == *letter)
				letter[i] = num[i];
			i++;
		}
		str++;
	}
	*str = '\0';

	return (s);
}
