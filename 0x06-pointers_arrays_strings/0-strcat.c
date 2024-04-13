#include "main.h"
/**
 * *_strcat - Concatenates two strings
 * @dest: pointer to char
 * @src: pointer to char
 * Return: (dest)
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int *d;

	while (*dest != '\0')
	{
		dest++;
		i++;
	}
	while (*src != '\0')
	{
		dest = src;
		dest++;
		src++;
		i++;
	}
	d = dest - i;
	return (d);
