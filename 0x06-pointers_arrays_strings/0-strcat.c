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

	for (i = 0; *dest != '\0'; i++)
	{
		dest++;
		n++;
	}
	for (i = 0; *src != '\0'; i++)
	{
		dest[n] = src[i];
		n++;  
	}

	dest[n] = '\0';
	return (dest);
}
