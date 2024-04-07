#include "main.h"
/**
 * *_strcat - concatenates two strings
 * @dest: string 1
 * @src: string 2
 * Return: (dest)
 */
char *_strcat(char *dest, char *src)
{
	int *len;
	int i, n = 0;

	len = &n;

	for (i = 0; *dest != '\0'; i++)
	{
		dest++;
		(*len)++;
	}
	for (i = 0; *src != '\0'; i++)
	{
		dest[n] = *src;
		src++;
		(*len)++;
	}

	dest[n] = '\0';
	return (dest);
}
