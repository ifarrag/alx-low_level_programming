#include <stdlib.h>
#include <string.h>
/**
 * str_concat - concate two strings
 * @s1: string one
 * @s2: string two
 * Return: Pointer
 *
 */
char *str_concat(char *s1, char *s2)
{
	char *str_s;
	unsigned long int i;

	if (s1 == '\0')
		*s1 = '';
	if (s2 == '\0')
		*s2 = '';
	str_s = malloc(sizeof(char) * (strlen(s1) + strlen(s2)) + sizeof(char));
	if (!str_s)
		return ('\0');
	for (i = 0; i < strlen(s1); i++)
	{
		str_s[i] = s1[i];
	}
	for (; i <= (strlen(s1) + strlen(s2)); i++)
	{
		str_s[i] = *s2;
		s2++;
	}
	return (str_s);
}
