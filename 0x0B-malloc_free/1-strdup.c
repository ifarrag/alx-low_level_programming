#include <stdlib.h>
#include <string.h>
/**
 * _strdup - copy the string given
 * @str: String to duplicate
 * Return: pointer to duplicated str
 *
 */
char *_strdup(char *str)
{
	unsigned int i;
	char *str_d;

	if (str == 0)
		return ('\0');
	str_d = malloc(sizeof(char) * strlen(str) + sizeof(char));
	if (!str_d)
		return ('\0');

	for (i = 0; i <= strlen(str); i++)
	{
		str_d[i] = str[i];
	}
	return (str_d);
}
