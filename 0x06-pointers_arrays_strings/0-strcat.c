#include "main.h"
/**
 * *_strcat - concatenates two strings
 * @dest: string 1
 * @src: string 2
 * Return: (dest)
 */
char *_strcat(char *dest, char *src)
{
	int i,* len, n = 0;
	len = &n;

	for (i = 0; *dest != '\0'; i++)
	{
		dest++;
		n++;
		len++;
	}
	for (i = 0; *src != '\0'; i++)
	{
		dest[*len] = src[i];
		src++;
		*len++;
		len++;
	}
	dest[*len] = src;
	return (dest);
}
