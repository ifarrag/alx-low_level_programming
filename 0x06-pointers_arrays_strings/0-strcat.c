#include "main.h"
/**
 * *_strcat - Concatenates two strings
 * @dest: pointer to char
 * @src: pointer to char
 * Return: (dest)
 */
char *_strcat(char *dest, char *src)
{
	int d = 1, s = 1;
	char *_d;

	while (*dest != '\0')
	{
		dest++;
		d++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		d++;
		s++;
	}

	dest = '\0';
	src = src - s;
	_d = dest - d;
	return (_d);
}
