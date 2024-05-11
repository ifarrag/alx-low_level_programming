#include <stdlib.h>
#include <string.h>
/**
 * _strdup - copy the string given
 * @str: String to duplicate
 * Return: pointer to duplicated str
 */
char *_strdup(char *str)
{
	unsigned int i;
	char *str_d = '\0';

	str_d = malloc(strlen(str) + 1);
	if (*str_d == '\0' || *str == 0)
		return ('\0');
	for (i = 0; i <= strlen(str); i++)
	{
		str_d[i] = str;
		str++;
	}
	return (str_d);
}
