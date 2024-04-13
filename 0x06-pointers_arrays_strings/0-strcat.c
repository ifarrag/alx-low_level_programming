#include "main.h"
/**
 * *_strcat - Concatenates two strings
 * @dest: pointer to char
 * @src: pointer to char
 * Return: (dest)
 */
char *_strcat(char *dest, char *src)
{
	int d = 0, s = 0;

	while (*dest != '\0')
	{
		dest++;
		d++;
	}
	while (*src != '\0')
	{
		dest = src;
		dest++;
		src++;
		d++;
		s++;
	}

	dest = dest - d;
	src = src - s;
	return (dest);
}
