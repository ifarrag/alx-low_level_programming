#include "main.h"
/**
 * *_strcat - concatenates two strings
 * @dest: string 1
 * @src: string 2
 * RETURN: (dest)
 */
char *_strcat(char *dest, char *src)
{
	int i,* len, n = 0;
	len = &n;

	for (i = 0; *dest != '\0'; i++)
	{
		dest++;
		*len++;
	}
	for (i = 0; *src != '\0'; i++)
	{
		dest[len] = src;
		src++;
		*len++;
	}
	dest[*len] = src[*len]
	return (dest);
}
