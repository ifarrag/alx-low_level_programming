#include "main.h"
/**
 * *_strncat - concatenates two strings
 * @dest: pointer to char
 * @src: pointer to char
 * @n: n bytes from src
 * Return: (dest)
 */
char *_strncat(char *dest, char *src, int n)
{
	int d = 0, s = 0;

	while (*dest != '\0')
	{
		dest++;
		d++;
	}
	while (s < n)
	{
		*dest = *src;
		dest++;
		src++;
		d++;
		s++;
	}

	*dest = '\0';
	dest = dest - d;
	src = src - s;

	return (dest);
}
