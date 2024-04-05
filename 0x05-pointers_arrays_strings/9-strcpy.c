#include "main.h"
/**
 * *_strcpy - copy string
 * @dest: past here
 * @src: copy from here
 * Return: (dest)
 */
char *_strcpy(char *dest, char *src)
{
	int len = 0, i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
		len++;
	}
	dest[len] = src[len];

	return dest;
}
